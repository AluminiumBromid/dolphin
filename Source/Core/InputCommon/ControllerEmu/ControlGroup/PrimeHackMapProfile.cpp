#include "InputCommon/ControllerEmu/ControlGroup/PrimeHackMapProfile.h"

namespace ControllerEmu
{
  PrimeHackMapProfile::PrimeHackMapProfile(const std::string& name, const std::string& default_selection)
    : PrimeHackAltProfile(name, default_selection)
  {
  }

    // Returns the Map Profile name
  const std::string& PrimeHackMapProfile::GetMapProfileName() const
  {
    return GetAltProfileName();
  }

  void PrimeHackMapProfile::SetMapProfileName(const std::string& val)
  {
    auto copy = val;
    SetAltProfileName(copy);
  }
}  // namespace ControllerEmu
