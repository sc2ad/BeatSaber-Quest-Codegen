#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
namespace {
namespace RootMotion::FinalIK {
class IKSolverLeg;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class LegIK;
}
// Type: RootMotion.FinalIK::LegIK
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12478))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12480))
// CS Name: RootMotion.FinalIK.LegIK
class CORDL_TYPE LegIK : public ::RootMotion::FinalIK::IK {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LegIK() = default;

// Ctor Parameters [CppParam { name: "", ty: "LegIK", modifiers: " const&", def_value: None }]
constexpr LegIK(LegIK const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LegIK", modifiers: "&&", def_value: None }]
constexpr LegIK(LegIK&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LegIK(void* ptr) noexcept : ::RootMotion::FinalIK::IK(ptr) {
}


  constexpr LegIK& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LegIK& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LegIK& operator=(LegIK&& o) noexcept = default;
  constexpr LegIK& operator=(LegIK const& o) noexcept = default;
                


// Fields

 ::RootMotion::FinalIK::IKSolverLeg __declspec(property(get=__get_solver, put=__set_solver))  solver;

constexpr void __set_solver(::RootMotion::FinalIK::IKSolverLeg value) ;

constexpr ::RootMotion::FinalIK::IKSolverLeg __get_solver() const;


// Methods

/// @brief Method OpenUserManual addr 0x11c5204 size 0x44 virtual true final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x11c5248 size 0x44 virtual true final false
 void OpenScriptReference() ;

/// @brief Method SupportGroup addr 0x11c528c size 0x44 virtual false final false
 void SupportGroup() ;

/// @brief Method ASThread addr 0x11c52d0 size 0x44 virtual false final false
 void ASThread() ;

/// @brief Method GetIKSolver addr 0x11c5314 size 0x8 virtual true final false
 ::RootMotion::FinalIK::IKSolver GetIKSolver() ;

// Ctor Parameters []
explicit LegIK() ;

/// @brief Method .ctor addr 0x11c531c size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::FinalIK::LegIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::LegIK, "RootMotion.FinalIK", "LegIK");
