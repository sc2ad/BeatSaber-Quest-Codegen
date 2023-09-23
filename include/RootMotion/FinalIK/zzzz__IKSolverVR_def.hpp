#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__VRIK__References;
}
namespace UnityEngine {
struct Quaternion;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolver__Point;
}
namespace UnityEngine {
struct Keyframe;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace RootMotion {
struct InterpolationMode;
}
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace GlobalNamespace {
struct RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode;
}
namespace RootMotion::FinalIK {
struct RootMotion__FinalIK__IKSolverVR__PositionOffset;
}
namespace RootMotion::FinalIK {
struct RootMotion__FinalIK__IKSolverVR__RotationOffset;
}
namespace RootMotion::FinalIK {
class IKSolverVR;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolverVR__Arm;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolverVR__BodyPart;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolverVR__Footstep;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolverVR__Leg;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolverVR__Locomotion;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolverVR__Spine;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolverVR__VirtualBone;
}
// Type: ::ShoulderRotationMode
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12525))
// CS Name: RootMotion.FinalIK.IKSolverVR::Arm::ShoulderRotationMode
struct CORDL_TYPE RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode(int32_t value__) noexcept;


                    constexpr RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode(RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode const&) = default;
                    constexpr RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode(RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode&&) = default;
                    constexpr RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode& operator=(RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode& operator=(RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode_Unwrapped : int32_t {
__YawPitch = 0,
__FromTo = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode_Unwrapped () const noexcept {
return std::bit_cast<__RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field YawPitch offset 0
static GlobalNamespace::RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode const YawPitch;

/// @brief Field FromTo offset 0
static GlobalNamespace::RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode const FromTo;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BodyPart
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12527))
// CS Name: RootMotion.FinalIK.IKSolverVR::BodyPart
class CORDL_TYPE RootMotion__FinalIK__IKSolverVR__BodyPart : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~RootMotion__FinalIK__IKSolverVR__BodyPart() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__IKSolverVR__BodyPart", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__IKSolverVR__BodyPart(RootMotion__FinalIK__IKSolverVR__BodyPart const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__IKSolverVR__BodyPart", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__IKSolverVR__BodyPart(RootMotion__FinalIK__IKSolverVR__BodyPart&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__IKSolverVR__BodyPart(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__IKSolverVR__BodyPart& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__IKSolverVR__BodyPart& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__IKSolverVR__BodyPart& operator=(RootMotion__FinalIK__IKSolverVR__BodyPart&& o) noexcept = default;
  constexpr RootMotion__FinalIK__IKSolverVR__BodyPart& operator=(RootMotion__FinalIK__IKSolverVR__BodyPart const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__sqrMag_k__BackingField, put=__set__sqrMag_k__BackingField))  _sqrMag_k__BackingField;

constexpr void __set__sqrMag_k__BackingField(float_t value) ;

constexpr float_t __get__sqrMag_k__BackingField() const;

 float_t __declspec(property(get=__get__mag_k__BackingField, put=__set__mag_k__BackingField))  _mag_k__BackingField;

constexpr void __set__mag_k__BackingField(float_t value) ;

constexpr float_t __get__mag_k__BackingField() const;

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone> __declspec(property(get=__get_bones, put=__set_bones))  bones;

constexpr void __set_bones(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone> __get_bones() const;

 bool __declspec(property(get=__get_initiated, put=__set_initiated))  initiated;

constexpr void __set_initiated(bool value) ;

constexpr bool __get_initiated() const;

 UnityEngine::Vector3 __declspec(property(get=__get_rootPosition, put=__set_rootPosition))  rootPosition;

constexpr void __set_rootPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_rootPosition() const;

 UnityEngine::Quaternion __declspec(property(get=__get_rootRotation, put=__set_rootRotation))  rootRotation;

constexpr void __set_rootRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_rootRotation() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 int32_t __declspec(property(get=__get_LOD, put=__set_LOD))  LOD;

constexpr void __set_LOD(int32_t value) ;

constexpr int32_t __get_LOD() const;


// Properties

 float_t __declspec(property(get=get_sqrMag, put=set_sqrMag))  sqrMag;

 float_t __declspec(property(get=get_mag, put=set_mag))  mag;


// Methods

/// @brief Method OnRead addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnRead(::ArrayW<UnityEngine::Vector3> positions, ::ArrayW<UnityEngine::Quaternion> rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index) ;

/// @brief Method PreSolve addr 0x0 size 0xffffffffffffffff virtual true final false
 void PreSolve() ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual true final false
 void Write(ByRef<::ArrayW<UnityEngine::Vector3>> solvedPositions, ByRef<::ArrayW<UnityEngine::Quaternion>> solvedRotations) ;

/// @brief Method ApplyOffsets addr 0x0 size 0xffffffffffffffff virtual true final false
 void ApplyOffsets() ;

/// @brief Method ResetOffsets addr 0x0 size 0xffffffffffffffff virtual true final false
 void ResetOffsets() ;

/// @brief Method get_sqrMag addr 0x11ef03c size 0x8 virtual false final false
 float_t get_sqrMag() ;

/// @brief Method set_sqrMag addr 0x11ef044 size 0x8 virtual false final false
 void set_sqrMag(float_t value) ;

/// @brief Method get_mag addr 0x11ef04c size 0x8 virtual false final false
 float_t get_mag() ;

/// @brief Method set_mag addr 0x11ef054 size 0x8 virtual false final false
 void set_mag(float_t value) ;

/// @brief Method SetLOD addr 0x11ef05c size 0x8 virtual false final false
 void SetLOD(int32_t LOD) ;

/// @brief Method Read addr 0x11e045c size 0xc0 virtual false final false
 void Read(::ArrayW<UnityEngine::Vector3> positions, ::ArrayW<UnityEngine::Quaternion> rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index) ;

/// @brief Method MovePosition addr 0x11ef064 size 0x88 virtual false final false
 void MovePosition(UnityEngine::Vector3 position) ;

/// @brief Method MoveRotation addr 0x11ef0ec size 0x98 virtual false final false
 void MoveRotation(UnityEngine::Quaternion rotation) ;

/// @brief Method Translate addr 0x11ef184 size 0x48 virtual false final false
 void Translate(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation) ;

/// @brief Method TranslateRoot addr 0x11eb32c size 0x128 virtual false final false
 void TranslateRoot(UnityEngine::Vector3 newRootPos, UnityEngine::Quaternion newRootRot) ;

/// @brief Method RotateTo addr 0x11eeac0 size 0x168 virtual false final false
 void RotateTo(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone bone, UnityEngine::Quaternion rotation, float_t weight) ;

/// @brief Method Visualize addr 0x11ef1cc size 0x124 virtual false final false
 void Visualize(UnityEngine::Color color) ;

/// @brief Method Visualize addr 0x11ef2f0 size 0x14 virtual false final false
 void Visualize() ;

// Ctor Parameters []
explicit RootMotion__FinalIK__IKSolverVR__BodyPart() ;

/// @brief Method .ctor addr 0x11eefa4 size 0x98 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::Arm
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12527))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12526))
// CS Name: RootMotion.FinalIK.IKSolverVR::Arm
class CORDL_TYPE RootMotion__FinalIK__IKSolverVR__Arm : public RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart {
public:
// Declarations
using ShoulderRotationMode = GlobalNamespace::RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x148};

virtual ~RootMotion__FinalIK__IKSolverVR__Arm() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__IKSolverVR__Arm", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__IKSolverVR__Arm(RootMotion__FinalIK__IKSolverVR__Arm const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__IKSolverVR__Arm", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__IKSolverVR__Arm(RootMotion__FinalIK__IKSolverVR__Arm&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__IKSolverVR__Arm(void* ptr) noexcept : RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart(ptr) {
}


  constexpr RootMotion__FinalIK__IKSolverVR__Arm& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__IKSolverVR__Arm& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__IKSolverVR__Arm& operator=(RootMotion__FinalIK__IKSolverVR__Arm&& o) noexcept = default;
  constexpr RootMotion__FinalIK__IKSolverVR__Arm& operator=(RootMotion__FinalIK__IKSolverVR__Arm const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get_target, put=__set_target))  target;

