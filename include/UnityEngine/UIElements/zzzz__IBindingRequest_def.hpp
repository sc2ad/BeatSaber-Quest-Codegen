#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IBindingRequest;
}
// Type: UnityEngine.UIElements::IBindingRequest
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7442))
// CS Name: UnityEngine.UIElements.IBindingRequest
class CORDL_TYPE IBindingRequest : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IBindingRequest() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBindingRequest(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Bind addr 0x0 size 0xffffffffffffffff virtual true final false
 void Bind(UnityEngine::UIElements::VisualElement element) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::IBindingRequest);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::IBindingRequest, "UnityEngine.UIElements", "IBindingRequest");
