#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::UIElements {
struct StyleTextShadow;
}
namespace UnityEngine::UIElements {
struct StyleRotate;
}
namespace UnityEngine::UIElements {
struct Justify;
}
namespace UnityEngine::UIElements {
template<typename T>
struct StyleEnum_1;
}
namespace UnityEngine::UIElements {
struct Position;
}
namespace UnityEngine::UIElements {
struct DisplayStyle;
}
namespace UnityEngine::UIElements {
struct StyleScale;
}
namespace UnityEngine::UIElements {
struct StyleLength;
}
namespace UnityEngine::UIElements {
struct Visibility;
}
namespace UnityEngine::UIElements {
struct StyleTransformOrigin;
}
namespace UnityEngine::UIElements {
struct FlexDirection;
}
namespace UnityEngine::UIElements {
struct StyleFloat;
}
namespace UnityEngine::UIElements {
struct StyleColor;
}
namespace UnityEngine::UIElements {
struct StyleCursor;
}
namespace UnityEngine::UIElements {
struct StyleTranslate;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IStyle;
}
// Type: UnityEngine.UIElements::IStyle
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7462))
// CS Name: UnityEngine.UIElements.IStyle
class CORDL_TYPE IStyle : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IStyle() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IStyle(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 UnityEngine::UIElements::StyleColor __declspec(property(put=set_backgroundColor))  backgroundColor;

 UnityEngine::UIElements::StyleColor __declspec(property(put=set_borderBottomColor))  borderBottomColor;

 UnityEngine::UIElements::StyleLength __declspec(property(put=set_borderBottomLeftRadius))  borderBottomLeftRadius;

 UnityEngine::UIElements::StyleLength __declspec(property(put=set_borderBottomRightRadius))  borderBottomRightRadius;

 UnityEngine::UIElements::StyleFloat __declspec(property(put=set_borderBottomWidth))  borderBottomWidth;

 UnityEngine::UIElements::StyleColor __declspec(property(put=set_borderLeftColor))  borderLeftColor;

 UnityEngine::UIElements::StyleFloat __declspec(property(put=set_borderLeftWidth))  borderLeftWidth;

 UnityEngine::UIElements::StyleColor __declspec(property(put=set_borderRightColor))  borderRightColor;

 UnityEngine::UIElements::StyleFloat __declspec(property(put=set_borderRightWidth))  borderRightWidth;

 UnityEngine::UIElements::StyleColor __declspec(property(put=set_borderTopColor))  borderTopColor;

 UnityEngine::UIElements::StyleLength __declspec(property(put=set_borderTopLeftRadius))  borderTopLeftRadius;

 UnityEngine::UIElements::StyleLength __declspec(property(put=set_borderTopRightRadius))  borderTopRightRadius;

 UnityEngine::UIElements::StyleFloat __declspec(property(put=set_borderTopWidth))  borderTopWidth;

 UnityEngine::UIElements::StyleLength __declspec(property(put=set_bottom))  bottom;

 UnityEngine::UIElements::StyleColor __declspec(property(put=set_color))  color;

 UnityEngine::UIElements::StyleCursor __declspec(property(get=get_cursor))  cursor;

 UnityEngine::UIElements::StyleEnum_1<UnityEngine::UIElements::DisplayStyle> __declspec(property(get=get_display, put=set_display))  display;

 UnityEngine::UIElements::StyleLength __declspec(property(put=set_flexBasis))  flexBasis;

 UnityEngine::UIElements::StyleEnum_1<UnityEngine::UIElements::FlexDirection> __declspec(property(put=set_flexDirection))  flexDirection;

 UnityEngine::UIElements::StyleFloat __declspec(property(put=set_flexGrow))  flexGrow;

 UnityEngine::UIElements::StyleFloat __declspec(property(put=set_flexShrink))  flexShrink;

 UnityEngine::UIElements::StyleLength __declspec(property(put=set_fontSize))  fontSize;

 UnityEngine::UIElements::StyleLength __declspec(property(get=get_height, put=set_height))  height;

 UnityEngine::UIElements::StyleEnum_1<UnityEngine::UIElements::Justify> __declspec(property(put=set_justifyContent))  justifyContent;

 UnityEngine::UIElements::StyleLength __declspec(property(put=set_left))  left;

 UnityEngine::UIElements::StyleLength __declspec(property(put=set_marginBottom))  marginBottom;

 UnityEngine::UIElements::StyleLength __declspec(property(put=set_marginLeft))  marginLeft;

 UnityEngine::UIElements::StyleLength __declspec(property(put=set_marginRight))  marginRight;

 UnityEngine::UIElements::StyleLength __declspec(property(put=set_marginTop))  marginTop;

 UnityEngine::UIElements::StyleLength __declspec(property(put=set_maxWidth))  maxWidth;

 UnityEngine::UIElements::StyleLength __declspec(property(put=set_minWidth))  minWidth;

 UnityEngine::UIElements::StyleFloat __declspec(property(put=set_opacity))  opacity;

 UnityEngine::UIElements::StyleLength __declspec(property(put=set_paddingBottom))  paddingBottom;

 UnityEngine::UIElements::StyleLength __declspec(property(put=set_paddingLeft))  paddingLeft;

 UnityEngine::UIElements::StyleLength __declspec(property(put=set_paddingRight))  paddingRight;

 UnityEngine::UIElements::StyleLength __declspec(property(get=get_paddingTop, put=set_paddingTop))  paddingTop;

 UnityEngine::UIElements::StyleEnum_1<UnityEngine::UIElements::Position> __declspec(property(put=set_position))  position;

 UnityEngine::UIElements::StyleLength __declspec(property(put=set_right))  right;

 UnityEngine::UIElements::StyleRotate __declspec(property(get=get_rotate))  rotate;

 UnityEngine::UIElements::StyleScale __declspec(property(get=get_scale))  scale;

 UnityEngine::UIElements::StyleTextShadow __declspec(property(get=get_textShadow))  textShadow;

 UnityEngine::UIElements::StyleLength __declspec(property(put=set_top))  top;

 UnityEngine::UIElements::StyleTransformOrigin __declspec(property(get=get_transformOrigin))  transformOrigin;

 UnityEngine::UIElements::StyleTranslate __declspec(property(get=get_translate, put=set_translate))  translate;

 UnityEngine::UIElements::StyleColor __declspec(property(put=set_unityBackgroundImageTintColor))  unityBackgroundImageTintColor;

 UnityEngine::UIElements::StyleEnum_1<UnityEngine::UIElements::Visibility> __declspec(property(put=set_visibility))  visibility;

 UnityEngine::UIElements::StyleLength __declspec(property(get=get_width, put=set_width))  width;


// Methods

/// @brief Method set_backgroundColor addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_backgroundColor(UnityEngine::UIElements::StyleColor value) ;

/// @brief Method set_borderBottomColor addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_borderBottomColor(UnityEngine::UIElements::StyleColor value) ;

/// @brief Method set_borderBottomLeftRadius addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_borderBottomLeftRadius(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method set_borderBottomRightRadius addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_borderBottomRightRadius(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method set_borderBottomWidth addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_borderBottomWidth(UnityEngine::UIElements::StyleFloat value) ;

/// @brief Method set_borderLeftColor addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_borderLeftColor(UnityEngine::UIElements::StyleColor value) ;

/// @brief Method set_borderLeftWidth addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_borderLeftWidth(UnityEngine::UIElements::StyleFloat value) ;

/// @brief Method set_borderRightColor addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_borderRightColor(UnityEngine::UIElements::StyleColor value) ;

/// @brief Method set_borderRightWidth addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_borderRightWidth(UnityEngine::UIElements::StyleFloat value) ;

/// @brief Method set_borderTopColor addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_borderTopColor(UnityEngine::UIElements::StyleColor value) ;

/// @brief Method set_borderTopLeftRadius addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_borderTopLeftRadius(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method set_borderTopRightRadius addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_borderTopRightRadius(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method set_borderTopWidth addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_borderTopWidth(UnityEngine::UIElements::StyleFloat value) ;

/// @brief Method set_bottom addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_bottom(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method set_color addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_color(UnityEngine::UIElements::StyleColor value) ;

/// @brief Method get_cursor addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::StyleCursor get_cursor() ;

/// @brief Method get_display addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::StyleEnum_1<UnityEngine::UIElements::DisplayStyle> get_display() ;

/// @brief Method set_display addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_display(UnityEngine::UIElements::StyleEnum_1<UnityEngine::UIElements::DisplayStyle> value) ;

/// @brief Method set_flexBasis addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_flexBasis(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method set_flexDirection addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_flexDirection(UnityEngine::UIElements::StyleEnum_1<UnityEngine::UIElements::FlexDirection> value) ;

/// @brief Method set_flexGrow addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_flexGrow(UnityEngine::UIElements::StyleFloat value) ;

/// @brief Method set_flexShrink addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_flexShrink(UnityEngine::UIElements::StyleFloat value) ;

/// @brief Method set_fontSize addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_fontSize(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method get_height addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::StyleLength get_height() ;

/// @brief Method set_height addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_height(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method set_justifyContent addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_justifyContent(UnityEngine::UIElements::StyleEnum_1<UnityEngine::UIElements::Justify> value) ;

/// @brief Method set_left addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_left(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method set_marginBottom addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_marginBottom(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method set_marginLeft addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_marginLeft(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method set_marginRight addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_marginRight(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method set_marginTop addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_marginTop(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method set_maxWidth addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_maxWidth(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method set_minWidth addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_minWidth(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method set_opacity addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_opacity(UnityEngine::UIElements::StyleFloat value) ;

/// @brief Method set_paddingBottom addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_paddingBottom(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method set_paddingLeft addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_paddingLeft(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method set_paddingRight addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_paddingRight(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method get_paddingTop addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::StyleLength get_paddingTop() ;

/// @brief Method set_paddingTop addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_paddingTop(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method set_position addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_position(UnityEngine::UIElements::StyleEnum_1<UnityEngine::UIElements::Position> value) ;

/// @brief Method set_right addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_right(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method get_rotate addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::StyleRotate get_rotate() ;

/// @brief Method get_scale addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::StyleScale get_scale() ;

/// @brief Method get_textShadow addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::StyleTextShadow get_textShadow() ;

/// @brief Method set_top addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_top(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method get_transformOrigin addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::StyleTransformOrigin get_transformOrigin() ;

/// @brief Method get_translate addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::StyleTranslate get_translate() ;

/// @brief Method set_translate addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_translate(UnityEngine::UIElements::StyleTranslate value) ;

/// @brief Method set_unityBackgroundImageTintColor addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_unityBackgroundImageTintColor(UnityEngine::UIElements::StyleColor value) ;

/// @brief Method set_visibility addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_visibility(UnityEngine::UIElements::StyleEnum_1<UnityEngine::UIElements::Visibility> value) ;

/// @brief Method get_width addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::StyleLength get_width() ;

/// @brief Method set_width addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_width(UnityEngine::UIElements::StyleLength value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::IStyle);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::IStyle, "UnityEngine.UIElements", "IStyle");
