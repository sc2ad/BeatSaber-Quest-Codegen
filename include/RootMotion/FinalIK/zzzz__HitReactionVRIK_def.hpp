#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__OffsetModifierVRIK_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class VRIK;
}
namespace RootMotion::FinalIK {
struct RootMotion__FinalIK__IKSolverVR__PositionOffset;
}
namespace RootMotion::FinalIK {
struct RootMotion__FinalIK__IKSolverVR__RotationOffset;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace GlobalNamespace {
class RootMotion__FinalIK__HitReactionVRIK__PositionOffset__PositionOffsetLink;
}
namespace GlobalNamespace {
class RootMotion__FinalIK__HitReactionVRIK__RotationOffset__RotationOffsetLink;
}
namespace RootMotion::FinalIK {
class HitReactionVRIK;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__HitReactionVRIK__Offset;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__HitReactionVRIK__PositionOffset;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__HitReactionVRIK__RotationOffset;
}
// Type: ::Offset
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12586))
// CS Name: RootMotion.FinalIK.HitReactionVRIK::Offset
class CORDL_TYPE RootMotion__FinalIK__HitReactionVRIK__Offset : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~RootMotion__FinalIK__HitReactionVRIK__Offset() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__HitReactionVRIK__Offset", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__HitReactionVRIK__Offset(RootMotion__FinalIK__HitReactionVRIK__Offset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__HitReactionVRIK__Offset", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__HitReactionVRIK__Offset(RootMotion__FinalIK__HitReactionVRIK__Offset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__HitReactionVRIK__Offset(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__HitReactionVRIK__Offset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__HitReactionVRIK__Offset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__HitReactionVRIK__Offset& operator=(RootMotion__FinalIK__HitReactionVRIK__Offset&& o) noexcept = default;
  constexpr RootMotion__FinalIK__HitReactionVRIK__Offset& operator=(RootMotion__FinalIK__HitReactionVRIK__Offset const& o) noexcept = default;
                


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

 float_t __declspec(property(get=get_crossFader, put=set_crossFader))  crossFader;

 float_t __declspec(property(get=get_timer, put=set_timer))  timer;

 UnityEngine::Vector3 __declspec(property(get=get_force, put=set_force))  force;

 UnityEngine::Vector3 __declspec(property(get=get_point, put=set_point))  point;


// Methods

/// @brief Method get_crossFader addr 0x1208fb4 size 0x8 virtual false final false
 float_t get_crossFader() ;

/// @brief Method set_crossFader addr 0x1208fbc size 0x8 virtual false final false
 void set_crossFader(float_t value) ;

/// @brief Method get_timer addr 0x1208fc4 size 0x8 virtual false final false
 float_t get_timer() ;

/// @brief Method set_timer addr 0x1208fcc size 0x8 virtual false final false
 void set_timer(float_t value) ;

/// @brief Method get_force addr 0x1208fd4 size 0xc virtual false final false
 UnityEngine::Vector3 get_force() ;

/// @brief Method set_force addr 0x1208fe0 size 0xc virtual false final false
 void set_force(UnityEngine::Vector3 value) ;

/// @brief Method get_point addr 0x1208fec size 0xc virtual false final false
 UnityEngine::Vector3 get_point() ;

/// @brief Method set_point addr 0x1208ff8 size 0xc virtual false final false
 void set_point(UnityEngine::Vector3 value) ;

/// @brief Method Hit addr 0x1208e64 size 0x130 virtual false final false
 void Hit(UnityEngine::Vector3 force, ::ArrayW<UnityEngine::AnimationCurve> curves, UnityEngine::Vector3 point) ;

/// @brief Method Apply addr 0x1208b60 size 0xe0 virtual false final false
 void Apply(RootMotion::FinalIK::VRIK ik, ::ArrayW<UnityEngine::AnimationCurve> curves, float_t weight) ;

/// @brief Method GetLength addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t GetLength(::ArrayW<UnityEngine::AnimationCurve> curves) ;

/// @brief Method CrossFadeStart addr 0x0 size 0xffffffffffffffff virtual true final false
 void CrossFadeStart() ;

/// @brief Method OnApply addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnApply(RootMotion::FinalIK::VRIK ik, ::ArrayW<UnityEngine::AnimationCurve> curves, float_t weight) ;

// Ctor Parameters []
explicit RootMotion__FinalIK__HitReactionVRIK__Offset() ;

/// @brief Method .ctor addr 0x1209004 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::PositionOffsetLink
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12587))
// CS Name: RootMotion.FinalIK.HitReactionVRIK::PositionOffset::PositionOffsetLink
class CORDL_TYPE RootMotion__FinalIK__HitReactionVRIK__PositionOffset__PositionOffsetLink : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RootMotion__FinalIK__HitReactionVRIK__PositionOffset__PositionOffsetLink() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__HitReactionVRIK__PositionOffset__PositionOffsetLink", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__HitReactionVRIK__PositionOffset__PositionOffsetLink(RootMotion__FinalIK__HitReactionVRIK__PositionOffset__PositionOffsetLink const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__HitReactionVRIK__PositionOffset__PositionOffsetLink", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__HitReactionVRIK__PositionOffset__PositionOffsetLink(RootMotion__FinalIK__HitReactionVRIK__PositionOffset__PositionOffsetLink&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__HitReactionVRIK__PositionOffset__PositionOffsetLink(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__HitReactionVRIK__PositionOffset__PositionOffsetLink& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__HitReactionVRIK__PositionOffset__PositionOffsetLink& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__HitReactionVRIK__PositionOffset__PositionOffsetLink& operator=(RootMotion__FinalIK__HitReactionVRIK__PositionOffset__PositionOffsetLink&& o) noexcept = default;
  constexpr RootMotion__FinalIK__HitReactionVRIK__PositionOffset__PositionOffsetLink& operator=(RootMotion__FinalIK__HitReactionVRIK__PositionOffset__PositionOffsetLink const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset __declspec(property(get=__get_positionOffset, put=__set_positionOffset))  positionOffset;

constexpr void __set_positionOffset(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset __get_positionOffset() const;

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

/// @brief Method Apply addr 0x12093e8 size 0x78 virtual false final false
 void Apply(RootMotion::FinalIK::VRIK ik, UnityEngine::Vector3 offset, float_t crossFader) ;

/// @brief Method CrossFadeStart addr 0x120920c size 0x14 virtual false final false
 void CrossFadeStart() ;

// Ctor Parameters []
explicit RootMotion__FinalIK__HitReactionVRIK__PositionOffset__PositionOffsetLink() ;

/// @brief Method .ctor addr 0x120947c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PositionOffset
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12586))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12588))
// CS Name: RootMotion.FinalIK.HitReactionVRIK::PositionOffset
class CORDL_TYPE RootMotion__FinalIK__HitReactionVRIK__PositionOffset : public RootMotion::FinalIK::RootMotion__FinalIK__HitReactionVRIK__Offset {
public:
// Declarations
using PositionOffsetLink = GlobalNamespace::RootMotion__FinalIK__HitReactionVRIK__PositionOffset__PositionOffsetLink;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~RootMotion__FinalIK__HitReactionVRIK__PositionOffset() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__HitReactionVRIK__PositionOffset", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__HitReactionVRIK__PositionOffset(RootMotion__FinalIK__HitReactionVRIK__PositionOffset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__HitReactionVRIK__PositionOffset", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__HitReactionVRIK__PositionOffset(RootMotion__FinalIK__HitReactionVRIK__PositionOffset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__HitReactionVRIK__PositionOffset(void* ptr) noexcept : RootMotion::FinalIK::RootMotion__FinalIK__HitReactionVRIK__Offset(ptr) {
}


  constexpr RootMotion__FinalIK__HitReactionVRIK__PositionOffset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__HitReactionVRIK__PositionOffset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__HitReactionVRIK__PositionOffset& operator=(RootMotion__FinalIK__HitReactionVRIK__PositionOffset&& o) noexcept = default;
  constexpr RootMotion__FinalIK__HitReactionVRIK__PositionOffset& operator=(RootMotion__FinalIK__HitReactionVRIK__PositionOffset const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_forceDirCurveIndex, put=__set_forceDirCurveIndex))  forceDirCurveIndex;

constexpr void __set_forceDirCurveIndex(int32_t value) ;

constexpr int32_t __get_forceDirCurveIndex() const;

