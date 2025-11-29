#include "script_component.hpp"
/*
 * Author: JasperRab
 * Atribution loaded.
 *
 * Arguments:
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call etr_ranks_3den_fnc_attributeLoad
 *
 * Public: No
 */
 
#pragma hemtt ignore_variables ["_value"]

private _ctrlCombo = _this controlsGroupCtrl 98100;

if (isNil "_value") then {
    _value = "default_faction";
};

TRACE_1("attributeLoad",_value);

private _cfgValues = (configFile >> "etr_ranks_insignias"); 

if (isClass _cfgValues) then {
    {
        // Check if rank is replaced.
        if (isText (_x >> "replace")) then {
            if (_value isEqualTo (configName _x)) then {_value = (getText (_x >> "replace"))};
        } else {
            _lbAdd = _ctrlCombo lbAdd getText (_x >> 'name');
            _ctrlCombo lbSetData [_lbadd, configName _x];
        };
    } forEach configProperties [_cfgValues,'isclass _x'];
};

// Sort the listbox.
lbSort _ctrlCombo;

for '_i' from 0 to (lbSize _ctrlCombo - 1) do {
    if (_value isEqualTo (_ctrlCombo lbData _i)) exitWith {
        _ctrlCombo lbSetCurSel _i;
    };
};

nil
