#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct GameplayServerMode;
}
// Type: ::GameplayServerMode
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12710))
// CS Name: GameplayServerMode
struct CORDL_TYPE GameplayServerMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GameplayServerMode(int32_t value__) noexcept;


                    constexpr GameplayServerMode(GameplayServerMode const&) = default;
                    constexpr GameplayServerMode(GameplayServerMode&&) = default;
                    constexpr GameplayServerMode& operator=(GameplayServerMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GameplayServerMode& operator=(GameplayServerMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GameplayServerMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GameplayServerMode_Unwrapped : int32_t {
__Countdown = 0,
__Managed = 1,
__QuickStartOneSong = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GameplayServerMode_Unwrapped () const noexcept {
return std::bit_cast<__GameplayServerMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Countdown offset 0
static GlobalNamespace::GameplayServerMode const Countdown;

/// @brief Field Managed offset 0
static GlobalNamespace::GameplayServerMode const Managed;

/// @brief Field QuickStartOneSong offset 0
static GlobalNamespace::GameplayServerMode const QuickStartOneSong;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayServerMode, "", "GameplayServerMode");
