#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Resources {
struct ResourceTypeCode;
}
// Type: System.Resources::ResourceTypeCode
namespace System::Resources {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3420))
// CS Name: System.Resources.ResourceTypeCode
struct CORDL_TYPE ResourceTypeCode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ResourceTypeCode(int32_t value__) noexcept;


                    constexpr ResourceTypeCode(ResourceTypeCode const&) = default;
                    constexpr ResourceTypeCode(ResourceTypeCode&&) = default;
                    constexpr ResourceTypeCode& operator=(ResourceTypeCode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ResourceTypeCode& operator=(ResourceTypeCode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ResourceTypeCode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ResourceTypeCode_Unwrapped : int32_t {
__Null = 0,
__String = 1,
__Boolean = 2,
__Char = 3,
__Byte = 4,
__SByte = 5,
__Int16 = 6,
__UInt16 = 7,
__Int32 = 8,
__UInt32 = 9,
__Int64 = 10,
__UInt64 = 11,
__Single = 12,
__Double = 13,
__Decimal = 14,
__DateTime = 15,
__TimeSpan = 16,
__LastPrimitive = 16,
__ByteArray = 32,
__Stream = 33,
__StartOfUserTypes = 64,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ResourceTypeCode_Unwrapped () const noexcept {
return std::bit_cast<__ResourceTypeCode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Null offset 0
static System::Resources::ResourceTypeCode const Null;

/// @brief Field String offset 0
static System::Resources::ResourceTypeCode const String;

/// @brief Field Boolean offset 0
static System::Resources::ResourceTypeCode const Boolean;

/// @brief Field Char offset 0
static System::Resources::ResourceTypeCode const Char;

/// @brief Field Byte offset 0
static System::Resources::ResourceTypeCode const Byte;

/// @brief Field SByte offset 0
static System::Resources::ResourceTypeCode const SByte;

/// @brief Field Int16 offset 0
static System::Resources::ResourceTypeCode const Int16;

/// @brief Field UInt16 offset 0
static System::Resources::ResourceTypeCode const UInt16;

/// @brief Field Int32 offset 0
static System::Resources::ResourceTypeCode const Int32;

/// @brief Field UInt32 offset 0
static System::Resources::ResourceTypeCode const UInt32;

/// @brief Field Int64 offset 0
static System::Resources::ResourceTypeCode const Int64;

/// @brief Field UInt64 offset 0
static System::Resources::ResourceTypeCode const UInt64;

/// @brief Field Single offset 0
static System::Resources::ResourceTypeCode const Single;

/// @brief Field Double offset 0
static System::Resources::ResourceTypeCode const Double;

/// @brief Field Decimal offset 0
static System::Resources::ResourceTypeCode const Decimal;

/// @brief Field DateTime offset 0
static System::Resources::ResourceTypeCode const DateTime;

/// @brief Field TimeSpan offset 0
static System::Resources::ResourceTypeCode const TimeSpan;

/// @brief Field LastPrimitive offset 0
static System::Resources::ResourceTypeCode const LastPrimitive;

/// @brief Field ByteArray offset 0
static System::Resources::ResourceTypeCode const ByteArray;

/// @brief Field Stream offset 0
static System::Resources::ResourceTypeCode const Stream;

/// @brief Field StartOfUserTypes offset 0
static System::Resources::ResourceTypeCode const StartOfUserTypes;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Resources
DEFINE_IL2CPP_ARG_TYPE(System::Resources::ResourceTypeCode, "System.Resources", "ResourceTypeCode");
