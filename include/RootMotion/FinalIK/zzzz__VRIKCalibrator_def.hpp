#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__VRIKCalibrator__CalibrationData;
}
namespace RootMotion::FinalIK {
class VRIK;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__VRIKCalibrator__Settings;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolverVR__Leg;
}
// Forward declare root types
namespace GlobalNamespace {
class RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__VRIKCalibrator__CalibrationData;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__VRIKCalibrator__Settings;
}
namespace RootMotion::FinalIK {
class VRIKCalibrator;
}
// Type: ::Settings
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12611))
// CS Name: RootMotion.FinalIK.VRIKCalibrator::Settings
class CORDL_TYPE RootMotion__FinalIK__VRIKCalibrator__Settings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~RootMotion__FinalIK__VRIKCalibrator__Settings() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__VRIKCalibrator__Settings", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__VRIKCalibrator__Settings(RootMotion__FinalIK__VRIKCalibrator__Settings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__VRIKCalibrator__Settings", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__VRIKCalibrator__Settings(RootMotion__FinalIK__VRIKCalibrator__Settings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__VRIKCalibrator__Settings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__VRIKCalibrator__Settings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__VRIKCalibrator__Settings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__VRIKCalibrator__Settings& operator=(RootMotion__FinalIK__VRIKCalibrator__Settings&& o) noexcept = default;
  constexpr RootMotion__FinalIK__VRIKCalibrator__Settings& operator=(RootMotion__FinalIK__VRIKCalibrator__Settings const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_scaleMlp, put=__set_scaleMlp))  scaleMlp;

constexpr void __set_scaleMlp(float_t value) ;

constexpr float_t __get_scaleMlp() const;

 UnityEngine::Vector3 __declspec(property(get=__get_headTrackerForward, put=__set_headTrackerForward))  headTrackerForward;

