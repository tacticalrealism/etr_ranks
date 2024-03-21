class CfgVehicles {
    class Module_F;
    class GVAR(baseModule): Module_F {
        author = AUTHOR;
        functionPriority = 1;
        isGlobal = 0;
        isTriggerActivated = 0;
        scope = 1;
        scopeCurator = 2;
        function = "";
        //class AttributesBase: AttributesBase {};
        //class ModuleDescription: ModuleDescription {};
    };

    class GVAR(enhancedRank): GVAR(baseModule) {
        icon = QPATHTOF(data\IconRankInsignias.paa);
        displayName = "Enhanced Rank";
        category = "ObjectModifiers";
        curatorCanAttach = 1;
        curatorInfoType = QGVAR(RscEnhancedRank);
    };
};