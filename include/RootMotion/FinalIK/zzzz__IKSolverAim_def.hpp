#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverHeuristic_def.hpp"
#include <cmath>
#include <cstdint>
namespace RootMotion::FinalIK {
class RotationLimit;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolver__IterationDelegate;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolver__Bone;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKSolverAim;
}
// Type: RootMotion.FinalIK::IKSolverAim
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12516))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12507))
// CS Name: RootMotion.FinalIK.IKSolverAim
class CORDL_TYPE IKSolverAim : public RootMotion::FinalIK::IKSolverHeuristic {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf0};

virtual ~IKSolverAim() = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverAim", modifiers: " const&", def_value: None }]
constexpr IKSolverAim(IKSolverAim const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverAim", modifiers: "&&", def_value: None }]
constexpr IKSolverAim(IKSolverAim&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IKSolverAim(void* ptr) noexcept : RootMotion::FinalIK::IKSolverHeuristic(ptr) {
}


  constexpr IKSolverAim& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IKSolverAim& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IKSolverAim& operator=(IKSolverAim&& o) noexcept = default;
  constexpr IKSolverAim& operator=(IKSolverAim const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get_transform, put=__set_transform))  transform;

constexpr void __set_transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_transform() const;

 UnityEngine::Vector3 __declspec(property(get=__get_axis, put=__set_axis))  axis;

constexpr void __set_axis(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_axis() const;

 UnityEngine::Vector3 __declspec(property(get=__get_poleAxis, put=__set_poleAxis))  poleAxis;

constexpr void __set_poleAxis(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_poleAxis() const;

 UnityEngine::Vector3 __declspec(property(get=__get_polePosition, put=__set_polePosition))  polePosition;

constexpr void __set_polePosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_polePosition() const;

 float_t __declspec(property(get=__get_poleWeight, put=__set_poleWeight))  poleWeight;

constexpr void __set_poleWeight(float_t value) ;

constexpr float_t __get_poleWeight() const;

 UnityEngine::Transform __declspec(property(get=__get_poleTarget, put=__set_poleTarget))  poleTarget;

constexpr void __set_poleTarget(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_poleTarget() const;

 float_t __declspec(property(get=__get_clampWeight, put=__set_clampWeight))  clampWeight;

constexpr void __set_clampWeight(float_t value) ;

constexpr float_t __get_clampWeight() const;

 int32_t __declspec(property(get=__get_clampSmoothing, put=__set_clampSmoothing))  clampSmoothing;

constexpr void __set_clampSmoothing(int32_t value) ;

constexpr int32_t __get_clampSmoothing() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__IterationDelegate __declspec(property(get=__get_OnPreIteration, put=__set_OnPreIteration))  OnPreIteration;

constexpr void __set_OnPreIteration(RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__IterationDelegate value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__IterationDelegate __get_OnPreIteration() const;

 float_t __declspec(property(get=__get_step, put=__set_step))  step;

constexpr void __set_step(float_t value) ;

constexpr float_t __get_step() const;

 UnityEngine::Vector3 __declspec(property(get=__get_clampedIKPosition, put=__set_clampedIKPosition))  clampedIKPosition;

constexpr void __set_clampedIKPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_clampedIKPosition() const;

 RootMotion::FinalIK::RotationLimit __declspec(property(get=__get_transformLimit, put=__set_transformLimit))  transformLimit;

constexpr void __set_transformLimit(RootMotion::FinalIK::RotationLimit value) ;

constexpr RootMotion::FinalIK::RotationLimit __get_transformLimit() const;

 UnityEngine::Transform __declspec(property(get=__get_lastTransform, put=__set_lastTransform))  lastTransform;

constexpr void __set_lastTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_lastTransform() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_transformAxis))  transformAxis;

 UnityEngine::Vector3 __declspec(property(get=get_transformPoleAxis))  transformPoleAxis;

 int32_t __declspec(property(get=get_minBones))  minBones;

 UnityEngine::Vector3 __declspec(property(get=get_localDirection))  localDirection;


// Methods

/// @brief Method GetAngle addr 0x11d48f0 size 0x138 virtual false final false
 float_t GetAngle() ;

/// @brief Method get_transformAxis addr 0x11d4a28 size 0x30 virtual false final false
 UnityEngine::Vector3 get_transformAxis() ;

/// @brief Method get_transformPoleAxis addr 0x11d4a58 size 0x30 virtual false final false
 UnityEngine::Vector3 get_transformPoleAxis() ;

/// @brief Method OnInitiate addr 0x11d4a88 size 0x28c virtual true final false
 void OnInitiate() ;

/// @brief Method OnUpdate addr 0x11d4d14 size 0x56c virtual true final false
 void OnUpdate() ;

/// @brief Method get_minBones addr 0x11d568c size 0x8 virtual true final false
 int32_t get_minBones() ;

/// @brief Method Solve addr 0x11d55e4 size 0xa8 virtual false final false
 void Solve() ;

/// @brief Method GetClampedIKPosition addr 0x11d5280 size 0x364 virtual false final false
 UnityEngine::Vector3 GetClampedIKPosition() ;

/// @brief Method RotateToTarget addr 0x11d5694 size 0x538 virtual false final false
 void RotateToTarget(UnityEngine::Vector3 targetPosition, RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Bone bone, float_t weight) ;

/// @brief Method get_localDirection addr 0x11d5bcc size 0x60 virtual true final false
 UnityEngine::Vector3 get_localDirection() ;

// Ctor Parameters []
explicit IKSolverAim() ;

/// @brief Method .ctor addr 0x11d5c2c size 0xa0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::IKSolverAim);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverAim, "RootMotion.FinalIK", "IKSolverAim");
