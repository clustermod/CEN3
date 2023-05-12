#define INPUT_N	0x31
#define INPUT_O	0x18
private _category = format ["CE: %1", localize LSTRING(Category)];

[
    _category,
    QGVAR(notepadCycle),
    ["Cycle active Notepad", _category], {
        _this call FUNC(cycleActive);
    }, { },
    [INPUT_N, [true, true, false]]
] call CBA_fnc_addKeybind;

[
  _category,
  QGVAR(openEdit),
  ["Open currently selected notepad in edit mode", _category],
  { [GVAR(currentNotepad), "EDIT"] call FUNC(openNotepad); },
  {},
  [INPUT_O, [false, false, true]]
] call CBA_fnc_addKeybind;

[
  _category,
  QGVAR(openView),
  ["Open currently selected notepad in view mode", _category],
  { [GVAR(currentNotepad), "VIEW"] call FUNC(openNotepad); },
  {},
  [INPUT_O, [false, true, true]]
] call CBA_fnc_addKeybind;