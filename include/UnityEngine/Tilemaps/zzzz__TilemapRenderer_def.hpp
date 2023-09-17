#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
namespace {
namespace UnityEngine::U2D {
class SpriteAtlas;
}
// Forward declare root types
namespace UnityEngine::Tilemaps {
class TilemapRenderer;
}
// Type: UnityEngine.Tilemaps::TilemapRenderer
namespace UnityEngine::Tilemaps {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10006))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15824))
// CS Name: UnityEngine.Tilemaps.TilemapRenderer
class CORDL_TYPE TilemapRenderer : public ::UnityEngine::Renderer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TilemapRenderer() = default;

// Ctor Parameters [CppParam { name: "", ty: "TilemapRenderer", modifiers: " const&", def_value: None }]
constexpr TilemapRenderer(TilemapRenderer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TilemapRenderer", modifiers: "&&", def_value: None }]
constexpr TilemapRenderer(TilemapRenderer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TilemapRenderer(void* ptr) noexcept : ::UnityEngine::Renderer(ptr) {
}


  constexpr TilemapRenderer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TilemapRenderer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TilemapRenderer& operator=(TilemapRenderer&& o) noexcept = default;
  constexpr TilemapRenderer& operator=(TilemapRenderer const& o) noexcept = default;
                


// Methods

/// @brief Method RegisterSpriteAtlasRegistered addr 0x2bd6f78 size 0x80 virtual false final false
 void RegisterSpriteAtlasRegistered() ;

/// @brief Method UnregisterSpriteAtlasRegistered addr 0x2bd6ff8 size 0x80 virtual false final false
 void UnregisterSpriteAtlasRegistered() ;

/// @brief Method OnSpriteAtlasRegistered addr 0x2bd7078 size 0x44 virtual false final false
 void OnSpriteAtlasRegistered(::UnityEngine::U2D::SpriteAtlas atlas) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Tilemaps
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Tilemaps::TilemapRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::TilemapRenderer, "UnityEngine.Tilemaps", "TilemapRenderer");
