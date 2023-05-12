#include "script_component.hpp"
/*
 * Author: Eric
 * Checks if the given notepad is a baseclass
 *
 * Arguments:
 * 0: Item <STRING>
 *
 * Return Value:
 * Condition <BOOL>
 *
 * Example:
 * [_notepad] call cen_notepad_fnc_isBaseClass
 *
 * Public: Yes
 */

params["_item"];

(getNumber (configFile >> "CfgWeapons" >> _item >> QUOTE(DOUBLES(PREFIX,hasUnique))) isEqualTo 1);
