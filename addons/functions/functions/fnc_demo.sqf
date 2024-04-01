#include "script_component.hpp"
/*
 * Author: JasperRab
 * Demo's all insignia's of given faction on unit. Should be used for testing only.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Faction ID <STRING>
 * 2: Interval <NUMBER>
 * 3: Index <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [bob, "norwegian", 5] call etr_ranks_functions_fnc_demo
 * [this, "uk_army", 3] call etr_ranks_functions_fnc_demo
 *
 * Public: Yes
 */

params ["_unit", "_faction", ["_interval", 5], ["_index", 0]];

TRACE_1("",_this);

private _ranksClasses = "true" configClasses (configFile >> "etr_ranks_insignias" >> _faction);

private _ranks = _ranksClasses apply {configName _x};

// Remove default_rank.
_ranks = _ranks - ["default_rank"];

if (_index > ((count _ranks)-1)) then {
    _index = 0;
};

// Select rank based on index.
private _rank = _ranks select _index;

// Set rank on unit.
private _rankPath = getText (configFile >> "etr_ranks_insignias" >> _faction >> _rank >> "icon");

if (fileExists _rankPath) then {
    _unit setVariable ["ace_nametags_rankIcon",_rankPath,true];
} else {
    
    _unit setVariable ["ace_nametags_rankIcon","\A3\ui_f\data\map\groupicons\waypoint.paa",true];
    ERROR_2("Incorrect icon data for: %1 in faction: %2",_rank,_faction);
    hint (format ["Incorrect icon data for: %1 in faction: %2",_rank,_faction]);
};


// Rerun again after interval.
[LINKFUNC(demo), [_unit,_faction,_interval,_index+1], _interval] call CBA_fnc_waitAndExecute;