#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

[
    QGVAR(rankSize), "SLIDER",
    ["Rank size", "Additional rank size slider."],
    format ["ACE %1", localize "STR_ACE_NameTags_Module_DisplayName"],
    [0.75, 3, 1, 0, true],
    0
] call CBA_fnc_addSetting;

ADDON = true;
