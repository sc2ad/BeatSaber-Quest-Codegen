#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct ParticleSystemGradientMode;
}
// Type: UnityEngine::ParticleSystemGradientMode
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15777))
// CS Name: UnityEngine.ParticleSystemGradientMode
struct CORDL_TYPE ParticleSystemGradientMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ParticleSystemGradientMode(int32_t value__) noexcept;


                    constexpr ParticleSystemGradientMode(ParticleSystemGradientMode const&) = default;
                    constexpr ParticleSystemGradientMode(ParticleSystemGradientMode&&) = default;
                    constexpr ParticleSystemGradientMode& operator=(ParticleSystemGradientMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ParticleSystemGradientMode& operator=(ParticleSystemGradientMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ParticleSystemGradientMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ParticleSystemGradientMode_Unwrapped : int32_t {
__Color = 0,
__Gradient = 1,
__TwoColors = 2,
__TwoGradients = 3,
__RandomColor = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ParticleSystemGradientMode_Unwrapped () const noexcept {
return std::bit_cast<__ParticleSystemGradientMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Color offset 0
static UnityEngine::ParticleSystemGradientMode const Color;

/// @brief Field Gradient offset 0
static UnityEngine::ParticleSystemGradientMode const Gradient;

/// @brief Field TwoColors offset 0
static UnityEngine::ParticleSystemGradientMode const TwoColors;

/// @brief Field TwoGradients offset 0
static UnityEngine::ParticleSystemGradientMode const TwoGradients;

/// @brief Field RandomColor offset 0
static UnityEngine::ParticleSystemGradientMode const RandomColor;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystemGradientMode, "UnityEngine", "ParticleSystemGradientMode");
