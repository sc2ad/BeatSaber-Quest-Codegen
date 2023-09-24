#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__Grounder_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__GrounderFBBIK__SpineEffector;
}
namespace RootMotion::FinalIK {
class FullBodyBipedIK;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class IKEffector;
}
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__Grounding__Leg;
}
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class GrounderFBBIK;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__GrounderFBBIK__SpineEffector;
}
// Type: ::SpineEffector
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12462))
// CS Name: RootMotion.FinalIK.GrounderFBBIK::SpineEffector
class CORDL_TYPE RootMotion__FinalIK__GrounderFBBIK__SpineEffector : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RootMotion__FinalIK__GrounderFBBIK__SpineEffector() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__GrounderFBBIK__SpineEffector", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__GrounderFBBIK__SpineEffector(RootMotion__FinalIK__GrounderFBBIK__SpineEffector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__GrounderFBBIK__SpineEffector", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__GrounderFBBIK__SpineEffector(RootMotion__FinalIK__GrounderFBBIK__SpineEffector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__GrounderFBBIK__SpineEffector(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__GrounderFBBIK__SpineEffector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__GrounderFBBIK__SpineEffector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__GrounderFBBIK__SpineEffector& operator=(RootMotion__FinalIK__GrounderFBBIK__SpineEffector&& o) noexcept = default;
  constexpr RootMotion__FinalIK__GrounderFBBIK__SpineEffector& operator=(RootMotion__FinalIK__GrounderFBBIK__SpineEffector const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::FullBodyBipedEffector __declspec(property(get=__get_effectorType, put=__set_effectorType))  effectorType;

constexpr void __set_effectorType(RootMotion::FinalIK::FullBodyBipedEffector value) ;

constexpr RootMotion::FinalIK::FullBodyBipedEffector __get_effectorType() const;

 float_t __declspec(property(get=__get_horizontalWeight, put=__set_horizontalWeight))  horizontalWeight;

constexpr void __set_horizontalWeight(float_t value) ;

constexpr float_t __get_horizontalWeight() const;

 float_t __declspec(property(get=__get_verticalWeight, put=__set_verticalWeight))  verticalWeight;

constexpr void __set_verticalWeight(float_t value) ;

constexpr float_t __get_verticalWeight() const;


// Methods

static RootMotion::FinalIK::RootMotion__FinalIK__GrounderFBBIK__SpineEffector New_ctor() ;

/// @brief Method .ctor addr 0x11bd564 size 0x10 virtual false final false
 void _ctor() ;

static RootMotion::FinalIK::RootMotion__FinalIK__GrounderFBBIK__SpineEffector New_ctor(RootMotion::FinalIK::FullBodyBipedEffector effectorType, float_t horizontalWeight, float_t verticalWeight) ;

/// @brief Method .ctor addr 0x11bd574 size 0x44 virtual false final false
 void _ctor(RootMotion::FinalIK::FullBodyBipedEffector effectorType, float_t horizontalWeight, float_t verticalWeight) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::GrounderFBBIK
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12460))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12463))
// CS Name: RootMotion.FinalIK.GrounderFBBIK
class CORDL_TYPE GrounderFBBIK : public RootMotion::FinalIK::Grounder {
public:
// Declarations
using SpineEffector = RootMotion::FinalIK::RootMotion__FinalIK__GrounderFBBIK__SpineEffector;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~GrounderFBBIK() = default;

// Ctor Parameters [CppParam { name: "", ty: "GrounderFBBIK", modifiers: " const&", def_value: None }]
constexpr GrounderFBBIK(GrounderFBBIK const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GrounderFBBIK", modifiers: "&&", def_value: None }]
constexpr GrounderFBBIK(GrounderFBBIK&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GrounderFBBIK(void* ptr) noexcept : RootMotion::FinalIK::Grounder(ptr) {
}


  constexpr GrounderFBBIK& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GrounderFBBIK& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GrounderFBBIK& operator=(GrounderFBBIK&& o) noexcept = default;
  constexpr GrounderFBBIK& operator=(GrounderFBBIK const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::FullBodyBipedIK __declspec(property(get=__get_ik, put=__set_ik))  ik;

constexpr void __set_ik(RootMotion::FinalIK::FullBodyBipedIK value) ;

constexpr RootMotion::FinalIK::FullBodyBipedIK __get_ik() const;

 float_t __declspec(property(get=__get_spineBend, put=__set_spineBend))  spineBend;

constexpr void __set_spineBend(float_t value) ;

constexpr float_t __get_spineBend() const;

 float_t __declspec(property(get=__get_spineSpeed, put=__set_spineSpeed))  spineSpeed;

constexpr void __set_spineSpeed(float_t value) ;

constexpr float_t __get_spineSpeed() const;

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__GrounderFBBIK__SpineEffector> __declspec(property(get=__get_spine, put=__set_spine))  spine;

constexpr void __set_spine(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__GrounderFBBIK__SpineEffector> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__GrounderFBBIK__SpineEffector> __get_spine() const;

 ::ArrayW<UnityEngine::Transform> __declspec(property(get=__get_feet, put=__set_feet))  feet;

constexpr void __set_feet(::ArrayW<UnityEngine::Transform> value) ;

constexpr ::ArrayW<UnityEngine::Transform> __get_feet() const;

 UnityEngine::Vector3 __declspec(property(get=__get_spineOffset, put=__set_spineOffset))  spineOffset;

constexpr void __set_spineOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_spineOffset() const;

 bool __declspec(property(get=__get_firstSolve, put=__set_firstSolve))  firstSolve;

constexpr void __set_firstSolve(bool value) ;

constexpr bool __get_firstSolve() const;


// Methods

/// @brief Method OpenTutorial addr 0x11bc470 size 0x44 virtual false final false
 void OpenTutorial() ;

/// @brief Method OpenUserManual addr 0x11bc4b4 size 0x44 virtual true final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x11bc4f8 size 0x44 virtual true final false
 void OpenScriptReference() ;

/// @brief Method ResetPosition addr 0x11bc53c size 0x68 virtual true final false
 void ResetPosition() ;

/// @brief Method IsReadyToInitiate addr 0x11bc61c size 0x88 virtual false final false
 bool IsReadyToInitiate() ;

/// @brief Method Update addr 0x11bc6a4 size 0x5c virtual false final false
 void Update() ;

/// @brief Method FixedUpdate addr 0x11bc914 size 0xc virtual false final false
 void FixedUpdate() ;

/// @brief Method LateUpdate addr 0x11bc920 size 0xc virtual false final false
 void LateUpdate() ;

/// @brief Method Initiate addr 0x11bc700 size 0x214 virtual false final false
 void Initiate() ;

/// @brief Method OnSolverUpdate addr 0x11bcba0 size 0x374 virtual false final false
 void OnSolverUpdate() ;

/// @brief Method SetLegIK addr 0x11bd108 size 0x184 virtual false final false
 void SetLegIK(RootMotion::FinalIK::IKEffector effector, RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Leg leg) ;

/// @brief Method OnDrawGizmosSelected addr 0x11bd28c size 0x134 virtual false final false
 void OnDrawGizmosSelected() ;

/// @brief Method OnDestroy addr 0x11bd3c0 size 0x114 virtual false final false
 void OnDestroy() ;

static RootMotion::FinalIK::GrounderFBBIK New_ctor() ;

/// @brief Method .ctor addr 0x11bd4d4 size 0x90 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::GrounderFBBIK);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::GrounderFBBIK, "RootMotion.FinalIK", "GrounderFBBIK");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__GrounderFBBIK__SpineEffector);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__GrounderFBBIK__SpineEffector, "RootMotion.FinalIK", "GrounderFBBIK/SpineEffector");
