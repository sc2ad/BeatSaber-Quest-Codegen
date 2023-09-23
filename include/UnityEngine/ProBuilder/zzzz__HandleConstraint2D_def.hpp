#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class HandleConstraint2D;
}
// Type: UnityEngine.ProBuilder::HandleConstraint2D
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12068))
// CS Name: UnityEngine.ProBuilder.HandleConstraint2D
class CORDL_TYPE HandleConstraint2D : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HandleConstraint2D() = default;

// Ctor Parameters [CppParam { name: "", ty: "HandleConstraint2D", modifiers: " const&", def_value: None }]
constexpr HandleConstraint2D(HandleConstraint2D const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HandleConstraint2D", modifiers: "&&", def_value: None }]
constexpr HandleConstraint2D(HandleConstraint2D&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HandleConstraint2D(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HandleConstraint2D& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HandleConstraint2D& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HandleConstraint2D& operator=(HandleConstraint2D&& o) noexcept = default;
  constexpr HandleConstraint2D& operator=(HandleConstraint2D const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(int32_t value) ;

constexpr int32_t __get_x() const;

 int32_t __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(int32_t value) ;

constexpr int32_t __get_y() const;

static UnityEngine::ProBuilder::HandleConstraint2D __declspec(property(get=__get_None, put=__set_None))  None;

static void __set_None(UnityEngine::ProBuilder::HandleConstraint2D value) ;

static UnityEngine::ProBuilder::HandleConstraint2D __get_None() ;


// Methods

// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None }]
explicit HandleConstraint2D(int32_t x, int32_t y) ;

/// @brief Method .ctor addr 0x29aead0 size 0x2c virtual false final false
 void _ctor(int32_t x, int32_t y) ;

/// @brief Method Inverse addr 0x29aeafc size 0x80 virtual false final false
 UnityEngine::ProBuilder::HandleConstraint2D Inverse() ;

/// @brief Method Mask addr 0x29aeb7c size 0x18 virtual false final false
 UnityEngine::Vector2 Mask(UnityEngine::Vector2 v) ;

/// @brief Method InverseMask addr 0x29aeb94 size 0x28 virtual false final false
 UnityEngine::Vector2 InverseMask(UnityEngine::Vector2 v) ;

/// @brief Method op_Equality addr 0x29aebbc size 0x40 virtual false final false
static bool op_Equality(UnityEngine::ProBuilder::HandleConstraint2D a, UnityEngine::ProBuilder::HandleConstraint2D b) ;

/// @brief Method op_Inequality addr 0x29aebfc size 0x40 virtual false final false
static bool op_Inequality(UnityEngine::ProBuilder::HandleConstraint2D a, UnityEngine::ProBuilder::HandleConstraint2D b) ;

/// @brief Method GetHashCode addr 0x29aec3c size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x29aec44 size 0x80 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method ToString addr 0x29aecc4 size 0x1a4 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::HandleConstraint2D);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::HandleConstraint2D, "UnityEngine.ProBuilder", "HandleConstraint2D");
