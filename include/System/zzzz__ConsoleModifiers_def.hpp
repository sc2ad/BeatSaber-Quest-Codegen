#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System {
struct ConsoleModifiers;
}
// Type: System::ConsoleModifiers
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2520))
// CS Name: System.ConsoleModifiers
struct CORDL_TYPE ConsoleModifiers : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConsoleModifiers(int32_t value__) noexcept;


                    constexpr ConsoleModifiers(ConsoleModifiers const&) = default;
                    constexpr ConsoleModifiers(ConsoleModifiers&&) = default;
                    constexpr ConsoleModifiers& operator=(ConsoleModifiers const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ConsoleModifiers& operator=(ConsoleModifiers&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ConsoleModifiers(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ConsoleModifiers_Unwrapped : int32_t {
__Alt = 1,
__Shift = 2,
__Control = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConsoleModifiers_Unwrapped () const noexcept {
return std::bit_cast<__ConsoleModifiers_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Alt offset 0
static System::ConsoleModifiers const Alt;

/// @brief Field Shift offset 0
static System::ConsoleModifiers const Shift;

/// @brief Field Control offset 0
static System::ConsoleModifiers const Control;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::ConsoleModifiers, "System", "ConsoleModifiers");
