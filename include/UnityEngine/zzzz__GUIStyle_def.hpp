#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
struct TextClipping;
}
namespace UnityEngine {
class GUIStyleState;
}
namespace UnityEngine {
struct ImagePosition;
}
namespace UnityEngine {
class RectOffset;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class GUIStyle;
}
// Type: UnityEngine::GUIStyle
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14785))
// CS Name: UnityEngine.GUIStyle
class CORDL_TYPE GUIStyle : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GUIStyle() = default;

// Ctor Parameters [CppParam { name: "", ty: "GUIStyle", modifiers: " const&", def_value: None }]
constexpr GUIStyle(GUIStyle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GUIStyle", modifiers: "&&", def_value: None }]
constexpr GUIStyle(GUIStyle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GUIStyle(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GUIStyle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GUIStyle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GUIStyle& operator=(GUIStyle&& o) noexcept = default;
  constexpr GUIStyle& operator=(GUIStyle const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;

 UnityEngine::GUIStyleState __declspec(property(get=__get_m_Normal, put=__set_m_Normal))  m_Normal;

constexpr void __set_m_Normal(UnityEngine::GUIStyleState value) ;

constexpr UnityEngine::GUIStyleState __get_m_Normal() const;

 UnityEngine::GUIStyleState __declspec(property(get=__get_m_Hover, put=__set_m_Hover))  m_Hover;

constexpr void __set_m_Hover(UnityEngine::GUIStyleState value) ;

constexpr UnityEngine::GUIStyleState __get_m_Hover() const;

 UnityEngine::GUIStyleState __declspec(property(get=__get_m_Active, put=__set_m_Active))  m_Active;

constexpr void __set_m_Active(UnityEngine::GUIStyleState value) ;

constexpr UnityEngine::GUIStyleState __get_m_Active() const;

 UnityEngine::GUIStyleState __declspec(property(get=__get_m_Focused, put=__set_m_Focused))  m_Focused;

constexpr void __set_m_Focused(UnityEngine::GUIStyleState value) ;

constexpr UnityEngine::GUIStyleState __get_m_Focused() const;

 UnityEngine::GUIStyleState __declspec(property(get=__get_m_OnNormal, put=__set_m_OnNormal))  m_OnNormal;

constexpr void __set_m_OnNormal(UnityEngine::GUIStyleState value) ;

constexpr UnityEngine::GUIStyleState __get_m_OnNormal() const;

 UnityEngine::GUIStyleState __declspec(property(get=__get_m_OnHover, put=__set_m_OnHover))  m_OnHover;

constexpr void __set_m_OnHover(UnityEngine::GUIStyleState value) ;

constexpr UnityEngine::GUIStyleState __get_m_OnHover() const;

 UnityEngine::GUIStyleState __declspec(property(get=__get_m_OnActive, put=__set_m_OnActive))  m_OnActive;

constexpr void __set_m_OnActive(UnityEngine::GUIStyleState value) ;

constexpr UnityEngine::GUIStyleState __get_m_OnActive() const;

 UnityEngine::GUIStyleState __declspec(property(get=__get_m_OnFocused, put=__set_m_OnFocused))  m_OnFocused;

constexpr void __set_m_OnFocused(UnityEngine::GUIStyleState value) ;

constexpr UnityEngine::GUIStyleState __get_m_OnFocused() const;

 UnityEngine::RectOffset __declspec(property(get=__get_m_Border, put=__set_m_Border))  m_Border;

constexpr void __set_m_Border(UnityEngine::RectOffset value) ;

constexpr UnityEngine::RectOffset __get_m_Border() const;

 UnityEngine::RectOffset __declspec(property(get=__get_m_Padding, put=__set_m_Padding))  m_Padding;

constexpr void __set_m_Padding(UnityEngine::RectOffset value) ;

constexpr UnityEngine::RectOffset __get_m_Padding() const;

 UnityEngine::RectOffset __declspec(property(get=__get_m_Margin, put=__set_m_Margin))  m_Margin;

constexpr void __set_m_Margin(UnityEngine::RectOffset value) ;

constexpr UnityEngine::RectOffset __get_m_Margin() const;

 UnityEngine::RectOffset __declspec(property(get=__get_m_Overflow, put=__set_m_Overflow))  m_Overflow;

constexpr void __set_m_Overflow(UnityEngine::RectOffset value) ;

constexpr UnityEngine::RectOffset __get_m_Overflow() const;

 ::StringW __declspec(property(get=__get_m_Name, put=__set_m_Name))  m_Name;

constexpr void __set_m_Name(::StringW value) ;

constexpr ::StringW __get_m_Name() const;

static bool __declspec(property(get=__get_showKeyboardFocus, put=__set_showKeyboardFocus))  showKeyboardFocus;

static void __set_showKeyboardFocus(bool value) ;

static bool __get_showKeyboardFocus() ;

static UnityEngine::GUIStyle __declspec(property(get=__get_s_None, put=__set_s_None))  s_None;

static void __set_s_None(UnityEngine::GUIStyle value) ;

static UnityEngine::GUIStyle __get_s_None() ;


// Properties

 ::StringW __declspec(property(get=get_rawName, put=set_rawName))  rawName;

 UnityEngine::Font __declspec(property(get=get_font, put=set_font))  font;

 UnityEngine::ImagePosition __declspec(property(get=get_imagePosition))  imagePosition;

 UnityEngine::TextAnchor __declspec(property(put=set_alignment))  alignment;

 bool __declspec(property(get=get_wordWrap, put=set_wordWrap))  wordWrap;

 UnityEngine::TextClipping __declspec(property(put=set_clipping))  clipping;

 float_t __declspec(property(get=get_fixedWidth))  fixedWidth;

 float_t __declspec(property(get=get_fixedHeight))  fixedHeight;

 bool __declspec(property(get=get_stretchWidth))  stretchWidth;

 bool __declspec(property(get=get_stretchHeight, put=set_stretchHeight))  stretchHeight;

 int32_t __declspec(property(put=set_fontSize))  fontSize;

 UnityEngine::FontStyle __declspec(property(put=set_fontStyle))  fontStyle;

 bool __declspec(property(put=set_richText))  richText;

 ::StringW __declspec(property(get=get_name, put=set_name))  name;

 UnityEngine::GUIStyleState __declspec(property(get=get_normal))  normal;

 UnityEngine::RectOffset __declspec(property(get=get_border))  border;

 UnityEngine::RectOffset __declspec(property(get=get_margin))  margin;

 UnityEngine::RectOffset __declspec(property(get=get_padding))  padding;

 float_t __declspec(property(get=get_lineHeight))  lineHeight;

static UnityEngine::GUIStyle __declspec(property(get=get_none))  none;

 bool __declspec(property(get=get_isHeightDependantOnWidth))  isHeightDependantOnWidth;


// Methods

/// @brief Method get_rawName addr 0x2b9473c size 0x3c virtual false final false
 ::StringW get_rawName() ;

/// @brief Method set_rawName addr 0x2b94778 size 0x44 virtual false final false
 void set_rawName(::StringW value) ;

/// @brief Method get_font addr 0x2b947bc size 0x3c virtual false final false
 UnityEngine::Font get_font() ;

/// @brief Method set_font addr 0x2b947f8 size 0x44 virtual false final false
 void set_font(UnityEngine::Font value) ;

/// @brief Method get_imagePosition addr 0x2b9483c size 0x3c virtual false final false
 UnityEngine::ImagePosition get_imagePosition() ;

/// @brief Method set_alignment addr 0x2b94878 size 0x44 virtual false final false
 void set_alignment(UnityEngine::TextAnchor value) ;

/// @brief Method get_wordWrap addr 0x2b948bc size 0x3c virtual false final false
 bool get_wordWrap() ;

/// @brief Method set_wordWrap addr 0x2b948f8 size 0x44 virtual false final false
 void set_wordWrap(bool value) ;

/// @brief Method set_clipping addr 0x2b9493c size 0x44 virtual false final false
 void set_clipping(UnityEngine::TextClipping value) ;

/// @brief Method get_fixedWidth addr 0x2b9402c size 0x3c virtual false final false
 float_t get_fixedWidth() ;

/// @brief Method get_fixedHeight addr 0x2b94210 size 0x3c virtual false final false
 float_t get_fixedHeight() ;

/// @brief Method get_stretchWidth addr 0x2b94980 size 0x3c virtual false final false
 bool get_stretchWidth() ;

/// @brief Method get_stretchHeight addr 0x2b949bc size 0x3c virtual false final false
 bool get_stretchHeight() ;

/// @brief Method set_stretchHeight addr 0x2b949f8 size 0x44 virtual false final false
 void set_stretchHeight(bool value) ;

/// @brief Method set_fontSize addr 0x2b94a3c size 0x44 virtual false final false
 void set_fontSize(int32_t value) ;

/// @brief Method set_fontStyle addr 0x2b94a80 size 0x44 virtual false final false
 void set_fontStyle(UnityEngine::FontStyle value) ;

/// @brief Method set_richText addr 0x2b94ac4 size 0x44 virtual false final false
 void set_richText(bool value) ;

/// @brief Method Internal_Create addr 0x2b94b08 size 0x3c virtual false final false
static ::cordl_internals::intptr_t Internal_Create(UnityEngine::GUIStyle self) ;

/// @brief Method Internal_Copy addr 0x2b94b44 size 0x44 virtual false final false
static ::cordl_internals::intptr_t Internal_Copy(UnityEngine::GUIStyle self, UnityEngine::GUIStyle other) ;

/// @brief Method Internal_Destroy addr 0x2b94b88 size 0x3c virtual false final false
static void Internal_Destroy(::cordl_internals::intptr_t self) ;

/// @brief Method GetStyleStatePtr addr 0x2b94bc4 size 0x44 virtual false final false
 ::cordl_internals::intptr_t GetStyleStatePtr(int32_t idx) ;

/// @brief Method GetRectOffsetPtr addr 0x2b94c08 size 0x44 virtual false final false
 ::cordl_internals::intptr_t GetRectOffsetPtr(int32_t idx) ;

/// @brief Method Internal_GetLineHeight addr 0x2b94c4c size 0x3c virtual false final false
static float_t Internal_GetLineHeight(::cordl_internals::intptr_t target) ;

/// @brief Method Internal_Draw addr 0x2b94c88 size 0x8c virtual false final false
 void Internal_Draw(UnityEngine::Rect screenRect, UnityEngine::GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus) ;

/// @brief Method Internal_Draw2 addr 0x2b94d98 size 0x74 virtual false final false
 void Internal_Draw2(UnityEngine::Rect position, UnityEngine::GUIContent content, int32_t controlID, bool on) ;

/// @brief Method Internal_GetCursorPixelPosition addr 0x2b94e78 size 0x74 virtual false final false
 UnityEngine::Vector2 Internal_GetCursorPixelPosition(UnityEngine::Rect position, UnityEngine::GUIContent content, int32_t cursorStringIndex) ;

/// @brief Method Internal_GetCursorStringIndex addr 0x2b94f58 size 0x64 virtual false final false
 int32_t Internal_GetCursorStringIndex(UnityEngine::Rect position, UnityEngine::GUIContent content, UnityEngine::Vector2 cursorPixelPosition) ;

/// @brief Method Internal_GetSelectedRenderedText addr 0x2b95018 size 0x74 virtual false final false
 ::StringW Internal_GetSelectedRenderedText(UnityEngine::Rect localPosition, UnityEngine::GUIContent mContent, int32_t selectIndex, int32_t cursorIndex) ;

/// @brief Method Internal_CalcSize addr 0x2b950f8 size 0x5c virtual false final false
 UnityEngine::Vector2 Internal_CalcSize(UnityEngine::GUIContent content) ;

/// @brief Method Internal_CalcSizeWithConstraints addr 0x2b951a8 size 0x64 virtual false final false
 UnityEngine::Vector2 Internal_CalcSizeWithConstraints(UnityEngine::GUIContent content, UnityEngine::Vector2 maxSize) ;

/// @brief Method Internal_CalcHeight addr 0x2b95268 size 0x54 virtual false final false
 float_t Internal_CalcHeight(UnityEngine::GUIContent content, float_t width) ;

/// @brief Method Internal_CalcMinMaxWidth addr 0x2b952bc size 0x5c virtual false final false
 UnityEngine::Vector2 Internal_CalcMinMaxWidth(UnityEngine::GUIContent content) ;

/// @brief Method SetMouseTooltip addr 0x2b9536c size 0x8c virtual false final false
static void SetMouseTooltip(::StringW tooltip, UnityEngine::Rect screenRect) ;

/// @brief Method IsTooltipActive addr 0x2b9543c size 0x3c virtual false final false
static bool IsTooltipActive(::StringW tooltip) ;

/// @brief Method SetDefaultFont addr 0x2b95478 size 0x3c virtual false final false
static void SetDefaultFont(UnityEngine::Font font) ;

// Ctor Parameters []
explicit GUIStyle() ;

/// @brief Method .ctor addr 0x2b954b4 size 0x88 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "other", ty: "UnityEngine::GUIStyle", modifiers: "", def_value: None }]
explicit GUIStyle(UnityEngine::GUIStyle other) ;

/// @brief Method .ctor addr 0x2b9553c size 0xe4 virtual false final false
 void _ctor(UnityEngine::GUIStyle other) ;

/// @brief Method Finalize addr 0x2b95620 size 0x144 virtual true final false
 void Finalize() ;

/// @brief Method get_name addr 0x2b95764 size 0x4c virtual false final false
 ::StringW get_name() ;

/// @brief Method set_name addr 0x2b957b0 size 0x48 virtual false final false
 void set_name(::StringW value) ;

/// @brief Method get_normal addr 0x2b957f8 size 0x5c virtual false final false
 UnityEngine::GUIStyleState get_normal() ;

/// @brief Method get_border addr 0x2b95854 size 0xa8 virtual false final false
 UnityEngine::RectOffset get_border() ;

/// @brief Method get_margin addr 0x2b94068 size 0xa8 virtual false final false
 UnityEngine::RectOffset get_margin() ;

/// @brief Method get_padding addr 0x2b958fc size 0xa8 virtual false final false
 UnityEngine::RectOffset get_padding() ;

/// @brief Method get_lineHeight addr 0x2b959a4 size 0xfc virtual false final false
 float_t get_lineHeight() ;

/// @brief Method Draw addr 0x2b95aa0 size 0x14 virtual false final false
 void Draw(UnityEngine::Rect position, UnityEngine::GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus) ;

/// @brief Method Draw addr 0x2b95ad8 size 0xa0 virtual false final false
 void Draw(UnityEngine::Rect position, UnityEngine::GUIContent content, int32_t controlID, bool on, bool hover) ;

/// @brief Method Draw addr 0x2b95ab4 size 0x24 virtual false final false
 void Draw(UnityEngine::Rect position, UnityEngine::GUIContent content, int32_t controlId, bool isHover, bool isActive, bool on, bool hasKeyboardFocus) ;

/// @brief Method get_none addr 0x2b95b78 size 0x90 virtual false final false
static UnityEngine::GUIStyle get_none() ;

/// @brief Method GetCursorPixelPosition addr 0x2b95c08 size 0x4 virtual false final false
 UnityEngine::Vector2 GetCursorPixelPosition(UnityEngine::Rect position, UnityEngine::GUIContent content, int32_t cursorStringIndex) ;

/// @brief Method GetCursorStringIndex addr 0x2b95c0c size 0x4 virtual false final false
 int32_t GetCursorStringIndex(UnityEngine::Rect position, UnityEngine::GUIContent content, UnityEngine::Vector2 cursorPixelPosition) ;

/// @brief Method CalcSize addr 0x2b95c10 size 0x4 virtual false final false
 UnityEngine::Vector2 CalcSize(UnityEngine::GUIContent content) ;

/// @brief Method CalcSizeWithConstraints addr 0x2b95c14 size 0x4 virtual false final false
 UnityEngine::Vector2 CalcSizeWithConstraints(UnityEngine::GUIContent content, UnityEngine::Vector2 constraints) ;

/// @brief Method CalcHeight addr 0x2b95c18 size 0x54 virtual false final false
 float_t CalcHeight(UnityEngine::GUIContent content, float_t width) ;

/// @brief Method get_isHeightDependantOnWidth addr 0x2b95c6c size 0xac virtual false final false
 bool get_isHeightDependantOnWidth() ;

/// @brief Method CalcMinMaxWidth addr 0x2b95d18 size 0x28 virtual false final false
 void CalcMinMaxWidth(UnityEngine::GUIContent content, ByRef<float_t> minWidth, ByRef<float_t> maxWidth) ;

/// @brief Method ToString addr 0x2b95d40 size 0xe4 virtual true final false
 ::StringW ToString() ;

/// @brief Method Internal_Draw_Injected addr 0x2b94d14 size 0x84 virtual false final false
 void Internal_Draw_Injected(ByRef<UnityEngine::Rect> screenRect, UnityEngine::GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus) ;

/// @brief Method Internal_Draw2_Injected addr 0x2b94e0c size 0x6c virtual false final false
 void Internal_Draw2_Injected(ByRef<UnityEngine::Rect> position, UnityEngine::GUIContent content, int32_t controlID, bool on) ;

/// @brief Method Internal_GetCursorPixelPosition_Injected addr 0x2b94eec size 0x6c virtual false final false
 void Internal_GetCursorPixelPosition_Injected(ByRef<UnityEngine::Rect> position, UnityEngine::GUIContent content, int32_t cursorStringIndex, ByRef<UnityEngine::Vector2> ret) ;

/// @brief Method Internal_GetCursorStringIndex_Injected addr 0x2b94fbc size 0x5c virtual false final false
 int32_t Internal_GetCursorStringIndex_Injected(ByRef<UnityEngine::Rect> position, UnityEngine::GUIContent content, ByRef<UnityEngine::Vector2> cursorPixelPosition) ;

/// @brief Method Internal_GetSelectedRenderedText_Injected addr 0x2b9508c size 0x6c virtual false final false
 ::StringW Internal_GetSelectedRenderedText_Injected(ByRef<UnityEngine::Rect> localPosition, UnityEngine::GUIContent mContent, int32_t selectIndex, int32_t cursorIndex) ;

/// @brief Method Internal_CalcSize_Injected addr 0x2b95154 size 0x54 virtual false final false
 void Internal_CalcSize_Injected(UnityEngine::GUIContent content, ByRef<UnityEngine::Vector2> ret) ;

/// @brief Method Internal_CalcSizeWithConstraints_Injected addr 0x2b9520c size 0x5c virtual false final false
 void Internal_CalcSizeWithConstraints_Injected(UnityEngine::GUIContent content, ByRef<UnityEngine::Vector2> maxSize, ByRef<UnityEngine::Vector2> ret) ;

/// @brief Method Internal_CalcMinMaxWidth_Injected addr 0x2b95318 size 0x54 virtual false final false
 void Internal_CalcMinMaxWidth_Injected(UnityEngine::GUIContent content, ByRef<UnityEngine::Vector2> ret) ;

/// @brief Method SetMouseTooltip_Injected addr 0x2b953f8 size 0x44 virtual false final false
static void SetMouseTooltip_Injected(::StringW tooltip, ByRef<UnityEngine::Rect> screenRect) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::GUIStyle);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUIStyle, "UnityEngine", "GUIStyle");
