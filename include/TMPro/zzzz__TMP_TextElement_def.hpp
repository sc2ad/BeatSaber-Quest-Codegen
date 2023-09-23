#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace TMPro {
class TMP_Asset;
}
namespace TMPro {
struct TextElementType;
}
namespace UnityEngine::TextCore {
class Glyph;
}
// Forward declare root types
namespace TMPro {
class TMP_TextElement;
}
// Type: TMPro::TMP_TextElement
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12390))
// CS Name: TMPro.TMP_TextElement
class CORDL_TYPE TMP_TextElement : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TMP_TextElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_TextElement", modifiers: " const&", def_value: None }]
constexpr TMP_TextElement(TMP_TextElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_TextElement", modifiers: "&&", def_value: None }]
constexpr TMP_TextElement(TMP_TextElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_TextElement(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMP_TextElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_TextElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_TextElement& operator=(TMP_TextElement&& o) noexcept = default;
  constexpr TMP_TextElement& operator=(TMP_TextElement const& o) noexcept = default;
                


// Fields

 TMPro::TextElementType __declspec(property(get=__get_m_ElementType, put=__set_m_ElementType))  m_ElementType;

constexpr void __set_m_ElementType(TMPro::TextElementType value) ;

constexpr TMPro::TextElementType __get_m_ElementType() const;

 uint32_t __declspec(property(get=__get_m_Unicode, put=__set_m_Unicode))  m_Unicode;

constexpr void __set_m_Unicode(uint32_t value) ;

constexpr uint32_t __get_m_Unicode() const;

 TMPro::TMP_Asset __declspec(property(get=__get_m_TextAsset, put=__set_m_TextAsset))  m_TextAsset;

constexpr void __set_m_TextAsset(TMPro::TMP_Asset value) ;

constexpr TMPro::TMP_Asset __get_m_TextAsset() const;

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

 TMPro::TextElementType __declspec(property(get=get_elementType))  elementType;

 uint32_t __declspec(property(get=get_unicode, put=set_unicode))  unicode;

 TMPro::TMP_Asset __declspec(property(get=get_textAsset, put=set_textAsset))  textAsset;

 UnityEngine::TextCore::Glyph __declspec(property(get=get_glyph, put=set_glyph))  glyph;

 uint32_t __declspec(property(get=get_glyphIndex, put=set_glyphIndex))  glyphIndex;

 float_t __declspec(property(get=get_scale, put=set_scale))  scale;


// Methods

/// @brief Method get_elementType addr 0x2ab0474 size 0x8 virtual false final false
 TMPro::TextElementType get_elementType() ;

/// @brief Method get_unicode addr 0x2ab047c size 0x8 virtual false final false
 uint32_t get_unicode() ;

/// @brief Method set_unicode addr 0x2ab0484 size 0x8 virtual false final false
 void set_unicode(uint32_t value) ;

/// @brief Method get_textAsset addr 0x2ab048c size 0x8 virtual false final false
 TMPro::TMP_Asset get_textAsset() ;

/// @brief Method set_textAsset addr 0x2ab0494 size 0x8 virtual false final false
 void set_textAsset(TMPro::TMP_Asset value) ;

/// @brief Method get_glyph addr 0x2ab049c size 0x8 virtual false final false
 UnityEngine::TextCore::Glyph get_glyph() ;

/// @brief Method set_glyph addr 0x2ab04a4 size 0x8 virtual false final false
 void set_glyph(UnityEngine::TextCore::Glyph value) ;

/// @brief Method get_glyphIndex addr 0x2ab04ac size 0x8 virtual false final false
 uint32_t get_glyphIndex() ;

/// @brief Method set_glyphIndex addr 0x2ab04b4 size 0x8 virtual false final false
 void set_glyphIndex(uint32_t value) ;

/// @brief Method get_scale addr 0x2ab04bc size 0x8 virtual false final false
 float_t get_scale() ;

/// @brief Method set_scale addr 0x2ab04c4 size 0x8 virtual false final false
 void set_scale(float_t value) ;

// Ctor Parameters []
explicit TMP_TextElement() ;

/// @brief Method .ctor addr 0x2aacf38 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::TMP_TextElement);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_TextElement, "TMPro", "TMP_TextElement");
