// Copyright 2017 Dolphin Emulator Project
// Licensed under GPLv2+
// Refer to the license.txt file included.

#pragma once

#include <string>

#include "InputCommon/ControllerEmu/ControlGroup/PrimeHackAltProfile.h"

namespace ControllerEmu
{
class PrimeHackMapProfile : public PrimeHackAltProfile
{
public:
  explicit PrimeHackMapProfile(const std::string& name, const std::string& default_selection);

  const std::string& GetMapProfileName() const;
  void SetMapProfileName(const std::string& val);
};
}  // namespace ControllerEmu
