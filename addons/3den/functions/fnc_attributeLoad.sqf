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

private _ctrlCombo = _this controlsGroupCtrl 98100;

if (isNil "_value") then {
    diag_log "NIL";
    _value = "default_faction";
};

TRACE_1("attributeLoad",_value);

private _cfgValues = (configFile >> "etr_ranks_insignias"); 

if (isclass _cfgValues) then {
    {
        // Check if rank is replaced.
        if (isText (_x >> "replace")) then {
            if (_value isEqualTo (configName _x)) then {_value = (getText (_x >> "replace"))};
        } else {
            _lbAdd = _ctrlCombo lbadd getText (_x >> 'name');
            _ctrlCombo lbsetdata [_lbadd, configName _x];
        };
    } foreach configproperties [_cfgValues,'isclass _x'];
};

// Sort the listbox.
lbSort _ctrlCombo;

for '_i' from 0 to (lbsize _ctrlCombo - 1) do {
    if (_value isEqualTo (_ctrlCombo lbdata _i)) exitwith {
        _ctrlCombo lbsetcursel _i;
    };
};

nil