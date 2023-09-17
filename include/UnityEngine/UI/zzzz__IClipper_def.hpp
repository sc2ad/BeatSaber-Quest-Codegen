#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::UI {
class IClipper;
}
// Type: UnityEngine.UI::IClipper
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12965))
// CS Name: UnityEngine.UI.IClipper
class CORDL_TYPE IClipper : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IClipper() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IClipper(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method PerformClipping addr 0x0 size 0xffffffffffffffff virtual true final false
 void PerformClipping() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UI::IClipper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::IClipper, "UnityEngine.UI", "IClipper");
