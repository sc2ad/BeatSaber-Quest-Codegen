#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerSequence_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
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
class BerSequence;
}
// Type: Org.BouncyCastle.Asn1::BerSequence
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(487))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(488))
// CS Name: Org.BouncyCastle.Asn1.BerSequence
class CORDL_TYPE BerSequence : public ::Org::BouncyCastle::Asn1::DerSequence {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BerSequence() = default;

// Ctor Parameters [CppParam { name: "", ty: "BerSequence", modifiers: " const&", def_value: None }]
constexpr BerSequence(BerSequence const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BerSequence", modifiers: "&&", def_value: None }]
constexpr BerSequence(BerSequence&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BerSequence(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::DerSequence(ptr) {
}


  constexpr BerSequence& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BerSequence& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BerSequence& operator=(BerSequence&& o) noexcept = default;
  constexpr BerSequence& operator=(BerSequence const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Asn1::BerSequence __declspec(property(get=__get_Empty, put=__set_Empty))  Empty;

static void __set_Empty(::Org::BouncyCastle::Asn1::BerSequence value) ;

static ::Org::BouncyCastle::Asn1::BerSequence __get_Empty() ;


// Methods

/// @brief Method FromVector addr 0x112f394 size 0x8c virtual false final false
static ::Org::BouncyCastle::Asn1::BerSequence FromVector(::Org::BouncyCastle::Asn1::Asn1EncodableVector elementVector) ;

// Ctor Parameters []
explicit BerSequence() ;

/// @brief Method .ctor addr 0x1132ca4 size 0x54 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "element", ty: "::Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit BerSequence(::Org::BouncyCastle::Asn1::Asn1Encodable element) ;

/// @brief Method .ctor addr 0x112d214 size 0x64 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Encodable element) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable>", modifiers: "", def_value: None }]
explicit BerSequence(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable> elements) ;

/// @brief Method .ctor addr 0x1132cf8 size 0x64 virtual false final false
 void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable> elements) ;

// Ctor Parameters [CppParam { name: "elementVector", ty: "::Org::BouncyCastle::Asn1::Asn1EncodableVector", modifiers: "", def_value: None }]
explicit BerSequence(::Org::BouncyCastle::Asn1::Asn1EncodableVector elementVector) ;

/// @brief Method .ctor addr 0x1132c40 size 0x64 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector elementVector) ;

/// @brief Method Encode addr 0x1132d5c size 0x3ec virtual true final false
 void Encode(::Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerSequence);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerSequence, "Org.BouncyCastle.Asn1", "BerSequence");
