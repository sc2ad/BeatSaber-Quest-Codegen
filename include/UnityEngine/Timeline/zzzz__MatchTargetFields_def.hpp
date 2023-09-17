#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Timeline {
struct MatchTargetFields;
}
// Type: UnityEngine.Timeline::MatchTargetFields
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14048))
// CS Name: UnityEngine.Timeline.MatchTargetFields
struct CORDL_TYPE MatchTargetFields : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MatchTargetFields(int32_t value__) noexcept;


                    constexpr MatchTargetFields(MatchTargetFields const&) = default;
                    constexpr MatchTargetFields(MatchTargetFields&&) = default;
                    constexpr MatchTargetFields& operator=(MatchTargetFields const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MatchTargetFields& operator=(MatchTargetFields&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MatchTargetFields(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MatchTargetFields_Unwrapped : int32_t {
__PositionX = 1,
__PositionY = 2,
__PositionZ = 4,
__RotationX = 8,
__RotationY = 16,
__RotationZ = 32,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MatchTargetFields_Unwrapped () const noexcept {
return std::bit_cast<__MatchTargetFields_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field PositionX offset 0
static ::UnityEngine::Timeline::MatchTargetFields const PositionX;

/// @brief Field PositionY offset 0
static ::UnityEngine::Timeline::MatchTargetFields const PositionY;

/// @brief Field PositionZ offset 0
static ::UnityEngine::Timeline::MatchTargetFields const PositionZ;

/// @brief Field RotationX offset 0
static ::UnityEngine::Timeline::MatchTargetFields const RotationX;

/// @brief Field RotationY offset 0
static ::UnityEngine::Timeline::MatchTargetFields const RotationY;

/// @brief Field RotationZ offset 0
static ::UnityEngine::Timeline::MatchTargetFields const RotationZ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::MatchTargetFields, "UnityEngine.Timeline", "MatchTargetFields");
