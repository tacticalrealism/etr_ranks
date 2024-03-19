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
 * [] call etr_ranks_3den_fnc_onLBSelChangedFaction
 *
 * Public: No
 */

_this spawn {
	params ["_control", "_value"];

	private _data = _control lbData _value;
	TRACE_2("onLBSelChangedFaction",_value,_data);

	private _display = ctrlParent _control;
	private _iconDisplay = _display displayCtrl 98101;

	private _insigniaArray = configProperties [(configFile >> "etr_ranks_insignias" >> _data), "isClass _x"];

	TRACE_1("insigniaArray",_insigniaArray);

	// First clear the list.
	lbClear _iconDisplay;

	// Then add the items.
	{
		_row = _iconDisplay lbadd (getText (_x >> "name"));
		_iconDisplay lbSetData [_row, configName _x];
		_iconDisplay lbSetValue [_row, getNumber (_x >> "rank")];
		_iconDisplay lbSetPicture [_row, getText (_x >> "icon")];
	} forEach _insigniaArray;

	// Select the first (default) one.
	//_iconDisplay lbSetCurSel 0;
};

nil