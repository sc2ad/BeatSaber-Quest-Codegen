#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverHeuristic_def.hpp"
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolver__IterationDelegate;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKSolverCCD;
}
// Type: RootMotion.FinalIK::IKSolverCCD
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12516))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12509))
// CS Name: RootMotion.FinalIK.IKSolverCCD
class CORDL_TYPE IKSolverCCD : public RootMotion::FinalIK::IKSolverHeuristic {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~IKSolverCCD() = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverCCD", modifiers: " const&", def_value: None }]
constexpr IKSolverCCD(IKSolverCCD const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverCCD", modifiers: "&&", def_value: None }]
constexpr IKSolverCCD(IKSolverCCD&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IKSolverCCD(void* ptr) noexcept : RootMotion::FinalIK::IKSolverHeuristic(ptr) {
}


  constexpr IKSolverCCD& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IKSolverCCD& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IKSolverCCD& operator=(IKSolverCCD&& o) noexcept = default;
  constexpr IKSolverCCD& operator=(IKSolverCCD const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__IterationDelegate __declspec(property(get=__get_OnPreIteration, put=__set_OnPreIteration))  OnPreIteration;

constexpr void __set_OnPreIteration(RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__IterationDelegate value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__IterationDelegate __get_OnPreIteration() const;


// Methods

/// @brief Method FadeOutBoneWeights addr 0x11d6b1c size 0x70 virtual false final false
 void FadeOutBoneWeights() ;

/// @brief Method OnInitiate addr 0x11d6b8c size 0x6c virtual true final false
 void OnInitiate() ;

/// @brief Method OnUpdate addr 0x11d7080 size 0x2e0 virtual true final false
 void OnUpdate() ;

/// @brief Method Solve addr 0x11d7754 size 0x690 virtual false final false
 void Solve(UnityEngine::Vector3 targetPosition) ;

static RootMotion::FinalIK::IKSolverCCD New_ctor() ;

/// @brief Method .ctor addr 0x11d7de4 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::IKSolverCCD);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverCCD, "RootMotion.FinalIK", "IKSolverCCD");
