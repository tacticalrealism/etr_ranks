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
    false
] call CBA_fnc_addSetting;

[
    QGVAR(defaultRankInfo), "EDITBOX",
    ["Default rank info", "Default values used for rank info, only for players."],
    ["ETR Enhanced Ranks", "General"],
    '["default_faction","default_rank"]',
    true,
    {},
    true
] call CBA_fnc_addSetting;

[
    QGVAR(assignSystemType), "LIST",
    ["Rank auto assign system", "Disabled: disabled\nUID Config: set via config file\nUID Settings: use player IDs set here in CBA to set rank\nRegex Settings: Search for a matching name in the players username to assign a rank"],
    ["ETR Enhanced Ranks", "General"],
    [[0, 1, 2, 3], ["Disabled", "UID Config", "UID Settings", "Regex Settings"], 0],
    true,
    {},
    true
] call CBA_fnc_addSetting;

[
    QGVARMAIN(uidSystem_amount), "EDITBOX",
    ["UID settings amount", "How many different ranks should be editable via CBA settings? Requires a reopen of the mission to take effect."],
    ["ETR Enhanced Ranks", "UID Settings"],
    "25",
    0,
    {},
    true
] call CBA_fnc_addSetting;

[
    QGVARMAIN(regexSystem_amount), "EDITBOX",
    ["Regex settings amount", "How many different ranks should be editable via CBA settings? Requires a reopen of the mission to take effect."],
    ["ETR Enhanced Ranks", "Regex Settings"],
    "25",
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
        true,
        {},
        false
    ] call CBA_fnc_addSetting;

    [
        format[QGVARMAIN(uidSystem_uids_%1),_i], "EDITBOX",
        [format["%1 - UIDs",_i], ""],
        ["ETR Enhanced Ranks", "UID Settings"],
        '["uid1","uid2"]',
        true,
        {},
        false
    ] call CBA_fnc_addSetting;
};

for "_i" from 1 to (parseNumber GVARMAIN(regexSystem_amount)) do {
    [
        format[QGVARMAIN(regexSystem_rank_%1),_i], "EDITBOX",
        [format["%1 - Rank",_i], ""],
        ["ETR Enhanced Ranks", "Regex Settings"],
        '["default_faction","default_rank"]',
        true,
        {},
        false
    ] call CBA_fnc_addSetting;

    [
        format[QGVARMAIN(regexSystem_regexString_%1),_i], "EDITBOX",
        [format["%1 - Regex to check",_i], ""],
        ["ETR Enhanced Ranks", "Regex Settings"],
        'Pvt.',
        true,
        {},
        false
    ] call CBA_fnc_addSetting;
};

// Run init function to handle icon/faction stuff.
["CAManBase", "initPost", LINKFUNC(init), true, [], true] call CBA_fnc_addClassEventHandler;

ADDON = true;
