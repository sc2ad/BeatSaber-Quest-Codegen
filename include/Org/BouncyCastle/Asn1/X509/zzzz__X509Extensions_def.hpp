#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extension;
}
namespace System::Collections {
class ArrayList;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
// Type: Org.BouncyCastle.Asn1.X509::X509Extensions
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(406))
// CS Name: Org.BouncyCastle.Asn1.X509.X509Extensions
class CORDL_TYPE X509Extensions : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~X509Extensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Extensions", modifiers: " const&", def_value: None }]
constexpr X509Extensions(X509Extensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Extensions", modifiers: "&&", def_value: None }]
constexpr X509Extensions(X509Extensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509Extensions(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr X509Extensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509Extensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509Extensions& operator=(X509Extensions&& o) noexcept = default;
  constexpr X509Extensions& operator=(X509Extensions const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SubjectDirectoryAttributes, put=__set_SubjectDirectoryAttributes))  SubjectDirectoryAttributes;

static void __set_SubjectDirectoryAttributes(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SubjectDirectoryAttributes() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SubjectKeyIdentifier, put=__set_SubjectKeyIdentifier))  SubjectKeyIdentifier;

static void __set_SubjectKeyIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SubjectKeyIdentifier() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_KeyUsage, put=__set_KeyUsage))  KeyUsage;

static void __set_KeyUsage(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_KeyUsage() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PrivateKeyUsagePeriod, put=__set_PrivateKeyUsagePeriod))  PrivateKeyUsagePeriod;

static void __set_PrivateKeyUsagePeriod(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PrivateKeyUsagePeriod() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SubjectAlternativeName, put=__set_SubjectAlternativeName))  SubjectAlternativeName;

static void __set_SubjectAlternativeName(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SubjectAlternativeName() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IssuerAlternativeName, put=__set_IssuerAlternativeName))  IssuerAlternativeName;

static void __set_IssuerAlternativeName(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IssuerAlternativeName() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_BasicConstraints, put=__set_BasicConstraints))  BasicConstraints;

static void __set_BasicConstraints(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_BasicConstraints() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_CrlNumber, put=__set_CrlNumber))  CrlNumber;

static void __set_CrlNumber(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_CrlNumber() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ReasonCode, put=__set_ReasonCode))  ReasonCode;

static void __set_ReasonCode(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ReasonCode() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_InstructionCode, put=__set_InstructionCode))  InstructionCode;

static void __set_InstructionCode(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_InstructionCode() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_InvalidityDate, put=__set_InvalidityDate))  InvalidityDate;

static void __set_InvalidityDate(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_InvalidityDate() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DeltaCrlIndicator, put=__set_DeltaCrlIndicator))  DeltaCrlIndicator;

static void __set_DeltaCrlIndicator(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DeltaCrlIndicator() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IssuingDistributionPoint, put=__set_IssuingDistributionPoint))  IssuingDistributionPoint;

static void __set_IssuingDistributionPoint(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IssuingDistributionPoint() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_CertificateIssuer, put=__set_CertificateIssuer))  CertificateIssuer;

static void __set_CertificateIssuer(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_CertificateIssuer() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_NameConstraints, put=__set_NameConstraints))  NameConstraints;

static void __set_NameConstraints(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_NameConstraints() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_CrlDistributionPoints, put=__set_CrlDistributionPoints))  CrlDistributionPoints;

static void __set_CrlDistributionPoints(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_CrlDistributionPoints() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_CertificatePolicies, put=__set_CertificatePolicies))  CertificatePolicies;

static void __set_CertificatePolicies(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_CertificatePolicies() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PolicyMappings, put=__set_PolicyMappings))  PolicyMappings;

static void __set_PolicyMappings(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PolicyMappings() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_AuthorityKeyIdentifier, put=__set_AuthorityKeyIdentifier))  AuthorityKeyIdentifier;

