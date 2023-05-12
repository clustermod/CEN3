#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            NOTEPAD_WEAPON_LIST_STR(ECM_notebook),
            NOTEPAD_WEAPON_LIST_STR(ECM_fieldbook)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cen_common"};
        author = "Cluster Mod Team";
        authors[] = {"Eric"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"

#include "UI/RscDefines.hpp"
#include "RscNotepad.hpp"
#include "RscFieldbook.hpp"