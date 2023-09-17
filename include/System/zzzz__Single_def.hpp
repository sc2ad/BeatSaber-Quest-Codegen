#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
template<typename T>
class IComparable_1;
}
namespace System::Globalization {
struct NumberStyles;
}
namespace System {
class IFormattable;
}
namespace System {
struct TypeCode;
}
namespace System {
struct DateTime;
}
namespace System {
class IConvertible;
}
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System {
class IFormatProvider;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
class ISpanFormattable;
}
namespace System {
class Type;
}
namespace System {
struct Decimal;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
class IComparable;
}
// Forward declare root types
namespace System {
struct Single;
}
// Type: System::Single
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2468))
// CS Name: System.Single
struct CORDL_TYPE Single : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IComparable
constexpr operator  ::System::IComparable() const;

/// @brief Convert operator to ::System::IConvertible
constexpr operator  ::System::IConvertible() const;

/// @brief Convert operator to ::System::IFormattable
constexpr operator  ::System::IFormattable() const;

/// @brief Convert operator to ::System::IComparable_1<float_t>
constexpr operator  ::System::IComparable_1<float_t>() const;

/// @brief Convert operator to ::System::IEquatable_1<float_t>
constexpr operator  ::System::IEquatable_1<float_t>() const;

/// @brief Convert operator to ::System::ISpanFormattable
constexpr operator  ::System::ISpanFormattable() const;

// Ctor Parameters [CppParam { name: "m_value", ty: "float_t", modifiers: "", def_value: None }]
constexpr Single(float_t m_value) noexcept;


                    constexpr Single(Single const&) = default;
                    constexpr Single(Single&&) = default;
                    constexpr Single& operator=(Single const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Single& operator=(Single&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Single(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_m_value, put=__set_m_value))  m_value;

constexpr void __set_m_value(float_t value) ;

constexpr float_t __get_m_value() const;

/// @brief Field MinValue offset 0
static constexpr float_t  MinValue{-340282350000000000000000000000000000000};

/// @brief Field Epsilon offset 0
static constexpr float_t  Epsilon{0.000000000000000000000000000000000000000000001};

/// @brief Field MaxValue offset 0
static constexpr float_t  MaxValue{340282350000000000000000000000000000000};

/// @brief Field PositiveInfinity offset 0
static constexpr float_t  PositiveInfinity{inf};

/// @brief Field NegativeInfinity offset 0
static constexpr float_t  NegativeInfinity{-inf};

/// @brief Field NaN offset 0
static constexpr float_t  NaN{NaN};

/// @brief Field NegativeZero offset 0
static constexpr float_t  NegativeZero{-0};


// Methods

/// @brief Method IsInfinity addr 0x2452fa4 size 0x6c virtual false final false
static bool IsInfinity(float_t f) ;

/// @brief Method IsNaN addr 0x2453010 size 0x6c virtual false final false
static bool IsNaN(float_t f) ;

/// @brief Method IsNegativeInfinity addr 0x245307c size 0x14 virtual false final false
static bool IsNegativeInfinity(float_t f) ;

/// @brief Method IsPositiveInfinity addr 0x2453090 size 0x14 virtual false final false
static bool IsPositiveInfinity(float_t f) ;

/// @brief Method CompareTo addr 0x24530a4 size 0x17c virtual true final true
 int32_t CompareTo(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method CompareTo addr 0x2453220 size 0xe4 virtual true final true
 int32_t CompareTo(float_t value) ;

/// @brief Method Equals addr 0x2453304 size 0x118 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x245341c size 0xd0 virtual true final true
 bool Equals(float_t obj) ;

/// @brief Method GetHashCode addr 0x24534ec size 0x68 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2453554 size 0x7c virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x24535d0 size 0x8c virtual true final true
 ::StringW ToString(::System::IFormatProvider provider) ;

/// @brief Method ToString addr 0x245365c size 0x88 virtual false final false
 ::StringW ToString(::StringW format) ;

/// @brief Method ToString addr 0x24536e4 size 0x90 virtual true final true
 ::StringW ToString(::StringW format, ::System::IFormatProvider provider) ;

/// @brief Method TryFormat addr 0x2453774 size 0xc0 virtual true final true
 bool TryFormat(::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider provider) ;

/// @brief Method Parse addr 0x2453834 size 0xb4 virtual false final false
static float_t Parse(::StringW s) ;

/// @brief Method Parse addr 0x24538e8 size 0xc4 virtual false final false
static float_t Parse(::StringW s, ::System::IFormatProvider provider) ;

/// @brief Method Parse addr 0x24539ac size 0xd4 virtual false final false
static float_t Parse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider provider) ;

/// @brief Method TryParse addr 0x2453a80 size 0x80 virtual false final false
static bool TryParse(::StringW s, ByRef<float_t> result) ;

/// @brief Method TryParse addr 0x2453fa4 size 0xa8 virtual false final false
static bool TryParse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider provider, ByRef<float_t> result) ;

/// @brief Method TryParse addr 0x2453b00 size 0x4a4 virtual false final false
static bool TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo info, ByRef<float_t> result) ;

/// @brief Method GetTypeCode addr 0x245404c size 0x8 virtual true final true
 ::System::TypeCode GetTypeCode() ;

/// @brief Method System.IConvertible.ToBoolean addr 0x2454054 size 0x64 virtual true final true
 bool System_IConvertible_ToBoolean(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToChar addr 0x24540b8 size 0x8c virtual true final true
 char16_t System_IConvertible_ToChar(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSByte addr 0x2454144 size 0x64 virtual true final true
 int8_t System_IConvertible_ToSByte(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToByte addr 0x24541a8 size 0x64 virtual true final true
 uint8_t System_IConvertible_ToByte(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt16 addr 0x245420c size 0x64 virtual true final true
 int16_t System_IConvertible_ToInt16(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt16 addr 0x2454270 size 0x64 virtual true final true
 uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt32 addr 0x24542d4 size 0x64 virtual true final true
 int32_t System_IConvertible_ToInt32(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt32 addr 0x2454338 size 0x64 virtual true final true
 uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt64 addr 0x245439c size 0x64 virtual true final true
 int64_t System_IConvertible_ToInt64(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt64 addr 0x2454400 size 0x64 virtual true final true
 uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSingle addr 0x2454464 size 0x8 virtual true final true
 float_t System_IConvertible_ToSingle(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDouble addr 0x245446c size 0x64 virtual true final true
 double_t System_IConvertible_ToDouble(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDecimal addr 0x24544d0 size 0x64 virtual true final true
 ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDateTime addr 0x2454534 size 0x8c virtual true final true
 ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToType addr 0x24545c0 size 0xac virtual true final true
 ::bs_hook::Il2CppWrapperType System_IConvertible_ToType(::System::Type type, ::System::IFormatProvider provider) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Single, "System", "Single");
