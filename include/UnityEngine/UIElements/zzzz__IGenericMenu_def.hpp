#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Rect;
}
namespace System {
class Action;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IGenericMenu;
}
// Type: UnityEngine.UIElements::IGenericMenu
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7169))
// CS Name: UnityEngine.UIElements.IGenericMenu
class CORDL_TYPE IGenericMenu : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IGenericMenu() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IGenericMenu(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method AddItem addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddItem(::StringW itemName, bool isChecked, System::Action action) ;

/// @brief Method DropDown addr 0x0 size 0xffffffffffffffff virtual true final false
 void DropDown(UnityEngine::Rect position, UnityEngine::UIElements::VisualElement targetElement, bool anchored) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::IGenericMenu);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::IGenericMenu, "UnityEngine.UIElements", "IGenericMenu");
