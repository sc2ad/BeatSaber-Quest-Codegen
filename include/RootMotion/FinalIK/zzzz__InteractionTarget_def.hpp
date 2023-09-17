#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace {
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
struct ______RootMotion__FinalIK__InteractionObject__WeightCurve__Type;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class InteractionTarget;
}
namespace RootMotion::FinalIK {
class ____RootMotion__FinalIK__InteractionTarget__Multiplier;
}
// Type: ::Multiplier
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12549))
// CS Name: RootMotion.FinalIK.InteractionTarget::Multiplier
class CORDL_TYPE ____RootMotion__FinalIK__InteractionTarget__Multiplier : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____RootMotion__FinalIK__InteractionTarget__Multiplier() = default;

// Ctor Parameters [CppParam { name: "", ty: "____RootMotion__FinalIK__InteractionTarget__Multiplier", modifiers: " const&", def_value: None }]
constexpr ____RootMotion__FinalIK__InteractionTarget__Multiplier(____RootMotion__FinalIK__InteractionTarget__Multiplier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____RootMotion__FinalIK__InteractionTarget__Multiplier", modifiers: "&&", def_value: None }]
constexpr ____RootMotion__FinalIK__InteractionTarget__Multiplier(____RootMotion__FinalIK__InteractionTarget__Multiplier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____RootMotion__FinalIK__InteractionTarget__Multiplier(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____RootMotion__FinalIK__InteractionTarget__Multiplier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____RootMotion__FinalIK__InteractionTarget__Multiplier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____RootMotion__FinalIK__InteractionTarget__Multiplier& operator=(____RootMotion__FinalIK__InteractionTarget__Multiplier&& o) noexcept = default;
  constexpr ____RootMotion__FinalIK__InteractionTarget__Multiplier& operator=(____RootMotion__FinalIK__InteractionTarget__Multiplier const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type __declspec(property(get=__get_curve, put=__set_curve))  curve;

constexpr void __set_curve(::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type value) ;

constexpr ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type __get_curve() const;

 float_t __declspec(property(get=__get_multiplier, put=__set_multiplier))  multiplier;

constexpr void __set_multiplier(float_t value) ;

constexpr float_t __get_multiplier() const;


// Methods

// Ctor Parameters []
explicit ____RootMotion__FinalIK__InteractionTarget__Multiplier() ;

/// @brief Method .ctor addr 0x11ff520 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::InteractionTarget
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12550))
// CS Name: RootMotion.FinalIK.InteractionTarget
class CORDL_TYPE InteractionTarget : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Multiplier = ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionTarget__Multiplier;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~InteractionTarget() = default;

// Ctor Parameters [CppParam { name: "", ty: "InteractionTarget", modifiers: " const&", def_value: None }]
constexpr InteractionTarget(InteractionTarget const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InteractionTarget", modifiers: "&&", def_value: None }]
constexpr InteractionTarget(InteractionTarget&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InteractionTarget(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr InteractionTarget& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InteractionTarget& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InteractionTarget& operator=(InteractionTarget&& o) noexcept = default;
  constexpr InteractionTarget& operator=(InteractionTarget const& o) noexcept = default;
                


// Fields

 ::RootMotion::FinalIK::FullBodyBipedEffector __declspec(property(get=__get_effectorType, put=__set_effectorType))  effectorType;

constexpr void __set_effectorType(::RootMotion::FinalIK::FullBodyBipedEffector value) ;

constexpr ::RootMotion::FinalIK::FullBodyBipedEffector __get_effectorType() const;

 ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionTarget__Multiplier> __declspec(property(get=__get_multipliers, put=__set_multipliers))  multipliers;

constexpr void __set_multipliers(::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionTarget__Multiplier> value) ;

constexpr ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionTarget__Multiplier> __get_multipliers() const;

 float_t __declspec(property(get=__get_interactionSpeedMlp, put=__set_interactionSpeedMlp))  interactionSpeedMlp;

constexpr void __set_interactionSpeedMlp(float_t value) ;

constexpr float_t __get_interactionSpeedMlp() const;

 ::UnityEngine::Transform __declspec(property(get=__get_pivot, put=__set_pivot))  pivot;

constexpr void __set_pivot(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_pivot() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_twistAxis, put=__set_twistAxis))  twistAxis;

constexpr void __set_twistAxis(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_twistAxis() const;

 float_t __declspec(property(get=__get_twistWeight, put=__set_twistWeight))  twistWeight;

constexpr void __set_twistWeight(float_t value) ;

constexpr float_t __get_twistWeight() const;

 float_t __declspec(property(get=__get_swingWeight, put=__set_swingWeight))  swingWeight;

constexpr void __set_swingWeight(float_t value) ;

constexpr float_t __get_swingWeight() const;

 bool __declspec(property(get=__get_rotateOnce, put=__set_rotateOnce))  rotateOnce;

constexpr void __set_rotateOnce(bool value) ;

constexpr bool __get_rotateOnce() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_defaultLocalRotation, put=__set_defaultLocalRotation))  defaultLocalRotation;

constexpr void __set_defaultLocalRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_defaultLocalRotation() const;

 ::UnityEngine::Transform __declspec(property(get=__get_lastPivot, put=__set_lastPivot))  lastPivot;

constexpr void __set_lastPivot(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_lastPivot() const;


// Methods

/// @brief Method OpenUserManual addr 0x11ff290 size 0x44 virtual false final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x11ff2d4 size 0x44 virtual false final false
 void OpenScriptReference() ;

/// @brief Method OpenTutorial1 addr 0x11ff318 size 0x44 virtual false final false
 void OpenTutorial1() ;

/// @brief Method OpenTutorial2 addr 0x11ff35c size 0x44 virtual false final false
 void OpenTutorial2() ;

/// @brief Method OpenTutorial3 addr 0x11ff3a0 size 0x44 virtual false final false
 void OpenTutorial3() ;

/// @brief Method OpenTutorial4 addr 0x11ff3e4 size 0x44 virtual false final false
 void OpenTutorial4() ;

/// @brief Method SupportGroup addr 0x11ff428 size 0x44 virtual false final false
 void SupportGroup() ;

/// @brief Method ASThread addr 0x11ff46c size 0x44 virtual false final false
 void ASThread() ;

/// @brief Method GetValue addr 0x11fab2c size 0x64 virtual false final false
 float_t GetValue(::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type curveType) ;

/// @brief Method ResetRotation addr 0x11f9d10 size 0x8c virtual false final false
 void ResetRotation() ;

/// @brief Method RotateTo addr 0x11f8524 size 0x4a4 virtual false final false
 void RotateTo(::UnityEngine::Vector3 position) ;

// Ctor Parameters []
explicit InteractionTarget() ;

/// @brief Method .ctor addr 0x11ff4b0 size 0x70 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::FinalIK::InteractionTarget);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::InteractionTarget, "RootMotion.FinalIK", "InteractionTarget");
NEED_NO_BOX(::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionTarget__Multiplier);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionTarget__Multiplier, "RootMotion.FinalIK", "InteractionTarget/Multiplier");
