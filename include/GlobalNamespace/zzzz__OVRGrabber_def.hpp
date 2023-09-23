#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRInput__Controller;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class OVRGrabbable;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRGrabber;
}
// Type: ::OVRGrabber
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8907))
// CS Name: OVRGrabber
class CORDL_TYPE OVRGrabber : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc8};

virtual ~OVRGrabber() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRGrabber", modifiers: " const&", def_value: None }]
constexpr OVRGrabber(OVRGrabber const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRGrabber", modifiers: "&&", def_value: None }]
constexpr OVRGrabber(OVRGrabber&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRGrabber(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRGrabber& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRGrabber& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRGrabber& operator=(OVRGrabber&& o) noexcept = default;
  constexpr OVRGrabber& operator=(OVRGrabber const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_grabBegin, put=__set_grabBegin))  grabBegin;

constexpr void __set_grabBegin(float_t value) ;

constexpr float_t __get_grabBegin() const;

 float_t __declspec(property(get=__get_grabEnd, put=__set_grabEnd))  grabEnd;

constexpr void __set_grabEnd(float_t value) ;

constexpr float_t __get_grabEnd() const;

 bool __declspec(property(get=__get_m_parentHeldObject, put=__set_m_parentHeldObject))  m_parentHeldObject;

constexpr void __set_m_parentHeldObject(bool value) ;

constexpr bool __get_m_parentHeldObject() const;

 bool __declspec(property(get=__get_m_moveHandPosition, put=__set_m_moveHandPosition))  m_moveHandPosition;

constexpr void __set_m_moveHandPosition(bool value) ;

constexpr bool __get_m_moveHandPosition() const;

 UnityEngine::Transform __declspec(property(get=__get_m_gripTransform, put=__set_m_gripTransform))  m_gripTransform;

constexpr void __set_m_gripTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_m_gripTransform() const;

 ::ArrayW<UnityEngine::Collider> __declspec(property(get=__get_m_grabVolumes, put=__set_m_grabVolumes))  m_grabVolumes;

constexpr void __set_m_grabVolumes(::ArrayW<UnityEngine::Collider> value) ;

constexpr ::ArrayW<UnityEngine::Collider> __get_m_grabVolumes() const;

 GlobalNamespace::GlobalNamespace__OVRInput__Controller __declspec(property(get=__get_m_controller, put=__set_m_controller))  m_controller;

constexpr void __set_m_controller(GlobalNamespace::GlobalNamespace__OVRInput__Controller value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__Controller __get_m_controller() const;

 UnityEngine::Transform __declspec(property(get=__get_m_parentTransform, put=__set_m_parentTransform))  m_parentTransform;

constexpr void __set_m_parentTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_m_parentTransform() const;

 UnityEngine::GameObject __declspec(property(get=__get_m_player, put=__set_m_player))  m_player;

constexpr void __set_m_player(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_player() const;

 bool __declspec(property(get=__get_m_grabVolumeEnabled, put=__set_m_grabVolumeEnabled))  m_grabVolumeEnabled;

constexpr void __set_m_grabVolumeEnabled(bool value) ;

constexpr bool __get_m_grabVolumeEnabled() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_lastPos, put=__set_m_lastPos))  m_lastPos;

constexpr void __set_m_lastPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_lastPos() const;

 UnityEngine::Quaternion __declspec(property(get=__get_m_lastRot, put=__set_m_lastRot))  m_lastRot;

constexpr void __set_m_lastRot(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_m_lastRot() const;

 UnityEngine::Quaternion __declspec(property(get=__get_m_anchorOffsetRotation, put=__set_m_anchorOffsetRotation))  m_anchorOffsetRotation;

constexpr void __set_m_anchorOffsetRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_m_anchorOffsetRotation() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_anchorOffsetPosition, put=__set_m_anchorOffsetPosition))  m_anchorOffsetPosition;

constexpr void __set_m_anchorOffsetPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_anchorOffsetPosition() const;

 float_t __declspec(property(get=__get_m_prevFlex, put=__set_m_prevFlex))  m_prevFlex;

constexpr void __set_m_prevFlex(float_t value) ;

constexpr float_t __get_m_prevFlex() const;

 GlobalNamespace::OVRGrabbable __declspec(property(get=__get_m_grabbedObj, put=__set_m_grabbedObj))  m_grabbedObj;

constexpr void __set_m_grabbedObj(GlobalNamespace::OVRGrabbable value) ;

constexpr GlobalNamespace::OVRGrabbable __get_m_grabbedObj() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_grabbedObjectPosOff, put=__set_m_grabbedObjectPosOff))  m_grabbedObjectPosOff;

