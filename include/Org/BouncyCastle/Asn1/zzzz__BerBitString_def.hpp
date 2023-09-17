#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerBitString;
}
// Type: Org.BouncyCastle.Asn1::BerBitString
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(34))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(475))
// CS Name: Org.BouncyCastle.Asn1.BerBitString
class CORDL_TYPE BerBitString : public ::Org::BouncyCastle::Asn1::DerBitString {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BerBitString() = default;

// Ctor Parameters [CppParam { name: "", ty: "BerBitString", modifiers: " const&", def_value: None }]
constexpr BerBitString(BerBitString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BerBitString", modifiers: "&&", def_value: None }]
constexpr BerBitString(BerBitString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BerBitString(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::DerBitString(ptr) {
}


  constexpr BerBitString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BerBitString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BerBitString& operator=(BerBitString&& o) noexcept = default;
  constexpr BerBitString& operator=(BerBitString const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "padBits", ty: "int32_t", modifiers: "", def_value: None }]
explicit BerBitString(::ArrayW<uint8_t> data, int32_t padBits) ;

/// @brief Method .ctor addr 0x1130a04 size 0x70 virtual false final false
 void _ctor(::ArrayW<uint8_t> data, int32_t padBits) ;

// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit BerBitString(::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x1130a74 size 0x68 virtual false final false
 void _ctor(::ArrayW<uint8_t> data) ;

// Ctor Parameters [CppParam { name: "namedBits", ty: "int32_t", modifiers: "", def_value: None }]
explicit BerBitString(int32_t namedBits) ;

/// @brief Method .ctor addr 0x1130adc size 0x68 virtual false final false
 void _ctor(int32_t namedBits) ;

// Ctor Parameters [CppParam { name: "obj", ty: "::Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit BerBitString(::Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

/// @brief Method .ctor addr 0x1130b44 size 0x68 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

/// @brief Method Encode addr 0x1130bac size 0xd4 virtual true final false
 void Encode(::Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerBitString);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerBitString, "Org.BouncyCastle.Asn1", "BerBitString");
