#include "script_component.hpp"
/*
 * Author: JasperRab
 * Initializes the unit with a rank, should only be called once.
 * Should be run on Server.
 *
 * Arguments:
 * 0: Objects <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [bob] call etr_ranks_functions_fnc_init
 *
 * Public: No
 */

params [["_unit", objNull]];

// Only run for local units.
if (!local _unit) exitWith {};

(_unit getVariable ["etr_ranks_insigniaIcon", ["default_faction","default_rank"]]) params ["_faction", "_rank"];

// Set rank icon.
if ((GVAR(uidSystem) > 0) && {(isPlayer _unit)}) then {
    // Get rank info from uid.
    private _rankInfo = [getPlayerUID _unit] call FUNC(checkUID);
    // Set rank info.
    _unit setVariable ["etr_ranks_insigniaIcon", _rankInfo, true];
    // Set icon.
    [_unit, _rankInfo] call FUNC(setIcon);
} else {
    /*if (!isPlayer _unit) then {
        // If AI check if units faction is not set, if this is true use the groupsleaders faction.
        if (_rank isEqualTo "default_rank") then {
            if ((_faction isEqualTo "default_faction") && {_unit isNotEqualTo (leader _unit)}) then {
                _unit setVariable ["etr_ranks_insigniaIcon", [((leader _unit) getVariable ["etr_ranks_insigniaIcon", ["default_faction","default_rank"]])#0, "default_rank"], true];
            };
        };
    };*/
    [_unit] call FUNC(setIcon);
};

// Add faction data, run on server.
[getText ((configOf _unit) >> 'faction'), _faction] remoteExec [QFUNC(setFaction), 2];
