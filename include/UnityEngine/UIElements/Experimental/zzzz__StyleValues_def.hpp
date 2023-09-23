#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements {
class StyleValueCollection;
}
// Forward declare root types
namespace UnityEngine::UIElements::Experimental {
struct StyleValues;
}
// Type: UnityEngine.UIElements.Experimental::StyleValues
namespace UnityEngine::UIElements::Experimental {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7554))
// CS Name: UnityEngine.UIElements.Experimental.StyleValues
struct CORDL_TYPE StyleValues : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_StyleValues", ty: "UnityEngine::UIElements::StyleValueCollection", modifiers: "", def_value: None }]
constexpr StyleValues(UnityEngine::UIElements::StyleValueCollection m_StyleValues) noexcept;


                    constexpr StyleValues(StyleValues const&) = default;
                    constexpr StyleValues(StyleValues&&) = default;
                    constexpr StyleValues& operator=(StyleValues const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleValues& operator=(StyleValues&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleValues(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::StyleValueCollection __declspec(property(get=__get_m_StyleValues, put=__set_m_StyleValues))  m_StyleValues;

constexpr void __set_m_StyleValues(UnityEngine::UIElements::StyleValueCollection value) ;

constexpr UnityEngine::UIElements::StyleValueCollection __get_m_StyleValues() const;


// Properties

 float_t __declspec(property(put=set_top))  top;

 float_t __declspec(property(put=set_left))  left;

 float_t __declspec(property(put=set_width))  width;

 float_t __declspec(property(put=set_height))  height;

 float_t __declspec(property(put=set_right))  right;

 float_t __declspec(property(put=set_bottom))  bottom;

 UnityEngine::Color __declspec(property(put=set_color))  color;

 UnityEngine::Color __declspec(property(put=set_backgroundColor))  backgroundColor;

 UnityEngine::Color __declspec(property(put=set_unityBackgroundImageTintColor))  unityBackgroundImageTintColor;

 UnityEngine::Color __declspec(property(put=set_borderColor))  borderColor;

 float_t __declspec(property(put=set_marginLeft))  marginLeft;

 float_t __declspec(property(put=set_marginTop))  marginTop;

 float_t __declspec(property(put=set_marginRight))  marginRight;

 float_t __declspec(property(put=set_marginBottom))  marginBottom;

 float_t __declspec(property(put=set_paddingLeft))  paddingLeft;

 float_t __declspec(property(get=get_paddingTop, put=set_paddingTop))  paddingTop;

 float_t __declspec(property(put=set_paddingRight))  paddingRight;

 float_t __declspec(property(put=set_paddingBottom))  paddingBottom;

 float_t __declspec(property(put=set_borderLeftWidth))  borderLeftWidth;

 float_t __declspec(property(put=set_borderRightWidth))  borderRightWidth;

 float_t __declspec(property(put=set_borderTopWidth))  borderTopWidth;

 float_t __declspec(property(put=set_borderBottomWidth))  borderBottomWidth;

 float_t __declspec(property(put=set_borderTopLeftRadius))  borderTopLeftRadius;

 float_t __declspec(property(put=set_borderTopRightRadius))  borderTopRightRadius;

 float_t __declspec(property(put=set_borderBottomLeftRadius))  borderBottomLeftRadius;

 float_t __declspec(property(put=set_borderBottomRightRadius))  borderBottomRightRadius;

 float_t __declspec(property(put=set_opacity))  opacity;

 float_t __declspec(property(put=set_flexGrow))  flexGrow;

 float_t __declspec(property(put=set_flexShrink))  flexShrink;


// Methods

/// @brief Method set_top addr 0x2c6aad4 size 0xc virtual false final false
 void set_top(float_t value) ;

/// @brief Method set_left addr 0x2c6ab64 size 0xc virtual false final false
 void set_left(float_t value) ;

/// @brief Method set_width addr 0x2c6ab70 size 0xc virtual false final false
 void set_width(float_t value) ;

/// @brief Method set_height addr 0x2c6ab7c size 0xc virtual false final false
 void set_height(float_t value) ;

/// @brief Method set_right addr 0x2c6ab88 size 0xc virtual false final false
 void set_right(float_t value) ;

/// @brief Method set_bottom addr 0x2c6ab94 size 0xc virtual false final false
 void set_bottom(float_t value) ;

/// @brief Method set_color addr 0x2c6aba0 size 0x8 virtual false final false
 void set_color(UnityEngine::Color value) ;

/// @brief Method set_backgroundColor addr 0x2c6ac2c size 0x8 virtual false final false
 void set_backgroundColor(UnityEngine::Color value) ;

/// @brief Method set_unityBackgroundImageTintColor addr 0x2c6ac34 size 0xc virtual false final false
 void set_unityBackgroundImageTintColor(UnityEngine::Color value) ;

/// @brief Method set_borderColor addr 0x2c6ac40 size 0xc virtual false final false
 void set_borderColor(UnityEngine::Color value) ;

/// @brief Method set_marginLeft addr 0x2c6ac4c size 0xc virtual false final false
 void set_marginLeft(float_t value) ;

/// @brief Method set_marginTop addr 0x2c6ac58 size 0xc virtual false final false
 void set_marginTop(float_t value) ;

/// @brief Method set_marginRight addr 0x2c6ac64 size 0xc virtual false final false
 void set_marginRight(float_t value) ;

/// @brief Method set_marginBottom addr 0x2c6ac70 size 0xc virtual false final false
 void set_marginBottom(float_t value) ;

/// @brief Method set_paddingLeft addr 0x2c6ac7c size 0xc virtual false final false
 void set_paddingLeft(float_t value) ;

/// @brief Method get_paddingTop addr 0x2c6ac88 size 0x3c virtual false final false
 float_t get_paddingTop() ;

/// @brief Method set_paddingTop addr 0x2c6ad30 size 0xc virtual false final false
 void set_paddingTop(float_t value) ;

/// @brief Method set_paddingRight addr 0x2c6ad3c size 0xc virtual false final false
 void set_paddingRight(float_t value) ;

/// @brief Method set_paddingBottom addr 0x2c6ad48 size 0xc virtual false final false
 void set_paddingBottom(float_t value) ;

/// @brief Method set_borderLeftWidth addr 0x2c6ad54 size 0xc virtual false final false
 void set_borderLeftWidth(float_t value) ;

/// @brief Method set_borderRightWidth addr 0x2c6ad60 size 0xc virtual false final false
 void set_borderRightWidth(float_t value) ;

/// @brief Method set_borderTopWidth addr 0x2c6ad6c size 0xc virtual false final false
 void set_borderTopWidth(float_t value) ;

/// @brief Method set_borderBottomWidth addr 0x2c6ad78 size 0xc virtual false final false
 void set_borderBottomWidth(float_t value) ;

/// @brief Method set_borderTopLeftRadius addr 0x2c6ad84 size 0xc virtual false final false
 void set_borderTopLeftRadius(float_t value) ;

/// @brief Method set_borderTopRightRadius addr 0x2c6ad90 size 0xc virtual false final false
 void set_borderTopRightRadius(float_t value) ;

/// @brief Method set_borderBottomLeftRadius addr 0x2c6ad9c size 0xc virtual false final false
 void set_borderBottomLeftRadius(float_t value) ;

/// @brief Method set_borderBottomRightRadius addr 0x2c6ada8 size 0xc virtual false final false
 void set_borderBottomRightRadius(float_t value) ;

/// @brief Method set_opacity addr 0x2c6adb4 size 0xc virtual false final false
 void set_opacity(float_t value) ;

/// @brief Method set_flexGrow addr 0x2c6adc0 size 0xc virtual false final false
 void set_flexGrow(float_t value) ;

/// @brief Method set_flexShrink addr 0x2c6adcc size 0xc virtual false final false
 void set_flexShrink(float_t value) ;

/// @brief Method SetValue addr 0x2c6aae0 size 0x84 virtual false final false
 void SetValue(UnityEngine::UIElements::StyleSheets::StylePropertyId id, float_t value) ;

/// @brief Method SetValue addr 0x2c6aba8 size 0x84 virtual false final false
 void SetValue(UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::Color value) ;

/// @brief Method Values addr 0x2c6acc4 size 0x6c virtual false final false
 UnityEngine::UIElements::StyleValueCollection Values() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::Experimental
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::Experimental::StyleValues, "UnityEngine.UIElements.Experimental", "StyleValues");
