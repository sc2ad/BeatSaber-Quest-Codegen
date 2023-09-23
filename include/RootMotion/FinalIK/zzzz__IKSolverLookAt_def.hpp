#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolver__Point;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKSolverLookAt;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolverLookAt__LookAtBone;
}
// Type: ::LookAtBone
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12502))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12521))
// CS Name: RootMotion.FinalIK.IKSolverLookAt::LookAtBone
class CORDL_TYPE RootMotion__FinalIK__IKSolverLookAt__LookAtBone : public RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Bone {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~RootMotion__FinalIK__IKSolverLookAt__LookAtBone() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__IKSolverLookAt__LookAtBone", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__IKSolverLookAt__LookAtBone(RootMotion__FinalIK__IKSolverLookAt__LookAtBone const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__IKSolverLookAt__LookAtBone", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__IKSolverLookAt__LookAtBone(RootMotion__FinalIK__IKSolverLookAt__LookAtBone&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__IKSolverLookAt__LookAtBone(void* ptr) noexcept : RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Bone(ptr) {
}


  constexpr RootMotion__FinalIK__IKSolverLookAt__LookAtBone& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__IKSolverLookAt__LookAtBone& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__IKSolverLookAt__LookAtBone& operator=(RootMotion__FinalIK__IKSolverLookAt__LookAtBone&& o) noexcept = default;
  constexpr RootMotion__FinalIK__IKSolverLookAt__LookAtBone& operator=(RootMotion__FinalIK__IKSolverLookAt__LookAtBone const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_baseForwardOffsetEuler, put=__set_baseForwardOffsetEuler))  baseForwardOffsetEuler;

constexpr void __set_baseForwardOffsetEuler(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_baseForwardOffsetEuler() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_forward))  forward;


// Methods

// Ctor Parameters []
explicit RootMotion__FinalIK__IKSolverLookAt__LookAtBone() ;

/// @brief Method .ctor addr 0x11e3f8c size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "transform", ty: "UnityEngine::Transform", modifiers: "", def_value: None }]
explicit RootMotion__FinalIK__IKSolverLookAt__LookAtBone(UnityEngine::Transform transform) ;

/// @brief Method .ctor addr 0x11e2a94 size 0x28 virtual false final false
 void _ctor(UnityEngine::Transform transform) ;

/// @brief Method Initiate addr 0x11e2d44 size 0xec virtual false final false
 void Initiate(UnityEngine::Transform root) ;

/// @brief Method LookAt addr 0x11e3c7c size 0x108 virtual false final false
 void LookAt(UnityEngine::Vector3 direction, float_t weight) ;

/// @brief Method get_forward addr 0x11e3934 size 0x30 virtual false final false
 UnityEngine::Vector3 get_forward() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::IKSolverLookAt
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12506))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12522))
// CS Name: RootMotion.FinalIK.IKSolverLookAt
class CORDL_TYPE IKSolverLookAt : public RootMotion::FinalIK::IKSolver {
public:
// Declarations
using LookAtBone = RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLookAt__LookAtBone;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc8};

virtual ~IKSolverLookAt() = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverLookAt", modifiers: " const&", def_value: None }]
constexpr IKSolverLookAt(IKSolverLookAt const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverLookAt", modifiers: "&&", def_value: None }]
constexpr IKSolverLookAt(IKSolverLookAt&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IKSolverLookAt(void* ptr) noexcept : RootMotion::FinalIK::IKSolver(ptr) {
}


  constexpr IKSolverLookAt& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IKSolverLookAt& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IKSolverLookAt& operator=(IKSolverLookAt&& o) noexcept = default;
  constexpr IKSolverLookAt& operator=(IKSolverLookAt const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get_target, put=__set_target))  target;

constexpr void __set_target(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_target() const;

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLookAt__LookAtBone> __declspec(property(get=__get_spine, put=__set_spine))  spine;

constexpr void __set_spine(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLookAt__LookAtBone> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLookAt__LookAtBone> __get_spine() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLookAt__LookAtBone __declspec(property(get=__get_head, put=__set_head))  head;

constexpr void __set_head(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLookAt__LookAtBone value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLookAt__LookAtBone __get_head() const;

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLookAt__LookAtBone> __declspec(property(get=__get_eyes, put=__set_eyes))  eyes;

constexpr void __set_eyes(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLookAt__LookAtBone> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLookAt__LookAtBone> __get_eyes() const;

 float_t __declspec(property(get=__get_bodyWeight, put=__set_bodyWeight))  bodyWeight;

constexpr void __set_bodyWeight(float_t value) ;

constexpr float_t __get_bodyWeight() const;

 float_t __declspec(property(get=__get_headWeight, put=__set_headWeight))  headWeight;

constexpr void __set_headWeight(float_t value) ;

constexpr float_t __get_headWeight() const;

 float_t __declspec(property(get=__get_eyesWeight, put=__set_eyesWeight))  eyesWeight;

constexpr void __set_eyesWeight(float_t value) ;

constexpr float_t __get_eyesWeight() const;

 float_t __declspec(property(get=__get_clampWeight, put=__set_clampWeight))  clampWeight;

constexpr void __set_clampWeight(float_t value) ;

constexpr float_t __get_clampWeight() const;

 float_t __declspec(property(get=__get_clampWeightHead, put=__set_clampWeightHead))  clampWeightHead;

constexpr void __set_clampWeightHead(float_t value) ;

constexpr float_t __get_clampWeightHead() const;

 float_t __declspec(property(get=__get_clampWeightEyes, put=__set_clampWeightEyes))  clampWeightEyes;

constexpr void __set_clampWeightEyes(float_t value) ;

constexpr float_t __get_clampWeightEyes() const;

 int32_t __declspec(property(get=__get_clampSmoothing, put=__set_clampSmoothing))  clampSmoothing;

constexpr void __set_clampSmoothing(int32_t value) ;

constexpr int32_t __get_clampSmoothing() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get_spineWeightCurve, put=__set_spineWeightCurve))  spineWeightCurve;

constexpr void __set_spineWeightCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get_spineWeightCurve() const;

 UnityEngine::Vector3 __declspec(property(get=__get_spineTargetOffset, put=__set_spineTargetOffset))  spineTargetOffset;

constexpr void __set_spineTargetOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_spineTargetOffset() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_spineForwards, put=__set_spineForwards))  spineForwards;

constexpr void __set_spineForwards(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get_spineForwards() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_headForwards, put=__set_headForwards))  headForwards;

