#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerGameState;
}
// Type: ::MultiplayerGameState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12821))
// CS Name: MultiplayerGameState
struct CORDL_TYPE MultiplayerGameState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MultiplayerGameState(int32_t value__) noexcept;


                    constexpr MultiplayerGameState(MultiplayerGameState const&) = default;
                    constexpr MultiplayerGameState(MultiplayerGameState&&) = default;
                    constexpr MultiplayerGameState& operator=(MultiplayerGameState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MultiplayerGameState& operator=(MultiplayerGameState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MultiplayerGameState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MultiplayerGameState_Unwrapped : int32_t {
__None = 0,
__Lobby = 1,
__Game = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MultiplayerGameState_Unwrapped () const noexcept {
return std::bit_cast<__MultiplayerGameState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::GlobalNamespace::MultiplayerGameState const None;

/// @brief Field Lobby offset 0
static ::GlobalNamespace::MultiplayerGameState const Lobby;

/// @brief Field Game offset 0
static ::GlobalNamespace::MultiplayerGameState const Game;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerGameState, "", "MultiplayerGameState");
