#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
namespace UnityEngine::UIElements {
class IGroupBox;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class IGroupBox_1;
}
// Type: UnityEngine.UIElements::IGroupBox`1
namespace UnityEngine::UIElements {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7025))
// CS Name: UnityEngine.UIElements.IGroupBox`1
class CORDL_TYPE IGroupBox_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UIElements::IGroupBox
constexpr operator  ::UnityEngine::UIElements::IGroupBox() const noexcept;

~IGroupBox_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IGroupBox_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::IGroupBox_1, "UnityEngine.UIElements", "IGroupBox`1");
