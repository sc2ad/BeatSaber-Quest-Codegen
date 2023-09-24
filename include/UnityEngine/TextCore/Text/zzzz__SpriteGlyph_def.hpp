#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/TextCore/zzzz__Glyph_def.hpp"
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class SpriteGlyph;
}
// Type: UnityEngine.TextCore.Text::SpriteGlyph
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15506))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13547))
// CS Name: UnityEngine.TextCore.Text.SpriteGlyph
class CORDL_TYPE SpriteGlyph : public UnityEngine::TextCore::Glyph {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~SpriteGlyph() = default;

// Ctor Parameters [CppParam { name: "", ty: "SpriteGlyph", modifiers: " const&", def_value: None }]
constexpr SpriteGlyph(SpriteGlyph const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SpriteGlyph", modifiers: "&&", def_value: None }]
constexpr SpriteGlyph(SpriteGlyph&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SpriteGlyph(void* ptr) noexcept : UnityEngine::TextCore::Glyph(ptr) {
}


  constexpr SpriteGlyph& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SpriteGlyph& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SpriteGlyph& operator=(SpriteGlyph&& o) noexcept = default;
  constexpr SpriteGlyph& operator=(SpriteGlyph const& o) noexcept = default;
                


// Fields

 UnityEngine::Sprite __declspec(property(get=__get_sprite, put=__set_sprite))  sprite;

constexpr void __set_sprite(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get_sprite() const;


// Methods

static UnityEngine::TextCore::Text::SpriteGlyph New_ctor() ;

/// @brief Method .ctor addr 0x2bd48f0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
NEED_NO_BOX(UnityEngine::TextCore::Text::SpriteGlyph);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::SpriteGlyph, "UnityEngine.TextCore.Text", "SpriteGlyph");
