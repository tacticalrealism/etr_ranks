#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_common", "A3_Data_F_AoW_Loadorder"};
        author = AUTHOR;
        authors[] = {"JasperRab"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
