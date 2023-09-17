#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class Constraints;
}
// Type: RootMotion.FinalIK::Constraints
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12455))
// CS Name: RootMotion.FinalIK.Constraints
class CORDL_TYPE Constraints : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~Constraints() = default;

// Ctor Parameters [CppParam { name: "", ty: "Constraints", modifiers: " const&", def_value: None }]
constexpr Constraints(Constraints const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Constraints", modifiers: "&&", def_value: None }]
constexpr Constraints(Constraints&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Constraints(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Constraints& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Constraints& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Constraints& operator=(Constraints&& o) noexcept = default;
  constexpr Constraints& operator=(Constraints const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get_transform, put=__set_transform))  transform;

constexpr void __set_transform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_transform() const;

 ::UnityEngine::Transform __declspec(property(get=__get_target, put=__set_target))  target;

constexpr void __set_target(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_target() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_positionOffset, put=__set_positionOffset))  positionOffset;

constexpr void __set_positionOffset(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_positionOffset() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_position() const;

 float_t __declspec(property(get=__get_positionWeight, put=__set_positionWeight))  positionWeight;

constexpr void __set_positionWeight(float_t value) ;

constexpr float_t __get_positionWeight() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_rotationOffset, put=__set_rotationOffset))  rotationOffset;

constexpr void __set_rotationOffset(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_rotationOffset() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_rotation, put=__set_rotation))  rotation;

constexpr void __set_rotation(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_rotation() const;

 float_t __declspec(property(get=__get_rotationWeight, put=__set_rotationWeight))  rotationWeight;

constexpr void __set_rotationWeight(float_t value) ;

constexpr float_t __get_rotationWeight() const;


// Methods

/// @brief Method IsValid addr 0x11b88f4 size 0x60 virtual false final false
 bool IsValid() ;

/// @brief Method Initiate addr 0x11b7b3c size 0x50 virtual false final false
 void Initiate(::UnityEngine::Transform transform) ;

/// @brief Method Update addr 0x11b7d00 size 0x2f8 virtual false final false
 void Update() ;

// Ctor Parameters []
explicit Constraints() ;

/// @brief Method .ctor addr 0x11b83f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::FinalIK::Constraints);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::Constraints, "RootMotion.FinalIK", "Constraints");
