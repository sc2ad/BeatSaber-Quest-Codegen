#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class AttributePkcs;
}
// Type: Org.BouncyCastle.Asn1.Pkcs::AttributePkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(226))
// CS Name: Org.BouncyCastle.Asn1.Pkcs.AttributePkcs
class CORDL_TYPE AttributePkcs : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AttributePkcs() = default;

// Ctor Parameters [CppParam { name: "", ty: "AttributePkcs", modifiers: " const&", def_value: None }]
constexpr AttributePkcs(AttributePkcs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AttributePkcs", modifiers: "&&", def_value: None }]
constexpr AttributePkcs(AttributePkcs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AttributePkcs(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr AttributePkcs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AttributePkcs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AttributePkcs& operator=(AttributePkcs&& o) noexcept = default;
  constexpr AttributePkcs& operator=(AttributePkcs const& o) noexcept = default;
                


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

/// @brief Method GetInstance addr 0xef7478 size 0x154 virtual false final false
static Org::BouncyCastle::Asn1::Pkcs::AttributePkcs GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit AttributePkcs(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xef75cc size 0x130 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "attrType", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "attrValues", ty: "Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }]
explicit AttributePkcs(Org::BouncyCastle::Asn1::DerObjectIdentifier attrType, Org::BouncyCastle::Asn1::Asn1Set attrValues) ;

/// @brief Method .ctor addr 0xef76fc size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier attrType, Org::BouncyCastle::Asn1::Asn1Set attrValues) ;

/// @brief Method get_AttrType addr 0xef7728 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_AttrType() ;

/// @brief Method get_AttrValues addr 0xef7730 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Set get_AttrValues() ;

/// @brief Method ToAsn1Object addr 0xef7738 size 0xf0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(Org::BouncyCastle::Asn1::Pkcs::AttributePkcs);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::AttributePkcs, "Org.BouncyCastle.Asn1.Pkcs", "AttributePkcs");
