#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Quaternion;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolver__Point;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKSolverTrigonometric;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone;
}
// Type: ::TrigonometricBone
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12502))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12523))
// CS Name: RootMotion.FinalIK.IKSolverTrigonometric::TrigonometricBone
class CORDL_TYPE RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone : public RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Bone {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone(RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone(RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone(void* ptr) noexcept : RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Bone(ptr) {
}


  constexpr RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone& operator=(RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone&& o) noexcept = default;
  constexpr RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone& operator=(RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone const& o) noexcept = default;
                


// Fields

 UnityEngine::Quaternion __declspec(property(get=__get_targetToLocalSpace, put=__set_targetToLocalSpace))  targetToLocalSpace;

constexpr void __set_targetToLocalSpace(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_targetToLocalSpace() const;

 UnityEngine::Vector3 __declspec(property(get=__get_defaultLocalBendNormal, put=__set_defaultLocalBendNormal))  defaultLocalBendNormal;

constexpr void __set_defaultLocalBendNormal(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_defaultLocalBendNormal() const;


// Methods

/// @brief Method Initiate addr 0x11e5230 size 0xf0 virtual false final false
 void Initiate(UnityEngine::Vector3 childPosition, UnityEngine::Vector3 bendNormal) ;

/// @brief Method GetRotation addr 0x11e5ad8 size 0x90 virtual false final false
 UnityEngine::Quaternion GetRotation(UnityEngine::Vector3 direction, UnityEngine::Vector3 bendNormal) ;

/// @brief Method GetBendNormalFromCurrentRotation addr 0x11e080c size 0x30 virtual false final false
 UnityEngine::Vector3 GetBendNormalFromCurrentRotation() ;

// Ctor Parameters []
explicit RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone() ;

/// @brief Method .ctor addr 0x11e5b74 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::IKSolverTrigonometric
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12506))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12524))
// CS Name: RootMotion.FinalIK.IKSolverTrigonometric
class CORDL_TYPE IKSolverTrigonometric : public RootMotion::FinalIK::IKSolver {
public:
// Declarations
using TrigonometricBone = RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~IKSolverTrigonometric() = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverTrigonometric", modifiers: " const&", def_value: None }]
constexpr IKSolverTrigonometric(IKSolverTrigonometric const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverTrigonometric", modifiers: "&&", def_value: None }]
constexpr IKSolverTrigonometric(IKSolverTrigonometric&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IKSolverTrigonometric(void* ptr) noexcept : RootMotion::FinalIK::IKSolver(ptr) {
}


  constexpr IKSolverTrigonometric& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IKSolverTrigonometric& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IKSolverTrigonometric& operator=(IKSolverTrigonometric&& o) noexcept = default;
  constexpr IKSolverTrigonometric& operator=(IKSolverTrigonometric const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get_target, put=__set_target))  target;

constexpr void __set_target(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_target() const;

 float_t __declspec(property(get=__get_IKRotationWeight, put=__set_IKRotationWeight))  IKRotationWeight;

constexpr void __set_IKRotationWeight(float_t value) ;

constexpr float_t __get_IKRotationWeight() const;

 UnityEngine::Quaternion __declspec(property(get=__get_IKRotation, put=__set_IKRotation))  IKRotation;

constexpr void __set_IKRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_IKRotation() const;

 UnityEngine::Vector3 __declspec(property(get=__get_bendNormal, put=__set_bendNormal))  bendNormal;

constexpr void __set_bendNormal(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_bendNormal() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone __declspec(property(get=__get_bone1, put=__set_bone1))  bone1;

constexpr void __set_bone1(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone __get_bone1() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone __declspec(property(get=__get_bone2, put=__set_bone2))  bone2;

constexpr void __set_bone2(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone __get_bone2() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone __declspec(property(get=__get_bone3, put=__set_bone3))  bone3;

constexpr void __set_bone3(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone __get_bone3() const;

 UnityEngine::Vector3 __declspec(property(get=__get_weightIKPosition, put=__set_weightIKPosition))  weightIKPosition;

constexpr void __set_weightIKPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_weightIKPosition() const;

 bool __declspec(property(get=__get_directHierarchy, put=__set_directHierarchy))  directHierarchy;

constexpr void __set_directHierarchy(bool value) ;

constexpr bool __get_directHierarchy() const;


// Methods

/// @brief Method SetBendGoalPosition addr 0x11e3f94 size 0x194 virtual false final false
 void SetBendGoalPosition(UnityEngine::Vector3 goalPosition, float_t weight) ;

/// @brief Method SetBendPlaneToCurrent addr 0x11e4128 size 0x180 virtual false final false
 void SetBendPlaneToCurrent() ;

/// @brief Method SetIKRotation addr 0x11e42a8 size 0xc virtual false final false
 void SetIKRotation(UnityEngine::Quaternion rotation) ;

/// @brief Method SetIKRotationWeight addr 0x11e42b4 size 0x1c virtual false final false
 void SetIKRotationWeight(float_t weight) ;

/// @brief Method GetIKRotation addr 0x11e42d0 size 0xc virtual false final false
 UnityEngine::Quaternion GetIKRotation() ;

/// @brief Method GetIKRotationWeight addr 0x11e42dc size 0x8 virtual false final false
 float_t GetIKRotationWeight() ;

/// @brief Method GetPoints addr 0x11e42e4 size 0xec virtual true final false
 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point> GetPoints() ;

/// @brief Method GetPoint addr 0x11e43d0 size 0xf8 virtual true final false
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point GetPoint(UnityEngine::Transform transform) ;

/// @brief Method StoreDefaultLocalState addr 0x11e44c8 size 0x40 virtual true final false
 void StoreDefaultLocalState() ;

/// @brief Method FixTransforms addr 0x11e4508 size 0x50 virtual true final false
 void FixTransforms() ;

/// @brief Method IsValid addr 0x11e4558 size 0x3a4 virtual true final false
 bool IsValid(ByRef<::StringW> message) ;

/// @brief Method SetChain addr 0x11e48fc size 0x4c virtual false final false
 bool SetChain(UnityEngine::Transform bone1, UnityEngine::Transform bone2, UnityEngine::Transform bone3, UnityEngine::Transform root) ;

/// @brief Method Solve addr 0x11e4948 size 0x4f4 virtual false final false
static void Solve(UnityEngine::Transform bone1, UnityEngine::Transform bone2, UnityEngine::Transform bone3, UnityEngine::Vector3 targetPosition, UnityEngine::Vector3 bendNormal, float_t weight) ;

/// @brief Method GetDirectionToBendPoint addr 0x11e4e3c size 0x158 virtual false final false
static UnityEngine::Vector3 GetDirectionToBendPoint(UnityEngine::Vector3 direction, float_t directionMag, UnityEngine::Vector3 bendDirection, float_t sqrMag1, float_t sqrMag2) ;

/// @brief Method OnInitiate addr 0x11e4f94 size 0x12c virtual true final false
 void OnInitiate() ;

/// @brief Method IsDirectHierarchy addr 0x11e5140 size 0xf0 virtual false final false
 bool IsDirectHierarchy() ;

/// @brief Method InitiateBones addr 0x11e50c0 size 0x80 virtual false final false
 void InitiateBones() ;

/// @brief Method OnUpdate addr 0x11e5320 size 0x5f8 virtual true final false
 void OnUpdate() ;

/// @brief Method OnInitiateVirtual addr 0x11e5b68 size 0x4 virtual true final false
 void OnInitiateVirtual() ;

/// @brief Method OnUpdateVirtual addr 0x11e5b6c size 0x4 virtual true final false
 void OnUpdateVirtual() ;

/// @brief Method OnPostSolveVirtual addr 0x11e5b70 size 0x4 virtual true final false
 void OnPostSolveVirtual() ;

/// @brief Method GetBendDirection addr 0x11e5918 size 0x1c0 virtual false final false
 UnityEngine::Vector3 GetBendDirection(UnityEngine::Vector3 IKPosition, UnityEngine::Vector3 bendNormal) ;

// Ctor Parameters []
explicit IKSolverTrigonometric() ;

/// @brief Method .ctor addr 0x11e19b4 size 0x128 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::IKSolverTrigonometric);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverTrigonometric, "RootMotion.FinalIK", "IKSolverTrigonometric");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone, "RootMotion.FinalIK", "IKSolverTrigonometric/TrigonometricBone");
