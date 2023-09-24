#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsContentInfoParser_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
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
class EnvelopedDataParser;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedDataParser;
}
// Type: Org.BouncyCastle.Cms::CmsEnvelopedDataParser
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(620))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(635))
// CS Name: Org.BouncyCastle.Cms.CmsEnvelopedDataParser
class CORDL_TYPE CmsEnvelopedDataParser : public Org::BouncyCastle::Cms::CmsContentInfoParser {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~CmsEnvelopedDataParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedDataParser", modifiers: " const&", def_value: None }]
constexpr CmsEnvelopedDataParser(CmsEnvelopedDataParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedDataParser", modifiers: "&&", def_value: None }]
constexpr CmsEnvelopedDataParser(CmsEnvelopedDataParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsEnvelopedDataParser(void* ptr) noexcept : Org::BouncyCastle::Cms::CmsContentInfoParser(ptr) {
}


  constexpr CmsEnvelopedDataParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsEnvelopedDataParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsEnvelopedDataParser& operator=(CmsEnvelopedDataParser&& o) noexcept = default;
  constexpr CmsEnvelopedDataParser& operator=(CmsEnvelopedDataParser const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Cms::RecipientInformationStore __declspec(property(get=__get_recipientInfoStore, put=__set_recipientInfoStore))  recipientInfoStore;

constexpr void __set_recipientInfoStore(Org::BouncyCastle::Cms::RecipientInformationStore value) ;

constexpr Org::BouncyCastle::Cms::RecipientInformationStore __get_recipientInfoStore() const;

 Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser __declspec(property(get=__get_envelopedData, put=__set_envelopedData))  envelopedData;

constexpr void __set_envelopedData(Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser value) ;

constexpr Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser __get_envelopedData() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get__encAlg, put=__set__encAlg))  _encAlg;

constexpr void __set__encAlg(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get__encAlg() const;

 Org::BouncyCastle::Asn1::Cms::AttributeTable __declspec(property(get=__get__unprotectedAttributes, put=__set__unprotectedAttributes))  _unprotectedAttributes;

constexpr void __set__unprotectedAttributes(Org::BouncyCastle::Asn1::Cms::AttributeTable value) ;

constexpr Org::BouncyCastle::Asn1::Cms::AttributeTable __get__unprotectedAttributes() const;

 bool __declspec(property(get=__get__attrNotRead, put=__set__attrNotRead))  _attrNotRead;

constexpr void __set__attrNotRead(bool value) ;

constexpr bool __get__attrNotRead() const;


// Properties

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_EncryptionAlgorithmID))  EncryptionAlgorithmID;

 ::StringW __declspec(property(get=get_EncryptionAlgOid))  EncryptionAlgOid;

 Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=get_EncryptionAlgParams))  EncryptionAlgParams;


// Methods

static Org::BouncyCastle::Cms::CmsEnvelopedDataParser New_ctor(::ArrayW<uint8_t> envelopedData) ;

/// @brief Method .ctor addr 0x1155478 size 0x78 virtual false final false
 void _ctor(::ArrayW<uint8_t> envelopedData) ;

static Org::BouncyCastle::Cms::CmsEnvelopedDataParser New_ctor(System::IO::Stream envelopedData) ;

/// @brief Method .ctor addr 0x11554f0 size 0x2f8 virtual false final false
 void _ctor(System::IO::Stream envelopedData) ;

/// @brief Method get_EncryptionAlgorithmID addr 0x11557e8 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_EncryptionAlgorithmID() ;

/// @brief Method get_EncryptionAlgOid addr 0x11557f0 size 0x2c virtual false final false
 ::StringW get_EncryptionAlgOid() ;

/// @brief Method get_EncryptionAlgParams addr 0x115581c size 0x38 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Object get_EncryptionAlgParams() ;

/// @brief Method GetRecipientInfos addr 0x1155854 size 0x8 virtual false final false
 Org::BouncyCastle::Cms::RecipientInformationStore GetRecipientInfos() ;

/// @brief Method GetUnprotectedAttributes addr 0x115585c size 0x24c virtual false final false
 Org::BouncyCastle::Asn1::Cms::AttributeTable GetUnprotectedAttributes() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::CmsEnvelopedDataParser);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::CmsEnvelopedDataParser, "Org.BouncyCastle.Cms", "CmsEnvelopedDataParser");
