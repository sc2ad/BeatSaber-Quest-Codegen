#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector2;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
struct EulerPose;
}
namespace GlobalNamespace {
struct VRPlatformSDK;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
class IVerboseLogger;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__Node;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusVRHelper;
}
// Type: ::OculusVRHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13921))
// CS Name: OculusVRHelper
class CORDL_TYPE OculusVRHelper : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IVRPlatformHelper
constexpr operator  GlobalNamespace::IVRPlatformHelper() const noexcept;

/// @brief Convert operator to GlobalNamespace::IVerboseLogger
constexpr operator  GlobalNamespace::IVerboseLogger() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~OculusVRHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusVRHelper", modifiers: " const&", def_value: None }]
constexpr OculusVRHelper(OculusVRHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusVRHelper", modifiers: "&&", def_value: None }]
constexpr OculusVRHelper(OculusVRHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusVRHelper(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OculusVRHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusVRHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusVRHelper& operator=(OculusVRHelper&& o) noexcept = default;
  constexpr OculusVRHelper& operator=(OculusVRHelper const& o) noexcept = default;
                


// Fields

 GlobalNamespace::EulerPose __declspec(property(get=__get__oculusTouchControllerOffset, put=__set__oculusTouchControllerOffset))  _oculusTouchControllerOffset;

constexpr void __set__oculusTouchControllerOffset(GlobalNamespace::EulerPose value) ;

constexpr GlobalNamespace::EulerPose __get__oculusTouchControllerOffset() const;

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

 bool __declspec(property(get=__get__hasInputFocus, put=__set__hasInputFocus))  _hasInputFocus;

constexpr void __set__hasInputFocus(bool value) ;

constexpr bool __get__hasInputFocus() const;

 bool __declspec(property(get=__get__hasVrFocus, put=__set__hasVrFocus))  _hasVrFocus;

constexpr void __set__hasVrFocus(bool value) ;

constexpr bool __get__hasVrFocus() const;

 bool __declspec(property(get=__get__userPresent, put=__set__userPresent))  _userPresent;

constexpr void __set__userPresent(bool value) ;

constexpr bool __get__userPresent() const;

 UnityEngine::EventSystems::EventSystem __declspec(property(get=__get__disabledEventSystem, put=__set__disabledEventSystem))  _disabledEventSystem;

constexpr void __set__disabledEventSystem(UnityEngine::EventSystems::EventSystem value) ;

constexpr UnityEngine::EventSystems::EventSystem __get__disabledEventSystem() const;

/// @brief Field kVerticalLeftHand offset 0
static constexpr ::ConstString  kVerticalLeftHand{u"VerticalLeftHand"};

/// @brief Field kVerticalRightHand offset 0
static constexpr ::ConstString  kVerticalRightHand{u"VerticalRightHand"};

/// @brief Field kHorizontalLeftHand offset 0
static constexpr ::ConstString  kHorizontalLeftHand{u"HorizontalLeftHand"};

/// @brief Field kHorizontalRightHand offset 0
static constexpr ::ConstString  kHorizontalRightHand{u"HorizontalRightHand"};


// Properties

 bool __declspec(property(get=get_hasInputFocus))  hasInputFocus;

 bool __declspec(property(get=get_hasVrFocus))  hasVrFocus;

 bool __declspec(property(get=get_isAlwaysWireless))  isAlwaysWireless;

 GlobalNamespace::VRPlatformSDK __declspec(property(get=get_vrPlatformSDK))  vrPlatformSDK;

 ::StringW __declspec(property(get=get_loggerPrefix))  loggerPrefix;

 bool __declspec(property(get=get__isOVRManagerPresent))  _isOVRManagerPresent;


// Methods

/// @brief Method add_inputFocusWasCapturedEvent addr 0x1f859f0 size 0x9c virtual true final true
 void add_inputFocusWasCapturedEvent(System::Action value) ;

/// @brief Method remove_inputFocusWasCapturedEvent addr 0x1f85a8c size 0x9c virtual true final true
 void remove_inputFocusWasCapturedEvent(System::Action value) ;

/// @brief Method add_inputFocusWasReleasedEvent addr 0x1f85b28 size 0x9c virtual true final true
 void add_inputFocusWasReleasedEvent(System::Action value) ;

/// @brief Method remove_inputFocusWasReleasedEvent addr 0x1f85bc4 size 0x9c virtual true final true
 void remove_inputFocusWasReleasedEvent(System::Action value) ;

/// @brief Method add_vrFocusWasCapturedEvent addr 0x1f85c60 size 0x9c virtual true final true
 void add_vrFocusWasCapturedEvent(System::Action value) ;

/// @brief Method remove_vrFocusWasCapturedEvent addr 0x1f85cfc size 0x9c virtual true final true
 void remove_vrFocusWasCapturedEvent(System::Action value) ;

/// @brief Method add_vrFocusWasReleasedEvent addr 0x1f85d98 size 0x9c virtual true final true
 void add_vrFocusWasReleasedEvent(System::Action value) ;

/// @brief Method remove_vrFocusWasReleasedEvent addr 0x1f85e34 size 0x9c virtual true final true
 void remove_vrFocusWasReleasedEvent(System::Action value) ;

/// @brief Method add_hmdUnmountedEvent addr 0x1f85ed0 size 0x9c virtual true final true
 void add_hmdUnmountedEvent(System::Action value) ;

/// @brief Method remove_hmdUnmountedEvent addr 0x1f85f6c size 0x9c virtual true final true
 void remove_hmdUnmountedEvent(System::Action value) ;

/// @brief Method add_hmdMountedEvent addr 0x1f86008 size 0x9c virtual true final true
 void add_hmdMountedEvent(System::Action value) ;

/// @brief Method remove_hmdMountedEvent addr 0x1f860a4 size 0x9c virtual true final true
 void remove_hmdMountedEvent(System::Action value) ;

/// @brief Method add_controllersDidChangeReferenceEvent addr 0x1f86140 size 0x9c virtual true final true
 void add_controllersDidChangeReferenceEvent(System::Action value) ;

/// @brief Method remove_controllersDidChangeReferenceEvent addr 0x1f861dc size 0x9c virtual true final true
 void remove_controllersDidChangeReferenceEvent(System::Action value) ;

/// @brief Method get_hasInputFocus addr 0x1f86278 size 0x50 virtual true final true
 bool get_hasInputFocus() ;

/// @brief Method get_hasVrFocus addr 0x1f862c8 size 0x50 virtual true final true
 bool get_hasVrFocus() ;

/// @brief Method get_isAlwaysWireless addr 0x1f86318 size 0x8 virtual true final true
 bool get_isAlwaysWireless() ;

/// @brief Method get_vrPlatformSDK addr 0x1f86320 size 0x8 virtual true final true
 GlobalNamespace::VRPlatformSDK get_vrPlatformSDK() ;

/// @brief Method get_loggerPrefix addr 0x1f86328 size 0x40 virtual true final true
 ::StringW get_loggerPrefix() ;

/// @brief Method get__isOVRManagerPresent addr 0x1f86368 size 0xbc virtual false final false
 bool get__isOVRManagerPresent() ;

/// @brief Method Update addr 0x1f86424 size 0x218 virtual false final false
 void Update() ;

/// @brief Method FixedUpdate addr 0x1f867b8 size 0x58 virtual false final false
 void FixedUpdate() ;

/// @brief Method LateUpdate addr 0x1f86810 size 0x58 virtual false final false
 void LateUpdate() ;

/// @brief Method TriggerHapticPulse addr 0x1f86868 size 0x7c virtual true final true
 void TriggerHapticPulse(UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency) ;

/// @brief Method StopHaptics addr 0x1f868e4 size 0x6c virtual true final true
 void StopHaptics(UnityEngine::XR::XRNode node) ;

/// @brief Method GetPoseOffsetForNode addr 0x1f86950 size 0xac virtual true final true
 UnityEngine::Pose GetPoseOffsetForNode(UnityEngine::XR::XRNode node) ;

/// @brief Method GetNodePose addr 0x1f869fc size 0x164 virtual true final true
 bool GetNodePose(UnityEngine::XR::XRNode nodeType, int32_t idx, ByRef<UnityEngine::Vector3> pos, ByRef<UnityEngine::Quaternion> rot) ;

/// @brief Method XRNodeToOVRNode addr 0x1f86b60 size 0xd8 virtual false final false
static GlobalNamespace::GlobalNamespace__OVRPlugin__Node XRNodeToOVRNode(UnityEngine::XR::XRNode node) ;

/// @brief Method GetAnyJoystickMaxAxis addr 0x1f86c38 size 0x4 virtual true final true
 UnityEngine::Vector2 GetAnyJoystickMaxAxis() ;

/// @brief Method GetTriggerValue addr 0x1f86c3c size 0x98 virtual true final true
 float_t GetTriggerValue(UnityEngine::XR::XRNode node) ;

/// @brief Method GetThumbstickValue addr 0x1f86cd4 size 0xf8 virtual true final true
 UnityEngine::Vector2 GetThumbstickValue(UnityEngine::XR::XRNode node) ;

/// @brief Method GetMenuButton addr 0x1f86dcc size 0x44 virtual true final true
 bool GetMenuButton() ;

/// @brief Method GetMenuButtonDown addr 0x1f86e10 size 0x44 virtual true final true
 bool GetMenuButtonDown() ;

/// @brief Method RefreshControllersReference addr 0x1f86e54 size 0x1c virtual true final true
 void RefreshControllersReference() ;

/// @brief Method EnableEventSystem addr 0x1f86734 size 0x84 virtual false final false
 void EnableEventSystem() ;

/// @brief Method DisableEventSystem addr 0x1f8663c size 0xf8 virtual false final false
 void DisableEventSystem() ;

// Ctor Parameters []
explicit OculusVRHelper() ;

/// @brief Method .ctor addr 0x1f86e70 size 0x1070 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OculusVRHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusVRHelper, "", "OculusVRHelper");
