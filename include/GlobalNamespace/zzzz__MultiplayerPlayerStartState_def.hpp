#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerPlayerStartState;
}
// Type: ::MultiplayerPlayerStartState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5328))
// CS Name: MultiplayerPlayerStartState
struct CORDL_TYPE MultiplayerPlayerStartState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MultiplayerPlayerStartState(int32_t value__) noexcept;


                    constexpr MultiplayerPlayerStartState(MultiplayerPlayerStartState const&) = default;
                    constexpr MultiplayerPlayerStartState(MultiplayerPlayerStartState&&) = default;
                    constexpr MultiplayerPlayerStartState& operator=(MultiplayerPlayerStartState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MultiplayerPlayerStartState& operator=(MultiplayerPlayerStartState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MultiplayerPlayerStartState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MultiplayerPlayerStartState_Unwrapped : int32_t {
__InSync = 0,
__Late = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MultiplayerPlayerStartState_Unwrapped () const noexcept {
return std::bit_cast<__MultiplayerPlayerStartState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field InSync offset 0
static GlobalNamespace::MultiplayerPlayerStartState const InSync;

/// @brief Field Late offset 0
static GlobalNamespace::MultiplayerPlayerStartState const Late;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerPlayerStartState, "", "MultiplayerPlayerStartState");
