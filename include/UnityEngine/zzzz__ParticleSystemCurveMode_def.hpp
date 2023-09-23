#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct ParticleSystemCurveMode;
}
// Type: UnityEngine::ParticleSystemCurveMode
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15776))
// CS Name: UnityEngine.ParticleSystemCurveMode
struct CORDL_TYPE ParticleSystemCurveMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ParticleSystemCurveMode(int32_t value__) noexcept;


                    constexpr ParticleSystemCurveMode(ParticleSystemCurveMode const&) = default;
                    constexpr ParticleSystemCurveMode(ParticleSystemCurveMode&&) = default;
                    constexpr ParticleSystemCurveMode& operator=(ParticleSystemCurveMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ParticleSystemCurveMode& operator=(ParticleSystemCurveMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ParticleSystemCurveMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ParticleSystemCurveMode_Unwrapped : int32_t {
__Constant = 0,
__Curve = 1,
__TwoCurves = 2,
__TwoConstants = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ParticleSystemCurveMode_Unwrapped () const noexcept {
return std::bit_cast<__ParticleSystemCurveMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Constant offset 0
static UnityEngine::ParticleSystemCurveMode const Constant;

/// @brief Field Curve offset 0
static UnityEngine::ParticleSystemCurveMode const Curve;

/// @brief Field TwoCurves offset 0
static UnityEngine::ParticleSystemCurveMode const TwoCurves;

/// @brief Field TwoConstants offset 0
static UnityEngine::ParticleSystemCurveMode const TwoConstants;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystemCurveMode, "UnityEngine", "ParticleSystemCurveMode");
