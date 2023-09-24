#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::Crmf {
class OptionalValidity;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertTemplate;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class CertTemplateBuilder;
}
// Type: Org.BouncyCastle.Asn1.Crmf::CertTemplateBuilder
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(108))
// CS Name: Org.BouncyCastle.Asn1.Crmf.CertTemplateBuilder
class CORDL_TYPE CertTemplateBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~CertTemplateBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertTemplateBuilder", modifiers: " const&", def_value: None }]
constexpr CertTemplateBuilder(CertTemplateBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertTemplateBuilder", modifiers: "&&", def_value: None }]
constexpr CertTemplateBuilder(CertTemplateBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertTemplateBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CertTemplateBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertTemplateBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertTemplateBuilder& operator=(CertTemplateBuilder&& o) noexcept = default;
  constexpr CertTemplateBuilder& operator=(CertTemplateBuilder const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_serialNumber, put=__set_serialNumber))  serialNumber;

constexpr void __set_serialNumber(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_serialNumber() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_signingAlg, put=__set_signingAlg))  signingAlg;

constexpr void __set_signingAlg(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_signingAlg() const;

 Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=__get_issuer, put=__set_issuer))  issuer;

constexpr void __set_issuer(Org::BouncyCastle::Asn1::X509::X509Name value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Name __get_issuer() const;

 Org::BouncyCastle::Asn1::Crmf::OptionalValidity __declspec(property(get=__get_validity, put=__set_validity))  validity;

constexpr void __set_validity(Org::BouncyCastle::Asn1::Crmf::OptionalValidity value) ;

constexpr Org::BouncyCastle::Asn1::Crmf::OptionalValidity __get_validity() const;

 Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=__get_subject, put=__set_subject))  subject;

constexpr void __set_subject(Org::BouncyCastle::Asn1::X509::X509Name value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Name __get_subject() const;

 Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo __declspec(property(get=__get_publicKey, put=__set_publicKey))  publicKey;

constexpr void __set_publicKey(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo value) ;

constexpr Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo __get_publicKey() const;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=__get_issuerUID, put=__set_issuerUID))  issuerUID;

constexpr void __set_issuerUID(Org::BouncyCastle::Asn1::DerBitString value) ;

constexpr Org::BouncyCastle::Asn1::DerBitString __get_issuerUID() const;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=__get_subjectUID, put=__set_subjectUID))  subjectUID;

constexpr void __set_subjectUID(Org::BouncyCastle::Asn1::DerBitString value) ;

constexpr Org::BouncyCastle::Asn1::DerBitString __get_subjectUID() const;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=__get_extensions, put=__set_extensions))  extensions;

constexpr void __set_extensions(Org::BouncyCastle::Asn1::X509::X509Extensions value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Extensions __get_extensions() const;


// Methods

/// @brief Method SetVersion addr 0xdf7398 size 0x70 virtual true final false
 Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder SetVersion(int32_t ver) ;

/// @brief Method SetSerialNumber addr 0xdf7408 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder SetSerialNumber(Org::BouncyCastle::Asn1::DerInteger ser) ;

/// @brief Method SetSigningAlg addr 0xdf7410 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder SetSigningAlg(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier aid) ;

/// @brief Method SetIssuer addr 0xdf7418 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder SetIssuer(Org::BouncyCastle::Asn1::X509::X509Name name) ;

/// @brief Method SetValidity addr 0xdf7420 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder SetValidity(Org::BouncyCastle::Asn1::Crmf::OptionalValidity v) ;

/// @brief Method SetSubject addr 0xdf7428 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder SetSubject(Org::BouncyCastle::Asn1::X509::X509Name name) ;

/// @brief Method SetPublicKey addr 0xdf7430 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder SetPublicKey(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo spki) ;

/// @brief Method SetIssuerUID addr 0xdf7438 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder SetIssuerUID(Org::BouncyCastle::Asn1::DerBitString uid) ;

/// @brief Method SetSubjectUID addr 0xdf7440 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder SetSubjectUID(Org::BouncyCastle::Asn1::DerBitString uid) ;

/// @brief Method SetExtensions addr 0xdf7448 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder SetExtensions(Org::BouncyCastle::Asn1::X509::X509Extensions extens) ;

/// @brief Method Build addr 0xdf7450 size 0x158 virtual true final false
 Org::BouncyCastle::Asn1::Crmf::CertTemplate Build() ;

/// @brief Method AddOptional addr 0xdf75a8 size 0xa0 virtual false final false
 void AddOptional(Org::BouncyCastle::Asn1::Asn1EncodableVector v, int32_t tagNo, bool isExplicit, Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

static Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder New_ctor() ;

/// @brief Method .ctor addr 0xdf7648 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder, "Org.BouncyCastle.Asn1.Crmf", "CertTemplateBuilder");
