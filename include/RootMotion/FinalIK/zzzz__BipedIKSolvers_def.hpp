#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace RootMotion::FinalIK {
class Constraints;
}
namespace RootMotion::FinalIK {
class IKSolverLookAt;
}
namespace RootMotion {
class BipedReferences;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
namespace RootMotion::FinalIK {
class IKSolverLimb;
}
namespace RootMotion::FinalIK {
class IKSolverFABRIK;
}
namespace RootMotion::FinalIK {
class IKSolverAim;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class BipedIKSolvers;
}
// Type: RootMotion.FinalIK::BipedIKSolvers
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12449))
// CS Name: RootMotion.FinalIK.BipedIKSolvers
class CORDL_TYPE BipedIKSolvers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~BipedIKSolvers() = default;

// Ctor Parameters [CppParam { name: "", ty: "BipedIKSolvers", modifiers: " const&", def_value: None }]
constexpr BipedIKSolvers(BipedIKSolvers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BipedIKSolvers", modifiers: "&&", def_value: None }]
constexpr BipedIKSolvers(BipedIKSolvers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BipedIKSolvers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BipedIKSolvers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BipedIKSolvers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BipedIKSolvers& operator=(BipedIKSolvers&& o) noexcept = default;
  constexpr BipedIKSolvers& operator=(BipedIKSolvers const& o) noexcept = default;
                


// Fields

 ::RootMotion::FinalIK::IKSolverLimb __declspec(property(get=__get_leftFoot, put=__set_leftFoot))  leftFoot;

constexpr void __set_leftFoot(::RootMotion::FinalIK::IKSolverLimb value) ;

constexpr ::RootMotion::FinalIK::IKSolverLimb __get_leftFoot() const;

 ::RootMotion::FinalIK::IKSolverLimb __declspec(property(get=__get_rightFoot, put=__set_rightFoot))  rightFoot;

constexpr void __set_rightFoot(::RootMotion::FinalIK::IKSolverLimb value) ;

constexpr ::RootMotion::FinalIK::IKSolverLimb __get_rightFoot() const;

 ::RootMotion::FinalIK::IKSolverLimb __declspec(property(get=__get_leftHand, put=__set_leftHand))  leftHand;

constexpr void __set_leftHand(::RootMotion::FinalIK::IKSolverLimb value) ;

constexpr ::RootMotion::FinalIK::IKSolverLimb __get_leftHand() const;

 ::RootMotion::FinalIK::IKSolverLimb __declspec(property(get=__get_rightHand, put=__set_rightHand))  rightHand;

constexpr void __set_rightHand(::RootMotion::FinalIK::IKSolverLimb value) ;

constexpr ::RootMotion::FinalIK::IKSolverLimb __get_rightHand() const;

 ::RootMotion::FinalIK::IKSolverFABRIK __declspec(property(get=__get_spine, put=__set_spine))  spine;

constexpr void __set_spine(::RootMotion::FinalIK::IKSolverFABRIK value) ;

constexpr ::RootMotion::FinalIK::IKSolverFABRIK __get_spine() const;

 ::RootMotion::FinalIK::IKSolverLookAt __declspec(property(get=__get_lookAt, put=__set_lookAt))  lookAt;

constexpr void __set_lookAt(::RootMotion::FinalIK::IKSolverLookAt value) ;

constexpr ::RootMotion::FinalIK::IKSolverLookAt __get_lookAt() const;

 ::RootMotion::FinalIK::IKSolverAim __declspec(property(get=__get_aim, put=__set_aim))  aim;

constexpr void __set_aim(::RootMotion::FinalIK::IKSolverAim value) ;

constexpr ::RootMotion::FinalIK::IKSolverAim __get_aim() const;

 ::RootMotion::FinalIK::Constraints __declspec(property(get=__get_pelvis, put=__set_pelvis))  pelvis;

constexpr void __set_pelvis(::RootMotion::FinalIK::Constraints value) ;

constexpr ::RootMotion::FinalIK::Constraints __get_pelvis() const;

 ::ArrayW<::RootMotion::FinalIK::IKSolverLimb> __declspec(property(get=__get__limbs, put=__set__limbs))  _limbs;

constexpr void __set__limbs(::ArrayW<::RootMotion::FinalIK::IKSolverLimb> value) ;

constexpr ::ArrayW<::RootMotion::FinalIK::IKSolverLimb> __get__limbs() const;

 ::ArrayW<::RootMotion::FinalIK::IKSolver> __declspec(property(get=__get__ikSolvers, put=__set__ikSolvers))  _ikSolvers;

constexpr void __set__ikSolvers(::ArrayW<::RootMotion::FinalIK::IKSolver> value) ;

constexpr ::ArrayW<::RootMotion::FinalIK::IKSolver> __get__ikSolvers() const;


// Properties

 ::ArrayW<::RootMotion::FinalIK::IKSolverLimb> __declspec(property(get=get_limbs))  limbs;

 ::ArrayW<::RootMotion::FinalIK::IKSolver> __declspec(property(get=get_ikSolvers))  ikSolvers;


// Methods

/// @brief Method get_limbs addr 0x11b76a0 size 0x130 virtual false final false
 ::ArrayW<::RootMotion::FinalIK::IKSolverLimb> get_limbs() ;

/// @brief Method get_ikSolvers addr 0x11b8240 size 0x1b4 virtual false final false
 ::ArrayW<::RootMotion::FinalIK::IKSolver> get_ikSolvers() ;

/// @brief Method AssignReferences addr 0x11b7a1c size 0x120 virtual false final false
 void AssignReferences(::RootMotion::BipedReferences references) ;

// Ctor Parameters []
explicit BipedIKSolvers() ;

/// @brief Method .ctor addr 0x11b80b4 size 0x18c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::FinalIK::BipedIKSolvers);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::BipedIKSolvers, "RootMotion.FinalIK", "BipedIKSolvers");
