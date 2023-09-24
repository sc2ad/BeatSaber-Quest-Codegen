#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__AimController___TurnToTarget_d__33;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections {
class IEnumerator;
}
namespace RootMotion::FinalIK {
class AimIK;
}
namespace UnityEngine {
class Transform;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class AimController;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__AimController___TurnToTarget_d__33;
}
// Type: ::<TurnToTarget>d__33
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12571))
// CS Name: RootMotion.FinalIK.AimController::<TurnToTarget>d__33
class CORDL_TYPE RootMotion__FinalIK__AimController___TurnToTarget_d__33 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RootMotion__FinalIK__AimController___TurnToTarget_d__33() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__AimController___TurnToTarget_d__33", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__AimController___TurnToTarget_d__33(RootMotion__FinalIK__AimController___TurnToTarget_d__33 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__AimController___TurnToTarget_d__33", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__AimController___TurnToTarget_d__33(RootMotion__FinalIK__AimController___TurnToTarget_d__33&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__AimController___TurnToTarget_d__33(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__AimController___TurnToTarget_d__33& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__AimController___TurnToTarget_d__33& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__AimController___TurnToTarget_d__33& operator=(RootMotion__FinalIK__AimController___TurnToTarget_d__33&& o) noexcept = default;
  constexpr RootMotion__FinalIK__AimController___TurnToTarget_d__33& operator=(RootMotion__FinalIK__AimController___TurnToTarget_d__33 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 RootMotion::FinalIK::AimController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(RootMotion::FinalIK::AimController value) ;

constexpr RootMotion::FinalIK::AimController __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static RootMotion::FinalIK::RootMotion__FinalIK__AimController___TurnToTarget_d__33 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1206a44 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1206b50 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1206b54 size 0xe4 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1206c38 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1206c40 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1206c80 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::AimController
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12572))
// CS Name: RootMotion.FinalIK.AimController
class CORDL_TYPE AimController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _TurnToTarget_d__33 = RootMotion::FinalIK::RootMotion__FinalIK__AimController___TurnToTarget_d__33;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~AimController() = default;

// Ctor Parameters [CppParam { name: "", ty: "AimController", modifiers: " const&", def_value: None }]
constexpr AimController(AimController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AimController", modifiers: "&&", def_value: None }]
constexpr AimController(AimController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AimController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AimController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AimController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AimController& operator=(AimController&& o) noexcept = default;
  constexpr AimController& operator=(AimController const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::AimIK __declspec(property(get=__get_ik, put=__set_ik))  ik;

constexpr void __set_ik(RootMotion::FinalIK::AimIK value) ;

constexpr RootMotion::FinalIK::AimIK __get_ik() const;

 float_t __declspec(property(get=__get_weight, put=__set_weight))  weight;

constexpr void __set_weight(float_t value) ;

constexpr float_t __get_weight() const;

 UnityEngine::Transform __declspec(property(get=__get_target, put=__set_target))  target;

constexpr void __set_target(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_target() const;

 float_t __declspec(property(get=__get_targetSwitchSmoothTime, put=__set_targetSwitchSmoothTime))  targetSwitchSmoothTime;

constexpr void __set_targetSwitchSmoothTime(float_t value) ;

constexpr float_t __get_targetSwitchSmoothTime() const;

 float_t __declspec(property(get=__get_weightSmoothTime, put=__set_weightSmoothTime))  weightSmoothTime;

constexpr void __set_weightSmoothTime(float_t value) ;

constexpr float_t __get_weightSmoothTime() const;

 bool __declspec(property(get=__get_smoothTurnTowardsTarget, put=__set_smoothTurnTowardsTarget))  smoothTurnTowardsTarget;

constexpr void __set_smoothTurnTowardsTarget(bool value) ;

constexpr bool __get_smoothTurnTowardsTarget() const;

 float_t __declspec(property(get=__get_maxRadiansDelta, put=__set_maxRadiansDelta))  maxRadiansDelta;

constexpr void __set_maxRadiansDelta(float_t value) ;

constexpr float_t __get_maxRadiansDelta() const;

 float_t __declspec(property(get=__get_maxMagnitudeDelta, put=__set_maxMagnitudeDelta))  maxMagnitudeDelta;

constexpr void __set_maxMagnitudeDelta(float_t value) ;

constexpr float_t __get_maxMagnitudeDelta() const;

 float_t __declspec(property(get=__get_slerpSpeed, put=__set_slerpSpeed))  slerpSpeed;

constexpr void __set_slerpSpeed(float_t value) ;

constexpr float_t __get_slerpSpeed() const;

 UnityEngine::Vector3 __declspec(property(get=__get_pivotOffsetFromRoot, put=__set_pivotOffsetFromRoot))  pivotOffsetFromRoot;

constexpr void __set_pivotOffsetFromRoot(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_pivotOffsetFromRoot() const;

 float_t __declspec(property(get=__get_minDistance, put=__set_minDistance))  minDistance;

constexpr void __set_minDistance(float_t value) ;

constexpr float_t __get_minDistance() const;

 UnityEngine::Vector3 __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_offset() const;

 float_t __declspec(property(get=__get_maxRootAngle, put=__set_maxRootAngle))  maxRootAngle;

constexpr void __set_maxRootAngle(float_t value) ;

constexpr float_t __get_maxRootAngle() const;

 bool __declspec(property(get=__get_turnToTarget, put=__set_turnToTarget))  turnToTarget;

constexpr void __set_turnToTarget(bool value) ;

constexpr bool __get_turnToTarget() const;

 float_t __declspec(property(get=__get_turnToTargetTime, put=__set_turnToTargetTime))  turnToTargetTime;

constexpr void __set_turnToTargetTime(float_t value) ;

constexpr float_t __get_turnToTargetTime() const;

 bool __declspec(property(get=__get_useAnimatedAimDirection, put=__set_useAnimatedAimDirection))  useAnimatedAimDirection;

constexpr void __set_useAnimatedAimDirection(bool value) ;

constexpr bool __get_useAnimatedAimDirection() const;

 UnityEngine::Vector3 __declspec(property(get=__get_animatedAimDirection, put=__set_animatedAimDirection))  animatedAimDirection;

constexpr void __set_animatedAimDirection(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_animatedAimDirection() const;

 UnityEngine::Transform __declspec(property(get=__get_lastTarget, put=__set_lastTarget))  lastTarget;

constexpr void __set_lastTarget(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_lastTarget() const;

 float_t __declspec(property(get=__get_switchWeight, put=__set_switchWeight))  switchWeight;

constexpr void __set_switchWeight(float_t value) ;

constexpr float_t __get_switchWeight() const;

 float_t __declspec(property(get=__get_switchWeightV, put=__set_switchWeightV))  switchWeightV;

constexpr void __set_switchWeightV(float_t value) ;

constexpr float_t __get_switchWeightV() const;

 float_t __declspec(property(get=__get_weightV, put=__set_weightV))  weightV;

constexpr void __set_weightV(float_t value) ;

constexpr float_t __get_weightV() const;

 UnityEngine::Vector3 __declspec(property(get=__get_lastPosition, put=__set_lastPosition))  lastPosition;

constexpr void __set_lastPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_lastPosition() const;

 UnityEngine::Vector3 __declspec(property(get=__get_dir, put=__set_dir))  dir;

constexpr void __set_dir(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_dir() const;

 bool __declspec(property(get=__get_lastSmoothTowardsTarget, put=__set_lastSmoothTowardsTarget))  lastSmoothTowardsTarget;

constexpr void __set_lastSmoothTowardsTarget(bool value) ;

constexpr bool __get_lastSmoothTowardsTarget() const;

 bool __declspec(property(get=__get_turningToTarget, put=__set_turningToTarget))  turningToTarget;

constexpr void __set_turningToTarget(bool value) ;

constexpr bool __get_turningToTarget() const;

 float_t __declspec(property(get=__get_turnToTargetMlp, put=__set_turnToTargetMlp))  turnToTargetMlp;

constexpr void __set_turnToTargetMlp(float_t value) ;

constexpr float_t __get_turnToTargetMlp() const;

 float_t __declspec(property(get=__get_turnToTargetMlpV, put=__set_turnToTargetMlpV))  turnToTargetMlpV;

constexpr void __set_turnToTargetMlpV(float_t value) ;

constexpr float_t __get_turnToTargetMlpV() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_pivot))  pivot;


// Methods

/// @brief Method Start addr 0x1205f88 size 0x7c virtual false final false
 void Start() ;

/// @brief Method LateUpdate addr 0x1206088 size 0x52c virtual false final false
 void LateUpdate() ;

/// @brief Method get_pivot addr 0x1206004 size 0x84 virtual false final false
 UnityEngine::Vector3 get_pivot() ;

/// @brief Method ApplyMinDistance addr 0x12065b4 size 0x184 virtual false final false
 void ApplyMinDistance() ;

/// @brief Method RootRotation addr 0x1206738 size 0x2a4 virtual false final false
 void RootRotation() ;

/// @brief Method TurnToTarget addr 0x12069dc size 0x68 virtual false final false
 System::Collections::IEnumerator TurnToTarget() ;

static RootMotion::FinalIK::AimController New_ctor() ;

/// @brief Method .ctor addr 0x1206a6c size 0xe4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::AimController);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::AimController, "RootMotion.FinalIK", "AimController");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__AimController___TurnToTarget_d__33);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__AimController___TurnToTarget_d__33, "RootMotion.FinalIK", "AimController/<TurnToTarget>d__33");
