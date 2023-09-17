#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
namespace RootMotion::FinalIK {
class ____RootMotion__FinalIK__IKSolver__Node;
}
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class IKSolverFullBody;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKEffector;
}
// Type: RootMotion.FinalIK::IKEffector
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12494))
// CS Name: RootMotion.FinalIK.IKEffector
class CORDL_TYPE IKEffector : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf0};

virtual ~IKEffector() = default;

// Ctor Parameters [CppParam { name: "", ty: "IKEffector", modifiers: " const&", def_value: None }]
constexpr IKEffector(IKEffector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IKEffector", modifiers: "&&", def_value: None }]
constexpr IKEffector(IKEffector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IKEffector(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IKEffector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IKEffector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IKEffector& operator=(IKEffector&& o) noexcept = default;
  constexpr IKEffector& operator=(IKEffector const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get_bone, put=__set_bone))  bone;

constexpr void __set_bone(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_bone() const;

 ::UnityEngine::Transform __declspec(property(get=__get_target, put=__set_target))  target;

constexpr void __set_target(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_target() const;

 float_t __declspec(property(get=__get_positionWeight, put=__set_positionWeight))  positionWeight;

constexpr void __set_positionWeight(float_t value) ;

constexpr float_t __get_positionWeight() const;

 float_t __declspec(property(get=__get_rotationWeight, put=__set_rotationWeight))  rotationWeight;

constexpr void __set_rotationWeight(float_t value) ;

constexpr float_t __get_rotationWeight() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_position() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_rotation, put=__set_rotation))  rotation;

constexpr void __set_rotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_rotation() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_positionOffset, put=__set_positionOffset))  positionOffset;

constexpr void __set_positionOffset(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_positionOffset() const;

 bool __declspec(property(get=__get__isEndEffector_k__BackingField, put=__set__isEndEffector_k__BackingField))  _isEndEffector_k__BackingField;

constexpr void __set__isEndEffector_k__BackingField(bool value) ;

constexpr bool __get__isEndEffector_k__BackingField() const;

 bool __declspec(property(get=__get_effectChildNodes, put=__set_effectChildNodes))  effectChildNodes;

constexpr void __set_effectChildNodes(bool value) ;

constexpr bool __get_effectChildNodes() const;

 float_t __declspec(property(get=__get_maintainRelativePositionWeight, put=__set_maintainRelativePositionWeight))  maintainRelativePositionWeight;

constexpr void __set_maintainRelativePositionWeight(float_t value) ;

constexpr float_t __get_maintainRelativePositionWeight() const;

 ::ArrayW<::UnityEngine::Transform> __declspec(property(get=__get_childBones, put=__set_childBones))  childBones;

constexpr void __set_childBones(::ArrayW<::UnityEngine::Transform> value) ;

constexpr ::ArrayW<::UnityEngine::Transform> __get_childBones() const;

 ::UnityEngine::Transform __declspec(property(get=__get_planeBone1, put=__set_planeBone1))  planeBone1;

constexpr void __set_planeBone1(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_planeBone1() const;

 ::UnityEngine::Transform __declspec(property(get=__get_planeBone2, put=__set_planeBone2))  planeBone2;

constexpr void __set_planeBone2(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_planeBone2() const;

 ::UnityEngine::Transform __declspec(property(get=__get_planeBone3, put=__set_planeBone3))  planeBone3;

constexpr void __set_planeBone3(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_planeBone3() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_planeRotationOffset, put=__set_planeRotationOffset))  planeRotationOffset;

constexpr void __set_planeRotationOffset(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_planeRotationOffset() const;

 float_t __declspec(property(get=__get_posW, put=__set_posW))  posW;

constexpr void __set_posW(float_t value) ;

constexpr float_t __get_posW() const;

 float_t __declspec(property(get=__get_rotW, put=__set_rotW))  rotW;

constexpr void __set_rotW(float_t value) ;

constexpr float_t __get_rotW() const;

 ::ArrayW<::UnityEngine::Vector3> __declspec(property(get=__get_localPositions, put=__set_localPositions))  localPositions;

constexpr void __set_localPositions(::ArrayW<::UnityEngine::Vector3> value) ;

constexpr ::ArrayW<::UnityEngine::Vector3> __get_localPositions() const;

 bool __declspec(property(get=__get_usePlaneNodes, put=__set_usePlaneNodes))  usePlaneNodes;

constexpr void __set_usePlaneNodes(bool value) ;

constexpr bool __get_usePlaneNodes() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_animatedPlaneRotation, put=__set_animatedPlaneRotation))  animatedPlaneRotation;

constexpr void __set_animatedPlaneRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_animatedPlaneRotation() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_animatedPosition, put=__set_animatedPosition))  animatedPosition;

constexpr void __set_animatedPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_animatedPosition() const;

 bool __declspec(property(get=__get_firstUpdate, put=__set_firstUpdate))  firstUpdate;

constexpr void __set_firstUpdate(bool value) ;

constexpr bool __get_firstUpdate() const;

 int32_t __declspec(property(get=__get_chainIndex, put=__set_chainIndex))  chainIndex;

constexpr void __set_chainIndex(int32_t value) ;

