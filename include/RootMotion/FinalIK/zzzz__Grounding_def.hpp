#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__Grounding__Leg;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace RootMotion::FinalIK {
struct RootMotion__FinalIK__Grounding__Quality;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__Grounding__Pelvis;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion::FinalIK {
struct RootMotion__FinalIK__Grounding__Quality;
}
namespace RootMotion::FinalIK {
class Grounding;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__Grounding__Leg;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__Grounding__Pelvis;
}
// Type: ::Quality
namespace RootMotion::FinalIK {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12468))
// CS Name: RootMotion.FinalIK.Grounding::Quality
struct CORDL_TYPE RootMotion__FinalIK__Grounding__Quality : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RootMotion__FinalIK__Grounding__Quality(int32_t value__) noexcept;


                    constexpr RootMotion__FinalIK__Grounding__Quality(RootMotion__FinalIK__Grounding__Quality const&) = default;
                    constexpr RootMotion__FinalIK__Grounding__Quality(RootMotion__FinalIK__Grounding__Quality&&) = default;
                    constexpr RootMotion__FinalIK__Grounding__Quality& operator=(RootMotion__FinalIK__Grounding__Quality const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RootMotion__FinalIK__Grounding__Quality& operator=(RootMotion__FinalIK__Grounding__Quality&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__Grounding__Quality(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RootMotion__FinalIK__Grounding__Quality_Unwrapped : int32_t {
__Fastest = 0,
__Simple = 1,
__Best = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RootMotion__FinalIK__Grounding__Quality_Unwrapped () const noexcept {
return std::bit_cast<__RootMotion__FinalIK__Grounding__Quality_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Fastest offset 0
static RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Quality const Fastest;

/// @brief Field Simple offset 0
static RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Quality const Simple;

/// @brief Field Best offset 0
static RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Quality const Best;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::Leg
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12469))
// CS Name: RootMotion.FinalIK.Grounding::Leg
class CORDL_TYPE RootMotion__FinalIK__Grounding__Leg : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x118};

virtual ~RootMotion__FinalIK__Grounding__Leg() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__Grounding__Leg", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__Grounding__Leg(RootMotion__FinalIK__Grounding__Leg const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__Grounding__Leg", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__Grounding__Leg(RootMotion__FinalIK__Grounding__Leg&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__Grounding__Leg(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__Grounding__Leg& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__Grounding__Leg& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__Grounding__Leg& operator=(RootMotion__FinalIK__Grounding__Leg&& o) noexcept = default;
  constexpr RootMotion__FinalIK__Grounding__Leg& operator=(RootMotion__FinalIK__Grounding__Leg const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__isGrounded_k__BackingField, put=__set__isGrounded_k__BackingField))  _isGrounded_k__BackingField;

constexpr void __set__isGrounded_k__BackingField(bool value) ;

constexpr bool __get__isGrounded_k__BackingField() const;

 UnityEngine::Vector3 __declspec(property(get=__get__IKPosition_k__BackingField, put=__set__IKPosition_k__BackingField))  _IKPosition_k__BackingField;

constexpr void __set__IKPosition_k__BackingField(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__IKPosition_k__BackingField() const;

 UnityEngine::Quaternion __declspec(property(get=__get_rotationOffset, put=__set_rotationOffset))  rotationOffset;

constexpr void __set_rotationOffset(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_rotationOffset() const;

 bool __declspec(property(get=__get__initiated_k__BackingField, put=__set__initiated_k__BackingField))  _initiated_k__BackingField;

constexpr void __set__initiated_k__BackingField(bool value) ;

constexpr bool __get__initiated_k__BackingField() const;

 float_t __declspec(property(get=__get__heightFromGround_k__BackingField, put=__set__heightFromGround_k__BackingField))  _heightFromGround_k__BackingField;

constexpr void __set__heightFromGround_k__BackingField(float_t value) ;

constexpr float_t __get__heightFromGround_k__BackingField() const;

 UnityEngine::Vector3 __declspec(property(get=__get__velocity_k__BackingField, put=__set__velocity_k__BackingField))  _velocity_k__BackingField;

constexpr void __set__velocity_k__BackingField(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__velocity_k__BackingField() const;

 UnityEngine::Transform __declspec(property(get=__get__transform_k__BackingField, put=__set__transform_k__BackingField))  _transform_k__BackingField;

constexpr void __set__transform_k__BackingField(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__transform_k__BackingField() const;

 float_t __declspec(property(get=__get__IKOffset_k__BackingField, put=__set__IKOffset_k__BackingField))  _IKOffset_k__BackingField;

constexpr void __set__IKOffset_k__BackingField(float_t value) ;

constexpr float_t __get__IKOffset_k__BackingField() const;

 bool __declspec(property(get=__get_invertFootCenter, put=__set_invertFootCenter))  invertFootCenter;

constexpr void __set_invertFootCenter(bool value) ;

constexpr bool __get_invertFootCenter() const;

 UnityEngine::RaycastHit __declspec(property(get=__get__heelHit_k__BackingField, put=__set__heelHit_k__BackingField))  _heelHit_k__BackingField;

constexpr void __set__heelHit_k__BackingField(UnityEngine::RaycastHit value) ;

constexpr UnityEngine::RaycastHit __get__heelHit_k__BackingField() const;

 UnityEngine::RaycastHit __declspec(property(get=__get__capsuleHit_k__BackingField, put=__set__capsuleHit_k__BackingField))  _capsuleHit_k__BackingField;

constexpr void __set__capsuleHit_k__BackingField(UnityEngine::RaycastHit value) ;

constexpr UnityEngine::RaycastHit __get__capsuleHit_k__BackingField() const;

 RootMotion::FinalIK::Grounding __declspec(property(get=__get_grounding, put=__set_grounding))  grounding;

constexpr void __set_grounding(RootMotion::FinalIK::Grounding value) ;

constexpr RootMotion::FinalIK::Grounding __get_grounding() const;

 float_t __declspec(property(get=__get_lastTime, put=__set_lastTime))  lastTime;

constexpr void __set_lastTime(float_t value) ;

constexpr float_t __get_lastTime() const;

 float_t __declspec(property(get=__get_deltaTime, put=__set_deltaTime))  deltaTime;

constexpr void __set_deltaTime(float_t value) ;

constexpr float_t __get_deltaTime() const;

 UnityEngine::Vector3 __declspec(property(get=__get_lastPosition, put=__set_lastPosition))  lastPosition;

constexpr void __set_lastPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_lastPosition() const;

 UnityEngine::Quaternion __declspec(property(get=__get_toHitNormal, put=__set_toHitNormal))  toHitNormal;

constexpr void __set_toHitNormal(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_toHitNormal() const;

 UnityEngine::Quaternion __declspec(property(get=__get_r, put=__set_r))  r;

constexpr void __set_r(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_r() const;

 UnityEngine::Vector3 __declspec(property(get=__get_up, put=__set_up))  up;

constexpr void __set_up(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_up() const;

 bool __declspec(property(get=__get_doOverrideFootPosition, put=__set_doOverrideFootPosition))  doOverrideFootPosition;

constexpr void __set_doOverrideFootPosition(bool value) ;

constexpr bool __get_doOverrideFootPosition() const;

 UnityEngine::Vector3 __declspec(property(get=__get_overrideFootPosition, put=__set_overrideFootPosition))  overrideFootPosition;

constexpr void __set_overrideFootPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_overrideFootPosition() const;

 UnityEngine::Vector3 __declspec(property(get=__get_transformPosition, put=__set_transformPosition))  transformPosition;

constexpr void __set_transformPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_transformPosition() const;


// Properties

 bool __declspec(property(get=get_isGrounded, put=set_isGrounded))  isGrounded;

 UnityEngine::Vector3 __declspec(property(get=get_IKPosition, put=set_IKPosition))  IKPosition;

 bool __declspec(property(get=get_initiated, put=set_initiated))  initiated;

 float_t __declspec(property(get=get_heightFromGround, put=set_heightFromGround))  heightFromGround;

 UnityEngine::Vector3 __declspec(property(get=get_velocity, put=set_velocity))  velocity;

 UnityEngine::Transform __declspec(property(get=get_transform, put=set_transform))  transform;

 float_t __declspec(property(get=get_IKOffset, put=set_IKOffset))  IKOffset;

 UnityEngine::RaycastHit __declspec(property(get=get_heelHit, put=set_heelHit))  heelHit;

 UnityEngine::RaycastHit __declspec(property(get=get_capsuleHit, put=set_capsuleHit))  capsuleHit;

 UnityEngine::RaycastHit __declspec(property(get=get_GetHitPoint))  GetHitPoint;

 float_t __declspec(property(get=get_stepHeightFromGround))  stepHeightFromGround;

 float_t __declspec(property(get=get_rootYOffset))  rootYOffset;


// Methods

/// @brief Method get_isGrounded addr 0x11c2f10 size 0x8 virtual false final false
 bool get_isGrounded() ;

/// @brief Method set_isGrounded addr 0x11c2f18 size 0xc virtual false final false
 void set_isGrounded(bool value) ;

/// @brief Method get_IKPosition addr 0x11c2f24 size 0xc virtual false final false
 UnityEngine::Vector3 get_IKPosition() ;

/// @brief Method set_IKPosition addr 0x11c2f30 size 0xc virtual false final false
 void set_IKPosition(UnityEngine::Vector3 value) ;

/// @brief Method get_initiated addr 0x11c2f3c size 0x8 virtual false final false
 bool get_initiated() ;

/// @brief Method set_initiated addr 0x11c2f44 size 0xc virtual false final false
 void set_initiated(bool value) ;

/// @brief Method get_heightFromGround addr 0x11c2f50 size 0x8 virtual false final false
 float_t get_heightFromGround() ;

/// @brief Method set_heightFromGround addr 0x11c2f58 size 0x8 virtual false final false
 void set_heightFromGround(float_t value) ;

/// @brief Method get_velocity addr 0x11c2f60 size 0xc virtual false final false
 UnityEngine::Vector3 get_velocity() ;

/// @brief Method set_velocity addr 0x11c2f6c size 0xc virtual false final false
 void set_velocity(UnityEngine::Vector3 value) ;

/// @brief Method get_transform addr 0x11c2f78 size 0x8 virtual false final false
 UnityEngine::Transform get_transform() ;

/// @brief Method set_transform addr 0x11c2f80 size 0x8 virtual false final false
 void set_transform(UnityEngine::Transform value) ;

/// @brief Method get_IKOffset addr 0x11c2f88 size 0x8 virtual false final false
 float_t get_IKOffset() ;

/// @brief Method set_IKOffset addr 0x11c2f90 size 0x8 virtual false final false
 void set_IKOffset(float_t value) ;

/// @brief Method get_heelHit addr 0x11c2f98 size 0x18 virtual false final false
 UnityEngine::RaycastHit get_heelHit() ;

/// @brief Method set_heelHit addr 0x11c2fb0 size 0x20 virtual false final false
 void set_heelHit(UnityEngine::RaycastHit value) ;

/// @brief Method get_capsuleHit addr 0x11c2fd0 size 0x18 virtual false final false
 UnityEngine::RaycastHit get_capsuleHit() ;

/// @brief Method set_capsuleHit addr 0x11c2fe8 size 0x20 virtual false final false
 void set_capsuleHit(UnityEngine::RaycastHit value) ;

/// @brief Method get_GetHitPoint addr 0x11c3008 size 0x48 virtual false final false
 UnityEngine::RaycastHit get_GetHitPoint() ;

/// @brief Method SetFootPosition addr 0x11c3050 size 0x14 virtual false final false
 void SetFootPosition(UnityEngine::Vector3 position) ;

/// @brief Method Initiate addr 0x11c2078 size 0xc8 virtual false final false
 void Initiate(RootMotion::FinalIK::Grounding grounding, UnityEngine::Transform transform) ;

/// @brief Method OnEnable addr 0x11c3064 size 0x40 virtual false final false
 void OnEnable() ;

/// @brief Method Reset addr 0x11c2b80 size 0x94 virtual false final false
 void Reset() ;

/// @brief Method Process addr 0x11c2168 size 0x798 virtual false final false
 void Process() ;

/// @brief Method get_stepHeightFromGround addr 0x11c38f0 size 0x34 virtual false final false
 float_t get_stepHeightFromGround() ;

/// @brief Method GetCapsuleHit addr 0x11c3504 size 0x3ec virtual false final false
 UnityEngine::RaycastHit GetCapsuleHit(UnityEngine::Vector3 offsetFromHeel) ;

/// @brief Method GetRaycastHit addr 0x11c30a4 size 0x2c8 virtual false final false
 UnityEngine::RaycastHit GetRaycastHit(UnityEngine::Vector3 offsetFromHeel) ;

/// @brief Method RotateNormal addr 0x11c3984 size 0x6c virtual false final false
 UnityEngine::Vector3 RotateNormal(UnityEngine::Vector3 normal) ;

/// @brief Method SetFootToPoint addr 0x11c336c size 0x80 virtual false final false
 void SetFootToPoint(UnityEngine::Vector3 normal, UnityEngine::Vector3 point) ;

/// @brief Method SetFootToPlane addr 0x11c33ec size 0x118 virtual false final false
 void SetFootToPlane(UnityEngine::Vector3 planeNormal, UnityEngine::Vector3 planePoint, UnityEngine::Vector3 heelHitPoint) ;

/// @brief Method GetHeightFromGround addr 0x11c39f0 size 0x50 virtual false final false
 float_t GetHeightFromGround(UnityEngine::Vector3 hitPoint) ;

/// @brief Method RotateFoot addr 0x11c3924 size 0x60 virtual false final false
 void RotateFoot() ;

/// @brief Method GetRotationOffsetTarget addr 0x11c3acc size 0x1b0 virtual false final false
 UnityEngine::Quaternion GetRotationOffsetTarget() ;

/// @brief Method get_rootYOffset addr 0x11c3a40 size 0x8c virtual false final false
 float_t get_rootYOffset() ;

static RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Leg New_ctor() ;

/// @brief Method .ctor addr 0x11c1fd8 size 0x98 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::Pelvis
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12470))
// CS Name: RootMotion.FinalIK.Grounding::Pelvis
class CORDL_TYPE RootMotion__FinalIK__Grounding__Pelvis : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~RootMotion__FinalIK__Grounding__Pelvis() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__Grounding__Pelvis", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__Grounding__Pelvis(RootMotion__FinalIK__Grounding__Pelvis const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__Grounding__Pelvis", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__Grounding__Pelvis(RootMotion__FinalIK__Grounding__Pelvis&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__Grounding__Pelvis(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__Grounding__Pelvis& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__Grounding__Pelvis& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__Grounding__Pelvis& operator=(RootMotion__FinalIK__Grounding__Pelvis&& o) noexcept = default;
  constexpr RootMotion__FinalIK__Grounding__Pelvis& operator=(RootMotion__FinalIK__Grounding__Pelvis const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get__IKOffset_k__BackingField, put=__set__IKOffset_k__BackingField))  _IKOffset_k__BackingField;

constexpr void __set__IKOffset_k__BackingField(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__IKOffset_k__BackingField() const;

 float_t __declspec(property(get=__get__heightOffset_k__BackingField, put=__set__heightOffset_k__BackingField))  _heightOffset_k__BackingField;

constexpr void __set__heightOffset_k__BackingField(float_t value) ;

constexpr float_t __get__heightOffset_k__BackingField() const;

 RootMotion::FinalIK::Grounding __declspec(property(get=__get_grounding, put=__set_grounding))  grounding;

constexpr void __set_grounding(RootMotion::FinalIK::Grounding value) ;

constexpr RootMotion::FinalIK::Grounding __get_grounding() const;

 UnityEngine::Vector3 __declspec(property(get=__get_lastRootPosition, put=__set_lastRootPosition))  lastRootPosition;

constexpr void __set_lastRootPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_lastRootPosition() const;

 float_t __declspec(property(get=__get_damperF, put=__set_damperF))  damperF;

constexpr void __set_damperF(float_t value) ;

constexpr float_t __get_damperF() const;

 bool __declspec(property(get=__get_initiated, put=__set_initiated))  initiated;

constexpr void __set_initiated(bool value) ;

constexpr bool __get_initiated() const;

 float_t __declspec(property(get=__get_lastTime, put=__set_lastTime))  lastTime;

constexpr void __set_lastTime(float_t value) ;

constexpr float_t __get_lastTime() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_IKOffset, put=set_IKOffset))  IKOffset;

 float_t __declspec(property(get=get_heightOffset, put=set_heightOffset))  heightOffset;


// Methods

/// @brief Method get_IKOffset addr 0x11c3c7c size 0xc virtual false final false
 UnityEngine::Vector3 get_IKOffset() ;

/// @brief Method set_IKOffset addr 0x11c3c88 size 0xc virtual false final false
 void set_IKOffset(UnityEngine::Vector3 value) ;

/// @brief Method get_heightOffset addr 0x11c3c94 size 0x8 virtual false final false
 float_t get_heightOffset() ;

/// @brief Method set_heightOffset addr 0x11c3c9c size 0x8 virtual false final false
 void set_heightOffset(float_t value) ;

/// @brief Method Initiate addr 0x11c2140 size 0x10 virtual false final false
 void Initiate(RootMotion::FinalIK::Grounding grounding) ;

/// @brief Method Reset addr 0x11c2aec size 0x94 virtual false final false
 void Reset() ;

/// @brief Method OnEnable addr 0x11c3ca4 size 0x54 virtual false final false
 void OnEnable() ;

/// @brief Method Process addr 0x11c2900 size 0x1ec virtual false final false
 void Process(float_t lowestOffset, float_t highestOffset, bool isGrounded) ;

static RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Pelvis New_ctor() ;

/// @brief Method .ctor addr 0x11c2070 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::Grounding
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12471))
// CS Name: RootMotion.FinalIK.Grounding
class CORDL_TYPE Grounding : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Pelvis = RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Pelvis;

using Leg = RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Leg;

using Quality = RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Quality;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~Grounding() = default;

// Ctor Parameters [CppParam { name: "", ty: "Grounding", modifiers: " const&", def_value: None }]
constexpr Grounding(Grounding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Grounding", modifiers: "&&", def_value: None }]
constexpr Grounding(Grounding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Grounding(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Grounding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Grounding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Grounding& operator=(Grounding&& o) noexcept = default;
  constexpr Grounding& operator=(Grounding const& o) noexcept = default;
                


// Fields

 UnityEngine::LayerMask __declspec(property(get=__get_layers, put=__set_layers))  layers;

constexpr void __set_layers(UnityEngine::LayerMask value) ;

constexpr UnityEngine::LayerMask __get_layers() const;

 float_t __declspec(property(get=__get_maxStep, put=__set_maxStep))  maxStep;

constexpr void __set_maxStep(float_t value) ;

constexpr float_t __get_maxStep() const;

 float_t __declspec(property(get=__get_heightOffset, put=__set_heightOffset))  heightOffset;

constexpr void __set_heightOffset(float_t value) ;

constexpr float_t __get_heightOffset() const;

 float_t __declspec(property(get=__get_footSpeed, put=__set_footSpeed))  footSpeed;

constexpr void __set_footSpeed(float_t value) ;

constexpr float_t __get_footSpeed() const;

 float_t __declspec(property(get=__get_footRadius, put=__set_footRadius))  footRadius;

constexpr void __set_footRadius(float_t value) ;

constexpr float_t __get_footRadius() const;

 float_t __declspec(property(get=__get_footCenterOffset, put=__set_footCenterOffset))  footCenterOffset;

constexpr void __set_footCenterOffset(float_t value) ;

constexpr float_t __get_footCenterOffset() const;

 float_t __declspec(property(get=__get_prediction, put=__set_prediction))  prediction;

constexpr void __set_prediction(float_t value) ;

constexpr float_t __get_prediction() const;

 float_t __declspec(property(get=__get_footRotationWeight, put=__set_footRotationWeight))  footRotationWeight;

constexpr void __set_footRotationWeight(float_t value) ;

constexpr float_t __get_footRotationWeight() const;

 float_t __declspec(property(get=__get_footRotationSpeed, put=__set_footRotationSpeed))  footRotationSpeed;

constexpr void __set_footRotationSpeed(float_t value) ;

constexpr float_t __get_footRotationSpeed() const;

 float_t __declspec(property(get=__get_maxFootRotationAngle, put=__set_maxFootRotationAngle))  maxFootRotationAngle;

constexpr void __set_maxFootRotationAngle(float_t value) ;

constexpr float_t __get_maxFootRotationAngle() const;

 bool __declspec(property(get=__get_rotateSolver, put=__set_rotateSolver))  rotateSolver;

constexpr void __set_rotateSolver(bool value) ;

constexpr bool __get_rotateSolver() const;

 float_t __declspec(property(get=__get_pelvisSpeed, put=__set_pelvisSpeed))  pelvisSpeed;

constexpr void __set_pelvisSpeed(float_t value) ;

constexpr float_t __get_pelvisSpeed() const;

 float_t __declspec(property(get=__get_pelvisDamper, put=__set_pelvisDamper))  pelvisDamper;

constexpr void __set_pelvisDamper(float_t value) ;

constexpr float_t __get_pelvisDamper() const;

 float_t __declspec(property(get=__get_lowerPelvisWeight, put=__set_lowerPelvisWeight))  lowerPelvisWeight;

constexpr void __set_lowerPelvisWeight(float_t value) ;

constexpr float_t __get_lowerPelvisWeight() const;

 float_t __declspec(property(get=__get_liftPelvisWeight, put=__set_liftPelvisWeight))  liftPelvisWeight;

constexpr void __set_liftPelvisWeight(float_t value) ;

constexpr float_t __get_liftPelvisWeight() const;

 float_t __declspec(property(get=__get_rootSphereCastRadius, put=__set_rootSphereCastRadius))  rootSphereCastRadius;

constexpr void __set_rootSphereCastRadius(float_t value) ;

constexpr float_t __get_rootSphereCastRadius() const;

 bool __declspec(property(get=__get_overstepFallsDown, put=__set_overstepFallsDown))  overstepFallsDown;

constexpr void __set_overstepFallsDown(bool value) ;

constexpr bool __get_overstepFallsDown() const;

 RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Quality __declspec(property(get=__get_quality, put=__set_quality))  quality;

constexpr void __set_quality(RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Quality value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Quality __get_quality() const;

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Leg> __declspec(property(get=__get__legs_k__BackingField, put=__set__legs_k__BackingField))  _legs_k__BackingField;

constexpr void __set__legs_k__BackingField(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Leg> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Leg> __get__legs_k__BackingField() const;

 RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Pelvis __declspec(property(get=__get__pelvis_k__BackingField, put=__set__pelvis_k__BackingField))  _pelvis_k__BackingField;

constexpr void __set__pelvis_k__BackingField(RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Pelvis value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Pelvis __get__pelvis_k__BackingField() const;

 bool __declspec(property(get=__get__isGrounded_k__BackingField, put=__set__isGrounded_k__BackingField))  _isGrounded_k__BackingField;

constexpr void __set__isGrounded_k__BackingField(bool value) ;

constexpr bool __get__isGrounded_k__BackingField() const;

 UnityEngine::Transform __declspec(property(get=__get__root_k__BackingField, put=__set__root_k__BackingField))  _root_k__BackingField;

constexpr void __set__root_k__BackingField(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__root_k__BackingField() const;

 UnityEngine::RaycastHit __declspec(property(get=__get__rootHit_k__BackingField, put=__set__rootHit_k__BackingField))  _rootHit_k__BackingField;

constexpr void __set__rootHit_k__BackingField(UnityEngine::RaycastHit value) ;

constexpr UnityEngine::RaycastHit __get__rootHit_k__BackingField() const;

 bool __declspec(property(get=__get_initiated, put=__set_initiated))  initiated;

constexpr void __set_initiated(bool value) ;

constexpr bool __get_initiated() const;


// Properties

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Leg> __declspec(property(get=get_legs, put=set_legs))  legs;

 RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Pelvis __declspec(property(get=get_pelvis, put=set_pelvis))  pelvis;

 bool __declspec(property(get=get_isGrounded, put=set_isGrounded))  isGrounded;

 UnityEngine::Transform __declspec(property(get=get_root, put=set_root))  root;

 UnityEngine::RaycastHit __declspec(property(get=get_rootHit, put=set_rootHit))  rootHit;

 bool __declspec(property(get=get_rootGrounded))  rootGrounded;

 UnityEngine::Vector3 __declspec(property(get=get_up))  up;

 bool __declspec(property(get=get_useRootRotation))  useRootRotation;


// Methods

/// @brief Method get_legs addr 0x11c1b50 size 0x8 virtual false final false
 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Leg> get_legs() ;

/// @brief Method set_legs addr 0x11c1b58 size 0x8 virtual false final false
 void set_legs(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Leg> value) ;

/// @brief Method get_pelvis addr 0x11c1b60 size 0x8 virtual false final false
 RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Pelvis get_pelvis() ;

/// @brief Method set_pelvis addr 0x11c1b68 size 0x8 virtual false final false
 void set_pelvis(RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Pelvis value) ;

/// @brief Method get_isGrounded addr 0x11c1b70 size 0x8 virtual false final false
 bool get_isGrounded() ;

/// @brief Method set_isGrounded addr 0x11c1b78 size 0xc virtual false final false
 void set_isGrounded(bool value) ;

/// @brief Method get_root addr 0x11c1b84 size 0x8 virtual false final false
 UnityEngine::Transform get_root() ;

/// @brief Method set_root addr 0x11c1b8c size 0x8 virtual false final false
 void set_root(UnityEngine::Transform value) ;

/// @brief Method get_rootHit addr 0x11c1b94 size 0x18 virtual false final false
 UnityEngine::RaycastHit get_rootHit() ;

/// @brief Method set_rootHit addr 0x11c1bac size 0x20 virtual false final false
 void set_rootHit(UnityEngine::RaycastHit value) ;

/// @brief Method get_rootGrounded addr 0x11c1bcc size 0x48 virtual false final false
 bool get_rootGrounded() ;

/// @brief Method GetRootHit addr 0x11c1c14 size 0x260 virtual false final false
 UnityEngine::RaycastHit GetRootHit(float_t maxDistanceMlp) ;

/// @brief Method IsValid addr 0x11c1edc size 0xfc virtual false final false
 bool IsValid(ByRef<::StringW> errorMessage) ;

/// @brief Method Initiate addr 0x11bc92c size 0x274 virtual false final false
 void Initiate(UnityEngine::Transform root, ::ArrayW<UnityEngine::Transform> feet) ;

/// @brief Method Update addr 0x11bcf14 size 0x1f4 virtual false final false
 void Update() ;

/// @brief Method GetLegsPlaneNormal addr 0x11bdeb0 size 0x178 virtual false final false
 UnityEngine::Vector3 GetLegsPlaneNormal() ;

/// @brief Method Reset addr 0x11bc5a4 size 0x78 virtual false final false
 void Reset() ;

/// @brief Method LogWarning addr 0x11c2150 size 0x18 virtual false final false
 void LogWarning(::StringW message) ;

/// @brief Method get_up addr 0x11c1e74 size 0x68 virtual false final false
 UnityEngine::Vector3 get_up() ;

/// @brief Method GetVerticalOffset addr 0x11c2cc8 size 0x84 virtual false final false
 float_t GetVerticalOffset(UnityEngine::Vector3 p1, UnityEngine::Vector3 p2) ;

/// @brief Method Flatten addr 0x11c2d4c size 0x154 virtual false final false
 UnityEngine::Vector3 Flatten(UnityEngine::Vector3 v) ;

/// @brief Method get_useRootRotation addr 0x11c2c14 size 0xb4 virtual false final false
 bool get_useRootRotation() ;

/// @brief Method GetFootCenterOffset addr 0x11c2ea0 size 0x70 virtual false final false
 UnityEngine::Vector3 GetFootCenterOffset() ;

static RootMotion::FinalIK::Grounding New_ctor() ;

/// @brief Method .ctor addr 0x11c0ecc size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Quality, "RootMotion.FinalIK", "Grounding/Quality");
NEED_NO_BOX(RootMotion::FinalIK::Grounding);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Grounding, "RootMotion.FinalIK", "Grounding");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Leg);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Leg, "RootMotion.FinalIK", "Grounding/Leg");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Pelvis);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Pelvis, "RootMotion.FinalIK", "Grounding/Pelvis");
