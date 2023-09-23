#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::XR {
struct XRNodeState;
}
namespace GlobalNamespace {
class UnityXRController;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine::XR {
class XRInputSubsystem;
}
namespace GlobalNamespace {
class GlobalNamespace__UnityXRController__Configuration;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace GlobalNamespace {
struct VRPlatformSDK;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace GlobalNamespace {
class IVerboseLogger;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputAction__CallbackContext;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
struct EulerPose;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__UnityXRHelper__VRControllerManufacturerName;
}
namespace GlobalNamespace {
class UnityXRHelper;
}
// Type: ::VRControllerManufacturerName
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13936))
// CS Name: UnityXRHelper::VRControllerManufacturerName
struct CORDL_TYPE GlobalNamespace__UnityXRHelper__VRControllerManufacturerName : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__UnityXRHelper__VRControllerManufacturerName(int32_t value__) noexcept;


                    constexpr GlobalNamespace__UnityXRHelper__VRControllerManufacturerName(GlobalNamespace__UnityXRHelper__VRControllerManufacturerName const&) = default;
                    constexpr GlobalNamespace__UnityXRHelper__VRControllerManufacturerName(GlobalNamespace__UnityXRHelper__VRControllerManufacturerName&&) = default;
                    constexpr GlobalNamespace__UnityXRHelper__VRControllerManufacturerName& operator=(GlobalNamespace__UnityXRHelper__VRControllerManufacturerName const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__UnityXRHelper__VRControllerManufacturerName& operator=(GlobalNamespace__UnityXRHelper__VRControllerManufacturerName&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__UnityXRHelper__VRControllerManufacturerName(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__UnityXRHelper__VRControllerManufacturerName_Unwrapped : int32_t {
__Undefined = 0,
__HTC = 1,
__Oculus = 2,
__Valve = 3,
__Microsoft = 4,
__Unknown = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__UnityXRHelper__VRControllerManufacturerName_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__UnityXRHelper__VRControllerManufacturerName_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Undefined offset 0
static GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName const Undefined;

/// @brief Field HTC offset 0
static GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName const HTC;

/// @brief Field Oculus offset 0
static GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName const Oculus;

/// @brief Field Valve offset 0
static GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName const Valve;

/// @brief Field Microsoft offset 0
static GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName const Microsoft;

/// @brief Field Unknown offset 0
static GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName const Unknown;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::UnityXRHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13937))
// CS Name: UnityXRHelper
class CORDL_TYPE UnityXRHelper : public UnityEngine::MonoBehaviour {
public:
// Declarations
using VRControllerManufacturerName = GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName;

/// @brief Convert operator to GlobalNamespace::IVRPlatformHelper
constexpr operator  GlobalNamespace::IVRPlatformHelper() const noexcept;

/// @brief Convert operator to GlobalNamespace::IVerboseLogger
constexpr operator  GlobalNamespace::IVerboseLogger() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf8};

virtual ~UnityXRHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityXRHelper", modifiers: " const&", def_value: None }]
constexpr UnityXRHelper(UnityXRHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityXRHelper", modifiers: "&&", def_value: None }]
constexpr UnityXRHelper(UnityXRHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityXRHelper(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr UnityXRHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityXRHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityXRHelper& operator=(UnityXRHelper&& o) noexcept = default;
  constexpr UnityXRHelper& operator=(UnityXRHelper const& o) noexcept = default;
                


// Fields

/// @brief Field kSecondaryButtonLeftHand offset 0
static constexpr ::ConstString  kSecondaryButtonLeftHand{u"OpenXRSecondaryButtonLeftHand"};

/// @brief Field kSecondaryButtonRightHand offset 0
static constexpr ::ConstString  kSecondaryButtonRightHand{u"OpenXRSecondaryButtonRightHand"};

 System::Action __declspec(property(get=__get_inputFocusWasCapturedEvent, put=__set_inputFocusWasCapturedEvent))  inputFocusWasCapturedEvent;

constexpr void __set_inputFocusWasCapturedEvent(System::Action value) ;

constexpr System::Action __get_inputFocusWasCapturedEvent() const;

 System::Action __declspec(property(get=__get_inputFocusWasReleasedEvent, put=__set_inputFocusWasReleasedEvent))  inputFocusWasReleasedEvent;

constexpr void __set_inputFocusWasReleasedEvent(System::Action value) ;

constexpr System::Action __get_inputFocusWasReleasedEvent() const;

 System::Action __declspec(property(get=__get_vrFocusWasCapturedEvent, put=__set_vrFocusWasCapturedEvent))  vrFocusWasCapturedEvent;

constexpr void __set_vrFocusWasCapturedEvent(System::Action value) ;

constexpr System::Action __get_vrFocusWasCapturedEvent() const;

 System::Action __declspec(property(get=__get_vrFocusWasReleasedEvent, put=__set_vrFocusWasReleasedEvent))  vrFocusWasReleasedEvent;

constexpr void __set_vrFocusWasReleasedEvent(System::Action value) ;

constexpr System::Action __get_vrFocusWasReleasedEvent() const;

 System::Action __declspec(property(get=__get_hmdUnmountedEvent, put=__set_hmdUnmountedEvent))  hmdUnmountedEvent;

constexpr void __set_hmdUnmountedEvent(System::Action value) ;

constexpr System::Action __get_hmdUnmountedEvent() const;

 System::Action __declspec(property(get=__get_hmdMountedEvent, put=__set_hmdMountedEvent))  hmdMountedEvent;

constexpr void __set_hmdMountedEvent(System::Action value) ;

constexpr System::Action __get_hmdMountedEvent() const;

 System::Action __declspec(property(get=__get_controllersDidChangeReferenceEvent, put=__set_controllersDidChangeReferenceEvent))  controllersDidChangeReferenceEvent;

constexpr void __set_controllersDidChangeReferenceEvent(System::Action value) ;

constexpr System::Action __get_controllersDidChangeReferenceEvent() const;

 bool __declspec(property(get=__get__hasVrFocus_k__BackingField, put=__set__hasVrFocus_k__BackingField))  _hasVrFocus_k__BackingField;

constexpr void __set__hasVrFocus_k__BackingField(bool value) ;

constexpr bool __get__hasVrFocus_k__BackingField() const;

 GlobalNamespace::EulerPose __declspec(property(get=__get__oculusPoseOffset, put=__set__oculusPoseOffset))  _oculusPoseOffset;

constexpr void __set__oculusPoseOffset(GlobalNamespace::EulerPose value) ;

constexpr GlobalNamespace::EulerPose __get__oculusPoseOffset() const;

 GlobalNamespace::EulerPose __declspec(property(get=__get__valveIndexPoseOffset, put=__set__valveIndexPoseOffset))  _valveIndexPoseOffset;

constexpr void __set__valveIndexPoseOffset(GlobalNamespace::EulerPose value) ;

constexpr GlobalNamespace::EulerPose __get__valveIndexPoseOffset() const;

 GlobalNamespace::EulerPose __declspec(property(get=__get__htcVivePoseOffset, put=__set__htcVivePoseOffset))  _htcVivePoseOffset;

constexpr void __set__htcVivePoseOffset(GlobalNamespace::EulerPose value) ;

constexpr GlobalNamespace::EulerPose __get__htcVivePoseOffset() const;

 GlobalNamespace::GlobalNamespace__UnityXRController__Configuration __declspec(property(get=__get__leftControllerConfiguration, put=__set__leftControllerConfiguration))  _leftControllerConfiguration;

constexpr void __set__leftControllerConfiguration(GlobalNamespace::GlobalNamespace__UnityXRController__Configuration value) ;

constexpr GlobalNamespace::GlobalNamespace__UnityXRController__Configuration __get__leftControllerConfiguration() const;

 GlobalNamespace::GlobalNamespace__UnityXRController__Configuration __declspec(property(get=__get__rightControllerConfiguration, put=__set__rightControllerConfiguration))  _rightControllerConfiguration;

constexpr void __set__rightControllerConfiguration(GlobalNamespace::GlobalNamespace__UnityXRController__Configuration value) ;

constexpr GlobalNamespace::GlobalNamespace__UnityXRController__Configuration __get__rightControllerConfiguration() const;

 UnityEngine::InputSystem::InputActionReference __declspec(property(get=__get__userPresenceActionReference, put=__set__userPresenceActionReference))  _userPresenceActionReference;

constexpr void __set__userPresenceActionReference(UnityEngine::InputSystem::InputActionReference value) ;

constexpr UnityEngine::InputSystem::InputActionReference __get__userPresenceActionReference() const;

 UnityEngine::InputSystem::InputActionReference __declspec(property(get=__get__headPositionActionReference, put=__set__headPositionActionReference))  _headPositionActionReference;

constexpr void __set__headPositionActionReference(UnityEngine::InputSystem::InputActionReference value) ;

constexpr UnityEngine::InputSystem::InputActionReference __get__headPositionActionReference() const;

 UnityEngine::InputSystem::InputActionReference __declspec(property(get=__get__headOrientationActionReference, put=__set__headOrientationActionReference))  _headOrientationActionReference;

constexpr void __set__headOrientationActionReference(UnityEngine::InputSystem::InputActionReference value) ;

constexpr UnityEngine::InputSystem::InputActionReference __get__headOrientationActionReference() const;

 GlobalNamespace::UnityXRController __declspec(property(get=__get__leftController, put=__set__leftController))  _leftController;

constexpr void __set__leftController(GlobalNamespace::UnityXRController value) ;

constexpr GlobalNamespace::UnityXRController __get__leftController() const;

 GlobalNamespace::UnityXRController __declspec(property(get=__get__rightController, put=__set__rightController))  _rightController;

constexpr void __set__rightController(GlobalNamespace::UnityXRController value) ;

constexpr GlobalNamespace::UnityXRController __get__rightController() const;

 UnityEngine::InputSystem::InputAction __declspec(property(get=__get__headPositionAction, put=__set__headPositionAction))  _headPositionAction;

constexpr void __set__headPositionAction(UnityEngine::InputSystem::InputAction value) ;

constexpr UnityEngine::InputSystem::InputAction __get__headPositionAction() const;

 UnityEngine::InputSystem::InputAction __declspec(property(get=__get__headOrientationAction, put=__set__headOrientationAction))  _headOrientationAction;

constexpr void __set__headOrientationAction(UnityEngine::InputSystem::InputAction value) ;

constexpr UnityEngine::InputSystem::InputAction __get__headOrientationAction() const;

 UnityEngine::InputSystem::InputAction __declspec(property(get=__get__userPresenceAction, put=__set__userPresenceAction))  _userPresenceAction;

constexpr void __set__userPresenceAction(UnityEngine::InputSystem::InputAction value) ;

constexpr UnityEngine::InputSystem::InputAction __get__userPresenceAction() const;

 bool __declspec(property(get=__get__scrollingLastFrame, put=__set__scrollingLastFrame))  _scrollingLastFrame;

constexpr void __set__scrollingLastFrame(bool value) ;

constexpr bool __get__scrollingLastFrame() const;

 bool __declspec(property(get=__get__userPresence, put=__set__userPresence))  _userPresence;

constexpr void __set__userPresence(bool value) ;

constexpr bool __get__userPresence() const;


// Properties

 bool __declspec(property(get=get_hasInputFocus))  hasInputFocus;

 bool __declspec(property(get=get_hasVrFocus, put=set_hasVrFocus))  hasVrFocus;

 bool __declspec(property(get=get_isAlwaysWireless))  isAlwaysWireless;

 GlobalNamespace::VRPlatformSDK __declspec(property(get=get_vrPlatformSDK))  vrPlatformSDK;

 ::StringW __declspec(property(get=get_loggerPrefix))  loggerPrefix;

 bool __declspec(property(put=set_userPresence))  userPresence;


// Methods

/// @brief Method add_inputFocusWasCapturedEvent addr 0x1f8be00 size 0x9c virtual true final true
 void add_inputFocusWasCapturedEvent(System::Action value) ;

/// @brief Method remove_inputFocusWasCapturedEvent addr 0x1f8be9c size 0x9c virtual true final true
 void remove_inputFocusWasCapturedEvent(System::Action value) ;

/// @brief Method add_inputFocusWasReleasedEvent addr 0x1f8bf38 size 0x9c virtual true final true
 void add_inputFocusWasReleasedEvent(System::Action value) ;

/// @brief Method remove_inputFocusWasReleasedEvent addr 0x1f8bfd4 size 0x9c virtual true final true
 void remove_inputFocusWasReleasedEvent(System::Action value) ;

/// @brief Method add_vrFocusWasCapturedEvent addr 0x1f8c070 size 0x9c virtual true final true
 void add_vrFocusWasCapturedEvent(System::Action value) ;

/// @brief Method remove_vrFocusWasCapturedEvent addr 0x1f8c10c size 0x9c virtual true final true
 void remove_vrFocusWasCapturedEvent(System::Action value) ;

/// @brief Method add_vrFocusWasReleasedEvent addr 0x1f8c1a8 size 0x9c virtual true final true
 void add_vrFocusWasReleasedEvent(System::Action value) ;

/// @brief Method remove_vrFocusWasReleasedEvent addr 0x1f8c244 size 0x9c virtual true final true
 void remove_vrFocusWasReleasedEvent(System::Action value) ;

/// @brief Method add_hmdUnmountedEvent addr 0x1f8c2e0 size 0x9c virtual true final true
 void add_hmdUnmountedEvent(System::Action value) ;

/// @brief Method remove_hmdUnmountedEvent addr 0x1f8c37c size 0x9c virtual true final true
 void remove_hmdUnmountedEvent(System::Action value) ;

/// @brief Method add_hmdMountedEvent addr 0x1f8c418 size 0x9c virtual true final true
 void add_hmdMountedEvent(System::Action value) ;

/// @brief Method remove_hmdMountedEvent addr 0x1f8c4b4 size 0x9c virtual true final true
 void remove_hmdMountedEvent(System::Action value) ;

/// @brief Method add_controllersDidChangeReferenceEvent addr 0x1f8c550 size 0x9c virtual true final true
 void add_controllersDidChangeReferenceEvent(System::Action value) ;

/// @brief Method remove_controllersDidChangeReferenceEvent addr 0x1f8c5ec size 0x9c virtual true final true
 void remove_controllersDidChangeReferenceEvent(System::Action value) ;

/// @brief Method get_hasInputFocus addr 0x1f8c688 size 0x8 virtual true final true
 bool get_hasInputFocus() ;

/// @brief Method get_hasVrFocus addr 0x1f8c690 size 0x8 virtual true final true
 bool get_hasVrFocus() ;

/// @brief Method set_hasVrFocus addr 0x1f8c698 size 0xc virtual false final false
 void set_hasVrFocus(bool value) ;

/// @brief Method get_isAlwaysWireless addr 0x1f8c6a4 size 0x8 virtual true final true
 bool get_isAlwaysWireless() ;

/// @brief Method get_vrPlatformSDK addr 0x1f8c6ac size 0x8 virtual true final true
 GlobalNamespace::VRPlatformSDK get_vrPlatformSDK() ;

/// @brief Method get_loggerPrefix addr 0x1f8c6b4 size 0x40 virtual true final true
 ::StringW get_loggerPrefix() ;

/// @brief Method set_userPresence addr 0x1f8c6f4 size 0x80 virtual false final false
 void set_userPresence(bool value) ;

/// @brief Method Start addr 0x1f8c774 size 0x380 virtual false final false
 void Start() ;

/// @brief Method OnTrackingOriginUpdated addr 0x1f8cb8c size 0x1c virtual false final false
 void OnTrackingOriginUpdated(UnityEngine::XR::XRInputSubsystem inputSystem) ;

/// @brief Method OnboundaryChanged addr 0x1f8cbc4 size 0x1c virtual false final false
 void OnboundaryChanged(UnityEngine::XR::XRInputSubsystem inputSystem) ;

/// @brief Method OnDestroy addr 0x1f8cbe0 size 0x184 virtual false final false
 void OnDestroy() ;

/// @brief Method OnUserPresenceCanceled addr 0x1f8cd64 size 0x8 virtual false final false
 void OnUserPresenceCanceled(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method OnUserPresenceStarted addr 0x1f8cd6c size 0x8 virtual false final false
 void OnUserPresenceStarted(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method OnApplicationPause addr 0x1f8cd74 size 0x34 virtual false final false
 void OnApplicationPause(bool pauseStatus) ;

/// @brief Method HandleNewXRNode addr 0x1f8cda8 size 0x24 virtual false final false
 void HandleNewXRNode(UnityEngine::XR::XRNodeState state) ;

/// @brief Method UpdateManufacturerOnNode addr 0x1f8caf4 size 0x98 virtual false final false
 void UpdateManufacturerOnNode(UnityEngine::XR::XRNode node) ;

/// @brief Method HandleRemovedXRNode addr 0x1f8cdcc size 0x44 virtual false final false
 void HandleRemovedXRNode(UnityEngine::XR::XRNodeState state) ;

/// @brief Method ControllerFromNode addr 0x1f8ce10 size 0x2c virtual false final false
 GlobalNamespace::UnityXRController ControllerFromNode(UnityEngine::XR::XRNode node) ;

/// @brief Method TriggerHapticPulse addr 0x1f8ce3c size 0xe0 virtual true final true
 void TriggerHapticPulse(UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency) ;

/// @brief Method StopHaptics addr 0x1f8cf1c size 0xcc virtual true final true
 void StopHaptics(UnityEngine::XR::XRNode node) ;

/// @brief Method GetPoseOffsetForNode addr 0x1f8cfe8 size 0xc4 virtual true final true
 UnityEngine::Pose GetPoseOffsetForNode(UnityEngine::XR::XRNode node) ;

/// @brief Method GetPoseOffsetForManufacturer addr 0x1f8d0ac size 0x158 virtual false final false
 UnityEngine::Pose GetPoseOffsetForManufacturer(GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName manufacturerName) ;

/// @brief Method GetNodePose addr 0x1f8d204 size 0x1f4 virtual true final true
 bool GetNodePose(UnityEngine::XR::XRNode nodeType, int32_t idx, ByRef<UnityEngine::Vector3> pos, ByRef<UnityEngine::Quaternion> rot) ;

/// @brief Method GetAnyJoystickMaxAxis addr 0x1f8d490 size 0x8 virtual true final true
 UnityEngine::Vector2 GetAnyJoystickMaxAxis() ;

/// @brief Method GetTriggerValue addr 0x1f8d498 size 0xc virtual true final true
 float_t GetTriggerValue(UnityEngine::XR::XRNode node) ;

/// @brief Method GetThumbstickValue addr 0x1f8d4a4 size 0x78 virtual true final true
 UnityEngine::Vector2 GetThumbstickValue(UnityEngine::XR::XRNode node) ;

/// @brief Method GetMenuButton addr 0x1f8d51c size 0x74 virtual true final true
 bool GetMenuButton() ;

/// @brief Method GetMenuButtonDown addr 0x1f8d6e8 size 0x74 virtual true final true
 bool GetMenuButtonDown() ;

/// @brief Method GetMenuButtonNameForLeftController addr 0x1f8d590 size 0x8c virtual false final false
 ::StringW GetMenuButtonNameForLeftController() ;

/// @brief Method GetMenuButtonNameForRightController addr 0x1f8d64c size 0x9c virtual false final false
 ::StringW GetMenuButtonNameForRightController() ;

/// @brief Method GetButton addr 0x1f8d61c size 0x30 virtual false final false
static bool GetButton(::StringW buttonLegacyName) ;

/// @brief Method GetButtonDown addr 0x1f8d75c size 0x30 virtual false final false
static bool GetButtonDown(::StringW buttonLegacyName) ;

/// @brief Method RefreshControllersReference addr 0x1f8cba8 size 0x1c virtual true final true
 void RefreshControllersReference() ;

/// @brief Method ReadHeadPose addr 0x1f8d3f8 size 0x98 virtual false final false
 void ReadHeadPose(ByRef<UnityEngine::Vector3> pos, ByRef<UnityEngine::Quaternion> rot) ;

// Ctor Parameters []
explicit UnityXRHelper() ;

/// @brief Method .ctor addr 0x1f8d78c size 0xf0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName, "", "UnityXRHelper/VRControllerManufacturerName");
NEED_NO_BOX(GlobalNamespace::UnityXRHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityXRHelper, "", "UnityXRHelper");
