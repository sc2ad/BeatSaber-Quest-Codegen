#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class IKConstraintBend;
}
namespace RootMotion::FinalIK {
class IKSolverFullBody;
}
namespace RootMotion::FinalIK {
class ____RootMotion__FinalIK__IKSolver__Node;
}
namespace RootMotion::FinalIK {
class ____RootMotion__FinalIK__IKSolver__Point;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
struct ____RootMotion__FinalIK__FBIKChain__Smoothing;
}
namespace RootMotion::FinalIK {
class FBIKChain;
}
namespace RootMotion::FinalIK {
class ____RootMotion__FinalIK__FBIKChain__ChildConstraint;
}
// Type: ::ChildConstraint
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12490))
// CS Name: RootMotion.FinalIK.FBIKChain::ChildConstraint
class CORDL_TYPE ____RootMotion__FinalIK__FBIKChain__ChildConstraint : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____RootMotion__FinalIK__FBIKChain__ChildConstraint() = default;

// Ctor Parameters [CppParam { name: "", ty: "____RootMotion__FinalIK__FBIKChain__ChildConstraint", modifiers: " const&", def_value: None }]
constexpr ____RootMotion__FinalIK__FBIKChain__ChildConstraint(____RootMotion__FinalIK__FBIKChain__ChildConstraint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____RootMotion__FinalIK__FBIKChain__ChildConstraint", modifiers: "&&", def_value: None }]
constexpr ____RootMotion__FinalIK__FBIKChain__ChildConstraint(____RootMotion__FinalIK__FBIKChain__ChildConstraint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____RootMotion__FinalIK__FBIKChain__ChildConstraint(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____RootMotion__FinalIK__FBIKChain__ChildConstraint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____RootMotion__FinalIK__FBIKChain__ChildConstraint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____RootMotion__FinalIK__FBIKChain__ChildConstraint& operator=(____RootMotion__FinalIK__FBIKChain__ChildConstraint&& o) noexcept = default;
  constexpr ____RootMotion__FinalIK__FBIKChain__ChildConstraint& operator=(____RootMotion__FinalIK__FBIKChain__ChildConstraint const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_pushElasticity, put=__set_pushElasticity))  pushElasticity;

constexpr void __set_pushElasticity(float_t value) ;

constexpr float_t __get_pushElasticity() const;

 float_t __declspec(property(get=__get_pullElasticity, put=__set_pullElasticity))  pullElasticity;

constexpr void __set_pullElasticity(float_t value) ;

constexpr float_t __get_pullElasticity() const;

 ::UnityEngine::Transform __declspec(property(get=__get_bone1, put=__set_bone1))  bone1;

constexpr void __set_bone1(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_bone1() const;

 ::UnityEngine::Transform __declspec(property(get=__get_bone2, put=__set_bone2))  bone2;

constexpr void __set_bone2(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_bone2() const;

 float_t __declspec(property(get=__get__nominalDistance_k__BackingField, put=__set__nominalDistance_k__BackingField))  _nominalDistance_k__BackingField;

constexpr void __set__nominalDistance_k__BackingField(float_t value) ;

constexpr float_t __get__nominalDistance_k__BackingField() const;

 bool __declspec(property(get=__get__isRigid_k__BackingField, put=__set__isRigid_k__BackingField))  _isRigid_k__BackingField;

constexpr void __set__isRigid_k__BackingField(bool value) ;

constexpr bool __get__isRigid_k__BackingField() const;

 float_t __declspec(property(get=__get_crossFade, put=__set_crossFade))  crossFade;

constexpr void __set_crossFade(float_t value) ;

constexpr float_t __get_crossFade() const;

 float_t __declspec(property(get=__get_inverseCrossFade, put=__set_inverseCrossFade))  inverseCrossFade;

constexpr void __set_inverseCrossFade(float_t value) ;

constexpr float_t __get_inverseCrossFade() const;

 int32_t __declspec(property(get=__get_chain1Index, put=__set_chain1Index))  chain1Index;

constexpr void __set_chain1Index(int32_t value) ;

constexpr int32_t __get_chain1Index() const;

 int32_t __declspec(property(get=__get_chain2Index, put=__set_chain2Index))  chain2Index;

constexpr void __set_chain2Index(int32_t value) ;

constexpr int32_t __get_chain2Index() const;


// Properties

 float_t __declspec(property(get=get_nominalDistance, put=set_nominalDistance))  nominalDistance;

 bool __declspec(property(get=get_isRigid, put=set_isRigid))  isRigid;


// Methods

/// @brief Method get_nominalDistance addr 0x11cd7c8 size 0x8 virtual false final false
 float_t get_nominalDistance() ;

/// @brief Method set_nominalDistance addr 0x11cd7d0 size 0x8 virtual false final false
 void set_nominalDistance(float_t value) ;

/// @brief Method get_isRigid addr 0x11cd7d8 size 0x8 virtual false final false
 bool get_isRigid() ;

/// @brief Method set_isRigid addr 0x11cd7e0 size 0xc virtual false final false
 void set_isRigid(bool value) ;

// Ctor Parameters [CppParam { name: "bone1", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "bone2", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "pushElasticity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "pullElasticity", ty: "float_t", modifiers: "", def_value: None }]
explicit ____RootMotion__FinalIK__FBIKChain__ChildConstraint(::UnityEngine::Transform bone1, ::UnityEngine::Transform bone2, float_t pushElasticity, float_t pullElasticity) ;

/// @brief Method .ctor addr 0x11cd7ec size 0x40 virtual false final false
 void _ctor(::UnityEngine::Transform bone1, ::UnityEngine::Transform bone2, float_t pushElasticity, float_t pullElasticity) ;

/// @brief Method Initiate addr 0x11cb4d4 size 0x54 virtual false final false
 void Initiate(::RootMotion::FinalIK::IKSolverFullBody solver) ;

/// @brief Method OnPreSolve addr 0x11cbb80 size 0x1e4 virtual false final false
 void OnPreSolve(::RootMotion::FinalIK::IKSolverFullBody solver) ;

/// @brief Method Solve addr 0x11cd58c size 0x23c virtual false final false
 void Solve(::RootMotion::FinalIK::IKSolverFullBody solver) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::Smoothing
namespace RootMotion::FinalIK {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12491))
// CS Name: RootMotion.FinalIK.FBIKChain::Smoothing
struct CORDL_TYPE ____RootMotion__FinalIK__FBIKChain__Smoothing : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____RootMotion__FinalIK__FBIKChain__Smoothing(int32_t value__) noexcept;


                    constexpr ____RootMotion__FinalIK__FBIKChain__Smoothing(____RootMotion__FinalIK__FBIKChain__Smoothing const&) = default;
                    constexpr ____RootMotion__FinalIK__FBIKChain__Smoothing(____RootMotion__FinalIK__FBIKChain__Smoothing&&) = default;
                    constexpr ____RootMotion__FinalIK__FBIKChain__Smoothing& operator=(____RootMotion__FinalIK__FBIKChain__Smoothing const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____RootMotion__FinalIK__FBIKChain__Smoothing& operator=(____RootMotion__FinalIK__FBIKChain__Smoothing&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____RootMotion__FinalIK__FBIKChain__Smoothing(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______RootMotion__FinalIK__FBIKChain__Smoothing_Unwrapped : int32_t {
__None = 0,
__Exponential = 1,
__Cubic = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______RootMotion__FinalIK__FBIKChain__Smoothing_Unwrapped () const noexcept {
return std::bit_cast<______RootMotion__FinalIK__FBIKChain__Smoothing_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::RootMotion::FinalIK::____RootMotion__FinalIK__FBIKChain__Smoothing const None;

/// @brief Field Exponential offset 0
static ::RootMotion::FinalIK::____RootMotion__FinalIK__FBIKChain__Smoothing const Exponential;

/// @brief Field Cubic offset 0
static ::RootMotion::FinalIK::____RootMotion__FinalIK__FBIKChain__Smoothing const Cubic;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::FBIKChain
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12492))
// CS Name: RootMotion.FinalIK.FBIKChain
class CORDL_TYPE FBIKChain : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Smoothing = ::RootMotion::FinalIK::____RootMotion__FinalIK__FBIKChain__Smoothing;

using ChildConstraint = ::RootMotion::FinalIK::____RootMotion__FinalIK__FBIKChain__ChildConstraint;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~FBIKChain() = default;

// Ctor Parameters [CppParam { name: "", ty: "FBIKChain", modifiers: " const&", def_value: None }]
constexpr FBIKChain(FBIKChain const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FBIKChain", modifiers: "&&", def_value: None }]
constexpr FBIKChain(FBIKChain&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FBIKChain(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FBIKChain& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FBIKChain& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FBIKChain& operator=(FBIKChain&& o) noexcept = default;
  constexpr FBIKChain& operator=(FBIKChain const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_pin, put=__set_pin))  pin;

constexpr void __set_pin(float_t value) ;

constexpr float_t __get_pin() const;

 float_t __declspec(property(get=__get_pull, put=__set_pull))  pull;

constexpr void __set_pull(float_t value) ;

constexpr float_t __get_pull() const;

 float_t __declspec(property(get=__get_push, put=__set_push))  push;

constexpr void __set_push(float_t value) ;

constexpr float_t __get_push() const;

 float_t __declspec(property(get=__get_pushParent, put=__set_pushParent))  pushParent;

constexpr void __set_pushParent(float_t value) ;

constexpr float_t __get_pushParent() const;

 float_t __declspec(property(get=__get_reach, put=__set_reach))  reach;

constexpr void __set_reach(float_t value) ;

constexpr float_t __get_reach() const;

 ::RootMotion::FinalIK::____RootMotion__FinalIK__FBIKChain__Smoothing __declspec(property(get=__get_reachSmoothing, put=__set_reachSmoothing))  reachSmoothing;

constexpr void __set_reachSmoothing(::RootMotion::FinalIK::____RootMotion__FinalIK__FBIKChain__Smoothing value) ;

constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__FBIKChain__Smoothing __get_reachSmoothing() const;

 ::RootMotion::FinalIK::____RootMotion__FinalIK__FBIKChain__Smoothing __declspec(property(get=__get_pushSmoothing, put=__set_pushSmoothing))  pushSmoothing;

constexpr void __set_pushSmoothing(::RootMotion::FinalIK::____RootMotion__FinalIK__FBIKChain__Smoothing value) ;

constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__FBIKChain__Smoothing __get_pushSmoothing() const;

 ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Node> __declspec(property(get=__get_nodes, put=__set_nodes))  nodes;

constexpr void __set_nodes(::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Node> value) ;

constexpr ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Node> __get_nodes() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_children, put=__set_children))  children;

constexpr void __set_children(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_children() const;

 ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__FBIKChain__ChildConstraint> __declspec(property(get=__get_childConstraints, put=__set_childConstraints))  childConstraints;

constexpr void __set_childConstraints(::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__FBIKChain__ChildConstraint> value) ;

constexpr ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__FBIKChain__ChildConstraint> __get_childConstraints() const;

 ::RootMotion::FinalIK::IKConstraintBend __declspec(property(get=__get_bendConstraint, put=__set_bendConstraint))  bendConstraint;

constexpr void __set_bendConstraint(::RootMotion::FinalIK::IKConstraintBend value) ;

constexpr ::RootMotion::FinalIK::IKConstraintBend __get_bendConstraint() const;

 float_t __declspec(property(get=__get_rootLength, put=__set_rootLength))  rootLength;

constexpr void __set_rootLength(float_t value) ;

constexpr float_t __get_rootLength() const;

 bool __declspec(property(get=__get_initiated, put=__set_initiated))  initiated;

constexpr void __set_initiated(bool value) ;

constexpr bool __get_initiated() const;

 float_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(float_t value) ;

constexpr float_t __get_length() const;

 float_t __declspec(property(get=__get_distance, put=__set_distance))  distance;

constexpr void __set_distance(float_t value) ;

constexpr float_t __get_distance() const;

 ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Point __declspec(property(get=__get_p, put=__set_p))  p;

constexpr void __set_p(::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Point value) ;

constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Point __get_p() const;

 float_t __declspec(property(get=__get_reachForce, put=__set_reachForce))  reachForce;

constexpr void __set_reachForce(float_t value) ;

constexpr float_t __get_reachForce() const;

 float_t __declspec(property(get=__get_pullParentSum, put=__set_pullParentSum))  pullParentSum;

constexpr void __set_pullParentSum(float_t value) ;

constexpr float_t __get_pullParentSum() const;

 ::ArrayW<float_t> __declspec(property(get=__get_crossFades, put=__set_crossFades))  crossFades;

constexpr void __set_crossFades(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_crossFades() const;

 float_t __declspec(property(get=__get_sqrMag1, put=__set_sqrMag1))  sqrMag1;

constexpr void __set_sqrMag1(float_t value) ;

constexpr float_t __get_sqrMag1() const;

 float_t __declspec(property(get=__get_sqrMag2, put=__set_sqrMag2))  sqrMag2;

constexpr void __set_sqrMag2(float_t value) ;

constexpr float_t __get_sqrMag2() const;

 float_t __declspec(property(get=__get_sqrMagDif, put=__set_sqrMagDif))  sqrMagDif;

constexpr void __set_sqrMagDif(float_t value) ;

constexpr float_t __get_sqrMagDif() const;

/// @brief Field maxLimbLength offset 0
static constexpr float_t  maxLimbLength{0.99999};


// Methods

// Ctor Parameters []
explicit FBIKChain() ;

/// @brief Method .ctor addr 0x11ca890 size 0xfc virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "pin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "pull", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "nodeTransforms", ty: "::ArrayW<::UnityEngine::Transform>", modifiers: "", def_value: None }]
explicit FBIKChain(float_t pin, float_t pull, ::ArrayW<::UnityEngine::Transform> nodeTransforms) ;

/// @brief Method .ctor addr 0x11ca9f8 size 0x134 virtual false final false
 void _ctor(float_t pin, float_t pull, ::ArrayW<::UnityEngine::Transform> nodeTransforms) ;

/// @brief Method SetNodes addr 0x11cab2c size 0x118 virtual false final false
 void SetNodes(::ArrayW<::UnityEngine::Transform> boneTransforms) ;

/// @brief Method GetNodeIndex addr 0x11cac44 size 0xbc virtual false final false
 int32_t GetNodeIndex(::UnityEngine::Transform boneTransform) ;

/// @brief Method IsValid addr 0x11cad00 size 0x10c virtual false final false
 bool IsValid(ByRef<::StringW> message) ;

/// @brief Method Initiate addr 0x11cae0c size 0x16c virtual false final false
 void Initiate(::RootMotion::FinalIK::IKSolverFullBody solver) ;

/// @brief Method ReadPose addr 0x11cb79c size 0x3e4 virtual false final false
 void ReadPose(::RootMotion::FinalIK::IKSolverFullBody solver, bool fullBody) ;

/// @brief Method CalculateBoneLengths addr 0x11caf78 size 0x55c virtual false final false
 void CalculateBoneLengths(::RootMotion::FinalIK::IKSolverFullBody solver) ;

/// @brief Method Reach addr 0x11cbd64 size 0x294 virtual false final false
 void Reach(::RootMotion::FinalIK::IKSolverFullBody solver) ;

/// @brief Method Push addr 0x11cbff8 size 0x2d0 virtual false final false
 ::UnityEngine::Vector3 Push(::RootMotion::FinalIK::IKSolverFullBody solver) ;

/// @brief Method SolveTrigonometric addr 0x11cc2c8 size 0x238 virtual false final false
 void SolveTrigonometric(::RootMotion::FinalIK::IKSolverFullBody solver, bool calculateBendDirection) ;

/// @brief Method Stage1 addr 0x11ccc90 size 0x2ac virtual false final false
 void Stage1(::RootMotion::FinalIK::IKSolverFullBody solver) ;

/// @brief Method Stage2 addr 0x11cd188 size 0x104 virtual false final false
 void Stage2(::RootMotion::FinalIK::IKSolverFullBody solver, ::UnityEngine::Vector3 position) ;

/// @brief Method SolveConstraintSystems addr 0x11cd388 size 0xdc virtual false final false
 void SolveConstraintSystems(::RootMotion::FinalIK::IKSolverFullBody solver) ;

/// @brief Method SolveFABRIKJoint addr 0x11cd074 size 0x114 virtual false final false
 ::UnityEngine::Vector3 SolveFABRIKJoint(::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2, float_t length) ;

/// @brief Method GetDirToBendPoint addr 0x11ccb30 size 0x160 virtual false final false
 ::UnityEngine::Vector3 GetDirToBendPoint(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 bendDirection, float_t directionMagnitude) ;

/// @brief Method SolveChildConstraints addr 0x11cd010 size 0x64 virtual false final false
 void SolveChildConstraints(::RootMotion::FinalIK::IKSolverFullBody solver) ;

/// @brief Method SolveLinearConstraint addr 0x11cd464 size 0x128 virtual false final false
 void SolveLinearConstraint(::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Node node1, ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Node node2, float_t crossFade, float_t distance) ;

/// @brief Method ForwardReach addr 0x11ccf3c size 0xd4 virtual false final false
 void ForwardReach(::UnityEngine::Vector3 position) ;

/// @brief Method BackwardReach addr 0x11cd28c size 0xfc virtual false final false
 void BackwardReach(::UnityEngine::Vector3 position) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::____RootMotion__FinalIK__FBIKChain__Smoothing, "RootMotion.FinalIK", "FBIKChain/Smoothing");
NEED_NO_BOX(::RootMotion::FinalIK::FBIKChain);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::FBIKChain, "RootMotion.FinalIK", "FBIKChain");
NEED_NO_BOX(::RootMotion::FinalIK::____RootMotion__FinalIK__FBIKChain__ChildConstraint);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::____RootMotion__FinalIK__FBIKChain__ChildConstraint, "RootMotion.FinalIK", "FBIKChain/ChildConstraint");
