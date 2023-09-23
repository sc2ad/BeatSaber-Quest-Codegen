#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::X509 {
class AttributeCertificateIssuer;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::X509 {
class AttributeCertificateHolder;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace Org::BouncyCastle::X509 {
class X509Attribute;
}
namespace Org::BouncyCastle::X509 {
class IX509AttributeCertificate;
}
namespace Org::BouncyCastle::Asn1::X509 {
class V2AttributeCertificateInfoGenerator;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509ExtensionsGenerator;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509V2AttributeCertificateGenerator;
}
// Type: Org.BouncyCastle.X509::X509V2AttributeCertificateGenerator
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1872))
// CS Name: Org.BouncyCastle.X509.X509V2AttributeCertificateGenerator
class CORDL_TYPE X509V2AttributeCertificateGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~X509V2AttributeCertificateGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509V2AttributeCertificateGenerator", modifiers: " const&", def_value: None }]
constexpr X509V2AttributeCertificateGenerator(X509V2AttributeCertificateGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509V2AttributeCertificateGenerator", modifiers: "&&", def_value: None }]
constexpr X509V2AttributeCertificateGenerator(X509V2AttributeCertificateGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509V2AttributeCertificateGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509V2AttributeCertificateGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509V2AttributeCertificateGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509V2AttributeCertificateGenerator& operator=(X509V2AttributeCertificateGenerator&& o) noexcept = default;
  constexpr X509V2AttributeCertificateGenerator& operator=(X509V2AttributeCertificateGenerator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator __declspec(property(get=__get_extGenerator, put=__set_extGenerator))  extGenerator;

constexpr void __set_extGenerator(Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator __get_extGenerator() const;

 Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator __declspec(property(get=__get_acInfoGen, put=__set_acInfoGen))  acInfoGen;

constexpr void __set_acInfoGen(Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator value) ;

constexpr Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator __get_acInfoGen() const;

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

// Ctor Parameters []
explicit X509V2AttributeCertificateGenerator() ;

/// @brief Method .ctor addr 0x10fa200 size 0x9c virtual false final false
 void _ctor() ;

/// @brief Method Reset addr 0x10fa29c size 0x6c virtual false final false
 void Reset() ;

/// @brief Method SetHolder addr 0x10fa308 size 0x24 virtual false final false
 void SetHolder(Org::BouncyCastle::X509::AttributeCertificateHolder holder) ;

/// @brief Method SetIssuer addr 0x10fa32c size 0x2c virtual false final false
 void SetIssuer(Org::BouncyCastle::X509::AttributeCertificateIssuer issuer) ;

/// @brief Method SetSerialNumber addr 0x10fa358 size 0x78 virtual false final false
 void SetSerialNumber(Org::BouncyCastle::Math::BigInteger serialNumber) ;

/// @brief Method SetNotBefore addr 0x10fa3d0 size 0x78 virtual false final false
 void SetNotBefore(System::DateTime date) ;

/// @brief Method SetNotAfter addr 0x10fa448 size 0x78 virtual false final false
 void SetNotAfter(System::DateTime date) ;

/// @brief Method SetSignatureAlgorithm addr 0x10fa4c0 size 0x15c virtual false final false
 void SetSignatureAlgorithm(::StringW signatureAlgorithm) ;

/// @brief Method AddAttribute addr 0x10fa61c size 0x44 virtual false final false
 void AddAttribute(Org::BouncyCastle::X509::X509Attribute attribute) ;

/// @brief Method SetIssuerUniqueId addr 0x10fa660 size 0x44 virtual false final false
 void SetIssuerUniqueId(::ArrayW<bool> iui) ;

/// @brief Method AddExtension addr 0x10fa6a4 size 0x98 virtual false final false
 void AddExtension(::StringW oid, bool critical, Org::BouncyCastle::Asn1::Asn1Encodable extensionValue) ;

/// @brief Method AddExtension addr 0x10fa73c size 0x98 virtual false final false
 void AddExtension(::StringW oid, bool critical, ::ArrayW<uint8_t> extensionValue) ;

/// @brief Method Generate addr 0x10fa7d4 size 0x8 virtual false final false
 Org::BouncyCastle::X509::IX509AttributeCertificate Generate(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey) ;

/// @brief Method Generate addr 0x10fa7dc size 0x84 virtual false final false
 Org::BouncyCastle::X509::IX509AttributeCertificate Generate(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method Generate addr 0x10fa860 size 0x57c virtual false final false
 Org::BouncyCastle::X509::IX509AttributeCertificate Generate(Org::BouncyCastle::Crypto::ISignatureFactory signatureCalculatorFactory) ;

/// @brief Method get_SignatureAlgNames addr 0x10faddc size 0x4c virtual false final false
 System::Collections::IEnumerable get_SignatureAlgNames() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509
NEED_NO_BOX(Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator, "Org.BouncyCastle.X509", "X509V2AttributeCertificateGenerator");
