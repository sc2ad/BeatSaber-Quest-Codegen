#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class OptionalValidity;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class CertTemplate;
}
// Type: Org.BouncyCastle.Asn1.Crmf::CertTemplate
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(107))
// CS Name: Org.BouncyCastle.Asn1.Crmf.CertTemplate
class CORDL_TYPE CertTemplate : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~CertTemplate() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertTemplate", modifiers: " const&", def_value: None }]
constexpr CertTemplate(CertTemplate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertTemplate", modifiers: "&&", def_value: None }]
constexpr CertTemplate(CertTemplate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertTemplate(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CertTemplate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertTemplate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertTemplate& operator=(CertTemplate&& o) noexcept = default;
  constexpr CertTemplate& operator=(CertTemplate const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_seq, put=__set_seq))  seq;

constexpr void __set_seq(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_seq() const;

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


// Properties

 int32_t __declspec(property(get=get_Version))  Version;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_SerialNumber))  SerialNumber;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_SigningAlg))  SigningAlg;

 Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=get_Issuer))  Issuer;

 Org::BouncyCastle::Asn1::Crmf::OptionalValidity __declspec(property(get=get_Validity))  Validity;

 Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=get_Subject))  Subject;

 Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo __declspec(property(get=get_PublicKey))  PublicKey;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=get_IssuerUID))  IssuerUID;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=get_SubjectUID))  SubjectUID;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=get_Extensions))  Extensions;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CertTemplate(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdf6b7c size 0x56c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdf66f8 size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::Crmf::CertTemplate GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_Version addr 0xdf72b0 size 0x18 virtual true final false
 int32_t get_Version() ;

/// @brief Method get_SerialNumber addr 0xdf7348 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::DerInteger get_SerialNumber() ;

/// @brief Method get_SigningAlg addr 0xdf7350 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_SigningAlg() ;

/// @brief Method get_Issuer addr 0xdf7358 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::X509Name get_Issuer() ;

/// @brief Method get_Validity addr 0xdf7360 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Crmf::OptionalValidity get_Validity() ;

/// @brief Method get_Subject addr 0xdf7368 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::X509Name get_Subject() ;

/// @brief Method get_PublicKey addr 0xdf7370 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo get_PublicKey() ;

/// @brief Method get_IssuerUID addr 0xdf7378 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::DerBitString get_IssuerUID() ;

/// @brief Method get_SubjectUID addr 0xdf7380 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::DerBitString get_SubjectUID() ;

/// @brief Method get_Extensions addr 0xdf7388 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::X509Extensions get_Extensions() ;

/// @brief Method ToAsn1Object addr 0xdf7390 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Crmf::CertTemplate);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Crmf::CertTemplate, "Org.BouncyCastle.Asn1.Crmf", "CertTemplate");
