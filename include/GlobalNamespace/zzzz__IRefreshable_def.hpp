#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class IRefreshable;
}
// Type: ::IRefreshable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13744))
// CS Name: IRefreshable
class CORDL_TYPE IRefreshable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IRefreshable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IRefreshable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Refresh addr 0x0 size 0xffffffffffffffff virtual true final false
 void Refresh() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IRefreshable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IRefreshable, "", "IRefreshable");
