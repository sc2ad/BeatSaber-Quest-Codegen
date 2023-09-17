#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::Cms {
class EncryptedContentInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class AuthEnvelopedData;
}
// Type: Org.BouncyCastle.Asn1.Cms::AuthEnvelopedData
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(60))
// CS Name: Org.BouncyCastle.Asn1.Cms.AuthEnvelopedData
class CORDL_TYPE AuthEnvelopedData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~AuthEnvelopedData() = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthEnvelopedData", modifiers: " const&", def_value: None }]
constexpr AuthEnvelopedData(AuthEnvelopedData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthEnvelopedData", modifiers: "&&", def_value: None }]
constexpr AuthEnvelopedData(AuthEnvelopedData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AuthEnvelopedData(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr AuthEnvelopedData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AuthEnvelopedData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AuthEnvelopedData& operator=(AuthEnvelopedData&& o) noexcept = default;
  constexpr AuthEnvelopedData& operator=(AuthEnvelopedData const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo __declspec(property(get=__get_originatorInfo, put=__set_originatorInfo))  originatorInfo;

constexpr void __set_originatorInfo(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo __get_originatorInfo() const;

 ::Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_recipientInfos, put=__set_recipientInfos))  recipientInfos;

constexpr void __set_recipientInfos(::Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set __get_recipientInfos() const;

 ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo __declspec(property(get=__get_authEncryptedContentInfo, put=__set_authEncryptedContentInfo))  authEncryptedContentInfo;

constexpr void __set_authEncryptedContentInfo(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo __get_authEncryptedContentInfo() const;

 ::Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_authAttrs, put=__set_authAttrs))  authAttrs;

constexpr void __set_authAttrs(::Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set __get_authAttrs() const;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_mac, put=__set_mac))  mac;

constexpr void __set_mac(::Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString __get_mac() const;

 ::Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_unauthAttrs, put=__set_unauthAttrs))  unauthAttrs;

constexpr void __set_unauthAttrs(::Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set __get_unauthAttrs() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Version))  Version;

 ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo __declspec(property(get=get_OriginatorInfo))  OriginatorInfo;

 ::Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=get_RecipientInfos))  RecipientInfos;

 ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo __declspec(property(get=get_AuthEncryptedContentInfo))  AuthEncryptedContentInfo;

 ::Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=get_AuthAttrs))  AuthAttrs;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_Mac))  Mac;

 ::Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=get_UnauthAttrs))  UnauthAttrs;


// Methods

// Ctor Parameters [CppParam { name: "originatorInfo", ty: "::Org::BouncyCastle::Asn1::Cms::OriginatorInfo", modifiers: "", def_value: None }, CppParam { name: "recipientInfos", ty: "::Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }, CppParam { name: "authEncryptedContentInfo", ty: "::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo", modifiers: "", def_value: None }, CppParam { name: "authAttrs", ty: "::Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }, CppParam { name: "mac", ty: "::Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }, CppParam { name: "unauthAttrs", ty: "::Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }]
explicit AuthEnvelopedData(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo originatorInfo, ::Org::BouncyCastle::Asn1::Asn1Set recipientInfos, ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo authEncryptedContentInfo, ::Org::BouncyCastle::Asn1::Asn1Set authAttrs, ::Org::BouncyCastle::Asn1::Asn1OctetString mac, ::Org::BouncyCastle::Asn1::Asn1Set unauthAttrs) ;

/// @brief Method .ctor addr 0xde6dac size 0xac virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo originatorInfo, ::Org::BouncyCastle::Asn1::Asn1Set recipientInfos, ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo authEncryptedContentInfo, ::Org::BouncyCastle::Asn1::Asn1Set authAttrs, ::Org::BouncyCastle::Asn1::Asn1OctetString mac, ::Org::BouncyCastle::Asn1::Asn1Set unauthAttrs) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit AuthEnvelopedData(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xde6e58 size 0x2e8 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xde72b8 size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

/// @brief Method GetInstance addr 0xde72d0 size 0x178 virtual false final false
static ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_Version addr 0xde7448 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerInteger get_Version() ;

/// @brief Method get_OriginatorInfo addr 0xde7450 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo get_OriginatorInfo() ;

/// @brief Method get_RecipientInfos addr 0xde7458 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Set get_RecipientInfos() ;

/// @brief Method get_AuthEncryptedContentInfo addr 0xde7460 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo get_AuthEncryptedContentInfo() ;

/// @brief Method get_AuthAttrs addr 0xde7468 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Set get_AuthAttrs() ;

/// @brief Method get_Mac addr 0xde7470 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1OctetString get_Mac() ;

/// @brief Method get_UnauthAttrs addr 0xde7478 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Set get_UnauthAttrs() ;

/// @brief Method ToAsn1Object addr 0xde7480 size 0x1cc virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData, "Org.BouncyCastle.Asn1.Cms", "AuthEnvelopedData");
