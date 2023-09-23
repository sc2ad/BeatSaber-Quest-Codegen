#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::UIElements {
class IPointerEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IMouseEventInternal;
}
// Type: UnityEngine.UIElements::IMouseEventInternal
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7313))
// CS Name: UnityEngine.UIElements.IMouseEventInternal
class CORDL_TYPE IMouseEventInternal : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IMouseEventInternal() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMouseEventInternal(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_triggeredByOS, put=set_triggeredByOS))  triggeredByOS;

 bool __declspec(property(get=get_recomputeTopElementUnderMouse, put=set_recomputeTopElementUnderMouse))  recomputeTopElementUnderMouse;

 UnityEngine::UIElements::IPointerEvent __declspec(property(get=get_sourcePointerEvent, put=set_sourcePointerEvent))  sourcePointerEvent;


// Methods

/// @brief Method get_triggeredByOS addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_triggeredByOS() ;

/// @brief Method set_triggeredByOS addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_triggeredByOS(bool value) ;

/// @brief Method get_recomputeTopElementUnderMouse addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_recomputeTopElementUnderMouse() ;

/// @brief Method set_recomputeTopElementUnderMouse addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_recomputeTopElementUnderMouse(bool value) ;

/// @brief Method get_sourcePointerEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::IPointerEvent get_sourcePointerEvent() ;

/// @brief Method set_sourcePointerEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_sourcePointerEvent(UnityEngine::UIElements::IPointerEvent value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::IMouseEventInternal);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::IMouseEventInternal, "UnityEngine.UIElements", "IMouseEventInternal");
