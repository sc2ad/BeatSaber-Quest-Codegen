#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
class IGroupBoxOption;
}
// Type: UnityEngine.UIElements::IGroupBoxOption
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7023))
// CS Name: UnityEngine.UIElements.IGroupBoxOption
class CORDL_TYPE IGroupBoxOption : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IGroupBoxOption() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IGroupBoxOption(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method SetSelected addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetSelected(bool selected) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::IGroupBoxOption);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IGroupBoxOption, "UnityEngine.UIElements", "IGroupBoxOption");
