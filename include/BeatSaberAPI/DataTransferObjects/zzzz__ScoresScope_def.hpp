#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace BeatSaberAPI::DataTransferObjects {
struct ScoresScope;
}
// Type: BeatSaberAPI.DataTransferObjects::ScoresScope
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6178))
// CS Name: BeatSaberAPI.DataTransferObjects.ScoresScope
struct CORDL_TYPE ScoresScope : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ScoresScope(int32_t value__) noexcept;


                    constexpr ScoresScope(ScoresScope const&) = default;
                    constexpr ScoresScope(ScoresScope&&) = default;
                    constexpr ScoresScope& operator=(ScoresScope const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ScoresScope& operator=(ScoresScope&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ScoresScope(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ScoresScope_Unwrapped : int32_t {
__Global = 0,
__AroundPlayer = 1,
__Friends = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScoresScope_Unwrapped () const noexcept {
return std::bit_cast<__ScoresScope_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Global offset 0
static BeatSaberAPI::DataTransferObjects::ScoresScope const Global;

/// @brief Field AroundPlayer offset 0
static BeatSaberAPI::DataTransferObjects::ScoresScope const AroundPlayer;

/// @brief Field Friends offset 0
static BeatSaberAPI::DataTransferObjects::ScoresScope const Friends;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BeatSaberAPI::DataTransferObjects
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::ScoresScope, "BeatSaberAPI.DataTransferObjects", "ScoresScope");
