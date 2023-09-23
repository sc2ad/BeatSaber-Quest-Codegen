#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__OffsetModifier_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Quaternion;
}
namespace RootMotion::FinalIK {
class IKSolverFullBodyBiped;
}
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class RootMotion__FinalIK__HitReaction__HitPointBone__BoneLink;
}
namespace GlobalNamespace {
class RootMotion__FinalIK__HitReaction__HitPointEffector__EffectorLink;
}
namespace RootMotion::FinalIK {
class HitReaction;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__HitReaction__HitPoint;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__HitReaction__HitPointBone;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__HitReaction__HitPointEffector;
}
// Type: ::HitPoint
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12580))
// CS Name: RootMotion.FinalIK.HitReaction::HitPoint
class CORDL_TYPE RootMotion__FinalIK__HitReaction__HitPoint : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~RootMotion__FinalIK__HitReaction__HitPoint() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__HitReaction__HitPoint", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__HitReaction__HitPoint(RootMotion__FinalIK__HitReaction__HitPoint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__HitReaction__HitPoint", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__HitReaction__HitPoint(RootMotion__FinalIK__HitReaction__HitPoint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__HitReaction__HitPoint(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__HitReaction__HitPoint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__HitReaction__HitPoint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__HitReaction__HitPoint& operator=(RootMotion__FinalIK__HitReaction__HitPoint&& o) noexcept = default;
  constexpr RootMotion__FinalIK__HitReaction__HitPoint& operator=(RootMotion__FinalIK__HitReaction__HitPoint const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 UnityEngine::Collider __declspec(property(get=__get_collider, put=__set_collider))  collider;

constexpr void __set_collider(UnityEngine::Collider value) ;

constexpr UnityEngine::Collider __get_collider() const;

 float_t __declspec(property(get=__get_crossFadeTime, put=__set_crossFadeTime))  crossFadeTime;

constexpr void __set_crossFadeTime(float_t value) ;

constexpr float_t __get_crossFadeTime() const;

 float_t __declspec(property(get=__get__crossFader_k__BackingField, put=__set__crossFader_k__BackingField))  _crossFader_k__BackingField;

constexpr void __set__crossFader_k__BackingField(float_t value) ;

constexpr float_t __get__crossFader_k__BackingField() const;

 float_t __declspec(property(get=__get__timer_k__BackingField, put=__set__timer_k__BackingField))  _timer_k__BackingField;

constexpr void __set__timer_k__BackingField(float_t value) ;

constexpr float_t __get__timer_k__BackingField() const;

 UnityEngine::Vector3 __declspec(property(get=__get__force_k__BackingField, put=__set__force_k__BackingField))  _force_k__BackingField;

constexpr void __set__force_k__BackingField(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__force_k__BackingField() const;

 UnityEngine::Vector3 __declspec(property(get=__get__point_k__BackingField, put=__set__point_k__BackingField))  _point_k__BackingField;

constexpr void __set__point_k__BackingField(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__point_k__BackingField() const;

 float_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(float_t value) ;

constexpr float_t __get_length() const;

 float_t __declspec(property(get=__get_crossFadeSpeed, put=__set_crossFadeSpeed))  crossFadeSpeed;

constexpr void __set_crossFadeSpeed(float_t value) ;

constexpr float_t __get_crossFadeSpeed() const;

 float_t __declspec(property(get=__get_lastTime, put=__set_lastTime))  lastTime;

constexpr void __set_lastTime(float_t value) ;

constexpr float_t __get_lastTime() const;


// Properties

 bool __declspec(property(get=get_inProgress))  inProgress;

 float_t __declspec(property(get=get_crossFader, put=set_crossFader))  crossFader;

 float_t __declspec(property(get=get_timer, put=set_timer))  timer;

 UnityEngine::Vector3 __declspec(property(get=get_force, put=set_force))  force;

 UnityEngine::Vector3 __declspec(property(get=get_point, put=set_point))  point;


// Methods

/// @brief Method get_inProgress addr 0x1207cb0 size 0x14 virtual false final false
 bool get_inProgress() ;

/// @brief Method get_crossFader addr 0x12081b0 size 0x8 virtual false final false
 float_t get_crossFader() ;

/// @brief Method set_crossFader addr 0x12081b8 size 0x8 virtual false final false
 void set_crossFader(float_t value) ;

/// @brief Method get_timer addr 0x12081c0 size 0x8 virtual false final false
 float_t get_timer() ;

/// @brief Method set_timer addr 0x12081c8 size 0x8 virtual false final false
 void set_timer(float_t value) ;

/// @brief Method get_force addr 0x12081d0 size 0xc virtual false final false
 UnityEngine::Vector3 get_force() ;

/// @brief Method set_force addr 0x12081dc size 0xc virtual false final false
 void set_force(UnityEngine::Vector3 value) ;

/// @brief Method get_point addr 0x12081e8 size 0xc virtual false final false
 UnityEngine::Vector3 get_point() ;

/// @brief Method set_point addr 0x12081f4 size 0xc virtual false final false
 void set_point(UnityEngine::Vector3 value) ;

/// @brief Method Hit addr 0x1208078 size 0x128 virtual false final false
 void Hit(UnityEngine::Vector3 force, UnityEngine::Vector3 point) ;

/// @brief Method Apply addr 0x1207d84 size 0xd8 virtual false final false
 void Apply(RootMotion::FinalIK::IKSolverFullBodyBiped solver, float_t weight) ;

/// @brief Method GetLength addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t GetLength() ;

/// @brief Method CrossFadeStart addr 0x0 size 0xffffffffffffffff virtual true final false
 void CrossFadeStart() ;

/// @brief Method OnApply addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnApply(RootMotion::FinalIK::IKSolverFullBodyBiped solver, float_t weight) ;

// Ctor Parameters []
explicit RootMotion__FinalIK__HitReaction__HitPoint() ;

/// @brief Method .ctor addr 0x1208200 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::EffectorLink
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12581))
// CS Name: RootMotion.FinalIK.HitReaction::HitPointEffector::EffectorLink
class CORDL_TYPE RootMotion__FinalIK__HitReaction__HitPointEffector__EffectorLink : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RootMotion__FinalIK__HitReaction__HitPointEffector__EffectorLink() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__HitReaction__HitPointEffector__EffectorLink", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__HitReaction__HitPointEffector__EffectorLink(RootMotion__FinalIK__HitReaction__HitPointEffector__EffectorLink const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__HitReaction__HitPointEffector__EffectorLink", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__HitReaction__HitPointEffector__EffectorLink(RootMotion__FinalIK__HitReaction__HitPointEffector__EffectorLink&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__HitReaction__HitPointEffector__EffectorLink(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__HitReaction__HitPointEffector__EffectorLink& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__HitReaction__HitPointEffector__EffectorLink& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__HitReaction__HitPointEffector__EffectorLink& operator=(RootMotion__FinalIK__HitReaction__HitPointEffector__EffectorLink&& o) noexcept = default;
  constexpr RootMotion__FinalIK__HitReaction__HitPointEffector__EffectorLink& operator=(RootMotion__FinalIK__HitReaction__HitPointEffector__EffectorLink const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::FullBodyBipedEffector __declspec(property(get=__get_effector, put=__set_effector))  effector;

constexpr void __set_effector(RootMotion::FinalIK::FullBodyBipedEffector value) ;

constexpr RootMotion::FinalIK::FullBodyBipedEffector __get_effector() const;

 float_t __declspec(property(get=__get_weight, put=__set_weight))  weight;

constexpr void __set_weight(float_t value) ;

constexpr float_t __get_weight() const;

 UnityEngine::Vector3 __declspec(property(get=__get_lastValue, put=__set_lastValue))  lastValue;

constexpr void __set_lastValue(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_lastValue() const;

 UnityEngine::Vector3 __declspec(property(get=__get_current, put=__set_current))  current;

constexpr void __set_current(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_current() const;


// Methods

/// @brief Method Apply addr 0x1208534 size 0x9c virtual false final false
 void Apply(RootMotion::FinalIK::IKSolverFullBodyBiped solver, UnityEngine::Vector3 offset, float_t crossFader) ;

/// @brief Method CrossFadeStart addr 0x1208390 size 0x14 virtual false final false
 void CrossFadeStart() ;

// Ctor Parameters []
explicit RootMotion__FinalIK__HitReaction__HitPointEffector__EffectorLink() ;

/// @brief Method .ctor addr 0x12085e4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::HitPointEffector
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12580))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12582))
// CS Name: RootMotion.FinalIK.HitReaction::HitPointEffector
class CORDL_TYPE RootMotion__FinalIK__HitReaction__HitPointEffector : public RootMotion::FinalIK::RootMotion__FinalIK__HitReaction__HitPoint {
public:
// Declarations
using EffectorLink = GlobalNamespace::RootMotion__FinalIK__HitReaction__HitPointEffector__EffectorLink;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~RootMotion__FinalIK__HitReaction__HitPointEffector() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__HitReaction__HitPointEffector", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__HitReaction__HitPointEffector(RootMotion__FinalIK__HitReaction__HitPointEffector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__HitReaction__HitPointEffector", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__HitReaction__HitPointEffector(RootMotion__FinalIK__HitReaction__HitPointEffector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__HitReaction__HitPointEffector(void* ptr) noexcept : RootMotion::FinalIK::RootMotion__FinalIK__HitReaction__HitPoint(ptr) {
}


  constexpr RootMotion__FinalIK__HitReaction__HitPointEffector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__HitReaction__HitPointEffector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__HitReaction__HitPointEffector& operator=(RootMotion__FinalIK__HitReaction__HitPointEffector&& o) noexcept = default;
  constexpr RootMotion__FinalIK__HitReaction__HitPointEffector& operator=(RootMotion__FinalIK__HitReaction__HitPointEffector const& o) noexcept = default;
                


// Fields

 UnityEngine::AnimationCurve __declspec(property(get=__get_offsetInForceDirection, put=__set_offsetInForceDirection))  offsetInForceDirection;

constexpr void __set_offsetInForceDirection(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get_offsetInForceDirection() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get_offsetInUpDirection, put=__set_offsetInUpDirection))  offsetInUpDirection;

constexpr void __set_offsetInUpDirection(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get_offsetInUpDirection() const;

 ::ArrayW<GlobalNamespace::RootMotion__FinalIK__HitReaction__HitPointEffector__EffectorLink> __declspec(property(get=__get_effectorLinks, put=__set_effectorLinks))  effectorLinks;

constexpr void __set_effectorLinks(::ArrayW<GlobalNamespace::RootMotion__FinalIK__HitReaction__HitPointEffector__EffectorLink> value) ;

constexpr ::ArrayW<GlobalNamespace::RootMotion__FinalIK__HitReaction__HitPointEffector__EffectorLink> __get_effectorLinks() const;


// Methods

/// @brief Method GetLength addr 0x1208214 size 0x11c virtual true final false
 float_t GetLength() ;

/// @brief Method CrossFadeStart addr 0x1208330 size 0x60 virtual true final false
 void CrossFadeStart() ;

/// @brief Method OnApply addr 0x12083a4 size 0x190 virtual true final false
 void OnApply(RootMotion::FinalIK::IKSolverFullBodyBiped solver, float_t weight) ;

// Ctor Parameters []
explicit RootMotion__FinalIK__HitReaction__HitPointEffector() ;

/// @brief Method .ctor addr 0x12085d0 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::BoneLink
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12583))
// CS Name: RootMotion.FinalIK.HitReaction::HitPointBone::BoneLink
class CORDL_TYPE RootMotion__FinalIK__HitReaction__HitPointBone__BoneLink : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~RootMotion__FinalIK__HitReaction__HitPointBone__BoneLink() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__HitReaction__HitPointBone__BoneLink", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__HitReaction__HitPointBone__BoneLink(RootMotion__FinalIK__HitReaction__HitPointBone__BoneLink const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__HitReaction__HitPointBone__BoneLink", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__HitReaction__HitPointBone__BoneLink(RootMotion__FinalIK__HitReaction__HitPointBone__BoneLink&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__HitReaction__HitPointBone__BoneLink(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__HitReaction__HitPointBone__BoneLink& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__HitReaction__HitPointBone__BoneLink& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__HitReaction__HitPointBone__BoneLink& operator=(RootMotion__FinalIK__HitReaction__HitPointBone__BoneLink&& o) noexcept = default;
  constexpr RootMotion__FinalIK__HitReaction__HitPointBone__BoneLink& operator=(RootMotion__FinalIK__HitReaction__HitPointBone__BoneLink const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get_bone, put=__set_bone))  bone;

constexpr void __set_bone(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_bone() const;

 float_t __declspec(property(get=__get_weight, put=__set_weight))  weight;

constexpr void __set_weight(float_t value) ;

constexpr float_t __get_weight() const;

 UnityEngine::Quaternion __declspec(property(get=__get_lastValue, put=__set_lastValue))  lastValue;

constexpr void __set_lastValue(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_lastValue() const;

 UnityEngine::Quaternion __declspec(property(get=__get_current, put=__set_current))  current;

constexpr void __set_current(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_current() const;


// Methods

/// @brief Method Apply addr 0x12088a4 size 0x18c virtual false final false
 void Apply(RootMotion::FinalIK::IKSolverFullBodyBiped solver, UnityEngine::Quaternion offset, float_t crossFader) ;

/// @brief Method CrossFadeStart addr 0x12086d0 size 0xc virtual false final false
 void CrossFadeStart() ;

// Ctor Parameters []
explicit RootMotion__FinalIK__HitReaction__HitPointBone__BoneLink() ;

/// @brief Method .ctor addr 0x1208a44 size 0x64 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::HitPointBone
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12580))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12584))
// CS Name: RootMotion.FinalIK.HitReaction::HitPointBone
class CORDL_TYPE RootMotion__FinalIK__HitReaction__HitPointBone : public RootMotion::FinalIK::RootMotion__FinalIK__HitReaction__HitPoint {
public:
// Declarations
using BoneLink = GlobalNamespace::RootMotion__FinalIK__HitReaction__HitPointBone__BoneLink;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~RootMotion__FinalIK__HitReaction__HitPointBone() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__HitReaction__HitPointBone", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__HitReaction__HitPointBone(RootMotion__FinalIK__HitReaction__HitPointBone const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__HitReaction__HitPointBone", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__HitReaction__HitPointBone(RootMotion__FinalIK__HitReaction__HitPointBone&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__HitReaction__HitPointBone(void* ptr) noexcept : RootMotion::FinalIK::RootMotion__FinalIK__HitReaction__HitPoint(ptr) {
}


  constexpr RootMotion__FinalIK__HitReaction__HitPointBone& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__HitReaction__HitPointBone& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__HitReaction__HitPointBone& operator=(RootMotion__FinalIK__HitReaction__HitPointBone&& o) noexcept = default;
  constexpr RootMotion__FinalIK__HitReaction__HitPointBone& operator=(RootMotion__FinalIK__HitReaction__HitPointBone const& o) noexcept = default;
                


// Fields

 UnityEngine::AnimationCurve __declspec(property(get=__get_aroundCenterOfMass, put=__set_aroundCenterOfMass))  aroundCenterOfMass;

constexpr void __set_aroundCenterOfMass(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get_aroundCenterOfMass() const;

 ::ArrayW<GlobalNamespace::RootMotion__FinalIK__HitReaction__HitPointBone__BoneLink> __declspec(property(get=__get_boneLinks, put=__set_boneLinks))  boneLinks;

constexpr void __set_boneLinks(::ArrayW<GlobalNamespace::RootMotion__FinalIK__HitReaction__HitPointBone__BoneLink> value) ;

constexpr ::ArrayW<GlobalNamespace::RootMotion__FinalIK__HitReaction__HitPointBone__BoneLink> __get_boneLinks() const;

 UnityEngine::Rigidbody __declspec(property(get=__get_rigidbody, put=__set_rigidbody))  rigidbody;

constexpr void __set_rigidbody(UnityEngine::Rigidbody value) ;

constexpr UnityEngine::Rigidbody __get_rigidbody() const;


// Methods

/// @brief Method GetLength addr 0x12085ec size 0x8c virtual true final false
 float_t GetLength() ;

/// @brief Method CrossFadeStart addr 0x1208678 size 0x58 virtual true final false
 void CrossFadeStart() ;

/// @brief Method OnApply addr 0x12086dc size 0x1c8 virtual true final false
 void OnApply(RootMotion::FinalIK::IKSolverFullBodyBiped solver, float_t weight) ;

// Ctor Parameters []
explicit RootMotion__FinalIK__HitReaction__HitPointBone() ;

/// @brief Method .ctor addr 0x1208a30 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::HitReaction
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12598))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12585))
// CS Name: RootMotion.FinalIK.HitReaction
class CORDL_TYPE HitReaction : public RootMotion::FinalIK::OffsetModifier {
public:
// Declarations
using HitPointBone = RootMotion::FinalIK::RootMotion__FinalIK__HitReaction__HitPointBone;

using HitPointEffector = RootMotion::FinalIK::RootMotion__FinalIK__HitReaction__HitPointEffector;

using HitPoint = RootMotion::FinalIK::RootMotion__FinalIK__HitReaction__HitPoint;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~HitReaction() = default;

// Ctor Parameters [CppParam { name: "", ty: "HitReaction", modifiers: " const&", def_value: None }]
constexpr HitReaction(HitReaction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HitReaction", modifiers: "&&", def_value: None }]
constexpr HitReaction(HitReaction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HitReaction(void* ptr) noexcept : RootMotion::FinalIK::OffsetModifier(ptr) {
}


  constexpr HitReaction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HitReaction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HitReaction& operator=(HitReaction&& o) noexcept = default;
  constexpr HitReaction& operator=(HitReaction const& o) noexcept = default;
                


// Fields

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__HitReaction__HitPointEffector> __declspec(property(get=__get_effectorHitPoints, put=__set_effectorHitPoints))  effectorHitPoints;

constexpr void __set_effectorHitPoints(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__HitReaction__HitPointEffector> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__HitReaction__HitPointEffector> __get_effectorHitPoints() const;

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__HitReaction__HitPointBone> __declspec(property(get=__get_boneHitPoints, put=__set_boneHitPoints))  boneHitPoints;

constexpr void __set_boneHitPoints(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__HitReaction__HitPointBone> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__HitReaction__HitPointBone> __get_boneHitPoints() const;


// Properties

 bool __declspec(property(get=get_inProgress))  inProgress;


// Methods

/// @brief Method get_inProgress addr 0x1207c14 size 0x9c virtual false final false
 bool get_inProgress() ;

/// @brief Method OnModifyOffset addr 0x1207cc4 size 0xc0 virtual true final false
 void OnModifyOffset() ;

/// @brief Method Hit addr 0x1207e5c size 0x21c virtual false final false
 void Hit(UnityEngine::Collider collider, UnityEngine::Vector3 force, UnityEngine::Vector3 point) ;

// Ctor Parameters []
explicit HitReaction() ;

/// @brief Method .ctor addr 0x12081a0 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(GlobalNamespace::RootMotion__FinalIK__HitReaction__HitPointBone__BoneLink);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RootMotion__FinalIK__HitReaction__HitPointBone__BoneLink, "RootMotion.FinalIK", "HitReaction/HitPointBone/BoneLink");
NEED_NO_BOX(GlobalNamespace::RootMotion__FinalIK__HitReaction__HitPointEffector__EffectorLink);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RootMotion__FinalIK__HitReaction__HitPointEffector__EffectorLink, "RootMotion.FinalIK", "HitReaction/HitPointEffector/EffectorLink");
NEED_NO_BOX(RootMotion::FinalIK::HitReaction);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::HitReaction, "RootMotion.FinalIK", "HitReaction");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__HitReaction__HitPoint);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__HitReaction__HitPoint, "RootMotion.FinalIK", "HitReaction/HitPoint");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__HitReaction__HitPointBone);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__HitReaction__HitPointBone, "RootMotion.FinalIK", "HitReaction/HitPointBone");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__HitReaction__HitPointEffector);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__HitReaction__HitPointEffector, "RootMotion.FinalIK", "HitReaction/HitPointEffector");
