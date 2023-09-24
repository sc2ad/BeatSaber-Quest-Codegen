#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
class Transform;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRCameraRig;
}
// Type: ::OVRCameraRig
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8450))
// CS Name: OVRCameraRig
class CORDL_TYPE OVRCameraRig : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x118};

virtual ~OVRCameraRig() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRCameraRig", modifiers: " const&", def_value: None }]
constexpr OVRCameraRig(OVRCameraRig const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRCameraRig", modifiers: "&&", def_value: None }]
constexpr OVRCameraRig(OVRCameraRig&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRCameraRig(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRCameraRig& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRCameraRig& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRCameraRig& operator=(OVRCameraRig&& o) noexcept = default;
  constexpr OVRCameraRig& operator=(OVRCameraRig const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get__trackingSpace_k__BackingField, put=__set__trackingSpace_k__BackingField))  _trackingSpace_k__BackingField;

constexpr void __set__trackingSpace_k__BackingField(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__trackingSpace_k__BackingField() const;

 UnityEngine::Transform __declspec(property(get=__get__leftEyeAnchor_k__BackingField, put=__set__leftEyeAnchor_k__BackingField))  _leftEyeAnchor_k__BackingField;

constexpr void __set__leftEyeAnchor_k__BackingField(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__leftEyeAnchor_k__BackingField() const;

 UnityEngine::Transform __declspec(property(get=__get__centerEyeAnchor_k__BackingField, put=__set__centerEyeAnchor_k__BackingField))  _centerEyeAnchor_k__BackingField;

constexpr void __set__centerEyeAnchor_k__BackingField(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__centerEyeAnchor_k__BackingField() const;

 UnityEngine::Transform __declspec(property(get=__get__rightEyeAnchor_k__BackingField, put=__set__rightEyeAnchor_k__BackingField))  _rightEyeAnchor_k__BackingField;

constexpr void __set__rightEyeAnchor_k__BackingField(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__rightEyeAnchor_k__BackingField() const;

 UnityEngine::Transform __declspec(property(get=__get__leftHandAnchor_k__BackingField, put=__set__leftHandAnchor_k__BackingField))  _leftHandAnchor_k__BackingField;

constexpr void __set__leftHandAnchor_k__BackingField(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__leftHandAnchor_k__BackingField() const;

 UnityEngine::Transform __declspec(property(get=__get__rightHandAnchor_k__BackingField, put=__set__rightHandAnchor_k__BackingField))  _rightHandAnchor_k__BackingField;

constexpr void __set__rightHandAnchor_k__BackingField(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__rightHandAnchor_k__BackingField() const;

 UnityEngine::Transform __declspec(property(get=__get__leftControllerAnchor_k__BackingField, put=__set__leftControllerAnchor_k__BackingField))  _leftControllerAnchor_k__BackingField;

constexpr void __set__leftControllerAnchor_k__BackingField(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__leftControllerAnchor_k__BackingField() const;

 UnityEngine::Transform __declspec(property(get=__get__rightControllerAnchor_k__BackingField, put=__set__rightControllerAnchor_k__BackingField))  _rightControllerAnchor_k__BackingField;

constexpr void __set__rightControllerAnchor_k__BackingField(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__rightControllerAnchor_k__BackingField() const;

 UnityEngine::Transform __declspec(property(get=__get__trackerAnchor_k__BackingField, put=__set__trackerAnchor_k__BackingField))  _trackerAnchor_k__BackingField;

constexpr void __set__trackerAnchor_k__BackingField(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__trackerAnchor_k__BackingField() const;

 System::Action_1<GlobalNamespace::OVRCameraRig> __declspec(property(get=__get_UpdatedAnchors, put=__set_UpdatedAnchors))  UpdatedAnchors;

constexpr void __set_UpdatedAnchors(System::Action_1<GlobalNamespace::OVRCameraRig> value) ;

constexpr System::Action_1<GlobalNamespace::OVRCameraRig> __get_UpdatedAnchors() const;

 System::Action_1<UnityEngine::Transform> __declspec(property(get=__get_TrackingSpaceChanged, put=__set_TrackingSpaceChanged))  TrackingSpaceChanged;

constexpr void __set_TrackingSpaceChanged(System::Action_1<UnityEngine::Transform> value) ;

constexpr System::Action_1<UnityEngine::Transform> __get_TrackingSpaceChanged() const;

 bool __declspec(property(get=__get_usePerEyeCameras, put=__set_usePerEyeCameras))  usePerEyeCameras;

constexpr void __set_usePerEyeCameras(bool value) ;

constexpr bool __get_usePerEyeCameras() const;

 bool __declspec(property(get=__get_useFixedUpdateForTracking, put=__set_useFixedUpdateForTracking))  useFixedUpdateForTracking;

constexpr void __set_useFixedUpdateForTracking(bool value) ;

constexpr bool __get_useFixedUpdateForTracking() const;

 bool __declspec(property(get=__get_disableEyeAnchorCameras, put=__set_disableEyeAnchorCameras))  disableEyeAnchorCameras;

constexpr void __set_disableEyeAnchorCameras(bool value) ;

constexpr bool __get_disableEyeAnchorCameras() const;

 bool __declspec(property(get=__get__skipUpdate, put=__set__skipUpdate))  _skipUpdate;

constexpr void __set__skipUpdate(bool value) ;

constexpr bool __get__skipUpdate() const;

 ::StringW __declspec(property(get=__get_trackingSpaceName, put=__set_trackingSpaceName))  trackingSpaceName;

constexpr void __set_trackingSpaceName(::StringW value) ;

constexpr ::StringW __get_trackingSpaceName() const;

 ::StringW __declspec(property(get=__get_trackerAnchorName, put=__set_trackerAnchorName))  trackerAnchorName;

constexpr void __set_trackerAnchorName(::StringW value) ;

constexpr ::StringW __get_trackerAnchorName() const;

 ::StringW __declspec(property(get=__get_leftEyeAnchorName, put=__set_leftEyeAnchorName))  leftEyeAnchorName;

constexpr void __set_leftEyeAnchorName(::StringW value) ;

constexpr ::StringW __get_leftEyeAnchorName() const;

 ::StringW __declspec(property(get=__get_centerEyeAnchorName, put=__set_centerEyeAnchorName))  centerEyeAnchorName;

constexpr void __set_centerEyeAnchorName(::StringW value) ;

constexpr ::StringW __get_centerEyeAnchorName() const;

 ::StringW __declspec(property(get=__get_rightEyeAnchorName, put=__set_rightEyeAnchorName))  rightEyeAnchorName;

constexpr void __set_rightEyeAnchorName(::StringW value) ;

constexpr ::StringW __get_rightEyeAnchorName() const;

 ::StringW __declspec(property(get=__get_leftHandAnchorName, put=__set_leftHandAnchorName))  leftHandAnchorName;

constexpr void __set_leftHandAnchorName(::StringW value) ;

constexpr ::StringW __get_leftHandAnchorName() const;

 ::StringW __declspec(property(get=__get_rightHandAnchorName, put=__set_rightHandAnchorName))  rightHandAnchorName;

constexpr void __set_rightHandAnchorName(::StringW value) ;

constexpr ::StringW __get_rightHandAnchorName() const;

 ::StringW __declspec(property(get=__get_leftControllerAnchorName, put=__set_leftControllerAnchorName))  leftControllerAnchorName;

constexpr void __set_leftControllerAnchorName(::StringW value) ;

constexpr ::StringW __get_leftControllerAnchorName() const;

 ::StringW __declspec(property(get=__get_rightControllerAnchorName, put=__set_rightControllerAnchorName))  rightControllerAnchorName;

constexpr void __set_rightControllerAnchorName(::StringW value) ;

constexpr ::StringW __get_rightControllerAnchorName() const;

 UnityEngine::Camera __declspec(property(get=__get__centerEyeCamera, put=__set__centerEyeCamera))  _centerEyeCamera;

constexpr void __set__centerEyeCamera(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get__centerEyeCamera() const;

 UnityEngine::Camera __declspec(property(get=__get__leftEyeCamera, put=__set__leftEyeCamera))  _leftEyeCamera;

constexpr void __set__leftEyeCamera(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get__leftEyeCamera() const;

 UnityEngine::Camera __declspec(property(get=__get__rightEyeCamera, put=__set__rightEyeCamera))  _rightEyeCamera;

constexpr void __set__rightEyeCamera(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get__rightEyeCamera() const;

 UnityEngine::Matrix4x4 __declspec(property(get=__get__previousTrackingSpaceTransform, put=__set__previousTrackingSpaceTransform))  _previousTrackingSpaceTransform;

constexpr void __set__previousTrackingSpaceTransform(UnityEngine::Matrix4x4 value) ;

constexpr UnityEngine::Matrix4x4 __get__previousTrackingSpaceTransform() const;


// Properties

 UnityEngine::Camera __declspec(property(get=get_leftEyeCamera))  leftEyeCamera;

 UnityEngine::Camera __declspec(property(get=get_rightEyeCamera))  rightEyeCamera;

 UnityEngine::Transform __declspec(property(get=get_trackingSpace, put=set_trackingSpace))  trackingSpace;

 UnityEngine::Transform __declspec(property(get=get_leftEyeAnchor, put=set_leftEyeAnchor))  leftEyeAnchor;

 UnityEngine::Transform __declspec(property(get=get_centerEyeAnchor, put=set_centerEyeAnchor))  centerEyeAnchor;

 UnityEngine::Transform __declspec(property(get=get_rightEyeAnchor, put=set_rightEyeAnchor))  rightEyeAnchor;

 UnityEngine::Transform __declspec(property(get=get_leftHandAnchor, put=set_leftHandAnchor))  leftHandAnchor;

 UnityEngine::Transform __declspec(property(get=get_rightHandAnchor, put=set_rightHandAnchor))  rightHandAnchor;

 UnityEngine::Transform __declspec(property(get=get_leftControllerAnchor, put=set_leftControllerAnchor))  leftControllerAnchor;

 UnityEngine::Transform __declspec(property(get=get_rightControllerAnchor, put=set_rightControllerAnchor))  rightControllerAnchor;

 UnityEngine::Transform __declspec(property(get=get_trackerAnchor, put=set_trackerAnchor))  trackerAnchor;


// Methods

/// @brief Method get_leftEyeCamera addr 0x25a9d38 size 0x1c virtual false final false
 UnityEngine::Camera get_leftEyeCamera() ;

/// @brief Method get_rightEyeCamera addr 0x25a9d54 size 0x1c virtual false final false
 UnityEngine::Camera get_rightEyeCamera() ;

/// @brief Method get_trackingSpace addr 0x25a9d70 size 0x8 virtual false final false
 UnityEngine::Transform get_trackingSpace() ;

/// @brief Method set_trackingSpace addr 0x25a9d78 size 0x8 virtual false final false
 void set_trackingSpace(UnityEngine::Transform value) ;

/// @brief Method get_leftEyeAnchor addr 0x25a9d80 size 0x8 virtual false final false
 UnityEngine::Transform get_leftEyeAnchor() ;

/// @brief Method set_leftEyeAnchor addr 0x25a9d88 size 0x8 virtual false final false
 void set_leftEyeAnchor(UnityEngine::Transform value) ;

/// @brief Method get_centerEyeAnchor addr 0x25a9d90 size 0x8 virtual false final false
 UnityEngine::Transform get_centerEyeAnchor() ;

/// @brief Method set_centerEyeAnchor addr 0x25a9d98 size 0x8 virtual false final false
 void set_centerEyeAnchor(UnityEngine::Transform value) ;

/// @brief Method get_rightEyeAnchor addr 0x25a9da0 size 0x8 virtual false final false
 UnityEngine::Transform get_rightEyeAnchor() ;

/// @brief Method set_rightEyeAnchor addr 0x25a9da8 size 0x8 virtual false final false
 void set_rightEyeAnchor(UnityEngine::Transform value) ;

/// @brief Method get_leftHandAnchor addr 0x25a9db0 size 0x8 virtual false final false
 UnityEngine::Transform get_leftHandAnchor() ;

/// @brief Method set_leftHandAnchor addr 0x25a9db8 size 0x8 virtual false final false
 void set_leftHandAnchor(UnityEngine::Transform value) ;

/// @brief Method get_rightHandAnchor addr 0x25a9dc0 size 0x8 virtual false final false
 UnityEngine::Transform get_rightHandAnchor() ;

/// @brief Method set_rightHandAnchor addr 0x25a9dc8 size 0x8 virtual false final false
 void set_rightHandAnchor(UnityEngine::Transform value) ;

/// @brief Method get_leftControllerAnchor addr 0x25a9dd0 size 0x8 virtual false final false
 UnityEngine::Transform get_leftControllerAnchor() ;

/// @brief Method set_leftControllerAnchor addr 0x25a9dd8 size 0x8 virtual false final false
 void set_leftControllerAnchor(UnityEngine::Transform value) ;

/// @brief Method get_rightControllerAnchor addr 0x25a9de0 size 0x8 virtual false final false
 UnityEngine::Transform get_rightControllerAnchor() ;

/// @brief Method set_rightControllerAnchor addr 0x25a9de8 size 0x8 virtual false final false
 void set_rightControllerAnchor(UnityEngine::Transform value) ;

/// @brief Method get_trackerAnchor addr 0x25a9df0 size 0x8 virtual false final false
 UnityEngine::Transform get_trackerAnchor() ;

/// @brief Method set_trackerAnchor addr 0x25a9df8 size 0x8 virtual false final false
 void set_trackerAnchor(UnityEngine::Transform value) ;

/// @brief Method add_UpdatedAnchors addr 0x25a9e00 size 0xb0 virtual false final false
 void add_UpdatedAnchors(System::Action_1<GlobalNamespace::OVRCameraRig> value) ;

/// @brief Method remove_UpdatedAnchors addr 0x25a9eb0 size 0xb0 virtual false final false
 void remove_UpdatedAnchors(System::Action_1<GlobalNamespace::OVRCameraRig> value) ;

/// @brief Method add_TrackingSpaceChanged addr 0x25a9f60 size 0xb0 virtual false final false
 void add_TrackingSpaceChanged(System::Action_1<UnityEngine::Transform> value) ;

/// @brief Method remove_TrackingSpaceChanged addr 0x25aa010 size 0xb0 virtual false final false
 void remove_TrackingSpaceChanged(System::Action_1<UnityEngine::Transform> value) ;

/// @brief Method Awake addr 0x25aa0c0 size 0x18 virtual true final false
 void Awake() ;

/// @brief Method Start addr 0x25aa0d8 size 0x88 virtual true final false
 void Start() ;

/// @brief Method FixedUpdate addr 0x25aa160 size 0x20 virtual true final false
 void FixedUpdate() ;

/// @brief Method Update addr 0x25aa180 size 0x24 virtual true final false
 void Update() ;

/// @brief Method OnDestroy addr 0x25aa1a4 size 0x74 virtual true final false
 void OnDestroy() ;

/// @brief Method UpdateAnchors addr 0x25aa218 size 0xe14 virtual true final false
 void UpdateAnchors(bool updateEyeAnchors, bool updateHandAnchors) ;

/// @brief Method OnBeforeRenderCallback addr 0x25ab628 size 0xd4 virtual true final false
 void OnBeforeRenderCallback() ;

/// @brief Method CheckForTrackingSpaceChangesAndRaiseEvent addr 0x25ab6fc size 0x27c virtual true final false
 void CheckForTrackingSpaceChangesAndRaiseEvent() ;

/// @brief Method RaiseUpdatedAnchorsEvent addr 0x25ab978 size 0x20 virtual true final false
 void RaiseUpdatedAnchorsEvent() ;

/// @brief Method EnsureGameObjectIntegrity addr 0x25ab998 size 0x80c virtual true final false
 void EnsureGameObjectIntegrity() ;

/// @brief Method ConfigureAnchor addr 0x25ac1a4 size 0x25c virtual true final false
 UnityEngine::Transform ConfigureAnchor(UnityEngine::Transform root, ::StringW name) ;

/// @brief Method ComputeTrackReferenceMatrix addr 0x25ac400 size 0x2d4 virtual true final false
 UnityEngine::Matrix4x4 ComputeTrackReferenceMatrix() ;

/// @brief Method CheckForAnchorsInParent addr 0x25ac6d4 size 0xe0 virtual false final false
 void CheckForAnchorsInParent() ;

static GlobalNamespace::OVRCameraRig New_ctor() ;

/// @brief Method .ctor addr 0x25ac7b4 size 0x150 virtual false final false
 void _ctor() ;

/// @brief Method <CheckForAnchorsInParent>g__Check|75_0 addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void _CheckForAnchorsInParent_g__Check_75_0(UnityEngine::Transform node) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRCameraRig);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRCameraRig, "", "OVRCameraRig");
