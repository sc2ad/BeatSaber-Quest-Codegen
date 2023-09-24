#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class AuthenticatedData;
}
// Type: Org.BouncyCastle.Asn1.Cms::AuthenticatedData
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(58))
// CS Name: Org.BouncyCastle.Asn1.Cms.AuthenticatedData
class CORDL_TYPE AuthenticatedData : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~AuthenticatedData() = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticatedData", modifiers: " const&", def_value: None }]
constexpr AuthenticatedData(AuthenticatedData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticatedData", modifiers: "&&", def_value: None }]
constexpr AuthenticatedData(AuthenticatedData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AuthenticatedData(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr AuthenticatedData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AuthenticatedData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AuthenticatedData& operator=(AuthenticatedData&& o) noexcept = default;
  constexpr AuthenticatedData& operator=(AuthenticatedData const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 Org::BouncyCastle::Asn1::Cms::OriginatorInfo __declspec(property(get=__get_originatorInfo, put=__set_originatorInfo))  originatorInfo;

constexpr void __set_originatorInfo(Org::BouncyCastle::Asn1::Cms::OriginatorInfo value) ;

constexpr Org::BouncyCastle::Asn1::Cms::OriginatorInfo __get_originatorInfo() const;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_recipientInfos, put=__set_recipientInfos))  recipientInfos;

constexpr void __set_recipientInfos(Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Set __get_recipientInfos() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_macAlgorithm, put=__set_macAlgorithm))  macAlgorithm;

constexpr void __set_macAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_macAlgorithm() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_digestAlgorithm, put=__set_digestAlgorithm))  digestAlgorithm;

constexpr void __set_digestAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_digestAlgorithm() const;

 Org::BouncyCastle::Asn1::Cms::ContentInfo __declspec(property(get=__get_encapsulatedContentInfo, put=__set_encapsulatedContentInfo))  encapsulatedContentInfo;

constexpr void __set_encapsulatedContentInfo(Org::BouncyCastle::Asn1::Cms::ContentInfo value) ;

constexpr Org::BouncyCastle::Asn1::Cms::ContentInfo __get_encapsulatedContentInfo() const;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_authAttrs, put=__set_authAttrs))  authAttrs;

constexpr void __set_authAttrs(Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Set __get_authAttrs() const;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_mac, put=__set_mac))  mac;

constexpr void __set_mac(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_mac() const;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_unauthAttrs, put=__set_unauthAttrs))  unauthAttrs;

constexpr void __set_unauthAttrs(Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Set __get_unauthAttrs() const;


// Properties

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Version))  Version;

 Org::BouncyCastle::Asn1::Cms::OriginatorInfo __declspec(property(get=get_OriginatorInfo))  OriginatorInfo;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=get_RecipientInfos))  RecipientInfos;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_MacAlgorithm))  MacAlgorithm;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_DigestAlgorithm))  DigestAlgorithm;

 Org::BouncyCastle::Asn1::Cms::ContentInfo __declspec(property(get=get_EncapsulatedContentInfo))  EncapsulatedContentInfo;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=get_AuthAttrs))  AuthAttrs;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_Mac))  Mac;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=get_UnauthAttrs))  UnauthAttrs;


// Methods

static Org::BouncyCastle::Asn1::Cms::AuthenticatedData New_ctor(Org::BouncyCastle::Asn1::Cms::OriginatorInfo originatorInfo, Org::BouncyCastle::Asn1::Asn1Set recipientInfos, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier macAlgorithm, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digestAlgorithm, Org::BouncyCastle::Asn1::Cms::ContentInfo encapsulatedContent, Org::BouncyCastle::Asn1::Asn1Set authAttrs, Org::BouncyCastle::Asn1::Asn1OctetString mac, Org::BouncyCastle::Asn1::Asn1Set unauthAttrs) ;

/// @brief Method .ctor addr 0xde4d94 size 0x134 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::OriginatorInfo originatorInfo, Org::BouncyCastle::Asn1::Asn1Set recipientInfos, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier macAlgorithm, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digestAlgorithm, Org::BouncyCastle::Asn1::Cms::ContentInfo encapsulatedContent, Org::BouncyCastle::Asn1::Asn1Set authAttrs, Org::BouncyCastle::Asn1::Asn1OctetString mac, Org::BouncyCastle::Asn1::Asn1Set unauthAttrs) ;

static Org::BouncyCastle::Asn1::Cms::AuthenticatedData New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xde5430 size 0x304 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xde58c4 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::Cms::AuthenticatedData GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

/// @brief Method GetInstance addr 0xde58dc size 0x178 virtual false final false
static Org::BouncyCastle::Asn1::Cms::AuthenticatedData GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_Version addr 0xde5a54 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_Version() ;

/// @brief Method get_OriginatorInfo addr 0xde5a5c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Cms::OriginatorInfo get_OriginatorInfo() ;

/// @brief Method get_RecipientInfos addr 0xde5a64 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Set get_RecipientInfos() ;

/// @brief Method get_MacAlgorithm addr 0xde5a6c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_MacAlgorithm() ;

/// @brief Method get_DigestAlgorithm addr 0xde5a74 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_DigestAlgorithm() ;

/// @brief Method get_EncapsulatedContentInfo addr 0xde5a7c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Cms::ContentInfo get_EncapsulatedContentInfo() ;

/// @brief Method get_AuthAttrs addr 0xde5a84 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Set get_AuthAttrs() ;

/// @brief Method get_Mac addr 0xde5a8c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1OctetString get_Mac() ;

/// @brief Method get_UnauthAttrs addr 0xde5a94 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Set get_UnauthAttrs() ;

/// @brief Method ToAsn1Object addr 0xde5a9c size 0x1f4 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

/// @brief Method CalculateVersion addr 0xde4ec8 size 0x568 virtual false final false
static int32_t CalculateVersion(Org::BouncyCastle::Asn1::Cms::OriginatorInfo origInfo) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::AuthenticatedData);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::AuthenticatedData, "Org.BouncyCastle.Asn1.Cms", "AuthenticatedData");
