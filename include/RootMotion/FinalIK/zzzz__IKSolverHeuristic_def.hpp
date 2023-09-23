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
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolver__Bone;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKSolverHeuristic;
}
// Type: RootMotion.FinalIK::IKSolverHeuristic
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12506))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12516))
// CS Name: RootMotion.FinalIK.IKSolverHeuristic
class CORDL_TYPE IKSolverHeuristic : public RootMotion::FinalIK::IKSolver {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~IKSolverHeuristic() = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverHeuristic", modifiers: " const&", def_value: None }]
constexpr IKSolverHeuristic(IKSolverHeuristic const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverHeuristic", modifiers: "&&", def_value: None }]
constexpr IKSolverHeuristic(IKSolverHeuristic&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IKSolverHeuristic(void* ptr) noexcept : RootMotion::FinalIK::IKSolver(ptr) {
}


  constexpr IKSolverHeuristic& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IKSolverHeuristic& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IKSolverHeuristic& operator=(IKSolverHeuristic&& o) noexcept = default;
  constexpr IKSolverHeuristic& operator=(IKSolverHeuristic const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get_target, put=__set_target))  target;

constexpr void __set_target(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_target() const;

 float_t __declspec(property(get=__get_tolerance, put=__set_tolerance))  tolerance;

constexpr void __set_tolerance(float_t value) ;

constexpr float_t __get_tolerance() const;

 int32_t __declspec(property(get=__get_maxIterations, put=__set_maxIterations))  maxIterations;

constexpr void __set_maxIterations(int32_t value) ;

constexpr int32_t __get_maxIterations() const;

 bool __declspec(property(get=__get_useRotationLimits, put=__set_useRotationLimits))  useRotationLimits;

constexpr void __set_useRotationLimits(bool value) ;

constexpr bool __get_useRotationLimits() const;

 bool __declspec(property(get=__get_XY, put=__set_XY))  XY;

constexpr void __set_XY(bool value) ;

constexpr bool __get_XY() const;

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Bone> __declspec(property(get=__get_bones, put=__set_bones))  bones;

constexpr void __set_bones(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Bone> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Bone> __get_bones() const;

 UnityEngine::Vector3 __declspec(property(get=__get_lastLocalDirection, put=__set_lastLocalDirection))  lastLocalDirection;

constexpr void __set_lastLocalDirection(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_lastLocalDirection() const;

 float_t __declspec(property(get=__get_chainLength, put=__set_chainLength))  chainLength;

constexpr void __set_chainLength(float_t value) ;

constexpr float_t __get_chainLength() const;


// Properties

 int32_t __declspec(property(get=get_minBones))  minBones;

 bool __declspec(property(get=get_boneLengthCanBeZero))  boneLengthCanBeZero;

 bool __declspec(property(get=get_allowCommonParent))  allowCommonParent;

 UnityEngine::Vector3 __declspec(property(get=get_localDirection))  localDirection;

 float_t __declspec(property(get=get_positionOffset))  positionOffset;


// Methods

/// @brief Method SetChain addr 0x11dea9c size 0x17c virtual false final false
 bool SetChain(::ArrayW<UnityEngine::Transform> hierarchy, UnityEngine::Transform root) ;

/// @brief Method AddBone addr 0x11dec18 size 0x12c virtual false final false
 void AddBone(UnityEngine::Transform bone) ;

/// @brief Method StoreDefaultLocalState addr 0x11ded44 size 0x5c virtual true final false
 void StoreDefaultLocalState() ;

/// @brief Method FixTransforms addr 0x11deda0 size 0x70 virtual true final false
 void FixTransforms() ;

/// @brief Method IsValid addr 0x11dee10 size 0x3c4 virtual true final false
 bool IsValid(ByRef<::StringW> message) ;

/// @brief Method GetPoints addr 0x11df1d4 size 0x8 virtual true final false
 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point> GetPoints() ;

/// @brief Method GetPoint addr 0x11df1dc size 0xdc virtual true final false
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point GetPoint(UnityEngine::Transform transform) ;

/// @brief Method get_minBones addr 0x11df2b8 size 0x8 virtual true final false
 int32_t get_minBones() ;

/// @brief Method get_boneLengthCanBeZero addr 0x11df2c0 size 0x8 virtual true final false
 bool get_boneLengthCanBeZero() ;

/// @brief Method get_allowCommonParent addr 0x11df2c8 size 0x8 virtual true final false
 bool get_allowCommonParent() ;

/// @brief Method OnInitiate addr 0x11df2d0 size 0x4 virtual true final false
 void OnInitiate() ;

/// @brief Method OnUpdate addr 0x11df2d4 size 0x4 virtual true final false
 void OnUpdate() ;

/// @brief Method InitiateBones addr 0x11d6bf8 size 0x488 virtual false final false
 void InitiateBones() ;

/// @brief Method get_localDirection addr 0x11df2d8 size 0xbc virtual true final false
 UnityEngine::Vector3 get_localDirection() ;

/// @brief Method get_positionOffset addr 0x11d770c size 0x48 virtual false final false
 float_t get_positionOffset() ;

/// @brief Method GetSingularityOffset addr 0x11d7360 size 0x3ac virtual false final false
 UnityEngine::Vector3 GetSingularityOffset() ;

/// @brief Method SingularityDetected addr 0x11df394 size 0x294 virtual false final false
 bool SingularityDetected() ;

// Ctor Parameters []
explicit IKSolverHeuristic() ;

/// @brief Method .ctor addr 0x11d5ccc size 0x74 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::IKSolverHeuristic);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverHeuristic, "RootMotion.FinalIK", "IKSolverHeuristic");
