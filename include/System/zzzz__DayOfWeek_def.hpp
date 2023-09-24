#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System {
struct DayOfWeek;
}
// Type: System::DayOfWeek
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2371))
// CS Name: System.DayOfWeek
struct CORDL_TYPE DayOfWeek : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DayOfWeek(int32_t value__) noexcept;


                    constexpr DayOfWeek(DayOfWeek const&) = default;
                    constexpr DayOfWeek(DayOfWeek&&) = default;
                    constexpr DayOfWeek& operator=(DayOfWeek const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DayOfWeek& operator=(DayOfWeek&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DayOfWeek(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __DayOfWeek_Unwrapped : int32_t {
__Sunday = 0,
__Monday = 1,
__Tuesday = 2,
__Wednesday = 3,
__Thursday = 4,
__Friday = 5,
__Saturday = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DayOfWeek_Unwrapped () const noexcept {
return std::bit_cast<__DayOfWeek_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Sunday offset 0
static System::DayOfWeek const Sunday;

/// @brief Field Monday offset 0
static System::DayOfWeek const Monday;

/// @brief Field Tuesday offset 0
static System::DayOfWeek const Tuesday;

/// @brief Field Wednesday offset 0
static System::DayOfWeek const Wednesday;

/// @brief Field Thursday offset 0
static System::DayOfWeek const Thursday;

/// @brief Field Friday offset 0
static System::DayOfWeek const Friday;

/// @brief Field Saturday offset 0
static System::DayOfWeek const Saturday;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::DayOfWeek, "System", "DayOfWeek");
