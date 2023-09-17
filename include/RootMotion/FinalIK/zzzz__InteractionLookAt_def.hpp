#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace {
namespace RootMotion::FinalIK {
class LookAtIK;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class InteractionLookAt;
}
// Type: RootMotion.FinalIK::InteractionLookAt
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12538))
// CS Name: RootMotion.FinalIK.InteractionLookAt
class CORDL_TYPE InteractionLookAt : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~InteractionLookAt() = default;

// Ctor Parameters [CppParam { name: "", ty: "InteractionLookAt", modifiers: " const&", def_value: None }]
constexpr InteractionLookAt(InteractionLookAt const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InteractionLookAt", modifiers: "&&", def_value: None }]
constexpr InteractionLookAt(InteractionLookAt&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InteractionLookAt(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InteractionLookAt& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InteractionLookAt& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InteractionLookAt& operator=(InteractionLookAt&& o) noexcept = default;
  constexpr InteractionLookAt& operator=(InteractionLookAt const& o) noexcept = default;
                


// Fields

 ::RootMotion::FinalIK::LookAtIK __declspec(property(get=__get_ik, put=__set_ik))  ik;

constexpr void __set_ik(::RootMotion::FinalIK::LookAtIK value) ;

constexpr ::RootMotion::FinalIK::LookAtIK __get_ik() const;

 float_t __declspec(property(get=__get_lerpSpeed, put=__set_lerpSpeed))  lerpSpeed;

constexpr void __set_lerpSpeed(float_t value) ;

constexpr float_t __get_lerpSpeed() const;

 float_t __declspec(property(get=__get_weightSpeed, put=__set_weightSpeed))  weightSpeed;

constexpr void __set_weightSpeed(float_t value) ;

constexpr float_t __get_weightSpeed() const;

 bool __declspec(property(get=__get_isPaused, put=__set_isPaused))  isPaused;

constexpr void __set_isPaused(bool value) ;

constexpr bool __get_isPaused() const;

 ::UnityEngine::Transform __declspec(property(get=__get_lookAtTarget, put=__set_lookAtTarget))  lookAtTarget;

constexpr void __set_lookAtTarget(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_lookAtTarget() const;

 float_t __declspec(property(get=__get_stopLookTime, put=__set_stopLookTime))  stopLookTime;

constexpr void __set_stopLookTime(float_t value) ;

constexpr float_t __get_stopLookTime() const;

 float_t __declspec(property(get=__get_weight, put=__set_weight))  weight;

constexpr void __set_weight(float_t value) ;

constexpr float_t __get_weight() const;

 bool __declspec(property(get=__get_firstFBBIKSolve, put=__set_firstFBBIKSolve))  firstFBBIKSolve;

constexpr void __set_firstFBBIKSolve(bool value) ;

constexpr bool __get_firstFBBIKSolve() const;


// Methods

/// @brief Method Look addr 0x11f9fd8 size 0x110 virtual false final false
 void Look(::UnityEngine::Transform target, float_t time) ;

/// @brief Method OnFixTransforms addr 0x11fa0e8 size 0x98 virtual false final false
 void OnFixTransforms() ;

/// @brief Method Update addr 0x11fa180 size 0x1f0 virtual false final false
 void Update() ;

/// @brief Method SolveSpine addr 0x11fa370 size 0xa8 virtual false final false
 void SolveSpine() ;

/// @brief Method SolveHead addr 0x11fa418 size 0xac virtual false final false
 void SolveHead() ;

// Ctor Parameters []
explicit InteractionLookAt() ;

/// @brief Method .ctor addr 0x11fa4c4 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::FinalIK::InteractionLookAt);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::InteractionLookAt, "RootMotion.FinalIK", "InteractionLookAt");
