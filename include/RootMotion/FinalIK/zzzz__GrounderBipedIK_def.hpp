#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__Grounder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace RootMotion::FinalIK {
class BipedIK;
}
namespace RootMotion::FinalIK {
class IKSolverLimb;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class GrounderBipedIK;
}
// Type: RootMotion.FinalIK::GrounderBipedIK
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12460))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12461))
// CS Name: RootMotion.FinalIK.GrounderBipedIK
class CORDL_TYPE GrounderBipedIK : public ::RootMotion::FinalIK::Grounder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~GrounderBipedIK() = default;

// Ctor Parameters [CppParam { name: "", ty: "GrounderBipedIK", modifiers: " const&", def_value: None }]
constexpr GrounderBipedIK(GrounderBipedIK const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GrounderBipedIK", modifiers: "&&", def_value: None }]
constexpr GrounderBipedIK(GrounderBipedIK&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GrounderBipedIK(void* ptr) noexcept : ::RootMotion::FinalIK::Grounder(ptr) {
}


  constexpr GrounderBipedIK& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GrounderBipedIK& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GrounderBipedIK& operator=(GrounderBipedIK&& o) noexcept = default;
  constexpr GrounderBipedIK& operator=(GrounderBipedIK const& o) noexcept = default;
                


// Fields

 ::RootMotion::FinalIK::BipedIK __declspec(property(get=__get_ik, put=__set_ik))  ik;

constexpr void __set_ik(::RootMotion::FinalIK::BipedIK value) ;

constexpr ::RootMotion::FinalIK::BipedIK __get_ik() const;

 float_t __declspec(property(get=__get_spineBend, put=__set_spineBend))  spineBend;

constexpr void __set_spineBend(float_t value) ;

constexpr float_t __get_spineBend() const;

 float_t __declspec(property(get=__get_spineSpeed, put=__set_spineSpeed))  spineSpeed;

constexpr void __set_spineSpeed(float_t value) ;

constexpr float_t __get_spineSpeed() const;

 ::ArrayW<::UnityEngine::Transform> __declspec(property(get=__get_feet, put=__set_feet))  feet;

constexpr void __set_feet(::ArrayW<::UnityEngine::Transform> value) ;

constexpr ::ArrayW<::UnityEngine::Transform> __get_feet() const;

 ::ArrayW<::UnityEngine::Quaternion> __declspec(property(get=__get_footRotations, put=__set_footRotations))  footRotations;

constexpr void __set_footRotations(::ArrayW<::UnityEngine::Quaternion> value) ;

constexpr ::ArrayW<::UnityEngine::Quaternion> __get_footRotations() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_animatedPelvisLocalPosition, put=__set_animatedPelvisLocalPosition))  animatedPelvisLocalPosition;

constexpr void __set_animatedPelvisLocalPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_animatedPelvisLocalPosition() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_solvedPelvisLocalPosition, put=__set_solvedPelvisLocalPosition))  solvedPelvisLocalPosition;

constexpr void __set_solvedPelvisLocalPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_solvedPelvisLocalPosition() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_spineOffset, put=__set_spineOffset))  spineOffset;

constexpr void __set_spineOffset(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_spineOffset() const;

 float_t __declspec(property(get=__get_lastWeight, put=__set_lastWeight))  lastWeight;

constexpr void __set_lastWeight(float_t value) ;

constexpr float_t __get_lastWeight() const;


// Methods

/// @brief Method OpenUserManual addr 0x11ba620 size 0x44 virtual true final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x11ba664 size 0x44 virtual true final false
 void OpenScriptReference() ;

/// @brief Method ResetPosition addr 0x11ba6a8 size 0x6c virtual true final false
 void ResetPosition() ;

/// @brief Method IsReadyToInitiate addr 0x11ba714 size 0xa0 virtual false final false
 bool IsReadyToInitiate() ;

/// @brief Method Update addr 0x11ba7b4 size 0x54 virtual false final false
 void Update() ;

/// @brief Method Initiate addr 0x11ba808 size 0x304 virtual false final false
 void Initiate() ;

/// @brief Method OnDisable addr 0x11bab0c size 0x40 virtual false final false
 void OnDisable() ;

/// @brief Method OnSolverUpdate addr 0x11bab4c size 0x460 virtual false final false
 void OnSolverUpdate() ;

/// @brief Method SetLegIK addr 0x11bafac size 0xc0 virtual false final false
 void SetLegIK(::RootMotion::FinalIK::IKSolverLimb limb, int32_t index) ;

/// @brief Method OnPostSolverUpdate addr 0x11bb06c size 0x1d0 virtual false final false
 void OnPostSolverUpdate() ;

/// @brief Method OnDestroy addr 0x11bb23c size 0x1a8 virtual false final false
 void OnDestroy() ;

// Ctor Parameters []
explicit GrounderBipedIK() ;

/// @brief Method .ctor addr 0x11bb3e4 size 0x108c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::FinalIK::GrounderBipedIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::GrounderBipedIK, "RootMotion.FinalIK", "GrounderBipedIK");
