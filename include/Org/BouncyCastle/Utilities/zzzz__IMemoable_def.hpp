#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Type: Org.BouncyCastle.Utilities::IMemoable
namespace Org::BouncyCastle::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(748))
// CS Name: Org.BouncyCastle.Utilities.IMemoable
class CORDL_TYPE IMemoable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IMemoable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMemoable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Utilities::IMemoable Copy() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final false
 void Reset(::Org::BouncyCastle::Utilities::IMemoable other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IMemoable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IMemoable, "Org.BouncyCastle.Utilities", "IMemoable");
