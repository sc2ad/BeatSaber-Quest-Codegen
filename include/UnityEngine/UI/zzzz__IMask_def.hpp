#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace UnityEngine::UI {
class IMask;
}
// Type: UnityEngine.UI::IMask
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12995))
// CS Name: UnityEngine.UI.IMask
class CORDL_TYPE IMask : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IMask() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMask(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::UnityEngine::RectTransform __declspec(property(get=get_rectTransform))  rectTransform;


// Methods

/// @brief Method Enabled addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Enabled() ;

/// @brief Method get_rectTransform addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::RectTransform get_rectTransform() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UI::IMask);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::IMask, "UnityEngine.UI", "IMask");
