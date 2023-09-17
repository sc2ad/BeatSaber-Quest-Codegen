#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Pose;
}
namespace GlobalNamespace {
struct EulerPose;
}
namespace UnityEngine::InputSystem::XR {
class XRControllerWithRumble;
}
namespace GlobalNamespace {
struct VRPlatformSDK;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace GlobalNamespace {
class UnityXRController;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace GlobalNamespace {
class ____GlobalNamespace__UnityXRController__Configuration;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class PSVR2Helper;
}
// Type: ::PSVR2Helper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13930))
// CS Name: PSVR2Helper
class CORDL_TYPE PSVR2Helper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IVRPlatformHelper
constexpr operator  ::GlobalNamespace::IVRPlatformHelper() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~PSVR2Helper() = default;

// Ctor Parameters [CppParam { name: "", ty: "PSVR2Helper", modifiers: " const&", def_value: None }]
constexpr PSVR2Helper(PSVR2Helper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PSVR2Helper", modifiers: "&&", def_value: None }]
constexpr PSVR2Helper(PSVR2Helper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PSVR2Helper(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PSVR2Helper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PSVR2Helper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PSVR2Helper& operator=(PSVR2Helper&& o) noexcept = default;
  constexpr PSVR2Helper& operator=(PSVR2Helper const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__UnityXRController__Configuration __declspec(property(get=__get__leftController, put=__set__leftController))  _leftController;

constexpr void __set__leftController(::GlobalNamespace::____GlobalNamespace__UnityXRController__Configuration value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__UnityXRController__Configuration __get__leftController() const;

 ::GlobalNamespace::____GlobalNamespace__UnityXRController__Configuration __declspec(property(get=__get__rightController, put=__set__rightController))  _rightController;

constexpr void __set__rightController(::GlobalNamespace::____GlobalNamespace__UnityXRController__Configuration value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__UnityXRController__Configuration __get__rightController() const;

 ::GlobalNamespace::EulerPose __declspec(property(get=__get__defaultEulerPose, put=__set__defaultEulerPose))  _defaultEulerPose;

constexpr void __set__defaultEulerPose(::GlobalNamespace::EulerPose value) ;

constexpr ::GlobalNamespace::EulerPose __get__defaultEulerPose() const;

 ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,::GlobalNamespace::UnityXRController> __declspec(property(get=__get__controllers, put=__set__controllers))  _controllers;

constexpr void __set__controllers(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,::GlobalNamespace::UnityXRController> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,::GlobalNamespace::UnityXRController> __get__controllers() const;

 ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,::UnityEngine::InputSystem::XR::XRControllerWithRumble> __declspec(property(get=__get__controllersWithRumble, put=__set__controllersWithRumble))  _controllersWithRumble;

constexpr void __set__controllersWithRumble(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,::UnityEngine::InputSystem::XR::XRControllerWithRumble> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,::UnityEngine::InputSystem::XR::XRControllerWithRumble> __get__controllersWithRumble() const;

/// @brief Field kRightControllerName offset 0
static constexpr ::ConstString  kRightControllerName{u"PSVR2ControllerRight"};

/// @brief Field kLeftControllerName offset 0
static constexpr ::ConstString  kLeftControllerName{u"PSVR2ControllerLeft"};

 ::System::Action __declspec(property(get=__get_controllersDidChangeReferenceEvent, put=__set_controllersDidChangeReferenceEvent))  controllersDidChangeReferenceEvent;

constexpr void __set_controllersDidChangeReferenceEvent(::System::Action value) ;

constexpr ::System::Action __get_controllersDidChangeReferenceEvent() const;

 bool __declspec(property(get=__get__hasVrFocus, put=__set__hasVrFocus))  _hasVrFocus;

constexpr void __set__hasVrFocus(bool value) ;

constexpr bool __get__hasVrFocus() const;

 ::System::Action __declspec(property(get=__get_inputFocusWasCapturedEvent, put=__set_inputFocusWasCapturedEvent))  inputFocusWasCapturedEvent;

constexpr void __set_inputFocusWasCapturedEvent(::System::Action value) ;

constexpr ::System::Action __get_inputFocusWasCapturedEvent() const;

 ::System::Action __declspec(property(get=__get_inputFocusWasReleasedEvent, put=__set_inputFocusWasReleasedEvent))  inputFocusWasReleasedEvent;

constexpr void __set_inputFocusWasReleasedEvent(::System::Action value) ;

constexpr ::System::Action __get_inputFocusWasReleasedEvent() const;

 ::System::Action __declspec(property(get=__get_vrFocusWasCapturedEvent, put=__set_vrFocusWasCapturedEvent))  vrFocusWasCapturedEvent;

constexpr void __set_vrFocusWasCapturedEvent(::System::Action value) ;

constexpr ::System::Action __get_vrFocusWasCapturedEvent() const;

 ::System::Action __declspec(property(get=__get_vrFocusWasReleasedEvent, put=__set_vrFocusWasReleasedEvent))  vrFocusWasReleasedEvent;

constexpr void __set_vrFocusWasReleasedEvent(::System::Action value) ;

constexpr ::System::Action __get_vrFocusWasReleasedEvent() const;

 ::System::Action __declspec(property(get=__get_hmdUnmountedEvent, put=__set_hmdUnmountedEvent))  hmdUnmountedEvent;

constexpr void __set_hmdUnmountedEvent(::System::Action value) ;

constexpr ::System::Action __get_hmdUnmountedEvent() const;

 ::System::Action __declspec(property(get=__get_hmdMountedEvent, put=__set_hmdMountedEvent))  hmdMountedEvent;

constexpr void __set_hmdMountedEvent(::System::Action value) ;

constexpr ::System::Action __get_hmdMountedEvent() const;

/// @brief Field kRumbleMinimalDuration offset 0
static constexpr float_t  kRumbleMinimalDuration{0.05};


// Properties

 bool __declspec(property(get=get_hasInputFocus))  hasInputFocus;

 bool __declspec(property(get=get_hasVrFocus))  hasVrFocus;

 bool __declspec(property(get=get_isAlwaysWireless))  isAlwaysWireless;

 ::GlobalNamespace::VRPlatformSDK __declspec(property(get=get_vrPlatformSDK))  vrPlatformSDK;


// Methods

/// @brief Method add_controllersDidChangeReferenceEvent addr 0x1f88e1c size 0x9c virtual true final true
 void add_controllersDidChangeReferenceEvent(::System::Action value) ;

/// @brief Method remove_controllersDidChangeReferenceEvent addr 0x1f88eb8 size 0x9c virtual true final true
 void remove_controllersDidChangeReferenceEvent(::System::Action value) ;

/// @brief Method get_hasInputFocus addr 0x1f88f54 size 0x8 virtual true final true
 bool get_hasInputFocus() ;

/// @brief Method get_hasVrFocus addr 0x1f88f5c size 0x8 virtual true final true
 bool get_hasVrFocus() ;

/// @brief Method get_isAlwaysWireless addr 0x1f88f64 size 0x8 virtual true final true
 bool get_isAlwaysWireless() ;

/// @brief Method get_vrPlatformSDK addr 0x1f88f6c size 0x8 virtual true final true
 ::GlobalNamespace::VRPlatformSDK get_vrPlatformSDK() ;

/// @brief Method add_inputFocusWasCapturedEvent addr 0x1f88f74 size 0x9c virtual true final true
 void add_inputFocusWasCapturedEvent(::System::Action value) ;

/// @brief Method remove_inputFocusWasCapturedEvent addr 0x1f89010 size 0x9c virtual true final true
 void remove_inputFocusWasCapturedEvent(::System::Action value) ;

/// @brief Method add_inputFocusWasReleasedEvent addr 0x1f890ac size 0x9c virtual true final true
 void add_inputFocusWasReleasedEvent(::System::Action value) ;

/// @brief Method remove_inputFocusWasReleasedEvent addr 0x1f89148 size 0x9c virtual true final true
 void remove_inputFocusWasReleasedEvent(::System::Action value) ;

/// @brief Method add_vrFocusWasCapturedEvent addr 0x1f891e4 size 0x9c virtual true final true
 void add_vrFocusWasCapturedEvent(::System::Action value) ;

/// @brief Method remove_vrFocusWasCapturedEvent addr 0x1f89280 size 0x9c virtual true final true
 void remove_vrFocusWasCapturedEvent(::System::Action value) ;

/// @brief Method add_vrFocusWasReleasedEvent addr 0x1f8931c size 0x9c virtual true final true
 void add_vrFocusWasReleasedEvent(::System::Action value) ;

/// @brief Method remove_vrFocusWasReleasedEvent addr 0x1f893b8 size 0x9c virtual true final true
 void remove_vrFocusWasReleasedEvent(::System::Action value) ;

/// @brief Method add_hmdUnmountedEvent addr 0x1f89454 size 0x9c virtual true final true
 void add_hmdUnmountedEvent(::System::Action value) ;

/// @brief Method remove_hmdUnmountedEvent addr 0x1f894f0 size 0x9c virtual true final true
 void remove_hmdUnmountedEvent(::System::Action value) ;

/// @brief Method add_hmdMountedEvent addr 0x1f8958c size 0x9c virtual true final true
 void add_hmdMountedEvent(::System::Action value) ;

/// @brief Method remove_hmdMountedEvent addr 0x1f89628 size 0x9c virtual true final true
 void remove_hmdMountedEvent(::System::Action value) ;

/// @brief Method Awake addr 0x1f896c4 size 0x258 virtual false final false
 void Awake() ;

/// @brief Method GetPoseOffsetForNode addr 0x1f899dc size 0x38 virtual true final true
 ::UnityEngine::Pose GetPoseOffsetForNode(::UnityEngine::XR::XRNode node) ;

/// @brief Method GetNodePose addr 0x1f89a14 size 0x16c virtual true final true
 bool GetNodePose(::UnityEngine::XR::XRNode nodeType, int32_t idx, ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot) ;

/// @brief Method GetTriggerValue addr 0x1f89b80 size 0xc virtual true final true
 float_t GetTriggerValue(::UnityEngine::XR::XRNode node) ;

/// @brief Method GetAnyJoystickMaxAxis addr 0x1f89b8c size 0x8 virtual true final true
 ::UnityEngine::Vector2 GetAnyJoystickMaxAxis() ;

/// @brief Method GetThumbstickValue addr 0x1f89b94 size 0xd4 virtual true final true
 ::UnityEngine::Vector2 GetThumbstickValue(::UnityEngine::XR::XRNode nodeType) ;

/// @brief Method GetMenuButton addr 0x1f89c68 size 0x8 virtual true final true
 bool GetMenuButton() ;

/// @brief Method GetMenuButtonDown addr 0x1f89c70 size 0x8 virtual true final true
 bool GetMenuButtonDown() ;

/// @brief Method RefreshControllersReference addr 0x1f89c78 size 0x1c virtual true final true
 void RefreshControllersReference() ;

/// @brief Method StopHaptics addr 0x1f89c94 size 0x4 virtual true final true
 void StopHaptics(::UnityEngine::XR::XRNode node) ;

/// @brief Method TriggerHapticPulse addr 0x1f89c98 size 0xa0 virtual true final true
 void TriggerHapticPulse(::UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency) ;

/// @brief Method HandleApplicationFocusLost addr 0x1f89d38 size 0x1c virtual false final false
 void HandleApplicationFocusLost() ;

/// @brief Method HandleApplicationFocusResumed addr 0x1f89d54 size 0x1c virtual false final false
 void HandleApplicationFocusResumed() ;

/// @brief Method InputDeviceChangeTriggered addr 0x1f89d70 size 0x1e4 virtual false final false
 void InputDeviceChangeTriggered(::UnityEngine::InputSystem::InputDevice inputDevice, ::UnityEngine::InputSystem::InputDeviceChange inputDeviceChange) ;

/// @brief Method AddControllerToMap addr 0x1f89f54 size 0x278 virtual false final false
 void AddControllerToMap(::UnityEngine::XR::XRNode forNode, ::UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method OnDestroy addr 0x1f8a1cc size 0xa4 virtual false final false
 void OnDestroy() ;

// Ctor Parameters []
explicit PSVR2Helper() ;

/// @brief Method .ctor addr 0x1f8a270 size 0x74 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PSVR2Helper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PSVR2Helper, "", "PSVR2Helper");
