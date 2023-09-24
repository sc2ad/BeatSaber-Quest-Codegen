#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Timeline {
struct ClipCaps;
}
// Type: UnityEngine.Timeline::ClipCaps
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14082))
// CS Name: UnityEngine.Timeline.ClipCaps
struct CORDL_TYPE ClipCaps : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ClipCaps(int32_t value__) noexcept;


                    constexpr ClipCaps(ClipCaps const&) = default;
                    constexpr ClipCaps(ClipCaps&&) = default;
                    constexpr ClipCaps& operator=(ClipCaps const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ClipCaps& operator=(ClipCaps&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ClipCaps(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ClipCaps_Unwrapped : int32_t {
__None = 0,
__Looping = 1,
__Extrapolation = 2,
__ClipIn = 4,
__SpeedMultiplier = 8,
__Blending = 16,
__AutoScale = 40,
__All = -1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ClipCaps_Unwrapped () const noexcept {
return std::bit_cast<__ClipCaps_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::Timeline::ClipCaps const None;

/// @brief Field Looping offset 0
static UnityEngine::Timeline::ClipCaps const Looping;

/// @brief Field Extrapolation offset 0
static UnityEngine::Timeline::ClipCaps const Extrapolation;

/// @brief Field ClipIn offset 0
static UnityEngine::Timeline::ClipCaps const ClipIn;

/// @brief Field SpeedMultiplier offset 0
static UnityEngine::Timeline::ClipCaps const SpeedMultiplier;

/// @brief Field Blending offset 0
static UnityEngine::Timeline::ClipCaps const Blending;

/// @brief Field AutoScale offset 0
static UnityEngine::Timeline::ClipCaps const AutoScale;

/// @brief Field All offset 0
static UnityEngine::Timeline::ClipCaps const All;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ClipCaps, "UnityEngine.Timeline", "ClipCaps");
