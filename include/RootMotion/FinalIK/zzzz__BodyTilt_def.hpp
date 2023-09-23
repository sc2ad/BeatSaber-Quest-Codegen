#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__OffsetModifier_def.hpp"
#include <cmath>
namespace RootMotion::FinalIK {
class OffsetPose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class BodyTilt;
}
// Type: RootMotion.FinalIK::BodyTilt
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12598))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12578))
// CS Name: RootMotion.FinalIK.BodyTilt
class CORDL_TYPE BodyTilt : public RootMotion::FinalIK::OffsetModifier {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~BodyTilt() = default;

// Ctor Parameters [CppParam { name: "", ty: "BodyTilt", modifiers: " const&", def_value: None }]
constexpr BodyTilt(BodyTilt const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BodyTilt", modifiers: "&&", def_value: None }]
constexpr BodyTilt(BodyTilt&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BodyTilt(void* ptr) noexcept : RootMotion::FinalIK::OffsetModifier(ptr) {
}


  constexpr BodyTilt& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BodyTilt& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BodyTilt& operator=(BodyTilt&& o) noexcept = default;
  constexpr BodyTilt& operator=(BodyTilt const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_tiltSpeed, put=__set_tiltSpeed))  tiltSpeed;

constexpr void __set_tiltSpeed(float_t value) ;

constexpr float_t __get_tiltSpeed() const;

 float_t __declspec(property(get=__get_tiltSensitivity, put=__set_tiltSensitivity))  tiltSensitivity;

constexpr void __set_tiltSensitivity(float_t value) ;

constexpr float_t __get_tiltSensitivity() const;

 RootMotion::FinalIK::OffsetPose __declspec(property(get=__get_poseLeft, put=__set_poseLeft))  poseLeft;

constexpr void __set_poseLeft(RootMotion::FinalIK::OffsetPose value) ;

constexpr RootMotion::FinalIK::OffsetPose __get_poseLeft() const;

 RootMotion::FinalIK::OffsetPose __declspec(property(get=__get_poseRight, put=__set_poseRight))  poseRight;

constexpr void __set_poseRight(RootMotion::FinalIK::OffsetPose value) ;

constexpr RootMotion::FinalIK::OffsetPose __get_poseRight() const;

 float_t __declspec(property(get=__get_tiltAngle, put=__set_tiltAngle))  tiltAngle;

constexpr void __set_tiltAngle(float_t value) ;

constexpr float_t __get_tiltAngle() const;

 UnityEngine::Vector3 __declspec(property(get=__get_lastForward, put=__set_lastForward))  lastForward;

constexpr void __set_lastForward(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_lastForward() const;


// Methods

/// @brief Method Start addr 0x120779c size 0x48 virtual true final false
 void Start() ;

/// @brief Method OnModifyOffset addr 0x1207804 size 0x1ec virtual true final false
 void OnModifyOffset() ;

// Ctor Parameters []
explicit BodyTilt() ;

/// @brief Method .ctor addr 0x1207aa4 size 0x1c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::BodyTilt);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::BodyTilt, "RootMotion.FinalIK", "BodyTilt");
