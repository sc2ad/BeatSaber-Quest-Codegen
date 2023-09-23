#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__OffsetModifier_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class IKSolverFullBodyBiped;
}
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace GlobalNamespace {
class RootMotion__FinalIK__PenetrationAvoidance__Avoider__EffectorLink;
}
namespace RootMotion::FinalIK {
class PenetrationAvoidance;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__PenetrationAvoidance__Avoider;
}
// Type: ::EffectorLink
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12603))
// CS Name: RootMotion.FinalIK.PenetrationAvoidance::Avoider::EffectorLink
class CORDL_TYPE RootMotion__FinalIK__PenetrationAvoidance__Avoider__EffectorLink : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RootMotion__FinalIK__PenetrationAvoidance__Avoider__EffectorLink() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__PenetrationAvoidance__Avoider__EffectorLink", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__PenetrationAvoidance__Avoider__EffectorLink(RootMotion__FinalIK__PenetrationAvoidance__Avoider__EffectorLink const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__PenetrationAvoidance__Avoider__EffectorLink", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__PenetrationAvoidance__Avoider__EffectorLink(RootMotion__FinalIK__PenetrationAvoidance__Avoider__EffectorLink&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__PenetrationAvoidance__Avoider__EffectorLink(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__PenetrationAvoidance__Avoider__EffectorLink& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__PenetrationAvoidance__Avoider__EffectorLink& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__PenetrationAvoidance__Avoider__EffectorLink& operator=(RootMotion__FinalIK__PenetrationAvoidance__Avoider__EffectorLink&& o) noexcept = default;
  constexpr RootMotion__FinalIK__PenetrationAvoidance__Avoider__EffectorLink& operator=(RootMotion__FinalIK__PenetrationAvoidance__Avoider__EffectorLink const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::FullBodyBipedEffector __declspec(property(get=__get_effector, put=__set_effector))  effector;

constexpr void __set_effector(RootMotion::FinalIK::FullBodyBipedEffector value) ;

constexpr RootMotion::FinalIK::FullBodyBipedEffector __get_effector() const;

 float_t __declspec(property(get=__get_weight, put=__set_weight))  weight;

constexpr void __set_weight(float_t value) ;

constexpr float_t __get_weight() const;


// Methods

// Ctor Parameters []
explicit RootMotion__FinalIK__PenetrationAvoidance__Avoider__EffectorLink() ;

/// @brief Method .ctor addr 0x120bd90 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Avoider
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12604))
// CS Name: RootMotion.FinalIK.PenetrationAvoidance::Avoider
class CORDL_TYPE RootMotion__FinalIK__PenetrationAvoidance__Avoider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using EffectorLink = GlobalNamespace::RootMotion__FinalIK__PenetrationAvoidance__Avoider__EffectorLink;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~RootMotion__FinalIK__PenetrationAvoidance__Avoider() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__PenetrationAvoidance__Avoider", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__PenetrationAvoidance__Avoider(RootMotion__FinalIK__PenetrationAvoidance__Avoider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__PenetrationAvoidance__Avoider", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__PenetrationAvoidance__Avoider(RootMotion__FinalIK__PenetrationAvoidance__Avoider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__PenetrationAvoidance__Avoider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__PenetrationAvoidance__Avoider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__PenetrationAvoidance__Avoider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__PenetrationAvoidance__Avoider& operator=(RootMotion__FinalIK__PenetrationAvoidance__Avoider&& o) noexcept = default;
  constexpr RootMotion__FinalIK__PenetrationAvoidance__Avoider& operator=(RootMotion__FinalIK__PenetrationAvoidance__Avoider const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::Transform> __declspec(property(get=__get_raycastFrom, put=__set_raycastFrom))  raycastFrom;

constexpr void __set_raycastFrom(::ArrayW<UnityEngine::Transform> value) ;

constexpr ::ArrayW<UnityEngine::Transform> __get_raycastFrom() const;

 UnityEngine::Transform __declspec(property(get=__get_raycastTo, put=__set_raycastTo))  raycastTo;

constexpr void __set_raycastTo(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_raycastTo() const;

 float_t __declspec(property(get=__get_raycastRadius, put=__set_raycastRadius))  raycastRadius;

constexpr void __set_raycastRadius(float_t value) ;

constexpr float_t __get_raycastRadius() const;

 ::ArrayW<GlobalNamespace::RootMotion__FinalIK__PenetrationAvoidance__Avoider__EffectorLink> __declspec(property(get=__get_effectors, put=__set_effectors))  effectors;

constexpr void __set_effectors(::ArrayW<GlobalNamespace::RootMotion__FinalIK__PenetrationAvoidance__Avoider__EffectorLink> value) ;

constexpr ::ArrayW<GlobalNamespace::RootMotion__FinalIK__PenetrationAvoidance__Avoider__EffectorLink> __get_effectors() const;

 float_t __declspec(property(get=__get_smoothTimeIn, put=__set_smoothTimeIn))  smoothTimeIn;

constexpr void __set_smoothTimeIn(float_t value) ;

constexpr float_t __get_smoothTimeIn() const;

 float_t __declspec(property(get=__get_smoothTimeOut, put=__set_smoothTimeOut))  smoothTimeOut;

constexpr void __set_smoothTimeOut(float_t value) ;

constexpr float_t __get_smoothTimeOut() const;

 UnityEngine::LayerMask __declspec(property(get=__get_layers, put=__set_layers))  layers;

constexpr void __set_layers(UnityEngine::LayerMask value) ;

constexpr UnityEngine::LayerMask __get_layers() const;

 UnityEngine::Vector3 __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_offset() const;

 UnityEngine::Vector3 __declspec(property(get=__get_offsetTarget, put=__set_offsetTarget))  offsetTarget;

constexpr void __set_offsetTarget(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_offsetTarget() const;

 UnityEngine::Vector3 __declspec(property(get=__get_offsetV, put=__set_offsetV))  offsetV;

constexpr void __set_offsetV(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_offsetV() const;


// Methods

/// @brief Method Solve addr 0x120b7b4 size 0x190 virtual false final false
 void Solve(RootMotion::FinalIK::IKSolverFullBodyBiped solver, float_t weight) ;

/// @brief Method GetOffsetTarget addr 0x120b954 size 0x108 virtual false final false
 UnityEngine::Vector3 GetOffsetTarget(RootMotion::FinalIK::IKSolverFullBodyBiped solver) ;

/// @brief Method Raycast addr 0x120ba5c size 0x320 virtual false final false
 UnityEngine::Vector3 Raycast(UnityEngine::Vector3 from, UnityEngine::Vector3 to) ;

// Ctor Parameters []
explicit RootMotion__FinalIK__PenetrationAvoidance__Avoider() ;

/// @brief Method .ctor addr 0x120bd7c size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::PenetrationAvoidance
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12598))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12605))
// CS Name: RootMotion.FinalIK.PenetrationAvoidance
class CORDL_TYPE PenetrationAvoidance : public RootMotion::FinalIK::OffsetModifier {
public:
// Declarations
using Avoider = RootMotion::FinalIK::RootMotion__FinalIK__PenetrationAvoidance__Avoider;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~PenetrationAvoidance() = default;

// Ctor Parameters [CppParam { name: "", ty: "PenetrationAvoidance", modifiers: " const&", def_value: None }]
constexpr PenetrationAvoidance(PenetrationAvoidance const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PenetrationAvoidance", modifiers: "&&", def_value: None }]
constexpr PenetrationAvoidance(PenetrationAvoidance&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PenetrationAvoidance(void* ptr) noexcept : RootMotion::FinalIK::OffsetModifier(ptr) {
}


  constexpr PenetrationAvoidance& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PenetrationAvoidance& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PenetrationAvoidance& operator=(PenetrationAvoidance&& o) noexcept = default;
  constexpr PenetrationAvoidance& operator=(PenetrationAvoidance const& o) noexcept = default;
                


// Fields

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__PenetrationAvoidance__Avoider> __declspec(property(get=__get_avoiders, put=__set_avoiders))  avoiders;

constexpr void __set_avoiders(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__PenetrationAvoidance__Avoider> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__PenetrationAvoidance__Avoider> __get_avoiders() const;


// Methods

/// @brief Method OnModifyOffset addr 0x120b744 size 0x70 virtual true final false
 void OnModifyOffset() ;

// Ctor Parameters []
explicit PenetrationAvoidance() ;

/// @brief Method .ctor addr 0x120b944 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(GlobalNamespace::RootMotion__FinalIK__PenetrationAvoidance__Avoider__EffectorLink);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RootMotion__FinalIK__PenetrationAvoidance__Avoider__EffectorLink, "RootMotion.FinalIK", "PenetrationAvoidance/Avoider/EffectorLink");
NEED_NO_BOX(RootMotion::FinalIK::PenetrationAvoidance);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::PenetrationAvoidance, "RootMotion.FinalIK", "PenetrationAvoidance");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__PenetrationAvoidance__Avoider);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__PenetrationAvoidance__Avoider, "RootMotion.FinalIK", "PenetrationAvoidance/Avoider");
