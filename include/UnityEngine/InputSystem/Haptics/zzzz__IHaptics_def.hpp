#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace UnityEngine::InputSystem::Haptics {
class IHaptics;
}
// Type: UnityEngine.InputSystem.Haptics::IHaptics
namespace UnityEngine::InputSystem::Haptics {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6545))
// CS Name: UnityEngine.InputSystem.Haptics.IHaptics
class CORDL_TYPE IHaptics : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IHaptics() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IHaptics(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method PauseHaptics addr 0x0 size 0xffffffffffffffff virtual true final false
 void PauseHaptics() ;

/// @brief Method ResumeHaptics addr 0x0 size 0xffffffffffffffff virtual true final false
 void ResumeHaptics() ;

/// @brief Method ResetHaptics addr 0x0 size 0xffffffffffffffff virtual true final false
 void ResetHaptics() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Haptics
NEED_NO_BOX(UnityEngine::InputSystem::Haptics::IHaptics);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Haptics::IHaptics, "UnityEngine.InputSystem.Haptics", "IHaptics");
