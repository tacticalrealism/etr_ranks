#include "script_component.hpp"
/*
 * Author: JasperRab
 * Set's custom rank icon and broadcasts it to all players.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Rank info <ARRAY>
 *	0: Faction <STRING>
 *	1: Unit <STRING>
 *
 * Return Value:
 * Successful? <BOOLEAN>
 *
 * Example:
 * [bob, ["default_faction", "default_rank"]] call etr_ranks_functions_fnc_setIcon
 *
 * Public: Yes
 */

// Don't run in 3DEN.
if is3DEN exitWith {false};

params ["_unit", ["_rank", ["default_faction", "default_rank"]]];

TRACE_1("setIcon",_rank);

_rank params ["_faction", "_rank"];

if (_rank isEqualTo "default_rank") exitWith {false};

private _rankPath = getText (configFile >> "etr_ranks_insignias" >> _faction >> _rank >> "icon");

TRACE_1("setIconPath",_rankPath);

// Set and broadcast to all machine + JIP.
_unit setVariable ["ace_nametags_rankIcon", _rankPath, true];

true