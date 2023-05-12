class RscControlsGroupNoScrollbars;
class RscPicture;
class RscEditMulti;
class RscButton;
class RscEdit;

class DOUBLES(PREFIX,RscNotepad) {
	onLoad = QUOTE([ARR_2(_this select 0,QUOTE(QUOTE(DOUBLES(PREFIX,RscNotepad))))]);
    movingEnable = 1;
    enableSimulation = 1;
    idd = -1;

	class Controls {
        class Notebook: RscControlsGroupNoScrollbars {
            idc = 400;
            moving = 1;
            x = QUOTE(safeZoneX + safeZoneW * 0.04375);
            y = QUOTE(safeZoneY + safeZoneH * 0.24888889);
            w = QUOTE(safeZoneW * 0.412);
            h = QUOTE(safeZoneH * safeZoneH * 0.721);

            class Controls {
                class DOUBLES(PREFIX,pen): RscPicture {
                    idc = 410;
                    x = 0;
                    y = 0;
                    w = QUOTE(safeZoneW * 0.4125);
                    h = QUOTE(safeZoneH * 0.72111112);
                    style = QUOTE(ST_PICTURE + ST_KEEP_ASPECT_RATIO);
                    text = QPATHTOF(UI\notebook_pen_ca.paa);
                };

                class DOUBLES(PREFIX,background): DOUBLES(PREFIX,pen) {
                    idc = 411;
                    text = QPATHTOF(UI\notebook_front_cover_ca.paa);
                };

                class DOUBLES(PREFIX,flashlight): DOUBLES(PREFIX,pen) {
                    onLoad = "(_this select 0) ctrlShow false; (_this select 0) ctrlEnable false;";
                    idc = 412;
                    text = QPATHTOF(UI\notebook_front_cover_flashlight_ca.paa);
                    onSetFocus = "ctrlSetFocus ((ctrlParent (_this select 0)) displayCtrl 420)";
                };

                class DOUBLES(PREFIX,input): RscEditMulti {
                    idc = 420;
                    x = 0.386;
                    y = 0.703;
                    w = QUOTE(safeZoneW * 0.095);
                    h = QUOTE(safeZoneH * 0.250);
                    style = QUOTE(ST_MULTI + ST_NO_RECT);
                    colorDisabled[] = {0,0,0,0};
                    colorBorder[] = {0,0,0,0};
                    colorText[] = {0.26,0.26,0.26,1};
                    font = "EtelkaMonospacePro";
                    sizeEx = QUOTE(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.67);
                    //onKeyUp = "[(_this select 0), 16, 21] call ecm_notepad_fnc_onkeyUp";
                };

                class DOUBLES(PREFIX,forward): RscButton {
                    idc = 421;
                    x = 0.624;
                    y = 0.652;
                    w = QUOTE(safeZoneW * 0.025);
                    h = QUOTE(safeZoneH * 0.28);
                    style = ST_CENTER;
                    text = "›";
                    tooltip = "Next page";
                    colorBackground[] = {0,0,0,0};
                    colorBackgroundActive[] = {0,0,0,0};
                    colorBackgroundDisabled[] = {0,0,0,0};
                    colorDisabled[] = {0,0,0,0};
                    colorFocused[] = {0,0,0,0};
                    colorText[] = {0,0,0,0};
                    font = "PuristaMedium";
                    sizeEx = QUOTE(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 4);
                    //onButtonClick = "['changePage', ['next']] call ecm_notepad_fnc_notepad";
                    //onMouseEnter = "if (ctrlEnabled (_this select 0)) then { (_this select 0) ctrlSetTextColor [1,1,1,1] }";
                    //onMouseExit = "if (ctrlEnabled (_this select 0)) then { (_this select 0) ctrlSetTextColor [0,0,0,0] }";
                };

                class DOUBLES(PREFIX,back): DOUBLES(PREFIX,forward) {
                    idc = 422;
                    x = 0.318;
                    y = 0.652;
                    text = "‹";
                    tooltip = "Previous page";
                    //onButtonClick = "['changePage', ['previous']] call ecm_notepad_fnc_notepad";
                    //onMouseEnter = "if (ctrlEnabled (_this select 0)) then { (_this select 0) ctrlSetTextColor [1,1,1,1] }";
                    //onMouseExit = "if (ctrlEnabled (_this select 0)) then { (_this select 0) ctrlSetTextColor [0,0,0,0] }";
                };

