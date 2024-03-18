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
 * [] call etr_ranks_3den_fnc_attributeLoadUnit
 *
 * Public: No
 */

private _ctrlCombo = _this controlsGroupCtrl 98101;

if (isNil "_value") then {
	_value = ["default_faction", "default_rank"];
};

_value params ["_faction", "_rank"];

TRACE_2("attributeLoadUnit",_faction,_rank);

private _cfgValues = (configFile >> "etr_ranks_insignias" >> _faction);

if (isclass _cfgValues) then {
	{
		_lbAdd = _ctrlCombo lbadd gettext (_x >> 'name');
		_ctrlCombo lbsetdata [_lbadd, configName _x];
	} foreach configproperties [_cfgValues,'isclass _x'];
};

for '_i' from 0 to (lbsize _ctrlCombo - 1) do {
	if (_rank isEqualTo (_ctrlCombo lbdata _i)) exitwith {
		_ctrlCombo lbsetcursel _i;
	};
};

nil