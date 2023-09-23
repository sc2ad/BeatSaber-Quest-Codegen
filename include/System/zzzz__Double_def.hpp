#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class Type;
}
namespace System {
class ISpanFormattable;
}
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
struct DateTime;
}
namespace System {
class IFormattable;
}
namespace System::Globalization {
struct NumberStyles;
}
namespace System {
struct TypeCode;
}
namespace System {
struct Decimal;
}
namespace System {
class IConvertible;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
class IComparable;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace System {
struct Double;
}
// Type: System::Double
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2374))
// CS Name: System.Double
struct CORDL_TYPE Double : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const;

/// @brief Convert operator to System::IConvertible
constexpr operator  System::IConvertible() const;

/// @brief Convert operator to System::IFormattable
constexpr operator  System::IFormattable() const;

/// @brief Convert operator to System::IComparable_1<double_t>
constexpr operator  System::IComparable_1<double_t>() const;

/// @brief Convert operator to System::IEquatable_1<double_t>
constexpr operator  System::IEquatable_1<double_t>() const;

/// @brief Convert operator to System::ISpanFormattable
constexpr operator  System::ISpanFormattable() const;

// Ctor Parameters [CppParam { name: "m_value", ty: "double_t", modifiers: "", def_value: None }]
constexpr Double(double_t m_value) noexcept;


                    constexpr Double(Double const&) = default;
                    constexpr Double(Double&&) = default;
                    constexpr Double& operator=(Double const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Double& operator=(Double&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Double(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 double_t __declspec(property(get=__get_m_value, put=__set_m_value))  m_value;

constexpr void __set_m_value(double_t value) ;

constexpr double_t __get_m_value() const;

/// @brief Field MinValue offset 0
static constexpr double_t  MinValue{-179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000};

/// @brief Field MaxValue offset 0
static constexpr double_t  MaxValue{179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000};

/// @brief Field Epsilon offset 0
static constexpr double_t  Epsilon{0.000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000005};

/// @brief Field NegativeInfinity offset 0
static constexpr double_t  NegativeInfinity{-inf};

/// @brief Field PositiveInfinity offset 0
static constexpr double_t  PositiveInfinity{inf};

/// @brief Field NaN offset 0
static constexpr double_t  NaN{NaN};

/// @brief Field NegativeZero offset 0
static constexpr double_t  NegativeZero{-0};


// Methods

/// @brief Method IsFinite addr 0x242787c size 0x68 virtual false final false
static bool IsFinite(double_t d) ;

/// @brief Method IsInfinity addr 0x24278e4 size 0x6c virtual false final false
static bool IsInfinity(double_t d) ;

/// @brief Method IsNaN addr 0x2427950 size 0x6c virtual false final false
static bool IsNaN(double_t d) ;

/// @brief Method IsNegative addr 0x24279bc size 0x60 virtual false final false
static bool IsNegative(double_t d) ;

/// @brief Method IsNegativeInfinity addr 0x2427a1c size 0x14 virtual false final false
static bool IsNegativeInfinity(double_t d) ;

/// @brief Method IsPositiveInfinity addr 0x2427a30 size 0x14 virtual false final false
static bool IsPositiveInfinity(double_t d) ;

/// @brief Method CompareTo addr 0x2427a44 size 0x17c virtual true final true
 int32_t CompareTo(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method CompareTo addr 0x2427bc0 size 0xe4 virtual true final true
 int32_t CompareTo(double_t value) ;

/// @brief Method Equals addr 0x2427ca4 size 0x118 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2427dbc size 0xd0 virtual true final true
 bool Equals(double_t obj) ;

/// @brief Method GetHashCode addr 0x2427e8c size 0x70 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2427efc size 0x7c virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2427f78 size 0x88 virtual false final false
 ::StringW ToString(::StringW format) ;

/// @brief Method ToString addr 0x2428000 size 0x8c virtual true final true
 ::StringW ToString(System::IFormatProvider provider) ;

/// @brief Method ToString addr 0x242808c size 0x90 virtual true final true
 ::StringW ToString(::StringW format, System::IFormatProvider provider) ;

/// @brief Method TryFormat addr 0x242811c size 0xc0 virtual true final true
 bool TryFormat(System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider provider) ;

/// @brief Method Parse addr 0x24281dc size 0xc4 virtual false final false
static double_t Parse(::StringW s) ;

/// @brief Method Parse addr 0x24282a0 size 0xd4 virtual false final false
static double_t Parse(::StringW s, System::IFormatProvider provider) ;

/// @brief Method Parse addr 0x2428374 size 0xe4 virtual false final false
static double_t Parse(::StringW s, System::Globalization::NumberStyles style, System::IFormatProvider provider) ;

/// @brief Method TryParse addr 0x2428458 size 0x80 virtual false final false
static bool TryParse(::StringW s, ByRef<double_t> result) ;

/// @brief Method TryParse addr 0x2428988 size 0xa8 virtual false final false
static bool TryParse(::StringW s, System::Globalization::NumberStyles style, System::IFormatProvider provider, ByRef<double_t> result) ;

/// @brief Method TryParse addr 0x24284d8 size 0x4b0 virtual false final false
static bool TryParse(System::ReadOnlySpan_1<char16_t> s, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo info, ByRef<double_t> result) ;

/// @brief Method GetTypeCode addr 0x2428a30 size 0x8 virtual true final true
 System::TypeCode GetTypeCode() ;

/// @brief Method System.IConvertible.ToBoolean addr 0x2428a38 size 0x64 virtual true final true
 bool System_IConvertible_ToBoolean(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToChar addr 0x2428a9c size 0x8c virtual true final true
 char16_t System_IConvertible_ToChar(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSByte addr 0x2428b28 size 0x64 virtual true final true
 int8_t System_IConvertible_ToSByte(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToByte addr 0x2428b8c size 0x64 virtual true final true
 uint8_t System_IConvertible_ToByte(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt16 addr 0x2428bf0 size 0x64 virtual true final true
 int16_t System_IConvertible_ToInt16(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt16 addr 0x2428c54 size 0x64 virtual true final true
 uint16_t System_IConvertible_ToUInt16(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt32 addr 0x2428cb8 size 0x64 virtual true final true
 int32_t System_IConvertible_ToInt32(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt32 addr 0x2428d1c size 0x64 virtual true final true
 uint32_t System_IConvertible_ToUInt32(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt64 addr 0x2428d80 size 0x64 virtual true final true
 int64_t System_IConvertible_ToInt64(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt64 addr 0x2428de4 size 0x64 virtual true final true
 uint64_t System_IConvertible_ToUInt64(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSingle addr 0x2428e48 size 0x64 virtual true final true
 float_t System_IConvertible_ToSingle(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDouble addr 0x2428eac size 0x8 virtual true final true
 double_t System_IConvertible_ToDouble(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDecimal addr 0x2428eb4 size 0x64 virtual true final true
 System::Decimal System_IConvertible_ToDecimal(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDateTime addr 0x2428f18 size 0x8c virtual true final true
 System::DateTime System_IConvertible_ToDateTime(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToType addr 0x2428fa4 size 0xac virtual true final true
 ::bs_hook::Il2CppWrapperType System_IConvertible_ToType(System::Type type, System::IFormatProvider provider) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::Double, "System", "Double");
