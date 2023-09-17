#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerLobbyState;
}
// Type: ::MultiplayerLobbyState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12820))
// CS Name: MultiplayerLobbyState
struct CORDL_TYPE MultiplayerLobbyState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MultiplayerLobbyState(int32_t value__) noexcept;


                    constexpr MultiplayerLobbyState(MultiplayerLobbyState const&) = default;
                    constexpr MultiplayerLobbyState(MultiplayerLobbyState&&) = default;
                    constexpr MultiplayerLobbyState& operator=(MultiplayerLobbyState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MultiplayerLobbyState& operator=(MultiplayerLobbyState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLobbyState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MultiplayerLobbyState_Unwrapped : int32_t {
__None = 0,
__LobbySetup = 1,
__LobbyCountdown = 2,
__GameStarting = 3,
__GameRunning = 4,
__Error = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MultiplayerLobbyState_Unwrapped () const noexcept {
return std::bit_cast<__MultiplayerLobbyState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::GlobalNamespace::MultiplayerLobbyState const None;

/// @brief Field LobbySetup offset 0
static ::GlobalNamespace::MultiplayerLobbyState const LobbySetup;

/// @brief Field LobbyCountdown offset 0
static ::GlobalNamespace::MultiplayerLobbyState const LobbyCountdown;

/// @brief Field GameStarting offset 0
static ::GlobalNamespace::MultiplayerLobbyState const GameStarting;

/// @brief Field GameRunning offset 0
static ::GlobalNamespace::MultiplayerLobbyState const GameRunning;

/// @brief Field Error offset 0
static ::GlobalNamespace::MultiplayerLobbyState const Error;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyState, "", "MultiplayerLobbyState");
