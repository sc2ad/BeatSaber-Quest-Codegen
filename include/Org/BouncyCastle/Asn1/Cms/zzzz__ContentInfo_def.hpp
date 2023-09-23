#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
// Type: Org.BouncyCastle.Asn1.Cms::ContentInfo
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(66))
// CS Name: Org.BouncyCastle.Asn1.Cms.ContentInfo
class CORDL_TYPE ContentInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ContentInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContentInfo", modifiers: " const&", def_value: None }]
constexpr ContentInfo(ContentInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContentInfo", modifiers: "&&", def_value: None }]
constexpr ContentInfo(ContentInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContentInfo(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr ContentInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContentInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContentInfo& operator=(ContentInfo&& o) noexcept = default;
  constexpr ContentInfo& operator=(ContentInfo const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_contentType, put=__set_contentType))  contentType;

constexpr void __set_contentType(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_contentType() const;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Encodable __get_content() const;


// Properties

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_ContentType))  ContentType;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Content))  Content;


// Methods

/// @brief Method GetInstance addr 0xde574c size 0x178 virtual false final false
static Org::BouncyCastle::Asn1::Cms::ContentInfo GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0xde8fb0 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::Cms::ContentInfo GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit ContentInfo(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xde8d10 size 0x2a0 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "contentType", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "content", ty: "Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit ContentInfo(Org::BouncyCastle::Asn1::DerObjectIdentifier contentType, Org::BouncyCastle::Asn1::Asn1Encodable content) ;

/// @brief Method .ctor addr 0xde8fc8 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier contentType, Org::BouncyCastle::Asn1::Asn1Encodable content) ;

/// @brief Method get_ContentType addr 0xde8ff4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_ContentType() ;

/// @brief Method get_Content addr 0xde8ffc size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Encodable get_Content() ;

/// @brief Method ToAsn1Object addr 0xde9004 size 0x140 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::ContentInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::ContentInfo, "Org.BouncyCastle.Asn1.Cms", "ContentInfo");
