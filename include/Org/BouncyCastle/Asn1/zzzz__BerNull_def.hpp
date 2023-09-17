#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerNull_def.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerNull;
}
// Type: Org.BouncyCastle.Asn1::BerNull
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(477))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(478))
// CS Name: Org.BouncyCastle.Asn1.BerNull
class CORDL_TYPE BerNull : public ::Org::BouncyCastle::Asn1::DerNull {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BerNull() = default;

// Ctor Parameters [CppParam { name: "", ty: "BerNull", modifiers: " const&", def_value: None }]
constexpr BerNull(BerNull const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BerNull", modifiers: "&&", def_value: None }]
constexpr BerNull(BerNull&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BerNull(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::DerNull(ptr) {
}


  constexpr BerNull& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BerNull& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BerNull& operator=(BerNull&& o) noexcept = default;
  constexpr BerNull& operator=(BerNull const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Asn1::BerNull __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(::Org::BouncyCastle::Asn1::BerNull value) ;

static ::Org::BouncyCastle::Asn1::BerNull __get_Instance() ;


// Methods

// Ctor Parameters []
explicit BerNull() ;

/// @brief Method .ctor addr 0x1131084 size 0x54 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "dummy", ty: "int32_t", modifiers: "", def_value: None }]
explicit BerNull(int32_t dummy) ;

/// @brief Method .ctor addr 0x11310d8 size 0x54 virtual false final false
 void _ctor(int32_t dummy) ;

/// @brief Method Encode addr 0x113112c size 0xd0 virtual true final false
 void Encode(::Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerNull);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerNull, "Org.BouncyCastle.Asn1", "BerNull");
