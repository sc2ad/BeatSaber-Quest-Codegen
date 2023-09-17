#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsContentInfoParser_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace Org::BouncyCastle::Cms {
class SignerInformationStore;
}
namespace Org::BouncyCastle::Cms {
class CmsSignedHelper;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::Cms {
class SignedDataParser;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::Cms {
class CmsTypedStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SetParser;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsSignedDataParser;
}
// Type: Org.BouncyCastle.Cms::CmsSignedDataParser
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(620))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(652))
// CS Name: Org.BouncyCastle.Cms.CmsSignedDataParser
class CORDL_TYPE CmsSignedDataParser : public ::Org::BouncyCastle::Cms::CmsContentInfoParser {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~CmsSignedDataParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsSignedDataParser", modifiers: " const&", def_value: None }]
constexpr CmsSignedDataParser(CmsSignedDataParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsSignedDataParser", modifiers: "&&", def_value: None }]
constexpr CmsSignedDataParser(CmsSignedDataParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsSignedDataParser(void* ptr) noexcept : ::Org::BouncyCastle::Cms::CmsContentInfoParser(ptr) {
}


  constexpr CmsSignedDataParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsSignedDataParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsSignedDataParser& operator=(CmsSignedDataParser&& o) noexcept = default;
  constexpr CmsSignedDataParser& operator=(CmsSignedDataParser const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Cms::CmsSignedHelper __declspec(property(get=__get_Helper, put=__set_Helper))  Helper;

static void __set_Helper(::Org::BouncyCastle::Cms::CmsSignedHelper value) ;

static ::Org::BouncyCastle::Cms::CmsSignedHelper __get_Helper() ;

 ::Org::BouncyCastle::Asn1::Cms::SignedDataParser __declspec(property(get=__get__signedData, put=__set__signedData))  _signedData;

constexpr void __set__signedData(::Org::BouncyCastle::Asn1::Cms::SignedDataParser value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::SignedDataParser __get__signedData() const;

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get__signedContentType, put=__set__signedContentType))  _signedContentType;

constexpr void __set__signedContentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get__signedContentType() const;

 ::Org::BouncyCastle::Cms::CmsTypedStream __declspec(property(get=__get__signedContent, put=__set__signedContent))  _signedContent;

constexpr void __set__signedContent(::Org::BouncyCastle::Cms::CmsTypedStream value) ;

constexpr ::Org::BouncyCastle::Cms::CmsTypedStream __get__signedContent() const;

 ::System::Collections::IDictionary __declspec(property(get=__get__digests, put=__set__digests))  _digests;

constexpr void __set__digests(::System::Collections::IDictionary value) ;

constexpr ::System::Collections::IDictionary __get__digests() const;

 ::Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get__digestOids, put=__set__digestOids))  _digestOids;

constexpr void __set__digestOids(::Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr ::Org::BouncyCastle::Utilities::Collections::ISet __get__digestOids() const;

 ::Org::BouncyCastle::Cms::SignerInformationStore __declspec(property(get=__get__signerInfoStore, put=__set__signerInfoStore))  _signerInfoStore;

constexpr void __set__signerInfoStore(::Org::BouncyCastle::Cms::SignerInformationStore value) ;

constexpr ::Org::BouncyCastle::Cms::SignerInformationStore __get__signerInfoStore() const;

 ::Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get__certSet, put=__set__certSet))  _certSet;

constexpr void __set__certSet(::Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set __get__certSet() const;

 ::Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get__crlSet, put=__set__crlSet))  _crlSet;

constexpr void __set__crlSet(::Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set __get__crlSet() const;

 bool __declspec(property(get=__get__isCertCrlParsed, put=__set__isCertCrlParsed))  _isCertCrlParsed;

constexpr void __set__isCertCrlParsed(bool value) ;

constexpr bool __get__isCertCrlParsed() const;

 ::Org::BouncyCastle::X509::Store::IX509Store __declspec(property(get=__get__attributeStore, put=__set__attributeStore))  _attributeStore;

constexpr void __set__attributeStore(::Org::BouncyCastle::X509::Store::IX509Store value) ;

constexpr ::Org::BouncyCastle::X509::Store::IX509Store __get__attributeStore() const;

 ::Org::BouncyCastle::X509::Store::IX509Store __declspec(property(get=__get__certificateStore, put=__set__certificateStore))  _certificateStore;

constexpr void __set__certificateStore(::Org::BouncyCastle::X509::Store::IX509Store value) ;

constexpr ::Org::BouncyCastle::X509::Store::IX509Store __get__certificateStore() const;

 ::Org::BouncyCastle::X509::Store::IX509Store __declspec(property(get=__get__crlStore, put=__set__crlStore))  _crlStore;

constexpr void __set__crlStore(::Org::BouncyCastle::X509::Store::IX509Store value) ;

constexpr ::Org::BouncyCastle::X509::Store::IX509Store __get__crlStore() const;


// Properties

 int32_t __declspec(property(get=get_Version))  Version;

 ::Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=get_DigestOids))  DigestOids;

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_SignedContentType))  SignedContentType;


