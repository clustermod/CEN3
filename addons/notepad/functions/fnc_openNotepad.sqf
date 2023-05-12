#include "script_component.hpp"
/*
 * Author: Eric
 * Opens a notepad
 * 
 * Arguments:
 * 0: Notepad <STRING>
 * 1: Mode <STRING>
 * 
 * Return Value:
 * None
 * 
 * Example:
 * [] call cen_notepad_fnc_openNotepad
 * 
 * Public: No
 */
params ["_notepad", "_mode"];

private _base = [_notepad] call EFUNC(common,getBaseClass);

switch (_mode) do {
	case "EDIT": {
		private _displayClass = [_notepad] call EFUNC(common,getDisplayClass);
		private _display = findDisplay 46 createDisplay _displayClass;
	};
	case "VIEW": {
		systemChat "Not yet implemented";
	};
	default { WARNING_1("Unknown Mode ",_mode) };
};
