#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class IInputUpdateCallbackReceiver;
}
// Type: UnityEngine.InputSystem.LowLevel::IInputUpdateCallbackReceiver
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6581))
// CS Name: UnityEngine.InputSystem.LowLevel.IInputUpdateCallbackReceiver
class CORDL_TYPE IInputUpdateCallbackReceiver : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IInputUpdateCallbackReceiver() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IInputUpdateCallbackReceiver(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnUpdate addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnUpdate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::IInputUpdateCallbackReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::IInputUpdateCallbackReceiver, "UnityEngine.InputSystem.LowLevel", "IInputUpdateCallbackReceiver");
