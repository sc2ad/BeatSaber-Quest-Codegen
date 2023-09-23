#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Quaternion;
}
namespace RootMotion::FinalIK {
class IKEffector;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolver__UpdateDelegate;
}
namespace RootMotion::FinalIK {
class FullBodyBipedIK;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class FBBIKHeadEffector;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__FBBIKHeadEffector__BendBone;
}
// Type: ::BendBone
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12488))
// CS Name: RootMotion.FinalIK.FBBIKHeadEffector::BendBone
class CORDL_TYPE RootMotion__FinalIK__FBBIKHeadEffector__BendBone : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RootMotion__FinalIK__FBBIKHeadEffector__BendBone() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__FBBIKHeadEffector__BendBone", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__FBBIKHeadEffector__BendBone(RootMotion__FinalIK__FBBIKHeadEffector__BendBone const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__FBBIKHeadEffector__BendBone", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__FBBIKHeadEffector__BendBone(RootMotion__FinalIK__FBBIKHeadEffector__BendBone&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__FBBIKHeadEffector__BendBone(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__FBBIKHeadEffector__BendBone& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__FBBIKHeadEffector__BendBone& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__FBBIKHeadEffector__BendBone& operator=(RootMotion__FinalIK__FBBIKHeadEffector__BendBone&& o) noexcept = default;
  constexpr RootMotion__FinalIK__FBBIKHeadEffector__BendBone& operator=(RootMotion__FinalIK__FBBIKHeadEffector__BendBone const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get_transform, put=__set_transform))  transform;

constexpr void __set_transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_transform() const;

 float_t __declspec(property(get=__get_weight, put=__set_weight))  weight;

constexpr void __set_weight(float_t value) ;

constexpr float_t __get_weight() const;

 UnityEngine::Quaternion __declspec(property(get=__get_defaultLocalRotation, put=__set_defaultLocalRotation))  defaultLocalRotation;

constexpr void __set_defaultLocalRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_defaultLocalRotation() const;


// Methods

// Ctor Parameters []
explicit RootMotion__FinalIK__FBBIKHeadEffector__BendBone() ;

/// @brief Method .ctor addr 0x11ca7b4 size 0x60 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "transform", ty: "UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "weight", ty: "float_t", modifiers: "", def_value: None }]
explicit RootMotion__FinalIK__FBBIKHeadEffector__BendBone(UnityEngine::Transform transform, float_t weight) ;

/// @brief Method .ctor addr 0x11ca814 size 0x7c virtual false final false
 void _ctor(UnityEngine::Transform transform, float_t weight) ;

/// @brief Method StoreDefaultLocalState addr 0x11c7f18 size 0x2c virtual false final false
 void StoreDefaultLocalState() ;

/// @brief Method FixTransforms addr 0x11c82e8 size 0x28 virtual false final false
 void FixTransforms() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::FBBIKHeadEffector
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12489))
// CS Name: RootMotion.FinalIK.FBBIKHeadEffector
class CORDL_TYPE FBBIKHeadEffector : public UnityEngine::MonoBehaviour {
public:
// Declarations
using BendBone = RootMotion::FinalIK::RootMotion__FinalIK__FBBIKHeadEffector__BendBone;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x170};

virtual ~FBBIKHeadEffector() = default;

