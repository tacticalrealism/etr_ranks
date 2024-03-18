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
		_lbAdd = _ctrlCombo lbadd gettext (_x >> 'name');
		_ctrlCombo lbsetdata [_lbadd, configName _x];
	} foreach configproperties [_cfgValues,'isclass _x'];
};

for '_i' from 0 to (lbsize _ctrlCombo - 1) do {
	if (_value isEqualTo (_ctrlCombo lbdata _i)) exitwith {
		_ctrlCombo lbsetcursel _i;
	};
};

nil