#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
struct FeatureType;
}
// Type: UnityEngine.InputSystem.XR::FeatureType
namespace UnityEngine::InputSystem::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6416))
// CS Name: UnityEngine.InputSystem.XR.FeatureType
struct CORDL_TYPE FeatureType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FeatureType(int32_t value__) noexcept;


                    constexpr FeatureType(FeatureType const&) = default;
                    constexpr FeatureType(FeatureType&&) = default;
                    constexpr FeatureType& operator=(FeatureType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FeatureType& operator=(FeatureType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FeatureType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FeatureType_Unwrapped : int32_t {
__Custom = 0,
__Binary = 1,
__DiscreteStates = 2,
__Axis1D = 3,
__Axis2D = 4,
__Axis3D = 5,
__Rotation = 6,
__Hand = 7,
__Bone = 8,
__Eyes = 9,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FeatureType_Unwrapped () const noexcept {
return std::bit_cast<__FeatureType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Custom offset 0
static ::UnityEngine::InputSystem::XR::FeatureType const Custom;

/// @brief Field Binary offset 0
static ::UnityEngine::InputSystem::XR::FeatureType const Binary;

/// @brief Field DiscreteStates offset 0
static ::UnityEngine::InputSystem::XR::FeatureType const DiscreteStates;

/// @brief Field Axis1D offset 0
static ::UnityEngine::InputSystem::XR::FeatureType const Axis1D;

/// @brief Field Axis2D offset 0
static ::UnityEngine::InputSystem::XR::FeatureType const Axis2D;

/// @brief Field Axis3D offset 0
static ::UnityEngine::InputSystem::XR::FeatureType const Axis3D;

/// @brief Field Rotation offset 0
static ::UnityEngine::InputSystem::XR::FeatureType const Rotation;

/// @brief Field Hand offset 0
static ::UnityEngine::InputSystem::XR::FeatureType const Hand;

/// @brief Field Bone offset 0
static ::UnityEngine::InputSystem::XR::FeatureType const Bone;

/// @brief Field Eyes offset 0
static ::UnityEngine::InputSystem::XR::FeatureType const Eyes;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::FeatureType, "UnityEngine.InputSystem.XR", "FeatureType");
