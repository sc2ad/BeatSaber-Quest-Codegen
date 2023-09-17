#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerApplicationSpecific_def.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerApplicationSpecific;
}
// Type: Org.BouncyCastle.Asn1::BerApplicationSpecific
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(471))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(472))
// CS Name: Org.BouncyCastle.Asn1.BerApplicationSpecific
class CORDL_TYPE BerApplicationSpecific : public ::Org::BouncyCastle::Asn1::DerApplicationSpecific {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BerApplicationSpecific() = default;

// Ctor Parameters [CppParam { name: "", ty: "BerApplicationSpecific", modifiers: " const&", def_value: None }]
constexpr BerApplicationSpecific(BerApplicationSpecific const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BerApplicationSpecific", modifiers: "&&", def_value: None }]
constexpr BerApplicationSpecific(BerApplicationSpecific&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BerApplicationSpecific(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::DerApplicationSpecific(ptr) {
}


  constexpr BerApplicationSpecific& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BerApplicationSpecific& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BerApplicationSpecific& operator=(BerApplicationSpecific&& o) noexcept = default;
  constexpr BerApplicationSpecific& operator=(BerApplicationSpecific const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "tagNo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vec", ty: "::Org::BouncyCastle::Asn1::Asn1EncodableVector", modifiers: "", def_value: None }]
explicit BerApplicationSpecific(int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1EncodableVector vec) ;

/// @brief Method .ctor addr 0x11309e0 size 0x4 virtual false final false
 void _ctor(int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1EncodableVector vec) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerApplicationSpecific);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerApplicationSpecific, "Org.BouncyCastle.Asn1", "BerApplicationSpecific");