// Ctor Parameters [CppParam { name: "", ty: "FBBIKHeadEffector", modifiers: " const&", def_value: None }]
constexpr FBBIKHeadEffector(FBBIKHeadEffector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FBBIKHeadEffector", modifiers: "&&", def_value: None }]
constexpr FBBIKHeadEffector(FBBIKHeadEffector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FBBIKHeadEffector(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FBBIKHeadEffector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FBBIKHeadEffector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FBBIKHeadEffector& operator=(FBBIKHeadEffector&& o) noexcept = default;
  constexpr FBBIKHeadEffector& operator=(FBBIKHeadEffector const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::FullBodyBipedIK __declspec(property(get=__get_ik, put=__set_ik))  ik;

constexpr void __set_ik(RootMotion::FinalIK::FullBodyBipedIK value) ;

constexpr RootMotion::FinalIK::FullBodyBipedIK __get_ik() const;

 float_t __declspec(property(get=__get_positionWeight, put=__set_positionWeight))  positionWeight;

constexpr void __set_positionWeight(float_t value) ;

constexpr float_t __get_positionWeight() const;

 float_t __declspec(property(get=__get_bodyWeight, put=__set_bodyWeight))  bodyWeight;

constexpr void __set_bodyWeight(float_t value) ;

constexpr float_t __get_bodyWeight() const;

 float_t __declspec(property(get=__get_thighWeight, put=__set_thighWeight))  thighWeight;

constexpr void __set_thighWeight(float_t value) ;

constexpr float_t __get_thighWeight() const;

 bool __declspec(property(get=__get_handsPullBody, put=__set_handsPullBody))  handsPullBody;

constexpr void __set_handsPullBody(bool value) ;

constexpr bool __get_handsPullBody() const;

 float_t __declspec(property(get=__get_rotationWeight, put=__set_rotationWeight))  rotationWeight;

constexpr void __set_rotationWeight(float_t value) ;

constexpr float_t __get_rotationWeight() const;

 float_t __declspec(property(get=__get_bodyClampWeight, put=__set_bodyClampWeight))  bodyClampWeight;

constexpr void __set_bodyClampWeight(float_t value) ;

constexpr float_t __get_bodyClampWeight() const;

 float_t __declspec(property(get=__get_headClampWeight, put=__set_headClampWeight))  headClampWeight;

constexpr void __set_headClampWeight(float_t value) ;

constexpr float_t __get_headClampWeight() const;

 float_t __declspec(property(get=__get_bendWeight, put=__set_bendWeight))  bendWeight;

constexpr void __set_bendWeight(float_t value) ;

constexpr float_t __get_bendWeight() const;

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__FBBIKHeadEffector__BendBone> __declspec(property(get=__get_bendBones, put=__set_bendBones))  bendBones;

constexpr void __set_bendBones(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__FBBIKHeadEffector__BendBone> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__FBBIKHeadEffector__BendBone> __get_bendBones() const;

 float_t __declspec(property(get=__get_CCDWeight, put=__set_CCDWeight))  CCDWeight;

constexpr void __set_CCDWeight(float_t value) ;

constexpr float_t __get_CCDWeight() const;

 float_t __declspec(property(get=__get_roll, put=__set_roll))  roll;

constexpr void __set_roll(float_t value) ;

constexpr float_t __get_roll() const;

 float_t __declspec(property(get=__get_damper, put=__set_damper))  damper;

constexpr void __set_damper(float_t value) ;

constexpr float_t __get_damper() const;

 ::ArrayW<UnityEngine::Transform> __declspec(property(get=__get_CCDBones, put=__set_CCDBones))  CCDBones;

constexpr void __set_CCDBones(::ArrayW<UnityEngine::Transform> value) ;

constexpr ::ArrayW<UnityEngine::Transform> __get_CCDBones() const;

 float_t __declspec(property(get=__get_postStretchWeight, put=__set_postStretchWeight))  postStretchWeight;

constexpr void __set_postStretchWeight(float_t value) ;

constexpr float_t __get_postStretchWeight() const;

 float_t __declspec(property(get=__get_maxStretch, put=__set_maxStretch))  maxStretch;

constexpr void __set_maxStretch(float_t value) ;

constexpr float_t __get_maxStretch() const;

 float_t __declspec(property(get=__get_stretchDamper, put=__set_stretchDamper))  stretchDamper;

constexpr void __set_stretchDamper(float_t value) ;

constexpr float_t __get_stretchDamper() const;

 bool __declspec(property(get=__get_fixHead, put=__set_fixHead))  fixHead;

constexpr void __set_fixHead(bool value) ;

constexpr bool __get_fixHead() const;

 ::ArrayW<UnityEngine::Transform> __declspec(property(get=__get_stretchBones, put=__set_stretchBones))  stretchBones;

constexpr void __set_stretchBones(::ArrayW<UnityEngine::Transform> value) ;

constexpr ::ArrayW<UnityEngine::Transform> __get_stretchBones() const;

 UnityEngine::Vector3 __declspec(property(get=__get_chestDirection, put=__set_chestDirection))  chestDirection;

constexpr void __set_chestDirection(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_chestDirection() const;

 float_t __declspec(property(get=__get_chestDirectionWeight, put=__set_chestDirectionWeight))  chestDirectionWeight;

constexpr void __set_chestDirectionWeight(float_t value) ;

constexpr float_t __get_chestDirectionWeight() const;

 ::ArrayW<UnityEngine::Transform> __declspec(property(get=__get_chestBones, put=__set_chestBones))  chestBones;

constexpr void __set_chestBones(::ArrayW<UnityEngine::Transform> value) ;

constexpr ::ArrayW<UnityEngine::Transform> __get_chestBones() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__UpdateDelegate __declspec(property(get=__get_OnPostHeadEffectorFK, put=__set_OnPostHeadEffectorFK))  OnPostHeadEffectorFK;

constexpr void __set_OnPostHeadEffectorFK(RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__UpdateDelegate value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__UpdateDelegate __get_OnPostHeadEffectorFK() const;

 UnityEngine::Vector3 __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_offset() const;

 UnityEngine::Vector3 __declspec(property(get=__get_headToBody, put=__set_headToBody))  headToBody;

constexpr void __set_headToBody(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_headToBody() const;

 UnityEngine::Vector3 __declspec(property(get=__get_shoulderCenterToHead, put=__set_shoulderCenterToHead))  shoulderCenterToHead;

constexpr void __set_shoulderCenterToHead(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_shoulderCenterToHead() const;

 UnityEngine::Vector3 __declspec(property(get=__get_headToLeftThigh, put=__set_headToLeftThigh))  headToLeftThigh;

constexpr void __set_headToLeftThigh(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_headToLeftThigh() const;

 UnityEngine::Vector3 __declspec(property(get=__get_headToRightThigh, put=__set_headToRightThigh))  headToRightThigh;

constexpr void __set_headToRightThigh(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_headToRightThigh() const;

 UnityEngine::Vector3 __declspec(property(get=__get_leftShoulderPos, put=__set_leftShoulderPos))  leftShoulderPos;

constexpr void __set_leftShoulderPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_leftShoulderPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get_rightShoulderPos, put=__set_rightShoulderPos))  rightShoulderPos;

constexpr void __set_rightShoulderPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_rightShoulderPos() const;

 float_t __declspec(property(get=__get_shoulderDist, put=__set_shoulderDist))  shoulderDist;

constexpr void __set_shoulderDist(float_t value) ;

constexpr float_t __get_shoulderDist() const;

 float_t __declspec(property(get=__get_leftShoulderDist, put=__set_leftShoulderDist))  leftShoulderDist;

constexpr void __set_leftShoulderDist(float_t value) ;

constexpr float_t __get_leftShoulderDist() const;

 float_t __declspec(property(get=__get_rightShoulderDist, put=__set_rightShoulderDist))  rightShoulderDist;

constexpr void __set_rightShoulderDist(float_t value) ;

constexpr float_t __get_rightShoulderDist() const;

 UnityEngine::Quaternion __declspec(property(get=__get_chestRotation, put=__set_chestRotation))  chestRotation;

constexpr void __set_chestRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_chestRotation() const;

 UnityEngine::Quaternion __declspec(property(get=__get_headRotationRelativeToRoot, put=__set_headRotationRelativeToRoot))  headRotationRelativeToRoot;

constexpr void __set_headRotationRelativeToRoot(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_headRotationRelativeToRoot() const;

 ::ArrayW<UnityEngine::Quaternion> __declspec(property(get=__get_ccdDefaultLocalRotations, put=__set_ccdDefaultLocalRotations))  ccdDefaultLocalRotations;

constexpr void __set_ccdDefaultLocalRotations(::ArrayW<UnityEngine::Quaternion> value) ;

constexpr ::ArrayW<UnityEngine::Quaternion> __get_ccdDefaultLocalRotations() const;

 UnityEngine::Vector3 __declspec(property(get=__get_headLocalPosition, put=__set_headLocalPosition))  headLocalPosition;

constexpr void __set_headLocalPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_headLocalPosition() const;

 UnityEngine::Quaternion __declspec(property(get=__get_headLocalRotation, put=__set_headLocalRotation))  headLocalRotation;

constexpr void __set_headLocalRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_headLocalRotation() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_stretchLocalPositions, put=__set_stretchLocalPositions))  stretchLocalPositions;

constexpr void __set_stretchLocalPositions(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get_stretchLocalPositions() const;

 ::ArrayW<UnityEngine::Quaternion> __declspec(property(get=__get_stretchLocalRotations, put=__set_stretchLocalRotations))  stretchLocalRotations;

constexpr void __set_stretchLocalRotations(::ArrayW<UnityEngine::Quaternion> value) ;

constexpr ::ArrayW<UnityEngine::Quaternion> __get_stretchLocalRotations() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_chestLocalPositions, put=__set_chestLocalPositions))  chestLocalPositions;

constexpr void __set_chestLocalPositions(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get_chestLocalPositions() const;

 ::ArrayW<UnityEngine::Quaternion> __declspec(property(get=__get_chestLocalRotations, put=__set_chestLocalRotations))  chestLocalRotations;

constexpr void __set_chestLocalRotations(::ArrayW<UnityEngine::Quaternion> value) ;

constexpr ::ArrayW<UnityEngine::Quaternion> __get_chestLocalRotations() const;

 int32_t __declspec(property(get=__get_bendBonesCount, put=__set_bendBonesCount))  bendBonesCount;

constexpr void __set_bendBonesCount(int32_t value) ;

constexpr int32_t __get_bendBonesCount() const;

 int32_t __declspec(property(get=__get_ccdBonesCount, put=__set_ccdBonesCount))  ccdBonesCount;

constexpr void __set_ccdBonesCount(int32_t value) ;

constexpr int32_t __get_ccdBonesCount() const;

 int32_t __declspec(property(get=__get_stretchBonesCount, put=__set_stretchBonesCount))  stretchBonesCount;

constexpr void __set_stretchBonesCount(int32_t value) ;

constexpr int32_t __get_stretchBonesCount() const;

 int32_t __declspec(property(get=__get_chestBonesCount, put=__set_chestBonesCount))  chestBonesCount;

constexpr void __set_chestBonesCount(int32_t value) ;

constexpr int32_t __get_chestBonesCount() const;


// Methods

/// @brief Method Start addr 0x11c76b8 size 0x3ec virtual false final false
 void Start() ;

/// @brief Method OnStoreDefaultLocalState addr 0x11c7aa4 size 0x474 virtual false final false
 void OnStoreDefaultLocalState() ;

/// @brief Method OnFixTransforms addr 0x11c7f44 size 0x3a4 virtual false final false
 void OnFixTransforms() ;

/// @brief Method OnPreRead addr 0x11c8310 size 0x640 virtual false final false
 void OnPreRead() ;

/// @brief Method SpineBend addr 0x11c8c0c size 0x3f8 virtual false final false
 void SpineBend() ;

/// @brief Method CCDPass addr 0x11c9004 size 0x410 virtual false final false
 void CCDPass() ;

/// @brief Method Iterate addr 0x11c9414 size 0x798 virtual false final false
 void Iterate(int32_t iteration) ;

/// @brief Method OnPostUpdate addr 0x11c9d94 size 0x23c virtual false final false
 void OnPostUpdate() ;

/// @brief Method ChestDirection addr 0x11c8950 size 0x2bc virtual false final false
 void ChestDirection() ;

/// @brief Method PostStretching addr 0x11c9fd0 size 0x304 virtual false final false
 void PostStretching() ;

/// @brief Method LerpSolverPosition addr 0x11c9cac size 0xe8 virtual false final false
 void LerpSolverPosition(RootMotion::FinalIK::IKEffector effector, UnityEngine::Vector3 position, float_t weight, UnityEngine::Vector3 offset) ;

/// @brief Method Solve addr 0x11c9bac size 0x100 virtual false final false
 void Solve(ByRef<UnityEngine::Vector3> pos1, ByRef<UnityEngine::Vector3> pos2, float_t nominalDistance) ;

/// @brief Method OnDestroy addr 0x11ca2d4 size 0x338 virtual false final false
 void OnDestroy() ;

// Ctor Parameters []
explicit FBBIKHeadEffector() ;

/// @brief Method .ctor addr 0x11ca60c size 0x1a8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::FBBIKHeadEffector);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::FBBIKHeadEffector, "RootMotion.FinalIK", "FBBIKHeadEffector");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__FBBIKHeadEffector__BendBone);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__FBBIKHeadEffector__BendBone, "RootMotion.FinalIK", "FBBIKHeadEffector/BendBone");
