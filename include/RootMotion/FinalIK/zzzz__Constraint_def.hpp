#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class Constraint;
}
// Type: RootMotion.FinalIK::Constraint
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12450))
// CS Name: RootMotion.FinalIK.Constraint
class CORDL_TYPE Constraint : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Constraint() = default;

// Ctor Parameters [CppParam { name: "", ty: "Constraint", modifiers: " const&", def_value: None }]
constexpr Constraint(Constraint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Constraint", modifiers: "&&", def_value: None }]
constexpr Constraint(Constraint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Constraint(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Constraint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Constraint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Constraint& operator=(Constraint&& o) noexcept = default;
  constexpr Constraint& operator=(Constraint const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get_transform, put=__set_transform))  transform;

constexpr void __set_transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_transform() const;

 float_t __declspec(property(get=__get_weight, put=__set_weight))  weight;

constexpr void __set_weight(float_t value) ;

constexpr float_t __get_weight() const;


// Properties

 bool __declspec(property(get=get_isValid))  isValid;


// Methods

/// @brief Method get_isValid addr 0x11b83fc size 0x60 virtual false final false
 bool get_isValid() ;

/// @brief Method UpdateConstraint addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateConstraint() ;

static RootMotion::FinalIK::Constraint New_ctor() ;

/// @brief Method .ctor addr 0x11b845c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::Constraint);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Constraint, "RootMotion.FinalIK", "Constraint");
