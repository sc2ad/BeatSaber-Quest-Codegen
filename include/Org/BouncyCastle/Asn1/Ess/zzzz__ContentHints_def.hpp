#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerUtf8String;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ess {
class ContentHints;
}
// Type: Org.BouncyCastle.Asn1.Ess::ContentHints
namespace Org::BouncyCastle::Asn1::Ess {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(160))
// CS Name: Org.BouncyCastle.Asn1.Ess.ContentHints
class CORDL_TYPE ContentHints : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ContentHints() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContentHints", modifiers: " const&", def_value: None }]
constexpr ContentHints(ContentHints const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContentHints", modifiers: "&&", def_value: None }]
constexpr ContentHints(ContentHints&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContentHints(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr ContentHints& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContentHints& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContentHints& operator=(ContentHints&& o) noexcept = default;
  constexpr ContentHints& operator=(ContentHints const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerUtf8String __declspec(property(get=__get_contentDescription, put=__set_contentDescription))  contentDescription;

constexpr void __set_contentDescription(::Org::BouncyCastle::Asn1::DerUtf8String value) ;

constexpr ::Org::BouncyCastle::Asn1::DerUtf8String __get_contentDescription() const;

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_contentType, put=__set_contentType))  contentType;

constexpr void __set_contentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_contentType() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_ContentType))  ContentType;

 ::Org::BouncyCastle::Asn1::DerUtf8String __declspec(property(get=get_ContentDescription))  ContentDescription;


// Methods

/// @brief Method GetInstance addr 0xe0b698 size 0x190 virtual false final false
static ::Org::BouncyCastle::Asn1::Ess::ContentHints GetInstance(::bs_hook::Il2CppWrapperType o) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit ContentHints(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xe0b828 size 0x188 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "contentType", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }]
explicit ContentHints(::Org::BouncyCastle::Asn1::DerObjectIdentifier contentType) ;

/// @brief Method .ctor addr 0xe0b9b0 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier contentType) ;

// Ctor Parameters [CppParam { name: "contentType", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "contentDescription", ty: "::Org::BouncyCastle::Asn1::DerUtf8String", modifiers: "", def_value: None }]
explicit ContentHints(::Org::BouncyCastle::Asn1::DerObjectIdentifier contentType, ::Org::BouncyCastle::Asn1::DerUtf8String contentDescription) ;

/// @brief Method .ctor addr 0xe0b9d8 size 0x2c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier contentType, ::Org::BouncyCastle::Asn1::DerUtf8String contentDescription) ;

/// @brief Method get_ContentType addr 0xe0ba04 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier get_ContentType() ;

/// @brief Method get_ContentDescription addr 0xe0ba0c size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerUtf8String get_ContentDescription() ;

/// @brief Method ToAsn1Object addr 0xe0ba14 size 0x118 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Ess
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ess::ContentHints);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ess::ContentHints, "Org.BouncyCastle.Asn1.Ess", "ContentHints");
