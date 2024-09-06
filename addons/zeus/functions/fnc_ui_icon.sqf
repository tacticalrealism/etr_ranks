#include "script_component.hpp"
/*
 * Author: <author>
 * Function description
 *
 * Arguments:
 * 0: Icon controls group <CONTROL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [CONTROL] call etr_ranks_zeus_fnc_ui_icon
 *
 * Public: No
 */

params ["_control"];

TRACE_1("",_this);

private _logic = GETMVAR(BIS_fnc_initCuratorAttributes_target,objNull);
private _unit = attachedTo _logic;
private _value = _unit getVariable ["etr_ranks_insigniaIcon", nil];

_control ctrlRemoveAllEventHandlers "SetFocus";

private _ctrlCombo = _control controlsGroupCtrl 98101;

if (isNil "_value") then {
    _value = ["default_faction", "default_rank"];
};

_value params ["_faction", "_rank"];

TRACE_2("onLoadIcon",_faction,_rank);

private _cfgValues = (configFile >> "etr_ranks_insignias" >> _faction);

// First clear the list.
lbClear _ctrlCombo;

// Add items.
if (isClass _cfgValues) then {
    {
        _lbAdd = _ctrlCombo lbAdd getText (_x >> 'name');
        _ctrlCombo lbSetData [_lbadd, configName _x];
        _ctrlCombo lbSetValue [_lbadd, getNumber (_x >> "rank")];
        _ctrlCombo lbSetPicture [_lbadd, getText (_x >> "icon")];
    } forEach configProperties [_cfgValues,'isclass _x'];
};

// Select the current one.
for '_i' from 0 to (lbSize _ctrlCombo - 1) do {
    if (_rank isEqualTo (_ctrlCombo lbData _i)) exitWith {
        _ctrlCombo lbSetCurSel _i;
    };
};

nil