#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
class SpriteRenderer;
}
// Type: UnityEngine::SpriteRenderer
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10006))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10223))
// CS Name: UnityEngine.SpriteRenderer
class CORDL_TYPE SpriteRenderer : public ::UnityEngine::Renderer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SpriteRenderer() = default;

// Ctor Parameters [CppParam { name: "", ty: "SpriteRenderer", modifiers: " const&", def_value: None }]
constexpr SpriteRenderer(SpriteRenderer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SpriteRenderer", modifiers: "&&", def_value: None }]
constexpr SpriteRenderer(SpriteRenderer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SpriteRenderer(void* ptr) noexcept : ::UnityEngine::Renderer(ptr) {
}


  constexpr SpriteRenderer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SpriteRenderer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SpriteRenderer& operator=(SpriteRenderer&& o) noexcept = default;
  constexpr SpriteRenderer& operator=(SpriteRenderer const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Events::UnityEvent_1<::UnityEngine::SpriteRenderer> __declspec(property(get=__get_m_SpriteChangeEvent, put=__set_m_SpriteChangeEvent))  m_SpriteChangeEvent;

constexpr void __set_m_SpriteChangeEvent(::UnityEngine::Events::UnityEvent_1<::UnityEngine::SpriteRenderer> value) ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::SpriteRenderer> __get_m_SpriteChangeEvent() const;


// Properties

 ::UnityEngine::Sprite __declspec(property(put=set_sprite))  sprite;

 ::UnityEngine::Color __declspec(property(get=get_color, put=set_color))  color;


// Methods

/// @brief Method InvokeSpriteChanged addr 0x2b6d1e0 size 0xf4 virtual false final false
 void InvokeSpriteChanged() ;

/// @brief Method set_sprite addr 0x2b6d2d4 size 0x44 virtual false final false
 void set_sprite(::UnityEngine::Sprite value) ;

/// @brief Method get_color addr 0x2b6d318 size 0x58 virtual false final false
 ::UnityEngine::Color get_color() ;

/// @brief Method set_color addr 0x2b6d3b4 size 0x54 virtual false final false
 void set_color(::UnityEngine::Color value) ;

/// @brief Method get_color_Injected addr 0x2b6d370 size 0x44 virtual false final false
 void get_color_Injected(ByRef<::UnityEngine::Color> ret) ;

/// @brief Method set_color_Injected addr 0x2b6d408 size 0x44 virtual false final false
 void set_color_Injected(ByRef<::UnityEngine::Color> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::SpriteRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpriteRenderer, "UnityEngine", "SpriteRenderer");
