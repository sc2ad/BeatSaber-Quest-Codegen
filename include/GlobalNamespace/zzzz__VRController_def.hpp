#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class VRControllerTransformOffset;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Pose;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::XR {
struct XRNode;
}
// Forward declare root types
namespace GlobalNamespace {
class VRController;
}
// Type: ::VRController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13938))
// CS Name: VRController
class CORDL_TYPE VRController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~VRController() = default;

// Ctor Parameters [CppParam { name: "", ty: "VRController", modifiers: " const&", def_value: None }]
constexpr VRController(VRController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VRController", modifiers: "&&", def_value: None }]
constexpr VRController(VRController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VRController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr VRController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VRController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VRController& operator=(VRController&& o) noexcept = default;
  constexpr VRController& operator=(VRController const& o) noexcept = default;
                


// Fields

 UnityEngine::XR::XRNode __declspec(property(get=__get__node, put=__set__node))  _node;

constexpr void __set__node(UnityEngine::XR::XRNode value) ;

constexpr UnityEngine::XR::XRNode __get__node() const;

 int32_t __declspec(property(get=__get__nodeIdx, put=__set__nodeIdx))  _nodeIdx;

constexpr void __set__nodeIdx(int32_t value) ;

constexpr int32_t __get__nodeIdx() const;

 UnityEngine::GameObject __declspec(property(get=__get__viewAnchor, put=__set__viewAnchor))  _viewAnchor;

constexpr void __set__viewAnchor(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__viewAnchor() const;

 GlobalNamespace::VRControllerTransformOffset __declspec(property(get=__get__transformOffset, put=__set__transformOffset))  _transformOffset;

constexpr void __set__transformOffset(GlobalNamespace::VRControllerTransformOffset value) ;

constexpr GlobalNamespace::VRControllerTransformOffset __get__transformOffset() const;

 GlobalNamespace::IVRPlatformHelper __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper))  _vrPlatformHelper;

constexpr void __set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper value) ;

constexpr GlobalNamespace::IVRPlatformHelper __get__vrPlatformHelper() const;

 UnityEngine::Transform __declspec(property(get=__get__viewAnchorTransform, put=__set__viewAnchorTransform))  _viewAnchorTransform;

constexpr void __set__viewAnchorTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__viewAnchorTransform() const;

 UnityEngine::Vector3 __declspec(property(get=__get__lastTrackedPosition, put=__set__lastTrackedPosition))  _lastTrackedPosition;

constexpr void __set__lastTrackedPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__lastTrackedPosition() const;

 UnityEngine::Quaternion __declspec(property(get=__get__lastTrackedRotation, put=__set__lastTrackedRotation))  _lastTrackedRotation;

constexpr void __set__lastTrackedRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__lastTrackedRotation() const;

 bool __declspec(property(get=__get__mouseMode, put=__set__mouseMode))  _mouseMode;

constexpr void __set__mouseMode(bool value) ;

constexpr bool __get__mouseMode() const;

static UnityEngine::Vector3 __declspec(property(get=__get_kLeftControllerDefaultPosition, put=__set_kLeftControllerDefaultPosition))  kLeftControllerDefaultPosition;

