#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X500 {
class AttributeTypeAndValue;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X500 {
class Rdn;
}
// Type: Org.BouncyCastle.Asn1.X500::Rdn
namespace Org::BouncyCastle::Asn1::X500 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(326))
// CS Name: Org.BouncyCastle.Asn1.X500.Rdn
class CORDL_TYPE Rdn : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Rdn() = default;

// Ctor Parameters [CppParam { name: "", ty: "Rdn", modifiers: " const&", def_value: None }]
constexpr Rdn(Rdn const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Rdn", modifiers: "&&", def_value: None }]
constexpr Rdn(Rdn&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Rdn(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr Rdn& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Rdn& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Rdn& operator=(Rdn&& o) noexcept = default;
  constexpr Rdn& operator=(Rdn const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_values, put=__set_values))  values;

constexpr void __set_values(Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Set __get_values() const;


// Properties

 bool __declspec(property(get=get_IsMultiValued))  IsMultiValued;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

// Ctor Parameters [CppParam { name: "values", ty: "Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }]
explicit Rdn(Org::BouncyCastle::Asn1::Asn1Set values) ;

/// @brief Method .ctor addr 0xff2b94 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Set values) ;

/// @brief Method GetInstance addr 0xff2bbc size 0xa8 virtual false final false
static Org::BouncyCastle::Asn1::X500::Rdn GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "oid", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "value", ty: "Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit Rdn(Org::BouncyCastle::Asn1::DerObjectIdentifier oid, Org::BouncyCastle::Asn1::Asn1Encodable value) ;

/// @brief Method .ctor addr 0xff2c64 size 0x134 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier oid, Org::BouncyCastle::Asn1::Asn1Encodable value) ;

// Ctor Parameters [CppParam { name: "attrTAndV", ty: "Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue", modifiers: "", def_value: None }]
explicit Rdn(Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue attrTAndV) ;

/// @brief Method .ctor addr 0xff2d98 size 0x7c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue attrTAndV) ;

// Ctor Parameters [CppParam { name: "aAndVs", ty: "::ArrayW<Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue>", modifiers: "", def_value: None }]
explicit Rdn(::ArrayW<Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue> aAndVs) ;

/// @brief Method .ctor addr 0xff2e14 size 0x7c virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue> aAndVs) ;

/// @brief Method get_IsMultiValued addr 0xff2e90 size 0x2c virtual true final false
 bool get_IsMultiValued() ;

/// @brief Method get_Count addr 0xff2ebc size 0x20 virtual true final false
 int32_t get_Count() ;

/// @brief Method GetFirst addr 0xff2edc size 0x50 virtual true final false
 Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue GetFirst() ;

/// @brief Method GetTypesAndValues addr 0xff2f2c size 0xf4 virtual true final false
 ::ArrayW<Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue> GetTypesAndValues() ;

/// @brief Method ToAsn1Object addr 0xff3020 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X500
NEED_NO_BOX(Org::BouncyCastle::Asn1::X500::Rdn);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X500::Rdn, "Org.BouncyCastle.Asn1.X500", "Rdn");
