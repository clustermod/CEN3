#include "script_component.hpp"

GVAR(uniqueNotepads) = [];
GVAR(currentNotepad) = [];
[FUNC(monitorPFH)] call CBA_fnc_addPerFrameHandler;