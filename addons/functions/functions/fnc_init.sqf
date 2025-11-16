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

private _handle = [{
    params ["_unit"];

    // Only run for local units.
    if (!local _unit) exitWith {};

    (_unit getVariable ["etr_ranks_insigniaIcon", ["default_faction","default_rank"]]) params ["_faction", "_rank"];

    // Set rank icon.
    if ((GVAR(assignSystemType) > 0) && {(isPlayer _unit)}) then {
        // Get rank info from uid.
        private _rankInfo = [getPlayerUID _unit, _unit] call FUNC(getRankInfo);
        // Set rank info.
        _unit setVariable ["etr_ranks_insigniaIcon", _rankInfo, true];
        // Set icon.
        [_unit, _rankInfo] call FUNC(setIcon);
        // If unit is now player set higher pfh time to save resources
        if ((_unit getVariable ["etr_ranks_unit_pfh_time", 30]) != 300) then {
            _unit setVariable ["etr_ranks_unit_pfh_time", 300, true];
        };
    } else {
        [_unit] call FUNC(setIcon);
    };

    // Add faction data, run on server.
    [getText ((configOf _unit) >> 'faction'), _faction] remoteExec [QFUNC(setFaction), 2];
},(_unit getVariable ["etr_ranks_unit_pfh_time", 30]),_unit] call CBA_fnc_addPerFrameHandler;

_unit setVariable ["etr_ranks_unit_pfh", _handle, true];
