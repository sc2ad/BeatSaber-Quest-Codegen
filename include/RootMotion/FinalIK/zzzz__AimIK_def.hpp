#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
namespace {
namespace RootMotion::FinalIK {
class IKSolverAim;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class AimIK;
}
// Type: RootMotion.FinalIK::AimIK
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12478))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12472))
// CS Name: RootMotion.FinalIK.AimIK
class CORDL_TYPE AimIK : public ::RootMotion::FinalIK::IK {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~AimIK() = default;

// Ctor Parameters [CppParam { name: "", ty: "AimIK", modifiers: " const&", def_value: None }]
constexpr AimIK(AimIK const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AimIK", modifiers: "&&", def_value: None }]
constexpr AimIK(AimIK&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AimIK(void* ptr) noexcept : ::RootMotion::FinalIK::IK(ptr) {
}


  constexpr AimIK& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AimIK& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AimIK& operator=(AimIK&& o) noexcept = default;
  constexpr AimIK& operator=(AimIK const& o) noexcept = default;
                


// Fields

 ::RootMotion::FinalIK::IKSolverAim __declspec(property(get=__get_solver, put=__set_solver))  solver;

constexpr void __set_solver(::RootMotion::FinalIK::IKSolverAim value) ;

constexpr ::RootMotion::FinalIK::IKSolverAim __get_solver() const;


// Methods

/// @brief Method OpenUserManual addr 0x11c3cf8 size 0x44 virtual true final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x11c3d3c size 0x44 virtual true final false
 void OpenScriptReference() ;

/// @brief Method OpenSetupTutorial addr 0x11c3d80 size 0x44 virtual false final false
 void OpenSetupTutorial() ;

/// @brief Method SupportGroup addr 0x11c3dc4 size 0x44 virtual false final false
 void SupportGroup() ;

/// @brief Method ASThread addr 0x11c3e08 size 0x44 virtual false final false
 void ASThread() ;

/// @brief Method GetIKSolver addr 0x11c3e4c size 0x8 virtual true final false
 ::RootMotion::FinalIK::IKSolver GetIKSolver() ;

// Ctor Parameters []
explicit AimIK() ;

/// @brief Method .ctor addr 0x11c3e54 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::FinalIK::AimIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::AimIK, "RootMotion.FinalIK", "AimIK");
