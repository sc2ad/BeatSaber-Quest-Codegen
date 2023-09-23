#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Cms {
class RecipientInformationStore;
}
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedData;
}
// Type: Org.BouncyCastle.Cms::CmsEnvelopedData
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(633))
// CS Name: Org.BouncyCastle.Cms.CmsEnvelopedData
class CORDL_TYPE CmsEnvelopedData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~CmsEnvelopedData() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedData", modifiers: " const&", def_value: None }]
constexpr CmsEnvelopedData(CmsEnvelopedData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedData", modifiers: "&&", def_value: None }]
constexpr CmsEnvelopedData(CmsEnvelopedData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsEnvelopedData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CmsEnvelopedData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsEnvelopedData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsEnvelopedData& operator=(CmsEnvelopedData&& o) noexcept = default;
  constexpr CmsEnvelopedData& operator=(CmsEnvelopedData const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Cms::RecipientInformationStore __declspec(property(get=__get_recipientInfoStore, put=__set_recipientInfoStore))  recipientInfoStore;

constexpr void __set_recipientInfoStore(Org::BouncyCastle::Cms::RecipientInformationStore value) ;

constexpr Org::BouncyCastle::Cms::RecipientInformationStore __get_recipientInfoStore() const;

 Org::BouncyCastle::Asn1::Cms::ContentInfo __declspec(property(get=__get_contentInfo, put=__set_contentInfo))  contentInfo;

constexpr void __set_contentInfo(Org::BouncyCastle::Asn1::Cms::ContentInfo value) ;

constexpr Org::BouncyCastle::Asn1::Cms::ContentInfo __get_contentInfo() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_encAlg, put=__set_encAlg))  encAlg;

constexpr void __set_encAlg(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_encAlg() const;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_unprotectedAttributes, put=__set_unprotectedAttributes))  unprotectedAttributes;

constexpr void __set_unprotectedAttributes(Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Set __get_unprotectedAttributes() const;


// Properties

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_EncryptionAlgorithmID))  EncryptionAlgorithmID;

 ::StringW __declspec(property(get=get_EncryptionAlgOid))  EncryptionAlgOid;

 Org::BouncyCastle::Asn1::Cms::ContentInfo __declspec(property(get=get_ContentInfo))  ContentInfo;


// Methods

// Ctor Parameters [CppParam { name: "envelopedData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit CmsEnvelopedData(::ArrayW<uint8_t> envelopedData) ;

/// @brief Method .ctor addr 0x1153580 size 0x24 virtual false final false
 void _ctor(::ArrayW<uint8_t> envelopedData) ;

// Ctor Parameters [CppParam { name: "envelopedData", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit CmsEnvelopedData(System::IO::Stream envelopedData) ;

/// @brief Method .ctor addr 0x11536e8 size 0x24 virtual false final false
 void _ctor(System::IO::Stream envelopedData) ;

// Ctor Parameters [CppParam { name: "contentInfo", ty: "Org::BouncyCastle::Asn1::Cms::ContentInfo", modifiers: "", def_value: None }]
explicit CmsEnvelopedData(Org::BouncyCastle::Asn1::Cms::ContentInfo contentInfo) ;

/// @brief Method .ctor addr 0x11535a4 size 0x144 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::ContentInfo contentInfo) ;

/// @brief Method get_EncryptionAlgorithmID addr 0x115370c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_EncryptionAlgorithmID() ;

/// @brief Method get_EncryptionAlgOid addr 0x1153714 size 0x2c virtual false final false
 ::StringW get_EncryptionAlgOid() ;

/// @brief Method GetRecipientInfos addr 0x1153740 size 0x8 virtual false final false
 Org::BouncyCastle::Cms::RecipientInformationStore GetRecipientInfos() ;

/// @brief Method get_ContentInfo addr 0x1153748 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Cms::ContentInfo get_ContentInfo() ;

/// @brief Method GetUnprotectedAttributes addr 0x1153750 size 0x74 virtual false final false
 Org::BouncyCastle::Asn1::Cms::AttributeTable GetUnprotectedAttributes() ;

/// @brief Method GetEncoded addr 0x11537c4 size 0x1c virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::CmsEnvelopedData);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::CmsEnvelopedData, "Org.BouncyCastle.Cms", "CmsEnvelopedData");
