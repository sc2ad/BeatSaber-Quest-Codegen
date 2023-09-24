#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__RotationLimit_def.hpp"
#include <cmath>
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class RotationLimitHinge;
}
// Type: RootMotion.FinalIK::RotationLimitHinge
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12564))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12566))
// CS Name: RootMotion.FinalIK.RotationLimitHinge
class CORDL_TYPE RotationLimitHinge : public RootMotion::FinalIK::RotationLimit {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~RotationLimitHinge() = default;

// Ctor Parameters [CppParam { name: "", ty: "RotationLimitHinge", modifiers: " const&", def_value: None }]
constexpr RotationLimitHinge(RotationLimitHinge const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RotationLimitHinge", modifiers: "&&", def_value: None }]
constexpr RotationLimitHinge(RotationLimitHinge&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RotationLimitHinge(void* ptr) noexcept : RootMotion::FinalIK::RotationLimit(ptr) {
}


  constexpr RotationLimitHinge& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RotationLimitHinge& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RotationLimitHinge& operator=(RotationLimitHinge&& o) noexcept = default;
  constexpr RotationLimitHinge& operator=(RotationLimitHinge const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_useLimits, put=__set_useLimits))  useLimits;

constexpr void __set_useLimits(bool value) ;

constexpr bool __get_useLimits() const;

 float_t __declspec(property(get=__get_min, put=__set_min))  min;

constexpr void __set_min(float_t value) ;

constexpr float_t __get_min() const;

 float_t __declspec(property(get=__get_max, put=__set_max))  max;

constexpr void __set_max(float_t value) ;

constexpr float_t __get_max() const;

 float_t __declspec(property(get=__get_zeroAxisDisplayOffset, put=__set_zeroAxisDisplayOffset))  zeroAxisDisplayOffset;

constexpr void __set_zeroAxisDisplayOffset(float_t value) ;

constexpr float_t __get_zeroAxisDisplayOffset() const;

 UnityEngine::Quaternion __declspec(property(get=__get_lastRotation, put=__set_lastRotation))  lastRotation;

constexpr void __set_lastRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_lastRotation() const;

 float_t __declspec(property(get=__get_lastAngle, put=__set_lastAngle))  lastAngle;

constexpr void __set_lastAngle(float_t value) ;

constexpr float_t __get_lastAngle() const;


// Methods

/// @brief Method OpenUserManual addr 0x1203818 size 0x44 virtual false final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x120385c size 0x44 virtual false final false
 void OpenScriptReference() ;

/// @brief Method SupportGroup addr 0x12038a0 size 0x44 virtual false final false
 void SupportGroup() ;

/// @brief Method ASThread addr 0x12038e4 size 0x44 virtual false final false
 void ASThread() ;

/// @brief Method LimitRotation addr 0x1203928 size 0x1c virtual true final false
 UnityEngine::Quaternion LimitRotation(UnityEngine::Quaternion rotation) ;

/// @brief Method LimitHinge addr 0x1203944 size 0x248 virtual false final false
 UnityEngine::Quaternion LimitHinge(UnityEngine::Quaternion rotation) ;

static RootMotion::FinalIK::RotationLimitHinge New_ctor() ;

/// @brief Method .ctor addr 0x1203b8c size 0x64 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::RotationLimitHinge);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RotationLimitHinge, "RootMotion.FinalIK", "RotationLimitHinge");
