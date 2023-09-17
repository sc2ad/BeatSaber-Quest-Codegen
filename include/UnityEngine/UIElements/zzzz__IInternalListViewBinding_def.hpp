#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
class IInternalListViewBinding;
}
// Type: UnityEngine.UIElements::IInternalListViewBinding
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7182))
// CS Name: UnityEngine.UIElements.IInternalListViewBinding
class CORDL_TYPE IInternalListViewBinding : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IInternalListViewBinding() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IInternalListViewBinding(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::IInternalListViewBinding);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IInternalListViewBinding, "UnityEngine.UIElements", "IInternalListViewBinding");
