#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
namespace UnityEngine::InputSystem::Haptics {
class IHaptics;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Haptics {
class IDualMotorRumble;
}
// Type: UnityEngine.InputSystem.Haptics::IDualMotorRumble
namespace UnityEngine::InputSystem::Haptics {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6544))
// CS Name: UnityEngine.InputSystem.Haptics.IDualMotorRumble
class CORDL_TYPE IDualMotorRumble : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::Haptics::IHaptics
constexpr operator  UnityEngine::InputSystem::Haptics::IHaptics() const noexcept;

~IDualMotorRumble() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDualMotorRumble(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method SetMotorSpeeds addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetMotorSpeeds(float_t lowFrequency, float_t highFrequency) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Haptics
NEED_NO_BOX(UnityEngine::InputSystem::Haptics::IDualMotorRumble);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Haptics::IDualMotorRumble, "UnityEngine.InputSystem.Haptics", "IDualMotorRumble");
