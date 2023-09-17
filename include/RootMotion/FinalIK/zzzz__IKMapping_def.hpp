#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace RootMotion::FinalIK {
class IKSolver;
}
namespace RootMotion::FinalIK {
class IKSolverFullBody;
}
namespace RootMotion {
class ____RootMotion__Warning__Logger;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Quaternion;
}
namespace RootMotion::FinalIK {
class ____RootMotion__FinalIK__IKSolver__Node;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKMapping;
}
namespace RootMotion::FinalIK {
class ____RootMotion__FinalIK__IKMapping__BoneMap;
}
// Type: ::BoneMap
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12495))
// CS Name: RootMotion.FinalIK.IKMapping::BoneMap
class CORDL_TYPE ____RootMotion__FinalIK__IKMapping__BoneMap : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~____RootMotion__FinalIK__IKMapping__BoneMap() = default;

// Ctor Parameters [CppParam { name: "", ty: "____RootMotion__FinalIK__IKMapping__BoneMap", modifiers: " const&", def_value: None }]
constexpr ____RootMotion__FinalIK__IKMapping__BoneMap(____RootMotion__FinalIK__IKMapping__BoneMap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____RootMotion__FinalIK__IKMapping__BoneMap", modifiers: "&&", def_value: None }]
constexpr ____RootMotion__FinalIK__IKMapping__BoneMap(____RootMotion__FinalIK__IKMapping__BoneMap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____RootMotion__FinalIK__IKMapping__BoneMap(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____RootMotion__FinalIK__IKMapping__BoneMap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____RootMotion__FinalIK__IKMapping__BoneMap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____RootMotion__FinalIK__IKMapping__BoneMap& operator=(____RootMotion__FinalIK__IKMapping__BoneMap&& o) noexcept = default;
  constexpr ____RootMotion__FinalIK__IKMapping__BoneMap& operator=(____RootMotion__FinalIK__IKMapping__BoneMap const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get_transform, put=__set_transform))  transform;

constexpr void __set_transform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_transform() const;

 int32_t __declspec(property(get=__get_chainIndex, put=__set_chainIndex))  chainIndex;

constexpr void __set_chainIndex(int32_t value) ;

constexpr int32_t __get_chainIndex() const;

 int32_t __declspec(property(get=__get_nodeIndex, put=__set_nodeIndex))  nodeIndex;

constexpr void __set_nodeIndex(int32_t value) ;

constexpr int32_t __get_nodeIndex() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_defaultLocalPosition, put=__set_defaultLocalPosition))  defaultLocalPosition;

constexpr void __set_defaultLocalPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_defaultLocalPosition() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_defaultLocalRotation, put=__set_defaultLocalRotation))  defaultLocalRotation;

constexpr void __set_defaultLocalRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_defaultLocalRotation() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_localSwingAxis, put=__set_localSwingAxis))  localSwingAxis;

constexpr void __set_localSwingAxis(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_localSwingAxis() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_localTwistAxis, put=__set_localTwistAxis))  localTwistAxis;

constexpr void __set_localTwistAxis(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_localTwistAxis() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_planePosition, put=__set_planePosition))  planePosition;

constexpr void __set_planePosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_planePosition() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_ikPosition, put=__set_ikPosition))  ikPosition;

constexpr void __set_ikPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_ikPosition() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_defaultLocalTargetRotation, put=__set_defaultLocalTargetRotation))  defaultLocalTargetRotation;

constexpr void __set_defaultLocalTargetRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_defaultLocalTargetRotation() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_maintainRotation, put=__set_maintainRotation))  maintainRotation;

constexpr void __set_maintainRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_maintainRotation() const;

 float_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(float_t value) ;

constexpr float_t __get_length() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_animatedRotation, put=__set_animatedRotation))  animatedRotation;

constexpr void __set_animatedRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_animatedRotation() const;

 ::UnityEngine::Transform __declspec(property(get=__get_planeBone1, put=__set_planeBone1))  planeBone1;

