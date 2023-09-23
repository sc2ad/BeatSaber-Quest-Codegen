#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace RootMotion::FinalIK {
class LookAtIK;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class LookAtController;
}
// Type: RootMotion.FinalIK::LookAtController
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12595))
// CS Name: RootMotion.FinalIK.LookAtController
class CORDL_TYPE LookAtController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~LookAtController() = default;

// Ctor Parameters [CppParam { name: "", ty: "LookAtController", modifiers: " const&", def_value: None }]
constexpr LookAtController(LookAtController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LookAtController", modifiers: "&&", def_value: None }]
constexpr LookAtController(LookAtController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LookAtController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LookAtController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LookAtController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LookAtController& operator=(LookAtController&& o) noexcept = default;
  constexpr LookAtController& operator=(LookAtController const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::LookAtIK __declspec(property(get=__get_ik, put=__set_ik))  ik;

constexpr void __set_ik(RootMotion::FinalIK::LookAtIK value) ;

constexpr RootMotion::FinalIK::LookAtIK __get_ik() const;

 UnityEngine::Transform __declspec(property(get=__get_target, put=__set_target))  target;

constexpr void __set_target(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_target() const;

 float_t __declspec(property(get=__get_weight, put=__set_weight))  weight;

constexpr void __set_weight(float_t value) ;

constexpr float_t __get_weight() const;

 UnityEngine::Vector3 __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_offset() const;

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

 float_t __declspec(property(get=__get_maxRootAngle, put=__set_maxRootAngle))  maxRootAngle;

constexpr void __set_maxRootAngle(float_t value) ;

constexpr float_t __get_maxRootAngle() const;

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


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_pivot))  pivot;


// Methods

/// @brief Method Start addr 0x1209f28 size 0x68 virtual false final false
 void Start() ;

/// @brief Method LateUpdate addr 0x120a014 size 0x4e8 virtual false final false
 void LateUpdate() ;

/// @brief Method get_pivot addr 0x1209f90 size 0x84 virtual false final false
 UnityEngine::Vector3 get_pivot() ;

/// @brief Method ApplyMinDistance addr 0x120a4fc size 0x184 virtual false final false
 void ApplyMinDistance() ;

/// @brief Method RootRotation addr 0x120a680 size 0x24c virtual false final false
 void RootRotation() ;

// Ctor Parameters []
explicit LookAtController() ;

/// @brief Method .ctor addr 0x120a8cc size 0x98 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::LookAtController);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::LookAtController, "RootMotion.FinalIK", "LookAtController");
