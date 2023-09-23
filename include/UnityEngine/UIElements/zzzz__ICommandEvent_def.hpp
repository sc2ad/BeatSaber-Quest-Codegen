#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class ICommandEvent;
}
// Type: UnityEngine.UIElements::ICommandEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7327))
// CS Name: UnityEngine.UIElements.ICommandEvent
class CORDL_TYPE ICommandEvent : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ICommandEvent() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICommandEvent(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::ICommandEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::ICommandEvent, "UnityEngine.UIElements", "ICommandEvent");
