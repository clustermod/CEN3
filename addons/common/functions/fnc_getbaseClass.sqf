#include "script_component.hpp"
/*
 * Author: Eric
 * Returns the baseclass of a notepad
 *
 * Arguments:
 * 0: Item <STRING>
 *
 * Return Value:
 * Baseclass <STRING>
 *
 * Example:
 * [_notepad] call cen_notepad_fnc_getBaseClass
 *
 * Public: Yes
 */
params["_uniqueItemClass"];

getText (configFile >> "CfgWeapons" >> _uniqueItemClass >> QUOTE(DOUBLES(PREFIX,baseClass)));
