#include "script_component.hpp"
/*
 * Author: JasperRab
 * Atribution Saved.
 *
 * Arguments:
 *
 * Return Value:
 * Selected value
 *
 * Example:
 * [] call etr_ranks_3den_fnc_attributeSave
 *
 * Public: No
 */

_ctrlCombo = _this controlsGroupCtrl 98100;

private _value = (_ctrlCombo lbData lbCurSel _ctrlCombo);
TRACE_1("attributeSave",_value);

_value
