#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace UnityEngine::InputSystem {
struct InputInteractionContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class IInputInteraction;
}
// Type: UnityEngine.InputSystem::IInputInteraction
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6212))
// CS Name: UnityEngine.InputSystem.IInputInteraction
class CORDL_TYPE IInputInteraction : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IInputInteraction() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IInputInteraction(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 void Process(ByRef<::UnityEngine::InputSystem::InputInteractionContext> context) ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::IInputInteraction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::IInputInteraction, "UnityEngine.InputSystem", "IInputInteraction");
