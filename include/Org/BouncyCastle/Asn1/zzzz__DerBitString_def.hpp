#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
// Type: Org.BouncyCastle.Asn1::DerBitString
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(33))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(34))
// CS Name: Org.BouncyCastle.Asn1.DerBitString
class CORDL_TYPE DerBitString : public Org::BouncyCastle::Asn1::DerStringBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DerBitString() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerBitString", modifiers: " const&", def_value: None }]
constexpr DerBitString(DerBitString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerBitString", modifiers: "&&", def_value: None }]
constexpr DerBitString(DerBitString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerBitString(void* ptr) noexcept : Org::BouncyCastle::Asn1::DerStringBase(ptr) {
}


  constexpr DerBitString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerBitString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerBitString& operator=(DerBitString&& o) noexcept = default;
  constexpr DerBitString& operator=(DerBitString const& o) noexcept = default;
                


// Fields

static ::ArrayW<char16_t> __declspec(property(get=__get_table, put=__set_table))  table;

static void __set_table(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_table() ;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mData, put=__set_mData))  mData;

constexpr void __set_mData(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mData() const;

 int32_t __declspec(property(get=__get_mPadBits, put=__set_mPadBits))  mPadBits;

constexpr void __set_mPadBits(int32_t value) ;

constexpr int32_t __get_mPadBits() const;


// Properties

 int32_t __declspec(property(get=get_PadBits))  PadBits;

 int32_t __declspec(property(get=get_IntValue))  IntValue;


// Methods

/// @brief Method GetInstance addr 0xddb668 size 0x20c virtual false final false
static Org::BouncyCastle::Asn1::DerBitString GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0xddd4f0 size 0x140 virtual false final false
static Org::BouncyCastle::Asn1::DerBitString GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "padBits", ty: "int32_t", modifiers: "", def_value: None }]
explicit DerBitString(::ArrayW<uint8_t> data, int32_t padBits) ;

/// @brief Method .ctor addr 0xddd7b8 size 0x168 virtual false final false
 void _ctor(::ArrayW<uint8_t> data, int32_t padBits) ;

// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit DerBitString(::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0xddd920 size 0x8 virtual false final false
 void _ctor(::ArrayW<uint8_t> data) ;

// Ctor Parameters [CppParam { name: "namedBits", ty: "int32_t", modifiers: "", def_value: None }]
explicit DerBitString(int32_t namedBits) ;

/// @brief Method .ctor addr 0xddd928 size 0x128 virtual false final false
 void _ctor(int32_t namedBits) ;

// Ctor Parameters [CppParam { name: "obj", ty: "Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit DerBitString(Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

/// @brief Method .ctor addr 0xddda50 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

/// @brief Method GetOctets addr 0xddda7c size 0xb0 virtual true final false
 ::ArrayW<uint8_t> GetOctets() ;

/// @brief Method GetBytes addr 0xdddb2c size 0xa0 virtual true final false
 ::ArrayW<uint8_t> GetBytes() ;

/// @brief Method get_PadBits addr 0xdddbcc size 0x8 virtual true final false
 int32_t get_PadBits() ;

/// @brief Method get_IntValue addr 0xdddbd4 size 0x10c virtual true final false
 int32_t get_IntValue() ;

/// @brief Method Encode addr 0xdddce0 size 0x118 virtual true final false
 void Encode(Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

/// @brief Method Asn1GetHashCode addr 0xddddf8 size 0x88 virtual true final false
 int32_t Asn1GetHashCode() ;

/// @brief Method Asn1Equals addr 0xddde80 size 0xd8 virtual true final false
 bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object asn1Object) ;

/// @brief Method GetString addr 0xdddf58 size 0x168 virtual true final false
 ::StringW GetString() ;

/// @brief Method FromAsn1Octets addr 0xddd630 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::DerBitString FromAsn1Octets(::ArrayW<uint8_t> octets) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::DerBitString);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerBitString, "Org.BouncyCastle.Asn1", "DerBitString");
