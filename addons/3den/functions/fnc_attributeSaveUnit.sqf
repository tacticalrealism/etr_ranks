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
 * [] call etr_ranks_3den_fnc_attributeSaveUnit
 *
 * Public: No
 */

_ctrlCombo = _this controlsGroupCtrl 98101;
private _ctrlFaction = (ctrlParent _this) displayCtrl 98100;

private _faction = _ctrlFaction lbData (lbCurSel _ctrlFaction);

private _value = (_ctrlCombo lbData lbCurSel _ctrlCombo);
TRACE_2("attributeSaveUnit",_faction,_value);

[_faction, _value]