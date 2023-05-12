#include "script_component.hpp"
/*
 * Author: Eric
 * handles loading notepad displays
 * 
 * Arguments:
 * 0: Display <DISPLAY>
 * 1: Class <STRING>
 * 
 * Return Value:
 * None
 * 
 * Example:
 * [] call cen_notepad_fnc_onLoad
 * 
 * Public: No
 */
disableSerialization;
params ["_display", "_class"];

uiNamespace setVariable [_class, "display"];