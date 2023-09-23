#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class Attribute;
}
// Type: Org.BouncyCastle.Asn1.Cms::Attribute
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(55))
// CS Name: Org.BouncyCastle.Asn1.Cms.Attribute
class CORDL_TYPE Attribute : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Attribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "Attribute", modifiers: " const&", def_value: None }]
constexpr Attribute(Attribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Attribute", modifiers: "&&", def_value: None }]
constexpr Attribute(Attribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Attribute(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr Attribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Attribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Attribute& operator=(Attribute&& o) noexcept = default;
  constexpr Attribute& operator=(Attribute const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_attrType, put=__set_attrType))  attrType;

constexpr void __set_attrType(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_attrType() const;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_attrValues, put=__set_attrValues))  attrValues;

constexpr void __set_attrValues(Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Set __get_attrValues() const;


// Properties

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_AttrType))  AttrType;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=get_AttrValues))  AttrValues;


// Methods

/// @brief Method GetInstance addr 0xde2a28 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Cms::Attribute GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit Attribute(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xde2bb0 size 0x14c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "attrType", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "attrValues", ty: "Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }]
explicit Attribute(Org::BouncyCastle::Asn1::DerObjectIdentifier attrType, Org::BouncyCastle::Asn1::Asn1Set attrValues) ;

/// @brief Method .ctor addr 0xde2cfc size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier attrType, Org::BouncyCastle::Asn1::Asn1Set attrValues) ;

/// @brief Method get_AttrType addr 0xde2d28 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_AttrType() ;

/// @brief Method get_AttrValues addr 0xde2d30 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Set get_AttrValues() ;

/// @brief Method ToAsn1Object addr 0xde2d38 size 0xf0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::Attribute);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::Attribute, "Org.BouncyCastle.Asn1.Cms", "Attribute");
