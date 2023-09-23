#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeCertificate;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::X509 {
class IX509Extension;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactory;
}
namespace Org::BouncyCastle::X509 {
class AttributeCertificateHolder;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactoryProvider;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::X509 {
class AttributeCertificateIssuer;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::X509 {
class IX509AttributeCertificate;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::X509 {
class X509Attribute;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509V2AttributeCertificate;
}
// Type: Org.BouncyCastle.X509::X509V2AttributeCertificate
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1606))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1871))
// CS Name: Org.BouncyCastle.X509.X509V2AttributeCertificate
class CORDL_TYPE X509V2AttributeCertificate : public Org::BouncyCastle::X509::X509ExtensionBase {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::X509::IX509AttributeCertificate
constexpr operator  Org::BouncyCastle::X509::IX509AttributeCertificate() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::X509::IX509Extension
constexpr operator  Org::BouncyCastle::X509::IX509Extension() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~X509V2AttributeCertificate() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509V2AttributeCertificate", modifiers: " const&", def_value: None }]
constexpr X509V2AttributeCertificate(X509V2AttributeCertificate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509V2AttributeCertificate", modifiers: "&&", def_value: None }]
constexpr X509V2AttributeCertificate(X509V2AttributeCertificate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509V2AttributeCertificate(void* ptr) noexcept : Org::BouncyCastle::X509::X509ExtensionBase(ptr) {
}


  constexpr X509V2AttributeCertificate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509V2AttributeCertificate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509V2AttributeCertificate& operator=(X509V2AttributeCertificate&& o) noexcept = default;
  constexpr X509V2AttributeCertificate& operator=(X509V2AttributeCertificate const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::AttributeCertificate __declspec(property(get=__get_cert, put=__set_cert))  cert;

constexpr void __set_cert(Org::BouncyCastle::Asn1::X509::AttributeCertificate value) ;

constexpr Org::BouncyCastle::Asn1::X509::AttributeCertificate __get_cert() const;

 System::DateTime __declspec(property(get=__get_notBefore, put=__set_notBefore))  notBefore;

constexpr void __set_notBefore(System::DateTime value) ;

constexpr System::DateTime __get_notBefore() const;

 System::DateTime __declspec(property(get=__get_notAfter, put=__set_notAfter))  notAfter;

constexpr void __set_notAfter(System::DateTime value) ;

constexpr System::DateTime __get_notAfter() const;


// Properties

 int32_t __declspec(property(get=get_Version))  Version;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_SerialNumber))  SerialNumber;

 Org::BouncyCastle::X509::AttributeCertificateHolder __declspec(property(get=get_Holder))  Holder;

 Org::BouncyCastle::X509::AttributeCertificateIssuer __declspec(property(get=get_Issuer))  Issuer;

 System::DateTime __declspec(property(get=get_NotBefore))  NotBefore;

 System::DateTime __declspec(property(get=get_NotAfter))  NotAfter;

 bool __declspec(property(get=get_IsValidNow))  IsValidNow;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_SignatureAlgorithm))  SignatureAlgorithm;


// Methods

/// @brief Method GetObject addr 0x10f8cfc size 0x124 virtual false final false
static Org::BouncyCastle::Asn1::X509::AttributeCertificate GetObject(System::IO::Stream input) ;

// Ctor Parameters [CppParam { name: "encIn", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit X509V2AttributeCertificate(System::IO::Stream encIn) ;

/// @brief Method .ctor addr 0x10f8e20 size 0x20 virtual false final false
 void _ctor(System::IO::Stream encIn) ;

// Ctor Parameters [CppParam { name: "encoded", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit X509V2AttributeCertificate(::ArrayW<uint8_t> encoded) ;

/// @brief Method .ctor addr 0x10f8e40 size 0x80 virtual false final false
 void _ctor(::ArrayW<uint8_t> encoded) ;

