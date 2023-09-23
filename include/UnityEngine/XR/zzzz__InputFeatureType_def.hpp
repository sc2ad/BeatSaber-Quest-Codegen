#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::XR {
struct InputFeatureType;
}
// Type: UnityEngine.XR::InputFeatureType
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15564))
// CS Name: UnityEngine.XR.InputFeatureType
struct CORDL_TYPE InputFeatureType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr InputFeatureType(uint32_t value__) noexcept;


                    constexpr InputFeatureType(InputFeatureType const&) = default;
                    constexpr InputFeatureType(InputFeatureType&&) = default;
                    constexpr InputFeatureType& operator=(InputFeatureType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputFeatureType& operator=(InputFeatureType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputFeatureType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __InputFeatureType_Unwrapped : uint32_t {
__Custom = 0u,
__Binary = 1u,
__DiscreteStates = 2u,
__Axis1D = 3u,
__Axis2D = 4u,
__Axis3D = 5u,
__Rotation = 6u,
__Hand = 7u,
__Bone = 8u,
__Eyes = 9u,
__kUnityXRInputFeatureTypeInvalid = 4294967295u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputFeatureType_Unwrapped () const noexcept {
return std::bit_cast<__InputFeatureType_Unwrapped>(__instance);
}


// Fields

 uint32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint32_t value) ;

constexpr uint32_t __get_value__() const;

/// @brief Field Custom offset 0
static UnityEngine::XR::InputFeatureType const Custom;

/// @brief Field Binary offset 0
static UnityEngine::XR::InputFeatureType const Binary;

/// @brief Field DiscreteStates offset 0
static UnityEngine::XR::InputFeatureType const DiscreteStates;

/// @brief Field Axis1D offset 0
static UnityEngine::XR::InputFeatureType const Axis1D;

/// @brief Field Axis2D offset 0
static UnityEngine::XR::InputFeatureType const Axis2D;

/// @brief Field Axis3D offset 0
static UnityEngine::XR::InputFeatureType const Axis3D;

/// @brief Field Rotation offset 0
static UnityEngine::XR::InputFeatureType const Rotation;

/// @brief Field Hand offset 0
static UnityEngine::XR::InputFeatureType const Hand;

/// @brief Field Bone offset 0
static UnityEngine::XR::InputFeatureType const Bone;

/// @brief Field Eyes offset 0
static UnityEngine::XR::InputFeatureType const Eyes;

/// @brief Field kUnityXRInputFeatureTypeInvalid offset 0
static UnityEngine::XR::InputFeatureType const kUnityXRInputFeatureTypeInvalid;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::InputFeatureType, "UnityEngine.XR", "InputFeatureType");
