#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsContentInfoParser_def.hpp"
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
namespace Org::BouncyCastle::Asn1::Cms {
class AuthenticatedDataParser;
}
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsAuthenticatedDataParser;
}
// Type: Org.BouncyCastle.Cms::CmsAuthenticatedDataParser
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(620))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(621))
// CS Name: Org.BouncyCastle.Cms.CmsAuthenticatedDataParser
class CORDL_TYPE CmsAuthenticatedDataParser : public ::Org::BouncyCastle::Cms::CmsContentInfoParser {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~CmsAuthenticatedDataParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedDataParser", modifiers: " const&", def_value: None }]
constexpr CmsAuthenticatedDataParser(CmsAuthenticatedDataParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedDataParser", modifiers: "&&", def_value: None }]
constexpr CmsAuthenticatedDataParser(CmsAuthenticatedDataParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsAuthenticatedDataParser(void* ptr) noexcept : ::Org::BouncyCastle::Cms::CmsContentInfoParser(ptr) {
}


  constexpr CmsAuthenticatedDataParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsAuthenticatedDataParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsAuthenticatedDataParser& operator=(CmsAuthenticatedDataParser&& o) noexcept = default;
  constexpr CmsAuthenticatedDataParser& operator=(CmsAuthenticatedDataParser const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Cms::RecipientInformationStore __declspec(property(get=__get__recipientInfoStore, put=__set__recipientInfoStore))  _recipientInfoStore;

constexpr void __set__recipientInfoStore(::Org::BouncyCastle::Cms::RecipientInformationStore value) ;

constexpr ::Org::BouncyCastle::Cms::RecipientInformationStore __get__recipientInfoStore() const;

 ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser __declspec(property(get=__get_authData, put=__set_authData))  authData;

constexpr void __set_authData(::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser __get_authData() const;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_macAlg, put=__set_macAlg))  macAlg;

constexpr void __set_macAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_macAlg() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mac, put=__set_mac))  mac;

constexpr void __set_mac(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mac() const;

 ::Org::BouncyCastle::Asn1::Cms::AttributeTable __declspec(property(get=__get_authAttrs, put=__set_authAttrs))  authAttrs;

constexpr void __set_authAttrs(::Org::BouncyCastle::Asn1::Cms::AttributeTable value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable __get_authAttrs() const;

 ::Org::BouncyCastle::Asn1::Cms::AttributeTable __declspec(property(get=__get_unauthAttrs, put=__set_unauthAttrs))  unauthAttrs;

constexpr void __set_unauthAttrs(::Org::BouncyCastle::Asn1::Cms::AttributeTable value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable __get_unauthAttrs() const;

 bool __declspec(property(get=__get_authAttrNotRead, put=__set_authAttrNotRead))  authAttrNotRead;

constexpr void __set_authAttrNotRead(bool value) ;

constexpr bool __get_authAttrNotRead() const;

 bool __declspec(property(get=__get_unauthAttrNotRead, put=__set_unauthAttrNotRead))  unauthAttrNotRead;

constexpr void __set_unauthAttrNotRead(bool value) ;

constexpr bool __get_unauthAttrNotRead() const;


// Properties

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_MacAlgorithmID))  MacAlgorithmID;

 ::StringW __declspec(property(get=get_MacAlgOid))  MacAlgOid;

 ::Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=get_MacAlgParams))  MacAlgParams;


// Methods

// Ctor Parameters [CppParam { name: "envelopedData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit CmsAuthenticatedDataParser(::ArrayW<uint8_t> envelopedData) ;

/// @brief Method .ctor addr 0x1150638 size 0x78 virtual false final false
 void _ctor(::ArrayW<uint8_t> envelopedData) ;

// Ctor Parameters [CppParam { name: "envelopedData", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit CmsAuthenticatedDataParser(::System::IO::Stream envelopedData) ;

/// @brief Method .ctor addr 0x11506b0 size 0x308 virtual false final false
 void _ctor(::System::IO::Stream envelopedData) ;

/// @brief Method get_MacAlgorithmID addr 0x11509b8 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_MacAlgorithmID() ;

/// @brief Method get_MacAlgOid addr 0x11509c0 size 0x2c virtual false final false
 ::StringW get_MacAlgOid() ;

/// @brief Method get_MacAlgParams addr 0x11509ec size 0x38 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Object get_MacAlgParams() ;

/// @brief Method GetRecipientInfos addr 0x1150a24 size 0x8 virtual false final false
 ::Org::BouncyCastle::Cms::RecipientInformationStore GetRecipientInfos() ;

/// @brief Method GetMac addr 0x1150a2c size 0x94 virtual false final false
 ::ArrayW<uint8_t> GetMac() ;

/// @brief Method GetAuthAttrs addr 0x1150ac0 size 0x24c virtual false final false
 ::Org::BouncyCastle::Asn1::Cms::AttributeTable GetAuthAttrs() ;

/// @brief Method GetUnauthAttrs addr 0x1150d0c size 0x24c virtual false final false
 ::Org::BouncyCastle::Asn1::Cms::AttributeTable GetUnauthAttrs() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser, "Org.BouncyCastle.Cms", "CmsAuthenticatedDataParser");
