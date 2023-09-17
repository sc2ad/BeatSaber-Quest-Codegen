#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IRuntimePanelComponent;
}
// Type: UnityEngine.UIElements::IRuntimePanelComponent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6964))
// CS Name: UnityEngine.UIElements.IRuntimePanelComponent
class CORDL_TYPE IRuntimePanelComponent : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IRuntimePanelComponent() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IRuntimePanelComponent(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::UnityEngine::UIElements::IPanel __declspec(property(put=set_panel))  panel;


// Methods

/// @brief Method set_panel addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_panel(::UnityEngine::UIElements::IPanel value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::IRuntimePanelComponent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IRuntimePanelComponent, "UnityEngine.UIElements", "IRuntimePanelComponent");
