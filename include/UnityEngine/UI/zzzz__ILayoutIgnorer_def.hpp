#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace UnityEngine::UI {
class ILayoutIgnorer;
}
// Type: UnityEngine.UI::ILayoutIgnorer
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13027))
// CS Name: UnityEngine.UI.ILayoutIgnorer
class CORDL_TYPE ILayoutIgnorer : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ILayoutIgnorer() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ILayoutIgnorer(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_ignoreLayout))  ignoreLayout;


// Methods

/// @brief Method get_ignoreLayout addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_ignoreLayout() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::ILayoutIgnorer);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ILayoutIgnorer, "UnityEngine.UI", "ILayoutIgnorer");
