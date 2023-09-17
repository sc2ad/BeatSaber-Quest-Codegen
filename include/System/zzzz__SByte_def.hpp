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
class NumberFormatInfo;
}
namespace System {
class Type;
}
namespace System {
class IComparable;
}
namespace System {
struct DateTime;
}
namespace System {
class ISpanFormattable;
}
namespace System {
class IFormatProvider;
}
namespace System {
struct TypeCode;
}
namespace System {
class IConvertible;
}
namespace System {
template<typename T>
struct Span_1;
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
class IFormattable;
}
namespace System {
struct Decimal;
}
namespace System::Globalization {
struct NumberStyles;
}
// Forward declare root types
namespace System {
struct SByte;
}
// Type: System::SByte
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2466))
// CS Name: System.SByte
struct CORDL_TYPE SByte : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IComparable
constexpr operator  ::System::IComparable() const;

/// @brief Convert operator to ::System::IConvertible
constexpr operator  ::System::IConvertible() const;

/// @brief Convert operator to ::System::IFormattable
constexpr operator  ::System::IFormattable() const;

/// @brief Convert operator to ::System::IComparable_1<int8_t>
constexpr operator  ::System::IComparable_1<int8_t>() const;

/// @brief Convert operator to ::System::IEquatable_1<int8_t>
constexpr operator  ::System::IEquatable_1<int8_t>() const;

/// @brief Convert operator to ::System::ISpanFormattable
constexpr operator  ::System::ISpanFormattable() const;

// Ctor Parameters [CppParam { name: "m_value", ty: "int8_t", modifiers: "", def_value: None }]
constexpr SByte(int8_t m_value) noexcept;


                    constexpr SByte(SByte const&) = default;
                    constexpr SByte(SByte&&) = default;
                    constexpr SByte& operator=(SByte const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SByte& operator=(SByte&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SByte(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int8_t __declspec(property(get=__get_m_value, put=__set_m_value))  m_value;

constexpr void __set_m_value(int8_t value) ;

constexpr int8_t __get_m_value() const;

/// @brief Field MaxValue offset 0
static constexpr int8_t  MaxValue{127};

/// @brief Field MinValue offset 0
static constexpr int8_t  MinValue{-128};


// Methods

/// @brief Method CompareTo addr 0x24520f0 size 0xc0 virtual true final true
 int32_t CompareTo(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method CompareTo addr 0x24521b0 size 0xc virtual true final true
 int32_t CompareTo(int8_t value) ;

/// @brief Method Equals addr 0x24521bc size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2452234 size 0x10 virtual true final true
 bool Equals(int8_t obj) ;

/// @brief Method GetHashCode addr 0x2452244 size 0xc virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2452250 size 0x98 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x24522e8 size 0x9c virtual true final true
 ::StringW ToString(::System::IFormatProvider provider) ;

/// @brief Method ToString addr 0x2452384 size 0x17c virtual true final true
 ::StringW ToString(::StringW format, ::System::IFormatProvider provider) ;

/// @brief Method TryFormat addr 0x2452500 size 0x11c virtual true final true
 bool TryFormat(::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider provider) ;

/// @brief Method Parse addr 0x245261c size 0x78 virtual false final false
static int8_t Parse(::StringW s, ::System::IFormatProvider provider) ;

/// @brief Method Parse addr 0x2452858 size 0x90 virtual false final false
static int8_t Parse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider provider) ;

/// @brief Method Parse addr 0x24526b8 size 0x1a0 virtual false final false
static int8_t Parse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo info) ;

/// @brief Method TryParse addr 0x24528e8 size 0xa8 virtual false final false
static bool TryParse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider provider, ByRef<int8_t> result) ;

/// @brief Method TryParse addr 0x2452990 size 0xc8 virtual false final false
static bool TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo info, ByRef<int8_t> result) ;

/// @brief Method GetTypeCode addr 0x2452a58 size 0x8 virtual true final true
 ::System::TypeCode GetTypeCode() ;

/// @brief Method System.IConvertible.ToBoolean addr 0x2452a60 size 0x5c virtual true final true
 bool System_IConvertible_ToBoolean(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToChar addr 0x2452abc size 0x5c virtual true final true
 char16_t System_IConvertible_ToChar(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSByte addr 0x2452b18 size 0x8 virtual true final true
 int8_t System_IConvertible_ToSByte(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToByte addr 0x2452b20 size 0x5c virtual true final true
 uint8_t System_IConvertible_ToByte(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt16 addr 0x2452b7c size 0x5c virtual true final true
 int16_t System_IConvertible_ToInt16(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt16 addr 0x2452bd8 size 0x5c virtual true final true
 uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt32 addr 0x2452c34 size 0x8 virtual true final true
 int32_t System_IConvertible_ToInt32(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt32 addr 0x2452c3c size 0x5c virtual true final true
 uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt64 addr 0x2452c98 size 0x5c virtual true final true
 int64_t System_IConvertible_ToInt64(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt64 addr 0x2452cf4 size 0x5c virtual true final true
 uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSingle addr 0x2452d50 size 0x5c virtual true final true
 float_t System_IConvertible_ToSingle(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDouble addr 0x2452dac size 0x5c virtual true final true
 double_t System_IConvertible_ToDouble(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDecimal addr 0x2452e08 size 0x5c virtual true final true
 ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDateTime addr 0x2452e64 size 0x8c virtual true final true
 ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToType addr 0x2452ef0 size 0xac virtual true final true
 ::bs_hook::Il2CppWrapperType System_IConvertible_ToType(::System::Type type, ::System::IFormatProvider provider) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::SByte, "System", "SByte");
