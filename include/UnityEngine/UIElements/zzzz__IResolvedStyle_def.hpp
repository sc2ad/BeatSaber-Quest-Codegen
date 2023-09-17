#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
struct Visibility;
}
namespace UnityEngine::UIElements {
struct StyleFloat;
}
namespace UnityEngine::UIElements {
struct WhiteSpace;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements {
struct DisplayStyle;
}
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IResolvedStyle;
}
// Type: UnityEngine.UIElements::IResolvedStyle
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7463))
// CS Name: UnityEngine.UIElements.IResolvedStyle
class CORDL_TYPE IResolvedStyle : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IResolvedStyle() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IResolvedStyle(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::UnityEngine::Color __declspec(property(get=get_backgroundColor))  backgroundColor;

 ::UnityEngine::Color __declspec(property(get=get_borderBottomColor))  borderBottomColor;

 float_t __declspec(property(get=get_borderBottomLeftRadius))  borderBottomLeftRadius;

 float_t __declspec(property(get=get_borderBottomRightRadius))  borderBottomRightRadius;

 float_t __declspec(property(get=get_borderBottomWidth))  borderBottomWidth;

 ::UnityEngine::Color __declspec(property(get=get_borderLeftColor))  borderLeftColor;

 float_t __declspec(property(get=get_borderLeftWidth))  borderLeftWidth;

 ::UnityEngine::Color __declspec(property(get=get_borderRightColor))  borderRightColor;

 float_t __declspec(property(get=get_borderRightWidth))  borderRightWidth;

 ::UnityEngine::Color __declspec(property(get=get_borderTopColor))  borderTopColor;

 float_t __declspec(property(get=get_borderTopLeftRadius))  borderTopLeftRadius;

 float_t __declspec(property(get=get_borderTopRightRadius))  borderTopRightRadius;

 float_t __declspec(property(get=get_borderTopWidth))  borderTopWidth;

 float_t __declspec(property(get=get_bottom))  bottom;

 ::UnityEngine::Color __declspec(property(get=get_color))  color;

 ::UnityEngine::UIElements::DisplayStyle __declspec(property(get=get_display))  display;

 float_t __declspec(property(get=get_flexGrow))  flexGrow;

 float_t __declspec(property(get=get_flexShrink))  flexShrink;

 float_t __declspec(property(get=get_height))  height;

 float_t __declspec(property(get=get_left))  left;

 float_t __declspec(property(get=get_marginBottom))  marginBottom;

 float_t __declspec(property(get=get_marginLeft))  marginLeft;

 float_t __declspec(property(get=get_marginRight))  marginRight;

 float_t __declspec(property(get=get_marginTop))  marginTop;

 ::UnityEngine::UIElements::StyleFloat __declspec(property(get=get_minHeight))  minHeight;

 ::UnityEngine::UIElements::StyleFloat __declspec(property(get=get_minWidth))  minWidth;

 float_t __declspec(property(get=get_opacity))  opacity;

 float_t __declspec(property(get=get_paddingBottom))  paddingBottom;

 float_t __declspec(property(get=get_paddingLeft))  paddingLeft;

 float_t __declspec(property(get=get_paddingRight))  paddingRight;

 float_t __declspec(property(get=get_paddingTop))  paddingTop;

 float_t __declspec(property(get=get_right))  right;

 ::UnityEngine::UIElements::Scale __declspec(property(get=get_scale))  scale;

 float_t __declspec(property(get=get_top))  top;

 ::UnityEngine::Vector3 __declspec(property(get=get_transformOrigin))  transformOrigin;

 ::UnityEngine::Vector3 __declspec(property(get=get_translate))  translate;

 ::UnityEngine::Color __declspec(property(get=get_unityBackgroundImageTintColor))  unityBackgroundImageTintColor;

 int32_t __declspec(property(get=get_unitySliceLeft))  unitySliceLeft;

 int32_t __declspec(property(get=get_unitySliceRight))  unitySliceRight;

 ::UnityEngine::Color __declspec(property(get=get_unityTextOutlineColor))  unityTextOutlineColor;

 float_t __declspec(property(get=get_unityTextOutlineWidth))  unityTextOutlineWidth;

 ::UnityEngine::UIElements::Visibility __declspec(property(get=get_visibility))  visibility;

 ::UnityEngine::UIElements::WhiteSpace __declspec(property(get=get_whiteSpace))  whiteSpace;

 float_t __declspec(property(get=get_width))  width;


// Methods

/// @brief Method get_backgroundColor addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Color get_backgroundColor() ;

/// @brief Method get_borderBottomColor addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Color get_borderBottomColor() ;

/// @brief Method get_borderBottomLeftRadius addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_borderBottomLeftRadius() ;

/// @brief Method get_borderBottomRightRadius addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_borderBottomRightRadius() ;

/// @brief Method get_borderBottomWidth addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_borderBottomWidth() ;

/// @brief Method get_borderLeftColor addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Color get_borderLeftColor() ;

/// @brief Method get_borderLeftWidth addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_borderLeftWidth() ;

/// @brief Method get_borderRightColor addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Color get_borderRightColor() ;

/// @brief Method get_borderRightWidth addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_borderRightWidth() ;

/// @brief Method get_borderTopColor addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Color get_borderTopColor() ;

/// @brief Method get_borderTopLeftRadius addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_borderTopLeftRadius() ;

/// @brief Method get_borderTopRightRadius addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_borderTopRightRadius() ;

/// @brief Method get_borderTopWidth addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_borderTopWidth() ;

/// @brief Method get_bottom addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_bottom() ;

/// @brief Method get_color addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Color get_color() ;

/// @brief Method get_display addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::DisplayStyle get_display() ;

/// @brief Method get_flexGrow addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_flexGrow() ;

/// @brief Method get_flexShrink addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_flexShrink() ;

/// @brief Method get_height addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_height() ;

/// @brief Method get_left addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_left() ;

/// @brief Method get_marginBottom addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_marginBottom() ;

/// @brief Method get_marginLeft addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_marginLeft() ;

/// @brief Method get_marginRight addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_marginRight() ;

/// @brief Method get_marginTop addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_marginTop() ;

/// @brief Method get_minHeight addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::StyleFloat get_minHeight() ;

/// @brief Method get_minWidth addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::StyleFloat get_minWidth() ;

/// @brief Method get_opacity addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_opacity() ;

/// @brief Method get_paddingBottom addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_paddingBottom() ;

/// @brief Method get_paddingLeft addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_paddingLeft() ;

/// @brief Method get_paddingRight addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_paddingRight() ;

/// @brief Method get_paddingTop addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_paddingTop() ;

/// @brief Method get_right addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_right() ;

/// @brief Method get_scale addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::Scale get_scale() ;

/// @brief Method get_top addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_top() ;

/// @brief Method get_transformOrigin addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Vector3 get_transformOrigin() ;

/// @brief Method get_translate addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Vector3 get_translate() ;

/// @brief Method get_unityBackgroundImageTintColor addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Color get_unityBackgroundImageTintColor() ;

/// @brief Method get_unitySliceLeft addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_unitySliceLeft() ;

/// @brief Method get_unitySliceRight addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_unitySliceRight() ;

/// @brief Method get_unityTextOutlineColor addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Color get_unityTextOutlineColor() ;

/// @brief Method get_unityTextOutlineWidth addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_unityTextOutlineWidth() ;

/// @brief Method get_visibility addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::Visibility get_visibility() ;

/// @brief Method get_whiteSpace addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::WhiteSpace get_whiteSpace() ;

/// @brief Method get_width addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_width() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::IResolvedStyle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IResolvedStyle, "UnityEngine.UIElements", "IResolvedStyle");
