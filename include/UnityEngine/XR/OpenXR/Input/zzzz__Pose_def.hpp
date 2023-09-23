#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace UnityEngine::XR {
struct InputTrackingState;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Input {
struct Pose;
}
// Type: UnityEngine.XR.OpenXR.Input::Pose
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14197))
// CS Name: UnityEngine.XR.OpenXR.Input.Pose
struct CORDL_TYPE Pose : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_isTracked_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_trackingState_k__BackingField", ty: "UnityEngine::XR::InputTrackingState", modifiers: "", def_value: None }, CppParam { name: "_position_k__BackingField", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_rotation_k__BackingField", ty: "UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "_velocity_k__BackingField", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_angularVelocity_k__BackingField", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr Pose(bool _isTracked_k__BackingField, UnityEngine::XR::InputTrackingState _trackingState_k__BackingField, UnityEngine::Vector3 _position_k__BackingField, UnityEngine::Quaternion _rotation_k__BackingField, UnityEngine::Vector3 _velocity_k__BackingField, UnityEngine::Vector3 _angularVelocity_k__BackingField) noexcept;


                    constexpr Pose(Pose const&) = default;
                    constexpr Pose(Pose&&) = default;
                    constexpr Pose& operator=(Pose const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Pose& operator=(Pose&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x3c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Pose(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get__isTracked_k__BackingField, put=__set__isTracked_k__BackingField))  _isTracked_k__BackingField;

constexpr void __set__isTracked_k__BackingField(bool value) ;

constexpr bool __get__isTracked_k__BackingField() const;

 UnityEngine::XR::InputTrackingState __declspec(property(get=__get__trackingState_k__BackingField, put=__set__trackingState_k__BackingField))  _trackingState_k__BackingField;

constexpr void __set__trackingState_k__BackingField(UnityEngine::XR::InputTrackingState value) ;

constexpr UnityEngine::XR::InputTrackingState __get__trackingState_k__BackingField() const;

 UnityEngine::Vector3 __declspec(property(get=__get__position_k__BackingField, put=__set__position_k__BackingField))  _position_k__BackingField;

constexpr void __set__position_k__BackingField(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__position_k__BackingField() const;

 UnityEngine::Quaternion __declspec(property(get=__get__rotation_k__BackingField, put=__set__rotation_k__BackingField))  _rotation_k__BackingField;

constexpr void __set__rotation_k__BackingField(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__rotation_k__BackingField() const;

 UnityEngine::Vector3 __declspec(property(get=__get__velocity_k__BackingField, put=__set__velocity_k__BackingField))  _velocity_k__BackingField;

constexpr void __set__velocity_k__BackingField(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__velocity_k__BackingField() const;

 UnityEngine::Vector3 __declspec(property(get=__get__angularVelocity_k__BackingField, put=__set__angularVelocity_k__BackingField))  _angularVelocity_k__BackingField;

constexpr void __set__angularVelocity_k__BackingField(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__angularVelocity_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_isTracked, put=set_isTracked))  isTracked;

 UnityEngine::XR::InputTrackingState __declspec(property(get=get_trackingState, put=set_trackingState))  trackingState;

 UnityEngine::Vector3 __declspec(property(get=get_position, put=set_position))  position;

 UnityEngine::Quaternion __declspec(property(get=get_rotation, put=set_rotation))  rotation;

 UnityEngine::Vector3 __declspec(property(get=get_velocity, put=set_velocity))  velocity;

 UnityEngine::Vector3 __declspec(property(get=get_angularVelocity, put=set_angularVelocity))  angularVelocity;


// Methods

/// @brief Method get_isTracked addr 0x2aefa40 size 0x8 virtual false final false
 bool get_isTracked() ;

/// @brief Method set_isTracked addr 0x2aefa48 size 0xc virtual false final false
 void set_isTracked(bool value) ;

/// @brief Method get_trackingState addr 0x2aefa54 size 0x8 virtual false final false
 UnityEngine::XR::InputTrackingState get_trackingState() ;

/// @brief Method set_trackingState addr 0x2aefa5c size 0x8 virtual false final false
 void set_trackingState(UnityEngine::XR::InputTrackingState value) ;

/// @brief Method get_position addr 0x2aefa64 size 0xc virtual false final false
 UnityEngine::Vector3 get_position() ;

/// @brief Method set_position addr 0x2aefa70 size 0xc virtual false final false
 void set_position(UnityEngine::Vector3 value) ;

/// @brief Method get_rotation addr 0x2aefa7c size 0xc virtual false final false
 UnityEngine::Quaternion get_rotation() ;

/// @brief Method set_rotation addr 0x2aefa88 size 0xc virtual false final false
 void set_rotation(UnityEngine::Quaternion value) ;

/// @brief Method get_velocity addr 0x2aefa94 size 0xc virtual false final false
 UnityEngine::Vector3 get_velocity() ;

/// @brief Method set_velocity addr 0x2aefaa0 size 0xc virtual false final false
 void set_velocity(UnityEngine::Vector3 value) ;

/// @brief Method get_angularVelocity addr 0x2aefaac size 0xc virtual false final false
 UnityEngine::Vector3 get_angularVelocity() ;

/// @brief Method set_angularVelocity addr 0x2aefab8 size 0xc virtual false final false
 void set_angularVelocity(UnityEngine::Vector3 value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Input
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Input::Pose, "UnityEngine.XR.OpenXR.Input", "Pose");
