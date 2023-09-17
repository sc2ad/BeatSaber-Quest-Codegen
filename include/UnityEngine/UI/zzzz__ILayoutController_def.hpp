#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::UI {
class ILayoutController;
}
// Type: UnityEngine.UI::ILayoutController
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13024))
// CS Name: UnityEngine.UI.ILayoutController
class CORDL_TYPE ILayoutController : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ILayoutController() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ILayoutController(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method SetLayoutHorizontal addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetLayoutHorizontal() ;

/// @brief Method SetLayoutVertical addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetLayoutVertical() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UI::ILayoutController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ILayoutController, "UnityEngine.UI", "ILayoutController");
