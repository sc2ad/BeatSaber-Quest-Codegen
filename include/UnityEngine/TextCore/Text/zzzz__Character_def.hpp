#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElement_def.hpp"
#include <cstdint>
namespace UnityEngine::TextCore {
class Glyph;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class Character;
}
// Type: UnityEngine.TextCore.Text::Character
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13519))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13513))
// CS Name: UnityEngine.TextCore.Text.Character
class CORDL_TYPE Character : public UnityEngine::TextCore::Text::TextElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Character() = default;

// Ctor Parameters [CppParam { name: "", ty: "Character", modifiers: " const&", def_value: None }]
constexpr Character(Character const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Character", modifiers: "&&", def_value: None }]
constexpr Character(Character&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Character(void* ptr) noexcept : UnityEngine::TextCore::Text::TextElement(ptr) {
}


  constexpr Character& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Character& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Character& operator=(Character&& o) noexcept = default;
  constexpr Character& operator=(Character const& o) noexcept = default;
                


// Methods

static UnityEngine::TextCore::Text::Character New_ctor() ;

/// @brief Method .ctor addr 0x2bcc318 size 0x28 virtual false final false
 void _ctor() ;

static UnityEngine::TextCore::Text::Character New_ctor(uint32_t unicode, UnityEngine::TextCore::Text::FontAsset fontAsset, UnityEngine::TextCore::Glyph glyph) ;

/// @brief Method .ctor addr 0x2bc279c size 0x60 virtual false final false
 void _ctor(uint32_t unicode, UnityEngine::TextCore::Text::FontAsset fontAsset, UnityEngine::TextCore::Glyph glyph) ;

static UnityEngine::TextCore::Text::Character New_ctor(uint32_t unicode, uint32_t glyphIndex) ;

/// @brief Method .ctor addr 0x2bc5c68 size 0x40 virtual false final false
 void _ctor(uint32_t unicode, uint32_t glyphIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
NEED_NO_BOX(UnityEngine::TextCore::Text::Character);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::Character, "UnityEngine.TextCore.Text", "Character");
