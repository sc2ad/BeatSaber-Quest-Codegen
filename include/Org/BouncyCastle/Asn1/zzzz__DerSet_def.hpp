#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerSet;
}
// Type: Org.BouncyCastle.Asn1::DerSet
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(465))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(491))
// CS Name: Org.BouncyCastle.Asn1.DerSet
class CORDL_TYPE DerSet : public ::Org::BouncyCastle::Asn1::Asn1Set {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DerSet() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerSet", modifiers: " const&", def_value: None }]
constexpr DerSet(DerSet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerSet", modifiers: "&&", def_value: None }]
constexpr DerSet(DerSet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerSet(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Set(ptr) {
}


  constexpr DerSet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerSet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerSet& operator=(DerSet&& o) noexcept = default;
  constexpr DerSet& operator=(DerSet const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Asn1::DerSet __declspec(property(get=__get_Empty, put=__set_Empty))  Empty;

static void __set_Empty(::Org::BouncyCastle::Asn1::DerSet value) ;

static ::Org::BouncyCastle::Asn1::DerSet __get_Empty() ;


// Methods

/// @brief Method FromVector addr 0x1133250 size 0x94 virtual false final false
static ::Org::BouncyCastle::Asn1::DerSet FromVector(::Org::BouncyCastle::Asn1::Asn1EncodableVector elementVector) ;

/// @brief Method FromVector addr 0x112aca8 size 0x9c virtual false final false
static ::Org::BouncyCastle::Asn1::DerSet FromVector(::Org::BouncyCastle::Asn1::Asn1EncodableVector elementVector, bool needsSorting) ;

// Ctor Parameters []
explicit DerSet() ;

/// @brief Method .ctor addr 0x11332fc size 0x4 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "element", ty: "::Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit DerSet(::Org::BouncyCastle::Asn1::Asn1Encodable element) ;

/// @brief Method .ctor addr 0x112e314 size 0x4 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Encodable element) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable>", modifiers: "", def_value: None }]
explicit DerSet(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable> elements) ;

/// @brief Method .ctor addr 0x1133300 size 0x18 virtual false final false
 void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable> elements) ;

// Ctor Parameters [CppParam { name: "elementVector", ty: "::Org::BouncyCastle::Asn1::Asn1EncodableVector", modifiers: "", def_value: None }]
explicit DerSet(::Org::BouncyCastle::Asn1::Asn1EncodableVector elementVector) ;

/// @brief Method .ctor addr 0x11332e4 size 0x18 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector elementVector) ;

// Ctor Parameters [CppParam { name: "elementVector", ty: "::Org::BouncyCastle::Asn1::Asn1EncodableVector", modifiers: "", def_value: None }, CppParam { name: "needsSorting", ty: "bool", modifiers: "", def_value: None }]
explicit DerSet(::Org::BouncyCastle::Asn1::Asn1EncodableVector elementVector, bool needsSorting) ;

/// @brief Method .ctor addr 0x112e318 size 0x34 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector elementVector, bool needsSorting) ;

/// @brief Method Encode addr 0x1133318 size 0x390 virtual true final false
 void Encode(::Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerSet);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerSet, "Org.BouncyCastle.Asn1", "DerSet");
