#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

[
    QGVAR(rankSize), "SLIDER",
    ["Rank size", "Additional rank size slider."],
    ["ETR Enhanced Ranks", "General"],
    [0.75, 3, 1, 0, true],
    2
] call CBA_fnc_addSetting;

[
    QGVAR(defaultRankInfo), "EDITBOX",
    ["Default rank info", "Default values used for rank info, only for players."],
    ["ETR Enhanced Ranks", "General"],
    '["default_faction","default_rank"]',
    0,
    {},
    true
] call CBA_fnc_addSetting;

[
    QGVAR(uidSystem), "LIST",
    ["UID system", "UID system selection."],
    ["ETR Enhanced Ranks", "General"],
    [[0, 1, 2], ["Disabled", "Config", "CBA Settings"], 0],
    0,
    {},
    true
] call CBA_fnc_addSetting;

[
    QGVARMAIN(uidSystem_amount), "EDITBOX",
    ["UID settings amount", "How many different ranks should be editable via CBA settings? Requires a reopen of the mission to take effect."],
    ["ETR Enhanced Ranks", "UID Settings"],
    "10",
    0,
    {},
    true
] call CBA_fnc_addSetting;

for "_i" from 1 to (parseNumber GVARMAIN(uidSystem_amount)) do {
    [
        format[QGVARMAIN(uidSystem_rank_%1),_i], "EDITBOX",
        [format["%1 - Rank",_i], ""],
        ["ETR Enhanced Ranks", "UID Settings"],
        '["default_faction","default_rank"]',
        0,
        {},
        false
    ] call CBA_fnc_addSetting;

    [
        format[QGVARMAIN(uidSystem_uids_%1),_i], "EDITBOX",
        [format["%1 - UIDs",_i], ""],
        ["ETR Enhanced Ranks", "UID Settings"],
        '["uid1","uid2"]',
        0,
        {},
        false
    ] call CBA_fnc_addSetting;
};


// Run init function to handle icon/faction stuff.
["CAManBase", "initPost", LINKFUNC(init), true, [], true] call CBA_fnc_addClassEventHandler;

ADDON = true;
