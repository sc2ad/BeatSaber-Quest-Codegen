#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities {
class Arrays;
}
// Type: Org.BouncyCastle.Utilities::Arrays
namespace Org::BouncyCastle::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1831))
// CS Name: Org.BouncyCastle.Utilities.Arrays
class CORDL_TYPE Arrays : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Arrays() = default;

// Ctor Parameters [CppParam { name: "", ty: "Arrays", modifiers: " const&", def_value: None }]
constexpr Arrays(Arrays const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Arrays", modifiers: "&&", def_value: None }]
constexpr Arrays(Arrays&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Arrays(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Arrays& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Arrays& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Arrays& operator=(Arrays&& o) noexcept = default;
  constexpr Arrays& operator=(Arrays const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_EmptyBytes, put=__set_EmptyBytes))  EmptyBytes;

static void __set_EmptyBytes(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_EmptyBytes() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_EmptyInts, put=__set_EmptyInts))  EmptyInts;

static void __set_EmptyInts(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_EmptyInts() ;


// Methods

/// @brief Method AreAllZeroes addr 0x10dfb78 size 0x6c virtual false final false
static bool AreAllZeroes(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method AreEqual addr 0x10dfbe4 size 0x80 virtual false final false
static bool AreEqual(::ArrayW<bool> a, ::ArrayW<bool> b) ;

/// @brief Method AreEqual addr 0x10dfce0 size 0x80 virtual false final false
static bool AreEqual(::ArrayW<char16_t> a, ::ArrayW<char16_t> b) ;

/// @brief Method AreEqual addr 0x10dfdcc size 0x80 virtual false final false
static bool AreEqual(::ArrayW<uint8_t> a, ::ArrayW<uint8_t> b) ;

/// @brief Method AreEqual addr 0x10dfeb8 size 0x94 virtual false final false
static bool AreEqual(::ArrayW<uint8_t> a, int32_t aFromIndex, int32_t aToIndex, ::ArrayW<uint8_t> b, int32_t bFromIndex, int32_t bToIndex) ;

/// @brief Method AreSame addr 0x10dff4c size 0x64 virtual false final false
static bool AreSame(::ArrayW<uint8_t> a, ::ArrayW<uint8_t> b) ;

/// @brief Method ConstantTimeAreEqual addr 0x10dffb0 size 0xfc virtual false final false
static bool ConstantTimeAreEqual(::ArrayW<uint8_t> a, ::ArrayW<uint8_t> b) ;

/// @brief Method ConstantTimeAreEqual addr 0x10e00ac size 0x1d8 virtual false final false
static bool ConstantTimeAreEqual(int32_t len, ::ArrayW<uint8_t> a, int32_t aOff, ::ArrayW<uint8_t> b, int32_t bOff) ;

/// @brief Method AreEqual addr 0x10e0284 size 0x80 virtual false final false
static bool AreEqual(::ArrayW<int32_t> a, ::ArrayW<int32_t> b) ;

/// @brief Method AreEqual addr 0x10e0370 size 0x80 virtual false final false
static bool AreEqual(::ArrayW<uint32_t> a, ::ArrayW<uint32_t> b) ;

/// @brief Method HaveSameContents addr 0x10dfc64 size 0x7c virtual false final false
static bool HaveSameContents(::ArrayW<bool> a, ::ArrayW<bool> b) ;

/// @brief Method HaveSameContents addr 0x10dfd60 size 0x6c virtual false final false
static bool HaveSameContents(::ArrayW<char16_t> a, ::ArrayW<char16_t> b) ;

/// @brief Method HaveSameContents addr 0x10dfe4c size 0x6c virtual false final false
static bool HaveSameContents(::ArrayW<uint8_t> a, ::ArrayW<uint8_t> b) ;

/// @brief Method HaveSameContents addr 0x10e0304 size 0x6c virtual false final false
static bool HaveSameContents(::ArrayW<int32_t> a, ::ArrayW<int32_t> b) ;

/// @brief Method HaveSameContents addr 0x10e03f0 size 0x6c virtual false final false
static bool HaveSameContents(::ArrayW<uint32_t> a, ::ArrayW<uint32_t> b) ;

/// @brief Method ToString addr 0x10e045c size 0x120 virtual false final false
static ::StringW ToString(::ArrayW<::bs_hook::Il2CppWrapperType> a) ;

/// @brief Method GetHashCode addr 0x10e057c size 0x50 virtual false final false
static int32_t GetHashCode(::ArrayW<uint8_t> data) ;

/// @brief Method GetHashCode addr 0x10e05cc size 0x54 virtual false final false
static int32_t GetHashCode(::ArrayW<uint8_t> data, int32_t off, int32_t len) ;

/// @brief Method GetHashCode addr 0x10e0620 size 0x50 virtual false final false
static int32_t GetHashCode(::ArrayW<int32_t> data) ;

/// @brief Method GetHashCode addr 0x10e0670 size 0x54 virtual false final false
static int32_t GetHashCode(::ArrayW<int32_t> data, int32_t off, int32_t len) ;

/// @brief Method GetHashCode addr 0x10e06c4 size 0x50 virtual false final false
static int32_t GetHashCode(::ArrayW<uint32_t> data) ;

/// @brief Method GetHashCode addr 0x10e0714 size 0x54 virtual false final false
static int32_t GetHashCode(::ArrayW<uint32_t> data, int32_t off, int32_t len) ;

/// @brief Method GetHashCode addr 0x10e0768 size 0x5c virtual false final false
static int32_t GetHashCode(::ArrayW<uint64_t> data) ;

/// @brief Method GetHashCode addr 0x10e07c4 size 0x5c virtual false final false
static int32_t GetHashCode(::ArrayW<uint64_t> data, int32_t off, int32_t len) ;

/// @brief Method Clone addr 0x10e0820 size 0x78 virtual false final false
static ::ArrayW<bool> Clone(::ArrayW<bool> data) ;

/// @brief Method Clone addr 0x10e0898 size 0x78 virtual false final false
static ::ArrayW<uint8_t> Clone(::ArrayW<uint8_t> data) ;

/// @brief Method Clone addr 0x10e0910 size 0x78 virtual false final false
static ::ArrayW<int32_t> Clone(::ArrayW<int32_t> data) ;

/// @brief Method Clone addr 0x10e0988 size 0x78 virtual false final false
static ::ArrayW<uint32_t> Clone(::ArrayW<uint32_t> data) ;

/// @brief Method Clone addr 0x10e0a00 size 0x78 virtual false final false
static ::ArrayW<int64_t> Clone(::ArrayW<int64_t> data) ;

/// @brief Method Clone addr 0x10e0a78 size 0x78 virtual false final false
static ::ArrayW<uint64_t> Clone(::ArrayW<uint64_t> data) ;

/// @brief Method Clone addr 0x10e0af0 size 0xa0 virtual false final false
static ::ArrayW<uint8_t> Clone(::ArrayW<uint8_t> data, ::ArrayW<uint8_t> existing) ;

/// @brief Method Clone addr 0x10e0b90 size 0xa0 virtual false final false
static ::ArrayW<uint64_t> Clone(::ArrayW<uint64_t> data, ::ArrayW<uint64_t> existing) ;

/// @brief Method Contains addr 0x10e0c30 size 0x4c virtual false final false
static bool Contains(::ArrayW<uint8_t> a, uint8_t n) ;

/// @brief Method Contains addr 0x10e0c7c size 0x4c virtual false final false
static bool Contains(::ArrayW<int16_t> a, int16_t n) ;

/// @brief Method Contains addr 0x10e0cc8 size 0x4c virtual false final false
static bool Contains(::ArrayW<int32_t> a, int32_t n) ;

/// @brief Method Fill addr 0x10e0d14 size 0x5c virtual false final false
static void Fill(::ArrayW<uint8_t> buf, uint8_t b) ;

/// @brief Method Fill addr 0x10e0d70 size 0x4c virtual false final false
static void Fill(::ArrayW<uint8_t> buf, int32_t from, int32_t to, uint8_t b) ;

/// @brief Method CopyOf addr 0x10e0dbc size 0xb8 virtual false final false
static ::ArrayW<uint8_t> CopyOf(::ArrayW<uint8_t> data, int32_t newLength) ;

/// @brief Method CopyOf addr 0x10e0e74 size 0xb8 virtual false final false
static ::ArrayW<char16_t> CopyOf(::ArrayW<char16_t> data, int32_t newLength) ;

/// @brief Method CopyOf addr 0x10e0f2c size 0xb8 virtual false final false
static ::ArrayW<int32_t> CopyOf(::ArrayW<int32_t> data, int32_t newLength) ;

/// @brief Method CopyOf addr 0x10e0fe4 size 0xb8 virtual false final false
static ::ArrayW<int64_t> CopyOf(::ArrayW<int64_t> data, int32_t newLength) ;

/// @brief Method CopyOf addr 0x10e109c size 0xb8 virtual false final false
static ::ArrayW<Org::BouncyCastle::Math::BigInteger> CopyOf(::ArrayW<Org::BouncyCastle::Math::BigInteger> data, int32_t newLength) ;

/// @brief Method CopyOfRange addr 0x10e1154 size 0xf8 virtual false final false
static ::ArrayW<uint8_t> CopyOfRange(::ArrayW<uint8_t> data, int32_t from, int32_t to) ;

/// @brief Method CopyOfRange addr 0x10e1308 size 0xf8 virtual false final false
static ::ArrayW<int32_t> CopyOfRange(::ArrayW<int32_t> data, int32_t from, int32_t to) ;

/// @brief Method CopyOfRange addr 0x10e1400 size 0xf8 virtual false final false
static ::ArrayW<int64_t> CopyOfRange(::ArrayW<int64_t> data, int32_t from, int32_t to) ;

/// @brief Method CopyOfRange addr 0x10e14f8 size 0xf8 virtual false final false
static ::ArrayW<Org::BouncyCastle::Math::BigInteger> CopyOfRange(::ArrayW<Org::BouncyCastle::Math::BigInteger> data, int32_t from, int32_t to) ;

/// @brief Method GetLength addr 0x10e124c size 0xbc virtual false final false
static int32_t GetLength(int32_t from, int32_t to) ;

/// @brief Method Append addr 0x10e15f0 size 0xd0 virtual false final false
static ::ArrayW<uint8_t> Append(::ArrayW<uint8_t> a, uint8_t b) ;

/// @brief Method Append addr 0x10e16c0 size 0xd0 virtual false final false
static ::ArrayW<int16_t> Append(::ArrayW<int16_t> a, int16_t b) ;

/// @brief Method Append addr 0x10e1790 size 0xd0 virtual false final false
static ::ArrayW<int32_t> Append(::ArrayW<int32_t> a, int32_t b) ;

/// @brief Method Concatenate addr 0x10e1860 size 0xec virtual false final false
static ::ArrayW<uint8_t> Concatenate(::ArrayW<uint8_t> a, ::ArrayW<uint8_t> b) ;

/// @brief Method ConcatenateAll addr 0x10e194c size 0x19c virtual false final false
static ::ArrayW<uint8_t> ConcatenateAll(::ArrayW<::ArrayW<uint8_t>> vs) ;

/// @brief Method Concatenate addr 0x10e1ae8 size 0xec virtual false final false
static ::ArrayW<int32_t> Concatenate(::ArrayW<int32_t> a, ::ArrayW<int32_t> b) ;

/// @brief Method Prepend addr 0x10e1bd4 size 0xb4 virtual false final false
static ::ArrayW<uint8_t> Prepend(::ArrayW<uint8_t> a, uint8_t b) ;

/// @brief Method Prepend addr 0x10e1c88 size 0xb4 virtual false final false
static ::ArrayW<int16_t> Prepend(::ArrayW<int16_t> a, int16_t b) ;

/// @brief Method Prepend addr 0x10e1d3c size 0xb4 virtual false final false
static ::ArrayW<int32_t> Prepend(::ArrayW<int32_t> a, int32_t b) ;

/// @brief Method Reverse addr 0x10e1df0 size 0xb0 virtual false final false
static ::ArrayW<uint8_t> Reverse(::ArrayW<uint8_t> a) ;

/// @brief Method Reverse addr 0x10e1ea0 size 0xb0 virtual false final false
static ::ArrayW<int32_t> Reverse(::ArrayW<int32_t> a) ;

/// @brief Method Clear addr 0x10e1f50 size 0x18 virtual false final false
static void Clear(::ArrayW<uint8_t> data) ;

/// @brief Method Clear addr 0x10e1f68 size 0x18 virtual false final false
static void Clear(::ArrayW<int32_t> data) ;

/// @brief Method IsNullOrContainsNull addr 0x10e1f80 size 0x3c virtual false final false
static bool IsNullOrContainsNull(::ArrayW<::bs_hook::Il2CppWrapperType> array) ;

/// @brief Method IsNullOrEmpty addr 0x10e1fbc size 0x1c virtual false final false
static bool IsNullOrEmpty(::ArrayW<uint8_t> array) ;

/// @brief Method IsNullOrEmpty addr 0x10e1fd8 size 0x1c virtual false final false
static bool IsNullOrEmpty(::ArrayW<::bs_hook::Il2CppWrapperType> array) ;

static Org::BouncyCastle::Utilities::Arrays New_ctor() ;

/// @brief Method .ctor addr 0x10e2090 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities
NEED_NO_BOX(Org::BouncyCastle::Utilities::Arrays);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Arrays, "Org.BouncyCastle.Utilities", "Arrays");
