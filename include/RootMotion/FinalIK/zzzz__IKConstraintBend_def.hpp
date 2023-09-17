#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace RootMotion::FinalIK {
class IKSolverFullBody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion {
class ____RootMotion__Warning__Logger;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKConstraintBend;
}
// Type: RootMotion.FinalIK::IKConstraintBend
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12493))
// CS Name: RootMotion.FinalIK.IKConstraintBend
class CORDL_TYPE IKConstraintBend : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~IKConstraintBend() = default;

// Ctor Parameters [CppParam { name: "", ty: "IKConstraintBend", modifiers: " const&", def_value: None }]
constexpr IKConstraintBend(IKConstraintBend const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IKConstraintBend", modifiers: "&&", def_value: None }]
constexpr IKConstraintBend(IKConstraintBend&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IKConstraintBend(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IKConstraintBend& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IKConstraintBend& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IKConstraintBend& operator=(IKConstraintBend&& o) noexcept = default;
  constexpr IKConstraintBend& operator=(IKConstraintBend const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get_bone1, put=__set_bone1))  bone1;

constexpr void __set_bone1(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_bone1() const;

 ::UnityEngine::Transform __declspec(property(get=__get_bone2, put=__set_bone2))  bone2;

constexpr void __set_bone2(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_bone2() const;

 ::UnityEngine::Transform __declspec(property(get=__get_bone3, put=__set_bone3))  bone3;

constexpr void __set_bone3(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_bone3() const;

 ::UnityEngine::Transform __declspec(property(get=__get_bendGoal, put=__set_bendGoal))  bendGoal;

constexpr void __set_bendGoal(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_bendGoal() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_direction, put=__set_direction))  direction;

constexpr void __set_direction(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_direction() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_rotationOffset, put=__set_rotationOffset))  rotationOffset;

constexpr void __set_rotationOffset(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_rotationOffset() const;

 float_t __declspec(property(get=__get_weight, put=__set_weight))  weight;

constexpr void __set_weight(float_t value) ;

constexpr float_t __get_weight() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_defaultLocalDirection, put=__set_defaultLocalDirection))  defaultLocalDirection;

constexpr void __set_defaultLocalDirection(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_defaultLocalDirection() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_defaultChildDirection, put=__set_defaultChildDirection))  defaultChildDirection;

constexpr void __set_defaultChildDirection(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_defaultChildDirection() const;

 float_t __declspec(property(get=__get_clampF, put=__set_clampF))  clampF;

constexpr void __set_clampF(float_t value) ;

constexpr float_t __get_clampF() const;

 int32_t __declspec(property(get=__get_chainIndex1, put=__set_chainIndex1))  chainIndex1;

constexpr void __set_chainIndex1(int32_t value) ;

constexpr int32_t __get_chainIndex1() const;

 int32_t __declspec(property(get=__get_nodeIndex1, put=__set_nodeIndex1))  nodeIndex1;

constexpr void __set_nodeIndex1(int32_t value) ;

constexpr int32_t __get_nodeIndex1() const;

 int32_t __declspec(property(get=__get_chainIndex2, put=__set_chainIndex2))  chainIndex2;

constexpr void __set_chainIndex2(int32_t value) ;

constexpr int32_t __get_chainIndex2() const;

 int32_t __declspec(property(get=__get_nodeIndex2, put=__set_nodeIndex2))  nodeIndex2;

constexpr void __set_nodeIndex2(int32_t value) ;

constexpr int32_t __get_nodeIndex2() const;

 int32_t __declspec(property(get=__get_chainIndex3, put=__set_chainIndex3))  chainIndex3;

constexpr void __set_chainIndex3(int32_t value) ;

constexpr int32_t __get_chainIndex3() const;

 int32_t __declspec(property(get=__get_nodeIndex3, put=__set_nodeIndex3))  nodeIndex3;

constexpr void __set_nodeIndex3(int32_t value) ;

constexpr int32_t __get_nodeIndex3() const;

 bool __declspec(property(get=__get__initiated_k__BackingField, put=__set__initiated_k__BackingField))  _initiated_k__BackingField;

constexpr void __set__initiated_k__BackingField(bool value) ;

constexpr bool __get__initiated_k__BackingField() const;

 bool __declspec(property(get=__get_limbOrientationsSet, put=__set_limbOrientationsSet))  limbOrientationsSet;

constexpr void __set_limbOrientationsSet(bool value) ;

constexpr bool __get_limbOrientationsSet() const;


// Properties

 bool __declspec(property(get=get_initiated, put=set_initiated))  initiated;


// Methods

/// @brief Method IsValid addr 0x11cd82c size 0x1d8 virtual false final false
 bool IsValid(::RootMotion::FinalIK::IKSolverFullBody solver, ::RootMotion::____RootMotion__Warning__Logger logger) ;

/// @brief Method get_initiated addr 0x11cda04 size 0x8 virtual false final false
 bool get_initiated() ;

/// @brief Method set_initiated addr 0x11cda0c size 0xc virtual false final false
 void set_initiated(bool value) ;

// Ctor Parameters []
explicit IKConstraintBend() ;

/// @brief Method .ctor addr 0x11ca98c size 0x6c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "bone1", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "bone2", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "bone3", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }]
explicit IKConstraintBend(::UnityEngine::Transform bone1, ::UnityEngine::Transform bone2, ::UnityEngine::Transform bone3) ;

/// @brief Method .ctor addr 0x11cda18 size 0x8c virtual false final false
 void _ctor(::UnityEngine::Transform bone1, ::UnityEngine::Transform bone2, ::UnityEngine::Transform bone3) ;

/// @brief Method SetBones addr 0x11cb528 size 0xc virtual false final false
 void SetBones(::UnityEngine::Transform bone1, ::UnityEngine::Transform bone2, ::UnityEngine::Transform bone3) ;

/// @brief Method Initiate addr 0x11cb534 size 0x268 virtual false final false
 void Initiate(::RootMotion::FinalIK::IKSolverFullBody solver) ;

/// @brief Method SetLimbOrientation addr 0x11cdbec size 0x354 virtual false final false
 void SetLimbOrientation(::UnityEngine::Vector3 upper, ::UnityEngine::Vector3 lower, ::UnityEngine::Vector3 last) ;

/// @brief Method LimitBend addr 0x11cdf40 size 0x3c8 virtual false final false
 void LimitBend(float_t solverWeight, float_t positionWeight) ;

/// @brief Method GetDir addr 0x11cc500 size 0x630 virtual false final false
 ::UnityEngine::Vector3 GetDir(::RootMotion::FinalIK::IKSolverFullBody solver) ;

/// @brief Method OrthoToLimb addr 0x11cdaa4 size 0xa4 virtual false final false
 ::UnityEngine::Vector3 OrthoToLimb(::RootMotion::FinalIK::IKSolverFullBody solver, ::UnityEngine::Vector3 tangent) ;

/// @brief Method OrthoToBone1 addr 0x11cdb48 size 0xa4 virtual false final false
 ::UnityEngine::Vector3 OrthoToBone1(::RootMotion::FinalIK::IKSolverFullBody solver, ::UnityEngine::Vector3 tangent) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::FinalIK::IKConstraintBend);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKConstraintBend, "RootMotion.FinalIK", "IKConstraintBend");