constexpr void __set_planeBone1(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_planeBone1() const;

 ::UnityEngine::Transform __declspec(property(get=__get_planeBone2, put=__set_planeBone2))  planeBone2;

constexpr void __set_planeBone2(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_planeBone2() const;

 ::UnityEngine::Transform __declspec(property(get=__get_planeBone3, put=__set_planeBone3))  planeBone3;

constexpr void __set_planeBone3(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_planeBone3() const;

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


// Properties

 ::UnityEngine::Vector3 __declspec(property(get=get_swingDirection))  swingDirection;

 bool __declspec(property(get=get_isNodeBone))  isNodeBone;

 ::UnityEngine::Quaternion __declspec(property(get=get_lastAnimatedTargetRotation))  lastAnimatedTargetRotation;


// Methods

/// @brief Method Initiate addr 0x11cff6c size 0x28 virtual false final false
 void Initiate(::UnityEngine::Transform transform, ::RootMotion::FinalIK::IKSolverFullBody solver) ;

/// @brief Method get_swingDirection addr 0x11cff94 size 0x30 virtual false final false
 ::UnityEngine::Vector3 get_swingDirection() ;

/// @brief Method StoreDefaultLocalState addr 0x11cffc4 size 0x44 virtual false final false
 void StoreDefaultLocalState() ;

/// @brief Method FixTransform addr 0x11d0008 size 0x44 virtual false final false
 void FixTransform(bool position) ;

/// @brief Method get_isNodeBone addr 0x11d004c size 0x10 virtual false final false
 bool get_isNodeBone() ;

/// @brief Method SetLength addr 0x11d005c size 0xd4 virtual false final false
 void SetLength(::RootMotion::FinalIK::____RootMotion__FinalIK__IKMapping__BoneMap nextBone) ;

/// @brief Method SetLocalSwingAxis addr 0x11d0130 size 0x8 virtual false final false
 void SetLocalSwingAxis(::RootMotion::FinalIK::____RootMotion__FinalIK__IKMapping__BoneMap swingTarget) ;

/// @brief Method SetLocalSwingAxis addr 0x11d0138 size 0xcc virtual false final false
 void SetLocalSwingAxis(::RootMotion::FinalIK::____RootMotion__FinalIK__IKMapping__BoneMap bone1, ::RootMotion::FinalIK::____RootMotion__FinalIK__IKMapping__BoneMap bone2) ;

/// @brief Method SetLocalTwistAxis addr 0x11d0204 size 0x6c virtual false final false
 void SetLocalTwistAxis(::UnityEngine::Vector3 twistDirection, ::UnityEngine::Vector3 normalDirection) ;

/// @brief Method SetPlane addr 0x11d0270 size 0x88 virtual false final false
 void SetPlane(::RootMotion::FinalIK::IKSolverFullBody solver, ::UnityEngine::Transform planeBone1, ::UnityEngine::Transform planeBone2, ::UnityEngine::Transform planeBone3) ;

/// @brief Method UpdatePlane addr 0x11d02f8 size 0x110 virtual false final false
 void UpdatePlane(bool rotation, bool position) ;

/// @brief Method SetIKPosition addr 0x11d0570 size 0x2c virtual false final false
 void SetIKPosition() ;

/// @brief Method MaintainRotation addr 0x11d059c size 0x2c virtual false final false
 void MaintainRotation() ;

/// @brief Method SetToIKPosition addr 0x11d05c8 size 0x28 virtual false final false
 void SetToIKPosition() ;

/// @brief Method FixToNode addr 0x11d05f0 size 0xc0 virtual false final false
 void FixToNode(::RootMotion::FinalIK::IKSolverFullBody solver, float_t weight, ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Node fixNode) ;

/// @brief Method GetPlanePosition addr 0x11d06b0 size 0x74 virtual false final false
 ::UnityEngine::Vector3 GetPlanePosition(::RootMotion::FinalIK::IKSolverFullBody solver) ;

/// @brief Method PositionToPlane addr 0x11d0834 size 0x24 virtual false final false
 void PositionToPlane(::RootMotion::FinalIK::IKSolverFullBody solver) ;

/// @brief Method RotateToPlane addr 0x11d0858 size 0x120 virtual false final false
 void RotateToPlane(::RootMotion::FinalIK::IKSolverFullBody solver, float_t weight) ;

/// @brief Method Swing addr 0x11d0978 size 0x64 virtual false final false
 void Swing(::UnityEngine::Vector3 swingTarget, float_t weight) ;

/// @brief Method Swing addr 0x11d09dc size 0x180 virtual false final false
 void Swing(::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2, float_t weight) ;

/// @brief Method Twist addr 0x11d0b5c size 0x180 virtual false final false
 void Twist(::UnityEngine::Vector3 twistDirection, ::UnityEngine::Vector3 normalDirection, float_t weight) ;

/// @brief Method RotateToMaintain addr 0x11d0cdc size 0x7c virtual false final false
 void RotateToMaintain(float_t weight) ;

/// @brief Method RotateToEffector addr 0x11d0d58 size 0x11c virtual false final false
 void RotateToEffector(::RootMotion::FinalIK::IKSolverFullBody solver, float_t weight) ;

/// @brief Method GetTargetRotation addr 0x11d0724 size 0x110 virtual false final false
 ::UnityEngine::Quaternion GetTargetRotation(::RootMotion::FinalIK::IKSolverFullBody solver) ;

/// @brief Method get_lastAnimatedTargetRotation addr 0x11d0408 size 0x168 virtual false final false
 ::UnityEngine::Quaternion get_lastAnimatedTargetRotation() ;

// Ctor Parameters []
explicit ____RootMotion__FinalIK__IKMapping__BoneMap() ;

/// @brief Method .ctor addr 0x11d0e74 size 0x1c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::IKMapping
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12496))
// CS Name: RootMotion.FinalIK.IKMapping
class CORDL_TYPE IKMapping : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using BoneMap = ::RootMotion::FinalIK::____RootMotion__FinalIK__IKMapping__BoneMap;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IKMapping() = default;

// Ctor Parameters [CppParam { name: "", ty: "IKMapping", modifiers: " const&", def_value: None }]
constexpr IKMapping(IKMapping const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IKMapping", modifiers: "&&", def_value: None }]
constexpr IKMapping(IKMapping&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IKMapping(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IKMapping& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IKMapping& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IKMapping& operator=(IKMapping&& o) noexcept = default;
  constexpr IKMapping& operator=(IKMapping const& o) noexcept = default;
                


// Methods

/// @brief Method IsValid addr 0x11cfd08 size 0x8 virtual true final false
 bool IsValid(::RootMotion::FinalIK::IKSolver solver, ByRef<::StringW> message) ;

/// @brief Method Initiate addr 0x11cfd10 size 0x4 virtual true final false
 void Initiate(::RootMotion::FinalIK::IKSolverFullBody solver) ;

/// @brief Method BoneIsValid addr 0x11cfd14 size 0x13c virtual false final false
 bool BoneIsValid(::UnityEngine::Transform bone, ::RootMotion::FinalIK::IKSolver solver, ByRef<::StringW> message, ::RootMotion::____RootMotion__Warning__Logger logger) ;

/// @brief Method SolveFABRIKJoint addr 0x11cfe50 size 0x114 virtual false final false
 ::UnityEngine::Vector3 SolveFABRIKJoint(::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2, float_t length) ;

// Ctor Parameters []
explicit IKMapping() ;

/// @brief Method .ctor addr 0x11cff64 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::FinalIK::IKMapping);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKMapping, "RootMotion.FinalIK", "IKMapping");
NEED_NO_BOX(::RootMotion::FinalIK::____RootMotion__FinalIK__IKMapping__BoneMap);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::____RootMotion__FinalIK__IKMapping__BoneMap, "RootMotion.FinalIK", "IKMapping/BoneMap");
