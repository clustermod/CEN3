class CfgWeapons {
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;

    class GVAR(GameComponentBase): CBA_MiscItem {
        author = CSTRING(Author);
        scopeCurator = 1;
        scope = 1;
    };

    class GVAR(BaseComponent): GVAR(GameComponentBase) {
        DOUBLES(PREFIX,hasUnique) = 1;
        scopeCurator = 1;
        scope = 1;
    };

    class GVAR(base_notepad): GVAR(BaseComponent) {
        author = "Cluster Mod Team";
        displayName = "Notepad";
        useActionTitle = "Pickup Notepad";
        DOUBLES(PREFIX,isNotepad) = 1;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        };

        class Library {
            libTextDesc = "Notepad";
        };

        class DOUBLES(PREFIX,NAME_NOTEPAD) {
            type = "notepad";
            id = 0;
            ctrl = 0;
        };
    };

    class GVAR(notepad): GVAR(base_notepad) {
        displayName = CSTRING(notebook_displayName);
        useActionTitle = QUOTE(Notepad);
        picture = QPATHTOF(UI\icon_notebook_ca.paa);
        descriptionShort = CSTRING(notebook_description);
        scopeCurator = 2;
        scope = 2;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.8;
        };

        class Library {
            libTextDesc = QUOTE(Notepad);
        };

        class DOUBLES(PREFIX,data) {
            display = QUOTE(DOUBLES(PREFIX,RscNotepad));
            id = 0;
        };
    };

    class GVAR(fieldbook): GVAR(base_notepad) {
        displayName = CSTRING(fieldbook_displayName);
        useActionTitle = QUOTE(Fieldbook);
        picture = QPATHTOF(UI\icon_fieldbook_ca.paa);
        descriptionShort = CSTRING(fieldbook_description);
        scopeCurator = 2;
        scope = 2;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.05;
        };

        class Library {
            libTextDesc = QUOTE(Fieldbook);
        };

        class DOUBLES(PREFIX,data) {
            display = QUOTE(DOUBLES(PREFIX,RscFieldbook));
            id = 0;
        };
    };

    NOTEPAD_ID_LIST(GVAR(notepad))
    NOTEPAD_ID_LIST(GVAR(fieldbook))
};