 int32_t __declspec(property(get=__get_upDirCurveIndex, put=__set_upDirCurveIndex))  upDirCurveIndex;

constexpr void __set_upDirCurveIndex(int32_t value) ;

constexpr int32_t __get_upDirCurveIndex() const;

 ::ArrayW<GlobalNamespace::RootMotion__FinalIK__HitReactionVRIK__PositionOffset__PositionOffsetLink> __declspec(property(get=__get_offsetLinks, put=__set_offsetLinks))  offsetLinks;

constexpr void __set_offsetLinks(::ArrayW<GlobalNamespace::RootMotion__FinalIK__HitReactionVRIK__PositionOffset__PositionOffsetLink> value) ;

constexpr ::ArrayW<GlobalNamespace::RootMotion__FinalIK__HitReactionVRIK__PositionOffset__PositionOffsetLink> __get_offsetLinks() const;


// Methods

/// @brief Method GetLength addr 0x1209018 size 0x194 virtual true final false
 float_t GetLength(::ArrayW<UnityEngine::AnimationCurve> curves) ;

/// @brief Method CrossFadeStart addr 0x12091ac size 0x60 virtual true final false
 void CrossFadeStart() ;

/// @brief Method OnApply addr 0x1209220 size 0x1c8 virtual true final false
 void OnApply(RootMotion::FinalIK::VRIK ik, ::ArrayW<UnityEngine::AnimationCurve> curves, float_t weight) ;

// Ctor Parameters []
explicit RootMotion__FinalIK__HitReactionVRIK__PositionOffset() ;

/// @brief Method .ctor addr 0x1209460 size 0x1c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::RotationOffsetLink
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12589))
// CS Name: RootMotion.FinalIK.HitReactionVRIK::RotationOffset::RotationOffsetLink
class CORDL_TYPE RootMotion__FinalIK__HitReactionVRIK__RotationOffset__RotationOffsetLink : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~RootMotion__FinalIK__HitReactionVRIK__RotationOffset__RotationOffsetLink() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__HitReactionVRIK__RotationOffset__RotationOffsetLink", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__HitReactionVRIK__RotationOffset__RotationOffsetLink(RootMotion__FinalIK__HitReactionVRIK__RotationOffset__RotationOffsetLink const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__HitReactionVRIK__RotationOffset__RotationOffsetLink", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__HitReactionVRIK__RotationOffset__RotationOffsetLink(RootMotion__FinalIK__HitReactionVRIK__RotationOffset__RotationOffsetLink&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__HitReactionVRIK__RotationOffset__RotationOffsetLink(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__HitReactionVRIK__RotationOffset__RotationOffsetLink& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__HitReactionVRIK__RotationOffset__RotationOffsetLink& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__HitReactionVRIK__RotationOffset__RotationOffsetLink& operator=(RootMotion__FinalIK__HitReactionVRIK__RotationOffset__RotationOffsetLink&& o) noexcept = default;
  constexpr RootMotion__FinalIK__HitReactionVRIK__RotationOffset__RotationOffsetLink& operator=(RootMotion__FinalIK__HitReactionVRIK__RotationOffset__RotationOffsetLink const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__RotationOffset __declspec(property(get=__get_rotationOffset, put=__set_rotationOffset))  rotationOffset;

constexpr void __set_rotationOffset(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__RotationOffset value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__RotationOffset __get_rotationOffset() const;

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

/// @brief Method Apply addr 0x120983c size 0x108 virtual false final false
 void Apply(RootMotion::FinalIK::VRIK ik, UnityEngine::Quaternion offset, float_t crossFader) ;

/// @brief Method CrossFadeStart addr 0x12095b4 size 0xc virtual false final false
 void CrossFadeStart() ;

// Ctor Parameters []
explicit RootMotion__FinalIK__HitReactionVRIK__RotationOffset__RotationOffsetLink() ;

/// @brief Method .ctor addr 0x1209958 size 0x64 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RotationOffset
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12586))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12590))
// CS Name: RootMotion.FinalIK.HitReactionVRIK::RotationOffset
class CORDL_TYPE RootMotion__FinalIK__HitReactionVRIK__RotationOffset : public RootMotion::FinalIK::RootMotion__FinalIK__HitReactionVRIK__Offset {
public:
// Declarations
using RotationOffsetLink = GlobalNamespace::RootMotion__FinalIK__HitReactionVRIK__RotationOffset__RotationOffsetLink;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~RootMotion__FinalIK__HitReactionVRIK__RotationOffset() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__HitReactionVRIK__RotationOffset", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__HitReactionVRIK__RotationOffset(RootMotion__FinalIK__HitReactionVRIK__RotationOffset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__HitReactionVRIK__RotationOffset", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__HitReactionVRIK__RotationOffset(RootMotion__FinalIK__HitReactionVRIK__RotationOffset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__HitReactionVRIK__RotationOffset(void* ptr) noexcept : RootMotion::FinalIK::RootMotion__FinalIK__HitReactionVRIK__Offset(ptr) {
}


  constexpr RootMotion__FinalIK__HitReactionVRIK__RotationOffset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__HitReactionVRIK__RotationOffset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__HitReactionVRIK__RotationOffset& operator=(RootMotion__FinalIK__HitReactionVRIK__RotationOffset&& o) noexcept = default;
  constexpr RootMotion__FinalIK__HitReactionVRIK__RotationOffset& operator=(RootMotion__FinalIK__HitReactionVRIK__RotationOffset const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_curveIndex, put=__set_curveIndex))  curveIndex;

constexpr void __set_curveIndex(int32_t value) ;

constexpr int32_t __get_curveIndex() const;

