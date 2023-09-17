#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Cms {
class RecipientInformationStore;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Cms {
class CmsSecureReadable;
}
namespace Org::BouncyCastle::Cms {
class CmsReadable;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsAuthEnvelopedData;
}
namespace Org::BouncyCastle::Cms {
class ____Org__BouncyCastle__Cms__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable;
}
// Type: ::AuthEnvelopedSecureReadable
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(624))
// CS Name: Org.BouncyCastle.Cms.CmsAuthEnvelopedData::AuthEnvelopedSecureReadable
class CORDL_TYPE ____Org__BouncyCastle__Cms__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Cms::CmsSecureReadable
constexpr operator  ::Org::BouncyCastle::Cms::CmsSecureReadable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____Org__BouncyCastle__Cms__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Cms__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable", modifiers: " const&", def_value: None }]
constexpr ____Org__BouncyCastle__Cms__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable(____Org__BouncyCastle__Cms__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Cms__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable", modifiers: "&&", def_value: None }]
constexpr ____Org__BouncyCastle__Cms__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable(____Org__BouncyCastle__Cms__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__Cms__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Org__BouncyCastle__Cms__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Cms__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Cms__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable& operator=(____Org__BouncyCastle__Cms__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable&& o) noexcept = default;
  constexpr ____Org__BouncyCastle__Cms__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable& operator=(____Org__BouncyCastle__Cms__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData __declspec(property(get=__get_parent, put=__set_parent))  parent;

constexpr void __set_parent(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData value) ;

constexpr ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData __get_parent() const;


// Properties

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_Algorithm))  Algorithm;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_CryptoObject))  CryptoObject;


// Methods

// Ctor Parameters [CppParam { name: "parent", ty: "::Org::BouncyCastle::Cms::CmsAuthEnvelopedData", modifiers: "", def_value: None }]
explicit ____Org__BouncyCastle__Cms__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData parent) ;

/// @brief Method .ctor addr 0x11522fc size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData parent) ;

/// @brief Method get_Algorithm addr 0x1152324 size 0x1c virtual true final true
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_Algorithm() ;

/// @brief Method get_CryptoObject addr 0x1152340 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType get_CryptoObject() ;

/// @brief Method GetReadable addr 0x1152348 size 0x4c virtual true final true
 ::Org::BouncyCastle::Cms::CmsReadable GetReadable(::Org::BouncyCastle::Crypto::Parameters::KeyParameter key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
// Type: Org.BouncyCastle.Cms::CmsAuthEnvelopedData
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(625))
// CS Name: Org.BouncyCastle.Cms.CmsAuthEnvelopedData
class CORDL_TYPE CmsAuthEnvelopedData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using AuthEnvelopedSecureReadable = ::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~CmsAuthEnvelopedData() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsAuthEnvelopedData", modifiers: " const&", def_value: None }]
constexpr CmsAuthEnvelopedData(CmsAuthEnvelopedData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsAuthEnvelopedData", modifiers: "&&", def_value: None }]
constexpr CmsAuthEnvelopedData(CmsAuthEnvelopedData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsAuthEnvelopedData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CmsAuthEnvelopedData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsAuthEnvelopedData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsAuthEnvelopedData& operator=(CmsAuthEnvelopedData&& o) noexcept = default;
  constexpr CmsAuthEnvelopedData& operator=(CmsAuthEnvelopedData const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Cms::RecipientInformationStore __declspec(property(get=__get_recipientInfoStore, put=__set_recipientInfoStore))  recipientInfoStore;

constexpr void __set_recipientInfoStore(::Org::BouncyCastle::Cms::RecipientInformationStore value) ;

constexpr ::Org::BouncyCastle::Cms::RecipientInformationStore __get_recipientInfoStore() const;

 ::Org::BouncyCastle::Asn1::Cms::ContentInfo __declspec(property(get=__get_contentInfo, put=__set_contentInfo))  contentInfo;

constexpr void __set_contentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfo value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo __get_contentInfo() const;

 ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo __declspec(property(get=__get_originator, put=__set_originator))  originator;

constexpr void __set_originator(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo __get_originator() const;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_authEncAlg, put=__set_authEncAlg))  authEncAlg;

constexpr void __set_authEncAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_authEncAlg() const;

 ::Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_authAttrs, put=__set_authAttrs))  authAttrs;

constexpr void __set_authAttrs(::Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set __get_authAttrs() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mac, put=__set_mac))  mac;

constexpr void __set_mac(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mac() const;

 ::Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_unauthAttrs, put=__set_unauthAttrs))  unauthAttrs;

constexpr void __set_unauthAttrs(::Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set __get_unauthAttrs() const;


// Methods

// Ctor Parameters [CppParam { name: "authEnvData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit CmsAuthEnvelopedData(::ArrayW<uint8_t> authEnvData) ;

/// @brief Method .ctor addr 0x11521a4 size 0x24 virtual false final false
 void _ctor(::ArrayW<uint8_t> authEnvData) ;

// Ctor Parameters [CppParam { name: "authEnvData", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit CmsAuthEnvelopedData(::System::IO::Stream authEnvData) ;

/// @brief Method .ctor addr 0x11522d8 size 0x24 virtual false final false
 void _ctor(::System::IO::Stream authEnvData) ;

// Ctor Parameters [CppParam { name: "contentInfo", ty: "::Org::BouncyCastle::Asn1::Cms::ContentInfo", modifiers: "", def_value: None }]
explicit CmsAuthEnvelopedData(::Org::BouncyCastle::Asn1::Cms::ContentInfo contentInfo) ;

/// @brief Method .ctor addr 0x11521c8 size 0x110 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo contentInfo) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData, "Org.BouncyCastle.Cms", "CmsAuthEnvelopedData");
NEED_NO_BOX(::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable, "Org.BouncyCastle.Cms", "CmsAuthEnvelopedData/AuthEnvelopedSecureReadable");
