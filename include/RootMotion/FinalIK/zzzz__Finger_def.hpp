#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Quaternion;
}
namespace RootMotion::FinalIK {
class IKSolverLimb;
}
namespace RootMotion::FinalIK {
struct RootMotion__FinalIK__Finger__DOF;
}
// Forward declare root types
namespace RootMotion::FinalIK {
struct RootMotion__FinalIK__Finger__DOF;
}
namespace RootMotion::FinalIK {
class Finger;
}
// Type: ::DOF
namespace RootMotion::FinalIK {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12456))
// CS Name: RootMotion.FinalIK.Finger::DOF
struct CORDL_TYPE RootMotion__FinalIK__Finger__DOF : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RootMotion__FinalIK__Finger__DOF(int32_t value__) noexcept;


                    constexpr RootMotion__FinalIK__Finger__DOF(RootMotion__FinalIK__Finger__DOF const&) = default;
                    constexpr RootMotion__FinalIK__Finger__DOF(RootMotion__FinalIK__Finger__DOF&&) = default;
                    constexpr RootMotion__FinalIK__Finger__DOF& operator=(RootMotion__FinalIK__Finger__DOF const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RootMotion__FinalIK__Finger__DOF& operator=(RootMotion__FinalIK__Finger__DOF&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__Finger__DOF(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RootMotion__FinalIK__Finger__DOF_Unwrapped : int32_t {
__One = 0,
__Three = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RootMotion__FinalIK__Finger__DOF_Unwrapped () const noexcept {
return std::bit_cast<__RootMotion__FinalIK__Finger__DOF_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field One offset 0
static RootMotion::FinalIK::RootMotion__FinalIK__Finger__DOF const One;

/// @brief Field Three offset 0
static RootMotion::FinalIK::RootMotion__FinalIK__Finger__DOF const Three;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::Finger
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12457))
// CS Name: RootMotion.FinalIK.Finger
class CORDL_TYPE Finger : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using DOF = RootMotion::FinalIK::RootMotion__FinalIK__Finger__DOF;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~Finger() = default;

// Ctor Parameters [CppParam { name: "", ty: "Finger", modifiers: " const&", def_value: None }]
constexpr Finger(Finger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Finger", modifiers: "&&", def_value: None }]
constexpr Finger(Finger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Finger(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Finger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Finger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Finger& operator=(Finger&& o) noexcept = default;
  constexpr Finger& operator=(Finger const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_weight, put=__set_weight))  weight;

constexpr void __set_weight(float_t value) ;

constexpr float_t __get_weight() const;

 float_t __declspec(property(get=__get_rotationWeight, put=__set_rotationWeight))  rotationWeight;

constexpr void __set_rotationWeight(float_t value) ;

constexpr float_t __get_rotationWeight() const;

 RootMotion::FinalIK::RootMotion__FinalIK__Finger__DOF __declspec(property(get=__get_rotationDOF, put=__set_rotationDOF))  rotationDOF;

constexpr void __set_rotationDOF(RootMotion::FinalIK::RootMotion__FinalIK__Finger__DOF value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__Finger__DOF __get_rotationDOF() const;

 bool __declspec(property(get=__get_fixBone1Twist, put=__set_fixBone1Twist))  fixBone1Twist;

constexpr void __set_fixBone1Twist(bool value) ;

constexpr bool __get_fixBone1Twist() const;

 UnityEngine::Transform __declspec(property(get=__get_bone1, put=__set_bone1))  bone1;

constexpr void __set_bone1(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_bone1() const;

 UnityEngine::Transform __declspec(property(get=__get_bone2, put=__set_bone2))  bone2;

constexpr void __set_bone2(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_bone2() const;

 UnityEngine::Transform __declspec(property(get=__get_bone3, put=__set_bone3))  bone3;

constexpr void __set_bone3(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_bone3() const;

 UnityEngine::Transform __declspec(property(get=__get_tip, put=__set_tip))  tip;

constexpr void __set_tip(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_tip() const;

 UnityEngine::Transform __declspec(property(get=__get_target, put=__set_target))  target;

constexpr void __set_target(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_target() const;

 bool __declspec(property(get=__get__initiated_k__BackingField, put=__set__initiated_k__BackingField))  _initiated_k__BackingField;

constexpr void __set__initiated_k__BackingField(bool value) ;

constexpr bool __get__initiated_k__BackingField() const;

 RootMotion::FinalIK::IKSolverLimb __declspec(property(get=__get_solver, put=__set_solver))  solver;

constexpr void __set_solver(RootMotion::FinalIK::IKSolverLimb value) ;

constexpr RootMotion::FinalIK::IKSolverLimb __get_solver() const;

 UnityEngine::Quaternion __declspec(property(get=__get_bone3RelativeToTarget, put=__set_bone3RelativeToTarget))  bone3RelativeToTarget;

constexpr void __set_bone3RelativeToTarget(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_bone3RelativeToTarget() const;

 UnityEngine::Vector3 __declspec(property(get=__get_bone3DefaultLocalPosition, put=__set_bone3DefaultLocalPosition))  bone3DefaultLocalPosition;

constexpr void __set_bone3DefaultLocalPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_bone3DefaultLocalPosition() const;

 UnityEngine::Quaternion __declspec(property(get=__get_bone3DefaultLocalRotation, put=__set_bone3DefaultLocalRotation))  bone3DefaultLocalRotation;

constexpr void __set_bone3DefaultLocalRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_bone3DefaultLocalRotation() const;

 UnityEngine::Vector3 __declspec(property(get=__get_bone1Axis, put=__set_bone1Axis))  bone1Axis;

constexpr void __set_bone1Axis(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_bone1Axis() const;

 UnityEngine::Vector3 __declspec(property(get=__get_tipAxis, put=__set_tipAxis))  tipAxis;

constexpr void __set_tipAxis(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_tipAxis() const;

 UnityEngine::Vector3 __declspec(property(get=__get_bone1TwistAxis, put=__set_bone1TwistAxis))  bone1TwistAxis;

constexpr void __set_bone1TwistAxis(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_bone1TwistAxis() const;


// Properties

 bool __declspec(property(get=get_initiated, put=set_initiated))  initiated;

 UnityEngine::Vector3 __declspec(property(get=get_IKPosition, put=set_IKPosition))  IKPosition;

 UnityEngine::Quaternion __declspec(property(get=get_IKRotation, put=set_IKRotation))  IKRotation;


// Methods

/// @brief Method get_initiated addr 0x11b8954 size 0x8 virtual false final false
 bool get_initiated() ;

/// @brief Method set_initiated addr 0x11b895c size 0xc virtual false final false
 void set_initiated(bool value) ;

/// @brief Method get_IKPosition addr 0x11b8968 size 0x20 virtual false final false
 UnityEngine::Vector3 get_IKPosition() ;

/// @brief Method set_IKPosition addr 0x11b8988 size 0x20 virtual false final false
 void set_IKPosition(UnityEngine::Vector3 value) ;

/// @brief Method get_IKRotation addr 0x11b89a8 size 0x20 virtual false final false
 UnityEngine::Quaternion get_IKRotation() ;

/// @brief Method set_IKRotation addr 0x11b89c8 size 0x20 virtual false final false
 void set_IKRotation(UnityEngine::Quaternion value) ;

/// @brief Method IsValid addr 0x11b89e8 size 0xec virtual false final false
 bool IsValid(ByRef<::StringW> errorMessage) ;

/// @brief Method Initiate addr 0x11b8ad4 size 0x4e0 virtual false final false
 void Initiate(UnityEngine::Transform hand, int32_t index) ;

/// @brief Method FixTransforms addr 0x11b8fb4 size 0xcc virtual false final false
 void FixTransforms() ;

/// @brief Method StoreDefaultLocalState addr 0x11b9080 size 0xb8 virtual false final false
 void StoreDefaultLocalState() ;

/// @brief Method Update addr 0x11b9138 size 0x660 virtual false final false
 void Update(float_t masterWeight) ;

static RootMotion::FinalIK::Finger New_ctor() ;

/// @brief Method .ctor addr 0x11b9798 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__Finger__DOF, "RootMotion.FinalIK", "Finger/DOF");
NEED_NO_BOX(RootMotion::FinalIK::Finger);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Finger, "RootMotion.FinalIK", "Finger");
