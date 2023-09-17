#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/zzzz__SolverManager_def.hpp"
namespace {
namespace RootMotion::FinalIK {
class IKSolver;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IK;
}
// Type: RootMotion.FinalIK::IK
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12441))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12478))
// CS Name: RootMotion.FinalIK.IK
class CORDL_TYPE IK : public ::RootMotion::SolverManager {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~IK() = default;

// Ctor Parameters [CppParam { name: "", ty: "IK", modifiers: " const&", def_value: None }]
constexpr IK(IK const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IK", modifiers: "&&", def_value: None }]
constexpr IK(IK&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IK(void* ptr) noexcept : ::RootMotion::SolverManager(ptr) {
}


  constexpr IK& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IK& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IK& operator=(IK&& o) noexcept = default;
  constexpr IK& operator=(IK const& o) noexcept = default;
                


// Methods

/// @brief Method GetIKSolver addr 0x0 size 0xffffffffffffffff virtual true final false
 ::RootMotion::FinalIK::IKSolver GetIKSolver() ;

/// @brief Method UpdateSolver addr 0x11c4e84 size 0x78 virtual true final false
 void UpdateSolver() ;

/// @brief Method InitiateSolver addr 0x11c4efc size 0x70 virtual true final false
 void InitiateSolver() ;

/// @brief Method FixTransforms addr 0x11c4f6c size 0x50 virtual true final false
 void FixTransforms() ;

/// @brief Method OpenUserManual addr 0x0 size 0xffffffffffffffff virtual true final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x0 size 0xffffffffffffffff virtual true final false
 void OpenScriptReference() ;

// Ctor Parameters []
explicit IK() ;

/// @brief Method .ctor addr 0x11c3ebc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::FinalIK::IK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IK, "RootMotion.FinalIK", "IK");
