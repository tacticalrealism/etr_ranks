class ctrlCombo;

class RscPictureKeepAspect;
class RscText;

class Cfg3DEN {
    class Attributes {
        class Toolbox;
        class Controls;
        class Title;
        class Value;

        class GVAR(insignias): Title {
            attributeLoad = QUOTE(_this call FUNC(attributeLoad));
            attributeSave = QUOTE(_this call FUNC(attributeSave));
            class Controls: Controls {
                class Title: Title {};
                class Value: ctrlCombo {
                    idc = 98100;
                    x = "48 * (pixelW * pixelGrid * 0.50)";
                    w = "82 * (pixelW * pixelGrid * 0.50)";
                    h = "5 * (pixelH * pixelGrid * 0.50)";
                    colorTextRight[] = {1,1,1,0.5};
                    colorSelectRight[] = {0,0,0,0.5};
                    onLBSelChanged = QUOTE(_this call FUNC(onLBSelChanged));
                };
            };
        };

        class GVAR(example): Toolbox {
            attributeLoad = "";
            attributeSave = "";
            h = "8 * (pixelH * pixelGrid * 0.50)";
            class controls {
                class Title: Title {
                    h = "8 * (pixelH * pixelGrid * 0.50)";
                };
                class Private: RscPictureKeepAspect {
                    idc=0;
                    text="\a3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
                    x="48 * (pixelW * pixelGrid * 0.50)";
                    w="(82/7) * (pixelW * pixelGrid * 0.50)";	// /7 because 7 pictures are shown.
                    h = "8 * (pixelH * pixelGrid * 	0.50)";
                    tooltip="$STR_Private";
                };
                class Corporal: Private {
                    idc=1;
                    text="\a3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa";
                    x="(48+((82/7)*1)) * (pixelW * pixelGrid * 	0.50)";	// +((82/7)*1)) because it adds the width of 1..7 picture(s).
                    tooltip="$STR_Corporal";
                };
                class Sergeant: Private {
                    idc=2;
                    text="\a3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa";
                    x="(48+((82/7)*2)) * (pixelW * pixelGrid * 	0.50)";
                    tooltip="$STR_Sergeant";
                };
                class Lieutenant: Private {
                    idc=3;
                    text="\a3\Ui_f\data\GUI\Cfg\Ranks\lieutenant_gs.paa";
                    x="(48+((82/7)*3)) * (pixelW * pixelGrid * 	0.50)";
                    tooltip="$STR_Lieutenant";
                };
                class Captain: Private {
                    idc=4;
                    text="\a3\Ui_f\data\GUI\Cfg\Ranks\captain_gs.paa";
                    x="(48+((82/7)*4)) * (pixelW * pixelGrid * 	0.50)";
                    tooltip="$STR_Captain";
                };
                class Major: Private {
                    idc=5;
                    text="\a3\Ui_f\data\GUI\Cfg\Ranks\major_gs.paa";
                    x="(48+((82/7)*5)) * (pixelW * pixelGrid * 	0.50)";
                    tooltip="$STR_Major";
                };
                class Colonel: Private {
                    idc=6;
                    text="\a3\Ui_f\data\GUI\Cfg\Ranks\colonel_gs.paa";
                    x="(48+((82/7)*6)) * (pixelW * pixelGrid * 	0.50)";
                    tooltip="$STR_Colonel";
                };
            };
        };

        class GVAR(insigniaFaction): Title {
            attributeLoad = QUOTE(_this call FUNC(attributeLoad););
            attributeSave = QUOTE(_this call FUNC(attributeSave););
            class Controls: Controls {
                class Title: Title {};
                class Value: ctrlCombo {
                    idc = 98100;
                    x = "48 * (pixelW * pixelGrid * 0.50)";
                    w = "82 * (pixelW * pixelGrid * 0.50)";
                    h = "5 * (pixelH * pixelGrid * 0.50)";
                    colorTextRight[] = {1,1,1,0.5};
                    colorSelectRight[] = {0,0,0,0.5};
                    onLBSelChanged = QUOTE(_this call FUNC(onLBSelChangedFaction););
                };
            };
        };

        class GVAR(insigniaIcon): Title {
            h = "10 * (pixelH * pixelGrid * 0.50)";
            attributeLoad = QUOTE(_this call FUNC(attributeLoadUnit););
            attributeSave = QUOTE(_this call FUNC(attributeSaveUnit););
            class Controls: Controls {
                class Title: Title {
                    h = "10 * (pixelH * pixelGrid * 0.50)";
                };
                class Value: ctrlCombo {
                    idc = 98101;
                    x = "48 * (pixelW * pixelGrid * 0.50)";
                    w = "82 * (pixelW * pixelGrid * 0.50)";
                    h = "10 * (pixelH * pixelGrid * 0.50)";
                    colorTextRight[] = {1,1,1,0.5};
                    colorSelectRight[] = {0,0,0,0.5};
                };
            };
        };
    };

    class Object {
        class State;
        class Controls;

        class AttributeCategories {
            class State {
                class Attributes {
                    class etr_ranks_insigniaFaction {
                        property = "etr_ranks_insigniaFaction";
                        displayName = "Insignia Faction";
                        tooltip = "Which rank insignia faction to use for this unit.";
                        control = QGVAR(insigniaFaction);
                        typeName = "STRING";
                        defaultValue = "default_faction";
                        expression = "";
                        condition = "objectBrain";
                    };

                    class etr_ranks_insigniaIcon {
                        property = "etr_ranks_insigniaIcon";
                        displayName = "Insignia Icon";
                        tooltip = "Which rank insignia icon to use for this unit.";
                        control = QGVAR(insigniaIcon);
                        typeName = "STRING";
                        defaultValue = "default_rank";
                        expression = QUOTE(_this setVariable ARR_2(['%s',_value]););
                        condition = "objectBrain";
                    };
                };
            };
        };
    };
};
