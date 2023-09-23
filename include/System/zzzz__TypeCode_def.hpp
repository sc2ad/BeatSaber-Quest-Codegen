#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System {
struct TypeCode;
}
// Type: System::TypeCode
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2495))
// CS Name: System.TypeCode
struct CORDL_TYPE TypeCode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TypeCode(int32_t value__) noexcept;


                    constexpr TypeCode(TypeCode const&) = default;
                    constexpr TypeCode(TypeCode&&) = default;
                    constexpr TypeCode& operator=(TypeCode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TypeCode& operator=(TypeCode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TypeCode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TypeCode_Unwrapped : int32_t {
__Empty = 0,
__Object = 1,
__DBNull = 2,
__Boolean = 3,
__Char = 4,
__SByte = 5,
__Byte = 6,
__Int16 = 7,
__UInt16 = 8,
__Int32 = 9,
__UInt32 = 10,
__Int64 = 11,
__UInt64 = 12,
__Single = 13,
__Double = 14,
__Decimal = 15,
__DateTime = 16,
__String = 18,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TypeCode_Unwrapped () const noexcept {
return std::bit_cast<__TypeCode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Empty offset 0
static System::TypeCode const Empty;

/// @brief Field Object offset 0
static System::TypeCode const Object;

/// @brief Field DBNull offset 0
static System::TypeCode const DBNull;

/// @brief Field Boolean offset 0
static System::TypeCode const Boolean;

/// @brief Field Char offset 0
static System::TypeCode const Char;

/// @brief Field SByte offset 0
static System::TypeCode const SByte;

/// @brief Field Byte offset 0
static System::TypeCode const Byte;

/// @brief Field Int16 offset 0
static System::TypeCode const Int16;

/// @brief Field UInt16 offset 0
static System::TypeCode const UInt16;

/// @brief Field Int32 offset 0
static System::TypeCode const Int32;

/// @brief Field UInt32 offset 0
static System::TypeCode const UInt32;

/// @brief Field Int64 offset 0
static System::TypeCode const Int64;

/// @brief Field UInt64 offset 0
static System::TypeCode const UInt64;

/// @brief Field Single offset 0
static System::TypeCode const Single;

/// @brief Field Double offset 0
static System::TypeCode const Double;

/// @brief Field Decimal offset 0
static System::TypeCode const Decimal;

/// @brief Field DateTime offset 0
static System::TypeCode const DateTime;

/// @brief Field String offset 0
static System::TypeCode const String;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::TypeCode, "System", "TypeCode");