 ::ArrayW<GlobalNamespace::RootMotion__FinalIK__HitReactionVRIK__RotationOffset__RotationOffsetLink> __declspec(property(get=__get_offsetLinks, put=__set_offsetLinks))  offsetLinks;

constexpr void __set_offsetLinks(::ArrayW<GlobalNamespace::RootMotion__FinalIK__HitReactionVRIK__RotationOffset__RotationOffsetLink> value) ;

constexpr ::ArrayW<GlobalNamespace::RootMotion__FinalIK__HitReactionVRIK__RotationOffset__RotationOffsetLink> __get_offsetLinks() const;

 UnityEngine::Rigidbody __declspec(property(get=__get_rigidbody, put=__set_rigidbody))  rigidbody;

constexpr void __set_rigidbody(UnityEngine::Rigidbody value) ;

constexpr UnityEngine::Rigidbody __get_rigidbody() const;


// Methods

/// @brief Method GetLength addr 0x1209484 size 0xd8 virtual true final false
 float_t GetLength(::ArrayW<UnityEngine::AnimationCurve> curves) ;

/// @brief Method CrossFadeStart addr 0x120955c size 0x58 virtual true final false
 void CrossFadeStart() ;

/// @brief Method OnApply addr 0x12095c0 size 0x27c virtual true final false
 void OnApply(RootMotion::FinalIK::VRIK ik, ::ArrayW<UnityEngine::AnimationCurve> curves, float_t weight) ;

// Ctor Parameters []
explicit RootMotion__FinalIK__HitReactionVRIK__RotationOffset() ;

/// @brief Method .ctor addr 0x1209944 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::HitReactionVRIK
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12600))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12591))
// CS Name: RootMotion.FinalIK.HitReactionVRIK
class CORDL_TYPE HitReactionVRIK : public RootMotion::FinalIK::OffsetModifierVRIK {
public:
// Declarations
using RotationOffset = RootMotion::FinalIK::RootMotion__FinalIK__HitReactionVRIK__RotationOffset;

using PositionOffset = RootMotion::FinalIK::RootMotion__FinalIK__HitReactionVRIK__PositionOffset;

using Offset = RootMotion::FinalIK::RootMotion__FinalIK__HitReactionVRIK__Offset;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~HitReactionVRIK() = default;

// Ctor Parameters [CppParam { name: "", ty: "HitReactionVRIK", modifiers: " const&", def_value: None }]
constexpr HitReactionVRIK(HitReactionVRIK const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HitReactionVRIK", modifiers: "&&", def_value: None }]
constexpr HitReactionVRIK(HitReactionVRIK&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HitReactionVRIK(void* ptr) noexcept : RootMotion::FinalIK::OffsetModifierVRIK(ptr) {
}


  constexpr HitReactionVRIK& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HitReactionVRIK& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HitReactionVRIK& operator=(HitReactionVRIK&& o) noexcept = default;
  constexpr HitReactionVRIK& operator=(HitReactionVRIK const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::AnimationCurve> __declspec(property(get=__get_offsetCurves, put=__set_offsetCurves))  offsetCurves;

constexpr void __set_offsetCurves(::ArrayW<UnityEngine::AnimationCurve> value) ;

constexpr ::ArrayW<UnityEngine::AnimationCurve> __get_offsetCurves() const;

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__HitReactionVRIK__PositionOffset> __declspec(property(get=__get_positionOffsets, put=__set_positionOffsets))  positionOffsets;

constexpr void __set_positionOffsets(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__HitReactionVRIK__PositionOffset> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__HitReactionVRIK__PositionOffset> __get_positionOffsets() const;

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__HitReactionVRIK__RotationOffset> __declspec(property(get=__get_rotationOffsets, put=__set_rotationOffsets))  rotationOffsets;

constexpr void __set_rotationOffsets(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__HitReactionVRIK__RotationOffset> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__HitReactionVRIK__RotationOffset> __get_rotationOffsets() const;


// Methods

/// @brief Method OnModifyOffset addr 0x1208aa8 size 0xb8 virtual true final false
 void OnModifyOffset() ;

/// @brief Method Hit addr 0x1208c40 size 0x224 virtual false final false
 void Hit(UnityEngine::Collider collider, UnityEngine::Vector3 force, UnityEngine::Vector3 point) ;

// Ctor Parameters []
explicit HitReactionVRIK() ;

/// @brief Method .ctor addr 0x1208f94 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(GlobalNamespace::RootMotion__FinalIK__HitReactionVRIK__PositionOffset__PositionOffsetLink);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RootMotion__FinalIK__HitReactionVRIK__PositionOffset__PositionOffsetLink, "RootMotion.FinalIK", "HitReactionVRIK/PositionOffset/PositionOffsetLink");
NEED_NO_BOX(GlobalNamespace::RootMotion__FinalIK__HitReactionVRIK__RotationOffset__RotationOffsetLink);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RootMotion__FinalIK__HitReactionVRIK__RotationOffset__RotationOffsetLink, "RootMotion.FinalIK", "HitReactionVRIK/RotationOffset/RotationOffsetLink");
NEED_NO_BOX(RootMotion::FinalIK::HitReactionVRIK);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::HitReactionVRIK, "RootMotion.FinalIK", "HitReactionVRIK");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__HitReactionVRIK__Offset);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__HitReactionVRIK__Offset, "RootMotion.FinalIK", "HitReactionVRIK/Offset");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__HitReactionVRIK__PositionOffset);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__HitReactionVRIK__PositionOffset, "RootMotion.FinalIK", "HitReactionVRIK/PositionOffset");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__HitReactionVRIK__RotationOffset);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__HitReactionVRIK__RotationOffset, "RootMotion.FinalIK", "HitReactionVRIK/RotationOffset");
