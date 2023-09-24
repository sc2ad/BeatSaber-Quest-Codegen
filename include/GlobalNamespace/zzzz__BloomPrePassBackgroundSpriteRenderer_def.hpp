#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightRendererCore_def.hpp"
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundSpriteRenderer;
}
// Type: ::BloomPrePassBackgroundSpriteRenderer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14626))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14628))
// CS Name: BloomPrePassBackgroundSpriteRenderer
class CORDL_TYPE BloomPrePassBackgroundSpriteRenderer : public GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~BloomPrePassBackgroundSpriteRenderer() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundSpriteRenderer", modifiers: " const&", def_value: None }]
constexpr BloomPrePassBackgroundSpriteRenderer(BloomPrePassBackgroundSpriteRenderer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundSpriteRenderer", modifiers: "&&", def_value: None }]
constexpr BloomPrePassBackgroundSpriteRenderer(BloomPrePassBackgroundSpriteRenderer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomPrePassBackgroundSpriteRenderer(void* ptr) noexcept : GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore(ptr) {
}


  constexpr BloomPrePassBackgroundSpriteRenderer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomPrePassBackgroundSpriteRenderer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomPrePassBackgroundSpriteRenderer& operator=(BloomPrePassBackgroundSpriteRenderer&& o) noexcept = default;
  constexpr BloomPrePassBackgroundSpriteRenderer& operator=(BloomPrePassBackgroundSpriteRenderer const& o) noexcept = default;
                


// Fields

 UnityEngine::SpriteRenderer __declspec(property(get=__get__spriteRenderer, put=__set__spriteRenderer))  _spriteRenderer;

constexpr void __set__spriteRenderer(UnityEngine::SpriteRenderer value) ;

constexpr UnityEngine::SpriteRenderer __get__spriteRenderer() const;


// Properties

 UnityEngine::Renderer __declspec(property(get=get_renderer))  renderer;


// Methods

/// @brief Method get_renderer addr 0x1f93f2c size 0x8 virtual true final false
 UnityEngine::Renderer get_renderer() ;

static GlobalNamespace::BloomPrePassBackgroundSpriteRenderer New_ctor() ;

/// @brief Method .ctor addr 0x1f93f34 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BloomPrePassBackgroundSpriteRenderer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBackgroundSpriteRenderer, "", "BloomPrePassBackgroundSpriteRenderer");
