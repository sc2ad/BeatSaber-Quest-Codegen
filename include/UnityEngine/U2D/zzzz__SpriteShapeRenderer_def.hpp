#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::U2D {
class SpriteShapeRenderer;
}
// Type: UnityEngine.U2D::SpriteShapeRenderer
namespace UnityEngine::U2D {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10006))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16025))
// CS Name: UnityEngine.U2D.SpriteShapeRenderer
class CORDL_TYPE SpriteShapeRenderer : public ::UnityEngine::Renderer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SpriteShapeRenderer() = default;

// Ctor Parameters [CppParam { name: "", ty: "SpriteShapeRenderer", modifiers: " const&", def_value: None }]
constexpr SpriteShapeRenderer(SpriteShapeRenderer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SpriteShapeRenderer", modifiers: "&&", def_value: None }]
constexpr SpriteShapeRenderer(SpriteShapeRenderer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SpriteShapeRenderer(void* ptr) noexcept : ::UnityEngine::Renderer(ptr) {
}


  constexpr SpriteShapeRenderer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SpriteShapeRenderer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SpriteShapeRenderer& operator=(SpriteShapeRenderer&& o) noexcept = default;
  constexpr SpriteShapeRenderer& operator=(SpriteShapeRenderer const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::U2D
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::U2D::SpriteShapeRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::U2D::SpriteShapeRenderer, "UnityEngine.U2D", "SpriteShapeRenderer");
