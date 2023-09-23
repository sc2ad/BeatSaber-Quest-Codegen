#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Asn1::X509 {
class V1TbsCertificateGenerator;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace Org::BouncyCastle::Asn1::X509 {
class TbsCertificateStructure;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509V1CertificateGenerator;
}
// Type: Org.BouncyCastle.X509::X509V1CertificateGenerator
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1870))
// CS Name: Org.BouncyCastle.X509.X509V1CertificateGenerator
class CORDL_TYPE X509V1CertificateGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~X509V1CertificateGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509V1CertificateGenerator", modifiers: " const&", def_value: None }]
constexpr X509V1CertificateGenerator(X509V1CertificateGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509V1CertificateGenerator", modifiers: "&&", def_value: None }]
constexpr X509V1CertificateGenerator(X509V1CertificateGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509V1CertificateGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509V1CertificateGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509V1CertificateGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509V1CertificateGenerator& operator=(X509V1CertificateGenerator&& o) noexcept = default;
  constexpr X509V1CertificateGenerator& operator=(X509V1CertificateGenerator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator __declspec(property(get=__get_tbsGen, put=__set_tbsGen))  tbsGen;

constexpr void __set_tbsGen(Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator value) ;

constexpr Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator __get_tbsGen() const;

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
explicit X509V1CertificateGenerator() ;

/// @brief Method .ctor addr 0x10f8188 size 0x6c virtual false final false
 void _ctor() ;

/// @brief Method Reset addr 0x10f81f4 size 0x60 virtual false final false
 void Reset() ;

/// @brief Method SetSerialNumber addr 0x10f8254 size 0xe0 virtual false final false
 void SetSerialNumber(Org::BouncyCastle::Math::BigInteger serialNumber) ;

/// @brief Method SetIssuerDN addr 0x10f8334 size 0x1c virtual false final false
 void SetIssuerDN(Org::BouncyCastle::Asn1::X509::X509Name issuer) ;

/// @brief Method SetNotBefore addr 0x10f8350 size 0x78 virtual false final false
 void SetNotBefore(System::DateTime date) ;

/// @brief Method SetNotAfter addr 0x10f83c8 size 0x78 virtual false final false
 void SetNotAfter(System::DateTime date) ;

/// @brief Method SetSubjectDN addr 0x10f8440 size 0x1c virtual false final false
 void SetSubjectDN(Org::BouncyCastle::Asn1::X509::X509Name subject) ;

/// @brief Method SetPublicKey addr 0x10f845c size 0x114 virtual false final false
 void SetPublicKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

/// @brief Method SetSignatureAlgorithm addr 0x10f8570 size 0x170 virtual false final false
 void SetSignatureAlgorithm(::StringW signatureAlgorithm) ;

/// @brief Method Generate addr 0x10f86e0 size 0x8 virtual false final false
 Org::BouncyCastle::X509::X509Certificate Generate(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey) ;

/// @brief Method Generate addr 0x10f86e8 size 0x84 virtual false final false
 Org::BouncyCastle::X509::X509Certificate Generate(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method Generate addr 0x10f876c size 0x46c virtual false final false
 Org::BouncyCastle::X509::X509Certificate Generate(Org::BouncyCastle::Crypto::ISignatureFactory signatureCalculatorFactory) ;

/// @brief Method GenerateJcaObject addr 0x10f8bd8 size 0xd8 virtual false final false
 Org::BouncyCastle::X509::X509Certificate GenerateJcaObject(Org::BouncyCastle::Asn1::X509::TbsCertificateStructure tbsCert, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier sigAlg, ::ArrayW<uint8_t> signature) ;

/// @brief Method get_SignatureAlgNames addr 0x10f8cb0 size 0x4c virtual false final false
 System::Collections::IEnumerable get_SignatureAlgNames() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509
NEED_NO_BOX(Org::BouncyCastle::X509::X509V1CertificateGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::X509V1CertificateGenerator, "Org.BouncyCastle.X509", "X509V1CertificateGenerator");
