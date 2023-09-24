#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__RotationLimit_def.hpp"
#include <cmath>
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class RotationLimitAngle;
}
// Type: RootMotion.FinalIK::RotationLimitAngle
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12564))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12565))
// CS Name: RootMotion.FinalIK.RotationLimitAngle
class CORDL_TYPE RotationLimitAngle : public RootMotion::FinalIK::RotationLimit {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~RotationLimitAngle() = default;

// Ctor Parameters [CppParam { name: "", ty: "RotationLimitAngle", modifiers: " const&", def_value: None }]
constexpr RotationLimitAngle(RotationLimitAngle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RotationLimitAngle", modifiers: "&&", def_value: None }]
constexpr RotationLimitAngle(RotationLimitAngle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RotationLimitAngle(void* ptr) noexcept : RootMotion::FinalIK::RotationLimit(ptr) {
}


  constexpr RotationLimitAngle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RotationLimitAngle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RotationLimitAngle& operator=(RotationLimitAngle&& o) noexcept = default;
  constexpr RotationLimitAngle& operator=(RotationLimitAngle const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_limit, put=__set_limit))  limit;

constexpr void __set_limit(float_t value) ;

constexpr float_t __get_limit() const;

 float_t __declspec(property(get=__get_twistLimit, put=__set_twistLimit))  twistLimit;

constexpr void __set_twistLimit(float_t value) ;

constexpr float_t __get_twistLimit() const;


// Methods

/// @brief Method OpenUserManual addr 0x120339c size 0x44 virtual false final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x12033e0 size 0x44 virtual false final false
 void OpenScriptReference() ;

/// @brief Method SupportGroup addr 0x1203424 size 0x44 virtual false final false
 void SupportGroup() ;

/// @brief Method ASThread addr 0x1203468 size 0x44 virtual false final false
 void ASThread() ;

/// @brief Method LimitRotation addr 0x12034ac size 0x38 virtual true final false
 UnityEngine::Quaternion LimitRotation(UnityEngine::Quaternion rotation) ;

/// @brief Method LimitSwing addr 0x12034e4 size 0x324 virtual false final false
 UnityEngine::Quaternion LimitSwing(UnityEngine::Quaternion rotation) ;

static RootMotion::FinalIK::RotationLimitAngle New_ctor() ;

/// @brief Method .ctor addr 0x1203808 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::RotationLimitAngle);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RotationLimitAngle, "RootMotion.FinalIK", "RotationLimitAngle");
