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
class ISpanFormattable;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
class IConvertible;
}
namespace System {
struct Decimal;
}
namespace System {
class IFormattable;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
class IComparable;
}
namespace System {
class IFormatProvider;
}
namespace System {
struct TypeCode;
}
namespace System::Globalization {
struct NumberStyles;
}
namespace System {
class Type;
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
struct DateTime;
}
// Forward declare root types
namespace System {
struct UInt32;
}
// Type: System::UInt32
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2498))
// CS Name: System.UInt32
struct CORDL_TYPE UInt32 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IComparable
constexpr operator  ::System::IComparable() const;

/// @brief Convert operator to ::System::IConvertible
constexpr operator  ::System::IConvertible() const;

/// @brief Convert operator to ::System::IFormattable
constexpr operator  ::System::IFormattable() const;

/// @brief Convert operator to ::System::IComparable_1<uint32_t>
constexpr operator  ::System::IComparable_1<uint32_t>() const;

/// @brief Convert operator to ::System::IEquatable_1<uint32_t>
constexpr operator  ::System::IEquatable_1<uint32_t>() const;

/// @brief Convert operator to ::System::ISpanFormattable
constexpr operator  ::System::ISpanFormattable() const;

// Ctor Parameters [CppParam { name: "m_value", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr UInt32(uint32_t m_value) noexcept;


                    constexpr UInt32(UInt32 const&) = default;
                    constexpr UInt32(UInt32&&) = default;
                    constexpr UInt32& operator=(UInt32 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UInt32& operator=(UInt32&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UInt32(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_m_value, put=__set_m_value))  m_value;

constexpr void __set_m_value(uint32_t value) ;

constexpr uint32_t __get_m_value() const;

/// @brief Field MaxValue offset 0
static constexpr uint32_t  MaxValue{4294967295u};

/// @brief Field MinValue offset 0
static constexpr uint32_t  MinValue{0u};


// Methods

/// @brief Method CompareTo addr 0x245df48 size 0xd0 virtual true final true
 int32_t CompareTo(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method CompareTo addr 0x245e018 size 0x1c virtual true final true
 int32_t CompareTo(uint32_t value) ;

/// @brief Method Equals addr 0x245e034 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x245e0ac size 0x10 virtual true final true
 bool Equals(uint32_t obj) ;

/// @brief Method GetHashCode addr 0x245e0bc size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x245e0c4 size 0x98 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x245e15c size 0x9c virtual true final true
 ::StringW ToString(::System::IFormatProvider provider) ;

/// @brief Method ToString addr 0x245e1f8 size 0xb8 virtual true final true
 ::StringW ToString(::StringW format, ::System::IFormatProvider provider) ;

/// @brief Method TryFormat addr 0x245e2b0 size 0xa4 virtual true final true
 bool TryFormat(::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider provider) ;

/// @brief Method Parse addr 0x245e354 size 0xb4 virtual false final false
static uint32_t Parse(::StringW s) ;

/// @brief Method Parse addr 0x245e408 size 0xc4 virtual false final false
static uint32_t Parse(::StringW s, ::System::IFormatProvider provider) ;

/// @brief Method Parse addr 0x245e4cc size 0xd4 virtual false final false
static uint32_t Parse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider provider) ;

/// @brief Method TryParse addr 0x245e5a0 size 0xf8 virtual false final false
static bool TryParse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider provider, ByRef<uint32_t> result) ;

/// @brief Method GetTypeCode addr 0x245e698 size 0x8 virtual true final true
 ::System::TypeCode GetTypeCode() ;

/// @brief Method System.IConvertible.ToBoolean addr 0x245e6a0 size 0x5c virtual true final true
 bool System_IConvertible_ToBoolean(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToChar addr 0x245e6fc size 0x5c virtual true final true
 char16_t System_IConvertible_ToChar(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSByte addr 0x245e758 size 0x5c virtual true final true
 int8_t System_IConvertible_ToSByte(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToByte addr 0x245e7b4 size 0x5c virtual true final true
 uint8_t System_IConvertible_ToByte(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt16 addr 0x245e810 size 0x5c virtual true final true
 int16_t System_IConvertible_ToInt16(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt16 addr 0x245e86c size 0x5c virtual true final true
 uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt32 addr 0x245e8c8 size 0x5c virtual true final true
 int32_t System_IConvertible_ToInt32(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt32 addr 0x245e924 size 0x8 virtual true final true
 uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt64 addr 0x245e92c size 0x5c virtual true final true
 int64_t System_IConvertible_ToInt64(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt64 addr 0x245e988 size 0x5c virtual true final true
 uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSingle addr 0x245e9e4 size 0x5c virtual true final true
 float_t System_IConvertible_ToSingle(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDouble addr 0x245ea40 size 0x5c virtual true final true
 double_t System_IConvertible_ToDouble(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDecimal addr 0x245ea9c size 0x5c virtual true final true
 ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDateTime addr 0x245eaf8 size 0x8c virtual true final true
 ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToType addr 0x245eb84 size 0xac virtual true final true
 ::bs_hook::Il2CppWrapperType System_IConvertible_ToType(::System::Type type, ::System::IFormatProvider provider) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::UInt32, "System", "UInt32");
