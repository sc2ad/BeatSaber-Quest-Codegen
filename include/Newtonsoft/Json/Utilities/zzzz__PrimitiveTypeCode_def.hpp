#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
struct PrimitiveTypeCode;
}
// Type: Newtonsoft.Json.Utilities::PrimitiveTypeCode
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11812))
// CS Name: Newtonsoft.Json.Utilities.PrimitiveTypeCode
struct CORDL_TYPE PrimitiveTypeCode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PrimitiveTypeCode(int32_t value__) noexcept;


                    constexpr PrimitiveTypeCode(PrimitiveTypeCode const&) = default;
                    constexpr PrimitiveTypeCode(PrimitiveTypeCode&&) = default;
                    constexpr PrimitiveTypeCode& operator=(PrimitiveTypeCode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PrimitiveTypeCode& operator=(PrimitiveTypeCode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PrimitiveTypeCode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PrimitiveTypeCode_Unwrapped : int32_t {
__Empty = 0,
__Object = 1,
__Char = 2,
__CharNullable = 3,
__Boolean = 4,
__BooleanNullable = 5,
__SByte = 6,
__SByteNullable = 7,
__Int16 = 8,
__Int16Nullable = 9,
__UInt16 = 10,
__UInt16Nullable = 11,
__Int32 = 12,
__Int32Nullable = 13,
__Byte = 14,
__ByteNullable = 15,
__UInt32 = 16,
__UInt32Nullable = 17,
__Int64 = 18,
__Int64Nullable = 19,
__UInt64 = 20,
__UInt64Nullable = 21,
__Single = 22,
__SingleNullable = 23,
__Double = 24,
__DoubleNullable = 25,
__DateTime = 26,
__DateTimeNullable = 27,
__DateTimeOffset = 28,
__DateTimeOffsetNullable = 29,
__Decimal = 30,
__DecimalNullable = 31,
__Guid = 32,
__GuidNullable = 33,
__TimeSpan = 34,
__TimeSpanNullable = 35,
__BigInteger = 36,
__BigIntegerNullable = 37,
__Uri = 38,
__String = 39,
__Bytes = 40,
__DBNull = 41,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PrimitiveTypeCode_Unwrapped () const noexcept {
return std::bit_cast<__PrimitiveTypeCode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Empty offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const Empty;

/// @brief Field Object offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const Object;

/// @brief Field Char offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const Char;

/// @brief Field CharNullable offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const CharNullable;

/// @brief Field Boolean offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const Boolean;

/// @brief Field BooleanNullable offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const BooleanNullable;

/// @brief Field SByte offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const SByte;

/// @brief Field SByteNullable offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const SByteNullable;

/// @brief Field Int16 offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const Int16;

/// @brief Field Int16Nullable offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const Int16Nullable;

/// @brief Field UInt16 offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const UInt16;

/// @brief Field UInt16Nullable offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const UInt16Nullable;

/// @brief Field Int32 offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const Int32;

/// @brief Field Int32Nullable offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const Int32Nullable;

/// @brief Field Byte offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const Byte;

/// @brief Field ByteNullable offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const ByteNullable;

/// @brief Field UInt32 offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const UInt32;

/// @brief Field UInt32Nullable offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const UInt32Nullable;

/// @brief Field Int64 offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const Int64;

/// @brief Field Int64Nullable offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const Int64Nullable;

/// @brief Field UInt64 offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const UInt64;

/// @brief Field UInt64Nullable offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const UInt64Nullable;

/// @brief Field Single offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const Single;

/// @brief Field SingleNullable offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const SingleNullable;

/// @brief Field Double offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const Double;

/// @brief Field DoubleNullable offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const DoubleNullable;

/// @brief Field DateTime offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const DateTime;

/// @brief Field DateTimeNullable offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const DateTimeNullable;

/// @brief Field DateTimeOffset offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const DateTimeOffset;

/// @brief Field DateTimeOffsetNullable offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const DateTimeOffsetNullable;

/// @brief Field Decimal offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const Decimal;

/// @brief Field DecimalNullable offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const DecimalNullable;

/// @brief Field Guid offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const Guid;

/// @brief Field GuidNullable offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const GuidNullable;

/// @brief Field TimeSpan offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const TimeSpan;

/// @brief Field TimeSpanNullable offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const TimeSpanNullable;

/// @brief Field BigInteger offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const BigInteger;

/// @brief Field BigIntegerNullable offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const BigIntegerNullable;

/// @brief Field Uri offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const Uri;

/// @brief Field String offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const String;

/// @brief Field Bytes offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const Bytes;

/// @brief Field DBNull offset 0
static Newtonsoft::Json::Utilities::PrimitiveTypeCode const DBNull;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::PrimitiveTypeCode, "Newtonsoft.Json.Utilities", "PrimitiveTypeCode");
