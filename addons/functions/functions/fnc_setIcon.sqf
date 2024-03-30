#include "script_component.hpp"
/*
 * Author: JasperRab
 * Sets units custom rank icon and broadcasts it to all machines.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Rank info <ARRAY>
 *	0: Insignia faction id <STRING>
 *	1: Insignia icon (rank) id <STRING>
 *
 * Return Value:
 * Successful <BOOLEAN>
 *
 * Example:
 * [bob] call etr_ranks_functions_fnc_setIcon // Will use setVariable data.
 * [bob, ["default_faction", "default_rank"]] call etr_ranks_functions_fnc_setIcon
 * [bob, ["ukrainian_ground_forces", "soldat"]] call etr_ranks_functions_fnc_setIcon
 *
 * Public: Yes
 */

params [["_unit", objNull, [objNull]], ["_rankInfo", ["", ""], [[]], 2]];

// Get setVariable data if no rankInfo data is given.
if (_rankInfo isEqualTo ["", ""]) then {
    _rankInfo = _unit getVariable ["etr_ranks_insigniaIcon", ["default_faction", "default_rank"]];
};

_rankInfo params [["_faction","default_faction",[""]], ["_rank","default_rank",[""]]];

// Check if this faction/rank exist.
if !(isClass (configFile >> "etr_ranks_insignias" >> _faction >> _rank)) exitWith {
    WARNING_3("Incorrect inisgnia data given to unit:%1, %2, %3",_unit,_faction,_rank);
    false
};

if (_rank isEqualTo "default_rank") exitWith {
    false
    // Find factions equivalent rank.
    /*private _rankIndex = ALL_RANKS find (rank _unit);

    {
        if ((getNumber (_x >> "rank")) isEqualTo _rankIndex) exitWith {
            _rank = configName _x;
        };
    } forEach ("true" configClasses (configFile >> "etr_ranks_insignias" >> _faction));*/
};

private _rankPath = getText (configFile >> "etr_ranks_insignias" >> _faction >> _rank >> "icon");

// Set and broadcast to all machine + JIP.
_unit setVariable ["ace_nametags_rankIcon", _rankPath, true];

// Debug counter.
#ifdef CMD__DEV_FUNCTIONS
    if (isNil QGVAR(pushedIcons)) then {
        GVAR(pushedIcons) = createHashMap;
    };
    private _amount = GVAR(pushedIcons) getOrDefault [str _unit, 0];
    GVAR(pushedIcons) set [str _unit, _amount+1];
#endif

true
