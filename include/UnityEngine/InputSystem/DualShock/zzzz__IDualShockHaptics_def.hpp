#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::InputSystem::Haptics {
class IDualMotorRumble;
}
namespace UnityEngine::InputSystem::Haptics {
class IHaptics;
}
// Forward declare root types
namespace UnityEngine::InputSystem::DualShock {
class IDualShockHaptics;
}
// Type: UnityEngine.InputSystem.DualShock::IDualShockHaptics
namespace UnityEngine::InputSystem::DualShock {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6508))
// CS Name: UnityEngine.InputSystem.DualShock.IDualShockHaptics
class CORDL_TYPE IDualShockHaptics : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::Haptics::IDualMotorRumble
constexpr operator  UnityEngine::InputSystem::Haptics::IDualMotorRumble() const noexcept;

/// @brief Convert operator to UnityEngine::InputSystem::Haptics::IHaptics
constexpr operator  UnityEngine::InputSystem::Haptics::IHaptics() const noexcept;

~IDualShockHaptics() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDualShockHaptics(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method SetLightBarColor addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetLightBarColor(UnityEngine::Color color) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::DualShock
NEED_NO_BOX(UnityEngine::InputSystem::DualShock::IDualShockHaptics);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::DualShock::IDualShockHaptics, "UnityEngine.InputSystem.DualShock", "IDualShockHaptics");