// Methods

// Ctor Parameters [CppParam { name: "sigBlock", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit CmsSignedDataParser(::ArrayW<uint8_t> sigBlock) ;

/// @brief Method .ctor addr 0x1162714 size 0x7c virtual false final false
 void _ctor(::ArrayW<uint8_t> sigBlock) ;

// Ctor Parameters [CppParam { name: "signedContent", ty: "::Org::BouncyCastle::Cms::CmsTypedStream", modifiers: "", def_value: None }, CppParam { name: "sigBlock", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit CmsSignedDataParser(::Org::BouncyCastle::Cms::CmsTypedStream signedContent, ::ArrayW<uint8_t> sigBlock) ;

/// @brief Method .ctor addr 0x116279c size 0x80 virtual false final false
 void _ctor(::Org::BouncyCastle::Cms::CmsTypedStream signedContent, ::ArrayW<uint8_t> sigBlock) ;

// Ctor Parameters [CppParam { name: "sigData", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit CmsSignedDataParser(::System::IO::Stream sigData) ;

/// @brief Method .ctor addr 0x1162790 size 0xc virtual false final false
 void _ctor(::System::IO::Stream sigData) ;

// Ctor Parameters [CppParam { name: "signedContent", ty: "::Org::BouncyCastle::Cms::CmsTypedStream", modifiers: "", def_value: None }, CppParam { name: "sigData", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit CmsSignedDataParser(::Org::BouncyCastle::Cms::CmsTypedStream signedContent, ::System::IO::Stream sigData) ;

/// @brief Method .ctor addr 0x116281c size 0x784 virtual false final false
 void _ctor(::Org::BouncyCastle::Cms::CmsTypedStream signedContent, ::System::IO::Stream sigData) ;

/// @brief Method get_Version addr 0x1163010 size 0x24 virtual false final false
 int32_t get_Version() ;

/// @brief Method get_DigestOids addr 0x1163034 size 0x68 virtual false final false
 ::Org::BouncyCastle::Utilities::Collections::ISet get_DigestOids() ;

/// @brief Method GetSignerInfos addr 0x116309c size 0x9b8 virtual false final false
 ::Org::BouncyCastle::Cms::SignerInformationStore GetSignerInfos() ;

/// @brief Method GetAttributeCertificates addr 0x1163bcc size 0x88 virtual false final false
 ::Org::BouncyCastle::X509::Store::IX509Store GetAttributeCertificates(::StringW type) ;

/// @brief Method GetCertificates addr 0x1163c54 size 0x88 virtual false final false
 ::Org::BouncyCastle::X509::Store::IX509Store GetCertificates(::StringW type) ;

/// @brief Method GetCrls addr 0x1163cdc size 0x88 virtual false final false
 ::Org::BouncyCastle::X509::Store::IX509Store GetCrls(::StringW type) ;

/// @brief Method PopulateCertCrlSets addr 0x1163a54 size 0x178 virtual false final false
 void PopulateCertCrlSets() ;

/// @brief Method get_SignedContentType addr 0x1163e14 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier get_SignedContentType() ;

/// @brief Method GetSignedContent addr 0x1163e1c size 0x464 virtual false final false
 ::Org::BouncyCastle::Cms::CmsTypedStream GetSignedContent() ;

/// @brief Method ReplaceSigners addr 0x1164280 size 0x19c virtual false final false
static ::System::IO::Stream ReplaceSigners(::System::IO::Stream original, ::Org::BouncyCastle::Cms::SignerInformationStore signerInformationStore, ::System::IO::Stream outStr) ;

/// @brief Method ReplaceCertificatesAndCrls addr 0x11644f8 size 0x1a4 virtual false final false
static ::System::IO::Stream ReplaceCertificatesAndCrls(::System::IO::Stream original, ::Org::BouncyCastle::X509::Store::IX509Store x509Certs, ::Org::BouncyCastle::X509::Store::IX509Store x509Crls, ::Org::BouncyCastle::X509::Store::IX509Store x509AttrCerts, ::System::IO::Stream outStr) ;

/// @brief Method GetAsn1Set addr 0x1163d64 size 0xb0 virtual false final false
static ::Org::BouncyCastle::Asn1::Asn1Set GetAsn1Set(::Org::BouncyCastle::Asn1::Asn1SetParser asn1SetParser) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsSignedDataParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsSignedDataParser, "Org.BouncyCastle.Cms", "CmsSignedDataParser");
