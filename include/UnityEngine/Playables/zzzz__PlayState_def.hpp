#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Playables {
struct PlayState;
}
// Type: UnityEngine.Playables::PlayState
namespace UnityEngine::Playables {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10375))
// CS Name: UnityEngine.Playables.PlayState
struct CORDL_TYPE PlayState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlayState(int32_t value__) noexcept;


                    constexpr PlayState(PlayState const&) = default;
                    constexpr PlayState(PlayState&&) = default;
                    constexpr PlayState& operator=(PlayState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PlayState& operator=(PlayState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PlayState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PlayState_Unwrapped : int32_t {
__Paused = 0,
__Playing = 1,
__Delayed = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayState_Unwrapped () const noexcept {
return std::bit_cast<__PlayState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Paused offset 0
static UnityEngine::Playables::PlayState const Paused;

/// @brief Field Playing offset 0
static UnityEngine::Playables::PlayState const Playing;

/// @brief Field Delayed offset 0
static UnityEngine::Playables::PlayState const Delayed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayState, "UnityEngine.Playables", "PlayState");
