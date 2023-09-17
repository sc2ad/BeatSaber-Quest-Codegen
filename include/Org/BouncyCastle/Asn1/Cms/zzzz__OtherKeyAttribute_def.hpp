#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class OtherKeyAttribute;
}
// Type: Org.BouncyCastle.Asn1.Cms::OtherKeyAttribute
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(84))
// CS Name: Org.BouncyCastle.Asn1.Cms.OtherKeyAttribute
class CORDL_TYPE OtherKeyAttribute : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OtherKeyAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "OtherKeyAttribute", modifiers: " const&", def_value: None }]
constexpr OtherKeyAttribute(OtherKeyAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OtherKeyAttribute", modifiers: "&&", def_value: None }]
constexpr OtherKeyAttribute(OtherKeyAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OtherKeyAttribute(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr OtherKeyAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OtherKeyAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OtherKeyAttribute& operator=(OtherKeyAttribute&& o) noexcept = default;
  constexpr OtherKeyAttribute& operator=(OtherKeyAttribute const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_keyAttrId, put=__set_keyAttrId))  keyAttrId;

constexpr void __set_keyAttrId(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_keyAttrId() const;

 ::Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_keyAttr, put=__set_keyAttr))  keyAttr;

constexpr void __set_keyAttr(::Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable __get_keyAttr() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_KeyAttrId))  KeyAttrId;

 ::Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_KeyAttr))  KeyAttr;


// Methods

/// @brief Method GetInstance addr 0xdeb990 size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit OtherKeyAttribute(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdee62c size 0xe0 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "keyAttrId", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "keyAttr", ty: "::Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit OtherKeyAttribute(::Org::BouncyCastle::Asn1::DerObjectIdentifier keyAttrId, ::Org::BouncyCastle::Asn1::Asn1Encodable keyAttr) ;

/// @brief Method .ctor addr 0xdee70c size 0x2c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier keyAttrId, ::Org::BouncyCastle::Asn1::Asn1Encodable keyAttr) ;

/// @brief Method get_KeyAttrId addr 0xdee738 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier get_KeyAttrId() ;

/// @brief Method get_KeyAttr addr 0xdee740 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Encodable get_KeyAttr() ;

/// @brief Method ToAsn1Object addr 0xdee748 size 0xf0 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute, "Org.BouncyCastle.Asn1.Cms", "OtherKeyAttribute");
