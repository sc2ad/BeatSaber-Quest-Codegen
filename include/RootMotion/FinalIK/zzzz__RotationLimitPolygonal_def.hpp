#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__RotationLimit_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__RotationLimitPolygonal__LimitPoint;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__RotationLimitPolygonal__ReachCone;
}
namespace RootMotion::FinalIK {
class RotationLimitPolygonal;
}
// Type: ::ReachCone
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12567))
// CS Name: RootMotion.FinalIK.RotationLimitPolygonal::ReachCone
class CORDL_TYPE RootMotion__FinalIK__RotationLimitPolygonal__ReachCone : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~RootMotion__FinalIK__RotationLimitPolygonal__ReachCone() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__RotationLimitPolygonal__ReachCone", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__RotationLimitPolygonal__ReachCone(RootMotion__FinalIK__RotationLimitPolygonal__ReachCone const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__RotationLimitPolygonal__ReachCone", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__RotationLimitPolygonal__ReachCone(RootMotion__FinalIK__RotationLimitPolygonal__ReachCone&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__RotationLimitPolygonal__ReachCone(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__RotationLimitPolygonal__ReachCone& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__RotationLimitPolygonal__ReachCone& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__RotationLimitPolygonal__ReachCone& operator=(RootMotion__FinalIK__RotationLimitPolygonal__ReachCone&& o) noexcept = default;
  constexpr RootMotion__FinalIK__RotationLimitPolygonal__ReachCone& operator=(RootMotion__FinalIK__RotationLimitPolygonal__ReachCone const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_tetrahedron, put=__set_tetrahedron))  tetrahedron;

constexpr void __set_tetrahedron(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get_tetrahedron() const;

 float_t __declspec(property(get=__get_volume, put=__set_volume))  volume;

constexpr void __set_volume(float_t value) ;

constexpr float_t __get_volume() const;

 UnityEngine::Vector3 __declspec(property(get=__get_S, put=__set_S))  S;

constexpr void __set_S(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_S() const;

 UnityEngine::Vector3 __declspec(property(get=__get_B, put=__set_B))  B;

constexpr void __set_B(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_B() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_o))  o;

 UnityEngine::Vector3 __declspec(property(get=get_a))  a;

 UnityEngine::Vector3 __declspec(property(get=get_b))  b;

 UnityEngine::Vector3 __declspec(property(get=get_c))  c;

 bool __declspec(property(get=get_isValid))  isValid;


// Methods

/// @brief Method get_o addr 0x12054f8 size 0x2c virtual false final false
 UnityEngine::Vector3 get_o() ;

/// @brief Method get_a addr 0x1205524 size 0x30 virtual false final false
 UnityEngine::Vector3 get_a() ;

/// @brief Method get_b addr 0x1205554 size 0x30 virtual false final false
 UnityEngine::Vector3 get_b() ;

/// @brief Method get_c addr 0x1205584 size 0x30 virtual false final false
 UnityEngine::Vector3 get_c() ;

// Ctor Parameters [CppParam { name: "_o", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_a", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_b", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_c", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }]
explicit RootMotion__FinalIK__RotationLimitPolygonal__ReachCone(UnityEngine::Vector3 _o, UnityEngine::Vector3 _a, UnityEngine::Vector3 _b, UnityEngine::Vector3 _c) ;

/// @brief Method .ctor addr 0x12055b4 size 0x164 virtual false final false
 void _ctor(UnityEngine::Vector3 _o, UnityEngine::Vector3 _a, UnityEngine::Vector3 _b, UnityEngine::Vector3 _c) ;

/// @brief Method get_isValid addr 0x1205718 size 0x10 virtual false final false
 bool get_isValid() ;

/// @brief Method Calculate addr 0x1205728 size 0x274 virtual false final false
 void Calculate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::LimitPoint
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12568))
// CS Name: RootMotion.FinalIK.RotationLimitPolygonal::LimitPoint
class CORDL_TYPE RootMotion__FinalIK__RotationLimitPolygonal__LimitPoint : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RootMotion__FinalIK__RotationLimitPolygonal__LimitPoint() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__RotationLimitPolygonal__LimitPoint", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__RotationLimitPolygonal__LimitPoint(RootMotion__FinalIK__RotationLimitPolygonal__LimitPoint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__RotationLimitPolygonal__LimitPoint", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__RotationLimitPolygonal__LimitPoint(RootMotion__FinalIK__RotationLimitPolygonal__LimitPoint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__RotationLimitPolygonal__LimitPoint(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__RotationLimitPolygonal__LimitPoint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__RotationLimitPolygonal__LimitPoint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__RotationLimitPolygonal__LimitPoint& operator=(RootMotion__FinalIK__RotationLimitPolygonal__LimitPoint&& o) noexcept = default;
  constexpr RootMotion__FinalIK__RotationLimitPolygonal__LimitPoint& operator=(RootMotion__FinalIK__RotationLimitPolygonal__LimitPoint const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_point, put=__set_point))  point;

constexpr void __set_point(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_point() const;

 float_t __declspec(property(get=__get_tangentWeight, put=__set_tangentWeight))  tangentWeight;

constexpr void __set_tangentWeight(float_t value) ;

constexpr float_t __get_tangentWeight() const;


// Methods

// Ctor Parameters []
explicit RootMotion__FinalIK__RotationLimitPolygonal__LimitPoint() ;

/// @brief Method .ctor addr 0x120599c size 0x64 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::RotationLimitPolygonal
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12564))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12569))
// CS Name: RootMotion.FinalIK.RotationLimitPolygonal
class CORDL_TYPE RotationLimitPolygonal : public RootMotion::FinalIK::RotationLimit {
public:
// Declarations
using LimitPoint = RootMotion::FinalIK::RootMotion__FinalIK__RotationLimitPolygonal__LimitPoint;

using ReachCone = RootMotion::FinalIK::RootMotion__FinalIK__RotationLimitPolygonal__ReachCone;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~RotationLimitPolygonal() = default;

// Ctor Parameters [CppParam { name: "", ty: "RotationLimitPolygonal", modifiers: " const&", def_value: None }]
constexpr RotationLimitPolygonal(RotationLimitPolygonal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RotationLimitPolygonal", modifiers: "&&", def_value: None }]
constexpr RotationLimitPolygonal(RotationLimitPolygonal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RotationLimitPolygonal(void* ptr) noexcept : RootMotion::FinalIK::RotationLimit(ptr) {
}


  constexpr RotationLimitPolygonal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RotationLimitPolygonal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RotationLimitPolygonal& operator=(RotationLimitPolygonal&& o) noexcept = default;
  constexpr RotationLimitPolygonal& operator=(RotationLimitPolygonal const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_twistLimit, put=__set_twistLimit))  twistLimit;

constexpr void __set_twistLimit(float_t value) ;

constexpr float_t __get_twistLimit() const;

 int32_t __declspec(property(get=__get_smoothIterations, put=__set_smoothIterations))  smoothIterations;

constexpr void __set_smoothIterations(int32_t value) ;

constexpr int32_t __get_smoothIterations() const;

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__RotationLimitPolygonal__LimitPoint> __declspec(property(get=__get_points, put=__set_points))  points;

constexpr void __set_points(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__RotationLimitPolygonal__LimitPoint> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__RotationLimitPolygonal__LimitPoint> __get_points() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_P, put=__set_P))  P;

constexpr void __set_P(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get_P() const;

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__RotationLimitPolygonal__ReachCone> __declspec(property(get=__get_reachCones, put=__set_reachCones))  reachCones;

constexpr void __set_reachCones(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__RotationLimitPolygonal__ReachCone> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__RotationLimitPolygonal__ReachCone> __get_reachCones() const;


// Methods

/// @brief Method OpenUserManual addr 0x1203bf0 size 0x44 virtual false final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x1203c34 size 0x44 virtual false final false
 void OpenScriptReference() ;

/// @brief Method SupportGroup addr 0x1203c78 size 0x44 virtual false final false
 void SupportGroup() ;

/// @brief Method ASThread addr 0x1203cbc size 0x44 virtual false final false
 void ASThread() ;

/// @brief Method SetLimitPoints addr 0x1203d00 size 0x8c virtual false final false
 void SetLimitPoints(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__RotationLimitPolygonal__LimitPoint> points) ;

/// @brief Method LimitRotation addr 0x1204344 size 0x88 virtual true final false
 UnityEngine::Quaternion LimitRotation(UnityEngine::Quaternion rotation) ;

/// @brief Method Start addr 0x12043cc size 0x350 virtual false final false
 void Start() ;

/// @brief Method ResetToDefault addr 0x12049c0 size 0x4cc virtual false final false
 void ResetToDefault() ;

/// @brief Method BuildReachCones addr 0x1203d8c size 0x5b8 virtual false final false
 void BuildReachCones() ;

/// @brief Method SmoothPoints addr 0x1204e8c size 0x430 virtual false final false
 ::ArrayW<UnityEngine::Vector3> SmoothPoints() ;

/// @brief Method GetScalar addr 0x12052bc size 0x48 virtual false final false
 float_t GetScalar(int32_t k) ;

/// @brief Method PointToTangentPlane addr 0x1205304 size 0x60 virtual false final false
 UnityEngine::Vector3 PointToTangentPlane(UnityEngine::Vector3 p, float_t r) ;

/// @brief Method TangentPointToSphere addr 0x1205364 size 0x6c virtual false final false
 UnityEngine::Vector3 TangentPointToSphere(UnityEngine::Vector3 q, float_t r) ;

/// @brief Method LimitSwing addr 0x120471c size 0x2a4 virtual false final false
 UnityEngine::Quaternion LimitSwing(UnityEngine::Quaternion rotation) ;

/// @brief Method GetReachCone addr 0x12053d0 size 0xcc virtual false final false
 int32_t GetReachCone(UnityEngine::Vector3 L) ;

// Ctor Parameters []
explicit RotationLimitPolygonal() ;

/// @brief Method .ctor addr 0x120549c size 0x5c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__RotationLimitPolygonal__LimitPoint);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__RotationLimitPolygonal__LimitPoint, "RootMotion.FinalIK", "RotationLimitPolygonal/LimitPoint");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__RotationLimitPolygonal__ReachCone);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__RotationLimitPolygonal__ReachCone, "RootMotion.FinalIK", "RotationLimitPolygonal/ReachCone");
NEED_NO_BOX(RootMotion::FinalIK::RotationLimitPolygonal);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RotationLimitPolygonal, "RootMotion.FinalIK", "RotationLimitPolygonal");
