#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class Vector2Extensions;
}
// Type: ::Vector2Extensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16059))
// CS Name: Vector2Extensions
class CORDL_TYPE Vector2Extensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Vector2Extensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "Vector2Extensions", modifiers: " const&", def_value: None }]
constexpr Vector2Extensions(Vector2Extensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Vector2Extensions", modifiers: "&&", def_value: None }]
constexpr Vector2Extensions(Vector2Extensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Vector2Extensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Vector2Extensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Vector2Extensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Vector2Extensions& operator=(Vector2Extensions&& o) noexcept = default;
  constexpr Vector2Extensions& operator=(Vector2Extensions const& o) noexcept = default;
                


// Methods

/// @brief Method SignedAngleToLine addr 0x22781a8 size 0x1d4 virtual false final false
static float_t SignedAngleToLine(UnityEngine::Vector2 vec, UnityEngine::Vector2 line) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::Vector2Extensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Vector2Extensions, "", "Vector2Extensions");
