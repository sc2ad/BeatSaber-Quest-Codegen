#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine::UIElements {
class IMouseEvent;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseEventsHelper;
}
// Type: UnityEngine.UIElements::MouseEventsHelper
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7268))
// CS Name: UnityEngine.UIElements.MouseEventsHelper
class CORDL_TYPE MouseEventsHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MouseEventsHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseEventsHelper", modifiers: " const&", def_value: None }]
constexpr MouseEventsHelper(MouseEventsHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseEventsHelper", modifiers: "&&", def_value: None }]
constexpr MouseEventsHelper(MouseEventsHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MouseEventsHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MouseEventsHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MouseEventsHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MouseEventsHelper& operator=(MouseEventsHelper&& o) noexcept = default;
  constexpr MouseEventsHelper& operator=(MouseEventsHelper const& o) noexcept = default;
                


// Methods

/// @brief Method SendEnterLeave addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TLeaveEvent,typename TEnterEvent>
static void SendEnterLeave(::UnityEngine::UIElements::VisualElement previousTopElementUnderMouse, ::UnityEngine::UIElements::VisualElement currentTopElementUnderMouse, ::UnityEngine::UIElements::IMouseEvent triggerEvent, ::UnityEngine::Vector2 mousePosition) ;

/// @brief Method SendMouseOverMouseOut addr 0x2cd2220 size 0x374 virtual false final false
static void SendMouseOverMouseOut(::UnityEngine::UIElements::VisualElement previousTopElementUnderMouse, ::UnityEngine::UIElements::VisualElement currentTopElementUnderMouse, ::UnityEngine::UIElements::IMouseEvent triggerEvent, ::UnityEngine::Vector2 mousePosition) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::MouseEventsHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseEventsHelper, "UnityEngine.UIElements", "MouseEventsHelper");
