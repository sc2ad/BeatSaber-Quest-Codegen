#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RsaKeyParameters_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class RsaPrivateKeyStructure;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaPrivateCrtKeyParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::RsaPrivateCrtKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1081))
// CS Name: Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters
class CORDL_TYPE RsaPrivateCrtKeyParameters : public Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~RsaPrivateCrtKeyParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaPrivateCrtKeyParameters", modifiers: " const&", def_value: None }]
constexpr RsaPrivateCrtKeyParameters(RsaPrivateCrtKeyParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaPrivateCrtKeyParameters", modifiers: "&&", def_value: None }]
constexpr RsaPrivateCrtKeyParameters(RsaPrivateCrtKeyParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RsaPrivateCrtKeyParameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters(ptr) {
}


  constexpr RsaPrivateCrtKeyParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RsaPrivateCrtKeyParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RsaPrivateCrtKeyParameters& operator=(RsaPrivateCrtKeyParameters&& o) noexcept = default;
  constexpr RsaPrivateCrtKeyParameters& operator=(RsaPrivateCrtKeyParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_e, put=__set_e))  e;

constexpr void __set_e(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_e() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_p, put=__set_p))  p;

constexpr void __set_p(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_p() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_q, put=__set_q))  q;

constexpr void __set_q(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_q() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_dP, put=__set_dP))  dP;

constexpr void __set_dP(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_dP() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_dQ, put=__set_dQ))  dQ;

constexpr void __set_dQ(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_dQ() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_qInv, put=__set_qInv))  qInv;

constexpr void __set_qInv(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_qInv() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_PublicExponent))  PublicExponent;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_P))  P;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Q))  Q;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_DP))  DP;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_DQ))  DQ;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_QInv))  QInv;


// Methods

static Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters New_ctor(Org::BouncyCastle::Math::BigInteger modulus, Org::BouncyCastle::Math::BigInteger publicExponent, Org::BouncyCastle::Math::BigInteger privateExponent, Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Math::BigInteger dP, Org::BouncyCastle::Math::BigInteger dQ, Org::BouncyCastle::Math::BigInteger qInv) ;

/// @brief Method .ctor addr 0xeabadc size 0x22c virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger modulus, Org::BouncyCastle::Math::BigInteger publicExponent, Org::BouncyCastle::Math::BigInteger privateExponent, Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Math::BigInteger dP, Org::BouncyCastle::Math::BigInteger dQ, Org::BouncyCastle::Math::BigInteger qInv) ;

static Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters New_ctor(Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure rsaPrivateKey) ;

/// @brief Method .ctor addr 0xeabdd8 size 0x38 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure rsaPrivateKey) ;

/// @brief Method get_PublicExponent addr 0xeabe10 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_PublicExponent() ;

/// @brief Method get_P addr 0xeabe18 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_P() ;

/// @brief Method get_Q addr 0xeabe20 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Q() ;

/// @brief Method get_DP addr 0xeabe28 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_DP() ;

/// @brief Method get_DQ addr 0xeabe30 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_DQ() ;

/// @brief Method get_QInv addr 0xeabe38 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_QInv() ;

/// @brief Method Equals addr 0xeabe40 size 0x178 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0xeabfb8 size 0x120 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ValidateValue addr 0xeabd08 size 0xd0 virtual false final false
static void ValidateValue(Org::BouncyCastle::Math::BigInteger x, ::StringW name, ::StringW desc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters, "Org.BouncyCastle.Crypto.Parameters", "RsaPrivateCrtKeyParameters");
