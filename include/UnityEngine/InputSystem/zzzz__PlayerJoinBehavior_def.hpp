#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::InputSystem {
struct PlayerJoinBehavior;
}
// Type: UnityEngine.InputSystem::PlayerJoinBehavior
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6402))
// CS Name: UnityEngine.InputSystem.PlayerJoinBehavior
struct CORDL_TYPE PlayerJoinBehavior : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlayerJoinBehavior(int32_t value__) noexcept;


                    constexpr PlayerJoinBehavior(PlayerJoinBehavior const&) = default;
                    constexpr PlayerJoinBehavior(PlayerJoinBehavior&&) = default;
                    constexpr PlayerJoinBehavior& operator=(PlayerJoinBehavior const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PlayerJoinBehavior& operator=(PlayerJoinBehavior&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PlayerJoinBehavior(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PlayerJoinBehavior_Unwrapped : int32_t {
__JoinPlayersWhenButtonIsPressed = 0,
__JoinPlayersWhenJoinActionIsTriggered = 1,
__JoinPlayersManually = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayerJoinBehavior_Unwrapped () const noexcept {
return std::bit_cast<__PlayerJoinBehavior_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field JoinPlayersWhenButtonIsPressed offset 0
static UnityEngine::InputSystem::PlayerJoinBehavior const JoinPlayersWhenButtonIsPressed;

/// @brief Field JoinPlayersWhenJoinActionIsTriggered offset 0
static UnityEngine::InputSystem::PlayerJoinBehavior const JoinPlayersWhenJoinActionIsTriggered;

/// @brief Field JoinPlayersManually offset 0
static UnityEngine::InputSystem::PlayerJoinBehavior const JoinPlayersManually;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::PlayerJoinBehavior, "UnityEngine.InputSystem", "PlayerJoinBehavior");
