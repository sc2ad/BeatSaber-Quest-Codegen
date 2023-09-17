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
class ConstraintRotation;
}
// Type: RootMotion.FinalIK::ConstraintRotation
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12450))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12453))
// CS Name: RootMotion.FinalIK.ConstraintRotation
class CORDL_TYPE ConstraintRotation : public ::RootMotion::FinalIK::Constraint {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ConstraintRotation() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstraintRotation", modifiers: " const&", def_value: None }]
constexpr ConstraintRotation(ConstraintRotation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstraintRotation", modifiers: "&&", def_value: None }]
constexpr ConstraintRotation(ConstraintRotation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConstraintRotation(void* ptr) noexcept : ::RootMotion::FinalIK::Constraint(ptr) {
}


  constexpr ConstraintRotation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConstraintRotation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConstraintRotation& operator=(ConstraintRotation&& o) noexcept = default;
  constexpr ConstraintRotation& operator=(ConstraintRotation const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Quaternion __declspec(property(get=__get_rotation, put=__set_rotation))  rotation;

constexpr void __set_rotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_rotation() const;


// Methods

/// @brief Method UpdateConstraint addr 0x11b86bc size 0x7c virtual true final false
 void UpdateConstraint() ;

// Ctor Parameters []
explicit ConstraintRotation() ;

/// @brief Method .ctor addr 0x11b8738 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "transform", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }]
explicit ConstraintRotation(::UnityEngine::Transform transform) ;

/// @brief Method .ctor addr 0x11b8740 size 0x28 virtual false final false
 void _ctor(::UnityEngine::Transform transform) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::FinalIK::ConstraintRotation);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::ConstraintRotation, "RootMotion.FinalIK", "ConstraintRotation");
