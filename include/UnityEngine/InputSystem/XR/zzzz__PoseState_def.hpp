#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::XR {
struct InputTrackingState;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
struct PoseState;
}
// Type: UnityEngine.InputSystem.XR::PoseState
namespace UnityEngine::InputSystem::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6405))
// CS Name: UnityEngine.InputSystem.XR.PoseState
struct CORDL_TYPE PoseState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo
constexpr operator  UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo() const;

// Ctor Parameters [CppParam { name: "isTracked", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "trackingState", ty: "UnityEngine::XR::InputTrackingState", modifiers: "", def_value: None }, CppParam { name: "position", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "velocity", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "angularVelocity", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr PoseState(bool isTracked, UnityEngine::XR::InputTrackingState trackingState, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Vector3 velocity, UnityEngine::Vector3 angularVelocity) noexcept;


                    constexpr PoseState(PoseState const&) = default;
                    constexpr PoseState(PoseState&&) = default;
                    constexpr PoseState& operator=(PoseState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PoseState& operator=(PoseState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x3c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PoseState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field kSizeInBytes offset 0
static constexpr int32_t  kSizeInBytes{60};

 bool __declspec(property(get=__get_isTracked, put=__set_isTracked))  isTracked;

constexpr void __set_isTracked(bool value) ;

constexpr bool __get_isTracked() const;

 UnityEngine::XR::InputTrackingState __declspec(property(get=__get_trackingState, put=__set_trackingState))  trackingState;

constexpr void __set_trackingState(UnityEngine::XR::InputTrackingState value) ;

constexpr UnityEngine::XR::InputTrackingState __get_trackingState() const;

 UnityEngine::Vector3 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_position() const;

 UnityEngine::Quaternion __declspec(property(get=__get_rotation, put=__set_rotation))  rotation;

constexpr void __set_rotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_rotation() const;

 UnityEngine::Vector3 __declspec(property(get=__get_velocity, put=__set_velocity))  velocity;

constexpr void __set_velocity(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_velocity() const;

 UnityEngine::Vector3 __declspec(property(get=__get_angularVelocity, put=__set_angularVelocity))  angularVelocity;

constexpr void __set_angularVelocity(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_angularVelocity() const;


// Properties

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_format))  format;


// Methods

/// @brief Method get_format addr 0x29328f4 size 0x30 virtual true final true
 UnityEngine::InputSystem::Utilities::FourCC get_format() ;

/// @brief Method .ctor addr 0x2932924 size 0x40 virtual false final false
 void _ctor(bool isTracked, UnityEngine::XR::InputTrackingState trackingState, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Vector3 velocity, UnityEngine::Vector3 angularVelocity) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::XR::PoseState, "UnityEngine.InputSystem.XR", "PoseState");
