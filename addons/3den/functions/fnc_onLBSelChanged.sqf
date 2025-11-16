#include "script_component.hpp"
/*
 * Author: JasperRab
 * Selection changed in drop-down menu.
 *
 * Arguments:
 * 0: control <CONTROL>
 * 1: value <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call etr_ranks_3den_fnc_onLBSelChanged
 *
 * Public: No
 */

_this spawn {
    params ["_control", "_value"];

    private _data = _control lbData _value;
    TRACE_2("onLBSelChanged",_value,_data);

    private _display = ctrlParent _control;
    private _insigniaArray = getArray (configFile >> "etr_ranks_insignias" >> _data >> "values");

    for "_i" from 0 to 6 do {
        private _ctrl = _display displayCtrl _i;
        _ctrl ctrlSetText (_insigniaArray select _i);
    };
};

nil