constexpr int32_t __get_chainIndex() const;

 int32_t __declspec(property(get=__get_nodeIndex, put=__set_nodeIndex))  nodeIndex;

constexpr void __set_nodeIndex(int32_t value) ;

constexpr int32_t __get_nodeIndex() const;

 int32_t __declspec(property(get=__get_plane1ChainIndex, put=__set_plane1ChainIndex))  plane1ChainIndex;

constexpr void __set_plane1ChainIndex(int32_t value) ;

constexpr int32_t __get_plane1ChainIndex() const;

 int32_t __declspec(property(get=__get_plane1NodeIndex, put=__set_plane1NodeIndex))  plane1NodeIndex;

constexpr void __set_plane1NodeIndex(int32_t value) ;

constexpr int32_t __get_plane1NodeIndex() const;

 int32_t __declspec(property(get=__get_plane2ChainIndex, put=__set_plane2ChainIndex))  plane2ChainIndex;

constexpr void __set_plane2ChainIndex(int32_t value) ;

constexpr int32_t __get_plane2ChainIndex() const;

 int32_t __declspec(property(get=__get_plane2NodeIndex, put=__set_plane2NodeIndex))  plane2NodeIndex;

constexpr void __set_plane2NodeIndex(int32_t value) ;

constexpr int32_t __get_plane2NodeIndex() const;

 int32_t __declspec(property(get=__get_plane3ChainIndex, put=__set_plane3ChainIndex))  plane3ChainIndex;

constexpr void __set_plane3ChainIndex(int32_t value) ;

constexpr int32_t __get_plane3ChainIndex() const;

 int32_t __declspec(property(get=__get_plane3NodeIndex, put=__set_plane3NodeIndex))  plane3NodeIndex;

constexpr void __set_plane3NodeIndex(int32_t value) ;

constexpr int32_t __get_plane3NodeIndex() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_childChainIndexes, put=__set_childChainIndexes))  childChainIndexes;

constexpr void __set_childChainIndexes(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_childChainIndexes() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_childNodeIndexes, put=__set_childNodeIndexes))  childNodeIndexes;

constexpr void __set_childNodeIndexes(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_childNodeIndexes() const;


// Properties

 bool __declspec(property(get=get_isEndEffector, put=set_isEndEffector))  isEndEffector;


// Methods

/// @brief Method GetNode addr 0x11ce308 size 0x5c virtual false final false
 ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Node GetNode(::RootMotion::FinalIK::IKSolverFullBody solver) ;

/// @brief Method get_isEndEffector addr 0x11ce364 size 0x8 virtual false final false
 bool get_isEndEffector() ;

/// @brief Method set_isEndEffector addr 0x11ce36c size 0xc virtual false final false
 void set_isEndEffector(bool value) ;

/// @brief Method PinToBone addr 0x11ce378 size 0x84 virtual false final false
 void PinToBone(float_t positionWeight, float_t rotationWeight) ;

// Ctor Parameters []
explicit IKEffector() ;

/// @brief Method .ctor addr 0x11ce3fc size 0x1a0 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "bone", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "childBones", ty: "::ArrayW<::UnityEngine::Transform>", modifiers: "", def_value: None }]
explicit IKEffector(::UnityEngine::Transform bone, ::ArrayW<::UnityEngine::Transform> childBones) ;

/// @brief Method .ctor addr 0x11ce59c size 0x1bc virtual false final false
 void _ctor(::UnityEngine::Transform bone, ::ArrayW<::UnityEngine::Transform> childBones) ;

/// @brief Method IsValid addr 0x11ce758 size 0x2f4 virtual false final false
 bool IsValid(::RootMotion::FinalIK::IKSolver solver, ByRef<::StringW> message) ;

/// @brief Method Initiate addr 0x11cea4c size 0x28c virtual false final false
 void Initiate(::RootMotion::FinalIK::IKSolverFullBody solver) ;

/// @brief Method ResetOffset addr 0x11ced4c size 0x118 virtual false final false
 void ResetOffset(::RootMotion::FinalIK::IKSolverFullBody solver) ;

/// @brief Method SetToTarget addr 0x11ceeb4 size 0x9c virtual false final false
 void SetToTarget() ;

/// @brief Method OnPreSolve addr 0x11cef50 size 0x6a0 virtual false final false
 void OnPreSolve(::RootMotion::FinalIK::IKSolverFullBody solver) ;

/// @brief Method OnPostWrite addr 0x11cf5f0 size 0x58 virtual false final false
 void OnPostWrite() ;

/// @brief Method GetPlaneRotation addr 0x11cf648 size 0x1c8 virtual false final false
 ::UnityEngine::Quaternion GetPlaneRotation(::RootMotion::FinalIK::IKSolverFullBody solver) ;

/// @brief Method Update addr 0x11cf810 size 0x248 virtual false final false
 void Update(::RootMotion::FinalIK::IKSolverFullBody solver) ;

/// @brief Method GetPosition addr 0x11cfa58 size 0x2b0 virtual false final false
 ::UnityEngine::Vector3 GetPosition(::RootMotion::FinalIK::IKSolverFullBody solver, ByRef<::UnityEngine::Quaternion> planeRotationOffset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::FinalIK::IKEffector);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKEffector, "RootMotion.FinalIK", "IKEffector");
