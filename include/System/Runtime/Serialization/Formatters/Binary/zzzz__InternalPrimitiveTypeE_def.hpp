#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalPrimitiveTypeE;
}
// Type: System.Runtime.Serialization.Formatters.Binary::InternalPrimitiveTypeE
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3249))
// CS Name: System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE
struct CORDL_TYPE InternalPrimitiveTypeE : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InternalPrimitiveTypeE(int32_t value__) noexcept;


                    constexpr InternalPrimitiveTypeE(InternalPrimitiveTypeE const&) = default;
                    constexpr InternalPrimitiveTypeE(InternalPrimitiveTypeE&&) = default;
                    constexpr InternalPrimitiveTypeE& operator=(InternalPrimitiveTypeE const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InternalPrimitiveTypeE& operator=(InternalPrimitiveTypeE&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InternalPrimitiveTypeE(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __InternalPrimitiveTypeE_Unwrapped : int32_t {
__Invalid = 0,
__Boolean = 1,
__Byte = 2,
__Char = 3,
__Currency = 4,
__Decimal = 5,
__Double = 6,
__Int16 = 7,
__Int32 = 8,
__Int64 = 9,
__SByte = 10,
__Single = 11,
__TimeSpan = 12,
__DateTime = 13,
__UInt16 = 14,
__UInt32 = 15,
__UInt64 = 16,
__Null = 17,
__String = 18,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InternalPrimitiveTypeE_Unwrapped () const noexcept {
return std::bit_cast<__InternalPrimitiveTypeE_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Invalid offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Invalid;

/// @brief Field Boolean offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Boolean;

/// @brief Field Byte offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Byte;

/// @brief Field Char offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Char;

/// @brief Field Currency offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Currency;

/// @brief Field Decimal offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Decimal;

/// @brief Field Double offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Double;

/// @brief Field Int16 offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Int16;

/// @brief Field Int32 offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Int32;

/// @brief Field Int64 offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Int64;

/// @brief Field SByte offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const SByte;

/// @brief Field Single offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Single;

/// @brief Field TimeSpan offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const TimeSpan;

/// @brief Field DateTime offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const DateTime;

/// @brief Field UInt16 offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const UInt16;

/// @brief Field UInt32 offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const UInt32;

/// @brief Field UInt64 offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const UInt64;

/// @brief Field Null offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Null;

/// @brief Field String offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const String;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, "System.Runtime.Serialization.Formatters.Binary", "InternalPrimitiveTypeE");
