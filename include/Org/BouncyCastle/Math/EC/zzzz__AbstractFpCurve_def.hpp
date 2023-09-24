#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class AbstractFpCurve;
}
// Type: Org.BouncyCastle.Math.EC::AbstractFpCurve
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1361))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1364))
// CS Name: Org.BouncyCastle.Math.EC.AbstractFpCurve
class CORDL_TYPE AbstractFpCurve : public Org::BouncyCastle::Math::EC::ECCurve {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~AbstractFpCurve() = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractFpCurve", modifiers: " const&", def_value: None }]
constexpr AbstractFpCurve(AbstractFpCurve const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractFpCurve", modifiers: "&&", def_value: None }]
constexpr AbstractFpCurve(AbstractFpCurve&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AbstractFpCurve(void* ptr) noexcept : Org::BouncyCastle::Math::EC::ECCurve(ptr) {
}


  constexpr AbstractFpCurve& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AbstractFpCurve& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AbstractFpCurve& operator=(AbstractFpCurve&& o) noexcept = default;
  constexpr AbstractFpCurve& operator=(AbstractFpCurve const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Math::EC::AbstractFpCurve New_ctor(Org::BouncyCastle::Math::BigInteger q) ;

/// @brief Method .ctor addr 0xf3eafc size 0x84 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger q) ;

/// @brief Method IsValidFieldElement addr 0xf3eb80 size 0xe4 virtual true final false
 bool IsValidFieldElement(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method RandomFieldElement addr 0xf3ec64 size 0x120 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement RandomFieldElement(Org::BouncyCastle::Security::SecureRandom r) ;

/// @brief Method RandomFieldElementMult addr 0xf3eddc size 0x120 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement RandomFieldElementMult(Org::BouncyCastle::Security::SecureRandom r) ;

/// @brief Method DecompressPoint addr 0xf3ef84 size 0x180 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint DecompressPoint(int32_t yTilde, Org::BouncyCastle::Math::BigInteger X1) ;

/// @brief Method ImplRandomFieldElement addr 0xf3ed84 size 0x58 virtual false final false
static Org::BouncyCastle::Math::BigInteger ImplRandomFieldElement(Org::BouncyCastle::Security::SecureRandom r, Org::BouncyCastle::Math::BigInteger p) ;

/// @brief Method ImplRandomFieldElementMult addr 0xf3eefc size 0x88 virtual false final false
static Org::BouncyCastle::Math::BigInteger ImplRandomFieldElementMult(Org::BouncyCastle::Security::SecureRandom r, Org::BouncyCastle::Math::BigInteger p) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
NEED_NO_BOX(Org::BouncyCastle::Math::EC::AbstractFpCurve);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::AbstractFpCurve, "Org.BouncyCastle.Math.EC", "AbstractFpCurve");
