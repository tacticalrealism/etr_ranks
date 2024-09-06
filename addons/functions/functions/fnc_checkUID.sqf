#include "script_component.hpp"
/*
 * Author: JasperRab
 * Check against UID system data which insignia data should be given for a specific playerUID.
 * Can be used to test/debug.
 *
 * Arguments:
 * 0: PlayerUID <STRING>
 *
 * Return Value:
 * rankInfo <ARRAY>
 *
 * Example:
 * ["myPlayerUID"] call etr_ranks_functions_fnc_checkUID
 *
 * Public: Yes
 */

params [["_playerUID", ""]];

(parseSimpleArray GVAR(defaultRankInfo)) params [["_faction", "default_faction"], ["_rank", "default_rank"]];

 if (_playerUID isEqualTo "") then {
    _playerUID = getPlayerUID _unit;
};

// Check which UID system is used.
switch (GVAR(UIDSystem)) do {
    case 1: {
        // Config system.

        // Get data from config.
        private _uidData = "true" configClasses (configFile >> "etr_ranks_uids");

        // If not present, get data from missionConfig.
        if (_uidData isEqualTo []) then {
            _uidData = "true" configClasses (missionConfigFile >> "etr_ranks_uids");
        };

        // If no config present, exit.
        if (_uidData isEqualTo []) exitWith {};

        {
            _faction = configName _x;
            {
                if (_playerUID in (getArray _x)) exitWith {
                    _rank = configName _x;
                };
            } forEach (configProperties [_x]);
        } forEach _uidData;

        // Check if _rank has been set.
        if (_rank isEqualTo (parseSimpleArray GVAR(defaultRankInfo))#1) then {
            // Set faction back to default values.
            _faction = (parseSimpleArray GVAR(defaultRankInfo))#0;
        };
    };
    case 2: {
        // CBA settings system.
        
        // Go through all uids.
        for "_i" from 1 to (parseNumber GVARMAIN(uidSystem_amount)) do {
            // Check if playerUID is in this index.
            if (_playerUID in (parseSimpleArray (call compile format[QGVARMAIN(uidSystem_uids_%1),_i]))) exitWith {
                private _rankinfo = (parseSimpleArray (call compile format[QGVARMAIN(uidSystem_rank_%1),_i]));
                _faction = _rankinfo select 0;
                _rank = _rankinfo select 1;
            };
        };
    };
    default {
        // Default fallback.
    };
};

TRACE_2("checkUID",_faction,_rank);

[_faction, _rank]
