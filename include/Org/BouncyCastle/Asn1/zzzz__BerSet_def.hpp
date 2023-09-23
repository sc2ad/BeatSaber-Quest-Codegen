#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerSet_def.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerSet;
}
// Type: Org.BouncyCastle.Asn1::BerSet
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(491))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(492))
// CS Name: Org.BouncyCastle.Asn1.BerSet
class CORDL_TYPE BerSet : public Org::BouncyCastle::Asn1::DerSet {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BerSet() = default;

// Ctor Parameters [CppParam { name: "", ty: "BerSet", modifiers: " const&", def_value: None }]
constexpr BerSet(BerSet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BerSet", modifiers: "&&", def_value: None }]
constexpr BerSet(BerSet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BerSet(void* ptr) noexcept : Org::BouncyCastle::Asn1::DerSet(ptr) {
}


  constexpr BerSet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BerSet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BerSet& operator=(BerSet&& o) noexcept = default;
  constexpr BerSet& operator=(BerSet const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::BerSet __declspec(property(get=__get_Empty, put=__set_Empty))  Empty;

static void __set_Empty(Org::BouncyCastle::Asn1::BerSet value) ;

static Org::BouncyCastle::Asn1::BerSet __get_Empty() ;


// Methods

/// @brief Method FromVector addr 0x1133708 size 0x8c virtual false final false
static Org::BouncyCastle::Asn1::BerSet FromVector(Org::BouncyCastle::Asn1::Asn1EncodableVector elementVector) ;

/// @brief Method FromVector addr 0x11337f8 size 0x94 virtual false final false
static Org::BouncyCastle::Asn1::BerSet FromVector(Org::BouncyCastle::Asn1::Asn1EncodableVector elementVector, bool needsSorting) ;

// Ctor Parameters []
explicit BerSet() ;

/// @brief Method .ctor addr 0x1133910 size 0x54 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "element", ty: "Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit BerSet(Org::BouncyCastle::Asn1::Asn1Encodable element) ;

/// @brief Method .ctor addr 0x1133964 size 0x64 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Encodable element) ;

// Ctor Parameters [CppParam { name: "elementVector", ty: "Org::BouncyCastle::Asn1::Asn1EncodableVector", modifiers: "", def_value: None }]
explicit BerSet(Org::BouncyCastle::Asn1::Asn1EncodableVector elementVector) ;

/// @brief Method .ctor addr 0x1133794 size 0x64 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1EncodableVector elementVector) ;

// Ctor Parameters [CppParam { name: "elementVector", ty: "Org::BouncyCastle::Asn1::Asn1EncodableVector", modifiers: "", def_value: None }, CppParam { name: "needsSorting", ty: "bool", modifiers: "", def_value: None }]
explicit BerSet(Org::BouncyCastle::Asn1::Asn1EncodableVector elementVector, bool needsSorting) ;

/// @brief Method .ctor addr 0x113388c size 0x84 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1EncodableVector elementVector, bool needsSorting) ;

/// @brief Method Encode addr 0x11339c8 size 0x3ec virtual true final false
 void Encode(Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::BerSet);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::BerSet, "Org.BouncyCastle.Asn1", "BerSet");
