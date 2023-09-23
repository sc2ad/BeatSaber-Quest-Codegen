#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::InputSystem {
class IInputInteraction;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
template<typename TValue>
class IInputInteraction_1;
}
// Type: UnityEngine.InputSystem::IInputInteraction`1
namespace UnityEngine::InputSystem {
// cpp template
template<typename TValue>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6213))
// CS Name: UnityEngine.InputSystem.IInputInteraction`1
class CORDL_TYPE IInputInteraction_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::IInputInteraction
constexpr operator  UnityEngine::InputSystem::IInputInteraction() const noexcept;

~IInputInteraction_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IInputInteraction_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::InputSystem::IInputInteraction_1, "UnityEngine.InputSystem", "IInputInteraction`1");
