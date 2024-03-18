#include "script_component.hpp"
/*
 * Author: JasperRab
 * Function wrapper that ensures that the ace_nametags_fnc_setFactionRankIcons function runs for all machines, only once for the same faction types.
 *
 * Arguments:
 * 0: Faction <STRING>
 * 1: Insignia faction <STRING>
 *
 * Return Value:
 * Successful? <BOOLEAN>
 *
 * Example:
 * ["BLU_F", "us_army"] call etr_operation_ranks_fnc_setFaction;
 *
 * Public: Yes
 */

// Don't run in 3DEN.
if is3DEN exitWith {false};

params ["_faction", "_insigniasFaction"];

TRACE_2("setFaction",_faction,_insigniasFaction);

if (isNil QGVAR(pushedRanks)) then {
	GVAR(pushedRanks) = [];
};

private _index = GVAR(pushedRanks) pushBackUnique _faction;

if (_index >= 0) exitWith {
	private _insigniasArray = getArray (configFile >> "etr_ranks_insignias" >> _insigniasFaction >> 'values');
	TRACE_1("setFactionArray",_insigniasArray);
	// This is an new entry, broadcast it to all machines + JIP.
	[_faction, _insigniasArray] remoteExec ["ace_nametags_fnc_setFactionRankIcons", 0, true];

	true
};

false