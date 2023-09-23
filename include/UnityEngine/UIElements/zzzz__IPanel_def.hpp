#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::UIElements {
class EventDispatcher;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
struct ContextType;
}
namespace UnityEngine::UIElements {
class FocusController;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IPanel;
}
// Type: UnityEngine.UIElements::IPanel
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6955))
// CS Name: UnityEngine.UIElements.IPanel
class CORDL_TYPE IPanel : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

~IPanel() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPanel(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 UnityEngine::UIElements::VisualElement __declspec(property(get=get_visualTree))  visualTree;

 UnityEngine::UIElements::EventDispatcher __declspec(property(get=get_dispatcher))  dispatcher;

 UnityEngine::UIElements::ContextType __declspec(property(get=get_contextType))  contextType;

 UnityEngine::UIElements::FocusController __declspec(property(get=get_focusController))  focusController;


// Methods

/// @brief Method get_visualTree addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::VisualElement get_visualTree() ;

/// @brief Method get_dispatcher addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::EventDispatcher get_dispatcher() ;

/// @brief Method get_contextType addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::ContextType get_contextType() ;

/// @brief Method get_focusController addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::FocusController get_focusController() ;

/// @brief Method Pick addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::VisualElement Pick(UnityEngine::Vector2 point) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::IPanel);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::IPanel, "UnityEngine.UIElements", "IPanel");
