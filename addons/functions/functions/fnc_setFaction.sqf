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
 * Successfully added, false if it has already been added before <BOOLEAN>
 *
 * Example:
 * ["BLU_F", "us_army"] call etr_ranks_functions_fnc_setFaction;
 *
 * Public: Yes
 */

// Don't run in 3DEN.
if is3DEN exitWith {false};

params ["_faction", "_insigniasFaction"];

if (isNil QGVAR(pushedRanks)) then {
    GVAR(pushedRanks) = [];
};

private _index = GVAR(pushedRanks) pushBackUnique _faction;

// When actually pushed into the array.
if (_index >= 0) exitWith {
    TRACE_2("setFaction",_faction,_insigniasFaction);
    
    private _insigniasArray = getArray (configFile >> "etr_ranks_insignias" >> _insigniasFaction >> 'values');
    TRACE_1("setFactionArray",_insigniasArray);
    // This is an new entry, broadcast it to all machines + JIP.
    [_faction, _insigniasArray] remoteExec ["ace_nametags_fnc_setFactionRankIcons", 0, true];

    true
};

false