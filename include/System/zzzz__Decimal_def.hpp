#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
class ISpanFormattable;
}
namespace System {
class IComparable;
}
namespace System::Globalization {
struct NumberStyles;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class IConvertible;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System {
struct TypeCode;
}
namespace System {
class IFormattable;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
struct MidpointRounding;
}
// Forward declare root types
namespace GlobalNamespace {
struct System__Decimal__DecCalc__RoundingMode;
}
namespace GlobalNamespace {
struct System__Decimal__DecCalc__Buf24;
}
namespace GlobalNamespace {
struct System__Decimal__DecCalc__PowerOvfl;
}
namespace System {
struct Decimal;
}
namespace System {
struct System__Decimal__DecCalc;
}
// Type: ::RoundingMode
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2650))
// CS Name: System.Decimal::DecCalc::RoundingMode
struct CORDL_TYPE System__Decimal__DecCalc__RoundingMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Decimal__DecCalc__RoundingMode(int32_t value__) noexcept;


                    constexpr System__Decimal__DecCalc__RoundingMode(System__Decimal__DecCalc__RoundingMode const&) = default;
                    constexpr System__Decimal__DecCalc__RoundingMode(System__Decimal__DecCalc__RoundingMode&&) = default;
                    constexpr System__Decimal__DecCalc__RoundingMode& operator=(System__Decimal__DecCalc__RoundingMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Decimal__DecCalc__RoundingMode& operator=(System__Decimal__DecCalc__RoundingMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Decimal__DecCalc__RoundingMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Decimal__DecCalc__RoundingMode_Unwrapped : int32_t {
__ToEven = 0,
__AwayFromZero = 1,
__Truncate = 2,
__Floor = 3,
__Ceiling = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Decimal__DecCalc__RoundingMode_Unwrapped () const noexcept {
return std::bit_cast<__System__Decimal__DecCalc__RoundingMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ToEven offset 0
static GlobalNamespace::System__Decimal__DecCalc__RoundingMode const ToEven;

/// @brief Field AwayFromZero offset 0
static GlobalNamespace::System__Decimal__DecCalc__RoundingMode const AwayFromZero;

/// @brief Field Truncate offset 0
static GlobalNamespace::System__Decimal__DecCalc__RoundingMode const Truncate;

/// @brief Field Floor offset 0
static GlobalNamespace::System__Decimal__DecCalc__RoundingMode const Floor;

/// @brief Field Ceiling offset 0
static GlobalNamespace::System__Decimal__DecCalc__RoundingMode const Ceiling;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PowerOvfl
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2651))
// CS Name: System.Decimal::DecCalc::PowerOvfl
struct CORDL_TYPE System__Decimal__DecCalc__PowerOvfl : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Hi", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "MidLo", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr System__Decimal__DecCalc__PowerOvfl(uint32_t Hi, uint64_t MidLo) noexcept;


                    constexpr System__Decimal__DecCalc__PowerOvfl(System__Decimal__DecCalc__PowerOvfl const&) = default;
                    constexpr System__Decimal__DecCalc__PowerOvfl(System__Decimal__DecCalc__PowerOvfl&&) = default;
                    constexpr System__Decimal__DecCalc__PowerOvfl& operator=(System__Decimal__DecCalc__PowerOvfl const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Decimal__DecCalc__PowerOvfl& operator=(System__Decimal__DecCalc__PowerOvfl&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Decimal__DecCalc__PowerOvfl(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_Hi, put=__set_Hi))  Hi;

constexpr void __set_Hi(uint32_t value) ;

constexpr uint32_t __get_Hi() const;

 uint64_t __declspec(property(get=__get_MidLo, put=__set_MidLo))  MidLo;

constexpr void __set_MidLo(uint64_t value) ;

constexpr uint64_t __get_MidLo() const;


// Methods

/// @brief Method .ctor addr 0x24a25e8 size 0x14 virtual false final false
 void _ctor(uint32_t hi, uint32_t mid, uint32_t lo) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Buf24
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2652))
// CS Name: System.Decimal::DecCalc::Buf24
struct CORDL_TYPE System__Decimal__DecCalc__Buf24 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "U0", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "U1", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "U2", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "U3", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "U4", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "U5", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ulo64LE", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "umid64LE", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "uhigh64LE", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr System__Decimal__DecCalc__Buf24(uint32_t U0, uint32_t U1, uint32_t U2, uint32_t U3, uint32_t U4, uint32_t U5, uint64_t ulo64LE, uint64_t umid64LE, uint64_t uhigh64LE) noexcept;


                    constexpr System__Decimal__DecCalc__Buf24(System__Decimal__DecCalc__Buf24 const&) = default;
                    constexpr System__Decimal__DecCalc__Buf24(System__Decimal__DecCalc__Buf24&&) = default;
                    constexpr System__Decimal__DecCalc__Buf24& operator=(System__Decimal__DecCalc__Buf24 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Decimal__DecCalc__Buf24& operator=(System__Decimal__DecCalc__Buf24&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Decimal__DecCalc__Buf24(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_U0, put=__set_U0))  U0;

constexpr void __set_U0(uint32_t value) ;

constexpr uint32_t __get_U0() const;

 uint32_t __declspec(property(get=__get_U1, put=__set_U1))  U1;

constexpr void __set_U1(uint32_t value) ;

constexpr uint32_t __get_U1() const;

 uint32_t __declspec(property(get=__get_U2, put=__set_U2))  U2;

constexpr void __set_U2(uint32_t value) ;

constexpr uint32_t __get_U2() const;

 uint32_t __declspec(property(get=__get_U3, put=__set_U3))  U3;

constexpr void __set_U3(uint32_t value) ;

constexpr uint32_t __get_U3() const;

 uint32_t __declspec(property(get=__get_U4, put=__set_U4))  U4;

constexpr void __set_U4(uint32_t value) ;

constexpr uint32_t __get_U4() const;

 uint32_t __declspec(property(get=__get_U5, put=__set_U5))  U5;

constexpr void __set_U5(uint32_t value) ;

constexpr uint32_t __get_U5() const;

 uint64_t __declspec(property(get=__get_ulo64LE, put=__set_ulo64LE))  ulo64LE;

constexpr void __set_ulo64LE(uint64_t value) ;

constexpr uint64_t __get_ulo64LE() const;

 uint64_t __declspec(property(get=__get_umid64LE, put=__set_umid64LE))  umid64LE;

constexpr void __set_umid64LE(uint64_t value) ;

constexpr uint64_t __get_umid64LE() const;

 uint64_t __declspec(property(get=__get_uhigh64LE, put=__set_uhigh64LE))  uhigh64LE;

constexpr void __set_uhigh64LE(uint64_t value) ;

constexpr uint64_t __get_uhigh64LE() const;


// Properties

 uint64_t __declspec(property(get=get_Low64, put=set_Low64))  Low64;

 uint64_t __declspec(property(put=set_Mid64))  Mid64;

 uint64_t __declspec(property(put=set_High64))  High64;


// Methods

/// @brief Method get_Low64 addr 0x24a2164 size 0x60 virtual false final false
 uint64_t get_Low64() ;

/// @brief Method set_Low64 addr 0x24a206c size 0x7c virtual false final false
 void set_Low64(uint64_t value) ;

/// @brief Method set_Mid64 addr 0x24a20e8 size 0x7c virtual false final false
 void set_Mid64(uint64_t value) ;

/// @brief Method set_High64 addr 0x24a2350 size 0x7c virtual false final false
 void set_High64(uint64_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DecCalc
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2653))
// CS Name: System.Decimal::DecCalc
struct CORDL_TYPE System__Decimal__DecCalc : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Buf24 = GlobalNamespace::System__Decimal__DecCalc__Buf24;

using PowerOvfl = GlobalNamespace::System__Decimal__DecCalc__PowerOvfl;

using RoundingMode = GlobalNamespace::System__Decimal__DecCalc__RoundingMode;

// Ctor Parameters [CppParam { name: "uflags", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "uhi", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ulo", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "umid", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ulomidLE", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr System__Decimal__DecCalc(uint32_t uflags, uint32_t uhi, uint32_t ulo, uint32_t umid, uint64_t ulomidLE) noexcept;


                    constexpr System__Decimal__DecCalc(System__Decimal__DecCalc const&) = default;
                    constexpr System__Decimal__DecCalc(System__Decimal__DecCalc&&) = default;
                    constexpr System__Decimal__DecCalc& operator=(System__Decimal__DecCalc const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Decimal__DecCalc& operator=(System__Decimal__DecCalc&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Decimal__DecCalc(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_uflags, put=__set_uflags))  uflags;

constexpr void __set_uflags(uint32_t value) ;

constexpr uint32_t __get_uflags() const;

 uint32_t __declspec(property(get=__get_uhi, put=__set_uhi))  uhi;

constexpr void __set_uhi(uint32_t value) ;

constexpr uint32_t __get_uhi() const;

 uint32_t __declspec(property(get=__get_ulo, put=__set_ulo))  ulo;

constexpr void __set_ulo(uint32_t value) ;

constexpr uint32_t __get_ulo() const;

 uint32_t __declspec(property(get=__get_umid, put=__set_umid))  umid;

constexpr void __set_umid(uint32_t value) ;

constexpr uint32_t __get_umid() const;

 uint64_t __declspec(property(get=__get_ulomidLE, put=__set_ulomidLE))  ulomidLE;

constexpr void __set_ulomidLE(uint64_t value) ;

constexpr uint64_t __get_ulomidLE() const;

static ::ArrayW<uint32_t> __declspec(property(get=__get_s_powers10, put=__set_s_powers10))  s_powers10;

static void __set_s_powers10(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_s_powers10() ;

static ::ArrayW<uint64_t> __declspec(property(get=__get_s_ulongPowers10, put=__set_s_ulongPowers10))  s_ulongPowers10;

static void __set_s_ulongPowers10(::ArrayW<uint64_t> value) ;

static ::ArrayW<uint64_t> __get_s_ulongPowers10() ;

static ::ArrayW<double_t> __declspec(property(get=__get_s_doublePowers10, put=__set_s_doublePowers10))  s_doublePowers10;

static void __set_s_doublePowers10(::ArrayW<double_t> value) ;

static ::ArrayW<double_t> __get_s_doublePowers10() ;

static ::ArrayW<GlobalNamespace::System__Decimal__DecCalc__PowerOvfl> __declspec(property(get=__get_PowerOvflValues, put=__set_PowerOvflValues))  PowerOvflValues;

static void __set_PowerOvflValues(::ArrayW<GlobalNamespace::System__Decimal__DecCalc__PowerOvfl> value) ;

static ::ArrayW<GlobalNamespace::System__Decimal__DecCalc__PowerOvfl> __get_PowerOvflValues() ;


// Properties

 uint32_t __declspec(property(get=get_High, put=set_High))  High;

 uint32_t __declspec(property(get=get_Low, put=set_Low))  Low;

 uint32_t __declspec(property(get=get_Mid, put=set_Mid))  Mid;

 bool __declspec(property(get=get_IsNegative))  IsNegative;

 uint64_t __declspec(property(get=get_Low64, put=set_Low64))  Low64;


// Methods

/// @brief Method get_High addr 0x24a0ee8 size 0x8 virtual false final false
 uint32_t get_High() ;

/// @brief Method set_High addr 0x24a0ef0 size 0x8 virtual false final false
 void set_High(uint32_t value) ;

/// @brief Method get_Low addr 0x24a0ef8 size 0x8 virtual false final false
 uint32_t get_Low() ;

/// @brief Method set_Low addr 0x24a0f00 size 0x8 virtual false final false
 void set_Low(uint32_t value) ;

/// @brief Method get_Mid addr 0x24a0f08 size 0x8 virtual false final false
 uint32_t get_Mid() ;

/// @brief Method set_Mid addr 0x24a0f10 size 0x8 virtual false final false
 void set_Mid(uint32_t value) ;

/// @brief Method get_IsNegative addr 0x24a0f18 size 0xc virtual false final false
 bool get_IsNegative() ;

/// @brief Method get_Low64 addr 0x24a0f24 size 0x60 virtual false final false
 uint64_t get_Low64() ;

/// @brief Method set_Low64 addr 0x24a0f84 size 0x7c virtual false final false
 void set_Low64(uint64_t value) ;

/// @brief Method GetExponent addr 0x24a1000 size 0xc virtual false final false
static uint32_t GetExponent(float_t f) ;

/// @brief Method GetExponent addr 0x24a100c size 0xc virtual false final false
static uint32_t GetExponent(double_t d) ;

/// @brief Method UInt32x32To64 addr 0x24a1018 size 0x8 virtual false final false
static uint64_t UInt32x32To64(uint32_t a, uint32_t b) ;

/// @brief Method UInt64x64To128 addr 0x24a1020 size 0x114 virtual false final false
static void UInt64x64To128(uint64_t a, uint64_t b, ByRef<System::System__Decimal__DecCalc> result) ;

/// @brief Method Div96ByConst addr 0x24a1134 size 0x44 virtual false final false
static bool Div96ByConst(ByRef<uint64_t> high64, ByRef<uint32_t> low, uint32_t pow) ;

/// @brief Method Unscale addr 0x24a1178 size 0x25c virtual false final false
static void Unscale(ByRef<uint32_t> low, ByRef<uint64_t> high64, ByRef<int32_t> scale) ;

/// @brief Method ScaleResult addr 0x24a13d4 size 0xbdc virtual false final false
static int32_t ScaleResult(void* bufRes, uint32_t hiRes, int32_t scale) ;

/// @brief Method DivByConst addr 0x24a1fb0 size 0x54 virtual false final false
static uint32_t DivByConst(void* result, uint32_t hiRes, ByRef<uint32_t> quotient, ByRef<uint32_t> remainder, uint32_t power) ;

/// @brief Method LeadingZeroCount addr 0x24a2004 size 0x68 virtual false final false
static int32_t LeadingZeroCount(uint32_t value) ;

/// @brief Method DecAddSub addr 0x249f880 size 0x694 virtual false final false
static void DecAddSub(ByRef<System::System__Decimal__DecCalc> d1, ByRef<System::System__Decimal__DecCalc> d2, bool sign) ;

/// @brief Method VarDecCmp addr 0x249d45c size 0xd0 virtual false final false
static int32_t VarDecCmp(ByRef<System::Decimal> d1, ByRef<System::Decimal> d2) ;

/// @brief Method VarDecCmpSub addr 0x24a21c4 size 0x18c virtual false final false
static int32_t VarDecCmpSub(ByRef<System::Decimal> d1, ByRef<System::Decimal> d2) ;

/// @brief Method VarDecMul addr 0x24a0078 size 0x468 virtual false final false
static void VarDecMul(ByRef<System::System__Decimal__DecCalc> d1, ByRef<System::System__Decimal__DecCalc> d2) ;

/// @brief Method VarDecFromR4 addr 0x249c7e0 size 0x404 virtual false final false
static void VarDecFromR4(float_t input, ByRef<System::System__Decimal__DecCalc> result) ;

/// @brief Method VarDecFromR8 addr 0x249cc6c size 0x40c virtual false final false
static void VarDecFromR8(double_t input, ByRef<System::System__Decimal__DecCalc> result) ;

/// @brief Method VarR4FromDec addr 0x249f2c4 size 0x5c virtual false final false
static float_t VarR4FromDec(ByRef<System::Decimal> value) ;

/// @brief Method VarR8FromDec addr 0x249ed28 size 0xc8 virtual false final false
static double_t VarR8FromDec(ByRef<System::Decimal> value) ;

/// @brief Method GetHashCode addr 0x249d784 size 0x290 virtual false final false
static int32_t GetHashCode(ByRef<System::Decimal> d) ;

/// @brief Method InternalRound addr 0x249e2c0 size 0x284 virtual false final false
static void InternalRound(ByRef<System::System__Decimal__DecCalc> d, uint32_t scale, GlobalNamespace::System__Decimal__DecCalc__RoundingMode mode) ;

/// @brief Method DecDivMod1E9 addr 0x249c688 size 0x68 virtual false final false
static uint32_t DecDivMod1E9(ByRef<System::System__Decimal__DecCalc> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Decimal
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2654))
// CS Name: System.Decimal
struct CORDL_TYPE Decimal : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using DecCalc = System::System__Decimal__DecCalc;

/// @brief Convert operator to System::IFormattable
constexpr operator  System::IFormattable() const;

/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const;

/// @brief Convert operator to System::IConvertible
constexpr operator  System::IConvertible() const;

/// @brief Convert operator to System::IComparable_1<System::Decimal>
constexpr operator  System::IComparable_1<System::Decimal>() const;

/// @brief Convert operator to System::IEquatable_1<System::Decimal>
constexpr operator  System::IEquatable_1<System::Decimal>() const;

/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr operator  System::Runtime::Serialization::IDeserializationCallback() const;

/// @brief Convert operator to System::ISpanFormattable
constexpr operator  System::ISpanFormattable() const;

// Ctor Parameters [CppParam { name: "flags", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hi", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "mid", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ulomidLE", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr Decimal(int32_t flags, int32_t hi, int32_t lo, int32_t mid, uint64_t ulomidLE) noexcept;


                    constexpr Decimal(Decimal const&) = default;
                    constexpr Decimal(Decimal&&) = default;
                    constexpr Decimal& operator=(Decimal const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Decimal& operator=(Decimal&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Decimal(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field SignMask offset 0
static constexpr int32_t  SignMask{-2147483648};

/// @brief Field ScaleMask offset 0
static constexpr int32_t  ScaleMask{16711680};

/// @brief Field ScaleShift offset 0
static constexpr int32_t  ScaleShift{16};

static System::Decimal __declspec(property(get=__get_Zero, put=__set_Zero))  Zero;

static void __set_Zero(System::Decimal value) ;

static System::Decimal __get_Zero() ;

static System::Decimal __declspec(property(get=__get_One, put=__set_One))  One;

static void __set_One(System::Decimal value) ;

static System::Decimal __get_One() ;

static System::Decimal __declspec(property(get=__get_MinusOne, put=__set_MinusOne))  MinusOne;

static void __set_MinusOne(System::Decimal value) ;

static System::Decimal __get_MinusOne() ;

static System::Decimal __declspec(property(get=__get_MaxValue, put=__set_MaxValue))  MaxValue;

static void __set_MaxValue(System::Decimal value) ;

static System::Decimal __get_MaxValue() ;

static System::Decimal __declspec(property(get=__get_MinValue, put=__set_MinValue))  MinValue;

static void __set_MinValue(System::Decimal value) ;

static System::Decimal __get_MinValue() ;

 int32_t __declspec(property(get=__get_flags, put=__set_flags))  flags;

constexpr void __set_flags(int32_t value) ;

constexpr int32_t __get_flags() const;

 int32_t __declspec(property(get=__get_hi, put=__set_hi))  hi;

constexpr void __set_hi(int32_t value) ;

constexpr int32_t __get_hi() const;

 int32_t __declspec(property(get=__get_lo, put=__set_lo))  lo;

constexpr void __set_lo(int32_t value) ;

constexpr int32_t __get_lo() const;

 int32_t __declspec(property(get=__get_mid, put=__set_mid))  mid;

constexpr void __set_mid(int32_t value) ;

constexpr int32_t __get_mid() const;

 uint64_t __declspec(property(get=__get_ulomidLE, put=__set_ulomidLE))  ulomidLE;

constexpr void __set_ulomidLE(uint64_t value) ;

constexpr uint64_t __get_ulomidLE() const;


// Properties

 uint32_t __declspec(property(get=get_High))  High;

 uint32_t __declspec(property(get=get_Low))  Low;

 uint32_t __declspec(property(get=get_Mid))  Mid;

 bool __declspec(property(get=get_IsNegative))  IsNegative;

 int32_t __declspec(property(get=get_Scale))  Scale;

 uint64_t __declspec(property(get=get_Low64))  Low64;


// Methods

/// @brief Method get_High addr 0x249c524 size 0x8 virtual false final false
 uint32_t get_High() ;

/// @brief Method get_Low addr 0x249c52c size 0x8 virtual false final false
 uint32_t get_Low() ;

/// @brief Method get_Mid addr 0x249c534 size 0x8 virtual false final false
 uint32_t get_Mid() ;

/// @brief Method get_IsNegative addr 0x249c53c size 0xc virtual false final false
 bool get_IsNegative() ;

/// @brief Method get_Scale addr 0x249c548 size 0x8 virtual false final false
 int32_t get_Scale() ;

/// @brief Method get_Low64 addr 0x249c550 size 0x60 virtual false final false
 uint64_t get_Low64() ;

/// @brief Method AsMutable addr 0x249c5b0 size 0x4 virtual false final false
static ByRef<System::System__Decimal__DecCalc> AsMutable(ByRef<System::Decimal> d) ;

/// @brief Method DecDivMod1E9 addr 0x249c5b4 size 0xd4 virtual false final false
static uint32_t DecDivMod1E9(ByRef<System::Decimal> value) ;

/// @brief Method .ctor addr 0x249c6f0 size 0x24 virtual false final false
 void _ctor(int32_t value) ;

/// @brief Method .ctor addr 0x249c714 size 0xc virtual false final false
 void _ctor(uint32_t value) ;

/// @brief Method .ctor addr 0x249c720 size 0x28 virtual false final false
 void _ctor(int64_t value) ;

/// @brief Method .ctor addr 0x249c748 size 0x10 virtual false final false
 void _ctor(uint64_t value) ;

/// @brief Method .ctor addr 0x249c758 size 0x88 virtual false final false
 void _ctor(float_t value) ;

/// @brief Method .ctor addr 0x249cbe4 size 0x88 virtual false final false
 void _ctor(double_t value) ;

/// @brief Method IsValid addr 0x249d078 size 0x20 virtual false final false
static bool IsValid(int32_t flags) ;

/// @brief Method .ctor addr 0x249d098 size 0x140 virtual false final false
 void _ctor(::ArrayW<int32_t> bits) ;

/// @brief Method .ctor addr 0x249d1d8 size 0x9c virtual false final false
 void _ctor(int32_t lo, int32_t mid, int32_t hi, bool isNegative, uint8_t scale) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x249d274 size 0xb8 virtual true final true
 void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method .ctor addr 0x249d32c size 0x10 virtual false final false
 void _ctor(ByRef<System::Decimal> d, int32_t flags) ;

/// @brief Method CompareTo addr 0x249d33c size 0x120 virtual true final true
 int32_t CompareTo(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method CompareTo addr 0x249d52c size 0x90 virtual true final true
 int32_t CompareTo(System::Decimal value) ;

/// @brief Method Equals addr 0x249d5bc size 0xdc virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Equals addr 0x249d698 size 0x98 virtual true final true
 bool Equals(System::Decimal value) ;

/// @brief Method GetHashCode addr 0x249d730 size 0x54 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x249da14 size 0xac virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x249dac0 size 0xbc virtual true final true
 ::StringW ToString(System::IFormatProvider provider) ;

/// @brief Method ToString addr 0x249db7c size 0xd8 virtual true final true
 ::StringW ToString(::StringW format, System::IFormatProvider provider) ;

/// @brief Method TryFormat addr 0x249dc54 size 0xcc virtual true final true
 bool TryFormat(System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider provider) ;

/// @brief Method Parse addr 0x249dd20 size 0xd4 virtual false final false
static System::Decimal Parse(::StringW s, System::IFormatProvider provider) ;

/// @brief Method Parse addr 0x249ddf4 size 0xe4 virtual false final false
static System::Decimal Parse(::StringW s, System::Globalization::NumberStyles style, System::IFormatProvider provider) ;

/// @brief Method TryParse addr 0x249ded8 size 0xf8 virtual false final false
static bool TryParse(::StringW s, System::Globalization::NumberStyles style, System::IFormatProvider provider, ByRef<System::Decimal> result) ;

/// @brief Method GetBits addr 0x249dfd0 size 0x9c virtual false final false
static ::ArrayW<int32_t> GetBits(System::Decimal d) ;

/// @brief Method Negate addr 0x249e06c size 0x8 virtual false final false
static System::Decimal Negate(System::Decimal d) ;

/// @brief Method Round addr 0x249e074 size 0x94 virtual false final false
static System::Decimal Round(System::Decimal d, int32_t decimals) ;

/// @brief Method Round addr 0x249e108 size 0x1b8 virtual false final false
static System::Decimal Round(ByRef<System::Decimal> d, int32_t decimals, System::MidpointRounding mode) ;

/// @brief Method ToByte addr 0x249e544 size 0x180 virtual false final false
static uint8_t ToByte(System::Decimal value) ;

/// @brief Method ToSByte addr 0x249e830 size 0x180 virtual false final false
static int8_t ToSByte(System::Decimal value) ;

/// @brief Method ToInt16 addr 0x249eb28 size 0x180 virtual false final false
static int16_t ToInt16(System::Decimal value) ;

/// @brief Method ToDouble addr 0x249eca8 size 0x80 virtual false final false
static double_t ToDouble(System::Decimal d) ;

/// @brief Method ToInt32 addr 0x249e9b0 size 0x178 virtual false final false
static int32_t ToInt32(System::Decimal d) ;

/// @brief Method ToInt64 addr 0x249edf0 size 0x170 virtual false final false
static int64_t ToInt64(System::Decimal d) ;

/// @brief Method ToUInt16 addr 0x249ef60 size 0x180 virtual false final false
static uint16_t ToUInt16(System::Decimal value) ;

/// @brief Method ToUInt32 addr 0x249e6c4 size 0x16c virtual false final false
static uint32_t ToUInt32(System::Decimal d) ;

/// @brief Method ToUInt64 addr 0x249f0e0 size 0x164 virtual false final false
static uint64_t ToUInt64(System::Decimal d) ;

/// @brief Method ToSingle addr 0x249f244 size 0x80 virtual false final false
static float_t ToSingle(System::Decimal d) ;

/// @brief Method Truncate addr 0x249f320 size 0x100 virtual false final false
static System::Decimal Truncate(System::Decimal d) ;

/// @brief Method Truncate addr 0x249f420 size 0x98 virtual false final false
static void Truncate(ByRef<System::Decimal> d) ;

/// @brief Method op_Implicit addr 0x249f4b8 size 0xc virtual false final false
static System::Decimal op_Implicit_System__Decimal(uint8_t value) ;

/// @brief Method op_Implicit addr 0x249f4c4 size 0x18 virtual false final false
static System::Decimal op_Implicit_System__Decimal(int8_t value) ;

/// @brief Method op_Implicit addr 0x249f4dc size 0x18 virtual false final false
static System::Decimal op_Implicit_System__Decimal(int16_t value) ;

/// @brief Method op_Implicit addr 0x249f4f4 size 0xc virtual false final false
static System::Decimal op_Implicit_System__Decimal(uint16_t value) ;

/// @brief Method op_Implicit addr 0x249f500 size 0xc virtual false final false
static System::Decimal op_Implicit_System__Decimal(char16_t value) ;

/// @brief Method op_Implicit addr 0x249f50c size 0x14 virtual false final false
static System::Decimal op_Implicit_System__Decimal(int32_t value) ;

/// @brief Method op_Implicit addr 0x249f520 size 0xc virtual false final false
static System::Decimal op_Implicit_System__Decimal(uint32_t value) ;

/// @brief Method op_Implicit addr 0x249f52c size 0x18 virtual false final false
static System::Decimal op_Implicit_System__Decimal(int64_t value) ;

/// @brief Method op_Implicit addr 0x249f544 size 0xc virtual false final false
static System::Decimal op_Implicit_System__Decimal(uint64_t value) ;

/// @brief Method op_Explicit addr 0x249f550 size 0x44 virtual false final false
static System::Decimal op_Explicit_System__Decimal(float_t value) ;

/// @brief Method op_Explicit addr 0x249f594 size 0x44 virtual false final false
static System::Decimal op_Explicit_System__Decimal(double_t value) ;

/// @brief Method op_Explicit addr 0x249f5d8 size 0x64 virtual false final false
static int32_t op_Explicit_int32_t(System::Decimal value) ;

/// @brief Method op_Explicit addr 0x249f63c size 0x64 virtual false final false
static int64_t op_Explicit_int64_t(System::Decimal value) ;

/// @brief Method op_Explicit addr 0x249f6a0 size 0x64 virtual false final false
static uint64_t op_Explicit_uint64_t(System::Decimal value) ;

/// @brief Method op_Explicit addr 0x249f704 size 0x64 virtual false final false
static float_t op_Explicit_float_t(System::Decimal value) ;

/// @brief Method op_Explicit addr 0x249f768 size 0x64 virtual false final false
static double_t op_Explicit_double_t(System::Decimal value) ;

/// @brief Method op_Addition addr 0x249f7cc size 0xb4 virtual false final false
static System::Decimal op_Addition(System::Decimal d1, System::Decimal d2) ;

/// @brief Method op_Subtraction addr 0x249ff14 size 0xb4 virtual false final false
static System::Decimal op_Subtraction(System::Decimal d1, System::Decimal d2) ;

/// @brief Method op_Multiply addr 0x249ffc8 size 0xb0 virtual false final false
static System::Decimal op_Multiply(System::Decimal d1, System::Decimal d2) ;

/// @brief Method op_Equality addr 0x24a04e0 size 0x90 virtual false final false
static bool op_Equality(System::Decimal d1, System::Decimal d2) ;

/// @brief Method op_Inequality addr 0x24a0570 size 0x90 virtual false final false
static bool op_Inequality(System::Decimal d1, System::Decimal d2) ;

/// @brief Method op_LessThan addr 0x24a0600 size 0x8c virtual false final false
static bool op_LessThan(System::Decimal d1, System::Decimal d2) ;

/// @brief Method op_LessThanOrEqual addr 0x24a068c size 0x90 virtual false final false
static bool op_LessThanOrEqual(System::Decimal d1, System::Decimal d2) ;

/// @brief Method op_GreaterThan addr 0x24a071c size 0x90 virtual false final false
static bool op_GreaterThan(System::Decimal d1, System::Decimal d2) ;

/// @brief Method op_GreaterThanOrEqual addr 0x24a07ac size 0x90 virtual false final false
static bool op_GreaterThanOrEqual(System::Decimal d1, System::Decimal d2) ;

/// @brief Method GetTypeCode addr 0x24a083c size 0x8 virtual true final true
 System::TypeCode GetTypeCode() ;

/// @brief Method System.IConvertible.ToBoolean addr 0x24a0844 size 0x60 virtual true final true
 bool System_IConvertible_ToBoolean(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToChar addr 0x24a08a4 size 0x8c virtual true final true
 char16_t System_IConvertible_ToChar(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSByte addr 0x24a0930 size 0x60 virtual true final true
 int8_t System_IConvertible_ToSByte(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToByte addr 0x24a0990 size 0x60 virtual true final true
 uint8_t System_IConvertible_ToByte(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt16 addr 0x24a09f0 size 0x60 virtual true final true
 int16_t System_IConvertible_ToInt16(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt16 addr 0x24a0a50 size 0x60 virtual true final true
 uint16_t System_IConvertible_ToUInt16(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt32 addr 0x24a0ab0 size 0x60 virtual true final true
 int32_t System_IConvertible_ToInt32(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt32 addr 0x24a0b10 size 0x60 virtual true final true
 uint32_t System_IConvertible_ToUInt32(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt64 addr 0x24a0b70 size 0x60 virtual true final true
 int64_t System_IConvertible_ToInt64(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt64 addr 0x24a0bd0 size 0x60 virtual true final true
 uint64_t System_IConvertible_ToUInt64(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSingle addr 0x24a0c30 size 0x60 virtual true final true
 float_t System_IConvertible_ToSingle(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDouble addr 0x24a0c90 size 0x60 virtual true final true
 double_t System_IConvertible_ToDouble(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDecimal addr 0x24a0cf0 size 0xc virtual true final true
 System::Decimal System_IConvertible_ToDecimal(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDateTime addr 0x24a0cfc size 0x8c virtual true final true
 System::DateTime System_IConvertible_ToDateTime(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToType addr 0x24a0d88 size 0xd4 virtual true final true
 ::bs_hook::Il2CppWrapperType System_IConvertible_ToType(System::Type type, System::IFormatProvider provider) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::System__Decimal__DecCalc__RoundingMode, "System", "Decimal/DecCalc/RoundingMode");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::System__Decimal__DecCalc__Buf24, "System", "Decimal/DecCalc/Buf24");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::System__Decimal__DecCalc__PowerOvfl, "System", "Decimal/DecCalc/PowerOvfl");
DEFINE_IL2CPP_ARG_TYPE(System::Decimal, "System", "Decimal");
DEFINE_IL2CPP_ARG_TYPE(System::System__Decimal__DecCalc, "System", "Decimal/DecCalc");
