#include "script_component.hpp"
/*
 * Author: Eric
 * Get's a Unique ID for an item
 * 
 * Arguments:
 * 0: Item <STRING>
 * 
 * Return Value:
 * Unique ID <NUMBER>
 * 
 * Example:
 * [] call cen_common_fnc_getUniqueID
 * 
 * Public: No
 */
params ["_item"];

private _hasUnique = [_item] call FUNC(isBaseClass);
if (!_hasUnique) then {
	_item = [_item] call FUNC(getBaseClass);
};
if (_item isEqualTo "") exitWith { -1 };

private _hash = missionNamespace getVariable [QGVAR(hash_id), [] call CBA_fnc_hashCreate];
private _id = (([_hash, _item, 0] call CBA_fnc_hashGet) + 1) min 512;
_hash = [_hash, _item, _id] call CBA_fnc_hashSet;
missionNamespace setVariable [QGVAR(hash_id), _hash, true];

_id;