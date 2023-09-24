#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System {
struct ConsoleColor;
}
// Type: System::ConsoleColor
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2517))
// CS Name: System.ConsoleColor
struct CORDL_TYPE ConsoleColor : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConsoleColor(int32_t value__) noexcept;


                    constexpr ConsoleColor(ConsoleColor const&) = default;
                    constexpr ConsoleColor(ConsoleColor&&) = default;
                    constexpr ConsoleColor& operator=(ConsoleColor const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ConsoleColor& operator=(ConsoleColor&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ConsoleColor(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ConsoleColor_Unwrapped : int32_t {
__Black = 0,
__DarkBlue = 1,
__DarkGreen = 2,
__DarkCyan = 3,
__DarkRed = 4,
__DarkMagenta = 5,
__DarkYellow = 6,
__Gray = 7,
__DarkGray = 8,
__Blue = 9,
__Green = 10,
__Cyan = 11,
__Red = 12,
__Magenta = 13,
__Yellow = 14,
__White = 15,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConsoleColor_Unwrapped () const noexcept {
return std::bit_cast<__ConsoleColor_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Black offset 0
static System::ConsoleColor const Black;

/// @brief Field DarkBlue offset 0
static System::ConsoleColor const DarkBlue;

/// @brief Field DarkGreen offset 0
static System::ConsoleColor const DarkGreen;

/// @brief Field DarkCyan offset 0
static System::ConsoleColor const DarkCyan;

/// @brief Field DarkRed offset 0
static System::ConsoleColor const DarkRed;

/// @brief Field DarkMagenta offset 0
static System::ConsoleColor const DarkMagenta;

/// @brief Field DarkYellow offset 0
static System::ConsoleColor const DarkYellow;

/// @brief Field Gray offset 0
static System::ConsoleColor const Gray;

/// @brief Field DarkGray offset 0
static System::ConsoleColor const DarkGray;

/// @brief Field Blue offset 0
static System::ConsoleColor const Blue;

/// @brief Field Green offset 0
static System::ConsoleColor const Green;

/// @brief Field Cyan offset 0
static System::ConsoleColor const Cyan;

/// @brief Field Red offset 0
static System::ConsoleColor const Red;

/// @brief Field Magenta offset 0
static System::ConsoleColor const Magenta;

/// @brief Field Yellow offset 0
static System::ConsoleColor const Yellow;

/// @brief Field White offset 0
static System::ConsoleColor const White;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::ConsoleColor, "System", "ConsoleColor");
