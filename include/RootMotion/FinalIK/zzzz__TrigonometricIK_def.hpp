#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
namespace RootMotion::FinalIK {
class IKSolver;
}
namespace RootMotion::FinalIK {
class IKSolverTrigonometric;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class TrigonometricIK;
}
// Type: RootMotion.FinalIK::TrigonometricIK
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12478))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12483))
// CS Name: RootMotion.FinalIK.TrigonometricIK
class CORDL_TYPE TrigonometricIK : public RootMotion::FinalIK::IK {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~TrigonometricIK() = default;

// Ctor Parameters [CppParam { name: "", ty: "TrigonometricIK", modifiers: " const&", def_value: None }]
constexpr TrigonometricIK(TrigonometricIK const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TrigonometricIK", modifiers: "&&", def_value: None }]
constexpr TrigonometricIK(TrigonometricIK&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TrigonometricIK(void* ptr) noexcept : RootMotion::FinalIK::IK(ptr) {
}


  constexpr TrigonometricIK& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TrigonometricIK& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TrigonometricIK& operator=(TrigonometricIK&& o) noexcept = default;
  constexpr TrigonometricIK& operator=(TrigonometricIK const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::IKSolverTrigonometric __declspec(property(get=__get_solver, put=__set_solver))  solver;

constexpr void __set_solver(RootMotion::FinalIK::IKSolverTrigonometric value) ;

constexpr RootMotion::FinalIK::IKSolverTrigonometric __get_solver() const;


// Methods

/// @brief Method OpenUserManual addr 0x11c5684 size 0x44 virtual true final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x11c56c8 size 0x44 virtual true final false
 void OpenScriptReference() ;

/// @brief Method SupportGroup addr 0x11c570c size 0x44 virtual false final false
 void SupportGroup() ;

/// @brief Method ASThread addr 0x11c5750 size 0x44 virtual false final false
 void ASThread() ;

/// @brief Method GetIKSolver addr 0x11c5794 size 0x8 virtual true final false
 RootMotion::FinalIK::IKSolver GetIKSolver() ;

// Ctor Parameters []
explicit TrigonometricIK() ;

/// @brief Method .ctor addr 0x11c579c size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::TrigonometricIK);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::TrigonometricIK, "RootMotion.FinalIK", "TrigonometricIK");
