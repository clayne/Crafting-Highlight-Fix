#pragma once
#include "f4se_common/f4se_version.h"

//-----------------------
// Plugin Information
//-----------------------
#define PLUGIN_VERSION              16
#define PLUGIN_VERSION_STRING       "1.9.0"
#define PLUGIN_NAME_SHORT           "crafting_highlight_fix"
#define PLUGIN_NAME_LONG            "Crafting Highlight Fix"
#define SUPPORTED_RUNTIME_VERSION   CURRENT_RELEASE_RUNTIME
#define MINIMUM_RUNTIME_VERSION     RUNTIME_VERSION_1_9_4
#define COMPATIBLE(runtimeVersion)  (runtimeVersion == SUPPORTED_RUNTIME_VERSION)
#define INI_LOCATION_DEFAULTS       "./Data/MCM/Config/CraftingHighlightFix/settings.ini"
#define INI_LOCATION_USER           "./Data/MCM/Settings/CraftingHighlightFix.ini"