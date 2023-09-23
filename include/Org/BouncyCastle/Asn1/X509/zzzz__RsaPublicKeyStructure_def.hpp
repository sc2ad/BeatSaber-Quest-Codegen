#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class RsaPublicKeyStructure;
}
// Type: Org.BouncyCastle.Asn1.X509::RsaPublicKeyStructure
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(381))
// CS Name: Org.BouncyCastle.Asn1.X509.RsaPublicKeyStructure
class CORDL_TYPE RsaPublicKeyStructure : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RsaPublicKeyStructure() = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaPublicKeyStructure", modifiers: " const&", def_value: None }]
constexpr RsaPublicKeyStructure(RsaPublicKeyStructure const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaPublicKeyStructure", modifiers: "&&", def_value: None }]
constexpr RsaPublicKeyStructure(RsaPublicKeyStructure&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RsaPublicKeyStructure(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr RsaPublicKeyStructure& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RsaPublicKeyStructure& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RsaPublicKeyStructure& operator=(RsaPublicKeyStructure&& o) noexcept = default;
  constexpr RsaPublicKeyStructure& operator=(RsaPublicKeyStructure const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_modulus, put=__set_modulus))  modulus;

constexpr void __set_modulus(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_modulus() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_publicExponent, put=__set_publicExponent))  publicExponent;

constexpr void __set_publicExponent(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_publicExponent() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Modulus))  Modulus;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_PublicExponent))  PublicExponent;


// Methods

/// @brief Method GetInstance addr 0x110bf98 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0x110bfb0 size 0x178 virtual false final false
static Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "modulus", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "publicExponent", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit RsaPublicKeyStructure(Org::BouncyCastle::Math::BigInteger modulus, Org::BouncyCastle::Math::BigInteger publicExponent) ;

/// @brief Method .ctor addr 0x110c250 size 0x13c virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger modulus, Org::BouncyCastle::Math::BigInteger publicExponent) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit RsaPublicKeyStructure(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x110c128 size 0x128 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_Modulus addr 0x110c38c size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Modulus() ;

/// @brief Method get_PublicExponent addr 0x110c394 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_PublicExponent() ;

/// @brief Method ToAsn1Object addr 0x110c39c size 0x140 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure, "Org.BouncyCastle.Asn1.X509", "RsaPublicKeyStructure");
