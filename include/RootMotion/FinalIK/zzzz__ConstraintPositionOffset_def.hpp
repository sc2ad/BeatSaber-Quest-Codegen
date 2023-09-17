#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__Constraint_def.hpp"
namespace {
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class ConstraintPositionOffset;
}
// Type: RootMotion.FinalIK::ConstraintPositionOffset
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12450))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12452))
// CS Name: RootMotion.FinalIK.ConstraintPositionOffset
class CORDL_TYPE ConstraintPositionOffset : public ::RootMotion::FinalIK::Constraint {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~ConstraintPositionOffset() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstraintPositionOffset", modifiers: " const&", def_value: None }]
constexpr ConstraintPositionOffset(ConstraintPositionOffset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstraintPositionOffset", modifiers: "&&", def_value: None }]
constexpr ConstraintPositionOffset(ConstraintPositionOffset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConstraintPositionOffset(void* ptr) noexcept : ::RootMotion::FinalIK::Constraint(ptr) {
}


  constexpr ConstraintPositionOffset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConstraintPositionOffset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConstraintPositionOffset& operator=(ConstraintPositionOffset&& o) noexcept = default;
  constexpr ConstraintPositionOffset& operator=(ConstraintPositionOffset const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Vector3 __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_offset() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_defaultLocalPosition, put=__set_defaultLocalPosition))  defaultLocalPosition;

constexpr void __set_defaultLocalPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_defaultLocalPosition() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_lastLocalPosition, put=__set_lastLocalPosition))  lastLocalPosition;

constexpr void __set_lastLocalPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_lastLocalPosition() const;

 bool __declspec(property(get=__get_initiated, put=__set_initiated))  initiated;

constexpr void __set_initiated(bool value) ;

constexpr bool __get_initiated() const;


// Properties

 bool __declspec(property(get=get_positionChanged))  positionChanged;


// Methods

/// @brief Method UpdateConstraint addr 0x11b852c size 0x104 virtual true final false
 void UpdateConstraint() ;

// Ctor Parameters []
explicit ConstraintPositionOffset() ;

/// @brief Method .ctor addr 0x11b868c size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "transform", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }]
explicit ConstraintPositionOffset(::UnityEngine::Transform transform) ;

/// @brief Method .ctor addr 0x11b8694 size 0x28 virtual false final false
 void _ctor(::UnityEngine::Transform transform) ;

/// @brief Method get_positionChanged addr 0x11b8630 size 0x5c virtual false final false
 bool get_positionChanged() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::FinalIK::ConstraintPositionOffset);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::ConstraintPositionOffset, "RootMotion.FinalIK", "ConstraintPositionOffset");
