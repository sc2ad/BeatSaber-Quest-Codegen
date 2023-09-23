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
class IKSolverFullBodyBiped;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class RootMotion__FinalIK__Amplifier__Body__EffectorLink;
}
namespace RootMotion::FinalIK {
class Amplifier;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__Amplifier__Body;
}
// Type: ::EffectorLink
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12575))
// CS Name: RootMotion.FinalIK.Amplifier::Body::EffectorLink
class CORDL_TYPE RootMotion__FinalIK__Amplifier__Body__EffectorLink : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RootMotion__FinalIK__Amplifier__Body__EffectorLink() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__Amplifier__Body__EffectorLink", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__Amplifier__Body__EffectorLink(RootMotion__FinalIK__Amplifier__Body__EffectorLink const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__Amplifier__Body__EffectorLink", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__Amplifier__Body__EffectorLink(RootMotion__FinalIK__Amplifier__Body__EffectorLink&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__Amplifier__Body__EffectorLink(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__Amplifier__Body__EffectorLink& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__Amplifier__Body__EffectorLink& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__Amplifier__Body__EffectorLink& operator=(RootMotion__FinalIK__Amplifier__Body__EffectorLink&& o) noexcept = default;
  constexpr RootMotion__FinalIK__Amplifier__Body__EffectorLink& operator=(RootMotion__FinalIK__Amplifier__Body__EffectorLink const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::FullBodyBipedEffector __declspec(property(get=__get_effector, put=__set_effector))  effector;

constexpr void __set_effector(RootMotion::FinalIK::FullBodyBipedEffector value) ;

constexpr RootMotion::FinalIK::FullBodyBipedEffector __get_effector() const;

 float_t __declspec(property(get=__get_weight, put=__set_weight))  weight;

constexpr void __set_weight(float_t value) ;

constexpr float_t __get_weight() const;


// Methods

// Ctor Parameters []
explicit RootMotion__FinalIK__Amplifier__Body__EffectorLink() ;

/// @brief Method .ctor addr 0x1207794 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Body
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12576))
// CS Name: RootMotion.FinalIK.Amplifier::Body
class CORDL_TYPE RootMotion__FinalIK__Amplifier__Body : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using EffectorLink = GlobalNamespace::RootMotion__FinalIK__Amplifier__Body__EffectorLink;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~RootMotion__FinalIK__Amplifier__Body() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__Amplifier__Body", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__Amplifier__Body(RootMotion__FinalIK__Amplifier__Body const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__Amplifier__Body", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__Amplifier__Body(RootMotion__FinalIK__Amplifier__Body&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__Amplifier__Body(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__Amplifier__Body& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__Amplifier__Body& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__Amplifier__Body& operator=(RootMotion__FinalIK__Amplifier__Body&& o) noexcept = default;
  constexpr RootMotion__FinalIK__Amplifier__Body& operator=(RootMotion__FinalIK__Amplifier__Body const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get_transform, put=__set_transform))  transform;

constexpr void __set_transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_transform() const;

 UnityEngine::Transform __declspec(property(get=__get_relativeTo, put=__set_relativeTo))  relativeTo;

constexpr void __set_relativeTo(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_relativeTo() const;

 ::ArrayW<GlobalNamespace::RootMotion__FinalIK__Amplifier__Body__EffectorLink> __declspec(property(get=__get_effectorLinks, put=__set_effectorLinks))  effectorLinks;

constexpr void __set_effectorLinks(::ArrayW<GlobalNamespace::RootMotion__FinalIK__Amplifier__Body__EffectorLink> value) ;

constexpr ::ArrayW<GlobalNamespace::RootMotion__FinalIK__Amplifier__Body__EffectorLink> __get_effectorLinks() const;

 float_t __declspec(property(get=__get_verticalWeight, put=__set_verticalWeight))  verticalWeight;

constexpr void __set_verticalWeight(float_t value) ;

constexpr float_t __get_verticalWeight() const;

 float_t __declspec(property(get=__get_horizontalWeight, put=__set_horizontalWeight))  horizontalWeight;

constexpr void __set_horizontalWeight(float_t value) ;

constexpr float_t __get_horizontalWeight() const;

 float_t __declspec(property(get=__get_speed, put=__set_speed))  speed;

constexpr void __set_speed(float_t value) ;

constexpr float_t __get_speed() const;

 UnityEngine::Vector3 __declspec(property(get=__get_lastRelativePos, put=__set_lastRelativePos))  lastRelativePos;

constexpr void __set_lastRelativePos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_lastRelativePos() const;

 UnityEngine::Vector3 __declspec(property(get=__get_smoothDelta, put=__set_smoothDelta))  smoothDelta;

constexpr void __set_smoothDelta(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_smoothDelta() const;

 bool __declspec(property(get=__get_firstUpdate, put=__set_firstUpdate))  firstUpdate;

constexpr void __set_firstUpdate(bool value) ;

constexpr bool __get_firstUpdate() const;


// Methods

/// @brief Method Update addr 0x120743c size 0x310 virtual false final false
 void Update(RootMotion::FinalIK::IKSolverFullBodyBiped solver, float_t w, float_t deltaTime) ;

/// @brief Method Multiply addr 0x120776c size 0x10 virtual false final false
static UnityEngine::Vector3 Multiply(UnityEngine::Vector3 v1, UnityEngine::Vector3 v2) ;

// Ctor Parameters []
explicit RootMotion__FinalIK__Amplifier__Body() ;

/// @brief Method .ctor addr 0x120777c size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::Amplifier
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12598))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12577))
// CS Name: RootMotion.FinalIK.Amplifier
class CORDL_TYPE Amplifier : public RootMotion::FinalIK::OffsetModifier {
public:
// Declarations
using Body = RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Amplifier() = default;

// Ctor Parameters [CppParam { name: "", ty: "Amplifier", modifiers: " const&", def_value: None }]
constexpr Amplifier(Amplifier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Amplifier", modifiers: "&&", def_value: None }]
constexpr Amplifier(Amplifier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Amplifier(void* ptr) noexcept : RootMotion::FinalIK::OffsetModifier(ptr) {
}


  constexpr Amplifier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Amplifier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Amplifier& operator=(Amplifier&& o) noexcept = default;
  constexpr Amplifier& operator=(Amplifier const& o) noexcept = default;
                


// Fields

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body> __declspec(property(get=__get_bodies, put=__set_bodies))  bodies;

constexpr void __set_bodies(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body> __get_bodies() const;


// Methods

/// @brief Method OnModifyOffset addr 0x12072ec size 0x130 virtual true final false
 void OnModifyOffset() ;

// Ctor Parameters []
explicit Amplifier() ;

/// @brief Method .ctor addr 0x120774c size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(GlobalNamespace::RootMotion__FinalIK__Amplifier__Body__EffectorLink);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RootMotion__FinalIK__Amplifier__Body__EffectorLink, "RootMotion.FinalIK", "Amplifier/Body/EffectorLink");
NEED_NO_BOX(RootMotion::FinalIK::Amplifier);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Amplifier, "RootMotion.FinalIK", "Amplifier");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body, "RootMotion.FinalIK", "Amplifier/Body");
