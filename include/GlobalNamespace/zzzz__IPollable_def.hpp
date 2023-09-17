#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class IPollable;
}
// Type: ::IPollable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12747))
// CS Name: IPollable
class CORDL_TYPE IPollable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IPollable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPollable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method PollUpdate addr 0x0 size 0xffffffffffffffff virtual true final false
 void PollUpdate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IPollable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPollable, "", "IPollable");