constexpr void __set_headTrackerForward(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_headTrackerForward() const;

 UnityEngine::Vector3 __declspec(property(get=__get_headTrackerUp, put=__set_headTrackerUp))  headTrackerUp;

constexpr void __set_headTrackerUp(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_headTrackerUp() const;

 UnityEngine::Vector3 __declspec(property(get=__get_bodyTrackerForward, put=__set_bodyTrackerForward))  bodyTrackerForward;

constexpr void __set_bodyTrackerForward(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_bodyTrackerForward() const;

 UnityEngine::Vector3 __declspec(property(get=__get_bodyTrackerUp, put=__set_bodyTrackerUp))  bodyTrackerUp;

constexpr void __set_bodyTrackerUp(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_bodyTrackerUp() const;

 UnityEngine::Vector3 __declspec(property(get=__get_handTrackerForward, put=__set_handTrackerForward))  handTrackerForward;

constexpr void __set_handTrackerForward(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_handTrackerForward() const;

 UnityEngine::Vector3 __declspec(property(get=__get_handTrackerUp, put=__set_handTrackerUp))  handTrackerUp;

constexpr void __set_handTrackerUp(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_handTrackerUp() const;

 UnityEngine::Vector3 __declspec(property(get=__get_footTrackerForward, put=__set_footTrackerForward))  footTrackerForward;

constexpr void __set_footTrackerForward(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_footTrackerForward() const;

 UnityEngine::Vector3 __declspec(property(get=__get_footTrackerUp, put=__set_footTrackerUp))  footTrackerUp;

constexpr void __set_footTrackerUp(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_footTrackerUp() const;

 UnityEngine::Vector3 __declspec(property(get=__get_headOffset, put=__set_headOffset))  headOffset;

constexpr void __set_headOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_headOffset() const;

 UnityEngine::Vector3 __declspec(property(get=__get_handOffset, put=__set_handOffset))  handOffset;

constexpr void __set_handOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_handOffset() const;

 float_t __declspec(property(get=__get_footForwardOffset, put=__set_footForwardOffset))  footForwardOffset;

constexpr void __set_footForwardOffset(float_t value) ;

constexpr float_t __get_footForwardOffset() const;

 float_t __declspec(property(get=__get_footInwardOffset, put=__set_footInwardOffset))  footInwardOffset;

constexpr void __set_footInwardOffset(float_t value) ;

constexpr float_t __get_footInwardOffset() const;

 float_t __declspec(property(get=__get_footHeadingOffset, put=__set_footHeadingOffset))  footHeadingOffset;

constexpr void __set_footHeadingOffset(float_t value) ;

constexpr float_t __get_footHeadingOffset() const;

 float_t __declspec(property(get=__get_pelvisPositionWeight, put=__set_pelvisPositionWeight))  pelvisPositionWeight;

constexpr void __set_pelvisPositionWeight(float_t value) ;

constexpr float_t __get_pelvisPositionWeight() const;

 float_t __declspec(property(get=__get_pelvisRotationWeight, put=__set_pelvisRotationWeight))  pelvisRotationWeight;

constexpr void __set_pelvisRotationWeight(float_t value) ;

constexpr float_t __get_pelvisRotationWeight() const;


// Methods

static RootMotion::FinalIK::RootMotion__FinalIK__VRIKCalibrator__Settings New_ctor() ;

/// @brief Method .ctor addr 0x1210168 size 0x204 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::Target
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12612))
// CS Name: RootMotion.FinalIK.VRIKCalibrator::CalibrationData::Target
class CORDL_TYPE RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target(RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target(RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target& operator=(RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target&& o) noexcept = default;
  constexpr RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target& operator=(RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_used, put=__set_used))  used;

constexpr void __set_used(bool value) ;

constexpr bool __get_used() const;

 UnityEngine::Vector3 __declspec(property(get=__get_localPosition, put=__set_localPosition))  localPosition;

constexpr void __set_localPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_localPosition() const;

 UnityEngine::Quaternion __declspec(property(get=__get_localRotation, put=__set_localRotation))  localRotation;

constexpr void __set_localRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_localRotation() const;


// Methods

static GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target New_ctor(UnityEngine::Transform t) ;

/// @brief Method .ctor addr 0x120f3c0 size 0xb4 virtual false final false
 void _ctor(UnityEngine::Transform t) ;

/// @brief Method SetTo addr 0x120fd68 size 0x5c virtual false final false
 void SetTo(UnityEngine::Transform t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CalibrationData
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12613))
// CS Name: RootMotion.FinalIK.VRIKCalibrator::CalibrationData
class CORDL_TYPE RootMotion__FinalIK__VRIKCalibrator__CalibrationData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Target = GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~RootMotion__FinalIK__VRIKCalibrator__CalibrationData() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__VRIKCalibrator__CalibrationData", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__VRIKCalibrator__CalibrationData(RootMotion__FinalIK__VRIKCalibrator__CalibrationData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__VRIKCalibrator__CalibrationData", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__VRIKCalibrator__CalibrationData(RootMotion__FinalIK__VRIKCalibrator__CalibrationData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__VRIKCalibrator__CalibrationData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__VRIKCalibrator__CalibrationData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__VRIKCalibrator__CalibrationData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__VRIKCalibrator__CalibrationData& operator=(RootMotion__FinalIK__VRIKCalibrator__CalibrationData&& o) noexcept = default;
  constexpr RootMotion__FinalIK__VRIKCalibrator__CalibrationData& operator=(RootMotion__FinalIK__VRIKCalibrator__CalibrationData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_scale, put=__set_scale))  scale;

constexpr void __set_scale(float_t value) ;

constexpr float_t __get_scale() const;

 GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target __declspec(property(get=__get_head, put=__set_head))  head;

constexpr void __set_head(GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target value) ;

constexpr GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target __get_head() const;

 GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target __declspec(property(get=__get_leftHand, put=__set_leftHand))  leftHand;

constexpr void __set_leftHand(GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target value) ;

constexpr GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target __get_leftHand() const;

 GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target __declspec(property(get=__get_rightHand, put=__set_rightHand))  rightHand;

constexpr void __set_rightHand(GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target value) ;

constexpr GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target __get_rightHand() const;

 GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target __declspec(property(get=__get_pelvis, put=__set_pelvis))  pelvis;

constexpr void __set_pelvis(GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target value) ;

constexpr GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target __get_pelvis() const;

 GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target __declspec(property(get=__get_leftFoot, put=__set_leftFoot))  leftFoot;

constexpr void __set_leftFoot(GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target value) ;

constexpr GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target __get_leftFoot() const;

 GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target __declspec(property(get=__get_rightFoot, put=__set_rightFoot))  rightFoot;

constexpr void __set_rightFoot(GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target value) ;

constexpr GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target __get_rightFoot() const;

 GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target __declspec(property(get=__get_leftLegGoal, put=__set_leftLegGoal))  leftLegGoal;

constexpr void __set_leftLegGoal(GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target value) ;

constexpr GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target __get_leftLegGoal() const;

 GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target __declspec(property(get=__get_rightLegGoal, put=__set_rightLegGoal))  rightLegGoal;

constexpr void __set_rightLegGoal(GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target value) ;

constexpr GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target __get_rightLegGoal() const;

 UnityEngine::Vector3 __declspec(property(get=__get_pelvisTargetRight, put=__set_pelvisTargetRight))  pelvisTargetRight;

constexpr void __set_pelvisTargetRight(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_pelvisTargetRight() const;

 float_t __declspec(property(get=__get_pelvisPositionWeight, put=__set_pelvisPositionWeight))  pelvisPositionWeight;

constexpr void __set_pelvisPositionWeight(float_t value) ;

constexpr float_t __get_pelvisPositionWeight() const;

 float_t __declspec(property(get=__get_pelvisRotationWeight, put=__set_pelvisRotationWeight))  pelvisRotationWeight;

constexpr void __set_pelvisRotationWeight(float_t value) ;

constexpr float_t __get_pelvisRotationWeight() const;


// Methods

static RootMotion::FinalIK::RootMotion__FinalIK__VRIKCalibrator__CalibrationData New_ctor() ;

/// @brief Method .ctor addr 0x120eb40 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::VRIKCalibrator
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12614))
// CS Name: RootMotion.FinalIK.VRIKCalibrator
class CORDL_TYPE VRIKCalibrator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using CalibrationData = RootMotion::FinalIK::RootMotion__FinalIK__VRIKCalibrator__CalibrationData;

using Settings = RootMotion::FinalIK::RootMotion__FinalIK__VRIKCalibrator__Settings;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~VRIKCalibrator() = default;

// Ctor Parameters [CppParam { name: "", ty: "VRIKCalibrator", modifiers: " const&", def_value: None }]
constexpr VRIKCalibrator(VRIKCalibrator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VRIKCalibrator", modifiers: "&&", def_value: None }]
constexpr VRIKCalibrator(VRIKCalibrator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VRIKCalibrator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr VRIKCalibrator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VRIKCalibrator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VRIKCalibrator& operator=(VRIKCalibrator&& o) noexcept = default;
  constexpr VRIKCalibrator& operator=(VRIKCalibrator const& o) noexcept = default;
                


// Methods

/// @brief Method RecalibrateScale addr 0x120d810 size 0xf4 virtual false final false
static void RecalibrateScale(RootMotion::FinalIK::VRIK ik, RootMotion::FinalIK::RootMotion__FinalIK__VRIKCalibrator__Settings settings) ;

/// @brief Method Calibrate addr 0x120d904 size 0x123c virtual false final false
static RootMotion::FinalIK::RootMotion__FinalIK__VRIKCalibrator__CalibrationData Calibrate(RootMotion::FinalIK::VRIK ik, RootMotion::FinalIK::RootMotion__FinalIK__VRIKCalibrator__Settings settings, UnityEngine::Transform headTracker, UnityEngine::Transform bodyTracker, UnityEngine::Transform leftHandTracker, UnityEngine::Transform rightHandTracker, UnityEngine::Transform leftFootTracker, UnityEngine::Transform rightFootTracker) ;

/// @brief Method CalibrateLeg addr 0x120eb48 size 0x6b8 virtual false final false
static void CalibrateLeg(RootMotion::FinalIK::RootMotion__FinalIK__VRIKCalibrator__Settings settings, UnityEngine::Transform tracker, RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg leg, UnityEngine::Transform lastBone, UnityEngine::Vector3 rootForward, bool isLeft) ;

/// @brief Method Calibrate addr 0x120f474 size 0x8f4 virtual false final false
static void Calibrate(RootMotion::FinalIK::VRIK ik, RootMotion::FinalIK::RootMotion__FinalIK__VRIKCalibrator__CalibrationData data, UnityEngine::Transform headTracker, UnityEngine::Transform bodyTracker, UnityEngine::Transform leftHandTracker, UnityEngine::Transform rightHandTracker, UnityEngine::Transform leftFootTracker, UnityEngine::Transform rightFootTracker) ;

/// @brief Method CalibrateLeg addr 0x120fdc4 size 0x24c virtual false final false
static void CalibrateLeg(RootMotion::FinalIK::RootMotion__FinalIK__VRIKCalibrator__CalibrationData data, UnityEngine::Transform tracker, RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg leg, UnityEngine::Transform lastBone, UnityEngine::Vector3 rootForward, bool isLeft) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target, "RootMotion.FinalIK", "VRIKCalibrator/CalibrationData/Target");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__VRIKCalibrator__CalibrationData);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__VRIKCalibrator__CalibrationData, "RootMotion.FinalIK", "VRIKCalibrator/CalibrationData");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__VRIKCalibrator__Settings);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__VRIKCalibrator__Settings, "RootMotion.FinalIK", "VRIKCalibrator/Settings");
NEED_NO_BOX(RootMotion::FinalIK::VRIKCalibrator);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::VRIKCalibrator, "RootMotion.FinalIK", "VRIKCalibrator");
