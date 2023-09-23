#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::TextCore {
class Glyph;
}
namespace UnityEngine::TextCore::Text {
class TextAsset;
}
namespace UnityEngine::TextCore::Text {
struct TextElementType;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextElement;
}
// Type: UnityEngine.TextCore.Text::TextElement
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13519))
// CS Name: UnityEngine.TextCore.Text.TextElement
class CORDL_TYPE TextElement : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TextElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextElement", modifiers: " const&", def_value: None }]
constexpr TextElement(TextElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextElement", modifiers: "&&", def_value: None }]
constexpr TextElement(TextElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextElement(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TextElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextElement& operator=(TextElement&& o) noexcept = default;
  constexpr TextElement& operator=(TextElement const& o) noexcept = default;
                


// Fields

 UnityEngine::TextCore::Text::TextElementType __declspec(property(get=__get_m_ElementType, put=__set_m_ElementType))  m_ElementType;

constexpr void __set_m_ElementType(UnityEngine::TextCore::Text::TextElementType value) ;

constexpr UnityEngine::TextCore::Text::TextElementType __get_m_ElementType() const;

 uint32_t __declspec(property(get=__get_m_Unicode, put=__set_m_Unicode))  m_Unicode;

constexpr void __set_m_Unicode(uint32_t value) ;

constexpr uint32_t __get_m_Unicode() const;

 UnityEngine::TextCore::Text::TextAsset __declspec(property(get=__get_m_TextAsset, put=__set_m_TextAsset))  m_TextAsset;

constexpr void __set_m_TextAsset(UnityEngine::TextCore::Text::TextAsset value) ;

constexpr UnityEngine::TextCore::Text::TextAsset __get_m_TextAsset() const;

 UnityEngine::TextCore::Glyph __declspec(property(get=__get_m_Glyph, put=__set_m_Glyph))  m_Glyph;

constexpr void __set_m_Glyph(UnityEngine::TextCore::Glyph value) ;

constexpr UnityEngine::TextCore::Glyph __get_m_Glyph() const;

 uint32_t __declspec(property(get=__get_m_GlyphIndex, put=__set_m_GlyphIndex))  m_GlyphIndex;

constexpr void __set_m_GlyphIndex(uint32_t value) ;

constexpr uint32_t __get_m_GlyphIndex() const;

 float_t __declspec(property(get=__get_m_Scale, put=__set_m_Scale))  m_Scale;

constexpr void __set_m_Scale(float_t value) ;

constexpr float_t __get_m_Scale() const;


// Properties

 UnityEngine::TextCore::Text::TextElementType __declspec(property(get=get_elementType))  elementType;

 uint32_t __declspec(property(get=get_unicode, put=set_unicode))  unicode;

 UnityEngine::TextCore::Text::TextAsset __declspec(property(get=get_textAsset, put=set_textAsset))  textAsset;

 UnityEngine::TextCore::Glyph __declspec(property(get=get_glyph, put=set_glyph))  glyph;

 uint32_t __declspec(property(get=get_glyphIndex, put=set_glyphIndex))  glyphIndex;

 float_t __declspec(property(get=get_scale, put=set_scale))  scale;


// Methods

/// @brief Method get_elementType addr 0x2bcc740 size 0x8 virtual false final false
 UnityEngine::TextCore::Text::TextElementType get_elementType() ;

/// @brief Method get_unicode addr 0x2bc2428 size 0x8 virtual false final false
 uint32_t get_unicode() ;

/// @brief Method set_unicode addr 0x2bcc350 size 0x8 virtual false final false
 void set_unicode(uint32_t value) ;

/// @brief Method get_textAsset addr 0x2bca1e4 size 0x8 virtual false final false
 UnityEngine::TextCore::Text::TextAsset get_textAsset() ;

/// @brief Method set_textAsset addr 0x2bc2430 size 0x8 virtual false final false
 void set_textAsset(UnityEngine::TextCore::Text::TextAsset value) ;

/// @brief Method get_glyph addr 0x2bcc748 size 0x8 virtual false final false
 UnityEngine::TextCore::Glyph get_glyph() ;

/// @brief Method set_glyph addr 0x2bc2438 size 0x8 virtual false final false
 void set_glyph(UnityEngine::TextCore::Glyph value) ;

/// @brief Method get_glyphIndex addr 0x2bc1dc0 size 0x8 virtual false final false
 uint32_t get_glyphIndex() ;

/// @brief Method set_glyphIndex addr 0x2bcc358 size 0x8 virtual false final false
 void set_glyphIndex(uint32_t value) ;

/// @brief Method get_scale addr 0x2bcc750 size 0x8 virtual false final false
 float_t get_scale() ;

/// @brief Method set_scale addr 0x2bcc348 size 0x8 virtual false final false
 void set_scale(float_t value) ;

// Ctor Parameters []
explicit TextElement() ;

/// @brief Method .ctor addr 0x2bcc340 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
NEED_NO_BOX(UnityEngine::TextCore::Text::TextElement);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::TextElement, "UnityEngine.TextCore.Text", "TextElement");