static void __set_AuthorityKeyIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_AuthorityKeyIdentifier() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PolicyConstraints, put=__set_PolicyConstraints))  PolicyConstraints;

static void __set_PolicyConstraints(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PolicyConstraints() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ExtendedKeyUsage, put=__set_ExtendedKeyUsage))  ExtendedKeyUsage;

static void __set_ExtendedKeyUsage(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ExtendedKeyUsage() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_FreshestCrl, put=__set_FreshestCrl))  FreshestCrl;

static void __set_FreshestCrl(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_FreshestCrl() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_InhibitAnyPolicy, put=__set_InhibitAnyPolicy))  InhibitAnyPolicy;

static void __set_InhibitAnyPolicy(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_InhibitAnyPolicy() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_AuthorityInfoAccess, put=__set_AuthorityInfoAccess))  AuthorityInfoAccess;

static void __set_AuthorityInfoAccess(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_AuthorityInfoAccess() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SubjectInfoAccess, put=__set_SubjectInfoAccess))  SubjectInfoAccess;

static void __set_SubjectInfoAccess(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SubjectInfoAccess() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_LogoType, put=__set_LogoType))  LogoType;

static void __set_LogoType(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_LogoType() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_BiometricInfo, put=__set_BiometricInfo))  BiometricInfo;

static void __set_BiometricInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_BiometricInfo() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_QCStatements, put=__set_QCStatements))  QCStatements;

static void __set_QCStatements(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_QCStatements() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_AuditIdentity, put=__set_AuditIdentity))  AuditIdentity;

static void __set_AuditIdentity(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_AuditIdentity() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_NoRevAvail, put=__set_NoRevAvail))  NoRevAvail;

static void __set_NoRevAvail(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_NoRevAvail() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_TargetInformation, put=__set_TargetInformation))  TargetInformation;

static void __set_TargetInformation(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_TargetInformation() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ExpiredCertsOnCrl, put=__set_ExpiredCertsOnCrl))  ExpiredCertsOnCrl;

