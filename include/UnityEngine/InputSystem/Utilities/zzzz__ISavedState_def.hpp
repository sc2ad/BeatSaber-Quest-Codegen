#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class ISavedState;
}
// Type: UnityEngine.InputSystem.Utilities::ISavedState
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6786))
// CS Name: UnityEngine.InputSystem.Utilities.ISavedState
class CORDL_TYPE ISavedState : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISavedState() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISavedState(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method StaticDisposeCurrentState addr 0x0 size 0xffffffffffffffff virtual true final false
 void StaticDisposeCurrentState() ;

/// @brief Method RestoreSavedState addr 0x0 size 0xffffffffffffffff virtual true final false
 void RestoreSavedState() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::ISavedState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::ISavedState, "UnityEngine.InputSystem.Utilities", "ISavedState");
