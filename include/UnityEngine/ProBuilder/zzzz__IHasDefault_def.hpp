#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::ProBuilder {
class IHasDefault;
}
// Type: UnityEngine.ProBuilder::IHasDefault
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12071))
// CS Name: UnityEngine.ProBuilder.IHasDefault
class CORDL_TYPE IHasDefault : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IHasDefault() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IHasDefault(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method SetDefaultValues addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetDefaultValues() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ProBuilder::IHasDefault);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::IHasDefault, "UnityEngine.ProBuilder", "IHasDefault");