                class DOUBLES(PREFIX,eraseAll): RscButton {
                    idc = 423;
                    x = 0.430;
                    y = 0.836;
                    w = QUOTE(safeZoneW * 0.054375);
                    h = QUOTE(safeZoneH * 0.03);
                    style = ST_CENTER;
                    text = "ERASE NOTES";
                    tooltip = "Erases all pages";
                    colorBackground[] = {0,0,0,0.5};
                    colorBackgroundActive[] = {1,0,0,0.5};
                    colorBackgroundDisabled[] = {0,0,0,0};
                    colorDisabled[] = {0,0,0,0};
                    colorFocused[] = {0,0,0,0.5};
                    colorText[] = {1,1,1,1};
                    font = "PuristaMedium";
                    sizeEx = QUOTE(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75);
                    //onButtonClick = "['clearPage', ['all']] call ecm_notepad_fnc_notepad";
                };

                class DOUBLES(PREFIX,gotoConfirm): RscButton {
                    idc = 424;
                    x = 0.430;
                    y = 0.836;
                    w = QUOTE(safeZoneW * 0.054375);
                    h = QUOTE(safeZoneH * 0.03);
                    style = ST_CENTER;
                    text = "CHANGE PAGES";
                    colorBackground[] = {0,0,0,0.5059};
                    colorBackgroundActive[] = {0,0,0,0.5};
                    colorBackgroundDisabled[] = {0,0,0,0};
                    colorDisabled[] = {0,0,0,0};
                    colorFocused[] = {0,0,0,0.5};
                    colorText[] = {1,1,1,1};
                    font = "PuristaMedium";
                    sizeEx = QUOTE(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75);
                };

                class DOUBLES(PREFIX,clearCurrent): RscButton {
                    idc = 425;
                    x = 0.246;
                    y = 0.672;
                    w = QUOTE(safeZoneW * 0.0116);
                    h = QUOTE(safeZoneH * 0.02);
                    style = ST_CENTER;
                    text = "✕";
                    tooltip = "Clear page";
                    colorBackground[] = {0,0,0,0};
                    colorBackgroundActive[] = {1,0,0,0.5};
                    colorBackgroundDisabled[] = {0,0,0,0};
                    colorDisabled[] = {0,0,0,0};
                    colorFocused[] = {0,0,0,0};
                    colorText[] = {1,1,1,1};
                    font = "PuristaMedium";
                    sizeEx = QUOTE(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75);
                    //onButtonClick = "['clearPage', ['current']] call ecm_notepad_fnc_notepad";
                };

                class DOUBLES(PREFIX,goto): RscEdit {
                    idc = 426;
                    x = 0.436;
                    y = 0.52;
                    w = QUOTE(safeZoneW * 0.054375);
                    h = QUOTE(safeZoneH * 0.05);
                    style = QUOTE(ST_CENTER + ST_NO_RECT);
                    text = "1";
                    tooltip = "Change page";
                    colorDisabled[] = {0,0,0,0};
                    colorBackgroundDisabled[] = {0,0,0,0};
                    colorBorder[] = {0,0,0,0};
                    colorText[] = {0.26,0.26,0.26,1};
                    font = "EtelkaMonospacePro";
                    sizeEx = QUOTE(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
                    //onSetFocus = "(_this select 0) ctrlSetText ''";
                    //onKillFocus = "(_this select 0) ctrlSetText str (uiNamespace getVariable [format['ecm_notepad_%1_page', (uiNamespace getVariable 'ecm_notepad_active')], 0])";
                    //onKeyUp = "(_this select 0) spawn { _val = ctrlText _this; sleep 0.6; if ((ctrlText _this) == _val) then { ['changePage', [parseNumber(_val)]] call ecm_notepad_fnc_notepad } }";
                };
            };
        };
	};
};