#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class CertificationRequestInfo;
}
// Type: Org.BouncyCastle.Asn1.Pkcs::CertificationRequestInfo
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(230))
// CS Name: Org.BouncyCastle.Asn1.Pkcs.CertificationRequestInfo
class CORDL_TYPE CertificationRequestInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~CertificationRequestInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificationRequestInfo", modifiers: " const&", def_value: None }]
constexpr CertificationRequestInfo(CertificationRequestInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificationRequestInfo", modifiers: "&&", def_value: None }]
constexpr CertificationRequestInfo(CertificationRequestInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertificationRequestInfo(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CertificationRequestInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertificationRequestInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertificationRequestInfo& operator=(CertificationRequestInfo&& o) noexcept = default;
  constexpr CertificationRequestInfo& operator=(CertificationRequestInfo const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 ::Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=__get_subject, put=__set_subject))  subject;

constexpr void __set_subject(::Org::BouncyCastle::Asn1::X509::X509Name value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::X509Name __get_subject() const;

 ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo __declspec(property(get=__get_subjectPKInfo, put=__set_subjectPKInfo))  subjectPKInfo;

constexpr void __set_subjectPKInfo(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo __get_subjectPKInfo() const;

 ::Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_attributes, put=__set_attributes))  attributes;

constexpr void __set_attributes(::Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set __get_attributes() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Version))  Version;

 ::Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=get_Subject))  Subject;

 ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo __declspec(property(get=get_SubjectPublicKeyInfo))  SubjectPublicKeyInfo;

 ::Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=get_Attributes))  Attributes;


// Methods

/// @brief Method GetInstance addr 0xef81c4 size 0xa4 virtual false final false
static ::Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "subject", ty: "::Org::BouncyCastle::Asn1::X509::X509Name", modifiers: "", def_value: None }, CppParam { name: "pkInfo", ty: "::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo", modifiers: "", def_value: None }, CppParam { name: "attributes", ty: "::Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }]
explicit CertificationRequestInfo(::Org::BouncyCastle::Asn1::X509::X509Name subject, ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo pkInfo, ::Org::BouncyCastle::Asn1::Asn1Set attributes) ;

/// @brief Method .ctor addr 0xef8614 size 0xfc virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name subject, ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo pkInfo, ::Org::BouncyCastle::Asn1::Asn1Set attributes) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CertificationRequestInfo(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xef83bc size 0x258 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_Version addr 0xef8ad0 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerInteger get_Version() ;

/// @brief Method get_Subject addr 0xef8ad8 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::X509Name get_Subject() ;

/// @brief Method get_SubjectPublicKeyInfo addr 0xef8ae0 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo get_SubjectPublicKeyInfo() ;

/// @brief Method get_Attributes addr 0xef8ae8 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Set get_Attributes() ;

/// @brief Method ToAsn1Object addr 0xef8af0 size 0x16c virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

/// @brief Method ValidateAttributes addr 0xef8710 size 0x3c0 virtual false final false
static void ValidateAttributes(::Org::BouncyCastle::Asn1::Asn1Set attributes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Pkcs
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo, "Org.BouncyCastle.Asn1.Pkcs", "CertificationRequestInfo");
