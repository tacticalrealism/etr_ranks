#include "script_component.hpp"
/*
 * Author: JasperRab
 * Check against config data which insignia data should be given to unit.
 * Should really be used on players only, but for debugging/testing it's possible to use AI as well.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: PlayerUID <STRING> (for testing)
 *
 * Return Value:
 * rankInfo <ARRAY>
 *
 * Example:
 * [bob] call etr_ranks_uid_fnc_checkUID
 *
 * Public: No
 */

params [["_unit", objNull], ["_playerUID", ""]];

// Get data from config.
private _uidData = "true" configClasses (configFile >> "etr_ranks_uids");

// If not present, get data from missionConfig.
if (_uidData isEqualTo []) then {
    _uidData = "true" configClasses (missionconfigFile >> "etr_ranks_uids");
};

// If no config present, exit.
if (_uidData isEqualTo []) exitWith {false};

if (_playerUID isEqualTo "") then {
    _playerUID = getPlayerUID _unit;
};
private _faction = "";
private _rank = "";

{
    _faction = configName _x;
    {
        if (_playerUID in (getArray _x)) exitWith {
            _rank = configName _x;
        };
    } forEach (configProperties [_x]);
} forEach _uidData;

// Check if _rank has been set.
if (_rank isEqualTo "") then {
    // Set faction and rank to default values.
    _faction = "default_faction";
    _rank = "default_rank";
};

_unit setVariable ["etr_ranks_insigniaFaction", _faction, true];
_unit setVariable ["etr_ranks_insigniaIcon", [_faction, _rank], true];

[_faction, _rank]
