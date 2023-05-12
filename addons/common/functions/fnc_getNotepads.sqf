#include "script_component.hpp"
/*
 * Author: Eric
 * Returns an array of all CE: Notepad items in a unit's inventory
 * 
 * Arguments:
 * 0: Unit <OBJECT>
 * 
 * Return Value:
 * CE:N Items <ARRAY>
 * 
 * Example:
 * [CEN_player] call cen_common_fnc_getNotepads
 * 
 * Public: Yes
 */
params["_unit"];

if (isNull _unit) exitWith {[]};

private _gear = (getItemCargo (uniformContainer _unit)) select 0;
_gear append ((getItemCargo (vestContainer _unit)) select 0);
_gear append ((getItemCargo (backpackContainer _unit)) select 0);

_gear = _gear select {(_x select [0,3]) == QUOTE(PREFIX)};

_gear
