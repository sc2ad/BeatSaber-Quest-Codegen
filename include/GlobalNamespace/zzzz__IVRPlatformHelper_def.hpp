#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace System {
class Action;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
struct VRPlatformSDK;
}
// Forward declare root types
namespace GlobalNamespace {
class IVRPlatformHelper;
}
// Type: ::IVRPlatformHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13918))
// CS Name: IVRPlatformHelper
class CORDL_TYPE IVRPlatformHelper : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IVRPlatformHelper() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IVRPlatformHelper(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_hasInputFocus))  hasInputFocus;

 bool __declspec(property(get=get_hasVrFocus))  hasVrFocus;

 bool __declspec(property(get=get_isAlwaysWireless))  isAlwaysWireless;

 GlobalNamespace::VRPlatformSDK __declspec(property(get=get_vrPlatformSDK))  vrPlatformSDK;


// Methods

/// @brief Method add_inputFocusWasCapturedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_inputFocusWasCapturedEvent(System::Action value) ;

/// @brief Method remove_inputFocusWasCapturedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_inputFocusWasCapturedEvent(System::Action value) ;

/// @brief Method add_inputFocusWasReleasedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_inputFocusWasReleasedEvent(System::Action value) ;

/// @brief Method remove_inputFocusWasReleasedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_inputFocusWasReleasedEvent(System::Action value) ;

/// @brief Method add_vrFocusWasCapturedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_vrFocusWasCapturedEvent(System::Action value) ;

/// @brief Method remove_vrFocusWasCapturedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_vrFocusWasCapturedEvent(System::Action value) ;

/// @brief Method add_vrFocusWasReleasedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_vrFocusWasReleasedEvent(System::Action value) ;

/// @brief Method remove_vrFocusWasReleasedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_vrFocusWasReleasedEvent(System::Action value) ;

/// @brief Method add_hmdUnmountedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_hmdUnmountedEvent(System::Action value) ;

/// @brief Method remove_hmdUnmountedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_hmdUnmountedEvent(System::Action value) ;

/// @brief Method add_hmdMountedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_hmdMountedEvent(System::Action value) ;

/// @brief Method remove_hmdMountedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_hmdMountedEvent(System::Action value) ;

/// @brief Method add_controllersDidChangeReferenceEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_controllersDidChangeReferenceEvent(System::Action value) ;

/// @brief Method remove_controllersDidChangeReferenceEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_controllersDidChangeReferenceEvent(System::Action value) ;

/// @brief Method get_hasInputFocus addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_hasInputFocus() ;

/// @brief Method get_hasVrFocus addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_hasVrFocus() ;

/// @brief Method get_isAlwaysWireless addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isAlwaysWireless() ;

/// @brief Method get_vrPlatformSDK addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::VRPlatformSDK get_vrPlatformSDK() ;

/// @brief Method TriggerHapticPulse addr 0x0 size 0xffffffffffffffff virtual true final false
 void TriggerHapticPulse(UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency) ;

/// @brief Method StopHaptics addr 0x0 size 0xffffffffffffffff virtual true final false
 void StopHaptics(UnityEngine::XR::XRNode node) ;

/// @brief Method GetPoseOffsetForNode addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Pose GetPoseOffsetForNode(UnityEngine::XR::XRNode node) ;

/// @brief Method GetNodePose addr 0x0 size 0xffffffffffffffff virtual true final false
 bool GetNodePose(UnityEngine::XR::XRNode nodeType, int32_t idx, ByRef<UnityEngine::Vector3> pos, ByRef<UnityEngine::Quaternion> rot) ;

/// @brief Method GetAnyJoystickMaxAxis addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Vector2 GetAnyJoystickMaxAxis() ;

/// @brief Method GetTriggerValue addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t GetTriggerValue(UnityEngine::XR::XRNode node) ;

/// @brief Method GetThumbstickValue addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Vector2 GetThumbstickValue(UnityEngine::XR::XRNode node) ;

/// @brief Method GetMenuButton addr 0x0 size 0xffffffffffffffff virtual true final false
 bool GetMenuButton() ;

/// @brief Method GetMenuButtonDown addr 0x0 size 0xffffffffffffffff virtual true final false
 bool GetMenuButtonDown() ;

/// @brief Method RefreshControllersReference addr 0x0 size 0xffffffffffffffff virtual true final false
 void RefreshControllersReference() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IVRPlatformHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IVRPlatformHelper, "", "IVRPlatformHelper");
