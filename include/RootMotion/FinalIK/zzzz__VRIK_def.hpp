#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace RootMotion::FinalIK {
class IKSolver;
}
namespace RootMotion::FinalIK {
class IKSolverVR;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class VRIK;
}
namespace RootMotion::FinalIK {
class ____RootMotion__FinalIK__VRIK__References;
}
// Type: ::References
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12484))
// CS Name: RootMotion.FinalIK.VRIK::References
class CORDL_TYPE ____RootMotion__FinalIK__VRIK__References : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~____RootMotion__FinalIK__VRIK__References() = default;

// Ctor Parameters [CppParam { name: "", ty: "____RootMotion__FinalIK__VRIK__References", modifiers: " const&", def_value: None }]
constexpr ____RootMotion__FinalIK__VRIK__References(____RootMotion__FinalIK__VRIK__References const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____RootMotion__FinalIK__VRIK__References", modifiers: "&&", def_value: None }]
constexpr ____RootMotion__FinalIK__VRIK__References(____RootMotion__FinalIK__VRIK__References&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____RootMotion__FinalIK__VRIK__References(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____RootMotion__FinalIK__VRIK__References& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____RootMotion__FinalIK__VRIK__References& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____RootMotion__FinalIK__VRIK__References& operator=(____RootMotion__FinalIK__VRIK__References&& o) noexcept = default;
  constexpr ____RootMotion__FinalIK__VRIK__References& operator=(____RootMotion__FinalIK__VRIK__References const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get_root, put=__set_root))  root;

constexpr void __set_root(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_root() const;

 ::UnityEngine::Transform __declspec(property(get=__get_pelvis, put=__set_pelvis))  pelvis;

constexpr void __set_pelvis(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_pelvis() const;

 ::UnityEngine::Transform __declspec(property(get=__get_spine, put=__set_spine))  spine;

constexpr void __set_spine(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_spine() const;

 ::UnityEngine::Transform __declspec(property(get=__get_chest, put=__set_chest))  chest;

constexpr void __set_chest(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_chest() const;

 ::UnityEngine::Transform __declspec(property(get=__get_neck, put=__set_neck))  neck;

constexpr void __set_neck(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_neck() const;

 ::UnityEngine::Transform __declspec(property(get=__get_head, put=__set_head))  head;

constexpr void __set_head(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_head() const;

 ::UnityEngine::Transform __declspec(property(get=__get_leftShoulder, put=__set_leftShoulder))  leftShoulder;

constexpr void __set_leftShoulder(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_leftShoulder() const;

 ::UnityEngine::Transform __declspec(property(get=__get_leftUpperArm, put=__set_leftUpperArm))  leftUpperArm;

constexpr void __set_leftUpperArm(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_leftUpperArm() const;

 ::UnityEngine::Transform __declspec(property(get=__get_leftForearm, put=__set_leftForearm))  leftForearm;

constexpr void __set_leftForearm(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_leftForearm() const;

 ::UnityEngine::Transform __declspec(property(get=__get_leftHand, put=__set_leftHand))  leftHand;

constexpr void __set_leftHand(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_leftHand() const;

 ::UnityEngine::Transform __declspec(property(get=__get_rightShoulder, put=__set_rightShoulder))  rightShoulder;

constexpr void __set_rightShoulder(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_rightShoulder() const;

 ::UnityEngine::Transform __declspec(property(get=__get_rightUpperArm, put=__set_rightUpperArm))  rightUpperArm;

constexpr void __set_rightUpperArm(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_rightUpperArm() const;

 ::UnityEngine::Transform __declspec(property(get=__get_rightForearm, put=__set_rightForearm))  rightForearm;

constexpr void __set_rightForearm(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_rightForearm() const;

 ::UnityEngine::Transform __declspec(property(get=__get_rightHand, put=__set_rightHand))  rightHand;

constexpr void __set_rightHand(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_rightHand() const;

 ::UnityEngine::Transform __declspec(property(get=__get_leftThigh, put=__set_leftThigh))  leftThigh;

constexpr void __set_leftThigh(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_leftThigh() const;

 ::UnityEngine::Transform __declspec(property(get=__get_leftCalf, put=__set_leftCalf))  leftCalf;

constexpr void __set_leftCalf(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_leftCalf() const;

 ::UnityEngine::Transform __declspec(property(get=__get_leftFoot, put=__set_leftFoot))  leftFoot;

constexpr void __set_leftFoot(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_leftFoot() const;

 ::UnityEngine::Transform __declspec(property(get=__get_leftToes, put=__set_leftToes))  leftToes;

constexpr void __set_leftToes(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_leftToes() const;

 ::UnityEngine::Transform __declspec(property(get=__get_rightThigh, put=__set_rightThigh))  rightThigh;

constexpr void __set_rightThigh(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_rightThigh() const;

 ::UnityEngine::Transform __declspec(property(get=__get_rightCalf, put=__set_rightCalf))  rightCalf;

constexpr void __set_rightCalf(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_rightCalf() const;

 ::UnityEngine::Transform __declspec(property(get=__get_rightFoot, put=__set_rightFoot))  rightFoot;

constexpr void __set_rightFoot(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_rightFoot() const;

 ::UnityEngine::Transform __declspec(property(get=__get_rightToes, put=__set_rightToes))  rightToes;

constexpr void __set_rightToes(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_rightToes() const;


// Properties

 bool __declspec(property(get=get_isFilled))  isFilled;

 bool __declspec(property(get=get_isEmpty))  isEmpty;


// Methods

/// @brief Method GetTransforms addr 0x11c66bc size 0x43c virtual false final false
 ::ArrayW<::UnityEngine::Transform> GetTransforms() ;

/// @brief Method get_isFilled addr 0x11c60d0 size 0x3bc virtual false final false
 bool get_isFilled() ;

/// @brief Method get_isEmpty addr 0x11c5d14 size 0x3bc virtual false final false
 bool get_isEmpty() ;

/// @brief Method AutoDetectReferences addr 0x11c58ec size 0x38c virtual false final false
static bool AutoDetectReferences(::UnityEngine::Transform root, ByRef<::RootMotion::FinalIK::____RootMotion__FinalIK__VRIK__References> references) ;

// Ctor Parameters []
explicit ____RootMotion__FinalIK__VRIK__References() ;

/// @brief Method .ctor addr 0x11c66b4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::VRIK
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12478))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12485))
// CS Name: RootMotion.FinalIK.VRIK
class CORDL_TYPE VRIK : public ::RootMotion::FinalIK::IK {
public:
// Declarations
using References = ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIK__References;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~VRIK() = default;

// Ctor Parameters [CppParam { name: "", ty: "VRIK", modifiers: " const&", def_value: None }]
constexpr VRIK(VRIK const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VRIK", modifiers: "&&", def_value: None }]
constexpr VRIK(VRIK&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VRIK(void* ptr) noexcept : ::RootMotion::FinalIK::IK(ptr) {
}


  constexpr VRIK& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VRIK& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VRIK& operator=(VRIK&& o) noexcept = default;
  constexpr VRIK& operator=(VRIK const& o) noexcept = default;
                


// Fields

 ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIK__References __declspec(property(get=__get_references, put=__set_references))  references;

constexpr void __set_references(::RootMotion::FinalIK::____RootMotion__FinalIK__VRIK__References value) ;

constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIK__References __get_references() const;

 ::RootMotion::FinalIK::IKSolverVR __declspec(property(get=__get_solver, put=__set_solver))  solver;

constexpr void __set_solver(::RootMotion::FinalIK::IKSolverVR value) ;

constexpr ::RootMotion::FinalIK::IKSolverVR __get_solver() const;


// Methods

/// @brief Method OpenUserManual addr 0x11c5804 size 0x44 virtual true final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x11c5848 size 0x44 virtual true final false
 void OpenScriptReference() ;

/// @brief Method OpenSetupTutorial addr 0x11c588c size 0x44 virtual false final false
 void OpenSetupTutorial() ;

/// @brief Method AutoDetectReferences addr 0x11c58d0 size 0x1c virtual false final false
 void AutoDetectReferences() ;

/// @brief Method GuessHandOrientations addr 0x11c5c78 size 0x28 virtual false final false
 void GuessHandOrientations() ;

/// @brief Method GetIKSolver addr 0x11c5ca0 size 0x8 virtual true final false
 ::RootMotion::FinalIK::IKSolver GetIKSolver() ;

/// @brief Method InitiateSolver addr 0x11c5ca8 size 0x6c virtual true final false
 void InitiateSolver() ;

/// @brief Method UpdateSolver addr 0x11c648c size 0x190 virtual true final false
 void UpdateSolver() ;

// Ctor Parameters []
explicit VRIK() ;

/// @brief Method .ctor addr 0x11c661c size 0x98 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::FinalIK::VRIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::VRIK, "RootMotion.FinalIK", "VRIK");
NEED_NO_BOX(::RootMotion::FinalIK::____RootMotion__FinalIK__VRIK__References);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::____RootMotion__FinalIK__VRIK__References, "RootMotion.FinalIK", "VRIK/References");
