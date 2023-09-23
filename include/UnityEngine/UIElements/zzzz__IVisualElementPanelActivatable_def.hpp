#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IVisualElementPanelActivatable;
}
// Type: UnityEngine.UIElements::IVisualElementPanelActivatable
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6832))
// CS Name: UnityEngine.UIElements.IVisualElementPanelActivatable
class CORDL_TYPE IVisualElementPanelActivatable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IVisualElementPanelActivatable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IVisualElementPanelActivatable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 UnityEngine::UIElements::VisualElement __declspec(property(get=get_element))  element;


// Methods

/// @brief Method get_element addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::VisualElement get_element() ;

/// @brief Method CanBeActivated addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CanBeActivated() ;

/// @brief Method OnPanelActivate addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnPanelActivate() ;

/// @brief Method OnPanelDeactivate addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnPanelDeactivate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::IVisualElementPanelActivatable);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::IVisualElementPanelActivatable, "UnityEngine.UIElements", "IVisualElementPanelActivatable");