constexpr void __set_headForwards(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get_headForwards() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_eyeForward, put=__set_eyeForward))  eyeForward;

constexpr void __set_eyeForward(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get_eyeForward() const;


// Properties

 bool __declspec(property(get=get_spineIsValid))  spineIsValid;

 bool __declspec(property(get=get_spineIsEmpty))  spineIsEmpty;

 bool __declspec(property(get=get_headIsValid))  headIsValid;

 bool __declspec(property(get=get_headIsEmpty))  headIsEmpty;

 bool __declspec(property(get=get_eyesIsValid))  eyesIsValid;

 bool __declspec(property(get=get_eyesIsEmpty))  eyesIsEmpty;


// Methods

/// @brief Method SetLookAtWeight addr 0x11e1d14 size 0x1c virtual false final false
 void SetLookAtWeight(float_t weight) ;

/// @brief Method SetLookAtWeight addr 0x11e1d30 size 0x2c virtual false final false
 void SetLookAtWeight(float_t weight, float_t bodyWeight) ;

/// @brief Method SetLookAtWeight addr 0x11e1d5c size 0x38 virtual false final false
 void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight) ;

/// @brief Method SetLookAtWeight addr 0x11e1d94 size 0x48 virtual false final false
 void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight) ;

/// @brief Method SetLookAtWeight addr 0x11e1ddc size 0x58 virtual false final false
 void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight, float_t clampWeight) ;

/// @brief Method SetLookAtWeight addr 0x11e1e34 size 0x70 virtual false final false
 void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight, float_t clampWeight, float_t clampWeightHead, float_t clampWeightEyes) ;

/// @brief Method StoreDefaultLocalState addr 0x11e1ea4 size 0x118 virtual true final false
 void StoreDefaultLocalState() ;

/// @brief Method FixTransforms addr 0x11e1fbc size 0x12c virtual true final false
 void FixTransforms() ;

/// @brief Method IsValid addr 0x11e20e8 size 0x1b0 virtual true final false
 bool IsValid(ByRef<::StringW> message) ;

/// @brief Method GetPoints addr 0x11e24f4 size 0x224 virtual true final false
 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point> GetPoints() ;

/// @brief Method GetPoint addr 0x11e2718 size 0x160 virtual true final false
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point GetPoint(UnityEngine::Transform transform) ;

/// @brief Method SetChain addr 0x11e2878 size 0xb0 virtual false final false
 bool SetChain(::ArrayW<UnityEngine::Transform> spine, UnityEngine::Transform head, ::ArrayW<UnityEngine::Transform> eyes, UnityEngine::Transform root) ;

/// @brief Method OnInitiate addr 0x11e2abc size 0x288 virtual true final false
 void OnInitiate() ;

/// @brief Method OnUpdate addr 0x11e2e30 size 0xc4 virtual true final false
 void OnUpdate() ;

/// @brief Method get_spineIsValid addr 0x11e2298 size 0xcc virtual false final false
 bool get_spineIsValid() ;

/// @brief Method get_spineIsEmpty addr 0x11e2440 size 0x24 virtual false final false
 bool get_spineIsEmpty() ;

/// @brief Method SolveSpine addr 0x11e2ef4 size 0x21c virtual false final false
 void SolveSpine() ;

/// @brief Method get_headIsValid addr 0x11e2364 size 0x10 virtual false final false
 bool get_headIsValid() ;

/// @brief Method get_headIsEmpty addr 0x11e2464 size 0x6c virtual false final false
 bool get_headIsEmpty() ;

/// @brief Method SolveHead addr 0x11e3110 size 0x348 virtual false final false
 void SolveHead() ;

/// @brief Method get_eyesIsValid addr 0x11e2374 size 0xcc virtual false final false
 bool get_eyesIsValid() ;

/// @brief Method get_eyesIsEmpty addr 0x11e24d0 size 0x24 virtual false final false
 bool get_eyesIsEmpty() ;

/// @brief Method SolveEyes addr 0x11e3458 size 0x4dc virtual false final false
 void SolveEyes() ;

/// @brief Method GetForwards addr 0x11e3964 size 0x318 virtual false final false
 ::ArrayW<UnityEngine::Vector3> GetForwards(ByRef<::ArrayW<UnityEngine::Vector3>> forwards, UnityEngine::Vector3 baseForward, UnityEngine::Vector3 targetForward, int32_t bones, float_t clamp) ;

/// @brief Method SetBones addr 0x11e2928 size 0x16c virtual false final false
 void SetBones(::ArrayW<UnityEngine::Transform> array, ByRef<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLookAt__LookAtBone>> bones) ;

// Ctor Parameters []
explicit IKSolverLookAt() ;

/// @brief Method .ctor addr 0x11e3d84 size 0x208 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::IKSolverLookAt);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverLookAt, "RootMotion.FinalIK", "IKSolverLookAt");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLookAt__LookAtBone);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLookAt__LookAtBone, "RootMotion.FinalIK", "IKSolverLookAt/LookAtBone");
