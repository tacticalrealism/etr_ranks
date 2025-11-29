#include "script_component.hpp"
/*
 * Author: JasperRab
 * Initializes the units rank
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

(_unit getVariable ["etr_ranks_insigniaIcon", ["default_faction","default_rank"]]) params ["_faction", "_rank"];

// Set rank icon.
if ((GVAR(assignSystemType) > 0) && {(isPlayer _unit)}) then {
    // Get rank info from systemtype.
    private _rankInfo = [getPlayerUID _unit, _unit] call FUNC(getRankInfo);
    // Set rank info.
    _unit setVariable ["etr_ranks_insigniaIcon", _rankInfo, true];
    // Set icon.
    [_unit, _rankInfo] call FUNC(setIcon);
} else {
    [_unit] call FUNC(setIcon);
};