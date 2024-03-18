#include "script_component.hpp"
/*
 * Author: <author>
 * Function description
 *
 * Arguments:
 * 0: Factions controls group <CONTROL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [CONTROL] call etr_ranks_zeus_fnc_ui_faction
 *
 * Public: No
 */

params ["_control"];

TRACE_1("",_this);

private _logic = GETMVAR(BIS_fnc_initCuratorAttributes_target,objNull);
private _unit = attachedTo _logic;
private _value = _unit getVariable [QEGVAR(3den,insigniaFaction), nil];

_control ctrlRemoveAllEventHandlers "setFocus";

private _ctrlCombo = _control controlsGroupCtrl 98100;

if (isNil "_value") then {
	diag_log "NIL";
	_value = "default_faction";
};

TRACE_1("onLoadFaction",_value);

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

private _display = ctrlParent _control;
private _ctrlButtonOK = _display displayCtrl 1; // IDC_OK

// Specific onLoad stuff
private _fnc_onUnload = {
    private _logic = GETMVAR(BIS_fnc_initCuratorAttributes_target,objNull);
    if (isNull _logic) exitWith {};

    deleteVehicle _logic;
};

private _fnc_onConfirm = {
	TRACE_1("WORKS",nil);
    params [["_ctrlButtonOK", controlNull, [controlNull]]];

    private _display = ctrlParent _ctrlButtonOK;
    if (isNull _display) exitWith {};

    private _logic = GETMVAR(BIS_fnc_initCuratorAttributes_target,objnull);
    if (isNull _logic) exitWith {};

	private _faction = (_display displayCtrl 98100) lbdata lbCurSel (_display displayCtrl 98100);
    private _icon = (_display displayCtrl 98101) lbdata lbCurSel (_display displayCtrl 98101);
    [attachedTo _logic, [_faction, _icon]] call FUNC(moduleSetRank);
};

_display displayAddEventHandler ["Unload", _fnc_onUnload];
_ctrlButtonOK ctrlAddEventHandler ["ButtonClick", _fnc_onConfirm];

nil