#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Math::EC::Endo {
class ECEndomorphism;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Endo {
class GlvEndomorphism;
}
// Type: Org.BouncyCastle.Math.EC.Endo::GlvEndomorphism
namespace Org::BouncyCastle::Math::EC::Endo {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1520))
// CS Name: Org.BouncyCastle.Math.EC.Endo.GlvEndomorphism
class CORDL_TYPE GlvEndomorphism : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Math::EC::Endo::ECEndomorphism
constexpr operator  Org::BouncyCastle::Math::EC::Endo::ECEndomorphism() const noexcept;

~GlvEndomorphism() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlvEndomorphism(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method DecomposeScalar addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<Org::BouncyCastle::Math::BigInteger> DecomposeScalar(Org::BouncyCastle::Math::BigInteger k) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Endo
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism, "Org.BouncyCastle.Math.EC.Endo", "GlvEndomorphism");
