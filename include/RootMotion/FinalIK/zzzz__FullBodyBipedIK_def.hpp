#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace RootMotion::FinalIK {
class IKSolverFullBodyBiped;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
namespace RootMotion {
class BipedReferences;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class FullBodyBipedIK;
}
// Type: RootMotion.FinalIK::FullBodyBipedIK
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12478))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12477))
// CS Name: RootMotion.FinalIK.FullBodyBipedIK
class CORDL_TYPE FullBodyBipedIK : public RootMotion::FinalIK::IK {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~FullBodyBipedIK() = default;

// Ctor Parameters [CppParam { name: "", ty: "FullBodyBipedIK", modifiers: " const&", def_value: None }]
constexpr FullBodyBipedIK(FullBodyBipedIK const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FullBodyBipedIK", modifiers: "&&", def_value: None }]
constexpr FullBodyBipedIK(FullBodyBipedIK&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FullBodyBipedIK(void* ptr) noexcept : RootMotion::FinalIK::IK(ptr) {
}


  constexpr FullBodyBipedIK& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FullBodyBipedIK& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FullBodyBipedIK& operator=(FullBodyBipedIK&& o) noexcept = default;
  constexpr FullBodyBipedIK& operator=(FullBodyBipedIK const& o) noexcept = default;
                


// Fields

 RootMotion::BipedReferences __declspec(property(get=__get_references, put=__set_references))  references;

constexpr void __set_references(RootMotion::BipedReferences value) ;

constexpr RootMotion::BipedReferences __get_references() const;

 RootMotion::FinalIK::IKSolverFullBodyBiped __declspec(property(get=__get_solver, put=__set_solver))  solver;

constexpr void __set_solver(RootMotion::FinalIK::IKSolverFullBodyBiped value) ;

constexpr RootMotion::FinalIK::IKSolverFullBodyBiped __get_solver() const;


// Methods

/// @brief Method OpenUserManual addr 0x11c44c4 size 0x44 virtual true final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x11c4508 size 0x44 virtual true final false
 void OpenScriptReference() ;

/// @brief Method OpenSetupTutorial addr 0x11c454c size 0x44 virtual false final false
 void OpenSetupTutorial() ;

/// @brief Method OpenInspectorTutorial addr 0x11c4590 size 0x44 virtual false final false
 void OpenInspectorTutorial() ;

/// @brief Method SupportGroup addr 0x11c45d4 size 0x44 virtual false final false
 void SupportGroup() ;

/// @brief Method ASThread addr 0x11c4618 size 0x44 virtual false final false
 void ASThread() ;

/// @brief Method SetReferences addr 0x11c465c size 0x24 virtual false final false
 void SetReferences(RootMotion::BipedReferences references, UnityEngine::Transform rootNode) ;

/// @brief Method GetIKSolver addr 0x11c4680 size 0x8 virtual true final false
 RootMotion::FinalIK::IKSolver GetIKSolver() ;

/// @brief Method ReferencesError addr 0x11c4688 size 0x1bc virtual false final false
 bool ReferencesError(ByRef<::StringW> errorMessage) ;

/// @brief Method ReferencesWarning addr 0x11c4844 size 0x4b0 virtual false final false
 bool ReferencesWarning(ByRef<::StringW> warningMessage) ;

/// @brief Method Reinitiate addr 0x11c4cf4 size 0x20 virtual false final false
 void Reinitiate() ;

/// @brief Method AutoDetectReferences addr 0x11c4d14 size 0xd8 virtual false final false
 void AutoDetectReferences() ;

// Ctor Parameters []
explicit FullBodyBipedIK() ;

/// @brief Method .ctor addr 0x11c4dec size 0x98 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::FullBodyBipedIK);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::FullBodyBipedIK, "RootMotion.FinalIK", "FullBodyBipedIK");
