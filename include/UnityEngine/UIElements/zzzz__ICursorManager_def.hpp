#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
namespace UnityEngine::UIElements {
struct Cursor;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ICursorManager;
}
// Type: UnityEngine.UIElements::ICursorManager
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6894))
// CS Name: UnityEngine.UIElements.ICursorManager
class CORDL_TYPE ICursorManager : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ICursorManager() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICursorManager(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method SetCursor addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetCursor(::UnityEngine::UIElements::Cursor cursor) ;

/// @brief Method ResetCursor addr 0x0 size 0xffffffffffffffff virtual true final false
 void ResetCursor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::ICursorManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ICursorManager, "UnityEngine.UIElements", "ICursorManager");
