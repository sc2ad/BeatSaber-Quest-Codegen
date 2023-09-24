#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
namespace RootMotion::FinalIK {
class IKSolverFABRIK;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class FABRIK;
}
// Type: RootMotion.FinalIK::FABRIK
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12478))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12475))
// CS Name: RootMotion.FinalIK.FABRIK
class CORDL_TYPE FABRIK : public RootMotion::FinalIK::IK {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FABRIK() = default;

// Ctor Parameters [CppParam { name: "", ty: "FABRIK", modifiers: " const&", def_value: None }]
constexpr FABRIK(FABRIK const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FABRIK", modifiers: "&&", def_value: None }]
constexpr FABRIK(FABRIK&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FABRIK(void* ptr) noexcept : RootMotion::FinalIK::IK(ptr) {
}


  constexpr FABRIK& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FABRIK& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FABRIK& operator=(FABRIK&& o) noexcept = default;
  constexpr FABRIK& operator=(FABRIK const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::IKSolverFABRIK __declspec(property(get=__get_solver, put=__set_solver))  solver;

constexpr void __set_solver(RootMotion::FinalIK::IKSolverFABRIK value) ;

constexpr RootMotion::FinalIK::IKSolverFABRIK __get_solver() const;


// Methods

/// @brief Method OpenUserManual addr 0x11c41c4 size 0x44 virtual true final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x11c4208 size 0x44 virtual true final false
 void OpenScriptReference() ;

/// @brief Method SupportGroup addr 0x11c424c size 0x44 virtual false final false
 void SupportGroup() ;

/// @brief Method ASThread addr 0x11c4290 size 0x44 virtual false final false
 void ASThread() ;

/// @brief Method GetIKSolver addr 0x11c42d4 size 0x8 virtual true final false
 RootMotion::FinalIK::IKSolver GetIKSolver() ;

static RootMotion::FinalIK::FABRIK New_ctor() ;

/// @brief Method .ctor addr 0x11c42dc size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::FABRIK);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::FABRIK, "RootMotion.FinalIK", "FABRIK");