constexpr void __set_target(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_target() const;

 UnityEngine::Transform __declspec(property(get=__get_bendGoal, put=__set_bendGoal))  bendGoal;

constexpr void __set_bendGoal(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_bendGoal() const;

 float_t __declspec(property(get=__get_positionWeight, put=__set_positionWeight))  positionWeight;

constexpr void __set_positionWeight(float_t value) ;

constexpr float_t __get_positionWeight() const;

 float_t __declspec(property(get=__get_rotationWeight, put=__set_rotationWeight))  rotationWeight;

constexpr void __set_rotationWeight(float_t value) ;

constexpr float_t __get_rotationWeight() const;

 GlobalNamespace::RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode __declspec(property(get=__get_shoulderRotationMode, put=__set_shoulderRotationMode))  shoulderRotationMode;

constexpr void __set_shoulderRotationMode(GlobalNamespace::RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode value) ;

constexpr GlobalNamespace::RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode __get_shoulderRotationMode() const;

 float_t __declspec(property(get=__get_shoulderRotationWeight, put=__set_shoulderRotationWeight))  shoulderRotationWeight;

constexpr void __set_shoulderRotationWeight(float_t value) ;

constexpr float_t __get_shoulderRotationWeight() const;

 float_t __declspec(property(get=__get_shoulderTwistWeight, put=__set_shoulderTwistWeight))  shoulderTwistWeight;

constexpr void __set_shoulderTwistWeight(float_t value) ;

constexpr float_t __get_shoulderTwistWeight() const;

 float_t __declspec(property(get=__get_bendGoalWeight, put=__set_bendGoalWeight))  bendGoalWeight;

constexpr void __set_bendGoalWeight(float_t value) ;

constexpr float_t __get_bendGoalWeight() const;

 float_t __declspec(property(get=__get_swivelOffset, put=__set_swivelOffset))  swivelOffset;

constexpr void __set_swivelOffset(float_t value) ;

constexpr float_t __get_swivelOffset() const;

 UnityEngine::Vector3 __declspec(property(get=__get_wristToPalmAxis, put=__set_wristToPalmAxis))  wristToPalmAxis;

constexpr void __set_wristToPalmAxis(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_wristToPalmAxis() const;

 UnityEngine::Vector3 __declspec(property(get=__get_palmToThumbAxis, put=__set_palmToThumbAxis))  palmToThumbAxis;

constexpr void __set_palmToThumbAxis(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_palmToThumbAxis() const;

 float_t __declspec(property(get=__get_armLengthMlp, put=__set_armLengthMlp))  armLengthMlp;

constexpr void __set_armLengthMlp(float_t value) ;

constexpr float_t __get_armLengthMlp() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get_stretchCurve, put=__set_stretchCurve))  stretchCurve;

constexpr void __set_stretchCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get_stretchCurve() const;

 UnityEngine::Vector3 __declspec(property(get=__get_IKPosition, put=__set_IKPosition))  IKPosition;

constexpr void __set_IKPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_IKPosition() const;

 UnityEngine::Quaternion __declspec(property(get=__get_IKRotation, put=__set_IKRotation))  IKRotation;

constexpr void __set_IKRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_IKRotation() const;

 UnityEngine::Vector3 __declspec(property(get=__get_bendDirection, put=__set_bendDirection))  bendDirection;

constexpr void __set_bendDirection(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_bendDirection() const;

 UnityEngine::Vector3 __declspec(property(get=__get_handPositionOffset, put=__set_handPositionOffset))  handPositionOffset;

constexpr void __set_handPositionOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_handPositionOffset() const;

 UnityEngine::Vector3 __declspec(property(get=__get__position_k__BackingField, put=__set__position_k__BackingField))  _position_k__BackingField;

constexpr void __set__position_k__BackingField(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__position_k__BackingField() const;

 UnityEngine::Quaternion __declspec(property(get=__get__rotation_k__BackingField, put=__set__rotation_k__BackingField))  _rotation_k__BackingField;

constexpr void __set__rotation_k__BackingField(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__rotation_k__BackingField() const;

 bool __declspec(property(get=__get_hasShoulder, put=__set_hasShoulder))  hasShoulder;

constexpr void __set_hasShoulder(bool value) ;

constexpr bool __get_hasShoulder() const;

 UnityEngine::Vector3 __declspec(property(get=__get_chestForwardAxis, put=__set_chestForwardAxis))  chestForwardAxis;

constexpr void __set_chestForwardAxis(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_chestForwardAxis() const;

 UnityEngine::Vector3 __declspec(property(get=__get_chestUpAxis, put=__set_chestUpAxis))  chestUpAxis;

constexpr void __set_chestUpAxis(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_chestUpAxis() const;

 UnityEngine::Quaternion __declspec(property(get=__get_chestRotation, put=__set_chestRotation))  chestRotation;

constexpr void __set_chestRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_chestRotation() const;

 UnityEngine::Vector3 __declspec(property(get=__get_chestForward, put=__set_chestForward))  chestForward;

constexpr void __set_chestForward(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_chestForward() const;

 UnityEngine::Vector3 __declspec(property(get=__get_chestUp, put=__set_chestUp))  chestUp;

constexpr void __set_chestUp(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_chestUp() const;

 UnityEngine::Quaternion __declspec(property(get=__get_forearmRelToUpperArm, put=__set_forearmRelToUpperArm))  forearmRelToUpperArm;

constexpr void __set_forearmRelToUpperArm(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_forearmRelToUpperArm() const;

 UnityEngine::Vector3 __declspec(property(get=__get_upperArmBendAxis, put=__set_upperArmBendAxis))  upperArmBendAxis;

constexpr void __set_upperArmBendAxis(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_upperArmBendAxis() const;

/// @brief Field yawOffsetAngle offset 0
static constexpr float_t  yawOffsetAngle{45};

/// @brief Field pitchOffsetAngle offset 0
static constexpr float_t  pitchOffsetAngle{-30};


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_position, put=set_position))  position;

 UnityEngine::Quaternion __declspec(property(get=get_rotation, put=set_rotation))  rotation;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone __declspec(property(get=get_shoulder))  shoulder;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone __declspec(property(get=get_upperArm))  upperArm;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone __declspec(property(get=get_forearm))  forearm;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone __declspec(property(get=get_hand))  hand;


// Methods

/// @brief Method get_position addr 0x11ed5d4 size 0xc virtual false final false
 UnityEngine::Vector3 get_position() ;

/// @brief Method set_position addr 0x11ed5e0 size 0xc virtual false final false
 void set_position(UnityEngine::Vector3 value) ;

/// @brief Method get_rotation addr 0x11ed5ec size 0xc virtual false final false
 UnityEngine::Quaternion get_rotation() ;

/// @brief Method set_rotation addr 0x11ed5f8 size 0xc virtual false final false
 void set_rotation(UnityEngine::Quaternion value) ;

/// @brief Method get_shoulder addr 0x11ed604 size 0x28 virtual false final false
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone get_shoulder() ;

/// @brief Method get_upperArm addr 0x11ed62c size 0x34 virtual false final false
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone get_upperArm() ;

/// @brief Method get_forearm addr 0x11ed660 size 0x40 virtual false final false
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone get_forearm() ;

/// @brief Method get_hand addr 0x11ed6a0 size 0x40 virtual false final false
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone get_hand() ;

/// @brief Method OnRead addr 0x11ed6e0 size 0x844 virtual true final false
 void OnRead(::ArrayW<UnityEngine::Vector3> positions, ::ArrayW<UnityEngine::Quaternion> rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index) ;

/// @brief Method PreSolve addr 0x11edf24 size 0x2ac virtual true final false
 void PreSolve() ;

/// @brief Method ApplyOffsets addr 0x11ee1d0 size 0x24 virtual true final false
 void ApplyOffsets() ;

/// @brief Method Stretching addr 0x11ee1f4 size 0x350 virtual false final false
 void Stretching() ;

/// @brief Method Solve addr 0x11eb454 size 0x15e4 virtual false final false
 void Solve(bool isLeft) ;

/// @brief Method ResetOffsets addr 0x11eec28 size 0x58 virtual true final false
 void ResetOffsets() ;

/// @brief Method Write addr 0x11eec80 size 0x20c virtual true final false
 void Write(ByRef<::ArrayW<UnityEngine::Vector3>> solvedPositions, ByRef<::ArrayW<UnityEngine::Quaternion>> solvedRotations) ;

/// @brief Method DamperValue addr 0x11ee544 size 0x80 virtual false final false
 float_t DamperValue(float_t value, float_t min, float_t max, float_t weight) ;

/// @brief Method GetBendNormal addr 0x11ee5c4 size 0x4fc virtual false final false
 UnityEngine::Vector3 GetBendNormal(UnityEngine::Vector3 dir) ;

/// @brief Method Visualize addr 0x11eee8c size 0x118 virtual false final false
 void Visualize(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone bone1, RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone bone2, RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone bone3, UnityEngine::Color color) ;

// Ctor Parameters []
explicit RootMotion__FinalIK__IKSolverVR__Arm() ;

/// @brief Method .ctor addr 0x11ed35c size 0x18c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::Footstep
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12528))
// CS Name: RootMotion.FinalIK.IKSolverVR::Footstep
class CORDL_TYPE RootMotion__FinalIK__IKSolverVR__Footstep : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~RootMotion__FinalIK__IKSolverVR__Footstep() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__IKSolverVR__Footstep", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__IKSolverVR__Footstep(RootMotion__FinalIK__IKSolverVR__Footstep const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__IKSolverVR__Footstep", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__IKSolverVR__Footstep(RootMotion__FinalIK__IKSolverVR__Footstep&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__IKSolverVR__Footstep(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__IKSolverVR__Footstep& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__IKSolverVR__Footstep& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__IKSolverVR__Footstep& operator=(RootMotion__FinalIK__IKSolverVR__Footstep&& o) noexcept = default;
  constexpr RootMotion__FinalIK__IKSolverVR__Footstep& operator=(RootMotion__FinalIK__IKSolverVR__Footstep const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_stepSpeed, put=__set_stepSpeed))  stepSpeed;

constexpr void __set_stepSpeed(float_t value) ;

constexpr float_t __get_stepSpeed() const;

 UnityEngine::Vector3 __declspec(property(get=__get_characterSpaceOffset, put=__set_characterSpaceOffset))  characterSpaceOffset;

constexpr void __set_characterSpaceOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_characterSpaceOffset() const;

 UnityEngine::Vector3 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_position() const;

 UnityEngine::Quaternion __declspec(property(get=__get_rotation, put=__set_rotation))  rotation;

constexpr void __set_rotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_rotation() const;

 UnityEngine::Quaternion __declspec(property(get=__get_stepToRootRot, put=__set_stepToRootRot))  stepToRootRot;

constexpr void __set_stepToRootRot(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_stepToRootRot() const;

 bool __declspec(property(get=__get_isSupportLeg, put=__set_isSupportLeg))  isSupportLeg;

constexpr void __set_isSupportLeg(bool value) ;

constexpr bool __get_isSupportLeg() const;

 float_t __declspec(property(get=__get__stepProgress_k__BackingField, put=__set__stepProgress_k__BackingField))  _stepProgress_k__BackingField;

constexpr void __set__stepProgress_k__BackingField(float_t value) ;

constexpr float_t __get__stepProgress_k__BackingField() const;

 UnityEngine::Vector3 __declspec(property(get=__get_stepFrom, put=__set_stepFrom))  stepFrom;

constexpr void __set_stepFrom(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_stepFrom() const;

 UnityEngine::Vector3 __declspec(property(get=__get_stepTo, put=__set_stepTo))  stepTo;

constexpr void __set_stepTo(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_stepTo() const;

 UnityEngine::Quaternion __declspec(property(get=__get_stepFromRot, put=__set_stepFromRot))  stepFromRot;

constexpr void __set_stepFromRot(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_stepFromRot() const;

 UnityEngine::Quaternion __declspec(property(get=__get_stepToRot, put=__set_stepToRot))  stepToRot;

constexpr void __set_stepToRot(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_stepToRot() const;

 UnityEngine::Quaternion __declspec(property(get=__get_footRelativeToRoot, put=__set_footRelativeToRoot))  footRelativeToRoot;

constexpr void __set_footRelativeToRoot(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_footRelativeToRoot() const;

 float_t __declspec(property(get=__get_supportLegW, put=__set_supportLegW))  supportLegW;

constexpr void __set_supportLegW(float_t value) ;

constexpr float_t __get_supportLegW() const;

 float_t __declspec(property(get=__get_supportLegWV, put=__set_supportLegWV))  supportLegWV;

constexpr void __set_supportLegWV(float_t value) ;

constexpr float_t __get_supportLegWV() const;


// Properties

 bool __declspec(property(get=get_isStepping))  isStepping;

 float_t __declspec(property(get=get_stepProgress, put=set_stepProgress))  stepProgress;


// Methods

/// @brief Method get_isStepping addr 0x11ef304 size 0x14 virtual false final false
 bool get_isStepping() ;

/// @brief Method get_stepProgress addr 0x11ef318 size 0x8 virtual false final false
 float_t get_stepProgress() ;

/// @brief Method set_stepProgress addr 0x11ef320 size 0x8 virtual false final false
 void set_stepProgress(float_t value) ;

// Ctor Parameters [CppParam { name: "rootRotation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "footPosition", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "footRotation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "characterSpaceOffset", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }]
explicit RootMotion__FinalIK__IKSolverVR__Footstep(UnityEngine::Quaternion rootRotation, UnityEngine::Vector3 footPosition, UnityEngine::Quaternion footRotation, UnityEngine::Vector3 characterSpaceOffset) ;

/// @brief Method .ctor addr 0x11ef328 size 0x1c4 virtual false final false
 void _ctor(UnityEngine::Quaternion rootRotation, UnityEngine::Vector3 footPosition, UnityEngine::Quaternion footRotation, UnityEngine::Vector3 characterSpaceOffset) ;

/// @brief Method Reset addr 0x11ef4ec size 0x48 virtual false final false
 void Reset(UnityEngine::Quaternion rootRotation, UnityEngine::Vector3 footPosition, UnityEngine::Quaternion footRotation) ;

/// @brief Method StepTo addr 0x11ef534 size 0x224 virtual false final false
 void StepTo(UnityEngine::Vector3 p, UnityEngine::Quaternion rootRotation, float_t stepThreshold) ;

/// @brief Method UpdateStepping addr 0x11ef758 size 0x208 virtual false final false
 void UpdateStepping(UnityEngine::Vector3 p, UnityEngine::Quaternion rootRotation, float_t speed) ;

/// @brief Method UpdateStanding addr 0x11ef960 size 0x1e4 virtual false final false
 void UpdateStanding(UnityEngine::Quaternion rootRotation, float_t minAngle, float_t speed) ;

/// @brief Method Update addr 0x11efb44 size 0x174 virtual false final false
 void Update(RootMotion::InterpolationMode interpolation, UnityEngine::Events::UnityEvent onStep) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::Leg
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12527))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12529))
// CS Name: RootMotion.FinalIK.IKSolverVR::Leg
class CORDL_TYPE RootMotion__FinalIK__IKSolverVR__Leg : public RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x150};

virtual ~RootMotion__FinalIK__IKSolverVR__Leg() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__IKSolverVR__Leg", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__IKSolverVR__Leg(RootMotion__FinalIK__IKSolverVR__Leg const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__IKSolverVR__Leg", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__IKSolverVR__Leg(RootMotion__FinalIK__IKSolverVR__Leg&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__IKSolverVR__Leg(void* ptr) noexcept : RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart(ptr) {
}


  constexpr RootMotion__FinalIK__IKSolverVR__Leg& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__IKSolverVR__Leg& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__IKSolverVR__Leg& operator=(RootMotion__FinalIK__IKSolverVR__Leg&& o) noexcept = default;
  constexpr RootMotion__FinalIK__IKSolverVR__Leg& operator=(RootMotion__FinalIK__IKSolverVR__Leg const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get_target, put=__set_target))  target;

constexpr void __set_target(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_target() const;

 UnityEngine::Transform __declspec(property(get=__get_bendGoal, put=__set_bendGoal))  bendGoal;

constexpr void __set_bendGoal(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_bendGoal() const;

 float_t __declspec(property(get=__get_positionWeight, put=__set_positionWeight))  positionWeight;

constexpr void __set_positionWeight(float_t value) ;

constexpr float_t __get_positionWeight() const;

 float_t __declspec(property(get=__get_rotationWeight, put=__set_rotationWeight))  rotationWeight;

constexpr void __set_rotationWeight(float_t value) ;

constexpr float_t __get_rotationWeight() const;

 float_t __declspec(property(get=__get_bendGoalWeight, put=__set_bendGoalWeight))  bendGoalWeight;

constexpr void __set_bendGoalWeight(float_t value) ;

constexpr float_t __get_bendGoalWeight() const;

 float_t __declspec(property(get=__get_swivelOffset, put=__set_swivelOffset))  swivelOffset;

constexpr void __set_swivelOffset(float_t value) ;

constexpr float_t __get_swivelOffset() const;

 float_t __declspec(property(get=__get_bendToTargetWeight, put=__set_bendToTargetWeight))  bendToTargetWeight;

constexpr void __set_bendToTargetWeight(float_t value) ;

constexpr float_t __get_bendToTargetWeight() const;

 float_t __declspec(property(get=__get_legLengthMlp, put=__set_legLengthMlp))  legLengthMlp;

constexpr void __set_legLengthMlp(float_t value) ;

constexpr float_t __get_legLengthMlp() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get_stretchCurve, put=__set_stretchCurve))  stretchCurve;

constexpr void __set_stretchCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get_stretchCurve() const;

 UnityEngine::Vector3 __declspec(property(get=__get_IKPosition, put=__set_IKPosition))  IKPosition;

constexpr void __set_IKPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_IKPosition() const;

 UnityEngine::Quaternion __declspec(property(get=__get_IKRotation, put=__set_IKRotation))  IKRotation;

constexpr void __set_IKRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_IKRotation() const;

 UnityEngine::Vector3 __declspec(property(get=__get_footPositionOffset, put=__set_footPositionOffset))  footPositionOffset;

constexpr void __set_footPositionOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_footPositionOffset() const;

 UnityEngine::Vector3 __declspec(property(get=__get_heelPositionOffset, put=__set_heelPositionOffset))  heelPositionOffset;

constexpr void __set_heelPositionOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_heelPositionOffset() const;

 UnityEngine::Quaternion __declspec(property(get=__get_footRotationOffset, put=__set_footRotationOffset))  footRotationOffset;

constexpr void __set_footRotationOffset(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_footRotationOffset() const;

 float_t __declspec(property(get=__get_currentMag, put=__set_currentMag))  currentMag;

constexpr void __set_currentMag(float_t value) ;

constexpr float_t __get_currentMag() const;

 bool __declspec(property(get=__get_useAnimatedBendNormal, put=__set_useAnimatedBendNormal))  useAnimatedBendNormal;

constexpr void __set_useAnimatedBendNormal(bool value) ;

constexpr bool __get_useAnimatedBendNormal() const;

 UnityEngine::Vector3 __declspec(property(get=__get__position_k__BackingField, put=__set__position_k__BackingField))  _position_k__BackingField;

constexpr void __set__position_k__BackingField(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__position_k__BackingField() const;

 UnityEngine::Quaternion __declspec(property(get=__get__rotation_k__BackingField, put=__set__rotation_k__BackingField))  _rotation_k__BackingField;

constexpr void __set__rotation_k__BackingField(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__rotation_k__BackingField() const;

 bool __declspec(property(get=__get__hasToes_k__BackingField, put=__set__hasToes_k__BackingField))  _hasToes_k__BackingField;

constexpr void __set__hasToes_k__BackingField(bool value) ;

constexpr bool __get__hasToes_k__BackingField() const;

 UnityEngine::Vector3 __declspec(property(get=__get__thighRelativeToPelvis_k__BackingField, put=__set__thighRelativeToPelvis_k__BackingField))  _thighRelativeToPelvis_k__BackingField;

constexpr void __set__thighRelativeToPelvis_k__BackingField(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__thighRelativeToPelvis_k__BackingField() const;

 UnityEngine::Vector3 __declspec(property(get=__get_footPosition, put=__set_footPosition))  footPosition;

constexpr void __set_footPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_footPosition() const;

 UnityEngine::Quaternion __declspec(property(get=__get_footRotation, put=__set_footRotation))  footRotation;

constexpr void __set_footRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_footRotation() const;

 UnityEngine::Vector3 __declspec(property(get=__get_bendNormal, put=__set_bendNormal))  bendNormal;

constexpr void __set_bendNormal(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_bendNormal() const;

 UnityEngine::Quaternion __declspec(property(get=__get_calfRelToThigh, put=__set_calfRelToThigh))  calfRelToThigh;

constexpr void __set_calfRelToThigh(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_calfRelToThigh() const;

 UnityEngine::Quaternion __declspec(property(get=__get_thighRelToFoot, put=__set_thighRelToFoot))  thighRelToFoot;

constexpr void __set_thighRelToFoot(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_thighRelToFoot() const;

 UnityEngine::Vector3 __declspec(property(get=__get_bendNormalRelToPelvis, put=__set_bendNormalRelToPelvis))  bendNormalRelToPelvis;

constexpr void __set_bendNormalRelToPelvis(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_bendNormalRelToPelvis() const;

 UnityEngine::Vector3 __declspec(property(get=__get_bendNormalRelToTarget, put=__set_bendNormalRelToTarget))  bendNormalRelToTarget;

constexpr void __set_bendNormalRelToTarget(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_bendNormalRelToTarget() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_position, put=set_position))  position;

 UnityEngine::Quaternion __declspec(property(get=get_rotation, put=set_rotation))  rotation;

 bool __declspec(property(get=get_hasToes, put=set_hasToes))  hasToes;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone __declspec(property(get=get_thigh))  thigh;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone __declspec(property(get=get_calf))  calf;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone __declspec(property(get=get_foot))  foot;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone __declspec(property(get=get_toes))  toes;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone __declspec(property(get=get_lastBone))  lastBone;

 UnityEngine::Vector3 __declspec(property(get=get_thighRelativeToPelvis, put=set_thighRelativeToPelvis))  thighRelativeToPelvis;


// Methods

/// @brief Method get_position addr 0x11efcb8 size 0xc virtual false final false
 UnityEngine::Vector3 get_position() ;

/// @brief Method set_position addr 0x11efcc4 size 0xc virtual false final false
 void set_position(UnityEngine::Vector3 value) ;

/// @brief Method get_rotation addr 0x11efcd0 size 0xc virtual false final false
 UnityEngine::Quaternion get_rotation() ;

/// @brief Method set_rotation addr 0x11efcdc size 0xc virtual false final false
 void set_rotation(UnityEngine::Quaternion value) ;

/// @brief Method get_hasToes addr 0x11efce8 size 0x8 virtual false final false
 bool get_hasToes() ;

/// @brief Method set_hasToes addr 0x11efcf0 size 0xc virtual false final false
 void set_hasToes(bool value) ;

/// @brief Method get_thigh addr 0x11efcfc size 0x28 virtual false final false
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone get_thigh() ;

/// @brief Method get_calf addr 0x11efd24 size 0x2c virtual false final false
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone get_calf() ;

/// @brief Method get_foot addr 0x11efd50 size 0x2c virtual false final false
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone get_foot() ;

/// @brief Method get_toes addr 0x11efd7c size 0x2c virtual false final false
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone get_toes() ;

/// @brief Method get_lastBone addr 0x11eb2f8 size 0x34 virtual false final false
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone get_lastBone() ;

/// @brief Method get_thighRelativeToPelvis addr 0x11efda8 size 0xc virtual false final false
 UnityEngine::Vector3 get_thighRelativeToPelvis() ;

/// @brief Method set_thighRelativeToPelvis addr 0x11efdb4 size 0xc virtual false final false
 void set_thighRelativeToPelvis(UnityEngine::Vector3 value) ;

/// @brief Method OnRead addr 0x11efdc0 size 0x568 virtual true final false
 void OnRead(::ArrayW<UnityEngine::Vector3> positions, ::ArrayW<UnityEngine::Quaternion> rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index) ;

/// @brief Method PreSolve addr 0x11f0328 size 0x4d4 virtual true final false
 void PreSolve() ;

/// @brief Method ApplyOffsets addr 0x11f0a98 size 0x4dc virtual true final false
 void ApplyOffsets() ;

/// @brief Method ApplyPositionOffset addr 0x11f0a48 size 0x50 virtual false final false
 void ApplyPositionOffset(UnityEngine::Vector3 offset, float_t weight) ;

/// @brief Method ApplyRotationOffset addr 0x11f07fc size 0x24c virtual false final false
 void ApplyRotationOffset(UnityEngine::Quaternion offset, float_t weight) ;

/// @brief Method Solve addr 0x11e02b4 size 0x1a8 virtual false final false
 void Solve(bool stretch) ;

/// @brief Method FixTwistRotations addr 0x11f1350 size 0x458 virtual false final false
 void FixTwistRotations() ;

/// @brief Method Stretching addr 0x11f0f74 size 0x3dc virtual false final false
 void Stretching() ;

/// @brief Method Write addr 0x11f17a8 size 0x208 virtual true final false
 void Write(ByRef<::ArrayW<UnityEngine::Vector3>> solvedPositions, ByRef<::ArrayW<UnityEngine::Quaternion>> solvedRotations) ;

/// @brief Method ResetOffsets addr 0x11f19b0 size 0xe0 virtual true final false
 void ResetOffsets() ;

// Ctor Parameters []
explicit RootMotion__FinalIK__IKSolverVR__Leg() ;

/// @brief Method .ctor addr 0x11e06b0 size 0xdc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::Locomotion
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12530))
// CS Name: RootMotion.FinalIK.IKSolverVR::Locomotion
class CORDL_TYPE RootMotion__FinalIK__IKSolverVR__Locomotion : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~RootMotion__FinalIK__IKSolverVR__Locomotion() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__IKSolverVR__Locomotion", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__IKSolverVR__Locomotion(RootMotion__FinalIK__IKSolverVR__Locomotion const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__IKSolverVR__Locomotion", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__IKSolverVR__Locomotion(RootMotion__FinalIK__IKSolverVR__Locomotion&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__IKSolverVR__Locomotion(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__IKSolverVR__Locomotion& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__IKSolverVR__Locomotion& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__IKSolverVR__Locomotion& operator=(RootMotion__FinalIK__IKSolverVR__Locomotion&& o) noexcept = default;
  constexpr RootMotion__FinalIK__IKSolverVR__Locomotion& operator=(RootMotion__FinalIK__IKSolverVR__Locomotion const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_weight, put=__set_weight))  weight;

constexpr void __set_weight(float_t value) ;

constexpr float_t __get_weight() const;

 float_t __declspec(property(get=__get_footDistance, put=__set_footDistance))  footDistance;

constexpr void __set_footDistance(float_t value) ;

constexpr float_t __get_footDistance() const;

 float_t __declspec(property(get=__get_stepThreshold, put=__set_stepThreshold))  stepThreshold;

constexpr void __set_stepThreshold(float_t value) ;

constexpr float_t __get_stepThreshold() const;

 float_t __declspec(property(get=__get_angleThreshold, put=__set_angleThreshold))  angleThreshold;

constexpr void __set_angleThreshold(float_t value) ;

constexpr float_t __get_angleThreshold() const;

 float_t __declspec(property(get=__get_comAngleMlp, put=__set_comAngleMlp))  comAngleMlp;

constexpr void __set_comAngleMlp(float_t value) ;

constexpr float_t __get_comAngleMlp() const;

 float_t __declspec(property(get=__get_maxVelocity, put=__set_maxVelocity))  maxVelocity;

constexpr void __set_maxVelocity(float_t value) ;

constexpr float_t __get_maxVelocity() const;

 float_t __declspec(property(get=__get_velocityFactor, put=__set_velocityFactor))  velocityFactor;

constexpr void __set_velocityFactor(float_t value) ;

constexpr float_t __get_velocityFactor() const;

 float_t __declspec(property(get=__get_maxLegStretch, put=__set_maxLegStretch))  maxLegStretch;

constexpr void __set_maxLegStretch(float_t value) ;

constexpr float_t __get_maxLegStretch() const;

 float_t __declspec(property(get=__get_rootSpeed, put=__set_rootSpeed))  rootSpeed;

constexpr void __set_rootSpeed(float_t value) ;

constexpr float_t __get_rootSpeed() const;

 float_t __declspec(property(get=__get_stepSpeed, put=__set_stepSpeed))  stepSpeed;

constexpr void __set_stepSpeed(float_t value) ;

constexpr float_t __get_stepSpeed() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get_stepHeight, put=__set_stepHeight))  stepHeight;

constexpr void __set_stepHeight(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get_stepHeight() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get_heelHeight, put=__set_heelHeight))  heelHeight;

constexpr void __set_heelHeight(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get_heelHeight() const;

 float_t __declspec(property(get=__get_relaxLegTwistMinAngle, put=__set_relaxLegTwistMinAngle))  relaxLegTwistMinAngle;

constexpr void __set_relaxLegTwistMinAngle(float_t value) ;

constexpr float_t __get_relaxLegTwistMinAngle() const;

 float_t __declspec(property(get=__get_relaxLegTwistSpeed, put=__set_relaxLegTwistSpeed))  relaxLegTwistSpeed;

constexpr void __set_relaxLegTwistSpeed(float_t value) ;

constexpr float_t __get_relaxLegTwistSpeed() const;

 RootMotion::InterpolationMode __declspec(property(get=__get_stepInterpolation, put=__set_stepInterpolation))  stepInterpolation;

constexpr void __set_stepInterpolation(RootMotion::InterpolationMode value) ;

constexpr RootMotion::InterpolationMode __get_stepInterpolation() const;

 UnityEngine::Vector3 __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_offset() const;

 bool __declspec(property(get=__get_blockingEnabled, put=__set_blockingEnabled))  blockingEnabled;

constexpr void __set_blockingEnabled(bool value) ;

constexpr bool __get_blockingEnabled() const;

 UnityEngine::LayerMask __declspec(property(get=__get_blockingLayers, put=__set_blockingLayers))  blockingLayers;

constexpr void __set_blockingLayers(UnityEngine::LayerMask value) ;

constexpr UnityEngine::LayerMask __get_blockingLayers() const;

 float_t __declspec(property(get=__get_raycastRadius, put=__set_raycastRadius))  raycastRadius;

constexpr void __set_raycastRadius(float_t value) ;

constexpr float_t __get_raycastRadius() const;

 float_t __declspec(property(get=__get_raycastHeight, put=__set_raycastHeight))  raycastHeight;

constexpr void __set_raycastHeight(float_t value) ;

constexpr float_t __get_raycastHeight() const;

 UnityEngine::Events::UnityEvent __declspec(property(get=__get_onLeftFootstep, put=__set_onLeftFootstep))  onLeftFootstep;

constexpr void __set_onLeftFootstep(UnityEngine::Events::UnityEvent value) ;

constexpr UnityEngine::Events::UnityEvent __get_onLeftFootstep() const;

 UnityEngine::Events::UnityEvent __declspec(property(get=__get_onRightFootstep, put=__set_onRightFootstep))  onRightFootstep;

constexpr void __set_onRightFootstep(UnityEngine::Events::UnityEvent value) ;

constexpr UnityEngine::Events::UnityEvent __get_onRightFootstep() const;

 UnityEngine::Vector3 __declspec(property(get=__get__centerOfMass_k__BackingField, put=__set__centerOfMass_k__BackingField))  _centerOfMass_k__BackingField;

constexpr void __set__centerOfMass_k__BackingField(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__centerOfMass_k__BackingField() const;

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep> __declspec(property(get=__get_footsteps, put=__set_footsteps))  footsteps;

constexpr void __set_footsteps(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep> __get_footsteps() const;

 UnityEngine::Vector3 __declspec(property(get=__get_lastComPosition, put=__set_lastComPosition))  lastComPosition;

constexpr void __set_lastComPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_lastComPosition() const;

 UnityEngine::Vector3 __declspec(property(get=__get_comVelocity, put=__set_comVelocity))  comVelocity;

constexpr void __set_comVelocity(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_comVelocity() const;

 int32_t __declspec(property(get=__get_leftFootIndex, put=__set_leftFootIndex))  leftFootIndex;

constexpr void __set_leftFootIndex(int32_t value) ;

constexpr int32_t __get_leftFootIndex() const;

 int32_t __declspec(property(get=__get_rightFootIndex, put=__set_rightFootIndex))  rightFootIndex;

constexpr void __set_rightFootIndex(int32_t value) ;

constexpr int32_t __get_rightFootIndex() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_centerOfMass, put=set_centerOfMass))  centerOfMass;

 UnityEngine::Vector3 __declspec(property(get=get_leftFootstepPosition))  leftFootstepPosition;

 UnityEngine::Vector3 __declspec(property(get=get_rightFootstepPosition))  rightFootstepPosition;

 UnityEngine::Quaternion __declspec(property(get=get_leftFootstepRotation))  leftFootstepRotation;

 UnityEngine::Quaternion __declspec(property(get=get_rightFootstepRotation))  rightFootstepRotation;


// Methods

/// @brief Method get_centerOfMass addr 0x11f1a90 size 0xc virtual false final false
 UnityEngine::Vector3 get_centerOfMass() ;

/// @brief Method set_centerOfMass addr 0x11f1a9c size 0xc virtual false final false
 void set_centerOfMass(UnityEngine::Vector3 value) ;

/// @brief Method Initiate addr 0x11e9c34 size 0x2f4 virtual false final false
 void Initiate(::ArrayW<UnityEngine::Vector3> positions, ::ArrayW<UnityEngine::Quaternion> rotations, bool hasToes) ;

/// @brief Method Reset addr 0x11e7734 size 0x1e4 virtual false final false
 void Reset(::ArrayW<UnityEngine::Vector3> positions, ::ArrayW<UnityEngine::Quaternion> rotations) ;

/// @brief Method AddDeltaRotation addr 0x11e6c00 size 0x3c8 virtual false final false
 void AddDeltaRotation(UnityEngine::Quaternion delta, UnityEngine::Vector3 pivot) ;

/// @brief Method AddDeltaPosition addr 0x11e6b48 size 0xb8 virtual false final false
 void AddDeltaPosition(UnityEngine::Vector3 delta) ;

/// @brief Method Solve addr 0x11e9f28 size 0x13d0 virtual false final false
 void Solve(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone rootBone, RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine spine, RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg leftLeg, RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg rightLeg, RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm leftArm, RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm rightArm, int32_t supportLegIndex, ByRef<UnityEngine::Vector3> leftFootPosition, ByRef<UnityEngine::Vector3> rightFootPosition, ByRef<UnityEngine::Quaternion> leftFootRotation, ByRef<UnityEngine::Quaternion> rightFootRotation, ByRef<float_t> leftFootOffset, ByRef<float_t> rightFootOffset, ByRef<float_t> leftHeelOffset, ByRef<float_t> rightHeelOffset) ;

/// @brief Method get_leftFootstepPosition addr 0x11f1e78 size 0x34 virtual false final false
 UnityEngine::Vector3 get_leftFootstepPosition() ;

/// @brief Method get_rightFootstepPosition addr 0x11f1eac size 0x38 virtual false final false
 UnityEngine::Vector3 get_rightFootstepPosition() ;

/// @brief Method get_leftFootstepRotation addr 0x11f1ee4 size 0x34 virtual false final false
 UnityEngine::Quaternion get_leftFootstepRotation() ;

/// @brief Method get_rightFootstepRotation addr 0x11f1f18 size 0x38 virtual false final false
 UnityEngine::Quaternion get_rightFootstepRotation() ;

/// @brief Method StepBlocked addr 0x11f1aa8 size 0x1b4 virtual false final false
 bool StepBlocked(UnityEngine::Vector3 fromPosition, UnityEngine::Vector3 toPosition, UnityEngine::Vector3 rootPosition) ;

/// @brief Method CanStep addr 0x11f1c5c size 0x6c virtual false final false
 bool CanStep() ;

/// @brief Method GetLineSphereCollision addr 0x11f1cc8 size 0x1b0 virtual false final false
static bool GetLineSphereCollision(UnityEngine::Vector3 lineStart, UnityEngine::Vector3 lineEnd, UnityEngine::Vector3 sphereCenter, float_t sphereRadius) ;

// Ctor Parameters []
explicit RootMotion__FinalIK__IKSolverVR__Locomotion() ;

/// @brief Method .ctor addr 0x11ed4e8 size 0xec virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::Spine
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12527))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12531))
// CS Name: RootMotion.FinalIK.IKSolverVR::Spine
class CORDL_TYPE RootMotion__FinalIK__IKSolverVR__Spine : public RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x228};

virtual ~RootMotion__FinalIK__IKSolverVR__Spine() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__IKSolverVR__Spine", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__IKSolverVR__Spine(RootMotion__FinalIK__IKSolverVR__Spine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__IKSolverVR__Spine", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__IKSolverVR__Spine(RootMotion__FinalIK__IKSolverVR__Spine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__IKSolverVR__Spine(void* ptr) noexcept : RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart(ptr) {
}


  constexpr RootMotion__FinalIK__IKSolverVR__Spine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__IKSolverVR__Spine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__IKSolverVR__Spine& operator=(RootMotion__FinalIK__IKSolverVR__Spine&& o) noexcept = default;
  constexpr RootMotion__FinalIK__IKSolverVR__Spine& operator=(RootMotion__FinalIK__IKSolverVR__Spine const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get_headTarget, put=__set_headTarget))  headTarget;

constexpr void __set_headTarget(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_headTarget() const;

 UnityEngine::Transform __declspec(property(get=__get_pelvisTarget, put=__set_pelvisTarget))  pelvisTarget;

constexpr void __set_pelvisTarget(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_pelvisTarget() const;

 float_t __declspec(property(get=__get_positionWeight, put=__set_positionWeight))  positionWeight;

constexpr void __set_positionWeight(float_t value) ;

constexpr float_t __get_positionWeight() const;

 float_t __declspec(property(get=__get_rotationWeight, put=__set_rotationWeight))  rotationWeight;

constexpr void __set_rotationWeight(float_t value) ;

constexpr float_t __get_rotationWeight() const;

 float_t __declspec(property(get=__get_pelvisPositionWeight, put=__set_pelvisPositionWeight))  pelvisPositionWeight;

constexpr void __set_pelvisPositionWeight(float_t value) ;

constexpr float_t __get_pelvisPositionWeight() const;

 float_t __declspec(property(get=__get_pelvisRotationWeight, put=__set_pelvisRotationWeight))  pelvisRotationWeight;

constexpr void __set_pelvisRotationWeight(float_t value) ;

constexpr float_t __get_pelvisRotationWeight() const;

 UnityEngine::Transform __declspec(property(get=__get_chestGoal, put=__set_chestGoal))  chestGoal;

constexpr void __set_chestGoal(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_chestGoal() const;

 float_t __declspec(property(get=__get_chestGoalWeight, put=__set_chestGoalWeight))  chestGoalWeight;

constexpr void __set_chestGoalWeight(float_t value) ;

constexpr float_t __get_chestGoalWeight() const;

 float_t __declspec(property(get=__get_minHeadHeight, put=__set_minHeadHeight))  minHeadHeight;

constexpr void __set_minHeadHeight(float_t value) ;

constexpr float_t __get_minHeadHeight() const;

 float_t __declspec(property(get=__get_bodyPosStiffness, put=__set_bodyPosStiffness))  bodyPosStiffness;

constexpr void __set_bodyPosStiffness(float_t value) ;

constexpr float_t __get_bodyPosStiffness() const;

 float_t __declspec(property(get=__get_bodyRotStiffness, put=__set_bodyRotStiffness))  bodyRotStiffness;

constexpr void __set_bodyRotStiffness(float_t value) ;

constexpr float_t __get_bodyRotStiffness() const;

 float_t __declspec(property(get=__get_neckStiffness, put=__set_neckStiffness))  neckStiffness;

constexpr void __set_neckStiffness(float_t value) ;

constexpr float_t __get_neckStiffness() const;

 float_t __declspec(property(get=__get_rotateChestByHands, put=__set_rotateChestByHands))  rotateChestByHands;

constexpr void __set_rotateChestByHands(float_t value) ;

constexpr float_t __get_rotateChestByHands() const;

 float_t __declspec(property(get=__get_chestClampWeight, put=__set_chestClampWeight))  chestClampWeight;

constexpr void __set_chestClampWeight(float_t value) ;

constexpr float_t __get_chestClampWeight() const;

 float_t __declspec(property(get=__get_headClampWeight, put=__set_headClampWeight))  headClampWeight;

constexpr void __set_headClampWeight(float_t value) ;

constexpr float_t __get_headClampWeight() const;

 float_t __declspec(property(get=__get_moveBodyBackWhenCrouching, put=__set_moveBodyBackWhenCrouching))  moveBodyBackWhenCrouching;

constexpr void __set_moveBodyBackWhenCrouching(float_t value) ;

constexpr float_t __get_moveBodyBackWhenCrouching() const;

 float_t __declspec(property(get=__get_maintainPelvisPosition, put=__set_maintainPelvisPosition))  maintainPelvisPosition;

constexpr void __set_maintainPelvisPosition(float_t value) ;

constexpr float_t __get_maintainPelvisPosition() const;

 float_t __declspec(property(get=__get_maxRootAngle, put=__set_maxRootAngle))  maxRootAngle;

constexpr void __set_maxRootAngle(float_t value) ;

constexpr float_t __get_maxRootAngle() const;

 float_t __declspec(property(get=__get_rootHeadingOffset, put=__set_rootHeadingOffset))  rootHeadingOffset;

constexpr void __set_rootHeadingOffset(float_t value) ;

constexpr float_t __get_rootHeadingOffset() const;

 UnityEngine::Vector3 __declspec(property(get=__get_IKPositionHead, put=__set_IKPositionHead))  IKPositionHead;

constexpr void __set_IKPositionHead(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_IKPositionHead() const;

 UnityEngine::Quaternion __declspec(property(get=__get_IKRotationHead, put=__set_IKRotationHead))  IKRotationHead;

constexpr void __set_IKRotationHead(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_IKRotationHead() const;

 UnityEngine::Vector3 __declspec(property(get=__get_IKPositionPelvis, put=__set_IKPositionPelvis))  IKPositionPelvis;

constexpr void __set_IKPositionPelvis(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_IKPositionPelvis() const;

 UnityEngine::Quaternion __declspec(property(get=__get_IKRotationPelvis, put=__set_IKRotationPelvis))  IKRotationPelvis;

constexpr void __set_IKRotationPelvis(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_IKRotationPelvis() const;

 UnityEngine::Vector3 __declspec(property(get=__get_goalPositionChest, put=__set_goalPositionChest))  goalPositionChest;

constexpr void __set_goalPositionChest(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_goalPositionChest() const;

 UnityEngine::Vector3 __declspec(property(get=__get_pelvisPositionOffset, put=__set_pelvisPositionOffset))  pelvisPositionOffset;

constexpr void __set_pelvisPositionOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_pelvisPositionOffset() const;

 UnityEngine::Vector3 __declspec(property(get=__get_chestPositionOffset, put=__set_chestPositionOffset))  chestPositionOffset;

constexpr void __set_chestPositionOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_chestPositionOffset() const;

 UnityEngine::Vector3 __declspec(property(get=__get_headPositionOffset, put=__set_headPositionOffset))  headPositionOffset;

constexpr void __set_headPositionOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_headPositionOffset() const;

 UnityEngine::Quaternion __declspec(property(get=__get_pelvisRotationOffset, put=__set_pelvisRotationOffset))  pelvisRotationOffset;

constexpr void __set_pelvisRotationOffset(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_pelvisRotationOffset() const;

 UnityEngine::Quaternion __declspec(property(get=__get_chestRotationOffset, put=__set_chestRotationOffset))  chestRotationOffset;

constexpr void __set_chestRotationOffset(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_chestRotationOffset() const;

 UnityEngine::Quaternion __declspec(property(get=__get_headRotationOffset, put=__set_headRotationOffset))  headRotationOffset;

constexpr void __set_headRotationOffset(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_headRotationOffset() const;

 UnityEngine::Vector3 __declspec(property(get=__get_faceDirection, put=__set_faceDirection))  faceDirection;

constexpr void __set_faceDirection(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_faceDirection() const;

 UnityEngine::Vector3 __declspec(property(get=__get_locomotionHeadPositionOffset, put=__set_locomotionHeadPositionOffset))  locomotionHeadPositionOffset;

constexpr void __set_locomotionHeadPositionOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_locomotionHeadPositionOffset() const;

 UnityEngine::Vector3 __declspec(property(get=__get_headPosition, put=__set_headPosition))  headPosition;

constexpr void __set_headPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_headPosition() const;

 UnityEngine::Quaternion __declspec(property(get=__get__anchorRotation_k__BackingField, put=__set__anchorRotation_k__BackingField))  _anchorRotation_k__BackingField;

constexpr void __set__anchorRotation_k__BackingField(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__anchorRotation_k__BackingField() const;

 UnityEngine::Quaternion __declspec(property(get=__get__anchorRelativeToHead_k__BackingField, put=__set__anchorRelativeToHead_k__BackingField))  _anchorRelativeToHead_k__BackingField;

constexpr void __set__anchorRelativeToHead_k__BackingField(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__anchorRelativeToHead_k__BackingField() const;

 UnityEngine::Quaternion __declspec(property(get=__get_headRotation, put=__set_headRotation))  headRotation;

constexpr void __set_headRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_headRotation() const;

 UnityEngine::Quaternion __declspec(property(get=__get_pelvisRotation, put=__set_pelvisRotation))  pelvisRotation;

constexpr void __set_pelvisRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_pelvisRotation() const;

 UnityEngine::Quaternion __declspec(property(get=__get_anchorRelativeToPelvis, put=__set_anchorRelativeToPelvis))  anchorRelativeToPelvis;

constexpr void __set_anchorRelativeToPelvis(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_anchorRelativeToPelvis() const;

 UnityEngine::Quaternion __declspec(property(get=__get_pelvisRelativeRotation, put=__set_pelvisRelativeRotation))  pelvisRelativeRotation;

constexpr void __set_pelvisRelativeRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_pelvisRelativeRotation() const;

 UnityEngine::Quaternion __declspec(property(get=__get_chestRelativeRotation, put=__set_chestRelativeRotation))  chestRelativeRotation;

constexpr void __set_chestRelativeRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_chestRelativeRotation() const;

 UnityEngine::Vector3 __declspec(property(get=__get_headDeltaPosition, put=__set_headDeltaPosition))  headDeltaPosition;

constexpr void __set_headDeltaPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_headDeltaPosition() const;

 UnityEngine::Quaternion __declspec(property(get=__get_pelvisDeltaRotation, put=__set_pelvisDeltaRotation))  pelvisDeltaRotation;

constexpr void __set_pelvisDeltaRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_pelvisDeltaRotation() const;

 UnityEngine::Quaternion __declspec(property(get=__get_chestTargetRotation, put=__set_chestTargetRotation))  chestTargetRotation;

constexpr void __set_chestTargetRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_chestTargetRotation() const;

 int32_t __declspec(property(get=__get_pelvisIndex, put=__set_pelvisIndex))  pelvisIndex;

constexpr void __set_pelvisIndex(int32_t value) ;

constexpr int32_t __get_pelvisIndex() const;

 int32_t __declspec(property(get=__get_spineIndex, put=__set_spineIndex))  spineIndex;

constexpr void __set_spineIndex(int32_t value) ;

constexpr int32_t __get_spineIndex() const;

 int32_t __declspec(property(get=__get_chestIndex, put=__set_chestIndex))  chestIndex;

constexpr void __set_chestIndex(int32_t value) ;

constexpr int32_t __get_chestIndex() const;

 int32_t __declspec(property(get=__get_neckIndex, put=__set_neckIndex))  neckIndex;

constexpr void __set_neckIndex(int32_t value) ;

constexpr int32_t __get_neckIndex() const;

 int32_t __declspec(property(get=__get_headIndex, put=__set_headIndex))  headIndex;

constexpr void __set_headIndex(int32_t value) ;

constexpr int32_t __get_headIndex() const;

 float_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(float_t value) ;

constexpr float_t __get_length() const;

 bool __declspec(property(get=__get_hasChest, put=__set_hasChest))  hasChest;

constexpr void __set_hasChest(bool value) ;

constexpr bool __get_hasChest() const;

 bool __declspec(property(get=__get_hasNeck, put=__set_hasNeck))  hasNeck;

constexpr void __set_hasNeck(bool value) ;

constexpr bool __get_hasNeck() const;

 bool __declspec(property(get=__get_hasLegs, put=__set_hasLegs))  hasLegs;

constexpr void __set_hasLegs(bool value) ;

constexpr bool __get_hasLegs() const;

 float_t __declspec(property(get=__get_headHeight, put=__set_headHeight))  headHeight;

constexpr void __set_headHeight(float_t value) ;

constexpr float_t __get_headHeight() const;

 float_t __declspec(property(get=__get_sizeMlp, put=__set_sizeMlp))  sizeMlp;

constexpr void __set_sizeMlp(float_t value) ;

constexpr float_t __get_sizeMlp() const;

 UnityEngine::Vector3 __declspec(property(get=__get_chestForward, put=__set_chestForward))  chestForward;

constexpr void __set_chestForward(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_chestForward() const;


// Properties

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone __declspec(property(get=get_pelvis))  pelvis;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone __declspec(property(get=get_firstSpineBone))  firstSpineBone;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone __declspec(property(get=get_chest))  chest;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone __declspec(property(get=get_neck))  neck;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone __declspec(property(get=get_head))  head;

 UnityEngine::Quaternion __declspec(property(get=get_anchorRotation, put=set_anchorRotation))  anchorRotation;

 UnityEngine::Quaternion __declspec(property(get=get_anchorRelativeToHead, put=set_anchorRelativeToHead))  anchorRelativeToHead;


// Methods

/// @brief Method get_pelvis addr 0x11f1f50 size 0x34 virtual false final false
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone get_pelvis() ;

/// @brief Method get_firstSpineBone addr 0x11f1f84 size 0x34 virtual false final false
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone get_firstSpineBone() ;

/// @brief Method get_chest addr 0x11f1fb8 size 0x48 virtual false final false
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone get_chest() ;

/// @brief Method get_neck addr 0x11f2000 size 0x34 virtual false final false
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone get_neck() ;

/// @brief Method get_head addr 0x11f2034 size 0x34 virtual false final false
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone get_head() ;

/// @brief Method get_anchorRotation addr 0x11f2068 size 0x14 virtual false final false
 UnityEngine::Quaternion get_anchorRotation() ;

/// @brief Method set_anchorRotation addr 0x11f207c size 0x14 virtual false final false
 void set_anchorRotation(UnityEngine::Quaternion value) ;

/// @brief Method get_anchorRelativeToHead addr 0x11f2090 size 0x14 virtual false final false
 UnityEngine::Quaternion get_anchorRelativeToHead() ;

/// @brief Method set_anchorRelativeToHead addr 0x11f20a4 size 0x14 virtual false final false
 void set_anchorRelativeToHead(UnityEngine::Quaternion value) ;

/// @brief Method OnRead addr 0x11f20b8 size 0xc60 virtual true final false
 void OnRead(::ArrayW<UnityEngine::Vector3> positions, ::ArrayW<UnityEngine::Quaternion> rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index) ;

/// @brief Method PreSolve addr 0x11f2da8 size 0x1e8 virtual true final false
 void PreSolve() ;

/// @brief Method ApplyOffsets addr 0x11f2f90 size 0x794 virtual true final false
 void ApplyOffsets() ;

/// @brief Method CalculateChestTargetRotation addr 0x11f3724 size 0x244 virtual false final false
 void CalculateChestTargetRotation(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone rootBone, ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm> arms) ;

/// @brief Method Solve addr 0x11f3d60 size 0x53c virtual false final false
 void Solve(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone rootBone, ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg> legs, ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm> arms) ;

/// @brief Method FABRIKPass addr 0x11f46ac size 0x260 virtual false final false
 void FABRIKPass(UnityEngine::Vector3 animatedPelvisPos, UnityEngine::Vector3 rootUp, float_t weight) ;

/// @brief Method SolvePelvis addr 0x11f4e54 size 0x290 virtual false final false
 void SolvePelvis() ;

/// @brief Method Write addr 0x11f5894 size 0x1d0 virtual true final false
 void Write(ByRef<::ArrayW<UnityEngine::Vector3>> solvedPositions, ByRef<::ArrayW<UnityEngine::Quaternion>> solvedRotations) ;

/// @brief Method ResetOffsets addr 0x11f5a64 size 0xd4 virtual true final false
 void ResetOffsets() ;

/// @brief Method AdjustChestByHands addr 0x11f3968 size 0x3f8 virtual false final false
 void AdjustChestByHands(ByRef<UnityEngine::Quaternion> chestTargetRotation, ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm> arms) ;

/// @brief Method InverseTranslateToHead addr 0x11f4b7c size 0xdc virtual false final false
 void InverseTranslateToHead(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg> legs, bool limited, bool useCurrentLegMag, UnityEngine::Vector3 offset, float_t w) ;

/// @brief Method TranslatePelvis addr 0x11f429c size 0x410 virtual false final false
 void TranslatePelvis(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg> legs, UnityEngine::Vector3 deltaPosition, UnityEngine::Quaternion deltaRotation) ;

/// @brief Method LimitPelvisPosition addr 0x11f5b38 size 0x2a8 virtual false final false
 UnityEngine::Vector3 LimitPelvisPosition(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg> legs, UnityEngine::Vector3 pelvisPosition, bool useCurrentLegMag, int32_t it) ;

/// @brief Method Bend addr 0x11f4c58 size 0x1fc virtual false final false
 void Bend(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone> bones, int32_t firstIndex, int32_t lastIndex, UnityEngine::Quaternion targetRotation, float_t clampWeight, bool uniformWeight, float_t w) ;

/// @brief Method Bend addr 0x11f490c size 0x270 virtual false final false
 void Bend(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone> bones, int32_t firstIndex, int32_t lastIndex, UnityEngine::Quaternion targetRotation, UnityEngine::Quaternion rotationOffset, float_t clampWeight, bool uniformWeight, float_t w) ;

// Ctor Parameters []
explicit RootMotion__FinalIK__IKSolverVR__Spine() ;

/// @brief Method .ctor addr 0x11f5f50 size 0x11c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::PositionOffset
namespace RootMotion::FinalIK {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12532))
// CS Name: RootMotion.FinalIK.IKSolverVR::PositionOffset
struct CORDL_TYPE RootMotion__FinalIK__IKSolverVR__PositionOffset : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RootMotion__FinalIK__IKSolverVR__PositionOffset(int32_t value__) noexcept;


                    constexpr RootMotion__FinalIK__IKSolverVR__PositionOffset(RootMotion__FinalIK__IKSolverVR__PositionOffset const&) = default;
                    constexpr RootMotion__FinalIK__IKSolverVR__PositionOffset(RootMotion__FinalIK__IKSolverVR__PositionOffset&&) = default;
                    constexpr RootMotion__FinalIK__IKSolverVR__PositionOffset& operator=(RootMotion__FinalIK__IKSolverVR__PositionOffset const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RootMotion__FinalIK__IKSolverVR__PositionOffset& operator=(RootMotion__FinalIK__IKSolverVR__PositionOffset&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__IKSolverVR__PositionOffset(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RootMotion__FinalIK__IKSolverVR__PositionOffset_Unwrapped : int32_t {
__Pelvis = 0,
__Chest = 1,
__Head = 2,
__LeftHand = 3,
__RightHand = 4,
__LeftFoot = 5,
__RightFoot = 6,
__LeftHeel = 7,
__RightHeel = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RootMotion__FinalIK__IKSolverVR__PositionOffset_Unwrapped () const noexcept {
return std::bit_cast<__RootMotion__FinalIK__IKSolverVR__PositionOffset_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Pelvis offset 0
static RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset const Pelvis;

/// @brief Field Chest offset 0
static RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset const Chest;

/// @brief Field Head offset 0
static RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset const Head;

/// @brief Field LeftHand offset 0
static RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset const LeftHand;

/// @brief Field RightHand offset 0
static RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset const RightHand;

/// @brief Field LeftFoot offset 0
static RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset const LeftFoot;

/// @brief Field RightFoot offset 0
static RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset const RightFoot;

/// @brief Field LeftHeel offset 0
static RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset const LeftHeel;

/// @brief Field RightHeel offset 0
static RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset const RightHeel;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::RotationOffset
namespace RootMotion::FinalIK {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12533))
// CS Name: RootMotion.FinalIK.IKSolverVR::RotationOffset
struct CORDL_TYPE RootMotion__FinalIK__IKSolverVR__RotationOffset : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RootMotion__FinalIK__IKSolverVR__RotationOffset(int32_t value__) noexcept;


                    constexpr RootMotion__FinalIK__IKSolverVR__RotationOffset(RootMotion__FinalIK__IKSolverVR__RotationOffset const&) = default;
                    constexpr RootMotion__FinalIK__IKSolverVR__RotationOffset(RootMotion__FinalIK__IKSolverVR__RotationOffset&&) = default;
                    constexpr RootMotion__FinalIK__IKSolverVR__RotationOffset& operator=(RootMotion__FinalIK__IKSolverVR__RotationOffset const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RootMotion__FinalIK__IKSolverVR__RotationOffset& operator=(RootMotion__FinalIK__IKSolverVR__RotationOffset&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__IKSolverVR__RotationOffset(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RootMotion__FinalIK__IKSolverVR__RotationOffset_Unwrapped : int32_t {
__Pelvis = 0,
__Chest = 1,
__Head = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RootMotion__FinalIK__IKSolverVR__RotationOffset_Unwrapped () const noexcept {
return std::bit_cast<__RootMotion__FinalIK__IKSolverVR__RotationOffset_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Pelvis offset 0
static RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__RotationOffset const Pelvis;

/// @brief Field Chest offset 0
static RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__RotationOffset const Chest;

/// @brief Field Head offset 0
static RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__RotationOffset const Head;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::VirtualBone
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12534))
// CS Name: RootMotion.FinalIK.IKSolverVR::VirtualBone
class CORDL_TYPE RootMotion__FinalIK__IKSolverVR__VirtualBone : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~RootMotion__FinalIK__IKSolverVR__VirtualBone() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__IKSolverVR__VirtualBone", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__IKSolverVR__VirtualBone(RootMotion__FinalIK__IKSolverVR__VirtualBone const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__IKSolverVR__VirtualBone", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__IKSolverVR__VirtualBone(RootMotion__FinalIK__IKSolverVR__VirtualBone&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__IKSolverVR__VirtualBone(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__IKSolverVR__VirtualBone& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__IKSolverVR__VirtualBone& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__IKSolverVR__VirtualBone& operator=(RootMotion__FinalIK__IKSolverVR__VirtualBone&& o) noexcept = default;
  constexpr RootMotion__FinalIK__IKSolverVR__VirtualBone& operator=(RootMotion__FinalIK__IKSolverVR__VirtualBone const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_readPosition, put=__set_readPosition))  readPosition;

constexpr void __set_readPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_readPosition() const;

 UnityEngine::Quaternion __declspec(property(get=__get_readRotation, put=__set_readRotation))  readRotation;

constexpr void __set_readRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_readRotation() const;

 UnityEngine::Vector3 __declspec(property(get=__get_solverPosition, put=__set_solverPosition))  solverPosition;

constexpr void __set_solverPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_solverPosition() const;

 UnityEngine::Quaternion __declspec(property(get=__get_solverRotation, put=__set_solverRotation))  solverRotation;

constexpr void __set_solverRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_solverRotation() const;

 float_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(float_t value) ;

constexpr float_t __get_length() const;

 float_t __declspec(property(get=__get_sqrMag, put=__set_sqrMag))  sqrMag;

constexpr void __set_sqrMag(float_t value) ;

constexpr float_t __get_sqrMag() const;

 UnityEngine::Vector3 __declspec(property(get=__get_axis, put=__set_axis))  axis;

constexpr void __set_axis(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_axis() const;


// Methods

// Ctor Parameters [CppParam { name: "position", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: None }]
explicit RootMotion__FinalIK__IKSolverVR__VirtualBone(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation) ;

/// @brief Method .ctor addr 0x11f2d18 size 0x70 virtual false final false
 void _ctor(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation) ;

/// @brief Method Read addr 0x11f2d88 size 0x20 virtual false final false
 void Read(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation) ;

/// @brief Method SwingRotation addr 0x11f606c size 0x200 virtual false final false
static void SwingRotation(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone> bones, int32_t index, UnityEngine::Vector3 swingTarget, float_t weight) ;

/// @brief Method PreSolve addr 0x11f626c size 0x160 virtual false final false
static float_t PreSolve(ByRef<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>> bones) ;

/// @brief Method RotateAroundPoint addr 0x11f5de0 size 0x170 virtual false final false
static void RotateAroundPoint(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone> bones, int32_t index, UnityEngine::Vector3 point, UnityEngine::Quaternion rotation) ;

/// @brief Method RotateBy addr 0x11f63cc size 0x1a8 virtual false final false
static void RotateBy(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone> bones, int32_t index, UnityEngine::Quaternion rotation) ;

/// @brief Method RotateBy addr 0x11f6574 size 0x188 virtual false final false
static void RotateBy(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone> bones, UnityEngine::Quaternion rotation) ;

/// @brief Method RotateTo addr 0x11f66fc size 0xa4 virtual false final false
static void RotateTo(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone> bones, int32_t index, UnityEngine::Quaternion rotation) ;

/// @brief Method SolveTrigonometric addr 0x11f54b0 size 0x3e4 virtual false final false
static void SolveTrigonometric(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone> bones, int32_t first, int32_t second, int32_t third, UnityEngine::Vector3 targetPosition, UnityEngine::Vector3 bendNormal, float_t weight) ;

/// @brief Method GetDirectionToBendPoint addr 0x11f67a0 size 0x158 virtual false final false
static UnityEngine::Vector3 GetDirectionToBendPoint(UnityEngine::Vector3 direction, float_t directionMag, UnityEngine::Vector3 bendDirection, float_t sqrMag1, float_t sqrMag2) ;

/// @brief Method SolveFABRIK addr 0x11f50e4 size 0x3cc virtual false final false
static void SolveFABRIK(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone> bones, UnityEngine::Vector3 startPosition, UnityEngine::Vector3 targetPosition, float_t weight, float_t minNormalizedTargetDistance, int32_t iterations, float_t length, UnityEngine::Vector3 startOffset) ;

/// @brief Method SolveFABRIKJoint addr 0x11f68f8 size 0x114 virtual false final false
static UnityEngine::Vector3 SolveFABRIKJoint(UnityEngine::Vector3 pos1, UnityEngine::Vector3 pos2, float_t length) ;

/// @brief Method SolveCCD addr 0x11f6a0c size 0x1b4 virtual false final false
static void SolveCCD(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone> bones, UnityEngine::Vector3 targetPosition, float_t weight, int32_t iterations) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::IKSolverVR
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12506))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12535))
// CS Name: RootMotion.FinalIK.IKSolverVR
class CORDL_TYPE IKSolverVR : public RootMotion::FinalIK::IKSolver {
public:
// Declarations
using VirtualBone = RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone;

using RotationOffset = RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__RotationOffset;

using PositionOffset = RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset;

using Spine = RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine;

using Locomotion = RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion;

using Leg = RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg;

using Footstep = RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep;

using BodyPart = RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart;

using Arm = RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x178};

virtual ~IKSolverVR() = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverVR", modifiers: " const&", def_value: None }]
constexpr IKSolverVR(IKSolverVR const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverVR", modifiers: "&&", def_value: None }]
constexpr IKSolverVR(IKSolverVR&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IKSolverVR(void* ptr) noexcept : RootMotion::FinalIK::IKSolver(ptr) {
}


  constexpr IKSolverVR& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IKSolverVR& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IKSolverVR& operator=(IKSolverVR&& o) noexcept = default;
  constexpr IKSolverVR& operator=(IKSolverVR const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::Transform> __declspec(property(get=__get_solverTransforms, put=__set_solverTransforms))  solverTransforms;

constexpr void __set_solverTransforms(::ArrayW<UnityEngine::Transform> value) ;

constexpr ::ArrayW<UnityEngine::Transform> __get_solverTransforms() const;

 bool __declspec(property(get=__get_hasChest, put=__set_hasChest))  hasChest;

constexpr void __set_hasChest(bool value) ;

constexpr bool __get_hasChest() const;

 bool __declspec(property(get=__get_hasNeck, put=__set_hasNeck))  hasNeck;

constexpr void __set_hasNeck(bool value) ;

constexpr bool __get_hasNeck() const;

 bool __declspec(property(get=__get_hasShoulders, put=__set_hasShoulders))  hasShoulders;

constexpr void __set_hasShoulders(bool value) ;

constexpr bool __get_hasShoulders() const;

 bool __declspec(property(get=__get_hasToes, put=__set_hasToes))  hasToes;

constexpr void __set_hasToes(bool value) ;

constexpr bool __get_hasToes() const;

 bool __declspec(property(get=__get_hasLegs, put=__set_hasLegs))  hasLegs;

constexpr void __set_hasLegs(bool value) ;

constexpr bool __get_hasLegs() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_readPositions, put=__set_readPositions))  readPositions;

constexpr void __set_readPositions(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get_readPositions() const;

 ::ArrayW<UnityEngine::Quaternion> __declspec(property(get=__get_readRotations, put=__set_readRotations))  readRotations;

constexpr void __set_readRotations(::ArrayW<UnityEngine::Quaternion> value) ;

constexpr ::ArrayW<UnityEngine::Quaternion> __get_readRotations() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_solvedPositions, put=__set_solvedPositions))  solvedPositions;

constexpr void __set_solvedPositions(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get_solvedPositions() const;

 ::ArrayW<UnityEngine::Quaternion> __declspec(property(get=__get_solvedRotations, put=__set_solvedRotations))  solvedRotations;

constexpr void __set_solvedRotations(::ArrayW<UnityEngine::Quaternion> value) ;

constexpr ::ArrayW<UnityEngine::Quaternion> __get_solvedRotations() const;

 ::ArrayW<UnityEngine::Quaternion> __declspec(property(get=__get_defaultLocalRotations, put=__set_defaultLocalRotations))  defaultLocalRotations;

constexpr void __set_defaultLocalRotations(::ArrayW<UnityEngine::Quaternion> value) ;

constexpr ::ArrayW<UnityEngine::Quaternion> __get_defaultLocalRotations() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_defaultLocalPositions, put=__set_defaultLocalPositions))  defaultLocalPositions;

constexpr void __set_defaultLocalPositions(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get_defaultLocalPositions() const;

 UnityEngine::Vector3 __declspec(property(get=__get_rootV, put=__set_rootV))  rootV;

constexpr void __set_rootV(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_rootV() const;

 UnityEngine::Vector3 __declspec(property(get=__get_rootVelocity, put=__set_rootVelocity))  rootVelocity;

constexpr void __set_rootVelocity(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_rootVelocity() const;

 UnityEngine::Vector3 __declspec(property(get=__get_bodyOffset, put=__set_bodyOffset))  bodyOffset;

constexpr void __set_bodyOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_bodyOffset() const;

 int32_t __declspec(property(get=__get_supportLegIndex, put=__set_supportLegIndex))  supportLegIndex;

constexpr void __set_supportLegIndex(int32_t value) ;

constexpr int32_t __get_supportLegIndex() const;

 int32_t __declspec(property(get=__get_lastLOD, put=__set_lastLOD))  lastLOD;

constexpr void __set_lastLOD(int32_t value) ;

constexpr int32_t __get_lastLOD() const;

 int32_t __declspec(property(get=__get_LOD, put=__set_LOD))  LOD;

constexpr void __set_LOD(int32_t value) ;

constexpr int32_t __get_LOD() const;

 bool __declspec(property(get=__get_plantFeet, put=__set_plantFeet))  plantFeet;

constexpr void __set_plantFeet(bool value) ;

constexpr bool __get_plantFeet() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone __declspec(property(get=__get__rootBone_k__BackingField, put=__set__rootBone_k__BackingField))  _rootBone_k__BackingField;

constexpr void __set__rootBone_k__BackingField(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone __get__rootBone_k__BackingField() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine __declspec(property(get=__get_spine, put=__set_spine))  spine;

constexpr void __set_spine(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine __get_spine() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm __declspec(property(get=__get_leftArm, put=__set_leftArm))  leftArm;

constexpr void __set_leftArm(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm __get_leftArm() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm __declspec(property(get=__get_rightArm, put=__set_rightArm))  rightArm;

constexpr void __set_rightArm(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm __get_rightArm() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg __declspec(property(get=__get_leftLeg, put=__set_leftLeg))  leftLeg;

constexpr void __set_leftLeg(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg __get_leftLeg() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg __declspec(property(get=__get_rightLeg, put=__set_rightLeg))  rightLeg;

constexpr void __set_rightLeg(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg __get_rightLeg() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion __declspec(property(get=__get_locomotion, put=__set_locomotion))  locomotion;

constexpr void __set_locomotion(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion __get_locomotion() const;

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg> __declspec(property(get=__get_legs, put=__set_legs))  legs;

constexpr void __set_legs(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg> __get_legs() const;

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm> __declspec(property(get=__get_arms, put=__set_arms))  arms;

constexpr void __set_arms(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm> __get_arms() const;

 UnityEngine::Vector3 __declspec(property(get=__get_headPosition, put=__set_headPosition))  headPosition;

constexpr void __set_headPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_headPosition() const;

 UnityEngine::Vector3 __declspec(property(get=__get_headDeltaPosition, put=__set_headDeltaPosition))  headDeltaPosition;

constexpr void __set_headDeltaPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_headDeltaPosition() const;

 UnityEngine::Vector3 __declspec(property(get=__get_raycastOriginPelvis, put=__set_raycastOriginPelvis))  raycastOriginPelvis;

constexpr void __set_raycastOriginPelvis(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_raycastOriginPelvis() const;

 UnityEngine::Vector3 __declspec(property(get=__get_lastOffset, put=__set_lastOffset))  lastOffset;

constexpr void __set_lastOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_lastOffset() const;

 UnityEngine::Vector3 __declspec(property(get=__get_debugPos1, put=__set_debugPos1))  debugPos1;

constexpr void __set_debugPos1(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_debugPos1() const;

 UnityEngine::Vector3 __declspec(property(get=__get_debugPos2, put=__set_debugPos2))  debugPos2;

constexpr void __set_debugPos2(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_debugPos2() const;

 UnityEngine::Vector3 __declspec(property(get=__get_debugPos3, put=__set_debugPos3))  debugPos3;

constexpr void __set_debugPos3(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_debugPos3() const;

 UnityEngine::Vector3 __declspec(property(get=__get_debugPos4, put=__set_debugPos4))  debugPos4;

constexpr void __set_debugPos4(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_debugPos4() const;


// Properties

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone __declspec(property(get=get_rootBone, put=set_rootBone))  rootBone;


// Methods

/// @brief Method SetToReferences addr 0x11e5b7c size 0x2d4 virtual false final false
 void SetToReferences(RootMotion::FinalIK::RootMotion__FinalIK__VRIK__References references) ;

/// @brief Method GuessHandOrientations addr 0x11e5f9c size 0x2f0 virtual false final false
 void GuessHandOrientations(RootMotion::FinalIK::RootMotion__FinalIK__VRIK__References references, bool onlyIfZero) ;

/// @brief Method DefaultAnimationCurves addr 0x11e5e50 size 0x14c virtual false final false
 void DefaultAnimationCurves() ;

/// @brief Method AddPositionOffset addr 0x11e67cc size 0x144 virtual false final false
 void AddPositionOffset(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset positionOffset, UnityEngine::Vector3 value) ;

/// @brief Method AddRotationOffset addr 0x11e6910 size 0x40 virtual false final false
 void AddRotationOffset(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__RotationOffset rotationOffset, UnityEngine::Vector3 value) ;

/// @brief Method AddRotationOffset addr 0x11e6950 size 0x124 virtual false final false
 void AddRotationOffset(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__RotationOffset rotationOffset, UnityEngine::Quaternion value) ;

/// @brief Method AddPlatformMotion addr 0x11e6a74 size 0xd4 virtual false final false
 void AddPlatformMotion(UnityEngine::Vector3 deltaPosition, UnityEngine::Quaternion deltaRotation, UnityEngine::Vector3 platformPivot) ;

/// @brief Method Reset addr 0x11e6fc8 size 0x110 virtual false final false
 void Reset() ;

/// @brief Method StoreDefaultLocalState addr 0x11e7918 size 0x154 virtual true final false
 void StoreDefaultLocalState() ;

/// @brief Method FixTransforms addr 0x11e7a6c size 0x1ec virtual true final false
 void FixTransforms() ;

/// @brief Method GetPoints addr 0x11e7c58 size 0x70 virtual true final false
 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point> GetPoints() ;

/// @brief Method GetPoint addr 0x11e7cc8 size 0x70 virtual true final false
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point GetPoint(UnityEngine::Transform transform) ;

/// @brief Method IsValid addr 0x11e7d38 size 0x1fc virtual true final false
 bool IsValid(ByRef<::StringW> message) ;

/// @brief Method GetNormal addr 0x11e7f34 size 0x270 virtual false final false
 UnityEngine::Vector3 GetNormal(::ArrayW<UnityEngine::Transform> transforms) ;

/// @brief Method GuessWristToPalmAxis addr 0x11e628c size 0xe4 virtual false final false
 UnityEngine::Vector3 GuessWristToPalmAxis(UnityEngine::Transform hand, UnityEngine::Transform forearm) ;

/// @brief Method GuessPalmToThumbAxis addr 0x11e6370 size 0x348 virtual false final false
 UnityEngine::Vector3 GuessPalmToThumbAxis(UnityEngine::Transform hand, UnityEngine::Transform forearm) ;

/// @brief Method GetSineKeyframes addr 0x11e66b8 size 0x114 virtual false final false
static ::ArrayW<UnityEngine::Keyframe> GetSineKeyframes(float_t mag) ;

/// @brief Method UpdateSolverTransforms addr 0x11e70d8 size 0x150 virtual false final false
 void UpdateSolverTransforms() ;

/// @brief Method OnInitiate addr 0x11e81a4 size 0x3c virtual true final false
 void OnInitiate() ;

/// @brief Method OnUpdate addr 0x11e81e0 size 0x408 virtual true final false
 void OnUpdate() ;

/// @brief Method WriteTransforms addr 0x11e976c size 0x454 virtual false final false
 void WriteTransforms() ;

/// @brief Method Read addr 0x11e7228 size 0x50c virtual false final false
 void Read(::ArrayW<UnityEngine::Vector3> positions, ::ArrayW<UnityEngine::Quaternion> rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs) ;

/// @brief Method Solve addr 0x11e85e8 size 0x1048 virtual false final false
 void Solve() ;

/// @brief Method GetPosition addr 0x11e9bc0 size 0x3c virtual false final false
 UnityEngine::Vector3 GetPosition(int32_t index) ;

/// @brief Method GetRotation addr 0x11e9bfc size 0x38 virtual false final false
 UnityEngine::Quaternion GetRotation(int32_t index) ;

/// @brief Method get_rootBone addr 0x11ed124 size 0x8 virtual false final false
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone get_rootBone() ;

/// @brief Method set_rootBone addr 0x11ed12c size 0x8 virtual false final false
 void set_rootBone(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone value) ;

/// @brief Method Write addr 0x11e9630 size 0x13c virtual false final false
 void Write() ;

/// @brief Method GetPelvisOffset addr 0x11eca38 size 0x6ec virtual false final false
 UnityEngine::Vector3 GetPelvisOffset() ;

// Ctor Parameters []
explicit IKSolverVR() ;

/// @brief Method .ctor addr 0x11ed134 size 0x228 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode, "RootMotion.FinalIK", "IKSolverVR/Arm/ShoulderRotationMode");
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset, "RootMotion.FinalIK", "IKSolverVR/PositionOffset");
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__RotationOffset, "RootMotion.FinalIK", "IKSolverVR/RotationOffset");
NEED_NO_BOX(RootMotion::FinalIK::IKSolverVR);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverVR, "RootMotion.FinalIK", "IKSolverVR");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm, "RootMotion.FinalIK", "IKSolverVR/Arm");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart, "RootMotion.FinalIK", "IKSolverVR/BodyPart");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep, "RootMotion.FinalIK", "IKSolverVR/Footstep");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg, "RootMotion.FinalIK", "IKSolverVR/Leg");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion, "RootMotion.FinalIK", "IKSolverVR/Locomotion");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine, "RootMotion.FinalIK", "IKSolverVR/Spine");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone, "RootMotion.FinalIK", "IKSolverVR/VirtualBone");
