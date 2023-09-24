#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::XR {
struct InputTrackingState;
}
// Type: UnityEngine.XR::InputTrackingState
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15567))
// CS Name: UnityEngine.XR.InputTrackingState
struct CORDL_TYPE InputTrackingState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr InputTrackingState(uint32_t value__) noexcept;


                    constexpr InputTrackingState(InputTrackingState const&) = default;
                    constexpr InputTrackingState(InputTrackingState&&) = default;
                    constexpr InputTrackingState& operator=(InputTrackingState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputTrackingState& operator=(InputTrackingState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputTrackingState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __InputTrackingState_Unwrapped : uint32_t {
__None = 0u,
__Position = 1u,
__Rotation = 2u,
__Velocity = 4u,
__AngularVelocity = 8u,
__Acceleration = 16u,
__AngularAcceleration = 32u,
__All = 63u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputTrackingState_Unwrapped () const noexcept {
return std::bit_cast<__InputTrackingState_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = uint32_t;


// Fields

 uint32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint32_t value) ;

constexpr uint32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::XR::InputTrackingState const None;

/// @brief Field Position offset 0
static UnityEngine::XR::InputTrackingState const Position;

/// @brief Field Rotation offset 0
static UnityEngine::XR::InputTrackingState const Rotation;

/// @brief Field Velocity offset 0
static UnityEngine::XR::InputTrackingState const Velocity;

/// @brief Field AngularVelocity offset 0
static UnityEngine::XR::InputTrackingState const AngularVelocity;

/// @brief Field Acceleration offset 0
static UnityEngine::XR::InputTrackingState const Acceleration;

/// @brief Field AngularAcceleration offset 0
static UnityEngine::XR::InputTrackingState const AngularAcceleration;

/// @brief Field All offset 0
static UnityEngine::XR::InputTrackingState const All;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::InputTrackingState, "UnityEngine.XR", "InputTrackingState");
