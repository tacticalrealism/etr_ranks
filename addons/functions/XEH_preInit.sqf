#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

[
    QGVAR(enableUID), "CHECKBOX",
    ["Enable UID system", "Enable the UID system."],
    "ETR Enhanced Rank",
    false,
    2,
    {},
    true
] call CBA_fnc_addSetting;

[
    QGVAR(rankSize), "SLIDER",
    ["Rank size", "Additional rank size slider."],
    "ETR Enhanced Rank",
    [0.75, 3, 1, 0, true],
    0
] call CBA_fnc_addSetting;

// Server stuff.
if (isServer) then {
    ["CAManBase", "initPost", FUNC(init), true, [], true] call CBA_fnc_addClassEventHandler;
};


ADDON = true;
