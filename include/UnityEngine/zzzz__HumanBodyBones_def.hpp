#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct HumanBodyBones;
}
// Type: UnityEngine::HumanBodyBones
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15027))
// CS Name: UnityEngine.HumanBodyBones
struct CORDL_TYPE HumanBodyBones : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HumanBodyBones(int32_t value__) noexcept;


                    constexpr HumanBodyBones(HumanBodyBones const&) = default;
                    constexpr HumanBodyBones(HumanBodyBones&&) = default;
                    constexpr HumanBodyBones& operator=(HumanBodyBones const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HumanBodyBones& operator=(HumanBodyBones&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HumanBodyBones(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HumanBodyBones_Unwrapped : int32_t {
__Hips = 0,
__LeftUpperLeg = 1,
__RightUpperLeg = 2,
__LeftLowerLeg = 3,
__RightLowerLeg = 4,
__LeftFoot = 5,
__RightFoot = 6,
__Spine = 7,
__Chest = 8,
__UpperChest = 54,
__Neck = 9,
__Head = 10,
__LeftShoulder = 11,
__RightShoulder = 12,
__LeftUpperArm = 13,
__RightUpperArm = 14,
__LeftLowerArm = 15,
__RightLowerArm = 16,
__LeftHand = 17,
__RightHand = 18,
__LeftToes = 19,
__RightToes = 20,
__LeftEye = 21,
__RightEye = 22,
__Jaw = 23,
__LeftThumbProximal = 24,
__LeftThumbIntermediate = 25,
__LeftThumbDistal = 26,
__LeftIndexProximal = 27,
__LeftIndexIntermediate = 28,
__LeftIndexDistal = 29,
__LeftMiddleProximal = 30,
__LeftMiddleIntermediate = 31,
__LeftMiddleDistal = 32,
__LeftRingProximal = 33,
__LeftRingIntermediate = 34,
__LeftRingDistal = 35,
__LeftLittleProximal = 36,
__LeftLittleIntermediate = 37,
__LeftLittleDistal = 38,
__RightThumbProximal = 39,
__RightThumbIntermediate = 40,
__RightThumbDistal = 41,
__RightIndexProximal = 42,
__RightIndexIntermediate = 43,
__RightIndexDistal = 44,
__RightMiddleProximal = 45,
__RightMiddleIntermediate = 46,
__RightMiddleDistal = 47,
__RightRingProximal = 48,
__RightRingIntermediate = 49,
__RightRingDistal = 50,
__RightLittleProximal = 51,
__RightLittleIntermediate = 52,
__RightLittleDistal = 53,
__LastBone = 55,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HumanBodyBones_Unwrapped () const noexcept {
return std::bit_cast<__HumanBodyBones_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Hips offset 0
static ::UnityEngine::HumanBodyBones const Hips;

/// @brief Field LeftUpperLeg offset 0
static ::UnityEngine::HumanBodyBones const LeftUpperLeg;

/// @brief Field RightUpperLeg offset 0
static ::UnityEngine::HumanBodyBones const RightUpperLeg;

/// @brief Field LeftLowerLeg offset 0
static ::UnityEngine::HumanBodyBones const LeftLowerLeg;

/// @brief Field RightLowerLeg offset 0
static ::UnityEngine::HumanBodyBones const RightLowerLeg;

/// @brief Field LeftFoot offset 0
static ::UnityEngine::HumanBodyBones const LeftFoot;

/// @brief Field RightFoot offset 0
static ::UnityEngine::HumanBodyBones const RightFoot;

/// @brief Field Spine offset 0
static ::UnityEngine::HumanBodyBones const Spine;

/// @brief Field Chest offset 0
static ::UnityEngine::HumanBodyBones const Chest;

/// @brief Field UpperChest offset 0
static ::UnityEngine::HumanBodyBones const UpperChest;

/// @brief Field Neck offset 0
static ::UnityEngine::HumanBodyBones const Neck;

/// @brief Field Head offset 0
static ::UnityEngine::HumanBodyBones const Head;

/// @brief Field LeftShoulder offset 0
static ::UnityEngine::HumanBodyBones const LeftShoulder;

/// @brief Field RightShoulder offset 0
static ::UnityEngine::HumanBodyBones const RightShoulder;

/// @brief Field LeftUpperArm offset 0
static ::UnityEngine::HumanBodyBones const LeftUpperArm;

/// @brief Field RightUpperArm offset 0
static ::UnityEngine::HumanBodyBones const RightUpperArm;

/// @brief Field LeftLowerArm offset 0
static ::UnityEngine::HumanBodyBones const LeftLowerArm;

/// @brief Field RightLowerArm offset 0
static ::UnityEngine::HumanBodyBones const RightLowerArm;

/// @brief Field LeftHand offset 0
static ::UnityEngine::HumanBodyBones const LeftHand;

/// @brief Field RightHand offset 0
static ::UnityEngine::HumanBodyBones const RightHand;

/// @brief Field LeftToes offset 0
static ::UnityEngine::HumanBodyBones const LeftToes;

/// @brief Field RightToes offset 0
static ::UnityEngine::HumanBodyBones const RightToes;

/// @brief Field LeftEye offset 0
static ::UnityEngine::HumanBodyBones const LeftEye;

/// @brief Field RightEye offset 0
static ::UnityEngine::HumanBodyBones const RightEye;

/// @brief Field Jaw offset 0
static ::UnityEngine::HumanBodyBones const Jaw;

/// @brief Field LeftThumbProximal offset 0
static ::UnityEngine::HumanBodyBones const LeftThumbProximal;

/// @brief Field LeftThumbIntermediate offset 0
static ::UnityEngine::HumanBodyBones const LeftThumbIntermediate;

/// @brief Field LeftThumbDistal offset 0
static ::UnityEngine::HumanBodyBones const LeftThumbDistal;

/// @brief Field LeftIndexProximal offset 0
static ::UnityEngine::HumanBodyBones const LeftIndexProximal;

/// @brief Field LeftIndexIntermediate offset 0
static ::UnityEngine::HumanBodyBones const LeftIndexIntermediate;

/// @brief Field LeftIndexDistal offset 0
static ::UnityEngine::HumanBodyBones const LeftIndexDistal;

/// @brief Field LeftMiddleProximal offset 0
static ::UnityEngine::HumanBodyBones const LeftMiddleProximal;

/// @brief Field LeftMiddleIntermediate offset 0
static ::UnityEngine::HumanBodyBones const LeftMiddleIntermediate;

/// @brief Field LeftMiddleDistal offset 0
static ::UnityEngine::HumanBodyBones const LeftMiddleDistal;

/// @brief Field LeftRingProximal offset 0
static ::UnityEngine::HumanBodyBones const LeftRingProximal;

/// @brief Field LeftRingIntermediate offset 0
static ::UnityEngine::HumanBodyBones const LeftRingIntermediate;

/// @brief Field LeftRingDistal offset 0
static ::UnityEngine::HumanBodyBones const LeftRingDistal;

/// @brief Field LeftLittleProximal offset 0
static ::UnityEngine::HumanBodyBones const LeftLittleProximal;

/// @brief Field LeftLittleIntermediate offset 0
static ::UnityEngine::HumanBodyBones const LeftLittleIntermediate;

/// @brief Field LeftLittleDistal offset 0
static ::UnityEngine::HumanBodyBones const LeftLittleDistal;

/// @brief Field RightThumbProximal offset 0
static ::UnityEngine::HumanBodyBones const RightThumbProximal;

/// @brief Field RightThumbIntermediate offset 0
static ::UnityEngine::HumanBodyBones const RightThumbIntermediate;

/// @brief Field RightThumbDistal offset 0
static ::UnityEngine::HumanBodyBones const RightThumbDistal;

/// @brief Field RightIndexProximal offset 0
static ::UnityEngine::HumanBodyBones const RightIndexProximal;

/// @brief Field RightIndexIntermediate offset 0
static ::UnityEngine::HumanBodyBones const RightIndexIntermediate;

/// @brief Field RightIndexDistal offset 0
static ::UnityEngine::HumanBodyBones const RightIndexDistal;

/// @brief Field RightMiddleProximal offset 0
static ::UnityEngine::HumanBodyBones const RightMiddleProximal;

/// @brief Field RightMiddleIntermediate offset 0
static ::UnityEngine::HumanBodyBones const RightMiddleIntermediate;

/// @brief Field RightMiddleDistal offset 0
static ::UnityEngine::HumanBodyBones const RightMiddleDistal;

/// @brief Field RightRingProximal offset 0
static ::UnityEngine::HumanBodyBones const RightRingProximal;

/// @brief Field RightRingIntermediate offset 0
static ::UnityEngine::HumanBodyBones const RightRingIntermediate;

/// @brief Field RightRingDistal offset 0
static ::UnityEngine::HumanBodyBones const RightRingDistal;

/// @brief Field RightLittleProximal offset 0
static ::UnityEngine::HumanBodyBones const RightLittleProximal;

/// @brief Field RightLittleIntermediate offset 0
static ::UnityEngine::HumanBodyBones const RightLittleIntermediate;

/// @brief Field RightLittleDistal offset 0
static ::UnityEngine::HumanBodyBones const RightLittleDistal;

/// @brief Field LastBone offset 0
static ::UnityEngine::HumanBodyBones const LastBone;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HumanBodyBones, "UnityEngine", "HumanBodyBones");
