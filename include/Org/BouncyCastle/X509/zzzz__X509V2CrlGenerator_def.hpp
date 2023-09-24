#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509ExtensionsGenerator;
}
namespace Org::BouncyCastle::X509 {
class X509Crl;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1::X509 {
class TbsCertificateList;
}
namespace Org::BouncyCastle::Asn1::X509 {
class V2TbsCertListGenerator;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509V2CrlGenerator;
}
// Type: Org.BouncyCastle.X509::X509V2CrlGenerator
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1873))
// CS Name: Org.BouncyCastle.X509.X509V2CrlGenerator
class CORDL_TYPE X509V2CrlGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~X509V2CrlGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509V2CrlGenerator", modifiers: " const&", def_value: None }]
constexpr X509V2CrlGenerator(X509V2CrlGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509V2CrlGenerator", modifiers: "&&", def_value: None }]
constexpr X509V2CrlGenerator(X509V2CrlGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509V2CrlGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509V2CrlGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509V2CrlGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509V2CrlGenerator& operator=(X509V2CrlGenerator&& o) noexcept = default;
  constexpr X509V2CrlGenerator& operator=(X509V2CrlGenerator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator __declspec(property(get=__get_extGenerator, put=__set_extGenerator))  extGenerator;

constexpr void __set_extGenerator(Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator __get_extGenerator() const;

 Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator __declspec(property(get=__get_tbsGen, put=__set_tbsGen))  tbsGen;

constexpr void __set_tbsGen(Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator value) ;

constexpr Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator __get_tbsGen() const;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sigOID, put=__set_sigOID))  sigOID;

constexpr void __set_sigOID(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sigOID() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_sigAlgId, put=__set_sigAlgId))  sigAlgId;

constexpr void __set_sigAlgId(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_sigAlgId() const;

 ::StringW __declspec(property(get=__get_signatureAlgorithm, put=__set_signatureAlgorithm))  signatureAlgorithm;

constexpr void __set_signatureAlgorithm(::StringW value) ;

constexpr ::StringW __get_signatureAlgorithm() const;


// Properties

 System::Collections::IEnumerable __declspec(property(get=get_SignatureAlgNames))  SignatureAlgNames;


// Methods

static Org::BouncyCastle::X509::X509V2CrlGenerator New_ctor() ;

/// @brief Method .ctor addr 0x10fae28 size 0x9c virtual false final false
 void _ctor() ;

/// @brief Method Reset addr 0x10faec4 size 0x6c virtual false final false
 void Reset() ;

/// @brief Method SetIssuerDN addr 0x10faf30 size 0x1c virtual false final false
 void SetIssuerDN(Org::BouncyCastle::Asn1::X509::X509Name issuer) ;

/// @brief Method SetThisUpdate addr 0x10faf4c size 0x78 virtual false final false
 void SetThisUpdate(System::DateTime date) ;

/// @brief Method SetNextUpdate addr 0x10fafc4 size 0x78 virtual false final false
 void SetNextUpdate(System::DateTime date) ;

/// @brief Method AddCrlEntry addr 0x10fb03c size 0xc8 virtual false final false
 void AddCrlEntry(Org::BouncyCastle::Math::BigInteger userCertificate, System::DateTime revocationDate, int32_t reason) ;

/// @brief Method AddCrlEntry addr 0x10fb104 size 0x100 virtual false final false
 void AddCrlEntry(Org::BouncyCastle::Math::BigInteger userCertificate, System::DateTime revocationDate, int32_t reason, System::DateTime invalidityDate) ;

/// @brief Method AddCrlEntry addr 0x10fb204 size 0xc8 virtual false final false
 void AddCrlEntry(Org::BouncyCastle::Math::BigInteger userCertificate, System::DateTime revocationDate, Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

/// @brief Method AddCrl addr 0x10fb2cc size 0x4a0 virtual false final false
 void AddCrl(Org::BouncyCastle::X509::X509Crl other) ;

/// @brief Method SetSignatureAlgorithm addr 0x10fb76c size 0x164 virtual false final false
 void SetSignatureAlgorithm(::StringW signatureAlgorithm) ;

/// @brief Method AddExtension addr 0x10fb8d0 size 0x98 virtual false final false
 void AddExtension(::StringW oid, bool critical, Org::BouncyCastle::Asn1::Asn1Encodable extensionValue) ;

/// @brief Method AddExtension addr 0x10fb968 size 0x20 virtual false final false
 void AddExtension(Org::BouncyCastle::Asn1::DerObjectIdentifier oid, bool critical, Org::BouncyCastle::Asn1::Asn1Encodable extensionValue) ;

/// @brief Method AddExtension addr 0x10fb988 size 0xc8 virtual false final false
 void AddExtension(::StringW oid, bool critical, ::ArrayW<uint8_t> extensionValue) ;

/// @brief Method AddExtension addr 0x10fba50 size 0x98 virtual false final false
 void AddExtension(Org::BouncyCastle::Asn1::DerObjectIdentifier oid, bool critical, ::ArrayW<uint8_t> extensionValue) ;

/// @brief Method Generate addr 0x10fbae8 size 0x8 virtual false final false
 Org::BouncyCastle::X509::X509Crl Generate(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey) ;

/// @brief Method Generate addr 0x10fbaf0 size 0x84 virtual false final false
 Org::BouncyCastle::X509::X509Crl Generate(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method Generate addr 0x10fbb74 size 0x464 virtual false final false
 Org::BouncyCastle::X509::X509Crl Generate(Org::BouncyCastle::Crypto::ISignatureFactory signatureCalculatorFactory) ;

/// @brief Method GenerateCertList addr 0x10fbfd8 size 0x58 virtual false final false
 Org::BouncyCastle::Asn1::X509::TbsCertificateList GenerateCertList() ;

/// @brief Method GenerateJcaObject addr 0x10fc030 size 0x18c virtual false final false
 Org::BouncyCastle::X509::X509Crl GenerateJcaObject(Org::BouncyCastle::Asn1::X509::TbsCertificateList tbsCrl, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algId, ::ArrayW<uint8_t> signature) ;

/// @brief Method get_SignatureAlgNames addr 0x10fc1bc size 0x4c virtual false final false
 System::Collections::IEnumerable get_SignatureAlgNames() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509
NEED_NO_BOX(Org::BouncyCastle::X509::X509V2CrlGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::X509V2CrlGenerator, "Org.BouncyCastle.X509", "X509V2CrlGenerator");
