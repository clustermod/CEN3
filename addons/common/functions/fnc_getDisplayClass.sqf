#include "script_component.hpp"
/*
 * Author: Eric
 * Get's the display class to use for notepad
 * 
 * Arguments:
 * 0: Notepad <STRING>
 * 
 * Return Value:
 * Display Class <STRING>
 * 
 * Example:
 * [] call cen_common_fnc_getDisplayClass
 * 
 * Public: Yes
 */
params["_notepad"];

getText (configFile >> "CfgWeapons" >> _notepad >> QUOTE(DOUBLES(PREFIX,data)) >> "display");
