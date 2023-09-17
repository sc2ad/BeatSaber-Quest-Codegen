#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__Constraint_def.hpp"
namespace {
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class ConstraintRotationOffset;
}
// Type: RootMotion.FinalIK::ConstraintRotationOffset
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12450))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12454))
// CS Name: RootMotion.FinalIK.ConstraintRotationOffset
class CORDL_TYPE ConstraintRotationOffset : public ::RootMotion::FinalIK::Constraint {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~ConstraintRotationOffset() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstraintRotationOffset", modifiers: " const&", def_value: None }]
constexpr ConstraintRotationOffset(ConstraintRotationOffset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstraintRotationOffset", modifiers: "&&", def_value: None }]
constexpr ConstraintRotationOffset(ConstraintRotationOffset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConstraintRotationOffset(void* ptr) noexcept : ::RootMotion::FinalIK::Constraint(ptr) {
}


  constexpr ConstraintRotationOffset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConstraintRotationOffset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConstraintRotationOffset& operator=(ConstraintRotationOffset&& o) noexcept = default;
  constexpr ConstraintRotationOffset& operator=(ConstraintRotationOffset const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Quaternion __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_offset() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_defaultRotation, put=__set_defaultRotation))  defaultRotation;

constexpr void __set_defaultRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_defaultRotation() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_defaultLocalRotation, put=__set_defaultLocalRotation))  defaultLocalRotation;

constexpr void __set_defaultLocalRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_defaultLocalRotation() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_lastLocalRotation, put=__set_lastLocalRotation))  lastLocalRotation;

constexpr void __set_lastLocalRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_lastLocalRotation() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_defaultTargetLocalRotation, put=__set_defaultTargetLocalRotation))  defaultTargetLocalRotation;

constexpr void __set_defaultTargetLocalRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_defaultTargetLocalRotation() const;

 bool __declspec(property(get=__get_initiated, put=__set_initiated))  initiated;

constexpr void __set_initiated(bool value) ;

constexpr bool __get_initiated() const;


// Properties

 bool __declspec(property(get=get_rotationChanged))  rotationChanged;


// Methods

/// @brief Method UpdateConstraint addr 0x11b8768 size 0x104 virtual true final false
 void UpdateConstraint() ;

// Ctor Parameters []
explicit ConstraintRotationOffset() ;

/// @brief Method .ctor addr 0x11b88c4 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "transform", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }]
explicit ConstraintRotationOffset(::UnityEngine::Transform transform) ;

/// @brief Method .ctor addr 0x11b88cc size 0x28 virtual false final false
 void _ctor(::UnityEngine::Transform transform) ;

/// @brief Method get_rotationChanged addr 0x11b886c size 0x58 virtual false final false
 bool get_rotationChanged() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::FinalIK::ConstraintRotationOffset);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::ConstraintRotationOffset, "RootMotion.FinalIK", "ConstraintRotationOffset");
