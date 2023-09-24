#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
namespace RootMotion::FinalIK {
class IKSolver;
}
namespace RootMotion::FinalIK {
class IKSolverFABRIKRoot;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class FABRIKRoot;
}
// Type: RootMotion.FinalIK::FABRIKRoot
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12478))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12476))
// CS Name: RootMotion.FinalIK.FABRIKRoot
class CORDL_TYPE FABRIKRoot : public RootMotion::FinalIK::IK {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FABRIKRoot() = default;

// Ctor Parameters [CppParam { name: "", ty: "FABRIKRoot", modifiers: " const&", def_value: None }]
constexpr FABRIKRoot(FABRIKRoot const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FABRIKRoot", modifiers: "&&", def_value: None }]
constexpr FABRIKRoot(FABRIKRoot&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FABRIKRoot(void* ptr) noexcept : RootMotion::FinalIK::IK(ptr) {
}


  constexpr FABRIKRoot& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FABRIKRoot& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FABRIKRoot& operator=(FABRIKRoot&& o) noexcept = default;
  constexpr FABRIKRoot& operator=(FABRIKRoot const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::IKSolverFABRIKRoot __declspec(property(get=__get_solver, put=__set_solver))  solver;

constexpr void __set_solver(RootMotion::FinalIK::IKSolverFABRIKRoot value) ;

constexpr RootMotion::FinalIK::IKSolverFABRIKRoot __get_solver() const;


// Methods

/// @brief Method OpenUserManual addr 0x11c4344 size 0x44 virtual true final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x11c4388 size 0x44 virtual true final false
 void OpenScriptReference() ;

/// @brief Method SupportGroup addr 0x11c43cc size 0x44 virtual false final false
 void SupportGroup() ;

/// @brief Method ASThread addr 0x11c4410 size 0x44 virtual false final false
 void ASThread() ;

/// @brief Method GetIKSolver addr 0x11c4454 size 0x8 virtual true final false
 RootMotion::FinalIK::IKSolver GetIKSolver() ;

static RootMotion::FinalIK::FABRIKRoot New_ctor() ;

/// @brief Method .ctor addr 0x11c445c size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::FABRIKRoot);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::FABRIKRoot, "RootMotion.FinalIK", "FABRIKRoot");
