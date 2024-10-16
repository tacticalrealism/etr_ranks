#include "script_component.hpp"
/*
 * Author: JasperRab
 * Module function to set faction rank insignias of connected unit.
 *
 * Arguments:
 * 0: logic <object>
 * 1: units <array of objects>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call etr_ranks_zeus_fnc_moduleSetRank
 *
 * Public: No
 */

params ["_unit","_rank"];

_unit setVariable ["etr_ranks_insigniaIcon", _rank, true];
[_unit, _rank] call EFUNC(functions,setIcon);

nil