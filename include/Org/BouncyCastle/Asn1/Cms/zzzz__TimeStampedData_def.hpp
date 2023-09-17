#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerIA5String;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::Cms {
class MetaData;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1::Cms {
class Evidence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class TimeStampedData;
}
// Type: Org.BouncyCastle.Asn1.Cms::TimeStampedData
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(99))
// CS Name: Org.BouncyCastle.Asn1.Cms.TimeStampedData
class CORDL_TYPE TimeStampedData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~TimeStampedData() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampedData", modifiers: " const&", def_value: None }]
constexpr TimeStampedData(TimeStampedData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampedData", modifiers: "&&", def_value: None }]
constexpr TimeStampedData(TimeStampedData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeStampedData(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr TimeStampedData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeStampedData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeStampedData& operator=(TimeStampedData&& o) noexcept = default;
  constexpr TimeStampedData& operator=(TimeStampedData const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 ::Org::BouncyCastle::Asn1::DerIA5String __declspec(property(get=__get_dataUri, put=__set_dataUri))  dataUri;

constexpr void __set_dataUri(::Org::BouncyCastle::Asn1::DerIA5String value) ;

constexpr ::Org::BouncyCastle::Asn1::DerIA5String __get_dataUri() const;

 ::Org::BouncyCastle::Asn1::Cms::MetaData __declspec(property(get=__get_metaData, put=__set_metaData))  metaData;

constexpr void __set_metaData(::Org::BouncyCastle::Asn1::Cms::MetaData value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::MetaData __get_metaData() const;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(::Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString __get_content() const;

 ::Org::BouncyCastle::Asn1::Cms::Evidence __declspec(property(get=__get_temporalEvidence, put=__set_temporalEvidence))  temporalEvidence;

constexpr void __set_temporalEvidence(::Org::BouncyCastle::Asn1::Cms::Evidence value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::Evidence __get_temporalEvidence() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerIA5String __declspec(property(get=get_DataUri))  DataUri;

 ::Org::BouncyCastle::Asn1::Cms::MetaData __declspec(property(get=get_MetaData))  MetaData;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_Content))  Content;

 ::Org::BouncyCastle::Asn1::Cms::Evidence __declspec(property(get=get_TemporalEvidence))  TemporalEvidence;


// Methods

// Ctor Parameters [CppParam { name: "dataUri", ty: "::Org::BouncyCastle::Asn1::DerIA5String", modifiers: "", def_value: None }, CppParam { name: "metaData", ty: "::Org::BouncyCastle::Asn1::Cms::MetaData", modifiers: "", def_value: None }, CppParam { name: "content", ty: "::Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }, CppParam { name: "temporalEvidence", ty: "::Org::BouncyCastle::Asn1::Cms::Evidence", modifiers: "", def_value: None }]
explicit TimeStampedData(::Org::BouncyCastle::Asn1::DerIA5String dataUri, ::Org::BouncyCastle::Asn1::Cms::MetaData metaData, ::Org::BouncyCastle::Asn1::Asn1OctetString content, ::Org::BouncyCastle::Asn1::Cms::Evidence temporalEvidence) ;

/// @brief Method .ctor addr 0xdf41bc size 0x94 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerIA5String dataUri, ::Org::BouncyCastle::Asn1::Cms::MetaData metaData, ::Org::BouncyCastle::Asn1::Asn1OctetString content, ::Org::BouncyCastle::Asn1::Cms::Evidence temporalEvidence) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit TimeStampedData(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdf4250 size 0x268 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdf45a8 size 0xa4 virtual false final false
static ::Org::BouncyCastle::Asn1::Cms::TimeStampedData GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_DataUri addr 0xdf464c size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::DerIA5String get_DataUri() ;

/// @brief Method get_MetaData addr 0xdf4654 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Cms::MetaData get_MetaData() ;

/// @brief Method get_Content addr 0xdf465c size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1OctetString get_Content() ;

/// @brief Method get_TemporalEvidence addr 0xdf4664 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Cms::Evidence get_TemporalEvidence() ;

/// @brief Method ToAsn1Object addr 0xdf466c size 0x1b0 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::TimeStampedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::TimeStampedData, "Org.BouncyCastle.Asn1.Cms", "TimeStampedData");
