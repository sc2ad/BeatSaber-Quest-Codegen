#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine {
struct HorizontalWrapMode;
}
namespace UnityEngine {
struct VerticalWrapMode;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine {
class Font;
}
// Forward declare root types
namespace UnityEngine::UI {
class FontData;
}
// Type: UnityEngine.UI::FontData
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12979))
// CS Name: UnityEngine.UI.FontData
class CORDL_TYPE FontData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::ISerializationCallbackReceiver
constexpr operator  UnityEngine::ISerializationCallbackReceiver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FontData() = default;

// Ctor Parameters [CppParam { name: "", ty: "FontData", modifiers: " const&", def_value: None }]
constexpr FontData(FontData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FontData", modifiers: "&&", def_value: None }]
constexpr FontData(FontData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FontData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FontData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FontData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FontData& operator=(FontData&& o) noexcept = default;
  constexpr FontData& operator=(FontData const& o) noexcept = default;
                


// Fields

 UnityEngine::Font __declspec(property(get=__get_m_Font, put=__set_m_Font))  m_Font;

constexpr void __set_m_Font(UnityEngine::Font value) ;

constexpr UnityEngine::Font __get_m_Font() const;

 int32_t __declspec(property(get=__get_m_FontSize, put=__set_m_FontSize))  m_FontSize;

constexpr void __set_m_FontSize(int32_t value) ;

constexpr int32_t __get_m_FontSize() const;

 UnityEngine::FontStyle __declspec(property(get=__get_m_FontStyle, put=__set_m_FontStyle))  m_FontStyle;

constexpr void __set_m_FontStyle(UnityEngine::FontStyle value) ;

constexpr UnityEngine::FontStyle __get_m_FontStyle() const;

 bool __declspec(property(get=__get_m_BestFit, put=__set_m_BestFit))  m_BestFit;

constexpr void __set_m_BestFit(bool value) ;

constexpr bool __get_m_BestFit() const;

 int32_t __declspec(property(get=__get_m_MinSize, put=__set_m_MinSize))  m_MinSize;

constexpr void __set_m_MinSize(int32_t value) ;

constexpr int32_t __get_m_MinSize() const;

 int32_t __declspec(property(get=__get_m_MaxSize, put=__set_m_MaxSize))  m_MaxSize;

constexpr void __set_m_MaxSize(int32_t value) ;

constexpr int32_t __get_m_MaxSize() const;

 UnityEngine::TextAnchor __declspec(property(get=__get_m_Alignment, put=__set_m_Alignment))  m_Alignment;

constexpr void __set_m_Alignment(UnityEngine::TextAnchor value) ;

constexpr UnityEngine::TextAnchor __get_m_Alignment() const;

 bool __declspec(property(get=__get_m_AlignByGeometry, put=__set_m_AlignByGeometry))  m_AlignByGeometry;

constexpr void __set_m_AlignByGeometry(bool value) ;

constexpr bool __get_m_AlignByGeometry() const;

 bool __declspec(property(get=__get_m_RichText, put=__set_m_RichText))  m_RichText;

constexpr void __set_m_RichText(bool value) ;

constexpr bool __get_m_RichText() const;

 UnityEngine::HorizontalWrapMode __declspec(property(get=__get_m_HorizontalOverflow, put=__set_m_HorizontalOverflow))  m_HorizontalOverflow;

constexpr void __set_m_HorizontalOverflow(UnityEngine::HorizontalWrapMode value) ;

constexpr UnityEngine::HorizontalWrapMode __get_m_HorizontalOverflow() const;

 UnityEngine::VerticalWrapMode __declspec(property(get=__get_m_VerticalOverflow, put=__set_m_VerticalOverflow))  m_VerticalOverflow;

constexpr void __set_m_VerticalOverflow(UnityEngine::VerticalWrapMode value) ;

constexpr UnityEngine::VerticalWrapMode __get_m_VerticalOverflow() const;

 float_t __declspec(property(get=__get_m_LineSpacing, put=__set_m_LineSpacing))  m_LineSpacing;

constexpr void __set_m_LineSpacing(float_t value) ;

constexpr float_t __get_m_LineSpacing() const;


// Properties

static UnityEngine::UI::FontData __declspec(property(get=get_defaultFontData))  defaultFontData;

 UnityEngine::Font __declspec(property(get=get_font, put=set_font))  font;

 int32_t __declspec(property(get=get_fontSize, put=set_fontSize))  fontSize;

 UnityEngine::FontStyle __declspec(property(get=get_fontStyle, put=set_fontStyle))  fontStyle;

 bool __declspec(property(get=get_bestFit, put=set_bestFit))  bestFit;

 int32_t __declspec(property(get=get_minSize, put=set_minSize))  minSize;

 int32_t __declspec(property(get=get_maxSize, put=set_maxSize))  maxSize;

 UnityEngine::TextAnchor __declspec(property(get=get_alignment, put=set_alignment))  alignment;

 bool __declspec(property(get=get_alignByGeometry, put=set_alignByGeometry))  alignByGeometry;

 bool __declspec(property(get=get_richText, put=set_richText))  richText;

 UnityEngine::HorizontalWrapMode __declspec(property(get=get_horizontalOverflow, put=set_horizontalOverflow))  horizontalOverflow;

 UnityEngine::VerticalWrapMode __declspec(property(get=get_verticalOverflow, put=set_verticalOverflow))  verticalOverflow;

 float_t __declspec(property(get=get_lineSpacing, put=set_lineSpacing))  lineSpacing;


// Methods

/// @brief Method get_defaultFontData addr 0x2be1ed8 size 0x90 virtual false final false
static UnityEngine::UI::FontData get_defaultFontData() ;

/// @brief Method get_font addr 0x2be1f70 size 0x8 virtual false final false
 UnityEngine::Font get_font() ;

/// @brief Method set_font addr 0x2be1f78 size 0x8 virtual false final false
 void set_font(UnityEngine::Font value) ;

/// @brief Method get_fontSize addr 0x2be1f80 size 0x8 virtual false final false
 int32_t get_fontSize() ;

/// @brief Method set_fontSize addr 0x2be1f88 size 0x8 virtual false final false
 void set_fontSize(int32_t value) ;

/// @brief Method get_fontStyle addr 0x2be1f90 size 0x8 virtual false final false
 UnityEngine::FontStyle get_fontStyle() ;

/// @brief Method set_fontStyle addr 0x2be1f98 size 0x8 virtual false final false
 void set_fontStyle(UnityEngine::FontStyle value) ;

/// @brief Method get_bestFit addr 0x2be1fa0 size 0x8 virtual false final false
 bool get_bestFit() ;

/// @brief Method set_bestFit addr 0x2be1fa8 size 0xc virtual false final false
 void set_bestFit(bool value) ;

/// @brief Method get_minSize addr 0x2be1fb4 size 0x8 virtual false final false
 int32_t get_minSize() ;

/// @brief Method set_minSize addr 0x2be1fbc size 0x8 virtual false final false
 void set_minSize(int32_t value) ;

/// @brief Method get_maxSize addr 0x2be1fc4 size 0x8 virtual false final false
 int32_t get_maxSize() ;

/// @brief Method set_maxSize addr 0x2be1fcc size 0x8 virtual false final false
 void set_maxSize(int32_t value) ;

/// @brief Method get_alignment addr 0x2be1fd4 size 0x8 virtual false final false
 UnityEngine::TextAnchor get_alignment() ;

/// @brief Method set_alignment addr 0x2be1fdc size 0x8 virtual false final false
 void set_alignment(UnityEngine::TextAnchor value) ;

/// @brief Method get_alignByGeometry addr 0x2be1fe4 size 0x8 virtual false final false
 bool get_alignByGeometry() ;

/// @brief Method set_alignByGeometry addr 0x2be1fec size 0xc virtual false final false
 void set_alignByGeometry(bool value) ;

/// @brief Method get_richText addr 0x2be1ff8 size 0x8 virtual false final false
 bool get_richText() ;

/// @brief Method set_richText addr 0x2be2000 size 0xc virtual false final false
 void set_richText(bool value) ;

/// @brief Method get_horizontalOverflow addr 0x2be200c size 0x8 virtual false final false
 UnityEngine::HorizontalWrapMode get_horizontalOverflow() ;

/// @brief Method set_horizontalOverflow addr 0x2be2014 size 0x8 virtual false final false
 void set_horizontalOverflow(UnityEngine::HorizontalWrapMode value) ;

/// @brief Method get_verticalOverflow addr 0x2be201c size 0x8 virtual false final false
 UnityEngine::VerticalWrapMode get_verticalOverflow() ;

/// @brief Method set_verticalOverflow addr 0x2be2024 size 0x8 virtual false final false
 void set_verticalOverflow(UnityEngine::VerticalWrapMode value) ;

/// @brief Method get_lineSpacing addr 0x2be202c size 0x8 virtual false final false
 float_t get_lineSpacing() ;

/// @brief Method set_lineSpacing addr 0x2be2034 size 0x8 virtual false final false
 void set_lineSpacing(float_t value) ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize addr 0x2be203c size 0x4 virtual true final true
 void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize addr 0x2be2040 size 0x44 virtual true final true
 void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

static UnityEngine::UI::FontData New_ctor() ;

/// @brief Method .ctor addr 0x2be1f68 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::FontData);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::FontData, "UnityEngine.UI", "FontData");
