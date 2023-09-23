#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class INavigationEvent;
}
// Type: UnityEngine.UIElements::INavigationEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7346))
// CS Name: UnityEngine.UIElements.INavigationEvent
class CORDL_TYPE INavigationEvent : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INavigationEvent() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INavigationEvent(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::INavigationEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::INavigationEvent, "UnityEngine.UIElements", "INavigationEvent");
