#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class RsaPrivateKeyStructure;
}
// Type: Org.BouncyCastle.Asn1.Pkcs::RsaPrivateKeyStructure
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(249))
// CS Name: Org.BouncyCastle.Asn1.Pkcs.RsaPrivateKeyStructure
class CORDL_TYPE RsaPrivateKeyStructure : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~RsaPrivateKeyStructure() = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaPrivateKeyStructure", modifiers: " const&", def_value: None }]
constexpr RsaPrivateKeyStructure(RsaPrivateKeyStructure const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaPrivateKeyStructure", modifiers: "&&", def_value: None }]
constexpr RsaPrivateKeyStructure(RsaPrivateKeyStructure&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RsaPrivateKeyStructure(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr RsaPrivateKeyStructure& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RsaPrivateKeyStructure& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RsaPrivateKeyStructure& operator=(RsaPrivateKeyStructure&& o) noexcept = default;
  constexpr RsaPrivateKeyStructure& operator=(RsaPrivateKeyStructure const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_modulus, put=__set_modulus))  modulus;

constexpr void __set_modulus(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_modulus() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_publicExponent, put=__set_publicExponent))  publicExponent;

constexpr void __set_publicExponent(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_publicExponent() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_privateExponent, put=__set_privateExponent))  privateExponent;

constexpr void __set_privateExponent(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_privateExponent() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_prime1, put=__set_prime1))  prime1;

constexpr void __set_prime1(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_prime1() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_prime2, put=__set_prime2))  prime2;

constexpr void __set_prime2(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_prime2() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_exponent1, put=__set_exponent1))  exponent1;

constexpr void __set_exponent1(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_exponent1() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_exponent2, put=__set_exponent2))  exponent2;

constexpr void __set_exponent2(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_exponent2() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_coefficient, put=__set_coefficient))  coefficient;

constexpr void __set_coefficient(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_coefficient() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Modulus))  Modulus;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_PublicExponent))  PublicExponent;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_PrivateExponent))  PrivateExponent;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Prime1))  Prime1;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Prime2))  Prime2;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Exponent1))  Exponent1;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Exponent2))  Exponent2;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Coefficient))  Coefficient;


// Methods

/// @brief Method GetInstance addr 0xf001d0 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

/// @brief Method GetInstance addr 0xf001e8 size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "modulus", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "publicExponent", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "privateExponent", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "prime1", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "prime2", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "exponent1", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "exponent2", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "coefficient", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit RsaPrivateKeyStructure(Org::BouncyCastle::Math::BigInteger modulus, Org::BouncyCastle::Math::BigInteger publicExponent, Org::BouncyCastle::Math::BigInteger privateExponent, Org::BouncyCastle::Math::BigInteger prime1, Org::BouncyCastle::Math::BigInteger prime2, Org::BouncyCastle::Math::BigInteger exponent1, Org::BouncyCastle::Math::BigInteger exponent2, Org::BouncyCastle::Math::BigInteger coefficient) ;

/// @brief Method .ctor addr 0xf00610 size 0x68 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger modulus, Org::BouncyCastle::Math::BigInteger publicExponent, Org::BouncyCastle::Math::BigInteger privateExponent, Org::BouncyCastle::Math::BigInteger prime1, Org::BouncyCastle::Math::BigInteger prime2, Org::BouncyCastle::Math::BigInteger exponent1, Org::BouncyCastle::Math::BigInteger exponent2, Org::BouncyCastle::Math::BigInteger coefficient) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit RsaPrivateKeyStructure(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xf0028c size 0x384 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_Modulus addr 0xf00678 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Modulus() ;

/// @brief Method get_PublicExponent addr 0xf00680 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_PublicExponent() ;

/// @brief Method get_PrivateExponent addr 0xf00688 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_PrivateExponent() ;

/// @brief Method get_Prime1 addr 0xf00690 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Prime1() ;

/// @brief Method get_Prime2 addr 0xf00698 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Prime2() ;

/// @brief Method get_Exponent1 addr 0xf006a0 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Exponent1() ;

/// @brief Method get_Exponent2 addr 0xf006a8 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Exponent2() ;

/// @brief Method get_Coefficient addr 0xf006b0 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Coefficient() ;

/// @brief Method ToAsn1Object addr 0xf006b8 size 0x318 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure, "Org.BouncyCastle.Asn1.Pkcs", "RsaPrivateKeyStructure");
