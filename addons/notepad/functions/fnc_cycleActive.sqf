#include "script_component.hpp"
/*
 * Author: Eric
 * Cycles the active notepad
 * 
 * Arguments:
 * None
 * 
 * Return Value:
 * None
 * 
 * Example:
 * [] call cen_notepad_fnc_cycleActive
 * 
 * Public: No
 */

private _notepads = ([cen_player] call EFUNC(common,getNotepads)) select { !([_x] call EFUNC(common,isBaseClass)) };
private _index = _notepads find GVAR(currentNotepad);
private _maxIndex = count _notepads - 1;
private _newIndex = _index + 1;
if (_newIndex > _maxIndex) then {
	_newIndex = 0;
};

private _activeNotepad = _notepads select _newIndex;

systemChat _activeNotepad;

GVAR(currentNotepad) = _activeNotepad;