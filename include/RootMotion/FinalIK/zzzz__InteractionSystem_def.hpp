#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace RootMotion::FinalIK {
class InteractionTrigger;
}
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace RootMotion::FinalIK {
class InteractionTarget;
}
namespace UnityEngine {
class Collider;
}
namespace RootMotion::FinalIK {
class InteractionEffector;
}
namespace UnityEngine {
struct LayerMask;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class FullBodyBipedIK;
}
namespace RootMotion::FinalIK {
class InteractionLookAt;
}
namespace RootMotion::FinalIK {
class InteractionObject;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__InteractionTrigger__Range;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__InteractionObject__InteractionEvent;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class InteractionSystem;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__InteractionSystem__InteractionDelegate;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate;
}
// Type: ::InteractionDelegate
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12546))
// CS Name: RootMotion.FinalIK.InteractionSystem::InteractionDelegate
class CORDL_TYPE RootMotion__FinalIK__InteractionSystem__InteractionDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~RootMotion__FinalIK__InteractionSystem__InteractionDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__InteractionSystem__InteractionDelegate", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__InteractionSystem__InteractionDelegate(RootMotion__FinalIK__InteractionSystem__InteractionDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__InteractionSystem__InteractionDelegate", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__InteractionSystem__InteractionDelegate(RootMotion__FinalIK__InteractionSystem__InteractionDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__InteractionSystem__InteractionDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr RootMotion__FinalIK__InteractionSystem__InteractionDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__InteractionSystem__InteractionDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__InteractionSystem__InteractionDelegate& operator=(RootMotion__FinalIK__InteractionSystem__InteractionDelegate&& o) noexcept = default;
  constexpr RootMotion__FinalIK__InteractionSystem__InteractionDelegate& operator=(RootMotion__FinalIK__InteractionSystem__InteractionDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit RootMotion__FinalIK__InteractionSystem__InteractionDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x11fd7f8 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x11ff064 size 0x14 virtual true final false
 void Invoke(RootMotion::FinalIK::FullBodyBipedEffector effectorType, RootMotion::FinalIK::InteractionObject interactionObject) ;

/// @brief Method BeginInvoke addr 0x11ff078 size 0x90 virtual true final false
 System::IAsyncResult BeginInvoke(RootMotion::FinalIK::FullBodyBipedEffector effectorType, RootMotion::FinalIK::InteractionObject interactionObject, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x11ff108 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::InteractionEventDelegate
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12547))
// CS Name: RootMotion.FinalIK.InteractionSystem::InteractionEventDelegate
class CORDL_TYPE RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate(RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate(RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate& operator=(RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate&& o) noexcept = default;
  constexpr RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate& operator=(RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x11ff114 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x11ff1d8 size 0x14 virtual true final false
 void Invoke(RootMotion::FinalIK::FullBodyBipedEffector effectorType, RootMotion::FinalIK::InteractionObject interactionObject, RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__InteractionEvent interactionEvent) ;

/// @brief Method BeginInvoke addr 0x11ff1ec size 0x98 virtual true final false
 System::IAsyncResult BeginInvoke(RootMotion::FinalIK::FullBodyBipedEffector effectorType, RootMotion::FinalIK::InteractionObject interactionObject, RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__InteractionEvent interactionEvent, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x11ff284 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::InteractionSystem
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12548))
// CS Name: RootMotion.FinalIK.InteractionSystem
class CORDL_TYPE InteractionSystem : public UnityEngine::MonoBehaviour {
public:
// Declarations
using InteractionEventDelegate = RootMotion::FinalIK::RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate;

using InteractionDelegate = RootMotion::FinalIK::RootMotion__FinalIK__InteractionSystem__InteractionDelegate;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf0};

virtual ~InteractionSystem() = default;

// Ctor Parameters [CppParam { name: "", ty: "InteractionSystem", modifiers: " const&", def_value: None }]
constexpr InteractionSystem(InteractionSystem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InteractionSystem", modifiers: "&&", def_value: None }]
constexpr InteractionSystem(InteractionSystem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InteractionSystem(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr InteractionSystem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InteractionSystem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InteractionSystem& operator=(InteractionSystem&& o) noexcept = default;
  constexpr InteractionSystem& operator=(InteractionSystem const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_targetTag, put=__set_targetTag))  targetTag;

constexpr void __set_targetTag(::StringW value) ;

constexpr ::StringW __get_targetTag() const;

 float_t __declspec(property(get=__get_fadeInTime, put=__set_fadeInTime))  fadeInTime;

constexpr void __set_fadeInTime(float_t value) ;

constexpr float_t __get_fadeInTime() const;

 float_t __declspec(property(get=__get_speed, put=__set_speed))  speed;

constexpr void __set_speed(float_t value) ;

constexpr float_t __get_speed() const;

 float_t __declspec(property(get=__get_resetToDefaultsSpeed, put=__set_resetToDefaultsSpeed))  resetToDefaultsSpeed;

constexpr void __set_resetToDefaultsSpeed(float_t value) ;

constexpr float_t __get_resetToDefaultsSpeed() const;

 UnityEngine::Collider __declspec(property(get=__get_characterCollider, put=__set_characterCollider))  characterCollider;

constexpr void __set_characterCollider(UnityEngine::Collider value) ;

constexpr UnityEngine::Collider __get_characterCollider() const;

 UnityEngine::Transform __declspec(property(get=__get_FPSCamera, put=__set_FPSCamera))  FPSCamera;

constexpr void __set_FPSCamera(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_FPSCamera() const;

 UnityEngine::LayerMask __declspec(property(get=__get_camRaycastLayers, put=__set_camRaycastLayers))  camRaycastLayers;

constexpr void __set_camRaycastLayers(UnityEngine::LayerMask value) ;

constexpr UnityEngine::LayerMask __get_camRaycastLayers() const;

 float_t __declspec(property(get=__get_camRaycastDistance, put=__set_camRaycastDistance))  camRaycastDistance;

constexpr void __set_camRaycastDistance(float_t value) ;

constexpr float_t __get_camRaycastDistance() const;

 System::Collections::Generic::List_1<RootMotion::FinalIK::InteractionTrigger> __declspec(property(get=__get__triggersInRange_k__BackingField, put=__set__triggersInRange_k__BackingField))  _triggersInRange_k__BackingField;

constexpr void __set__triggersInRange_k__BackingField(System::Collections::Generic::List_1<RootMotion::FinalIK::InteractionTrigger> value) ;

constexpr System::Collections::Generic::List_1<RootMotion::FinalIK::InteractionTrigger> __get__triggersInRange_k__BackingField() const;

 System::Collections::Generic::List_1<RootMotion::FinalIK::InteractionTrigger> __declspec(property(get=__get_inContact, put=__set_inContact))  inContact;

constexpr void __set_inContact(System::Collections::Generic::List_1<RootMotion::FinalIK::InteractionTrigger> value) ;

constexpr System::Collections::Generic::List_1<RootMotion::FinalIK::InteractionTrigger> __get_inContact() const;

 System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get_bestRangeIndexes, put=__set_bestRangeIndexes))  bestRangeIndexes;

constexpr void __set_bestRangeIndexes(System::Collections::Generic::List_1<int32_t> value) ;

constexpr System::Collections::Generic::List_1<int32_t> __get_bestRangeIndexes() const;

 RootMotion::FinalIK::RootMotion__FinalIK__InteractionSystem__InteractionDelegate __declspec(property(get=__get_OnInteractionStart, put=__set_OnInteractionStart))  OnInteractionStart;

constexpr void __set_OnInteractionStart(RootMotion::FinalIK::RootMotion__FinalIK__InteractionSystem__InteractionDelegate value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__InteractionSystem__InteractionDelegate __get_OnInteractionStart() const;

 RootMotion::FinalIK::RootMotion__FinalIK__InteractionSystem__InteractionDelegate __declspec(property(get=__get_OnInteractionPause, put=__set_OnInteractionPause))  OnInteractionPause;

constexpr void __set_OnInteractionPause(RootMotion::FinalIK::RootMotion__FinalIK__InteractionSystem__InteractionDelegate value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__InteractionSystem__InteractionDelegate __get_OnInteractionPause() const;

 RootMotion::FinalIK::RootMotion__FinalIK__InteractionSystem__InteractionDelegate __declspec(property(get=__get_OnInteractionPickUp, put=__set_OnInteractionPickUp))  OnInteractionPickUp;

constexpr void __set_OnInteractionPickUp(RootMotion::FinalIK::RootMotion__FinalIK__InteractionSystem__InteractionDelegate value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__InteractionSystem__InteractionDelegate __get_OnInteractionPickUp() const;

 RootMotion::FinalIK::RootMotion__FinalIK__InteractionSystem__InteractionDelegate __declspec(property(get=__get_OnInteractionResume, put=__set_OnInteractionResume))  OnInteractionResume;

constexpr void __set_OnInteractionResume(RootMotion::FinalIK::RootMotion__FinalIK__InteractionSystem__InteractionDelegate value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__InteractionSystem__InteractionDelegate __get_OnInteractionResume() const;

 RootMotion::FinalIK::RootMotion__FinalIK__InteractionSystem__InteractionDelegate __declspec(property(get=__get_OnInteractionStop, put=__set_OnInteractionStop))  OnInteractionStop;

constexpr void __set_OnInteractionStop(RootMotion::FinalIK::RootMotion__FinalIK__InteractionSystem__InteractionDelegate value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__InteractionSystem__InteractionDelegate __get_OnInteractionStop() const;

 RootMotion::FinalIK::RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate __declspec(property(get=__get_OnInteractionEvent, put=__set_OnInteractionEvent))  OnInteractionEvent;

constexpr void __set_OnInteractionEvent(RootMotion::FinalIK::RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate __get_OnInteractionEvent() const;

 UnityEngine::RaycastHit __declspec(property(get=__get_raycastHit, put=__set_raycastHit))  raycastHit;

constexpr void __set_raycastHit(UnityEngine::RaycastHit value) ;

constexpr UnityEngine::RaycastHit __get_raycastHit() const;

 RootMotion::FinalIK::FullBodyBipedIK __declspec(property(get=__get_fullBody, put=__set_fullBody))  fullBody;

constexpr void __set_fullBody(RootMotion::FinalIK::FullBodyBipedIK value) ;

constexpr RootMotion::FinalIK::FullBodyBipedIK __get_fullBody() const;

 RootMotion::FinalIK::InteractionLookAt __declspec(property(get=__get_lookAt, put=__set_lookAt))  lookAt;

constexpr void __set_lookAt(RootMotion::FinalIK::InteractionLookAt value) ;

constexpr RootMotion::FinalIK::InteractionLookAt __get_lookAt() const;

 ::ArrayW<RootMotion::FinalIK::InteractionEffector> __declspec(property(get=__get_interactionEffectors, put=__set_interactionEffectors))  interactionEffectors;

constexpr void __set_interactionEffectors(::ArrayW<RootMotion::FinalIK::InteractionEffector> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::InteractionEffector> __get_interactionEffectors() const;

 bool __declspec(property(get=__get_initiated, put=__set_initiated))  initiated;

constexpr void __set_initiated(bool value) ;

constexpr bool __get_initiated() const;

 UnityEngine::Collider __declspec(property(get=__get_lastCollider, put=__set_lastCollider))  lastCollider;

constexpr void __set_lastCollider(UnityEngine::Collider value) ;

constexpr UnityEngine::Collider __get_lastCollider() const;

 UnityEngine::Collider __declspec(property(get=__get_c, put=__set_c))  c;

constexpr void __set_c(UnityEngine::Collider value) ;

constexpr UnityEngine::Collider __get_c() const;


// Properties

 bool __declspec(property(get=get_inInteraction))  inInteraction;

 RootMotion::FinalIK::FullBodyBipedIK __declspec(property(get=get_ik, put=set_ik))  ik;

 System::Collections::Generic::List_1<RootMotion::FinalIK::InteractionTrigger> __declspec(property(get=get_triggersInRange, put=set_triggersInRange))  triggersInRange;


// Methods

/// @brief Method OpenUserManual addr 0x11fb618 size 0x44 virtual false final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x11fb65c size 0x44 virtual false final false
 void OpenScriptReference() ;

/// @brief Method OpenTutorial1 addr 0x11fb6a0 size 0x44 virtual false final false
 void OpenTutorial1() ;

/// @brief Method OpenTutorial2 addr 0x11fb6e4 size 0x44 virtual false final false
 void OpenTutorial2() ;

/// @brief Method OpenTutorial3 addr 0x11fb728 size 0x44 virtual false final false
 void OpenTutorial3() ;

/// @brief Method OpenTutorial4 addr 0x11fb76c size 0x44 virtual false final false
 void OpenTutorial4() ;

/// @brief Method SupportGroup addr 0x11fb7b0 size 0x44 virtual false final false
 void SupportGroup() ;

/// @brief Method ASThread addr 0x11fb7f4 size 0x44 virtual false final false
 void ASThread() ;

/// @brief Method get_inInteraction addr 0x11fb838 size 0x98 virtual false final false
 bool get_inInteraction() ;

/// @brief Method IsInInteraction addr 0x11fb9b0 size 0xb8 virtual false final false
 bool IsInInteraction(RootMotion::FinalIK::FullBodyBipedEffector effectorType) ;

/// @brief Method IsPaused addr 0x11fba68 size 0xb8 virtual false final false
 bool IsPaused(RootMotion::FinalIK::FullBodyBipedEffector effectorType) ;

/// @brief Method IsPaused addr 0x11fbb20 size 0x98 virtual false final false
 bool IsPaused() ;

/// @brief Method IsInSync addr 0x11fbbb8 size 0xe4 virtual false final false
 bool IsInSync() ;

/// @brief Method StartInteraction addr 0x11fbc9c size 0xf8 virtual false final false
 bool StartInteraction(RootMotion::FinalIK::FullBodyBipedEffector effectorType, RootMotion::FinalIK::InteractionObject interactionObject, bool interrupt) ;

/// @brief Method PauseInteraction addr 0x11fbd94 size 0x84 virtual false final false
 bool PauseInteraction(RootMotion::FinalIK::FullBodyBipedEffector effectorType) ;

/// @brief Method ResumeInteraction addr 0x11fbe18 size 0x84 virtual false final false
 bool ResumeInteraction(RootMotion::FinalIK::FullBodyBipedEffector effectorType) ;

/// @brief Method StopInteraction addr 0x11fbe9c size 0x84 virtual false final false
 bool StopInteraction(RootMotion::FinalIK::FullBodyBipedEffector effectorType) ;

/// @brief Method PauseAll addr 0x11fbf20 size 0x68 virtual false final false
 void PauseAll() ;

/// @brief Method ResumeAll addr 0x11fbf88 size 0x68 virtual false final false
 void ResumeAll() ;

/// @brief Method StopAll addr 0x11fbff0 size 0x5c virtual false final false
 void StopAll() ;

/// @brief Method GetInteractionObject addr 0x11fc04c size 0x80 virtual false final false
 RootMotion::FinalIK::InteractionObject GetInteractionObject(RootMotion::FinalIK::FullBodyBipedEffector effectorType) ;

/// @brief Method GetProgress addr 0x11fc0cc size 0xa8 virtual false final false
 float_t GetProgress(RootMotion::FinalIK::FullBodyBipedEffector effectorType) ;

/// @brief Method GetMinActiveProgress addr 0x11fc174 size 0xd0 virtual false final false
 float_t GetMinActiveProgress() ;

/// @brief Method TriggerInteraction addr 0x11fc244 size 0x17c virtual false final false
 bool TriggerInteraction(int32_t index, bool interrupt) ;

/// @brief Method TriggerInteraction addr 0x11fc4d4 size 0x1bc virtual false final false
 bool TriggerInteraction(int32_t index, bool interrupt, ByRef<RootMotion::FinalIK::InteractionObject> interactionObject) ;

/// @brief Method TriggerInteraction addr 0x11fc690 size 0x268 virtual false final false
 bool TriggerInteraction(int32_t index, bool interrupt, ByRef<RootMotion::FinalIK::InteractionTarget> interactionTarget) ;

/// @brief Method GetClosestInteractionRange addr 0x11fc8f8 size 0xe8 virtual false final false
 RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range GetClosestInteractionRange() ;

/// @brief Method GetClosestInteractionObjectInRange addr 0x11fcb84 size 0x38 virtual false final false
 RootMotion::FinalIK::InteractionObject GetClosestInteractionObjectInRange() ;

/// @brief Method GetClosestInteractionTargetInRange addr 0x11fcbbc size 0x60 virtual false final false
 RootMotion::FinalIK::InteractionTarget GetClosestInteractionTargetInRange() ;

/// @brief Method GetClosestInteractionObjectsInRange addr 0x11fcc1c size 0x108 virtual false final false
 ::ArrayW<RootMotion::FinalIK::InteractionObject> GetClosestInteractionObjectsInRange() ;

/// @brief Method GetClosestInteractionTargetsInRange addr 0x11fcd24 size 0x1e0 virtual false final false
 ::ArrayW<RootMotion::FinalIK::InteractionTarget> GetClosestInteractionTargetsInRange() ;

/// @brief Method TriggerEffectorsReady addr 0x11fcf04 size 0x274 virtual false final false
 bool TriggerEffectorsReady(int32_t index) ;

/// @brief Method GetTriggerRange addr 0x11fd178 size 0x120 virtual false final false
 RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range GetTriggerRange(int32_t index) ;

/// @brief Method GetClosestTriggerIndex addr 0x11fc9e0 size 0x1a4 virtual false final false
 int32_t GetClosestTriggerIndex() ;

/// @brief Method get_ik addr 0x11fd298 size 0x8 virtual false final false
 RootMotion::FinalIK::FullBodyBipedIK get_ik() ;

/// @brief Method set_ik addr 0x11fd2a0 size 0x8 virtual false final false
 void set_ik(RootMotion::FinalIK::FullBodyBipedIK value) ;

/// @brief Method get_triggersInRange addr 0x11fd2a8 size 0x8 virtual false final false
 System::Collections::Generic::List_1<RootMotion::FinalIK::InteractionTrigger> get_triggersInRange() ;

/// @brief Method set_triggersInRange addr 0x11fd2b0 size 0x8 virtual false final false
 void set_triggersInRange(System::Collections::Generic::List_1<RootMotion::FinalIK::InteractionTrigger> value) ;

/// @brief Method Start addr 0x11fd2b8 size 0x540 virtual false final false
 void Start() ;

/// @brief Method InteractionPause addr 0x11fdb04 size 0x20 virtual false final false
 void InteractionPause(RootMotion::FinalIK::FullBodyBipedEffector effector, RootMotion::FinalIK::InteractionObject interactionObject) ;

/// @brief Method InteractionResume addr 0x11fdb24 size 0x1c virtual false final false
 void InteractionResume(RootMotion::FinalIK::FullBodyBipedEffector effector, RootMotion::FinalIK::InteractionObject interactionObject) ;

/// @brief Method InteractionStop addr 0x11fdb40 size 0x1c virtual false final false
 void InteractionStop(RootMotion::FinalIK::FullBodyBipedEffector effector, RootMotion::FinalIK::InteractionObject interactionObject) ;

/// @brief Method LookAtInteraction addr 0x11fdb5c size 0x54 virtual false final false
 void LookAtInteraction(RootMotion::FinalIK::FullBodyBipedEffector effector, RootMotion::FinalIK::InteractionObject interactionObject) ;

/// @brief Method OnTriggerEnter addr 0x11fdbb0 size 0x16c virtual false final false
 void OnTriggerEnter(UnityEngine::Collider c) ;

/// @brief Method OnTriggerExit addr 0x11fdd1c size 0xfc virtual false final false
 void OnTriggerExit(UnityEngine::Collider c) ;

/// @brief Method ContactIsInRange addr 0x11fde18 size 0x1a8 virtual false final false
 bool ContactIsInRange(int32_t index, ByRef<int32_t> bestRangeIndex) ;

/// @brief Method OnDrawGizmosSelected addr 0x11fe174 size 0xe4 virtual false final false
 void OnDrawGizmosSelected() ;

/// @brief Method Update addr 0x11fe258 size 0x2e4 virtual false final false
 void Update() ;

/// @brief Method Raycasting addr 0x11fe53c size 0x130 virtual false final false
 void Raycasting() ;

/// @brief Method UpdateTriggerEventBroadcasting addr 0x11fd8bc size 0x248 virtual false final false
 void UpdateTriggerEventBroadcasting() ;

/// @brief Method UpdateEffectors addr 0x11fe66c size 0x10c virtual false final false
 void UpdateEffectors() ;

/// @brief Method OnPreFBBIK addr 0x11fe778 size 0x88 virtual false final false
 void OnPreFBBIK() ;

/// @brief Method OnPostFBBIK addr 0x11fe800 size 0xc0 virtual false final false
 void OnPostFBBIK() ;

/// @brief Method OnFixTransforms addr 0x11fe8c0 size 0x18 virtual false final false
 void OnFixTransforms() ;

/// @brief Method OnDestroy addr 0x11fe8d8 size 0x3e8 virtual false final false
 void OnDestroy() ;

/// @brief Method IsValid addr 0x11fb8d0 size 0xe0 virtual false final false
 bool IsValid(bool log) ;

/// @brief Method TriggerIndexIsValid addr 0x11fc3c0 size 0x114 virtual false final false
 bool TriggerIndexIsValid(int32_t index) ;

// Ctor Parameters []
explicit InteractionSystem() ;

/// @brief Method .ctor addr 0x11fecc0 size 0x3a4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::InteractionSystem);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionSystem, "RootMotion.FinalIK", "InteractionSystem");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__InteractionSystem__InteractionDelegate);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__InteractionSystem__InteractionDelegate, "RootMotion.FinalIK", "InteractionSystem/InteractionDelegate");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate, "RootMotion.FinalIK", "InteractionSystem/InteractionEventDelegate");
