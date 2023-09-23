#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::Field {
class IFiniteField;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class AbstractF2mCurve;
}
// Type: Org.BouncyCastle.Math.EC::AbstractF2mCurve
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1361))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1443))
// CS Name: Org.BouncyCastle.Math.EC.AbstractF2mCurve
class CORDL_TYPE AbstractF2mCurve : public Org::BouncyCastle::Math::EC::ECCurve {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~AbstractF2mCurve() = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractF2mCurve", modifiers: " const&", def_value: None }]
constexpr AbstractF2mCurve(AbstractF2mCurve const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractF2mCurve", modifiers: "&&", def_value: None }]
constexpr AbstractF2mCurve(AbstractF2mCurve&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AbstractF2mCurve(void* ptr) noexcept : Org::BouncyCastle::Math::EC::ECCurve(ptr) {
}


  constexpr AbstractF2mCurve& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AbstractF2mCurve& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AbstractF2mCurve& operator=(AbstractF2mCurve&& o) noexcept = default;
  constexpr AbstractF2mCurve& operator=(AbstractF2mCurve const& o) noexcept = default;
                


// Fields

 ::ArrayW<Org::BouncyCastle::Math::BigInteger> __declspec(property(get=__get_si, put=__set_si))  si;

constexpr void __set_si(::ArrayW<Org::BouncyCastle::Math::BigInteger> value) ;

constexpr ::ArrayW<Org::BouncyCastle::Math::BigInteger> __get_si() const;


// Properties

 bool __declspec(property(get=get_IsKoblitz))  IsKoblitz;


// Methods

/// @brief Method Inverse addr 0xf756e4 size 0x8c virtual false final false
static Org::BouncyCastle::Math::BigInteger Inverse(int32_t m, ::ArrayW<int32_t> ks, Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method BuildField addr 0xf75770 size 0x1e0 virtual false final false
static Org::BouncyCastle::Math::Field::IFiniteField BuildField(int32_t m, int32_t k1, int32_t k2, int32_t k3) ;

// Ctor Parameters [CppParam { name: "m", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "k1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "k2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "k3", ty: "int32_t", modifiers: "", def_value: None }]
explicit AbstractF2mCurve(int32_t m, int32_t k1, int32_t k2, int32_t k3) ;

/// @brief Method .ctor addr 0xf75950 size 0x34 virtual false final false
 void _ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3) ;

/// @brief Method CreatePoint addr 0xf75984 size 0x160 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint CreatePoint(Org::BouncyCastle::Math::BigInteger x, Org::BouncyCastle::Math::BigInteger y, bool withCompression) ;

/// @brief Method IsValidFieldElement addr 0xf75ae4 size 0x54 virtual true final false
 bool IsValidFieldElement(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method RandomFieldElement addr 0xf75b38 size 0x48 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement RandomFieldElement(Org::BouncyCastle::Security::SecureRandom r) ;

/// @brief Method RandomFieldElementMult addr 0xf75b80 size 0x94 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement RandomFieldElementMult(Org::BouncyCastle::Security::SecureRandom r) ;

/// @brief Method DecompressPoint addr 0xf75c54 size 0x214 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint DecompressPoint(int32_t yTilde, Org::BouncyCastle::Math::BigInteger X1) ;

/// @brief Method SolveQuadraticEquation addr 0xf75e68 size 0x2ec virtual false final false
 Org::BouncyCastle::Math::EC::ECFieldElement SolveQuadraticEquation(Org::BouncyCastle::Math::EC::ECFieldElement beta) ;

/// @brief Method GetSi addr 0xf76154 size 0xf4 virtual true final false
 ::ArrayW<Org::BouncyCastle::Math::BigInteger> GetSi() ;

/// @brief Method get_IsKoblitz addr 0xf76248 size 0x84 virtual true final false
 bool get_IsKoblitz() ;

/// @brief Method ImplRandomFieldElementMult addr 0xf75c14 size 0x40 virtual false final false
static Org::BouncyCastle::Math::BigInteger ImplRandomFieldElementMult(Org::BouncyCastle::Security::SecureRandom r, int32_t m) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
NEED_NO_BOX(Org::BouncyCastle::Math::EC::AbstractF2mCurve);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::AbstractF2mCurve, "Org.BouncyCastle.Math.EC", "AbstractF2mCurve");
