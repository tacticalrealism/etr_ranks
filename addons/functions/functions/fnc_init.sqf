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

if (GVAR(enableUID) && {(isPlayer _unit)}) then {
    private _rankInfo = [_unit] call FUNC(checkUID);
    [_unit, _rankInfo] call FUNC(setIcon);
} else {
    [_unit] call FUNC(setIcon);
};
