#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class OtherRevocationInfoFormat;
}
// Type: Org.BouncyCastle.Asn1.Cms::OtherRevocationInfoFormat
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(86))
// CS Name: Org.BouncyCastle.Asn1.Cms.OtherRevocationInfoFormat
class CORDL_TYPE OtherRevocationInfoFormat : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OtherRevocationInfoFormat() = default;

// Ctor Parameters [CppParam { name: "", ty: "OtherRevocationInfoFormat", modifiers: " const&", def_value: None }]
constexpr OtherRevocationInfoFormat(OtherRevocationInfoFormat const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OtherRevocationInfoFormat", modifiers: "&&", def_value: None }]
constexpr OtherRevocationInfoFormat(OtherRevocationInfoFormat&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OtherRevocationInfoFormat(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr OtherRevocationInfoFormat& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OtherRevocationInfoFormat& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OtherRevocationInfoFormat& operator=(OtherRevocationInfoFormat&& o) noexcept = default;
  constexpr OtherRevocationInfoFormat& operator=(OtherRevocationInfoFormat const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_otherRevInfoFormat, put=__set_otherRevInfoFormat))  otherRevInfoFormat;

constexpr void __set_otherRevInfoFormat(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_otherRevInfoFormat() const;

 ::Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_otherRevInfo, put=__set_otherRevInfo))  otherRevInfo;

constexpr void __set_otherRevInfo(::Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable __get_otherRevInfo() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_InfoFormat))  InfoFormat;

 ::Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Info))  Info;


// Methods

// Ctor Parameters [CppParam { name: "otherRevInfoFormat", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "otherRevInfo", ty: "::Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit OtherRevocationInfoFormat(::Org::BouncyCastle::Asn1::DerObjectIdentifier otherRevInfoFormat, ::Org::BouncyCastle::Asn1::Asn1Encodable otherRevInfo) ;

/// @brief Method .ctor addr 0xdeeacc size 0x2c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier otherRevInfoFormat, ::Org::BouncyCastle::Asn1::Asn1Encodable otherRevInfo) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit OtherRevocationInfoFormat(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdeeaf8 size 0xac virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdeeba4 size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::Cms::OtherRevocationInfoFormat GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

/// @brief Method GetInstance addr 0xdeebbc size 0xa4 virtual false final false
static ::Org::BouncyCastle::Asn1::Cms::OtherRevocationInfoFormat GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_InfoFormat addr 0xdeec60 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier get_InfoFormat() ;

/// @brief Method get_Info addr 0xdeec68 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Encodable get_Info() ;

/// @brief Method ToAsn1Object addr 0xdeec70 size 0xf0 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::OtherRevocationInfoFormat);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::OtherRevocationInfoFormat, "Org.BouncyCastle.Asn1.Cms", "OtherRevocationInfoFormat");
