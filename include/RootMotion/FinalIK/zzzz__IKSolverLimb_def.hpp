#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverTrigonometric_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct AvatarIKGoal;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
struct ____RootMotion__FinalIK__IKSolverLimb__BendModifier;
}
namespace RootMotion::FinalIK {
class IKSolverLimb;
}
namespace RootMotion::FinalIK {
struct ____RootMotion__FinalIK__IKSolverLimb__AxisDirection;
}
// Type: ::BendModifier
namespace RootMotion::FinalIK {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12518))
// CS Name: RootMotion.FinalIK.IKSolverLimb::BendModifier
struct CORDL_TYPE ____RootMotion__FinalIK__IKSolverLimb__BendModifier : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____RootMotion__FinalIK__IKSolverLimb__BendModifier(int32_t value__) noexcept;


                    constexpr ____RootMotion__FinalIK__IKSolverLimb__BendModifier(____RootMotion__FinalIK__IKSolverLimb__BendModifier const&) = default;
                    constexpr ____RootMotion__FinalIK__IKSolverLimb__BendModifier(____RootMotion__FinalIK__IKSolverLimb__BendModifier&&) = default;
                    constexpr ____RootMotion__FinalIK__IKSolverLimb__BendModifier& operator=(____RootMotion__FinalIK__IKSolverLimb__BendModifier const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____RootMotion__FinalIK__IKSolverLimb__BendModifier& operator=(____RootMotion__FinalIK__IKSolverLimb__BendModifier&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____RootMotion__FinalIK__IKSolverLimb__BendModifier(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______RootMotion__FinalIK__IKSolverLimb__BendModifier_Unwrapped : int32_t {
__Animation = 0,
__Target = 1,
__Parent = 2,
__Arm = 3,
__Goal = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______RootMotion__FinalIK__IKSolverLimb__BendModifier_Unwrapped () const noexcept {
return std::bit_cast<______RootMotion__FinalIK__IKSolverLimb__BendModifier_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Animation offset 0
static ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverLimb__BendModifier const Animation;

/// @brief Field Target offset 0
static ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverLimb__BendModifier const Target;

/// @brief Field Parent offset 0
static ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverLimb__BendModifier const Parent;

/// @brief Field Arm offset 0
static ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverLimb__BendModifier const Arm;

/// @brief Field Goal offset 0
static ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverLimb__BendModifier const Goal;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::AxisDirection
namespace RootMotion::FinalIK {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12519))
// CS Name: RootMotion.FinalIK.IKSolverLimb::AxisDirection
struct CORDL_TYPE ____RootMotion__FinalIK__IKSolverLimb__AxisDirection : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "direction", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "axis", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "dot", ty: "float_t", modifiers: "", def_value: None }]
constexpr ____RootMotion__FinalIK__IKSolverLimb__AxisDirection(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 axis, float_t dot) noexcept;


                    constexpr ____RootMotion__FinalIK__IKSolverLimb__AxisDirection(____RootMotion__FinalIK__IKSolverLimb__AxisDirection const&) = default;
                    constexpr ____RootMotion__FinalIK__IKSolverLimb__AxisDirection(____RootMotion__FinalIK__IKSolverLimb__AxisDirection&&) = default;
                    constexpr ____RootMotion__FinalIK__IKSolverLimb__AxisDirection& operator=(____RootMotion__FinalIK__IKSolverLimb__AxisDirection const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____RootMotion__FinalIK__IKSolverLimb__AxisDirection& operator=(____RootMotion__FinalIK__IKSolverLimb__AxisDirection&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____RootMotion__FinalIK__IKSolverLimb__AxisDirection(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Vector3 __declspec(property(get=__get_direction, put=__set_direction))  direction;

constexpr void __set_direction(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_direction() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_axis, put=__set_axis))  axis;

constexpr void __set_axis(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_axis() const;

 float_t __declspec(property(get=__get_dot, put=__set_dot))  dot;

constexpr void __set_dot(float_t value) ;

constexpr float_t __get_dot() const;


// Methods

/// @brief Method .ctor addr 0x11e1b78 size 0x19c virtual false final false
 void _ctor(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 axis) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::IKSolverLimb
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12524))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12520))
// CS Name: RootMotion.FinalIK.IKSolverLimb
class CORDL_TYPE IKSolverLimb : public ::RootMotion::FinalIK::IKSolverTrigonometric {
public:
// Declarations
using AxisDirection = ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverLimb__AxisDirection;

using BendModifier = ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverLimb__BendModifier;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x140};

virtual ~IKSolverLimb() = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverLimb", modifiers: " const&", def_value: None }]
constexpr IKSolverLimb(IKSolverLimb const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverLimb", modifiers: "&&", def_value: None }]
constexpr IKSolverLimb(IKSolverLimb&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IKSolverLimb(void* ptr) noexcept : ::RootMotion::FinalIK::IKSolverTrigonometric(ptr) {
}


  constexpr IKSolverLimb& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IKSolverLimb& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IKSolverLimb& operator=(IKSolverLimb&& o) noexcept = default;
  constexpr IKSolverLimb& operator=(IKSolverLimb const& o) noexcept = default;
                


// Fields

 ::UnityEngine::AvatarIKGoal __declspec(property(get=__get_goal, put=__set_goal))  goal;

constexpr void __set_goal(::UnityEngine::AvatarIKGoal value) ;

constexpr ::UnityEngine::AvatarIKGoal __get_goal() const;

 ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverLimb__BendModifier __declspec(property(get=__get_bendModifier, put=__set_bendModifier))  bendModifier;

constexpr void __set_bendModifier(::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverLimb__BendModifier value) ;

constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverLimb__BendModifier __get_bendModifier() const;

 float_t __declspec(property(get=__get_maintainRotationWeight, put=__set_maintainRotationWeight))  maintainRotationWeight;

constexpr void __set_maintainRotationWeight(float_t value) ;

constexpr float_t __get_maintainRotationWeight() const;

 float_t __declspec(property(get=__get_bendModifierWeight, put=__set_bendModifierWeight))  bendModifierWeight;

constexpr void __set_bendModifierWeight(float_t value) ;

constexpr float_t __get_bendModifierWeight() const;

 ::UnityEngine::Transform __declspec(property(get=__get_bendGoal, put=__set_bendGoal))  bendGoal;

constexpr void __set_bendGoal(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_bendGoal() const;

 bool __declspec(property(get=__get_maintainBendFor1Frame, put=__set_maintainBendFor1Frame))  maintainBendFor1Frame;

constexpr void __set_maintainBendFor1Frame(bool value) ;

constexpr bool __get_maintainBendFor1Frame() const;

 bool __declspec(property(get=__get_maintainRotationFor1Frame, put=__set_maintainRotationFor1Frame))  maintainRotationFor1Frame;

constexpr void __set_maintainRotationFor1Frame(bool value) ;

constexpr bool __get_maintainRotationFor1Frame() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_defaultRootRotation, put=__set_defaultRootRotation))  defaultRootRotation;

constexpr void __set_defaultRootRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_defaultRootRotation() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_parentDefaultRotation, put=__set_parentDefaultRotation))  parentDefaultRotation;

