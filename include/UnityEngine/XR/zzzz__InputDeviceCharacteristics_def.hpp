#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::XR {
struct InputDeviceCharacteristics;
}
// Type: UnityEngine.XR::InputDeviceCharacteristics
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15566))
// CS Name: UnityEngine.XR.InputDeviceCharacteristics
struct CORDL_TYPE InputDeviceCharacteristics : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr InputDeviceCharacteristics(uint32_t value__) noexcept;


                    constexpr InputDeviceCharacteristics(InputDeviceCharacteristics const&) = default;
                    constexpr InputDeviceCharacteristics(InputDeviceCharacteristics&&) = default;
                    constexpr InputDeviceCharacteristics& operator=(InputDeviceCharacteristics const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputDeviceCharacteristics& operator=(InputDeviceCharacteristics&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputDeviceCharacteristics(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __InputDeviceCharacteristics_Unwrapped : uint32_t {
__None = 0u,
__HeadMounted = 1u,
__Camera = 2u,
__HeldInHand = 4u,
__HandTracking = 8u,
__EyeTracking = 16u,
__TrackedDevice = 32u,
__Controller = 64u,
__TrackingReference = 128u,
__Left = 256u,
__Right = 512u,
__Simulated6DOF = 1024u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputDeviceCharacteristics_Unwrapped () const noexcept {
return std::bit_cast<__InputDeviceCharacteristics_Unwrapped>(__instance);
}


// Fields

 uint32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint32_t value) ;

constexpr uint32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::XR::InputDeviceCharacteristics const None;

/// @brief Field HeadMounted offset 0
static UnityEngine::XR::InputDeviceCharacteristics const HeadMounted;

/// @brief Field Camera offset 0
static UnityEngine::XR::InputDeviceCharacteristics const Camera;

/// @brief Field HeldInHand offset 0
static UnityEngine::XR::InputDeviceCharacteristics const HeldInHand;

/// @brief Field HandTracking offset 0
static UnityEngine::XR::InputDeviceCharacteristics const HandTracking;

/// @brief Field EyeTracking offset 0
static UnityEngine::XR::InputDeviceCharacteristics const EyeTracking;

/// @brief Field TrackedDevice offset 0
static UnityEngine::XR::InputDeviceCharacteristics const TrackedDevice;

/// @brief Field Controller offset 0
static UnityEngine::XR::InputDeviceCharacteristics const Controller;

/// @brief Field TrackingReference offset 0
static UnityEngine::XR::InputDeviceCharacteristics const TrackingReference;

/// @brief Field Left offset 0
static UnityEngine::XR::InputDeviceCharacteristics const Left;

/// @brief Field Right offset 0
static UnityEngine::XR::InputDeviceCharacteristics const Right;

/// @brief Field Simulated6DOF offset 0
static UnityEngine::XR::InputDeviceCharacteristics const Simulated6DOF;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::InputDeviceCharacteristics, "UnityEngine.XR", "InputDeviceCharacteristics");
