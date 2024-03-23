#include "..\script_component.hpp"
/*
 * Author: commy2, esteldunedain, Drift_91, JasperRab
 * Draw the nametag and rank icon.
 *
 * Arguments:
 * 0: Unit (Player) <OBJECT>
 * 1: Target <OBJECT>
 * 2: Alpha <NUMBER>
 * 4: Height offset <NUMBER>
 * 5: Draw name <BOOL>
 * 5: Draw rank <BOOL>
 * 6: Draw soundwave <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [ACE_player, bob, 0.5, height, true, true, true] call ace_nametags_fnc_drawNameTagIcon
 *
 * Public: No
 */

//TRACE_1("drawName:",_this);

params ["", "_target", "", "_heightOffset"];

_fnc_parameters = {
    params ["_player", "_target", "_alpha", "_heightOffset", "_drawName", "_drawRank", "_drawSoundwave"];

    //Set Icon:
    private _targetIcon = _target getVariable ACE_QGVAR(nametags,rankIcon);

    private _icon = switch true do {
        case _drawSoundwave: {
            format ["\z\ace\addons\nametags\UI\soundwave%1.paa", floor random 10]
        };

        case !_drawRank: {""};
        case !isNil "_targetIcon": {_targetIcon};
        case (rank _target == ""): {""};

        default {
            private _targetFaction = _target getVariable [ACE_QGVAR(nametags,faction), faction _target];
            private _customRankIcons = ACE_GVAR(nametags,factionRanks) getVariable _targetFaction;

            if (!isNil "_customRankIcons") then {
                _customRankIcons param [ALL_RANKS find rank _target, ""] // return
            } else {
                // default rank icons
                format ["\A3\Ui_f\data\GUI\Cfg\Ranks\%1_gs.paa", rank _target] // return
            };
        };
    };

    //Set Text:
    private _name = if (_drawName) then {
        [_target, true, true] call ACE_FUNC(common,getName)
    } else {
        ""
    };

    //Set Color:
    private _color = [1, 1, 1, _alpha];
    if ((group _target) != (group _player)) then {
        _color = +ACE_GVAR(nametags,defaultNametagColor); //Make a copy, then multiply both alpha values (allows client to decrease alpha in settings)
    } else {
        _color = +([
            ACE_GVAR(nametags,nametagColorMain),
            ACE_GVAR(nametags,nametagColorRed),
            ACE_GVAR(nametags,nametagColorGreen),
            ACE_GVAR(nametags,nametagColorBlue),
            ACE_GVAR(nametags,nametagColorYellow)
        ] select (
            (["MAIN", "RED", "GREEN", "BLUE", "YELLOW"] find ([assignedTeam _target] param [0, "MAIN"])) max 0
        ));
    };
    _color set [3, (_color select 3) * _alpha];

    private _scale = [0.333, 0.5, 0.666, 0.83333, 1] select ACE_GVAR(nametags,tagSize);
    private _rankScale = GVAR(rankSize);

    //TRACE_1("rankScale",_rankScale);

    (getTextureInfo _icon) params ["_sizeW", "_sizeH"];
    private _r = [_sizeW, _sizeH] call FUNC(gcd);

    private _scaleW = _sizeW/_r;
    private _scaleH = _sizeH/_r;

    //TRACE_4("",_icon,_r,_scaleW,_scaleH);

    [
        _icon,
        _color,
        [],
        _scaleW*_scale*_rankScale,
        _scaleH*_scale*_rankScale,
        0,
        _name,
        2,
        (0.05 * _scale),
        "RobotoCondensed"
    ]
};

private _parameters = [_this, _fnc_parameters, _target, ACE_QGVAR(nametags,drawParameters), 0.1] call ACE_FUNC(common,cachedCall);
_parameters set [2, _target modelToWorldVisual ((_target selectionPosition "pilot") vectorAdd [0,0,(_heightOffset + .3)])];


drawIcon3D _parameters;