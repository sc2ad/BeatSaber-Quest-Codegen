#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
namespace UnityEngine::InputSystem::Haptics {
class IDualMotorRumble;
}
namespace UnityEngine::InputSystem::Haptics {
class IHaptics;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XInput {
class IXboxOneRumble;
}
// Type: UnityEngine.InputSystem.XInput::IXboxOneRumble
namespace UnityEngine::InputSystem::XInput {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6433))
// CS Name: UnityEngine.InputSystem.XInput.IXboxOneRumble
class CORDL_TYPE IXboxOneRumble : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::Haptics::IDualMotorRumble
constexpr operator  UnityEngine::InputSystem::Haptics::IDualMotorRumble() const noexcept;

/// @brief Convert operator to UnityEngine::InputSystem::Haptics::IHaptics
constexpr operator  UnityEngine::InputSystem::Haptics::IHaptics() const noexcept;

~IXboxOneRumble() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IXboxOneRumble(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method SetMotorSpeeds addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetMotorSpeeds(float_t lowFrequency, float_t highFrequency, float_t leftTrigger, float_t rightTrigger) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XInput
NEED_NO_BOX(UnityEngine::InputSystem::XInput::IXboxOneRumble);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::XInput::IXboxOneRumble, "UnityEngine.InputSystem.XInput", "IXboxOneRumble");
