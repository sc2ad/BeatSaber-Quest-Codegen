#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
namespace RootMotion::FinalIK {
class IKSolver;
}
namespace RootMotion::FinalIK {
class IKSolverArm;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class ArmIK;
}
// Type: RootMotion.FinalIK::ArmIK
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12478))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12473))
// CS Name: RootMotion.FinalIK.ArmIK
class CORDL_TYPE ArmIK : public RootMotion::FinalIK::IK {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ArmIK() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArmIK", modifiers: " const&", def_value: None }]
constexpr ArmIK(ArmIK const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArmIK", modifiers: "&&", def_value: None }]
constexpr ArmIK(ArmIK&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArmIK(void* ptr) noexcept : RootMotion::FinalIK::IK(ptr) {
}


  constexpr ArmIK& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArmIK& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArmIK& operator=(ArmIK&& o) noexcept = default;
  constexpr ArmIK& operator=(ArmIK const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::IKSolverArm __declspec(property(get=__get_solver, put=__set_solver))  solver;

constexpr void __set_solver(RootMotion::FinalIK::IKSolverArm value) ;

constexpr RootMotion::FinalIK::IKSolverArm __get_solver() const;


// Methods

/// @brief Method OpenUserManual addr 0x11c3ec4 size 0x44 virtual true final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x11c3f08 size 0x44 virtual true final false
 void OpenScriptReference() ;

/// @brief Method SupportGroup addr 0x11c3f4c size 0x44 virtual false final false
 void SupportGroup() ;

/// @brief Method ASThread addr 0x11c3f90 size 0x44 virtual false final false
 void ASThread() ;

/// @brief Method GetIKSolver addr 0x11c3fd4 size 0x8 virtual true final false
 RootMotion::FinalIK::IKSolver GetIKSolver() ;

static RootMotion::FinalIK::ArmIK New_ctor() ;

/// @brief Method .ctor addr 0x11c3fdc size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::ArmIK);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::ArmIK, "RootMotion.FinalIK", "ArmIK");
