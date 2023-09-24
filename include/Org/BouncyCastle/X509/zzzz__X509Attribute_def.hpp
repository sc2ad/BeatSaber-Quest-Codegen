#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeX509;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509Attribute;
}
// Type: Org.BouncyCastle.X509::X509Attribute
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1859))
// CS Name: Org.BouncyCastle.X509.X509Attribute
class CORDL_TYPE X509Attribute : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~X509Attribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Attribute", modifiers: " const&", def_value: None }]
constexpr X509Attribute(X509Attribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Attribute", modifiers: "&&", def_value: None }]
constexpr X509Attribute(X509Attribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509Attribute(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr X509Attribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509Attribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509Attribute& operator=(X509Attribute&& o) noexcept = default;
  constexpr X509Attribute& operator=(X509Attribute const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::AttributeX509 __declspec(property(get=__get_attr, put=__set_attr))  attr;

constexpr void __set_attr(Org::BouncyCastle::Asn1::X509::AttributeX509 value) ;

constexpr Org::BouncyCastle::Asn1::X509::AttributeX509 __get_attr() const;


// Properties

 ::StringW __declspec(property(get=get_Oid))  Oid;


// Methods

static Org::BouncyCastle::X509::X509Attribute New_ctor(Org::BouncyCastle::Asn1::Asn1Encodable at) ;

/// @brief Method .ctor addr 0x10ecad0 size 0x34 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Encodable at) ;

static Org::BouncyCastle::X509::X509Attribute New_ctor(::StringW oid, Org::BouncyCastle::Asn1::Asn1Encodable value) ;

/// @brief Method .ctor addr 0x10ecb04 size 0xe4 virtual false final false
 void _ctor(::StringW oid, Org::BouncyCastle::Asn1::Asn1Encodable value) ;

static Org::BouncyCastle::X509::X509Attribute New_ctor(::StringW oid, Org::BouncyCastle::Asn1::Asn1EncodableVector value) ;

/// @brief Method .ctor addr 0x10ecbe8 size 0xe4 virtual false final false
 void _ctor(::StringW oid, Org::BouncyCastle::Asn1::Asn1EncodableVector value) ;

/// @brief Method get_Oid addr 0x10ecccc size 0x24 virtual false final false
 ::StringW get_Oid() ;

/// @brief Method GetValues addr 0x10eccf0 size 0x110 virtual false final false
 ::ArrayW<Org::BouncyCastle::Asn1::Asn1Encodable> GetValues() ;

/// @brief Method ToAsn1Object addr 0x10ece00 size 0x20 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509
NEED_NO_BOX(Org::BouncyCastle::X509::X509Attribute);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::X509Attribute, "Org.BouncyCastle.X509", "X509Attribute");
