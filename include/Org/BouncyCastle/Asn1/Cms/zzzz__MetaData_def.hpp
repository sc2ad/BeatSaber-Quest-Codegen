#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Cms {
class Attributes;
}
namespace Org::BouncyCastle::Asn1 {
class DerBoolean;
}
namespace Org::BouncyCastle::Asn1 {
class DerUtf8String;
}
namespace Org::BouncyCastle::Asn1 {
class DerIA5String;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class MetaData;
}
// Type: Org.BouncyCastle.Asn1.Cms::MetaData
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(80))
// CS Name: Org.BouncyCastle.Asn1.Cms.MetaData
class CORDL_TYPE MetaData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MetaData() = default;

// Ctor Parameters [CppParam { name: "", ty: "MetaData", modifiers: " const&", def_value: None }]
constexpr MetaData(MetaData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MetaData", modifiers: "&&", def_value: None }]
constexpr MetaData(MetaData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MetaData(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr MetaData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MetaData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MetaData& operator=(MetaData&& o) noexcept = default;
  constexpr MetaData& operator=(MetaData const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerBoolean __declspec(property(get=__get_hashProtected, put=__set_hashProtected))  hashProtected;

constexpr void __set_hashProtected(::Org::BouncyCastle::Asn1::DerBoolean value) ;

constexpr ::Org::BouncyCastle::Asn1::DerBoolean __get_hashProtected() const;

 ::Org::BouncyCastle::Asn1::DerUtf8String __declspec(property(get=__get_fileName, put=__set_fileName))  fileName;

constexpr void __set_fileName(::Org::BouncyCastle::Asn1::DerUtf8String value) ;

constexpr ::Org::BouncyCastle::Asn1::DerUtf8String __get_fileName() const;

 ::Org::BouncyCastle::Asn1::DerIA5String __declspec(property(get=__get_mediaType, put=__set_mediaType))  mediaType;

constexpr void __set_mediaType(::Org::BouncyCastle::Asn1::DerIA5String value) ;

constexpr ::Org::BouncyCastle::Asn1::DerIA5String __get_mediaType() const;

 ::Org::BouncyCastle::Asn1::Cms::Attributes __declspec(property(get=__get_otherMetaData, put=__set_otherMetaData))  otherMetaData;

constexpr void __set_otherMetaData(::Org::BouncyCastle::Asn1::Cms::Attributes value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::Attributes __get_otherMetaData() const;


// Properties

 bool __declspec(property(get=get_IsHashProtected))  IsHashProtected;

 ::Org::BouncyCastle::Asn1::DerUtf8String __declspec(property(get=get_FileName))  FileName;

 ::Org::BouncyCastle::Asn1::DerIA5String __declspec(property(get=get_MediaType))  MediaType;

 ::Org::BouncyCastle::Asn1::Cms::Attributes __declspec(property(get=get_OtherMetaData))  OtherMetaData;


// Methods

// Ctor Parameters [CppParam { name: "hashProtected", ty: "::Org::BouncyCastle::Asn1::DerBoolean", modifiers: "", def_value: None }, CppParam { name: "fileName", ty: "::Org::BouncyCastle::Asn1::DerUtf8String", modifiers: "", def_value: None }, CppParam { name: "mediaType", ty: "::Org::BouncyCastle::Asn1::DerIA5String", modifiers: "", def_value: None }, CppParam { name: "otherMetaData", ty: "::Org::BouncyCastle::Asn1::Cms::Attributes", modifiers: "", def_value: None }]
explicit MetaData(::Org::BouncyCastle::Asn1::DerBoolean hashProtected, ::Org::BouncyCastle::Asn1::DerUtf8String fileName, ::Org::BouncyCastle::Asn1::DerIA5String mediaType, ::Org::BouncyCastle::Asn1::Cms::Attributes otherMetaData) ;

/// @brief Method .ctor addr 0xded500 size 0x40 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerBoolean hashProtected, ::Org::BouncyCastle::Asn1::DerUtf8String fileName, ::Org::BouncyCastle::Asn1::DerIA5String mediaType, ::Org::BouncyCastle::Asn1::Cms::Attributes otherMetaData) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit MetaData(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xded540 size 0x214 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xded754 size 0xa4 virtual false final false
static ::Org::BouncyCastle::Asn1::Cms::MetaData GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method ToAsn1Object addr 0xded7f8 size 0x1a0 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

/// @brief Method get_IsHashProtected addr 0xded998 size 0x1c virtual true final false
 bool get_IsHashProtected() ;

/// @brief Method get_FileName addr 0xded9b4 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::DerUtf8String get_FileName() ;

/// @brief Method get_MediaType addr 0xded9bc size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::DerIA5String get_MediaType() ;

/// @brief Method get_OtherMetaData addr 0xded9c4 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Cms::Attributes get_OtherMetaData() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::MetaData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::MetaData, "Org.BouncyCastle.Asn1.Cms", "MetaData");
