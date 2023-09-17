#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__RotationLimit_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Keyframe;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class RotationLimitSpline;
}
// Type: RootMotion.FinalIK::RotationLimitSpline
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12564))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12570))
// CS Name: RootMotion.FinalIK.RotationLimitSpline
class CORDL_TYPE RotationLimitSpline : public ::RootMotion::FinalIK::RotationLimit {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~RotationLimitSpline() = default;

// Ctor Parameters [CppParam { name: "", ty: "RotationLimitSpline", modifiers: " const&", def_value: None }]
constexpr RotationLimitSpline(RotationLimitSpline const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RotationLimitSpline", modifiers: "&&", def_value: None }]
constexpr RotationLimitSpline(RotationLimitSpline&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RotationLimitSpline(void* ptr) noexcept : ::RootMotion::FinalIK::RotationLimit(ptr) {
}


  constexpr RotationLimitSpline& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RotationLimitSpline& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RotationLimitSpline& operator=(RotationLimitSpline&& o) noexcept = default;
  constexpr RotationLimitSpline& operator=(RotationLimitSpline const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_twistLimit, put=__set_twistLimit))  twistLimit;

constexpr void __set_twistLimit(float_t value) ;

constexpr float_t __get_twistLimit() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get_spline, put=__set_spline))  spline;

constexpr void __set_spline(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get_spline() const;


// Methods

/// @brief Method OpenUserManual addr 0x1205a00 size 0x44 virtual false final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x1205a44 size 0x44 virtual false final false
 void OpenScriptReference() ;

/// @brief Method SupportGroup addr 0x1205a88 size 0x44 virtual false final false
 void SupportGroup() ;

/// @brief Method ASThread addr 0x1205acc size 0x44 virtual false final false
 void ASThread() ;

/// @brief Method SetSpline addr 0x1205b10 size 0x1c virtual false final false
 void SetSpline(::ArrayW<::UnityEngine::Keyframe> keyframes) ;

/// @brief Method LimitRotation addr 0x1205b2c size 0x94 virtual true final false
 ::UnityEngine::Quaternion LimitRotation(::UnityEngine::Quaternion rotation) ;

/// @brief Method LimitSwing addr 0x1205bc0 size 0x3b8 virtual false final false
 ::UnityEngine::Quaternion LimitSwing(::UnityEngine::Quaternion rotation) ;

// Ctor Parameters []
explicit RotationLimitSpline() ;

/// @brief Method .ctor addr 0x1205f78 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::FinalIK::RotationLimitSpline);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::RotationLimitSpline, "RootMotion.FinalIK", "RotationLimitSpline");
