#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "TMPro/zzzz__TMP_TextElement_def.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::TextCore {
class Glyph;
}
namespace TMPro {
class TMP_FontAsset;
}
// Forward declare root types
namespace TMPro {
class TMP_Character;
}
// Type: TMPro::TMP_Character
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12390))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12270))
// CS Name: TMPro.TMP_Character
class CORDL_TYPE TMP_Character : public ::TMPro::TMP_TextElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TMP_Character() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_Character", modifiers: " const&", def_value: None }]
constexpr TMP_Character(TMP_Character const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_Character", modifiers: "&&", def_value: None }]
constexpr TMP_Character(TMP_Character&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_Character(void* ptr) noexcept : ::TMPro::TMP_TextElement(ptr) {
}


  constexpr TMP_Character& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_Character& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_Character& operator=(TMP_Character&& o) noexcept = default;
  constexpr TMP_Character& operator=(TMP_Character const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit TMP_Character() ;

/// @brief Method .ctor addr 0x2a69d68 size 0x28 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "unicode", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "glyph", ty: "::UnityEngine::TextCore::Glyph", modifiers: "", def_value: None }]
explicit TMP_Character(uint32_t unicode, ::UnityEngine::TextCore::Glyph glyph) ;

/// @brief Method .ctor addr 0x2a69d90 size 0x54 virtual false final false
 void _ctor(uint32_t unicode, ::UnityEngine::TextCore::Glyph glyph) ;

// Ctor Parameters [CppParam { name: "unicode", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "fontAsset", ty: "::TMPro::TMP_FontAsset", modifiers: "", def_value: None }, CppParam { name: "glyph", ty: "::UnityEngine::TextCore::Glyph", modifiers: "", def_value: None }]
explicit TMP_Character(uint32_t unicode, ::TMPro::TMP_FontAsset fontAsset, ::UnityEngine::TextCore::Glyph glyph) ;

/// @brief Method .ctor addr 0x2a69de4 size 0x60 virtual false final false
 void _ctor(uint32_t unicode, ::TMPro::TMP_FontAsset fontAsset, ::UnityEngine::TextCore::Glyph glyph) ;

// Ctor Parameters [CppParam { name: "unicode", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "glyphIndex", ty: "uint32_t", modifiers: "", def_value: None }]
explicit TMP_Character(uint32_t unicode, uint32_t glyphIndex) ;

/// @brief Method .ctor addr 0x2a69e44 size 0x40 virtual false final false
 void _ctor(uint32_t unicode, uint32_t glyphIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
NEED_NO_BOX(::TMPro::TMP_Character);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Character, "TMPro", "TMP_Character");
