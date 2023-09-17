#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine {
class Collider2D;
}
// Type: UnityEngine::Collider2D
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10129))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15820))
// CS Name: UnityEngine.Collider2D
class CORDL_TYPE Collider2D : public ::UnityEngine::Behaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Collider2D() = default;

// Ctor Parameters [CppParam { name: "", ty: "Collider2D", modifiers: " const&", def_value: None }]
constexpr Collider2D(Collider2D const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Collider2D", modifiers: "&&", def_value: None }]
constexpr Collider2D(Collider2D&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Collider2D(void* ptr) noexcept : ::UnityEngine::Behaviour(ptr) {
}


  constexpr Collider2D& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Collider2D& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Collider2D& operator=(Collider2D&& o) noexcept = default;
  constexpr Collider2D& operator=(Collider2D const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Collider2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Collider2D, "UnityEngine", "Collider2D");
