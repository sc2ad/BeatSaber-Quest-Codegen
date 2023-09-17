#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Cms {
class RecipientInformationStore;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsAuthenticatedData;
}
// Type: Org.BouncyCastle.Cms::CmsAuthenticatedData
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(616))
// CS Name: Org.BouncyCastle.Cms.CmsAuthenticatedData
class CORDL_TYPE CmsAuthenticatedData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~CmsAuthenticatedData() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedData", modifiers: " const&", def_value: None }]
constexpr CmsAuthenticatedData(CmsAuthenticatedData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedData", modifiers: "&&", def_value: None }]
constexpr CmsAuthenticatedData(CmsAuthenticatedData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsAuthenticatedData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CmsAuthenticatedData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsAuthenticatedData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsAuthenticatedData& operator=(CmsAuthenticatedData&& o) noexcept = default;
  constexpr CmsAuthenticatedData& operator=(CmsAuthenticatedData const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Cms::RecipientInformationStore __declspec(property(get=__get_recipientInfoStore, put=__set_recipientInfoStore))  recipientInfoStore;

constexpr void __set_recipientInfoStore(::Org::BouncyCastle::Cms::RecipientInformationStore value) ;

constexpr ::Org::BouncyCastle::Cms::RecipientInformationStore __get_recipientInfoStore() const;

 ::Org::BouncyCastle::Asn1::Cms::ContentInfo __declspec(property(get=__get_contentInfo, put=__set_contentInfo))  contentInfo;

constexpr void __set_contentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfo value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo __get_contentInfo() const;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_macAlg, put=__set_macAlg))  macAlg;

constexpr void __set_macAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_macAlg() const;

 ::Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_authAttrs, put=__set_authAttrs))  authAttrs;

constexpr void __set_authAttrs(::Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set __get_authAttrs() const;

 ::Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_unauthAttrs, put=__set_unauthAttrs))  unauthAttrs;

constexpr void __set_unauthAttrs(::Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set __get_unauthAttrs() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mac, put=__set_mac))  mac;

constexpr void __set_mac(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mac() const;


// Properties

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_MacAlgorithmID))  MacAlgorithmID;

 ::StringW __declspec(property(get=get_MacAlgOid))  MacAlgOid;

 ::Org::BouncyCastle::Asn1::Cms::ContentInfo __declspec(property(get=get_ContentInfo))  ContentInfo;


// Methods

// Ctor Parameters [CppParam { name: "authData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit CmsAuthenticatedData(::ArrayW<uint8_t> authData) ;

/// @brief Method .ctor addr 0x114e1b8 size 0x24 virtual false final false
 void _ctor(::ArrayW<uint8_t> authData) ;

// Ctor Parameters [CppParam { name: "authData", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit CmsAuthenticatedData(::System::IO::Stream authData) ;

/// @brief Method .ctor addr 0x114e344 size 0x24 virtual false final false
 void _ctor(::System::IO::Stream authData) ;

// Ctor Parameters [CppParam { name: "contentInfo", ty: "::Org::BouncyCastle::Asn1::Cms::ContentInfo", modifiers: "", def_value: None }]
explicit CmsAuthenticatedData(::Org::BouncyCastle::Asn1::Cms::ContentInfo contentInfo) ;

/// @brief Method .ctor addr 0x114e1dc size 0x168 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo contentInfo) ;

/// @brief Method GetMac addr 0x114e368 size 0x5c virtual false final false
 ::ArrayW<uint8_t> GetMac() ;

/// @brief Method get_MacAlgorithmID addr 0x114e3c4 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_MacAlgorithmID() ;

/// @brief Method get_MacAlgOid addr 0x114e3cc size 0x2c virtual false final false
 ::StringW get_MacAlgOid() ;

/// @brief Method GetRecipientInfos addr 0x114e3f8 size 0x8 virtual false final false
 ::Org::BouncyCastle::Cms::RecipientInformationStore GetRecipientInfos() ;

/// @brief Method get_ContentInfo addr 0x114e400 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Cms::ContentInfo get_ContentInfo() ;

/// @brief Method GetAuthAttrs addr 0x114e408 size 0x74 virtual false final false
 ::Org::BouncyCastle::Asn1::Cms::AttributeTable GetAuthAttrs() ;

/// @brief Method GetUnauthAttrs addr 0x114e47c size 0x74 virtual false final false
 ::Org::BouncyCastle::Asn1::Cms::AttributeTable GetUnauthAttrs() ;

/// @brief Method GetEncoded addr 0x114e4f0 size 0x1c virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsAuthenticatedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAuthenticatedData, "Org.BouncyCastle.Cms", "CmsAuthenticatedData");
