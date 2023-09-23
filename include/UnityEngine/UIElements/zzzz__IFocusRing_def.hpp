#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::UIElements {
class Focusable;
}
namespace UnityEngine::UIElements {
class FocusChangeDirection;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IFocusRing;
}
// Type: UnityEngine.UIElements::IFocusRing
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6968))
// CS Name: UnityEngine.UIElements.IFocusRing
class CORDL_TYPE IFocusRing : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IFocusRing() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IFocusRing(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetFocusChangeDirection addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::FocusChangeDirection GetFocusChangeDirection(UnityEngine::UIElements::Focusable currentFocusable, UnityEngine::UIElements::EventBase e) ;

/// @brief Method GetNextFocusable addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::Focusable GetNextFocusable(UnityEngine::UIElements::Focusable currentFocusable, UnityEngine::UIElements::FocusChangeDirection direction) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::IFocusRing);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::IFocusRing, "UnityEngine.UIElements", "IFocusRing");