// Ctor Parameters [CppParam { name: "cert", ty: "Org::BouncyCastle::Asn1::X509::AttributeCertificate", modifiers: "", def_value: None }]
explicit X509V2AttributeCertificate(Org::BouncyCastle::Asn1::X509::AttributeCertificate cert) ;

/// @brief Method .ctor addr 0x10ec320 size 0x170 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AttributeCertificate cert) ;

/// @brief Method get_Version addr 0x10f8ec0 size 0x34 virtual true final false
 int32_t get_Version() ;

/// @brief Method get_SerialNumber addr 0x10f8ef4 size 0x2c virtual true final false
 Org::BouncyCastle::Math::BigInteger get_SerialNumber() ;

/// @brief Method get_Holder addr 0x10f8f20 size 0xe0 virtual true final false
 Org::BouncyCastle::X509::AttributeCertificateHolder get_Holder() ;

/// @brief Method get_Issuer addr 0x10f9000 size 0x78 virtual true final false
 Org::BouncyCastle::X509::AttributeCertificateIssuer get_Issuer() ;

/// @brief Method get_NotBefore addr 0x10f9078 size 0x8 virtual true final false
 System::DateTime get_NotBefore() ;

/// @brief Method get_NotAfter addr 0x10f9080 size 0x8 virtual true final false
 System::DateTime get_NotAfter() ;

/// @brief Method GetIssuerUniqueID addr 0x10f9088 size 0x110 virtual true final false
 ::ArrayW<bool> GetIssuerUniqueID() ;

/// @brief Method get_IsValidNow addr 0x10f9198 size 0x6c virtual true final false
 bool get_IsValidNow() ;

/// @brief Method IsValid addr 0x10f9204 size 0xd0 virtual true final false
 bool IsValid(System::DateTime date) ;

/// @brief Method CheckValidity addr 0x10f92d4 size 0x6c virtual true final false
 void CheckValidity() ;

/// @brief Method CheckValidity addr 0x10f9340 size 0x1c8 virtual true final false
 void CheckValidity(System::DateTime date) ;

/// @brief Method get_SignatureAlgorithm addr 0x10f9508 size 0x1c virtual true final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_SignatureAlgorithm() ;

/// @brief Method GetSignature addr 0x10f9524 size 0x1c virtual true final false
 ::ArrayW<uint8_t> GetSignature() ;

/// @brief Method Verify addr 0x10f9540 size 0x90 virtual true final false
 void Verify(Org::BouncyCastle::Crypto::AsymmetricKeyParameter key) ;

/// @brief Method Verify addr 0x10f95d0 size 0xc8 virtual true final false
 void Verify(Org::BouncyCastle::Crypto::IVerifierFactoryProvider verifierProvider) ;

/// @brief Method CheckSignature addr 0x10f9698 size 0x4bc virtual true final false
 void CheckSignature(Org::BouncyCastle::Crypto::IVerifierFactory verifier) ;

/// @brief Method GetEncoded addr 0x10f9b54 size 0x1c virtual true final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method GetX509Extensions addr 0x10f9b70 size 0x24 virtual true final false
 Org::BouncyCastle::Asn1::X509::X509Extensions GetX509Extensions() ;

/// @brief Method GetAttributes addr 0x10f9b94 size 0x168 virtual true final false
 ::ArrayW<Org::BouncyCastle::X509::X509Attribute> GetAttributes() ;

/// @brief Method GetAttributes addr 0x10f9cfc size 0x438 virtual true final false
 ::ArrayW<Org::BouncyCastle::X509::X509Attribute> GetAttributes(::StringW oid) ;

/// @brief Method Equals addr 0x10fa134 size 0xb0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x10fa1e4 size 0x1c virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509
NEED_NO_BOX(Org::BouncyCastle::X509::X509V2AttributeCertificate);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::X509V2AttributeCertificate, "Org.BouncyCastle.X509", "X509V2AttributeCertificate");
