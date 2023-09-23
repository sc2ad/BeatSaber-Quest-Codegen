#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/TextCore/zzzz__Glyph_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::TextCore {
struct GlyphMetrics;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine::TextCore {
struct GlyphRect;
}
// Forward declare root types
namespace TMPro {
class TMP_SpriteGlyph;
}
// Type: TMPro::TMP_SpriteGlyph
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15506))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12365))
// CS Name: TMPro.TMP_SpriteGlyph
class CORDL_TYPE TMP_SpriteGlyph : public UnityEngine::TextCore::Glyph {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~TMP_SpriteGlyph() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_SpriteGlyph", modifiers: " const&", def_value: None }]
constexpr TMP_SpriteGlyph(TMP_SpriteGlyph const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_SpriteGlyph", modifiers: "&&", def_value: None }]
constexpr TMP_SpriteGlyph(TMP_SpriteGlyph&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_SpriteGlyph(void* ptr) noexcept : UnityEngine::TextCore::Glyph(ptr) {
}


  constexpr TMP_SpriteGlyph& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_SpriteGlyph& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_SpriteGlyph& operator=(TMP_SpriteGlyph&& o) noexcept = default;
  constexpr TMP_SpriteGlyph& operator=(TMP_SpriteGlyph const& o) noexcept = default;
                


// Fields

 UnityEngine::Sprite __declspec(property(get=__get_sprite, put=__set_sprite))  sprite;

constexpr void __set_sprite(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get_sprite() const;


// Methods

// Ctor Parameters []
explicit TMP_SpriteGlyph() ;

/// @brief Method .ctor addr 0x2aaccc0 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "index", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "metrics", ty: "UnityEngine::TextCore::GlyphMetrics", modifiers: "", def_value: None }, CppParam { name: "glyphRect", ty: "UnityEngine::TextCore::GlyphRect", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "atlasIndex", ty: "int32_t", modifiers: "", def_value: None }]
explicit TMP_SpriteGlyph(uint32_t index, UnityEngine::TextCore::GlyphMetrics metrics, UnityEngine::TextCore::GlyphRect glyphRect, float_t scale, int32_t atlasIndex) ;

/// @brief Method .ctor addr 0x2aad034 size 0xbc virtual false final false
 void _ctor(uint32_t index, UnityEngine::TextCore::GlyphMetrics metrics, UnityEngine::TextCore::GlyphRect glyphRect, float_t scale, int32_t atlasIndex) ;

// Ctor Parameters [CppParam { name: "index", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "metrics", ty: "UnityEngine::TextCore::GlyphMetrics", modifiers: "", def_value: None }, CppParam { name: "glyphRect", ty: "UnityEngine::TextCore::GlyphRect", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "atlasIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sprite", ty: "UnityEngine::Sprite", modifiers: "", def_value: None }]
explicit TMP_SpriteGlyph(uint32_t index, UnityEngine::TextCore::GlyphMetrics metrics, UnityEngine::TextCore::GlyphRect glyphRect, float_t scale, int32_t atlasIndex, UnityEngine::Sprite sprite) ;

/// @brief Method .ctor addr 0x2aad0f0 size 0xc4 virtual false final false
 void _ctor(uint32_t index, UnityEngine::TextCore::GlyphMetrics metrics, UnityEngine::TextCore::GlyphRect glyphRect, float_t scale, int32_t atlasIndex, UnityEngine::Sprite sprite) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::TMP_SpriteGlyph);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_SpriteGlyph, "TMPro", "TMP_SpriteGlyph");
