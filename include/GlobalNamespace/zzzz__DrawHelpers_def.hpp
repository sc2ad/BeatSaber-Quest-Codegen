#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class DrawHelpers;
}
// Type: ::DrawHelpers
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13756))
// CS Name: DrawHelpers
class CORDL_TYPE DrawHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DrawHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "DrawHelpers", modifiers: " const&", def_value: None }]
constexpr DrawHelpers(DrawHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DrawHelpers", modifiers: "&&", def_value: None }]
constexpr DrawHelpers(DrawHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DrawHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DrawHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DrawHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DrawHelpers& operator=(DrawHelpers&& o) noexcept = default;
  constexpr DrawHelpers& operator=(DrawHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method DrawTexture addr 0x1f73db0 size 0x1a8 virtual false final false
static void DrawTexture(::UnityEngine::Texture texture, float_t x, float_t y, float_t w, float_t h, ::UnityEngine::Material mat, float_t sx, float_t sy, float_t sw, float_t sh) ;

// Ctor Parameters []
explicit DrawHelpers() ;

/// @brief Method .ctor addr 0x1f73f58 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::DrawHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DrawHelpers, "", "DrawHelpers");
