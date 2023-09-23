#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
class IConvertible;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
struct DateTime;
}
namespace System {
class Type;
}
namespace System {
class IFormattable;
}
namespace System {
struct Decimal;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::Globalization {
struct NumberStyles;
}
namespace System {
class IFormatProvider;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
struct TypeCode;
}
namespace System {
class ISpanFormattable;
}
namespace System {
class IComparable;
}
// Forward declare root types
namespace System {
struct Int32;
}
// Type: System::Int32
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2423))
// CS Name: System.Int32
struct CORDL_TYPE Int32 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const;

/// @brief Convert operator to System::IConvertible
constexpr operator  System::IConvertible() const;

/// @brief Convert operator to System::IFormattable
constexpr operator  System::IFormattable() const;

/// @brief Convert operator to System::IComparable_1<int32_t>
constexpr operator  System::IComparable_1<int32_t>() const;

/// @brief Convert operator to System::IEquatable_1<int32_t>
constexpr operator  System::IEquatable_1<int32_t>() const;

/// @brief Convert operator to System::ISpanFormattable
constexpr operator  System::ISpanFormattable() const;

// Ctor Parameters [CppParam { name: "m_value", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Int32(int32_t m_value) noexcept;


                    constexpr Int32(Int32 const&) = default;
                    constexpr Int32(Int32&&) = default;
                    constexpr Int32& operator=(Int32 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Int32& operator=(Int32&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Int32(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_value, put=__set_m_value))  m_value;

constexpr void __set_m_value(int32_t value) ;

constexpr int32_t __get_m_value() const;

/// @brief Field MaxValue offset 0
static constexpr int32_t  MaxValue{2147483647};

/// @brief Field MinValue offset 0
static constexpr int32_t  MinValue{-2147483648};


// Methods

/// @brief Method CompareTo addr 0x243dd90 size 0xd0 virtual true final true
 int32_t CompareTo(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method CompareTo addr 0x243de60 size 0x1c virtual true final true
 int32_t CompareTo(int32_t value) ;

/// @brief Method Equals addr 0x243de7c size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x243def4 size 0x10 virtual true final true
 bool Equals(int32_t obj) ;

/// @brief Method GetHashCode addr 0x243df04 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x243df0c size 0x94 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x243dfa0 size 0xb0 virtual false final false
 ::StringW ToString(::StringW format) ;

/// @brief Method ToString addr 0x243e050 size 0x98 virtual true final true
 ::StringW ToString(System::IFormatProvider provider) ;

/// @brief Method ToString addr 0x243e0e8 size 0xb4 virtual true final true
 ::StringW ToString(::StringW format, System::IFormatProvider provider) ;

/// @brief Method TryFormat addr 0x243e19c size 0xa0 virtual true final true
 bool TryFormat(System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider provider) ;

/// @brief Method Parse addr 0x243e23c size 0xc0 virtual false final false
static int32_t Parse(::StringW s) ;

/// @brief Method Parse addr 0x243e2fc size 0xd8 virtual false final false
static int32_t Parse(::StringW s, System::Globalization::NumberStyles style) ;

/// @brief Method Parse addr 0x243e3d4 size 0xd0 virtual false final false
static int32_t Parse(::StringW s, System::IFormatProvider provider) ;

/// @brief Method Parse addr 0x243e4a4 size 0xe0 virtual false final false
static int32_t Parse(::StringW s, System::Globalization::NumberStyles style, System::IFormatProvider provider) ;

/// @brief Method Parse addr 0x243e584 size 0x9c virtual false final false
static int32_t Parse(System::ReadOnlySpan_1<char16_t> s, System::Globalization::NumberStyles style, System::IFormatProvider provider) ;

/// @brief Method TryParse addr 0x243e620 size 0xd0 virtual false final false
static bool TryParse(::StringW s, ByRef<int32_t> result) ;

/// @brief Method TryParse addr 0x243e6f0 size 0x84 virtual false final false
static bool TryParse(System::ReadOnlySpan_1<char16_t> s, ByRef<int32_t> result) ;

/// @brief Method TryParse addr 0x243e774 size 0xf4 virtual false final false
static bool TryParse(::StringW s, System::Globalization::NumberStyles style, System::IFormatProvider provider, ByRef<int32_t> result) ;

/// @brief Method TryParse addr 0x243e868 size 0xa4 virtual false final false
static bool TryParse(System::ReadOnlySpan_1<char16_t> s, System::Globalization::NumberStyles style, System::IFormatProvider provider, ByRef<int32_t> result) ;

/// @brief Method GetTypeCode addr 0x243e90c size 0x8 virtual true final true
 System::TypeCode GetTypeCode() ;

/// @brief Method System.IConvertible.ToBoolean addr 0x243e914 size 0x5c virtual true final true
 bool System_IConvertible_ToBoolean(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToChar addr 0x243e970 size 0x5c virtual true final true
 char16_t System_IConvertible_ToChar(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSByte addr 0x243e9cc size 0x5c virtual true final true
 int8_t System_IConvertible_ToSByte(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToByte addr 0x243ea28 size 0x5c virtual true final true
 uint8_t System_IConvertible_ToByte(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt16 addr 0x243ea84 size 0x5c virtual true final true
 int16_t System_IConvertible_ToInt16(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt16 addr 0x243eae0 size 0x5c virtual true final true
 uint16_t System_IConvertible_ToUInt16(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt32 addr 0x243eb3c size 0x8 virtual true final true
 int32_t System_IConvertible_ToInt32(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt32 addr 0x243eb44 size 0x5c virtual true final true
 uint32_t System_IConvertible_ToUInt32(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt64 addr 0x243eba0 size 0x5c virtual true final true
 int64_t System_IConvertible_ToInt64(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt64 addr 0x243ebfc size 0x5c virtual true final true
 uint64_t System_IConvertible_ToUInt64(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSingle addr 0x243ec58 size 0x5c virtual true final true
 float_t System_IConvertible_ToSingle(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDouble addr 0x243ecb4 size 0x5c virtual true final true
 double_t System_IConvertible_ToDouble(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDecimal addr 0x243ed10 size 0x5c virtual true final true
 System::Decimal System_IConvertible_ToDecimal(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDateTime addr 0x243ed6c size 0x88 virtual true final true
 System::DateTime System_IConvertible_ToDateTime(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToType addr 0x243edf4 size 0xac virtual true final true
 ::bs_hook::Il2CppWrapperType System_IConvertible_ToType(System::Type type, System::IFormatProvider provider) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::Int32, "System", "Int32");
