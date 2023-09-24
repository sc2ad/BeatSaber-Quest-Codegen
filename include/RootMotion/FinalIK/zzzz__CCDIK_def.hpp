#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
namespace RootMotion::FinalIK {
class IKSolverCCD;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class CCDIK;
}
// Type: RootMotion.FinalIK::CCDIK
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12478))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12474))
// CS Name: RootMotion.FinalIK.CCDIK
class CORDL_TYPE CCDIK : public RootMotion::FinalIK::IK {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~CCDIK() = default;

// Ctor Parameters [CppParam { name: "", ty: "CCDIK", modifiers: " const&", def_value: None }]
constexpr CCDIK(CCDIK const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CCDIK", modifiers: "&&", def_value: None }]
constexpr CCDIK(CCDIK&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CCDIK(void* ptr) noexcept : RootMotion::FinalIK::IK(ptr) {
}


  constexpr CCDIK& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CCDIK& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CCDIK& operator=(CCDIK&& o) noexcept = default;
  constexpr CCDIK& operator=(CCDIK const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::IKSolverCCD __declspec(property(get=__get_solver, put=__set_solver))  solver;

constexpr void __set_solver(RootMotion::FinalIK::IKSolverCCD value) ;

constexpr RootMotion::FinalIK::IKSolverCCD __get_solver() const;


// Methods

/// @brief Method OpenUserManual addr 0x11c4044 size 0x44 virtual true final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x11c4088 size 0x44 virtual true final false
 void OpenScriptReference() ;

/// @brief Method SupportGroup addr 0x11c40cc size 0x44 virtual false final false
 void SupportGroup() ;

/// @brief Method ASThread addr 0x11c4110 size 0x44 virtual false final false
 void ASThread() ;

/// @brief Method GetIKSolver addr 0x11c4154 size 0x8 virtual true final false
 RootMotion::FinalIK::IKSolver GetIKSolver() ;

static RootMotion::FinalIK::CCDIK New_ctor() ;

/// @brief Method .ctor addr 0x11c415c size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::CCDIK);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::CCDIK, "RootMotion.FinalIK", "CCDIK");
