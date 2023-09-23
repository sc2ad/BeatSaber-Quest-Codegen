#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
}
namespace RootMotion::FinalIK {
class Poser;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class InteractionTarget;
}
namespace UnityEngine {
class Transform;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace RootMotion::FinalIK {
class IKEffector;
}
namespace RootMotion::FinalIK {
class InteractionSystem;
}
namespace RootMotion::FinalIK {
class InteractionObject;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class InteractionEffector;
}
// Type: RootMotion.FinalIK::InteractionEffector
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12537))
// CS Name: RootMotion.FinalIK.InteractionEffector
class CORDL_TYPE InteractionEffector : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~InteractionEffector() = default;

// Ctor Parameters [CppParam { name: "", ty: "InteractionEffector", modifiers: " const&", def_value: None }]
constexpr InteractionEffector(InteractionEffector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InteractionEffector", modifiers: "&&", def_value: None }]
constexpr InteractionEffector(InteractionEffector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InteractionEffector(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InteractionEffector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InteractionEffector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InteractionEffector& operator=(InteractionEffector&& o) noexcept = default;
  constexpr InteractionEffector& operator=(InteractionEffector const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::FullBodyBipedEffector __declspec(property(get=__get__effectorType_k__BackingField, put=__set__effectorType_k__BackingField))  _effectorType_k__BackingField;

constexpr void __set__effectorType_k__BackingField(RootMotion::FinalIK::FullBodyBipedEffector value) ;

constexpr RootMotion::FinalIK::FullBodyBipedEffector __get__effectorType_k__BackingField() const;

 bool __declspec(property(get=__get__isPaused_k__BackingField, put=__set__isPaused_k__BackingField))  _isPaused_k__BackingField;

constexpr void __set__isPaused_k__BackingField(bool value) ;

constexpr bool __get__isPaused_k__BackingField() const;

 RootMotion::FinalIK::InteractionObject __declspec(property(get=__get__interactionObject_k__BackingField, put=__set__interactionObject_k__BackingField))  _interactionObject_k__BackingField;

constexpr void __set__interactionObject_k__BackingField(RootMotion::FinalIK::InteractionObject value) ;

constexpr RootMotion::FinalIK::InteractionObject __get__interactionObject_k__BackingField() const;

 RootMotion::FinalIK::Poser __declspec(property(get=__get_poser, put=__set_poser))  poser;

constexpr void __set_poser(RootMotion::FinalIK::Poser value) ;

constexpr RootMotion::FinalIK::Poser __get_poser() const;

 RootMotion::FinalIK::IKEffector __declspec(property(get=__get_effector, put=__set_effector))  effector;

constexpr void __set_effector(RootMotion::FinalIK::IKEffector value) ;

constexpr RootMotion::FinalIK::IKEffector __get_effector() const;

 float_t __declspec(property(get=__get_timer, put=__set_timer))  timer;

constexpr void __set_timer(float_t value) ;

constexpr float_t __get_timer() const;

 float_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(float_t value) ;

constexpr float_t __get_length() const;

 float_t __declspec(property(get=__get_weight, put=__set_weight))  weight;

constexpr void __set_weight(float_t value) ;

constexpr float_t __get_weight() const;

 float_t __declspec(property(get=__get_fadeInSpeed, put=__set_fadeInSpeed))  fadeInSpeed;

constexpr void __set_fadeInSpeed(float_t value) ;

constexpr float_t __get_fadeInSpeed() const;

 float_t __declspec(property(get=__get_defaultPositionWeight, put=__set_defaultPositionWeight))  defaultPositionWeight;

constexpr void __set_defaultPositionWeight(float_t value) ;

constexpr float_t __get_defaultPositionWeight() const;

 float_t __declspec(property(get=__get_defaultRotationWeight, put=__set_defaultRotationWeight))  defaultRotationWeight;

constexpr void __set_defaultRotationWeight(float_t value) ;

constexpr float_t __get_defaultRotationWeight() const;

 float_t __declspec(property(get=__get_defaultPull, put=__set_defaultPull))  defaultPull;

constexpr void __set_defaultPull(float_t value) ;

constexpr float_t __get_defaultPull() const;

 float_t __declspec(property(get=__get_defaultReach, put=__set_defaultReach))  defaultReach;

constexpr void __set_defaultReach(float_t value) ;

constexpr float_t __get_defaultReach() const;

 float_t __declspec(property(get=__get_defaultPush, put=__set_defaultPush))  defaultPush;

constexpr void __set_defaultPush(float_t value) ;

constexpr float_t __get_defaultPush() const;

 float_t __declspec(property(get=__get_defaultPushParent, put=__set_defaultPushParent))  defaultPushParent;

constexpr void __set_defaultPushParent(float_t value) ;

constexpr float_t __get_defaultPushParent() const;

 float_t __declspec(property(get=__get_defaultBendGoalWeight, put=__set_defaultBendGoalWeight))  defaultBendGoalWeight;

constexpr void __set_defaultBendGoalWeight(float_t value) ;

constexpr float_t __get_defaultBendGoalWeight() const;

 float_t __declspec(property(get=__get_resetTimer, put=__set_resetTimer))  resetTimer;

constexpr void __set_resetTimer(float_t value) ;

constexpr float_t __get_resetTimer() const;

 bool __declspec(property(get=__get_positionWeightUsed, put=__set_positionWeightUsed))  positionWeightUsed;

constexpr void __set_positionWeightUsed(bool value) ;

constexpr bool __get_positionWeightUsed() const;

 bool __declspec(property(get=__get_rotationWeightUsed, put=__set_rotationWeightUsed))  rotationWeightUsed;

constexpr void __set_rotationWeightUsed(bool value) ;

constexpr bool __get_rotationWeightUsed() const;

 bool __declspec(property(get=__get_pullUsed, put=__set_pullUsed))  pullUsed;

constexpr void __set_pullUsed(bool value) ;

constexpr bool __get_pullUsed() const;

 bool __declspec(property(get=__get_reachUsed, put=__set_reachUsed))  reachUsed;

constexpr void __set_reachUsed(bool value) ;

constexpr bool __get_reachUsed() const;

 bool __declspec(property(get=__get_pushUsed, put=__set_pushUsed))  pushUsed;

constexpr void __set_pushUsed(bool value) ;

constexpr bool __get_pushUsed() const;

 bool __declspec(property(get=__get_pushParentUsed, put=__set_pushParentUsed))  pushParentUsed;

constexpr void __set_pushParentUsed(bool value) ;

constexpr bool __get_pushParentUsed() const;

 bool __declspec(property(get=__get_bendGoalWeightUsed, put=__set_bendGoalWeightUsed))  bendGoalWeightUsed;

constexpr void __set_bendGoalWeightUsed(bool value) ;

constexpr bool __get_bendGoalWeightUsed() const;

 bool __declspec(property(get=__get_pickedUp, put=__set_pickedUp))  pickedUp;

constexpr void __set_pickedUp(bool value) ;

constexpr bool __get_pickedUp() const;

 bool __declspec(property(get=__get_defaults, put=__set_defaults))  defaults;

constexpr void __set_defaults(bool value) ;

constexpr bool __get_defaults() const;

 bool __declspec(property(get=__get_pickUpOnPostFBBIK, put=__set_pickUpOnPostFBBIK))  pickUpOnPostFBBIK;

constexpr void __set_pickUpOnPostFBBIK(bool value) ;

constexpr bool __get_pickUpOnPostFBBIK() const;

 UnityEngine::Vector3 __declspec(property(get=__get_pickUpPosition, put=__set_pickUpPosition))  pickUpPosition;

constexpr void __set_pickUpPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_pickUpPosition() const;

 UnityEngine::Vector3 __declspec(property(get=__get_pausePositionRelative, put=__set_pausePositionRelative))  pausePositionRelative;

constexpr void __set_pausePositionRelative(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_pausePositionRelative() const;

 UnityEngine::Quaternion __declspec(property(get=__get_pickUpRotation, put=__set_pickUpRotation))  pickUpRotation;

constexpr void __set_pickUpRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_pickUpRotation() const;

 UnityEngine::Quaternion __declspec(property(get=__get_pauseRotationRelative, put=__set_pauseRotationRelative))  pauseRotationRelative;

constexpr void __set_pauseRotationRelative(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_pauseRotationRelative() const;

 RootMotion::FinalIK::InteractionTarget __declspec(property(get=__get_interactionTarget, put=__set_interactionTarget))  interactionTarget;

constexpr void __set_interactionTarget(RootMotion::FinalIK::InteractionTarget value) ;

constexpr RootMotion::FinalIK::InteractionTarget __get_interactionTarget() const;

 UnityEngine::Transform __declspec(property(get=__get_target, put=__set_target))  target;

constexpr void __set_target(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_target() const;

 System::Collections::Generic::List_1<bool> __declspec(property(get=__get_triggered, put=__set_triggered))  triggered;

constexpr void __set_triggered(System::Collections::Generic::List_1<bool> value) ;

constexpr System::Collections::Generic::List_1<bool> __get_triggered() const;

 RootMotion::FinalIK::InteractionSystem __declspec(property(get=__get_interactionSystem, put=__set_interactionSystem))  interactionSystem;

constexpr void __set_interactionSystem(RootMotion::FinalIK::InteractionSystem value) ;

constexpr RootMotion::FinalIK::InteractionSystem __get_interactionSystem() const;

 bool __declspec(property(get=__get_started, put=__set_started))  started;

constexpr void __set_started(bool value) ;

constexpr bool __get_started() const;


// Properties

 RootMotion::FinalIK::FullBodyBipedEffector __declspec(property(get=get_effectorType, put=set_effectorType))  effectorType;

 bool __declspec(property(get=get_isPaused, put=set_isPaused))  isPaused;

 RootMotion::FinalIK::InteractionObject __declspec(property(get=get_interactionObject, put=set_interactionObject))  interactionObject;

 bool __declspec(property(get=get_inInteraction))  inInteraction;

 float_t __declspec(property(get=get_progress))  progress;


// Methods

/// @brief Method get_effectorType addr 0x11f764c size 0x8 virtual false final false
 RootMotion::FinalIK::FullBodyBipedEffector get_effectorType() ;

/// @brief Method set_effectorType addr 0x11f7654 size 0x8 virtual false final false
 void set_effectorType(RootMotion::FinalIK::FullBodyBipedEffector value) ;

/// @brief Method get_isPaused addr 0x11f765c size 0x8 virtual false final false
 bool get_isPaused() ;

/// @brief Method set_isPaused addr 0x11f7664 size 0xc virtual false final false
 void set_isPaused(bool value) ;

/// @brief Method get_interactionObject addr 0x11f7670 size 0x8 virtual false final false
 RootMotion::FinalIK::InteractionObject get_interactionObject() ;

/// @brief Method set_interactionObject addr 0x11f7678 size 0x8 virtual false final false
 void set_interactionObject(RootMotion::FinalIK::InteractionObject value) ;

/// @brief Method get_inInteraction addr 0x11f7680 size 0x60 virtual false final false
 bool get_inInteraction() ;

// Ctor Parameters [CppParam { name: "effectorType", ty: "RootMotion::FinalIK::FullBodyBipedEffector", modifiers: "", def_value: None }]
explicit InteractionEffector(RootMotion::FinalIK::FullBodyBipedEffector effectorType) ;

/// @brief Method .ctor addr 0x11f76e0 size 0x90 virtual false final false
 void _ctor(RootMotion::FinalIK::FullBodyBipedEffector effectorType) ;

/// @brief Method Initiate addr 0x11f7770 size 0x94 virtual false final false
 void Initiate(RootMotion::FinalIK::InteractionSystem interactionSystem) ;

/// @brief Method StoreDefaults addr 0x11f7804 size 0x16c virtual false final false
 void StoreDefaults() ;

/// @brief Method ResetToDefaults addr 0x11f7970 size 0x3dc virtual false final false
 bool ResetToDefaults(float_t speed) ;

/// @brief Method Pause addr 0x11f7d4c size 0x120 virtual false final false
 bool Pause() ;

/// @brief Method Resume addr 0x11f7e6c size 0x54 virtual false final false
 bool Resume() ;

/// @brief Method Start addr 0x11f7ec0 size 0x48c virtual false final false
 bool Start(RootMotion::FinalIK::InteractionObject interactionObject, ::StringW tag, float_t fadeInTime, bool interrupt) ;

/// @brief Method Update addr 0x11f89c8 size 0x640 virtual false final false
 void Update(UnityEngine::Transform root, float_t speed) ;

/// @brief Method get_progress addr 0x11f9b9c size 0x30 virtual false final false
 float_t get_progress() ;

/// @brief Method TriggerUntriggeredEvents addr 0x11f9410 size 0x220 virtual false final false
 void TriggerUntriggeredEvents(bool checkTime, ByRef<bool> pickUp, ByRef<bool> pause) ;

/// @brief Method PickUp addr 0x11f9630 size 0x218 virtual false final false
 void PickUp(UnityEngine::Transform root) ;

/// @brief Method Stop addr 0x11f9a54 size 0x148 virtual false final false
 bool Stop() ;

/// @brief Method OnPostFBBIK addr 0x11f9d9c size 0x23c virtual false final false
 void OnPostFBBIK() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::InteractionEffector);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionEffector, "RootMotion.FinalIK", "InteractionEffector");
