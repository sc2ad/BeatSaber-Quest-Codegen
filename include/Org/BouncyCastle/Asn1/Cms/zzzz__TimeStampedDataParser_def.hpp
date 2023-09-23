#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::Cms {
class Evidence;
}
namespace Org::BouncyCastle::Asn1::Cms {
class MetaData;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetStringParser;
}
namespace Org::BouncyCastle::Asn1 {
class DerIA5String;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SequenceParser;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class TimeStampedDataParser;
}
// Type: Org.BouncyCastle.Asn1.Cms::TimeStampedDataParser
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(100))
// CS Name: Org.BouncyCastle.Asn1.Cms.TimeStampedDataParser
class CORDL_TYPE TimeStampedDataParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~TimeStampedDataParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampedDataParser", modifiers: " const&", def_value: None }]
constexpr TimeStampedDataParser(TimeStampedDataParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampedDataParser", modifiers: "&&", def_value: None }]
constexpr TimeStampedDataParser(TimeStampedDataParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeStampedDataParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TimeStampedDataParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeStampedDataParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeStampedDataParser& operator=(TimeStampedDataParser&& o) noexcept = default;
  constexpr TimeStampedDataParser& operator=(TimeStampedDataParser const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 Org::BouncyCastle::Asn1::DerIA5String __declspec(property(get=__get_dataUri, put=__set_dataUri))  dataUri;

constexpr void __set_dataUri(Org::BouncyCastle::Asn1::DerIA5String value) ;

constexpr Org::BouncyCastle::Asn1::DerIA5String __get_dataUri() const;

 Org::BouncyCastle::Asn1::Cms::MetaData __declspec(property(get=__get_metaData, put=__set_metaData))  metaData;

constexpr void __set_metaData(Org::BouncyCastle::Asn1::Cms::MetaData value) ;

constexpr Org::BouncyCastle::Asn1::Cms::MetaData __get_metaData() const;

 Org::BouncyCastle::Asn1::Asn1OctetStringParser __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(Org::BouncyCastle::Asn1::Asn1OctetStringParser value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetStringParser __get_content() const;

 Org::BouncyCastle::Asn1::Cms::Evidence __declspec(property(get=__get_temporalEvidence, put=__set_temporalEvidence))  temporalEvidence;

constexpr void __set_temporalEvidence(Org::BouncyCastle::Asn1::Cms::Evidence value) ;

constexpr Org::BouncyCastle::Asn1::Cms::Evidence __get_temporalEvidence() const;

 Org::BouncyCastle::Asn1::Asn1SequenceParser __declspec(property(get=__get_parser, put=__set_parser))  parser;

constexpr void __set_parser(Org::BouncyCastle::Asn1::Asn1SequenceParser value) ;

constexpr Org::BouncyCastle::Asn1::Asn1SequenceParser __get_parser() const;


// Properties

 Org::BouncyCastle::Asn1::DerIA5String __declspec(property(get=get_DataUri))  DataUri;

 Org::BouncyCastle::Asn1::Cms::MetaData __declspec(property(get=get_MetaData))  MetaData;

 Org::BouncyCastle::Asn1::Asn1OctetStringParser __declspec(property(get=get_Content))  Content;


// Methods

// Ctor Parameters [CppParam { name: "parser", ty: "Org::BouncyCastle::Asn1::Asn1SequenceParser", modifiers: "", def_value: None }]
explicit TimeStampedDataParser(Org::BouncyCastle::Asn1::Asn1SequenceParser parser) ;

/// @brief Method .ctor addr 0xdf481c size 0x400 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1SequenceParser parser) ;

/// @brief Method GetInstance addr 0xdf4c1c size 0x128 virtual false final false
static Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_DataUri addr 0xdf4d44 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::DerIA5String get_DataUri() ;

/// @brief Method get_MetaData addr 0xdf4d4c size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Cms::MetaData get_MetaData() ;

/// @brief Method get_Content addr 0xdf4d54 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1OctetStringParser get_Content() ;

/// @brief Method GetTemporalEvidence addr 0xdf4d5c size 0x12c virtual true final false
 Org::BouncyCastle::Asn1::Cms::Evidence GetTemporalEvidence() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser, "Org.BouncyCastle.Asn1.Cms", "TimeStampedDataParser");
