#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System::Numerics {
struct System__Numerics__BigInteger__GetBytesMode;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class IComparable;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
class IFormattable;
}
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace System::Numerics {
struct System__Numerics__BigInteger__GetBytesMode;
}
namespace System::Numerics {
struct BigInteger;
}
// Type: ::GetBytesMode
namespace System::Numerics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15624))
// CS Name: System.Numerics.BigInteger::GetBytesMode
struct CORDL_TYPE System__Numerics__BigInteger__GetBytesMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Numerics__BigInteger__GetBytesMode(int32_t value__) noexcept;


                    constexpr System__Numerics__BigInteger__GetBytesMode(System__Numerics__BigInteger__GetBytesMode const&) = default;
                    constexpr System__Numerics__BigInteger__GetBytesMode(System__Numerics__BigInteger__GetBytesMode&&) = default;
                    constexpr System__Numerics__BigInteger__GetBytesMode& operator=(System__Numerics__BigInteger__GetBytesMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Numerics__BigInteger__GetBytesMode& operator=(System__Numerics__BigInteger__GetBytesMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Numerics__BigInteger__GetBytesMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Numerics__BigInteger__GetBytesMode_Unwrapped : int32_t {
__AllocateArray = 0,
__Count = 1,
__Span = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Numerics__BigInteger__GetBytesMode_Unwrapped () const noexcept {
return std::bit_cast<__System__Numerics__BigInteger__GetBytesMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field AllocateArray offset 0
static System::Numerics::System__Numerics__BigInteger__GetBytesMode const AllocateArray;

/// @brief Field Count offset 0
static System::Numerics::System__Numerics__BigInteger__GetBytesMode const Count;

/// @brief Field Span offset 0
static System::Numerics::System__Numerics__BigInteger__GetBytesMode const Span;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Numerics
// Type: System.Numerics::BigInteger
namespace System::Numerics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15625))
// CS Name: System.Numerics.BigInteger
struct CORDL_TYPE BigInteger : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using GetBytesMode = System::Numerics::System__Numerics__BigInteger__GetBytesMode;

/// @brief Convert operator to System::IFormattable
constexpr operator  System::IFormattable() const;

/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const;

/// @brief Convert operator to System::IComparable_1<System::Numerics::BigInteger>
constexpr operator  System::IComparable_1<System::Numerics::BigInteger>() const;

/// @brief Convert operator to System::IEquatable_1<System::Numerics::BigInteger>
constexpr operator  System::IEquatable_1<System::Numerics::BigInteger>() const;

// Ctor Parameters [CppParam { name: "_sign", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_bits", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None }]
constexpr BigInteger(int32_t _sign, ::ArrayW<uint32_t> _bits) noexcept;


                    constexpr BigInteger(BigInteger const&) = default;
                    constexpr BigInteger(BigInteger&&) = default;
                    constexpr BigInteger& operator=(BigInteger const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BigInteger& operator=(BigInteger&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BigInteger(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get__sign, put=__set__sign))  _sign;

constexpr void __set__sign(int32_t value) ;

constexpr int32_t __get__sign() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get__bits, put=__set__bits))  _bits;

constexpr void __set__bits(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get__bits() const;

static System::Numerics::BigInteger __declspec(property(get=__get_s_bnMinInt, put=__set_s_bnMinInt))  s_bnMinInt;

static void __set_s_bnMinInt(System::Numerics::BigInteger value) ;

static System::Numerics::BigInteger __get_s_bnMinInt() ;

static System::Numerics::BigInteger __declspec(property(get=__get_s_bnOneInt, put=__set_s_bnOneInt))  s_bnOneInt;

static void __set_s_bnOneInt(System::Numerics::BigInteger value) ;

static System::Numerics::BigInteger __get_s_bnOneInt() ;

static System::Numerics::BigInteger __declspec(property(get=__get_s_bnZeroInt, put=__set_s_bnZeroInt))  s_bnZeroInt;

static void __set_s_bnZeroInt(System::Numerics::BigInteger value) ;

static System::Numerics::BigInteger __get_s_bnZeroInt() ;

static System::Numerics::BigInteger __declspec(property(get=__get_s_bnMinusOneInt, put=__set_s_bnMinusOneInt))  s_bnMinusOneInt;

static void __set_s_bnMinusOneInt(System::Numerics::BigInteger value) ;

static System::Numerics::BigInteger __get_s_bnMinusOneInt() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_s_success, put=__set_s_success))  s_success;

