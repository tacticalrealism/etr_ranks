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

TRACE_1("params",_rank);

params ["_unit", ["_rankInfo", ["default_faction", "default_rank"]]];

_rankInfo params ["_faction", "_rank"];

if (_rank isEqualTo "default_rank") exitWith {false};

private _rankPath = getText (configFile >> "etr_ranks_insignias" >> _faction >> _rank >> "icon");

// Set and broadcast to all machine + JIP.
_unit setVariable ["ace_nametags_rankIcon", _rankPath, true];

/* // System that also adds them to uniforms, disabled as it's not wanted. Copied from BIS_fnc_setUnitInsignia function.

// --- find insignia index in hidden textures
{
    if (_x == "insignia") exitWith {     
        isNil // --- make it safe in scheduled
        {
            //_unit setVariable ["BIS_fnc_setUnitInsignia_class", [_class, nil] select (_class isEqualTo ""), true];            
            //_unit setObjectMaterialGlobal [_forEachIndex, getText (_cfgInsignia >> "material") call {[_this, DEFAULT_MATERIAL] select (_this isEqualTo "")}];
            _unit setObjectTextureGlobal [_forEachIndex, _rankPath];
        };
    };
} forEach getArray (configFile >> "CfgVehicles" >> getText (configFile >> "CfgWeapons" >> uniform _unit >> "ItemInfo" >> "uniformClass") >> "hiddenSelections");

*/

true