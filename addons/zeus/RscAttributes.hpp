class RscControlsGroup;
class RscControlsGroupNoScrollbars;
class RscText;
class RscListBox;
class RscCombo;
class RscEdit;
class RscXSliderH;
class RscCheckBox;
class RscActivePicture;
class RscMapControl;
class RscPicture;
class ctrlToolbox;
class RscButton;
class ctrlCombo;

class RscDisplayAttributes {
    class Controls {
        class Background;
        class Title;
        class Content: RscControlsGroup {
            class controls;
        };
        class ButtonOK;
        class ButtonCancel;
    };
};

class GVAR(RscEnhancedRank): RscDisplayAttributes {
    onLoad = QUOTE([ARR_3('onLoad',_this,QQGVAR(RscEnhancedRank))] call FUNC(zeusAttributes));
    onUnload = QUOTE([ARR_3('onUnload',_this,QQGVAR(RscEnhancedRank))] call FUNC(zeusAttributes));
    class Controls: Controls {
        class Background: Background {};
        class Title: Title {};
        class Content: Content {
            class Controls {
                class faction: RscControlsGroupNoScrollbars {
                    onSetFocus = QUOTE(_this call FUNC(ui_faction););
                    idc = 86946;
                    x = 0;
                    y = 0;
                    w = QUOTE(W_PART(26));
                    h = QUOTE(H_PART(1.2));
                    class controls {
                        class Label: RscText {
                            idc = -1;
                            displayName = "Insignia Faction";
						    tooltip = "Which rank insignia faction to use for this unit.";
                            x = 0;
                            y = QUOTE(H_PART(0.1));
                            w = QUOTE(W_PART(10));
                            h = QUOTE(H_PART(1));
                            colorBackground[] = {0, 0, 0, 0.5};
                        };
                        class Value: ctrlCombo {
                            idc = 98100;
                            x = QUOTE(W_PART(10.1));
                            y = QUOTE(H_PART(0.1));
                            w = QUOTE(W_PART(15.9));
                            h = QUOTE(H_PART(1));
                            colorTextRight[] = {1,1,1,0.5};
                            colorSelectRight[] = {0,0,0,0.5};
                            onLBSelChanged = QUOTE(_this call FUNC(ui_onLBSelectChangedFaction););
                        };
                    };
                };
                class icon: RscControlsGroupNoScrollbars {
                    onSetFocus = QUOTE(_this call FUNC(ui_icon););
                    idc = 86947;
                    x = 0;
                    y = QUOTE(H_PART(1.4));
                    w = QUOTE(W_PART(26));
                    h = QUOTE(H_PART(2.2));
                    class controls {
                        class Label: RscText {
                            idc = -1;
                            displayName = "Insignia Icon";
						    tooltip = "Which rank insignia icon to use for this unit.";
                            x = 0;
                            y = QUOTE(H_PART(0.1));
                            w = QUOTE(W_PART(10));
                            h = QUOTE(H_PART(2));
                            colorBackground[] = {0, 0, 0, 0.5};
                        };
                        class Value: ctrlCombo {
                            idc = 98101;
                            x = QUOTE(W_PART(10.1));
                            y = QUOTE(H_PART(0.1));
                            w = QUOTE(W_PART(15.9));
                            h = QUOTE(H_PART(2));
                            colorTextRight[] = {1,1,1,0.5};
					        colorSelectRight[] = {0,0,0,0.5};
                        };
                    };
                };
            };
        };
        class ButtonOK: ButtonOK {};
        class ButtonCancel: ButtonCancel {};
    };
};