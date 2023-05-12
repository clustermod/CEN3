#include "script_component.hpp"
/*
 * Author: Eric
 * Replace an item in unit's inventory
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Item to Replace <STRING>
 * 2: Item to replace With <STRING>
 *
 * Return Value:
 * Return Name <TYPE>
 *
 * Example:
 * [player, _notepadBase, _notepadUnique] call cen_notepad_fnc_replaceGear
 *
 * Public: Yes
 */

params["_unit", "_oldItem", "_newItem"];

_oldItem = toLower _oldItem;
_newItem = toLower _newItem;

private _uniform = uniformContainer _unit;
private _uniforCmargo = ((getItemCargo _uniform) select 0) apply {toLower _x};
if (!isNull _uniform && {_oldItem in _uniforCmargo}) exitWith {
    _unit removeItem _oldItem;
    _uniform addItemCargoGlobal [_newItem, 1]; // circumvent limit
};

private _vest = vestContainer _unit;
private _vestCargo = ((getitemCargo _vest) select 0) apply {toLower _x};
if (!isNull _vest && {_oldItem in _vestCargo}) exitWith {
    _unit removeItem _oldItem;
    _vest addItemCargoGlobal [_newItem, 1]; // circumvent limit
};

private _backpack = backpackContainer _unit;
private _backpackCargo = ((getItemCargo _backpack) select 0) apply {toLower _x};
if (!isNull _backpack && {_oldItem in _backpackCargo}) exitWith {
    _unit removeItem _oldItem;
    _backpack addItemCargoGlobal [_newItem, 1]; // circumvent limit
};

private _assignedItems = (assignedItems _unit) apply {toLower _x};
if (_oldItem in _assignedItems) then {
    _unit unassignItem _oldItem;
};

private _weapons = (weapons _unit) apply {toLower _x};
if (_oldItem in _weapons) exitWith {
    _unit removeWeapon _oldItem;
    _unit addWeapon _newItem;
};

_unit removeItem _oldItem;
if (_unit canAdd _newItem) then {
    _unit addItem _newItem;
} else {
    if (!isNull _uniform) exitWith { _uniform addItemCargoGlobal [_newItem, 1];};
    if (!isNull _vest) exitWith { _vest addItemCargoGlobal [_newItem, 1];};
    if (!isNull _backpack) exitWith { _backpack addItemCargoGlobal [_newItem, 1];};
};
