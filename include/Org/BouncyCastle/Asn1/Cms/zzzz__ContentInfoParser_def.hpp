#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObjectParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SequenceParser;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfoParser;
}
// Type: Org.BouncyCastle.Asn1.Cms::ContentInfoParser
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(67))
// CS Name: Org.BouncyCastle.Asn1.Cms.ContentInfoParser
class CORDL_TYPE ContentInfoParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ContentInfoParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContentInfoParser", modifiers: " const&", def_value: None }]
constexpr ContentInfoParser(ContentInfoParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContentInfoParser", modifiers: "&&", def_value: None }]
constexpr ContentInfoParser(ContentInfoParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContentInfoParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ContentInfoParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContentInfoParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContentInfoParser& operator=(ContentInfoParser&& o) noexcept = default;
  constexpr ContentInfoParser& operator=(ContentInfoParser const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_contentType, put=__set_contentType))  contentType;

constexpr void __set_contentType(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_contentType() const;

 Org::BouncyCastle::Asn1::Asn1TaggedObjectParser __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(Org::BouncyCastle::Asn1::Asn1TaggedObjectParser value) ;

constexpr Org::BouncyCastle::Asn1::Asn1TaggedObjectParser __get_content() const;


// Properties

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_ContentType))  ContentType;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1SequenceParser", modifiers: "", def_value: None }]
explicit ContentInfoParser(Org::BouncyCastle::Asn1::Asn1SequenceParser seq) ;

/// @brief Method .ctor addr 0xde6738 size 0x1e0 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1SequenceParser seq) ;

/// @brief Method get_ContentType addr 0xde9144 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_ContentType() ;

/// @brief Method GetContent addr 0xde914c size 0xbc virtual false final false
 Org::BouncyCastle::Asn1::IAsn1Convertible GetContent(int32_t tag) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::ContentInfoParser);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::ContentInfoParser, "Org.BouncyCastle.Asn1.Cms", "ContentInfoParser");
