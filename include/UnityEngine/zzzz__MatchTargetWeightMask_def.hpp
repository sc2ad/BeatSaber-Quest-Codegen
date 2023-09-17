#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace {
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct MatchTargetWeightMask;
}
// Type: UnityEngine::MatchTargetWeightMask
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15052))
// CS Name: UnityEngine.MatchTargetWeightMask
struct CORDL_TYPE MatchTargetWeightMask : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_PositionXYZWeight", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_RotationWeight", ty: "float_t", modifiers: "", def_value: None }]
constexpr MatchTargetWeightMask(::UnityEngine::Vector3 m_PositionXYZWeight, float_t m_RotationWeight) noexcept;


                    constexpr MatchTargetWeightMask(MatchTargetWeightMask const&) = default;
                    constexpr MatchTargetWeightMask(MatchTargetWeightMask&&) = default;
                    constexpr MatchTargetWeightMask& operator=(MatchTargetWeightMask const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MatchTargetWeightMask& operator=(MatchTargetWeightMask&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MatchTargetWeightMask(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Vector3 __declspec(property(get=__get_m_PositionXYZWeight, put=__set_m_PositionXYZWeight))  m_PositionXYZWeight;

constexpr void __set_m_PositionXYZWeight(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_m_PositionXYZWeight() const;

 float_t __declspec(property(get=__get_m_RotationWeight, put=__set_m_RotationWeight))  m_RotationWeight;

constexpr void __set_m_RotationWeight(float_t value) ;

constexpr float_t __get_m_RotationWeight() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MatchTargetWeightMask, "UnityEngine", "MatchTargetWeightMask");
