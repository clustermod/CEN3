#include "script_component.hpp"
/*
 * Author: Eric
 * Monitors player's inventory for notepads to assign a Unique ID
 * 
 * Arguments:
 * None
 * 
 * Return Value:
 * None
 * 
 * Example:
 * [] call cen_notepad_fnc_monitorPFH
 * 
 * Public: No
 */

if (!alive cen_player || side group cen_player == sideLogic || EGVAR(common,arsenalOpen)) exitWith { };

private _notepads = [cen_player] call EFUNC(common,getNotepads);

{
	if (GVAR(requestingNewId)) exitWith { };
	private _notepad = _x;
	private _hasUnique = [_notepad] call EFUNC(common,isBaseClass);
	if (_hasUnique) then {
		GVAR(requestingNewId) = true;

		private _id = [_notepad] call EFUNC(common,getUniqueID);
		if (_id isEqualTo -1) exitWith { };
		private _unique = format ["%1_ID_%2", _notepad, _id];
		[cen_player, _notepad, _unique] call EFUNC(common,replaceGear);
		GVAR(requestingNewId) = false;
	} else {
		/* Verify if notepad is actually unique */
		if ({_x isEqualTo _notepad} count GVAR(uniqueNotepads) > 1) then {
			_base = [_notepad] call EFUNC(common,getBaseClass);

			GVAR(requestingNewId) = true;
			private _id = [_base] call EFUNC(common,getUniqueID);
			if (_id isEqualTo -1) exitWith { };
			private _unique = format ["%1_ID_%2", _base, _id];
			[cen_player, _notepad, _unique] call EFUNC(common,replaceGear);
			GVAR(requestingNewId) = false;
		};
	};
} forEach _notepads;