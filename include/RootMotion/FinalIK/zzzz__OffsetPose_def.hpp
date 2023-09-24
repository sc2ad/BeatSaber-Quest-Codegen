#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace UnityEngine {
struct Quaternion;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__OffsetPose__EffectorLink;
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
// Forward declare root types
namespace RootMotion::FinalIK {
class OffsetPose;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__OffsetPose__EffectorLink;
}
// Type: ::EffectorLink
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12601))
// CS Name: RootMotion.FinalIK.OffsetPose::EffectorLink
class CORDL_TYPE RootMotion__FinalIK__OffsetPose__EffectorLink : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~RootMotion__FinalIK__OffsetPose__EffectorLink() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__OffsetPose__EffectorLink", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__OffsetPose__EffectorLink(RootMotion__FinalIK__OffsetPose__EffectorLink const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__OffsetPose__EffectorLink", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__OffsetPose__EffectorLink(RootMotion__FinalIK__OffsetPose__EffectorLink&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__OffsetPose__EffectorLink(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__OffsetPose__EffectorLink& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__OffsetPose__EffectorLink& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__OffsetPose__EffectorLink& operator=(RootMotion__FinalIK__OffsetPose__EffectorLink&& o) noexcept = default;
  constexpr RootMotion__FinalIK__OffsetPose__EffectorLink& operator=(RootMotion__FinalIK__OffsetPose__EffectorLink const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::FullBodyBipedEffector __declspec(property(get=__get_effector, put=__set_effector))  effector;

constexpr void __set_effector(RootMotion::FinalIK::FullBodyBipedEffector value) ;

constexpr RootMotion::FinalIK::FullBodyBipedEffector __get_effector() const;

 UnityEngine::Vector3 __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_offset() const;

 UnityEngine::Vector3 __declspec(property(get=__get_pin, put=__set_pin))  pin;

constexpr void __set_pin(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_pin() const;

 UnityEngine::Vector3 __declspec(property(get=__get_pinWeight, put=__set_pinWeight))  pinWeight;

constexpr void __set_pinWeight(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_pinWeight() const;


// Methods

/// @brief Method Apply addr 0x120b3f0 size 0x250 virtual false final false
 void Apply(RootMotion::FinalIK::IKSolverFullBodyBiped solver, float_t weight, UnityEngine::Quaternion rotation) ;

static RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink New_ctor() ;

/// @brief Method .ctor addr 0x120b73c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::OffsetPose
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12602))
// CS Name: RootMotion.FinalIK.OffsetPose
class CORDL_TYPE OffsetPose : public UnityEngine::MonoBehaviour {
public:
// Declarations
using EffectorLink = RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OffsetPose() = default;

// Ctor Parameters [CppParam { name: "", ty: "OffsetPose", modifiers: " const&", def_value: None }]
constexpr OffsetPose(OffsetPose const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OffsetPose", modifiers: "&&", def_value: None }]
constexpr OffsetPose(OffsetPose&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OffsetPose(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OffsetPose& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OffsetPose& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OffsetPose& operator=(OffsetPose&& o) noexcept = default;
  constexpr OffsetPose& operator=(OffsetPose const& o) noexcept = default;
                


// Fields

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink> __declspec(property(get=__get_effectorLinks, put=__set_effectorLinks))  effectorLinks;

constexpr void __set_effectorLinks(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink> __get_effectorLinks() const;


// Methods

/// @brief Method Apply addr 0x12079f0 size 0xb4 virtual false final false
 void Apply(RootMotion::FinalIK::IKSolverFullBodyBiped solver, float_t weight) ;

/// @brief Method Apply addr 0x120b640 size 0xa4 virtual false final false
 void Apply(RootMotion::FinalIK::IKSolverFullBodyBiped solver, float_t weight, UnityEngine::Quaternion rotation) ;

static RootMotion::FinalIK::OffsetPose New_ctor() ;

/// @brief Method .ctor addr 0x120b6e4 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::OffsetPose);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::OffsetPose, "RootMotion.FinalIK", "OffsetPose");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink, "RootMotion.FinalIK", "OffsetPose/EffectorLink");
