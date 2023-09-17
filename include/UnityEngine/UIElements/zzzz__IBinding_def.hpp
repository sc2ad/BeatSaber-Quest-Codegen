#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
class IBinding;
}
// Type: UnityEngine.UIElements::IBinding
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7181))
// CS Name: UnityEngine.UIElements.IBinding
class CORDL_TYPE IBinding : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IBinding() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBinding(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method PreUpdate addr 0x0 size 0xffffffffffffffff virtual true final false
 void PreUpdate() ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
 void Update() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
 void Release() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::IBinding);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IBinding, "UnityEngine.UIElements", "IBinding");