static void __set_ExpiredCertsOnCrl(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ExpiredCertsOnCrl() ;

 ::System::Collections::IDictionary __declspec(property(get=__get_extensions, put=__set_extensions))  extensions;

constexpr void __set_extensions(::System::Collections::IDictionary value) ;

constexpr ::System::Collections::IDictionary __get_extensions() const;

 ::System::Collections::IList __declspec(property(get=__get_ordering, put=__set_ordering))  ordering;

constexpr void __set_ordering(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_ordering() const;


// Properties

 ::System::Collections::IEnumerable __declspec(property(get=get_ExtensionOids))  ExtensionOids;


// Methods

/// @brief Method GetExtension addr 0x1113c40 size 0xc virtual false final false
static ::Org::BouncyCastle::Asn1::X509::X509Extension GetExtension(::Org::BouncyCastle::Asn1::X509::X509Extensions extensions, ::Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method GetExtensionParsedValue addr 0x11009e8 size 0xc virtual false final false
static ::Org::BouncyCastle::Asn1::Asn1Encodable GetExtensionParsedValue(::Org::BouncyCastle::Asn1::X509::X509Extensions extensions, ::Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method GetInstance addr 0x1113c68 size 0x78 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::X509Extensions GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0x110ec7c size 0x1ec virtual false final false
static ::Org::BouncyCastle::Asn1::X509::X509Extensions GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit X509Extensions(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x1113ce0 size 0x7f0 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "extensions", ty: "::System::Collections::IDictionary", modifiers: "", def_value: None }]
explicit X509Extensions(::System::Collections::IDictionary extensions) ;

/// @brief Method .ctor addr 0x11144d0 size 0xc virtual false final false
 void _ctor(::System::Collections::IDictionary extensions) ;

// Ctor Parameters [CppParam { name: "ordering", ty: "::System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "extensions", ty: "::System::Collections::IDictionary", modifiers: "", def_value: None }]
explicit X509Extensions(::System::Collections::IList ordering, ::System::Collections::IDictionary extensions) ;

/// @brief Method .ctor addr 0x11144dc size 0x564 virtual false final false
 void _ctor(::System::Collections::IList ordering, ::System::Collections::IDictionary extensions) ;

// Ctor Parameters [CppParam { name: "oids", ty: "::System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "values", ty: "::System::Collections::IList", modifiers: "", def_value: None }]
explicit X509Extensions(::System::Collections::IList oids, ::System::Collections::IList values) ;

/// @brief Method .ctor addr 0x1111e98 size 0x4fc virtual false final false
 void _ctor(::System::Collections::IList oids, ::System::Collections::IList values) ;

// Ctor Parameters [CppParam { name: "extensions", ty: "::System::Collections::Hashtable", modifiers: "", def_value: None }]
explicit X509Extensions(::System::Collections::Hashtable extensions) ;

/// @brief Method .ctor addr 0x1114a40 size 0xc virtual false final false
 void _ctor(::System::Collections::Hashtable extensions) ;

// Ctor Parameters [CppParam { name: "ordering", ty: "::System::Collections::ArrayList", modifiers: "", def_value: None }, CppParam { name: "extensions", ty: "::System::Collections::Hashtable", modifiers: "", def_value: None }]
explicit X509Extensions(::System::Collections::ArrayList ordering, ::System::Collections::Hashtable extensions) ;

/// @brief Method .ctor addr 0x1114a4c size 0x4d8 virtual false final false
 void _ctor(::System::Collections::ArrayList ordering, ::System::Collections::Hashtable extensions) ;

// Ctor Parameters [CppParam { name: "oids", ty: "::System::Collections::ArrayList", modifiers: "", def_value: None }, CppParam { name: "values", ty: "::System::Collections::ArrayList", modifiers: "", def_value: None }]
explicit X509Extensions(::System::Collections::ArrayList oids, ::System::Collections::ArrayList values) ;

/// @brief Method .ctor addr 0x1114f24 size 0x4a4 virtual false final false
 void _ctor(::System::Collections::ArrayList oids, ::System::Collections::ArrayList values) ;

/// @brief Method Oids addr 0x11153c8 size 0xa8 virtual false final false
 ::System::Collections::IEnumerator Oids() ;

/// @brief Method get_ExtensionOids addr 0x1115470 size 0x68 virtual false final false
 ::System::Collections::IEnumerable get_ExtensionOids() ;

/// @brief Method GetExtension addr 0x1112c14 size 0xf4 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::X509Extension GetExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method GetExtensionParsedValue addr 0x1113c4c size 0x1c virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Encodable GetExtensionParsedValue(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method ToAsn1Object addr 0x11154d8 size 0x5d8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

/// @brief Method Equivalent addr 0x1115ab0 size 0x5d0 virtual false final false
 bool Equivalent(::Org::BouncyCastle::Asn1::X509::X509Extensions other) ;

/// @brief Method GetExtensionOids addr 0x1116080 size 0x58 virtual false final false
 ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier> GetExtensionOids() ;

/// @brief Method GetNonCriticalExtensionOids addr 0x1116208 size 0x8 virtual false final false
 ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier> GetNonCriticalExtensionOids() ;

/// @brief Method GetCriticalExtensionOids addr 0x1116720 size 0x8 virtual false final false
 ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier> GetCriticalExtensionOids() ;

/// @brief Method GetExtensionOids addr 0x1116210 size 0x510 virtual false final false
 ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier> GetExtensionOids(bool isCritical) ;

/// @brief Method ToOidArray addr 0x11160d8 size 0x130 virtual false final false
static ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier> ToOidArray(::System::Collections::IList oids) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::X509Extensions);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::X509Extensions, "Org.BouncyCastle.Asn1.X509", "X509Extensions");
