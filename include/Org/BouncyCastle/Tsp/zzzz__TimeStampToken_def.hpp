#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Cms {
class SignerInformation;
}
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampTokenInfo;
}
namespace Org::BouncyCastle::Cms {
class CmsSignedData;
}
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Cms {
class SignerID;
}
namespace Org::BouncyCastle::Asn1::Ess {
class EssCertIDv2;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class IssuerSerial;
}
namespace Org::BouncyCastle::Asn1::Ess {
class EssCertID;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TimeStampToken;
}
namespace Org::BouncyCastle::Tsp {
class ____Org__BouncyCastle__Tsp__TimeStampToken__CertID;
}
// Type: ::CertID
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1769))
// CS Name: Org.BouncyCastle.Tsp.TimeStampToken::CertID
class CORDL_TYPE ____Org__BouncyCastle__Tsp__TimeStampToken__CertID : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Org__BouncyCastle__Tsp__TimeStampToken__CertID() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Tsp__TimeStampToken__CertID", modifiers: " const&", def_value: None }]
constexpr ____Org__BouncyCastle__Tsp__TimeStampToken__CertID(____Org__BouncyCastle__Tsp__TimeStampToken__CertID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Tsp__TimeStampToken__CertID", modifiers: "&&", def_value: None }]
constexpr ____Org__BouncyCastle__Tsp__TimeStampToken__CertID(____Org__BouncyCastle__Tsp__TimeStampToken__CertID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__Tsp__TimeStampToken__CertID(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Org__BouncyCastle__Tsp__TimeStampToken__CertID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Tsp__TimeStampToken__CertID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Tsp__TimeStampToken__CertID& operator=(____Org__BouncyCastle__Tsp__TimeStampToken__CertID&& o) noexcept = default;
  constexpr ____Org__BouncyCastle__Tsp__TimeStampToken__CertID& operator=(____Org__BouncyCastle__Tsp__TimeStampToken__CertID const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Ess::EssCertID __declspec(property(get=__get_certID, put=__set_certID))  certID;

constexpr void __set_certID(::Org::BouncyCastle::Asn1::Ess::EssCertID value) ;

constexpr ::Org::BouncyCastle::Asn1::Ess::EssCertID __get_certID() const;

 ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2 __declspec(property(get=__get_certIDv2, put=__set_certIDv2))  certIDv2;

constexpr void __set_certIDv2(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2 value) ;

constexpr ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2 __get_certIDv2() const;


// Properties

 ::Org::BouncyCastle::Asn1::X509::IssuerSerial __declspec(property(get=get_IssuerSerial))  IssuerSerial;


// Methods

// Ctor Parameters [CppParam { name: "certID", ty: "::Org::BouncyCastle::Asn1::Ess::EssCertID", modifiers: "", def_value: None }]
explicit ____Org__BouncyCastle__Tsp__TimeStampToken__CertID(::Org::BouncyCastle::Asn1::Ess::EssCertID certID) ;

/// @brief Method .ctor addr 0x10c69ac size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Ess::EssCertID certID) ;

// Ctor Parameters [CppParam { name: "certID", ty: "::Org::BouncyCastle::Asn1::Ess::EssCertIDv2", modifiers: "", def_value: None }]
explicit ____Org__BouncyCastle__Tsp__TimeStampToken__CertID(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2 certID) ;

/// @brief Method .ctor addr 0x10c69d4 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2 certID) ;

/// @brief Method GetHashAlgorithmName addr 0x10c7104 size 0xf8 virtual false final false
 ::StringW GetHashAlgorithmName() ;

/// @brief Method GetHashAlgorithm addr 0x10c764c size 0xac virtual false final false
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier GetHashAlgorithm() ;

/// @brief Method GetCertHash addr 0x10c71fc size 0x34 virtual false final false
 ::ArrayW<uint8_t> GetCertHash() ;

/// @brief Method get_IssuerSerial addr 0x10c7230 size 0x30 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::IssuerSerial get_IssuerSerial() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Tsp
// Type: Org.BouncyCastle.Tsp::TimeStampToken
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1770))
// CS Name: Org.BouncyCastle.Tsp.TimeStampToken
class CORDL_TYPE TimeStampToken : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using CertID = ::Org::BouncyCastle::Tsp::____Org__BouncyCastle__Tsp__TimeStampToken__CertID;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TimeStampToken() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampToken", modifiers: " const&", def_value: None }]
constexpr TimeStampToken(TimeStampToken const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampToken", modifiers: "&&", def_value: None }]
constexpr TimeStampToken(TimeStampToken&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeStampToken(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TimeStampToken& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeStampToken& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeStampToken& operator=(TimeStampToken&& o) noexcept = default;
  constexpr TimeStampToken& operator=(TimeStampToken const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Cms::CmsSignedData __declspec(property(get=__get_tsToken, put=__set_tsToken))  tsToken;

constexpr void __set_tsToken(::Org::BouncyCastle::Cms::CmsSignedData value) ;

constexpr ::Org::BouncyCastle::Cms::CmsSignedData __get_tsToken() const;

 ::Org::BouncyCastle::Cms::SignerInformation __declspec(property(get=__get_tsaSignerInfo, put=__set_tsaSignerInfo))  tsaSignerInfo;

constexpr void __set_tsaSignerInfo(::Org::BouncyCastle::Cms::SignerInformation value) ;

constexpr ::Org::BouncyCastle::Cms::SignerInformation __get_tsaSignerInfo() const;

 ::Org::BouncyCastle::Tsp::TimeStampTokenInfo __declspec(property(get=__get_tstInfo, put=__set_tstInfo))  tstInfo;

constexpr void __set_tstInfo(::Org::BouncyCastle::Tsp::TimeStampTokenInfo value) ;

constexpr ::Org::BouncyCastle::Tsp::TimeStampTokenInfo __get_tstInfo() const;

 ::Org::BouncyCastle::Tsp::____Org__BouncyCastle__Tsp__TimeStampToken__CertID __declspec(property(get=__get_certID, put=__set_certID))  certID;

constexpr void __set_certID(::Org::BouncyCastle::Tsp::____Org__BouncyCastle__Tsp__TimeStampToken__CertID value) ;

constexpr ::Org::BouncyCastle::Tsp::____Org__BouncyCastle__Tsp__TimeStampToken__CertID __get_certID() const;


// Properties

 ::Org::BouncyCastle::Tsp::TimeStampTokenInfo __declspec(property(get=get_TimeStampInfo))  TimeStampInfo;

 ::Org::BouncyCastle::Cms::SignerID __declspec(property(get=get_SignerID))  SignerID;

 ::Org::BouncyCastle::Asn1::Cms::AttributeTable __declspec(property(get=get_SignedAttributes))  SignedAttributes;

 ::Org::BouncyCastle::Asn1::Cms::AttributeTable __declspec(property(get=get_UnsignedAttributes))  UnsignedAttributes;


// Methods

// Ctor Parameters [CppParam { name: "contentInfo", ty: "::Org::BouncyCastle::Asn1::Cms::ContentInfo", modifiers: "", def_value: None }]
explicit TimeStampToken(::Org::BouncyCastle::Asn1::Cms::ContentInfo contentInfo) ;

/// @brief Method .ctor addr 0x10c4624 size 0x74 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo contentInfo) ;

// Ctor Parameters [CppParam { name: "signedData", ty: "::Org::BouncyCastle::Cms::CmsSignedData", modifiers: "", def_value: None }]
explicit TimeStampToken(::Org::BouncyCastle::Cms::CmsSignedData signedData) ;

/// @brief Method .ctor addr 0x10c5fe8 size 0x890 virtual false final false
 void _ctor(::Org::BouncyCastle::Cms::CmsSignedData signedData) ;

/// @brief Method get_TimeStampInfo addr 0x10c69fc size 0x8 virtual false final false
 ::Org::BouncyCastle::Tsp::TimeStampTokenInfo get_TimeStampInfo() ;

/// @brief Method get_SignerID addr 0x10c6a04 size 0x1c virtual false final false
 ::Org::BouncyCastle::Cms::SignerID get_SignerID() ;

/// @brief Method get_SignedAttributes addr 0x10c4eac size 0x1c virtual false final false
 ::Org::BouncyCastle::Asn1::Cms::AttributeTable get_SignedAttributes() ;

/// @brief Method get_UnsignedAttributes addr 0x10c6a20 size 0x1c virtual false final false
 ::Org::BouncyCastle::Asn1::Cms::AttributeTable get_UnsignedAttributes() ;

/// @brief Method GetCertificates addr 0x10c6a3c size 0x1c virtual false final false
 ::Org::BouncyCastle::X509::Store::IX509Store GetCertificates(::StringW type) ;

/// @brief Method GetCrls addr 0x10c6a58 size 0x1c virtual false final false
 ::Org::BouncyCastle::X509::Store::IX509Store GetCrls(::StringW type) ;

/// @brief Method GetAttributeCertificates addr 0x10c6a74 size 0x1c virtual false final false
 ::Org::BouncyCastle::X509::Store::IX509Store GetAttributeCertificates(::StringW type) ;

/// @brief Method Validate addr 0x10c6a90 size 0x674 virtual false final false
 void Validate(::Org::BouncyCastle::X509::X509Certificate cert) ;

/// @brief Method ToCmsSignedData addr 0x10c75d4 size 0x8 virtual false final false
 ::Org::BouncyCastle::Cms::CmsSignedData ToCmsSignedData() ;

/// @brief Method GetEncoded addr 0x10c75dc size 0x54 virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method GetEncoded addr 0x10c7630 size 0x1c virtual false final false
 ::ArrayW<uint8_t> GetEncoded(::StringW encoding) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Tsp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Tsp::TimeStampToken);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::TimeStampToken, "Org.BouncyCastle.Tsp", "TimeStampToken");
NEED_NO_BOX(::Org::BouncyCastle::Tsp::____Org__BouncyCastle__Tsp__TimeStampToken__CertID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::____Org__BouncyCastle__Tsp__TimeStampToken__CertID, "Org.BouncyCastle.Tsp", "TimeStampToken/CertID");
