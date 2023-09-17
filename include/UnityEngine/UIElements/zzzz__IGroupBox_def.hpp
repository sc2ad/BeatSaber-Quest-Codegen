#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
class IGroupBox;
}
// Type: UnityEngine.UIElements::IGroupBox
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7024))
// CS Name: UnityEngine.UIElements.IGroupBox
class CORDL_TYPE IGroupBox : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IGroupBox() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IGroupBox(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::IGroupBox);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IGroupBox, "UnityEngine.UIElements", "IGroupBox");
