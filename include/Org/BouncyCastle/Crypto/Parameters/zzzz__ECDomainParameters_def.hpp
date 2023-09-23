#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::ECDomainParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1033))
// CS Name: Org.BouncyCastle.Crypto.Parameters.ECDomainParameters
class CORDL_TYPE ECDomainParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ECDomainParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECDomainParameters", modifiers: " const&", def_value: None }]
constexpr ECDomainParameters(ECDomainParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECDomainParameters", modifiers: "&&", def_value: None }]
constexpr ECDomainParameters(ECDomainParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECDomainParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ECDomainParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECDomainParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECDomainParameters& operator=(ECDomainParameters&& o) noexcept = default;
  constexpr ECDomainParameters& operator=(ECDomainParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::EC::ECCurve __declspec(property(get=__get_curve, put=__set_curve))  curve;

constexpr void __set_curve(Org::BouncyCastle::Math::EC::ECCurve value) ;

constexpr Org::BouncyCastle::Math::EC::ECCurve __get_curve() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_seed, put=__set_seed))  seed;

constexpr void __set_seed(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_seed() const;

 Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=__get_g, put=__set_g))  g;

constexpr void __set_g(Org::BouncyCastle::Math::EC::ECPoint value) ;

constexpr Org::BouncyCastle::Math::EC::ECPoint __get_g() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_n, put=__set_n))  n;

constexpr void __set_n(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_n() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_h, put=__set_h))  h;

constexpr void __set_h(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_h() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_hInv, put=__set_hInv))  hInv;

constexpr void __set_hInv(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_hInv() const;


// Properties

 Org::BouncyCastle::Math::EC::ECCurve __declspec(property(get=get_Curve))  Curve;

 Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=get_G))  G;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_N))  N;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_H))  H;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_HInv))  HInv;


// Methods

// Ctor Parameters [CppParam { name: "x9", ty: "Org::BouncyCastle::Asn1::X9::X9ECParameters", modifiers: "", def_value: None }]
explicit ECDomainParameters(Org::BouncyCastle::Asn1::X9::X9ECParameters x9) ;

/// @brief Method .ctor addr 0xea54e0 size 0x48 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X9::X9ECParameters x9) ;

// Ctor Parameters [CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "g", ty: "Org::BouncyCastle::Math::EC::ECPoint", modifiers: "", def_value: None }, CppParam { name: "n", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit ECDomainParameters(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECPoint g, Org::BouncyCastle::Math::BigInteger n) ;

/// @brief Method .ctor addr 0xea5670 size 0x8c virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECPoint g, Org::BouncyCastle::Math::BigInteger n) ;

// Ctor Parameters [CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "g", ty: "Org::BouncyCastle::Math::EC::ECPoint", modifiers: "", def_value: None }, CppParam { name: "n", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "h", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit ECDomainParameters(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECPoint g, Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Math::BigInteger h) ;

/// @brief Method .ctor addr 0xea56fc size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECPoint g, Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Math::BigInteger h) ;

// Ctor Parameters [CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "g", ty: "Org::BouncyCastle::Math::EC::ECPoint", modifiers: "", def_value: None }, CppParam { name: "n", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "h", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "seed", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit ECDomainParameters(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECPoint g, Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Math::BigInteger h, ::ArrayW<uint8_t> seed) ;

/// @brief Method .ctor addr 0xea5528 size 0x148 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECPoint g, Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Math::BigInteger h, ::ArrayW<uint8_t> seed) ;

/// @brief Method get_Curve addr 0xea5834 size 0x8 virtual false final false
 Org::BouncyCastle::Math::EC::ECCurve get_Curve() ;

/// @brief Method get_G addr 0xea583c size 0x8 virtual false final false
 Org::BouncyCastle::Math::EC::ECPoint get_G() ;

/// @brief Method get_N addr 0xea5844 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_N() ;

/// @brief Method get_H addr 0xea584c size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_H() ;

/// @brief Method get_HInv addr 0xea5854 size 0xc4 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_HInv() ;

/// @brief Method GetSeed addr 0xea5918 size 0x5c virtual false final false
 ::ArrayW<uint8_t> GetSeed() ;

/// @brief Method Equals addr 0xea5974 size 0xa4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xea5a18 size 0x88 virtual true final false
 bool Equals(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters other) ;

/// @brief Method GetHashCode addr 0xea5aa0 size 0x7c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ValidatePrivateScalar addr 0xea5b1c size 0x138 virtual false final false
 Org::BouncyCastle::Math::BigInteger ValidatePrivateScalar(Org::BouncyCastle::Math::BigInteger d) ;

/// @brief Method ValidatePublicPoint addr 0xea5c54 size 0x8 virtual false final false
 Org::BouncyCastle::Math::EC::ECPoint ValidatePublicPoint(Org::BouncyCastle::Math::EC::ECPoint q) ;

/// @brief Method ValidatePublicPoint addr 0xea5704 size 0x130 virtual false final false
static Org::BouncyCastle::Math::EC::ECPoint ValidatePublicPoint(Org::BouncyCastle::Math::EC::ECCurve c, Org::BouncyCastle::Math::EC::ECPoint q) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters, "Org.BouncyCastle.Crypto.Parameters", "ECDomainParameters");