static void __set_s_success(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_s_success() ;


// Properties

static System::Numerics::BigInteger __declspec(property(get=get_MinusOne))  MinusOne;


// Methods

/// @brief Method .ctor addr 0x26b2bd8 size 0x7c virtual false final false
 void _ctor(int32_t value) ;

/// @brief Method .ctor addr 0x26b2c54 size 0x118 virtual false final false
 void _ctor(int64_t value) ;

/// @brief Method .ctor addr 0x26b2d6c size 0xa0 virtual false final false
 void _ctor(::ArrayW<uint8_t> value) ;

/// @brief Method .ctor addr 0x26b2e0c size 0x52c virtual false final false
 void _ctor(System::ReadOnlySpan_1<uint8_t> value, bool isUnsigned, bool isBigEndian) ;

/// @brief Method .ctor addr 0x26b33f4 size 0xc virtual false final false
 void _ctor(int32_t n, ::ArrayW<uint32_t> rgu) ;

/// @brief Method .ctor addr 0x26b3400 size 0x1a4 virtual false final false
 void _ctor(::ArrayW<uint32_t> value, bool negative) ;

/// @brief Method get_MinusOne addr 0x26b35a4 size 0x58 virtual false final false
static System::Numerics::BigInteger get_MinusOne() ;

/// @brief Method GetHashCode addr 0x26b35fc size 0x4c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x26b3650 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x26b36c8 size 0xbc virtual true final true
 bool Equals(System::Numerics::BigInteger other) ;

/// @brief Method CompareTo addr 0x26b37ec size 0x128 virtual true final true
 int32_t CompareTo(System::Numerics::BigInteger other) ;

/// @brief Method CompareTo addr 0x26b3914 size 0xd8 virtual true final true
 int32_t CompareTo(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method TryWriteBytes addr 0x26b39ec size 0x40 virtual false final false
 bool TryWriteBytes(System::Span_1<uint8_t> destination, ByRef<int32_t> bytesWritten, bool isUnsigned, bool isBigEndian) ;

/// @brief Method TryWriteOrCountBytes addr 0x26b3f18 size 0x34 virtual false final false
 bool TryWriteOrCountBytes(System::Span_1<uint8_t> destination, ByRef<int32_t> bytesWritten, bool isUnsigned, bool isBigEndian) ;

/// @brief Method TryGetBytes addr 0x26b3a2c size 0x4ec virtual false final false
 ::ArrayW<uint8_t> TryGetBytes(System::Numerics::System__Numerics__BigInteger__GetBytesMode mode, System::Span_1<uint8_t> destination, bool isUnsigned, bool isBigEndian, ByRef<int32_t> bytesWritten) ;

/// @brief Method ToString addr 0x26b3f4c size 0x30 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x26b4028 size 0x38 virtual true final true
 ::StringW ToString(::StringW format, System::IFormatProvider provider) ;

/// @brief Method Add addr 0x26b4060 size 0x14c virtual false final false
static System::Numerics::BigInteger Add(::ArrayW<uint32_t> leftBits, int32_t leftSign, ::ArrayW<uint32_t> rightBits, int32_t rightSign) ;

/// @brief Method Subtract addr 0x26b43b0 size 0x180 virtual false final false
static System::Numerics::BigInteger Subtract(::ArrayW<uint32_t> leftBits, int32_t leftSign, ::ArrayW<uint32_t> rightBits, int32_t rightSign) ;

/// @brief Method op_Implicit addr 0x26b4768 size 0x28 virtual false final false
static System::Numerics::BigInteger op_Implicit_System__Numerics__BigInteger(uint8_t value) ;

/// @brief Method op_Implicit addr 0x26b4790 size 0x28 virtual false final false
static System::Numerics::BigInteger op_Implicit_System__Numerics__BigInteger(int32_t value) ;

/// @brief Method op_Implicit addr 0x26b41ac size 0x28 virtual false final false
static System::Numerics::BigInteger op_Implicit_System__Numerics__BigInteger(int64_t value) ;

/// @brief Method op_Explicit addr 0x26b47b8 size 0xdc virtual false final false
static int32_t op_Explicit_int32_t(System::Numerics::BigInteger value) ;

/// @brief Method op_LeftShift addr 0x26b4894 size 0x24c virtual false final false
static System::Numerics::BigInteger op_LeftShift(System::Numerics::BigInteger value, int32_t shift) ;

/// @brief Method op_RightShift addr 0x26b4ae0 size 0x304 virtual false final false
static System::Numerics::BigInteger op_RightShift(System::Numerics::BigInteger value, int32_t shift) ;

/// @brief Method op_Addition addr 0x26b4ea4 size 0xac virtual false final false
static System::Numerics::BigInteger op_Addition(System::Numerics::BigInteger left, System::Numerics::BigInteger right) ;

/// @brief Method GetPartsForBitManipulation addr 0x26b4de4 size 0xc0 virtual false final false
static bool GetPartsForBitManipulation(ByRef<System::Numerics::BigInteger> x, ByRef<::ArrayW<uint32_t>> xd, ByRef<int32_t> xl) ;

/// @brief Method GetDiffLength addr 0x26b3784 size 0x68 virtual false final false
static int32_t GetDiffLength(::ArrayW<uint32_t> rgu1, ::ArrayW<uint32_t> rgu2, int32_t cu) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Numerics
DEFINE_IL2CPP_ARG_TYPE(System::Numerics::System__Numerics__BigInteger__GetBytesMode, "System.Numerics", "BigInteger/GetBytesMode");
DEFINE_IL2CPP_ARG_TYPE(System::Numerics::BigInteger, "System.Numerics", "BigInteger");