constexpr void __set_m_grabbedObjectPosOff(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_grabbedObjectPosOff() const;

 UnityEngine::Quaternion __declspec(property(get=__get_m_grabbedObjectRotOff, put=__set_m_grabbedObjectRotOff))  m_grabbedObjectRotOff;

constexpr void __set_m_grabbedObjectRotOff(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_m_grabbedObjectRotOff() const;

 System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRGrabbable,int32_t> __declspec(property(get=__get_m_grabCandidates, put=__set_m_grabCandidates))  m_grabCandidates;

constexpr void __set_m_grabCandidates(System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRGrabbable,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRGrabbable,int32_t> __get_m_grabCandidates() const;

 bool __declspec(property(get=__get_m_operatingWithoutOVRCameraRig, put=__set_m_operatingWithoutOVRCameraRig))  m_operatingWithoutOVRCameraRig;

constexpr void __set_m_operatingWithoutOVRCameraRig(bool value) ;

constexpr bool __get_m_operatingWithoutOVRCameraRig() const;


// Properties

 GlobalNamespace::OVRGrabbable __declspec(property(get=get_grabbedObject))  grabbedObject;


// Methods

/// @brief Method get_grabbedObject addr 0x2621748 size 0x8 virtual false final false
 GlobalNamespace::OVRGrabbable get_grabbedObject() ;

/// @brief Method ForceRelease addr 0x2621688 size 0xb0 virtual false final false
 void ForceRelease(GlobalNamespace::OVRGrabbable grabbable) ;

/// @brief Method Awake addr 0x26219b8 size 0x144 virtual true final false
 void Awake() ;

/// @brief Method Start addr 0x2621afc size 0xe0 virtual true final false
 void Start() ;

/// @brief Method Update addr 0x2621d54 size 0x10 virtual true final false
 void Update() ;

/// @brief Method OnUpdatedAnchors addr 0x2621d64 size 0x224 virtual false final false
 void OnUpdatedAnchors() ;

/// @brief Method OnDestroy addr 0x2621fc8 size 0x78 virtual false final false
 void OnDestroy() ;

/// @brief Method OnTriggerEnter addr 0x2622040 size 0x128 virtual false final false
 void OnTriggerEnter(UnityEngine::Collider otherCollider) ;

/// @brief Method OnTriggerExit addr 0x2622168 size 0x15c virtual false final false
 void OnTriggerExit(UnityEngine::Collider otherCollider) ;

/// @brief Method CheckForGrabOrRelease addr 0x2621f88 size 0x40 virtual false final false
 void CheckForGrabOrRelease(float_t prevFlex) ;

/// @brief Method GrabBegin addr 0x26222c4 size 0x6b0 virtual true final false
 void GrabBegin() ;

/// @brief Method MoveGrabbedObject addr 0x2622974 size 0x234 virtual true final false
 void MoveGrabbedObject(UnityEngine::Vector3 pos, UnityEngine::Quaternion rot, bool forceTeleport) ;

/// @brief Method GrabEnd addr 0x2621750 size 0x268 virtual false final false
 void GrabEnd() ;

/// @brief Method GrabbableRelease addr 0x2622ba8 size 0x54 virtual false final false
 void GrabbableRelease(UnityEngine::Vector3 linearVelocity, UnityEngine::Vector3 angularVelocity) ;

/// @brief Method GrabVolumeEnable addr 0x2622bfc size 0xc0 virtual true final false
 void GrabVolumeEnable(bool enabled) ;

/// @brief Method OffhandGrabbed addr 0x2622cbc size 0xcc virtual true final false
 void OffhandGrabbed(GlobalNamespace::OVRGrabbable grabbable) ;

/// @brief Method SetPlayerIgnoreCollision addr 0x2621bdc size 0x178 virtual false final false
 void SetPlayerIgnoreCollision(UnityEngine::GameObject grabbable, bool ignore) ;

// Ctor Parameters []
explicit OVRGrabber() ;

/// @brief Method .ctor addr 0x2622d88 size 0x94 virtual false final false
 void _ctor() ;

/// @brief Method <Awake>b__23_0 addr 0x2622e1c size 0x4 virtual false final false
 void _Awake_b__23_0(GlobalNamespace::OVRCameraRig r) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRGrabber);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRGrabber, "", "OVRGrabber");