constexpr void __set_parentDefaultRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_parentDefaultRotation() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_bone3RotationBeforeSolve, put=__set_bone3RotationBeforeSolve))  bone3RotationBeforeSolve;

constexpr void __set_bone3RotationBeforeSolve(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_bone3RotationBeforeSolve() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_maintainRotation, put=__set_maintainRotation))  maintainRotation;

constexpr void __set_maintainRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_maintainRotation() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_bone3DefaultRotation, put=__set_bone3DefaultRotation))  bone3DefaultRotation;

constexpr void __set_bone3DefaultRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_bone3DefaultRotation() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__bendNormal, put=__set__bendNormal))  _bendNormal;

constexpr void __set__bendNormal(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__bendNormal() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_animationNormal, put=__set_animationNormal))  animationNormal;

constexpr void __set_animationNormal(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_animationNormal() const;

 ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverLimb__AxisDirection> __declspec(property(get=__get_axisDirectionsLeft, put=__set_axisDirectionsLeft))  axisDirectionsLeft;

constexpr void __set_axisDirectionsLeft(::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverLimb__AxisDirection> value) ;

constexpr ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverLimb__AxisDirection> __get_axisDirectionsLeft() const;

 ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverLimb__AxisDirection> __declspec(property(get=__get_axisDirectionsRight, put=__set_axisDirectionsRight))  axisDirectionsRight;

constexpr void __set_axisDirectionsRight(::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverLimb__AxisDirection> value) ;

constexpr ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverLimb__AxisDirection> __get_axisDirectionsRight() const;


// Properties

 ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverLimb__AxisDirection> __declspec(property(get=get_axisDirections))  axisDirections;


// Methods

/// @brief Method MaintainRotation addr 0x11e078c size 0x44 virtual false final false
 void MaintainRotation() ;

/// @brief Method MaintainBend addr 0x11e07d0 size 0x3c virtual false final false
 void MaintainBend() ;

/// @brief Method OnInitiateVirtual addr 0x11e083c size 0x35c virtual true final false
 void OnInitiateVirtual() ;

/// @brief Method OnUpdateVirtual addr 0x11e0d84 size 0xbc virtual true final false
 void OnUpdateVirtual() ;

/// @brief Method OnPostSolveVirtual addr 0x11e18a0 size 0xa8 virtual true final false
 void OnPostSolveVirtual() ;

// Ctor Parameters []
explicit IKSolverLimb() ;

/// @brief Method .ctor addr 0x11e1948 size 0x6c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "goal", ty: "::UnityEngine::AvatarIKGoal", modifiers: "", def_value: None }]
explicit IKSolverLimb(::UnityEngine::AvatarIKGoal goal) ;

/// @brief Method .ctor addr 0x11e1adc size 0x80 virtual false final false
 void _ctor(::UnityEngine::AvatarIKGoal goal) ;

/// @brief Method get_axisDirections addr 0x11e1b5c size 0x1c virtual false final false
 ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverLimb__AxisDirection> get_axisDirections() ;

/// @brief Method StoreAxisDirections addr 0x11e0b98 size 0x1ec virtual false final false
 void StoreAxisDirections(ByRef<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverLimb__AxisDirection>> axisDirections) ;

/// @brief Method GetModifiedBendNormal addr 0x11e0e40 size 0xa60 virtual false final false
 ::UnityEngine::Vector3 GetModifiedBendNormal() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverLimb__BendModifier, "RootMotion.FinalIK", "IKSolverLimb/BendModifier");
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverLimb);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverLimb, "RootMotion.FinalIK", "IKSolverLimb");
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverLimb__AxisDirection, "RootMotion.FinalIK", "IKSolverLimb/AxisDirection");
