#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeX509;
}
// Type: Org.BouncyCastle.Asn1.X509::AttributeX509
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(293))
// CS Name: Org.BouncyCastle.Asn1.X509.AttributeX509
class CORDL_TYPE AttributeX509 : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AttributeX509() = default;

// Ctor Parameters [CppParam { name: "", ty: "AttributeX509", modifiers: " const&", def_value: None }]
constexpr AttributeX509(AttributeX509 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AttributeX509", modifiers: "&&", def_value: None }]
constexpr AttributeX509(AttributeX509&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AttributeX509(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr AttributeX509& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AttributeX509& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AttributeX509& operator=(AttributeX509&& o) noexcept = default;
  constexpr AttributeX509& operator=(AttributeX509 const& o) noexcept = default;
                


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

/// @brief Method GetInstance addr 0xfe6e58 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::X509::AttributeX509 GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit AttributeX509(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xfe6fe0 size 0x15c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "attrType", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "attrValues", ty: "Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }]
explicit AttributeX509(Org::BouncyCastle::Asn1::DerObjectIdentifier attrType, Org::BouncyCastle::Asn1::Asn1Set attrValues) ;

/// @brief Method .ctor addr 0xfe7314 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier attrType, Org::BouncyCastle::Asn1::Asn1Set attrValues) ;

/// @brief Method get_AttrType addr 0xfe7340 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_AttrType() ;

/// @brief Method GetAttributeValues addr 0xfe7348 size 0x24 virtual false final false
 ::ArrayW<Org::BouncyCastle::Asn1::Asn1Encodable> GetAttributeValues() ;

/// @brief Method get_AttrValues addr 0xfe736c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Set get_AttrValues() ;

/// @brief Method ToAsn1Object addr 0xfe7374 size 0xf0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::AttributeX509);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::AttributeX509, "Org.BouncyCastle.Asn1.X509", "AttributeX509");
