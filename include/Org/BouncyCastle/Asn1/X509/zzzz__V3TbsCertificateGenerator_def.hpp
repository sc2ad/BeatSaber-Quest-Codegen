#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class TbsCertificateStructure;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Time;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Asn1 {
class DerUtcTime;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerTaggedObject;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class V3TbsCertificateGenerator;
}
// Type: Org.BouncyCastle.Asn1.X509::V3TbsCertificateGenerator
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(400))
// CS Name: Org.BouncyCastle.Asn1.X509.V3TbsCertificateGenerator
class CORDL_TYPE V3TbsCertificateGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~V3TbsCertificateGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "V3TbsCertificateGenerator", modifiers: " const&", def_value: None }]
constexpr V3TbsCertificateGenerator(V3TbsCertificateGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "V3TbsCertificateGenerator", modifiers: "&&", def_value: None }]
constexpr V3TbsCertificateGenerator(V3TbsCertificateGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit V3TbsCertificateGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr V3TbsCertificateGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr V3TbsCertificateGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr V3TbsCertificateGenerator& operator=(V3TbsCertificateGenerator&& o) noexcept = default;
  constexpr V3TbsCertificateGenerator& operator=(V3TbsCertificateGenerator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerTaggedObject __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(Org::BouncyCastle::Asn1::DerTaggedObject value) ;

constexpr Org::BouncyCastle::Asn1::DerTaggedObject __get_version() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_serialNumber, put=__set_serialNumber))  serialNumber;

constexpr void __set_serialNumber(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_serialNumber() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_signature, put=__set_signature))  signature;

constexpr void __set_signature(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_signature() const;

 Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=__get_issuer, put=__set_issuer))  issuer;

constexpr void __set_issuer(Org::BouncyCastle::Asn1::X509::X509Name value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Name __get_issuer() const;

 Org::BouncyCastle::Asn1::X509::Time __declspec(property(get=__get_startDate, put=__set_startDate))  startDate;

constexpr void __set_startDate(Org::BouncyCastle::Asn1::X509::Time value) ;

constexpr Org::BouncyCastle::Asn1::X509::Time __get_startDate() const;

 Org::BouncyCastle::Asn1::X509::Time __declspec(property(get=__get_endDate, put=__set_endDate))  endDate;

constexpr void __set_endDate(Org::BouncyCastle::Asn1::X509::Time value) ;

constexpr Org::BouncyCastle::Asn1::X509::Time __get_endDate() const;

 Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=__get_subject, put=__set_subject))  subject;

constexpr void __set_subject(Org::BouncyCastle::Asn1::X509::X509Name value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Name __get_subject() const;

 Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo __declspec(property(get=__get_subjectPublicKeyInfo, put=__set_subjectPublicKeyInfo))  subjectPublicKeyInfo;

constexpr void __set_subjectPublicKeyInfo(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo value) ;

constexpr Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo __get_subjectPublicKeyInfo() const;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=__get_extensions, put=__set_extensions))  extensions;

constexpr void __set_extensions(Org::BouncyCastle::Asn1::X509::X509Extensions value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Extensions __get_extensions() const;

 bool __declspec(property(get=__get_altNamePresentAndCritical, put=__set_altNamePresentAndCritical))  altNamePresentAndCritical;

constexpr void __set_altNamePresentAndCritical(bool value) ;

constexpr bool __get_altNamePresentAndCritical() const;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=__get_issuerUniqueID, put=__set_issuerUniqueID))  issuerUniqueID;

constexpr void __set_issuerUniqueID(Org::BouncyCastle::Asn1::DerBitString value) ;

constexpr Org::BouncyCastle::Asn1::DerBitString __get_issuerUniqueID() const;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=__get_subjectUniqueID, put=__set_subjectUniqueID))  subjectUniqueID;

constexpr void __set_subjectUniqueID(Org::BouncyCastle::Asn1::DerBitString value) ;

constexpr Org::BouncyCastle::Asn1::DerBitString __get_subjectUniqueID() const;


// Methods

static Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator New_ctor() ;

/// @brief Method .ctor addr 0x11129d0 size 0xa0 virtual false final false
 void _ctor() ;

/// @brief Method SetSerialNumber addr 0x1112a70 size 0x8 virtual false final false
 void SetSerialNumber(Org::BouncyCastle::Asn1::DerInteger serialNumber) ;

/// @brief Method SetSignature addr 0x1112a78 size 0x8 virtual false final false
 void SetSignature(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier signature) ;

/// @brief Method SetIssuer addr 0x1112a80 size 0x8 virtual false final false
 void SetIssuer(Org::BouncyCastle::Asn1::X509::X509Name issuer) ;

/// @brief Method SetStartDate addr 0x1112a88 size 0x6c virtual false final false
 void SetStartDate(Org::BouncyCastle::Asn1::DerUtcTime startDate) ;

/// @brief Method SetStartDate addr 0x1112af4 size 0x8 virtual false final false
 void SetStartDate(Org::BouncyCastle::Asn1::X509::Time startDate) ;

/// @brief Method SetEndDate addr 0x1112afc size 0x6c virtual false final false
 void SetEndDate(Org::BouncyCastle::Asn1::DerUtcTime endDate) ;

/// @brief Method SetEndDate addr 0x1112b68 size 0x8 virtual false final false
 void SetEndDate(Org::BouncyCastle::Asn1::X509::Time endDate) ;

/// @brief Method SetSubject addr 0x1112b70 size 0x8 virtual false final false
 void SetSubject(Org::BouncyCastle::Asn1::X509::X509Name subject) ;

/// @brief Method SetIssuerUniqueID addr 0x1112b78 size 0x8 virtual false final false
 void SetIssuerUniqueID(Org::BouncyCastle::Asn1::DerBitString uniqueID) ;

/// @brief Method SetSubjectUniqueID addr 0x1112b80 size 0x8 virtual false final false
 void SetSubjectUniqueID(Org::BouncyCastle::Asn1::DerBitString uniqueID) ;

/// @brief Method SetSubjectPublicKeyInfo addr 0x1112b88 size 0x8 virtual false final false
 void SetSubjectPublicKeyInfo(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo pubKeyInfo) ;

/// @brief Method SetExtensions addr 0x1112b90 size 0x84 virtual false final false
 void SetExtensions(Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

/// @brief Method GenerateTbsCertificate addr 0x1112d08 size 0x3ec virtual false final false
 Org::BouncyCastle::Asn1::X509::TbsCertificateStructure GenerateTbsCertificate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator, "Org.BouncyCastle.Asn1.X509", "V3TbsCertificateGenerator");
