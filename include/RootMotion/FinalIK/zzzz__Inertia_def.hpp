#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__OffsetModifier_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__OffsetModifier__OffsetLimits;
}
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class IKSolverFullBodyBiped;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class RootMotion__FinalIK__Inertia__Body__EffectorLink;
}
namespace RootMotion::FinalIK {
class Inertia;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__Inertia__Body;
}
// Type: ::EffectorLink
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12592))
// CS Name: RootMotion.FinalIK.Inertia::Body::EffectorLink
class CORDL_TYPE RootMotion__FinalIK__Inertia__Body__EffectorLink : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RootMotion__FinalIK__Inertia__Body__EffectorLink() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__Inertia__Body__EffectorLink", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__Inertia__Body__EffectorLink(RootMotion__FinalIK__Inertia__Body__EffectorLink const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__Inertia__Body__EffectorLink", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__Inertia__Body__EffectorLink(RootMotion__FinalIK__Inertia__Body__EffectorLink&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__Inertia__Body__EffectorLink(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__Inertia__Body__EffectorLink& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__Inertia__Body__EffectorLink& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__Inertia__Body__EffectorLink& operator=(RootMotion__FinalIK__Inertia__Body__EffectorLink&& o) noexcept = default;
  constexpr RootMotion__FinalIK__Inertia__Body__EffectorLink& operator=(RootMotion__FinalIK__Inertia__Body__EffectorLink const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::FullBodyBipedEffector __declspec(property(get=__get_effector, put=__set_effector))  effector;

constexpr void __set_effector(RootMotion::FinalIK::FullBodyBipedEffector value) ;

constexpr RootMotion::FinalIK::FullBodyBipedEffector __get_effector() const;

 float_t __declspec(property(get=__get_weight, put=__set_weight))  weight;

constexpr void __set_weight(float_t value) ;

constexpr float_t __get_weight() const;


// Methods

// Ctor Parameters []
explicit RootMotion__FinalIK__Inertia__Body__EffectorLink() ;

/// @brief Method .ctor addr 0x1209f20 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Body
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12593))
// CS Name: RootMotion.FinalIK.Inertia::Body
class CORDL_TYPE RootMotion__FinalIK__Inertia__Body : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using EffectorLink = GlobalNamespace::RootMotion__FinalIK__Inertia__Body__EffectorLink;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~RootMotion__FinalIK__Inertia__Body() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__Inertia__Body", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__Inertia__Body(RootMotion__FinalIK__Inertia__Body const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__Inertia__Body", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__Inertia__Body(RootMotion__FinalIK__Inertia__Body&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__Inertia__Body(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__Inertia__Body& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__Inertia__Body& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__Inertia__Body& operator=(RootMotion__FinalIK__Inertia__Body&& o) noexcept = default;
  constexpr RootMotion__FinalIK__Inertia__Body& operator=(RootMotion__FinalIK__Inertia__Body const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get_transform, put=__set_transform))  transform;

constexpr void __set_transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_transform() const;

 ::ArrayW<GlobalNamespace::RootMotion__FinalIK__Inertia__Body__EffectorLink> __declspec(property(get=__get_effectorLinks, put=__set_effectorLinks))  effectorLinks;

constexpr void __set_effectorLinks(::ArrayW<GlobalNamespace::RootMotion__FinalIK__Inertia__Body__EffectorLink> value) ;

constexpr ::ArrayW<GlobalNamespace::RootMotion__FinalIK__Inertia__Body__EffectorLink> __get_effectorLinks() const;

 float_t __declspec(property(get=__get_speed, put=__set_speed))  speed;

constexpr void __set_speed(float_t value) ;

constexpr float_t __get_speed() const;

 float_t __declspec(property(get=__get_acceleration, put=__set_acceleration))  acceleration;

constexpr void __set_acceleration(float_t value) ;

constexpr float_t __get_acceleration() const;

 float_t __declspec(property(get=__get_matchVelocity, put=__set_matchVelocity))  matchVelocity;

constexpr void __set_matchVelocity(float_t value) ;

constexpr float_t __get_matchVelocity() const;

 float_t __declspec(property(get=__get_gravity, put=__set_gravity))  gravity;

constexpr void __set_gravity(float_t value) ;

constexpr float_t __get_gravity() const;

 UnityEngine::Vector3 __declspec(property(get=__get_delta, put=__set_delta))  delta;

constexpr void __set_delta(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_delta() const;

 UnityEngine::Vector3 __declspec(property(get=__get_lazyPoint, put=__set_lazyPoint))  lazyPoint;

constexpr void __set_lazyPoint(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_lazyPoint() const;

 UnityEngine::Vector3 __declspec(property(get=__get_direction, put=__set_direction))  direction;

constexpr void __set_direction(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_direction() const;

 UnityEngine::Vector3 __declspec(property(get=__get_lastPosition, put=__set_lastPosition))  lastPosition;

constexpr void __set_lastPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_lastPosition() const;

 bool __declspec(property(get=__get_firstUpdate, put=__set_firstUpdate))  firstUpdate;

constexpr void __set_firstUpdate(bool value) ;

constexpr bool __get_firstUpdate() const;


// Methods

/// @brief Method Reset addr 0x1209a28 size 0xdc virtual false final false
 void Reset() ;

/// @brief Method Update addr 0x1209ba8 size 0x2a4 virtual false final false
 void Update(RootMotion::FinalIK::IKSolverFullBodyBiped solver, float_t weight, float_t deltaTime) ;

// Ctor Parameters []
explicit RootMotion__FinalIK__Inertia__Body() ;

/// @brief Method .ctor addr 0x1209f04 size 0x1c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::Inertia
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12598))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12594))
// CS Name: RootMotion.FinalIK.Inertia
class CORDL_TYPE Inertia : public RootMotion::FinalIK::OffsetModifier {
public:
// Declarations
using Body = RootMotion::FinalIK::RootMotion__FinalIK__Inertia__Body;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Inertia() = default;

// Ctor Parameters [CppParam { name: "", ty: "Inertia", modifiers: " const&", def_value: None }]
constexpr Inertia(Inertia const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Inertia", modifiers: "&&", def_value: None }]
constexpr Inertia(Inertia&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Inertia(void* ptr) noexcept : RootMotion::FinalIK::OffsetModifier(ptr) {
}


  constexpr Inertia& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Inertia& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Inertia& operator=(Inertia&& o) noexcept = default;
  constexpr Inertia& operator=(Inertia const& o) noexcept = default;
                


// Fields

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__Inertia__Body> __declspec(property(get=__get_bodies, put=__set_bodies))  bodies;

constexpr void __set_bodies(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__Inertia__Body> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__Inertia__Body> __get_bodies() const;

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits> __declspec(property(get=__get_limits, put=__set_limits))  limits;

constexpr void __set_limits(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits> __get_limits() const;


// Methods

/// @brief Method ResetBodies addr 0x12099bc size 0x6c virtual false final false
 void ResetBodies() ;

/// @brief Method OnModifyOffset addr 0x1209b04 size 0xa4 virtual true final false
 void OnModifyOffset() ;

// Ctor Parameters []
explicit Inertia() ;

/// @brief Method .ctor addr 0x1209ef4 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(GlobalNamespace::RootMotion__FinalIK__Inertia__Body__EffectorLink);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RootMotion__FinalIK__Inertia__Body__EffectorLink, "RootMotion.FinalIK", "Inertia/Body/EffectorLink");
NEED_NO_BOX(RootMotion::FinalIK::Inertia);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Inertia, "RootMotion.FinalIK", "Inertia");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__Inertia__Body);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__Inertia__Body, "RootMotion.FinalIK", "Inertia/Body");
