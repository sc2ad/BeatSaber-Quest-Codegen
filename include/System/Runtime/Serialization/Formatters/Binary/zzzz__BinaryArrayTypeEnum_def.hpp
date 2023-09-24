#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryArrayTypeEnum;
}
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryArrayTypeEnum
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3241))
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum
struct CORDL_TYPE BinaryArrayTypeEnum : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BinaryArrayTypeEnum(int32_t value__) noexcept;


                    constexpr BinaryArrayTypeEnum(BinaryArrayTypeEnum const&) = default;
                    constexpr BinaryArrayTypeEnum(BinaryArrayTypeEnum&&) = default;
                    constexpr BinaryArrayTypeEnum& operator=(BinaryArrayTypeEnum const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BinaryArrayTypeEnum& operator=(BinaryArrayTypeEnum&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BinaryArrayTypeEnum(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __BinaryArrayTypeEnum_Unwrapped : int32_t {
__Single = 0,
__Jagged = 1,
__Rectangular = 2,
__SingleOffset = 3,
__JaggedOffset = 4,
__RectangularOffset = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BinaryArrayTypeEnum_Unwrapped () const noexcept {
return std::bit_cast<__BinaryArrayTypeEnum_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Single offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum const Single;

/// @brief Field Jagged offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum const Jagged;

/// @brief Field Rectangular offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum const Rectangular;

/// @brief Field SingleOffset offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum const SingleOffset;

/// @brief Field JaggedOffset offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum const JaggedOffset;

/// @brief Field RectangularOffset offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum const RectangularOffset;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum, "System.Runtime.Serialization.Formatters.Binary", "BinaryArrayTypeEnum");
