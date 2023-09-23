#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace UnityEngine::UI {
class IMaskable;
}
// Type: UnityEngine.UI::IMaskable
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12996))
// CS Name: UnityEngine.UI.IMaskable
class CORDL_TYPE IMaskable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IMaskable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMaskable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method RecalculateMasking addr 0x0 size 0xffffffffffffffff virtual true final false
 void RecalculateMasking() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::IMaskable);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::IMaskable, "UnityEngine.UI", "IMaskable");