static void __set_kLeftControllerDefaultPosition(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_kLeftControllerDefaultPosition() ;

static UnityEngine::Vector3 __declspec(property(get=__get_kRightControllerDefaultPosition, put=__set_kRightControllerDefaultPosition))  kRightControllerDefaultPosition;

static void __set_kRightControllerDefaultPosition(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_kRightControllerDefaultPosition() ;


// Properties

 UnityEngine::XR::XRNode __declspec(property(get=get_node, put=set_node))  node;

 int32_t __declspec(property(get=get_nodeIdx, put=set_nodeIdx))  nodeIdx;

 UnityEngine::Vector3 __declspec(property(get=get_position))  position;

 UnityEngine::Quaternion __declspec(property(get=get_rotation))  rotation;

 UnityEngine::Vector3 __declspec(property(get=get_forward))  forward;

 float_t __declspec(property(get=get_triggerValue))  triggerValue;

 UnityEngine::Vector2 __declspec(property(get=get_thumbstick))  thumbstick;

 bool __declspec(property(get=get_active))  active;

 UnityEngine::Transform __declspec(property(get=get_viewAnchorTransform))  viewAnchorTransform;

 bool __declspec(property(get=get_mouseMode, put=set_mouseMode))  mouseMode;


// Methods

/// @brief Method get_node addr 0x1f8d87c size 0x8 virtual false final false
 UnityEngine::XR::XRNode get_node() ;

/// @brief Method set_node addr 0x1f8d884 size 0x8 virtual false final false
 void set_node(UnityEngine::XR::XRNode value) ;

/// @brief Method get_nodeIdx addr 0x1f8d88c size 0x8 virtual false final false
 int32_t get_nodeIdx() ;

/// @brief Method set_nodeIdx addr 0x1f8d894 size 0x8 virtual false final false
 void set_nodeIdx(int32_t value) ;

/// @brief Method get_position addr 0x1f8d89c size 0x20 virtual false final false
 UnityEngine::Vector3 get_position() ;

/// @brief Method get_rotation addr 0x1f8d8bc size 0x20 virtual false final false
 UnityEngine::Quaternion get_rotation() ;

/// @brief Method get_forward addr 0x1f8d8dc size 0x20 virtual false final false
 UnityEngine::Vector3 get_forward() ;

/// @brief Method get_triggerValue addr 0x1f8d8fc size 0xdc virtual false final false
 float_t get_triggerValue() ;

/// @brief Method get_thumbstick addr 0x1f8d9d8 size 0xac virtual false final false
 UnityEngine::Vector2 get_thumbstick() ;

/// @brief Method get_active addr 0x1f8da84 size 0x20 virtual false final false
 bool get_active() ;

/// @brief Method get_viewAnchorTransform addr 0x1f8daa4 size 0x8 virtual false final false
 UnityEngine::Transform get_viewAnchorTransform() ;

/// @brief Method get_mouseMode addr 0x1f8daac size 0x8 virtual false final false
 bool get_mouseMode() ;

/// @brief Method set_mouseMode addr 0x1f8dab4 size 0x108 virtual false final false
 void set_mouseMode(bool value) ;

/// @brief Method Awake addr 0x1f8dbe8 size 0x28 virtual false final false
 void Awake() ;

/// @brief Method Init addr 0x1f8dc10 size 0xc virtual false final false
 void Init(GlobalNamespace::IVRPlatformHelper vrPlatformHelper) ;

/// @brief Method OnEnable addr 0x1f8dde0 size 0x4 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x1f8dde4 size 0x108 virtual false final false
 void OnDisable() ;

/// @brief Method SetupVRPlatformHelper addr 0x1f8dc1c size 0x1c4 virtual false final false
 void SetupVRPlatformHelper() ;

/// @brief Method GetControllerOffset addr 0x1f8deec size 0x22c virtual false final false
 UnityEngine::Pose GetControllerOffset() ;

/// @brief Method UpdateAnchorOffsetPose addr 0x1f8e268 size 0x2c virtual false final false
 void UpdateAnchorOffsetPose(UnityEngine::Pose poseOffset) ;

/// @brief Method AdjustPose addr 0x1f8e1c8 size 0x50 virtual false final false
static UnityEngine::Pose AdjustPose(UnityEngine::Pose originalPose, UnityEngine::Pose adjustment) ;

/// @brief Method InvertControllerPose addr 0x1f8e218 size 0x50 virtual false final false
static UnityEngine::Pose InvertControllerPose(UnityEngine::Pose finalPose) ;

/// @brief Method UpdateAnchorOffsetPose addr 0x1f8dbbc size 0x2c virtual false final false
 void UpdateAnchorOffsetPose() ;

/// @brief Method Update addr 0x1f8e294 size 0x2b4 virtual false final false
 void Update() ;

static GlobalNamespace::VRController New_ctor() ;

/// @brief Method .ctor addr 0x1f8e548 size 0x98 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::VRController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRController, "", "VRController");
