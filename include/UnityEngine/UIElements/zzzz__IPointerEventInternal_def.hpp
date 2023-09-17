#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
class IPointerEventInternal;
}
// Type: UnityEngine.UIElements::IPointerEventInternal
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7296))
// CS Name: UnityEngine.UIElements.IPointerEventInternal
class CORDL_TYPE IPointerEventInternal : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IPointerEventInternal() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPointerEventInternal(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_triggeredByOS, put=set_triggeredByOS))  triggeredByOS;

 bool __declspec(property(get=get_recomputeTopElementUnderPointer, put=set_recomputeTopElementUnderPointer))  recomputeTopElementUnderPointer;


// Methods

/// @brief Method get_triggeredByOS addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_triggeredByOS() ;

/// @brief Method set_triggeredByOS addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_triggeredByOS(bool value) ;

/// @brief Method get_recomputeTopElementUnderPointer addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_recomputeTopElementUnderPointer() ;

/// @brief Method set_recomputeTopElementUnderPointer addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_recomputeTopElementUnderPointer(bool value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::IPointerEventInternal);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IPointerEventInternal, "UnityEngine.UIElements", "IPointerEventInternal");
