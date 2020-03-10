#pragma once

#include "base/models/QvRuntimeConfig.hpp"
#include "base/models/QvSettingsObject.hpp"
#include "base/models/QvStartupConfig.hpp"
#include "common/QvTranslator.hpp"

// Instantiation for Qv2ray global objects.

namespace Qv2ray
{
    // Qv2ray runtime config
    inline bool isExiting = false;
    inline QString Qv2rayConfigPath = "";
    inline base::Qv2rayRuntimeConfig RuntimeConfig = base::Qv2rayRuntimeConfig();
    inline base::config::Qv2rayConfig GlobalConfig = base::config::Qv2rayConfig();
    inline base::QvStartupOptions StartupOption = base::QvStartupOptions();
    //
    inline common::QvTranslator Qv2rayTranslator;
} // namespace Qv2ray
