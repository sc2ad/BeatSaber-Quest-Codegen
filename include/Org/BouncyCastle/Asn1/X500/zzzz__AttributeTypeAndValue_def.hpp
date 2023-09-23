#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X500 {
class AttributeTypeAndValue;
}
// Type: Org.BouncyCastle.Asn1.X500::AttributeTypeAndValue
namespace Org::BouncyCastle::Asn1::X500 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(324))
// CS Name: Org.BouncyCastle.Asn1.X500.AttributeTypeAndValue
class CORDL_TYPE AttributeTypeAndValue : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AttributeTypeAndValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "AttributeTypeAndValue", modifiers: " const&", def_value: None }]
constexpr AttributeTypeAndValue(AttributeTypeAndValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AttributeTypeAndValue", modifiers: "&&", def_value: None }]
constexpr AttributeTypeAndValue(AttributeTypeAndValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AttributeTypeAndValue(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr AttributeTypeAndValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AttributeTypeAndValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AttributeTypeAndValue& operator=(AttributeTypeAndValue&& o) noexcept = default;
  constexpr AttributeTypeAndValue& operator=(AttributeTypeAndValue const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_type() const;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Encodable __get_value() const;


// Properties

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_Type))  Type;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit AttributeTypeAndValue(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xff24b8 size 0xe0 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xff2598 size 0xf0 virtual false final false
static Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "type", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "value", ty: "Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit AttributeTypeAndValue(Org::BouncyCastle::Asn1::DerObjectIdentifier type, Org::BouncyCastle::Asn1::Asn1Encodable value) ;

/// @brief Method .ctor addr 0xff2688 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier type, Org::BouncyCastle::Asn1::Asn1Encodable value) ;

/// @brief Method get_Type addr 0xff26b4 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_Type() ;

/// @brief Method get_Value addr 0xff26bc size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Encodable get_Value() ;

/// @brief Method ToAsn1Object addr 0xff26c4 size 0xf0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X500
NEED_NO_BOX(Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue, "Org.BouncyCastle.Asn1.X500", "AttributeTypeAndValue");
