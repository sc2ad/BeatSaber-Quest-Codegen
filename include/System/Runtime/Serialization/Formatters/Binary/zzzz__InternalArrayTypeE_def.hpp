#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalArrayTypeE;
}
// Type: System.Runtime.Serialization.Formatters.Binary::InternalArrayTypeE
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3246))
// CS Name: System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE
struct CORDL_TYPE InternalArrayTypeE : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InternalArrayTypeE(int32_t value__) noexcept;


                    constexpr InternalArrayTypeE(InternalArrayTypeE const&) = default;
                    constexpr InternalArrayTypeE(InternalArrayTypeE&&) = default;
                    constexpr InternalArrayTypeE& operator=(InternalArrayTypeE const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InternalArrayTypeE& operator=(InternalArrayTypeE&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InternalArrayTypeE(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __InternalArrayTypeE_Unwrapped : int32_t {
__Empty = 0,
__Single = 1,
__Jagged = 2,
__Rectangular = 3,
__Base64 = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InternalArrayTypeE_Unwrapped () const noexcept {
return std::bit_cast<__InternalArrayTypeE_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Empty offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE const Empty;

/// @brief Field Single offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE const Single;

/// @brief Field Jagged offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE const Jagged;

/// @brief Field Rectangular offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE const Rectangular;

/// @brief Field Base64 offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE const Base64;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE, "System.Runtime.Serialization.Formatters.Binary", "InternalArrayTypeE");
