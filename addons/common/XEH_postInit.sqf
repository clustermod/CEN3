#include "script_component.hpp"

TRACE_1("adding unit playerEH to set cen_player", isNull cba_events_oldUnit);
["unit", {
    cen_player = (_this select 0);
}, true] call CBA_fnc_addPlayerEventHandler;

GVAR(arsenalOpen) = false;