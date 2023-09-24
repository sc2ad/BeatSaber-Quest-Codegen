#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements {
struct FlexDirection;
}
namespace UnityEngine::UIElements {
struct TransformData;
}
namespace UnityEngine::UIElements {
struct TextOverflow;
}
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StyleValueManaged;
}
namespace UnityEngine::UIElements {
struct Translate;
}
namespace UnityEngine::UIElements {
struct OverflowClipBox;
}
namespace UnityEngine::UIElements {
struct VisualData;
}
namespace UnityEngine::UIElements {
struct Cursor;
}
namespace UnityEngine::UIElements {
struct DisplayStyle;
}
namespace UnityEngine::UIElements {
struct TransitionData;
}
namespace UnityEngine::UIElements {
struct Wrap;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct OverflowInternal;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::UIElements {
struct Rotate;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine::UIElements {
struct TextOverflowPosition;
}
namespace UnityEngine::UIElements {
template<typename T>
struct StyleDataRef_1;
}
namespace UnityEngine::UIElements {
struct StyleTranslate;
}
namespace UnityEngine::UIElements {
struct RareData;
}
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyReader;
}
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine::UIElements {
struct LayoutData;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
struct Background;
}
namespace UnityEngine::UIElements {
struct Align;
}
namespace UnityEngine::UIElements {
struct ComputedTransitionProperty;
}
namespace UnityEngine::Yoga {
class YogaNode;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyValue;
}
namespace UnityEngine::UIElements {
struct TextShadow;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
namespace UnityEngine {
struct ScaleMode;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
struct TimeValue;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements {
struct Justify;
}
namespace UnityEngine::UIElements {
struct Visibility;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct EasingFunction;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StyleValue;
}
namespace UnityEngine::UIElements {
struct Position;
}
namespace UnityEngine::UIElements {
struct InheritedData;
}
namespace UnityEngine::UIElements {
struct WhiteSpace;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct ComputedStyle;
}
// Type: UnityEngine.UIElements::ComputedStyle
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7395))
// CS Name: UnityEngine.UIElements.ComputedStyle
struct CORDL_TYPE ComputedStyle : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "inheritedData", ty: "UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::InheritedData>", modifiers: "", def_value: None }, CppParam { name: "layoutData", ty: "UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::LayoutData>", modifiers: "", def_value: None }, CppParam { name: "rareData", ty: "UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::RareData>", modifiers: "", def_value: None }, CppParam { name: "transformData", ty: "UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::TransformData>", modifiers: "", def_value: None }, CppParam { name: "transitionData", ty: "UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::TransitionData>", modifiers: "", def_value: None }, CppParam { name: "visualData", ty: "UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::VisualData>", modifiers: "", def_value: None }, CppParam { name: "yogaNode", ty: "UnityEngine::Yoga::YogaNode", modifiers: "", def_value: None }, CppParam { name: "customProperties", ty: "System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::UIElements::StyleSheets::StylePropertyValue>", modifiers: "", def_value: None }, CppParam { name: "matchingRulesHash", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "dpiScaling", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "computedTransitions", ty: "::ArrayW<UnityEngine::UIElements::ComputedTransitionProperty>", modifiers: "", def_value: None }]
constexpr ComputedStyle(UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::InheritedData> inheritedData, UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::LayoutData> layoutData, UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::RareData> rareData, UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::TransformData> transformData, UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::TransitionData> transitionData, UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::VisualData> visualData, UnityEngine::Yoga::YogaNode yogaNode, System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::UIElements::StyleSheets::StylePropertyValue> customProperties, int64_t matchingRulesHash, float_t dpiScaling, ::ArrayW<UnityEngine::UIElements::ComputedTransitionProperty> computedTransitions) noexcept;


                    constexpr ComputedStyle(ComputedStyle const&) = default;
                    constexpr ComputedStyle(ComputedStyle&&) = default;
                    constexpr ComputedStyle& operator=(ComputedStyle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ComputedStyle& operator=(ComputedStyle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ComputedStyle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::InheritedData> __declspec(property(get=__get_inheritedData, put=__set_inheritedData))  inheritedData;

constexpr void __set_inheritedData(UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::InheritedData> value) ;

constexpr UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::InheritedData> __get_inheritedData() const;

 UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::LayoutData> __declspec(property(get=__get_layoutData, put=__set_layoutData))  layoutData;

constexpr void __set_layoutData(UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::LayoutData> value) ;

constexpr UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::LayoutData> __get_layoutData() const;

 UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::RareData> __declspec(property(get=__get_rareData, put=__set_rareData))  rareData;

constexpr void __set_rareData(UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::RareData> value) ;

constexpr UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::RareData> __get_rareData() const;

 UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::TransformData> __declspec(property(get=__get_transformData, put=__set_transformData))  transformData;

constexpr void __set_transformData(UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::TransformData> value) ;

constexpr UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::TransformData> __get_transformData() const;

 UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::TransitionData> __declspec(property(get=__get_transitionData, put=__set_transitionData))  transitionData;

constexpr void __set_transitionData(UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::TransitionData> value) ;

constexpr UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::TransitionData> __get_transitionData() const;

 UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::VisualData> __declspec(property(get=__get_visualData, put=__set_visualData))  visualData;

constexpr void __set_visualData(UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::VisualData> value) ;

constexpr UnityEngine::UIElements::StyleDataRef_1<UnityEngine::UIElements::VisualData> __get_visualData() const;

 UnityEngine::Yoga::YogaNode __declspec(property(get=__get_yogaNode, put=__set_yogaNode))  yogaNode;

constexpr void __set_yogaNode(UnityEngine::Yoga::YogaNode value) ;

constexpr UnityEngine::Yoga::YogaNode __get_yogaNode() const;

 System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::UIElements::StyleSheets::StylePropertyValue> __declspec(property(get=__get_customProperties, put=__set_customProperties))  customProperties;

constexpr void __set_customProperties(System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::UIElements::StyleSheets::StylePropertyValue> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::UIElements::StyleSheets::StylePropertyValue> __get_customProperties() const;

 int64_t __declspec(property(get=__get_matchingRulesHash, put=__set_matchingRulesHash))  matchingRulesHash;

constexpr void __set_matchingRulesHash(int64_t value) ;

constexpr int64_t __get_matchingRulesHash() const;

 float_t __declspec(property(get=__get_dpiScaling, put=__set_dpiScaling))  dpiScaling;

constexpr void __set_dpiScaling(float_t value) ;

constexpr float_t __get_dpiScaling() const;

 ::ArrayW<UnityEngine::UIElements::ComputedTransitionProperty> __declspec(property(get=__get_computedTransitions, put=__set_computedTransitions))  computedTransitions;

constexpr void __set_computedTransitions(::ArrayW<UnityEngine::UIElements::ComputedTransitionProperty> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::ComputedTransitionProperty> __get_computedTransitions() const;


// Properties

 int32_t __declspec(property(get=get_customPropertiesCount))  customPropertiesCount;

 bool __declspec(property(get=get_hasTransition))  hasTransition;

 UnityEngine::UIElements::Align __declspec(property(get=get_alignContent))  alignContent;

 UnityEngine::UIElements::Align __declspec(property(get=get_alignItems))  alignItems;

 UnityEngine::UIElements::Align __declspec(property(get=get_alignSelf))  alignSelf;

 UnityEngine::Color __declspec(property(get=get_backgroundColor))  backgroundColor;

 UnityEngine::UIElements::Background __declspec(property(get=get_backgroundImage))  backgroundImage;

 UnityEngine::Color __declspec(property(get=get_borderBottomColor))  borderBottomColor;

 UnityEngine::UIElements::Length __declspec(property(get=get_borderBottomLeftRadius))  borderBottomLeftRadius;

 UnityEngine::UIElements::Length __declspec(property(get=get_borderBottomRightRadius))  borderBottomRightRadius;

 float_t __declspec(property(get=get_borderBottomWidth))  borderBottomWidth;

 UnityEngine::Color __declspec(property(get=get_borderLeftColor))  borderLeftColor;

 float_t __declspec(property(get=get_borderLeftWidth))  borderLeftWidth;

 UnityEngine::Color __declspec(property(get=get_borderRightColor))  borderRightColor;

 float_t __declspec(property(get=get_borderRightWidth))  borderRightWidth;

 UnityEngine::Color __declspec(property(get=get_borderTopColor))  borderTopColor;

 UnityEngine::UIElements::Length __declspec(property(get=get_borderTopLeftRadius))  borderTopLeftRadius;

 UnityEngine::UIElements::Length __declspec(property(get=get_borderTopRightRadius))  borderTopRightRadius;

 float_t __declspec(property(get=get_borderTopWidth))  borderTopWidth;

 UnityEngine::UIElements::Length __declspec(property(get=get_bottom))  bottom;

 UnityEngine::Color __declspec(property(get=get_color))  color;

 UnityEngine::UIElements::Cursor __declspec(property(get=get_cursor))  cursor;

 UnityEngine::UIElements::DisplayStyle __declspec(property(get=get_display))  display;

 UnityEngine::UIElements::Length __declspec(property(get=get_flexBasis))  flexBasis;

 UnityEngine::UIElements::FlexDirection __declspec(property(get=get_flexDirection))  flexDirection;

 float_t __declspec(property(get=get_flexGrow))  flexGrow;

 float_t __declspec(property(get=get_flexShrink))  flexShrink;

 UnityEngine::UIElements::Wrap __declspec(property(get=get_flexWrap))  flexWrap;

 UnityEngine::UIElements::Length __declspec(property(get=get_fontSize))  fontSize;

 UnityEngine::UIElements::Length __declspec(property(get=get_height))  height;

 UnityEngine::UIElements::Justify __declspec(property(get=get_justifyContent))  justifyContent;

 UnityEngine::UIElements::Length __declspec(property(get=get_left))  left;

 UnityEngine::UIElements::Length __declspec(property(get=get_letterSpacing))  letterSpacing;

 UnityEngine::UIElements::Length __declspec(property(get=get_marginBottom))  marginBottom;

 UnityEngine::UIElements::Length __declspec(property(get=get_marginLeft))  marginLeft;

 UnityEngine::UIElements::Length __declspec(property(get=get_marginRight))  marginRight;

 UnityEngine::UIElements::Length __declspec(property(get=get_marginTop))  marginTop;

 UnityEngine::UIElements::Length __declspec(property(get=get_maxHeight))  maxHeight;

 UnityEngine::UIElements::Length __declspec(property(get=get_maxWidth))  maxWidth;

 UnityEngine::UIElements::Length __declspec(property(get=get_minHeight))  minHeight;

 UnityEngine::UIElements::Length __declspec(property(get=get_minWidth))  minWidth;

 float_t __declspec(property(get=get_opacity))  opacity;

 UnityEngine::UIElements::OverflowInternal __declspec(property(get=get_overflow))  overflow;

 UnityEngine::UIElements::Length __declspec(property(get=get_paddingBottom))  paddingBottom;

 UnityEngine::UIElements::Length __declspec(property(get=get_paddingLeft))  paddingLeft;

 UnityEngine::UIElements::Length __declspec(property(get=get_paddingRight))  paddingRight;

 UnityEngine::UIElements::Length __declspec(property(get=get_paddingTop))  paddingTop;

 UnityEngine::UIElements::Position __declspec(property(get=get_position))  position;

 UnityEngine::UIElements::Length __declspec(property(get=get_right))  right;

 UnityEngine::UIElements::Rotate __declspec(property(get=get_rotate))  rotate;

 UnityEngine::UIElements::Scale __declspec(property(get=get_scale))  scale;

 UnityEngine::UIElements::TextOverflow __declspec(property(get=get_textOverflow))  textOverflow;

 UnityEngine::UIElements::TextShadow __declspec(property(get=get_textShadow))  textShadow;

 UnityEngine::UIElements::Length __declspec(property(get=get_top))  top;

 UnityEngine::UIElements::TransformOrigin __declspec(property(get=get_transformOrigin))  transformOrigin;

 System::Collections::Generic::List_1<UnityEngine::UIElements::TimeValue> __declspec(property(get=get_transitionDelay))  transitionDelay;

 System::Collections::Generic::List_1<UnityEngine::UIElements::TimeValue> __declspec(property(get=get_transitionDuration))  transitionDuration;

 System::Collections::Generic::List_1<UnityEngine::UIElements::StylePropertyName> __declspec(property(get=get_transitionProperty))  transitionProperty;

 System::Collections::Generic::List_1<UnityEngine::UIElements::EasingFunction> __declspec(property(get=get_transitionTimingFunction))  transitionTimingFunction;

 UnityEngine::UIElements::Translate __declspec(property(get=get_translate))  translate;

 UnityEngine::Color __declspec(property(get=get_unityBackgroundImageTintColor))  unityBackgroundImageTintColor;

 UnityEngine::ScaleMode __declspec(property(get=get_unityBackgroundScaleMode))  unityBackgroundScaleMode;

 UnityEngine::Font __declspec(property(get=get_unityFont))  unityFont;

 UnityEngine::UIElements::FontDefinition __declspec(property(get=get_unityFontDefinition))  unityFontDefinition;

 UnityEngine::FontStyle __declspec(property(get=get_unityFontStyleAndWeight))  unityFontStyleAndWeight;

 UnityEngine::UIElements::OverflowClipBox __declspec(property(get=get_unityOverflowClipBox))  unityOverflowClipBox;

 UnityEngine::UIElements::Length __declspec(property(get=get_unityParagraphSpacing))  unityParagraphSpacing;

 int32_t __declspec(property(get=get_unitySliceBottom))  unitySliceBottom;

 int32_t __declspec(property(get=get_unitySliceLeft))  unitySliceLeft;

 int32_t __declspec(property(get=get_unitySliceRight))  unitySliceRight;

 int32_t __declspec(property(get=get_unitySliceTop))  unitySliceTop;

 UnityEngine::TextAnchor __declspec(property(get=get_unityTextAlign))  unityTextAlign;

 UnityEngine::Color __declspec(property(get=get_unityTextOutlineColor))  unityTextOutlineColor;

 float_t __declspec(property(get=get_unityTextOutlineWidth))  unityTextOutlineWidth;

 UnityEngine::UIElements::TextOverflowPosition __declspec(property(get=get_unityTextOverflowPosition))  unityTextOverflowPosition;

 UnityEngine::UIElements::Visibility __declspec(property(get=get_visibility))  visibility;

 UnityEngine::UIElements::WhiteSpace __declspec(property(get=get_whiteSpace))  whiteSpace;

 UnityEngine::UIElements::Length __declspec(property(get=get_width))  width;

 UnityEngine::UIElements::Length __declspec(property(get=get_wordSpacing))  wordSpacing;


// Methods

/// @brief Method get_customPropertiesCount addr 0x2cdc4a0 size 0x58 virtual false final false
 int32_t get_customPropertiesCount() ;

/// @brief Method get_hasTransition addr 0x2cdc4f8 size 0x20 virtual false final false
 bool get_hasTransition() ;

/// @brief Method FinalizeApply addr 0x2cdc518 size 0x100 virtual false final false
 void FinalizeApply(ByRef<UnityEngine::UIElements::ComputedStyle> parentStyle) ;

/// @brief Method SyncWithLayout addr 0x2cdc668 size 0x3e4 virtual false final false
 void SyncWithLayout(UnityEngine::Yoga::YogaNode targetNode) ;

/// @brief Method ApplyGlobalKeyword addr 0x2cdd4ec size 0xa0 virtual false final false
 bool ApplyGlobalKeyword(UnityEngine::UIElements::StyleSheets::StylePropertyReader reader, ByRef<UnityEngine::UIElements::ComputedStyle> parentStyle) ;

/// @brief Method ApplyGlobalKeyword addr 0x2cdd5f4 size 0x24 virtual false final false
 bool ApplyGlobalKeyword(UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::UIElements::StyleKeyword keyword, ByRef<UnityEngine::UIElements::ComputedStyle> parentStyle) ;

/// @brief Method RemoveCustomStyleProperty addr 0x2cdecf0 size 0xac virtual false final false
 void RemoveCustomStyleProperty(UnityEngine::UIElements::StyleSheets::StylePropertyReader reader) ;

/// @brief Method ApplyCustomStyleProperty addr 0x2cded9c size 0xf0 virtual false final false
 void ApplyCustomStyleProperty(UnityEngine::UIElements::StyleSheets::StylePropertyReader reader) ;

/// @brief Method ApplyAllPropertyInitial addr 0x2cdee8c size 0x60 virtual false final false
 void ApplyAllPropertyInitial() ;

/// @brief Method ResetComputedTransitions addr 0x2cdf02c size 0x8 virtual false final false
 void ResetComputedTransitions() ;

/// @brief Method CompareChanges addr 0x2cdf034 size 0x2e8 virtual false final false
static UnityEngine::UIElements::VersionChangeType CompareChanges(ByRef<UnityEngine::UIElements::ComputedStyle> x, ByRef<UnityEngine::UIElements::ComputedStyle> y) ;

/// @brief Method StartAnimationInlineTranslate addr 0x2cdf638 size 0x218 virtual false final false
static bool StartAnimationInlineTranslate(UnityEngine::UIElements::VisualElement element, ByRef<UnityEngine::UIElements::ComputedStyle> computedStyle, UnityEngine::UIElements::StyleTranslate translate, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method get_alignContent addr 0x2cdd35c size 0x50 virtual false final false
 UnityEngine::UIElements::Align get_alignContent() ;

/// @brief Method get_alignItems addr 0x2cdd3ac size 0x50 virtual false final false
 UnityEngine::UIElements::Align get_alignItems() ;

/// @brief Method get_alignSelf addr 0x2cdd17c size 0x50 virtual false final false
 UnityEngine::UIElements::Align get_alignSelf() ;

/// @brief Method get_backgroundColor addr 0x2cdf850 size 0x54 virtual false final false
 UnityEngine::Color get_backgroundColor() ;

/// @brief Method get_backgroundImage addr 0x2cdf8a4 size 0x60 virtual false final false
 UnityEngine::UIElements::Background get_backgroundImage() ;

/// @brief Method get_borderBottomColor addr 0x2cdf904 size 0x54 virtual false final false
 UnityEngine::Color get_borderBottomColor() ;

/// @brief Method get_borderBottomLeftRadius addr 0x2cdf31c size 0x50 virtual false final false
 UnityEngine::UIElements::Length get_borderBottomLeftRadius() ;

/// @brief Method get_borderBottomRightRadius addr 0x2cdf36c size 0x50 virtual false final false
 UnityEngine::UIElements::Length get_borderBottomRightRadius() ;

/// @brief Method get_borderBottomWidth addr 0x2cdcfec size 0x50 virtual false final false
 float_t get_borderBottomWidth() ;

/// @brief Method get_borderLeftColor addr 0x2cdf958 size 0x54 virtual false final false
 UnityEngine::Color get_borderLeftColor() ;

/// @brief Method get_borderLeftWidth addr 0x2cdcefc size 0x50 virtual false final false
 float_t get_borderLeftWidth() ;

/// @brief Method get_borderRightColor addr 0x2cdf9ac size 0x54 virtual false final false
 UnityEngine::Color get_borderRightColor() ;

/// @brief Method get_borderRightWidth addr 0x2cdcf9c size 0x50 virtual false final false
 float_t get_borderRightWidth() ;

/// @brief Method get_borderTopColor addr 0x2cdfa00 size 0x54 virtual false final false
 UnityEngine::Color get_borderTopColor() ;

/// @brief Method get_borderTopLeftRadius addr 0x2cdf3bc size 0x50 virtual false final false
 UnityEngine::UIElements::Length get_borderTopLeftRadius() ;

/// @brief Method get_borderTopRightRadius addr 0x2cdf40c size 0x50 virtual false final false
 UnityEngine::UIElements::Length get_borderTopRightRadius() ;

/// @brief Method get_borderTopWidth addr 0x2cdcf4c size 0x50 virtual false final false
 float_t get_borderTopWidth() ;

/// @brief Method get_bottom addr 0x2cdcc2c size 0x50 virtual false final false
 UnityEngine::UIElements::Length get_bottom() ;

/// @brief Method get_color addr 0x2cdfa54 size 0x54 virtual false final false
 UnityEngine::Color get_color() ;

/// @brief Method get_cursor addr 0x2cdfaa8 size 0x68 virtual false final false
 UnityEngine::UIElements::Cursor get_cursor() ;

/// @brief Method get_display addr 0x2cdd49c size 0x50 virtual false final false
 UnityEngine::UIElements::DisplayStyle get_display() ;

/// @brief Method get_flexBasis addr 0x2cdcaec size 0x50 virtual false final false
 UnityEngine::UIElements::Length get_flexBasis() ;

/// @brief Method get_flexDirection addr 0x2cdd30c size 0x50 virtual false final false
 UnityEngine::UIElements::FlexDirection get_flexDirection() ;

/// @brief Method get_flexGrow addr 0x2cdca4c size 0x50 virtual false final false
 float_t get_flexGrow() ;

/// @brief Method get_flexShrink addr 0x2cdca9c size 0x50 virtual false final false
 float_t get_flexShrink() ;

/// @brief Method get_flexWrap addr 0x2cdd44c size 0x50 virtual false final false
 UnityEngine::UIElements::Wrap get_flexWrap() ;

/// @brief Method get_fontSize addr 0x2cdc618 size 0x50 virtual false final false
 UnityEngine::UIElements::Length get_fontSize() ;

/// @brief Method get_height addr 0x2cdd08c size 0x50 virtual false final false
 UnityEngine::UIElements::Length get_height() ;

/// @brief Method get_justifyContent addr 0x2cdd3fc size 0x50 virtual false final false
 UnityEngine::UIElements::Justify get_justifyContent() ;

/// @brief Method get_left addr 0x2cdcb3c size 0x50 virtual false final false
 UnityEngine::UIElements::Length get_left() ;

/// @brief Method get_letterSpacing addr 0x2cdfb10 size 0x50 virtual false final false
 UnityEngine::UIElements::Length get_letterSpacing() ;

/// @brief Method get_marginBottom addr 0x2cdcd6c size 0x50 virtual false final false
 UnityEngine::UIElements::Length get_marginBottom() ;

/// @brief Method get_marginLeft addr 0x2cdcc7c size 0x50 virtual false final false
 UnityEngine::UIElements::Length get_marginLeft() ;

/// @brief Method get_marginRight addr 0x2cdcd1c size 0x50 virtual false final false
 UnityEngine::UIElements::Length get_marginRight() ;

/// @brief Method get_marginTop addr 0x2cdcccc size 0x50 virtual false final false
 UnityEngine::UIElements::Length get_marginTop() ;

/// @brief Method get_maxHeight addr 0x2cdd21c size 0x50 virtual false final false
 UnityEngine::UIElements::Length get_maxHeight() ;

/// @brief Method get_maxWidth addr 0x2cdd1cc size 0x50 virtual false final false
 UnityEngine::UIElements::Length get_maxWidth() ;

/// @brief Method get_minHeight addr 0x2cdd2bc size 0x50 virtual false final false
 UnityEngine::UIElements::Length get_minHeight() ;

/// @brief Method get_minWidth addr 0x2cdd26c size 0x50 virtual false final false
 UnityEngine::UIElements::Length get_minWidth() ;

/// @brief Method get_opacity addr 0x2cdf45c size 0x50 virtual false final false
 float_t get_opacity() ;

/// @brief Method get_overflow addr 0x2cdd12c size 0x50 virtual false final false
 UnityEngine::UIElements::OverflowInternal get_overflow() ;

/// @brief Method get_paddingBottom addr 0x2cdceac size 0x50 virtual false final false
 UnityEngine::UIElements::Length get_paddingBottom() ;

/// @brief Method get_paddingLeft addr 0x2cdcdbc size 0x50 virtual false final false
 UnityEngine::UIElements::Length get_paddingLeft() ;

/// @brief Method get_paddingRight addr 0x2cdce5c size 0x50 virtual false final false
 UnityEngine::UIElements::Length get_paddingRight() ;

/// @brief Method get_paddingTop addr 0x2cdce0c size 0x50 virtual false final false
 UnityEngine::UIElements::Length get_paddingTop() ;

/// @brief Method get_position addr 0x2cdd0dc size 0x50 virtual false final false
 UnityEngine::UIElements::Position get_position() ;

/// @brief Method get_right addr 0x2cdcbdc size 0x50 virtual false final false
 UnityEngine::UIElements::Length get_right() ;

/// @brief Method get_rotate addr 0x2cdf5d0 size 0x68 virtual false final false
 UnityEngine::UIElements::Rotate get_rotate() ;

/// @brief Method get_scale addr 0x2cdf57c size 0x54 virtual false final false
 UnityEngine::UIElements::Scale get_scale() ;

/// @brief Method get_textOverflow addr 0x2cdfb60 size 0x50 virtual false final false
 UnityEngine::UIElements::TextOverflow get_textOverflow() ;

/// @brief Method get_textShadow addr 0x2cdfbb0 size 0x68 virtual false final false
 UnityEngine::UIElements::TextShadow get_textShadow() ;

/// @brief Method get_top addr 0x2cdcb8c size 0x50 virtual false final false
 UnityEngine::UIElements::Length get_top() ;

/// @brief Method get_transformOrigin addr 0x2cdf4ac size 0x68 virtual false final false
 UnityEngine::UIElements::TransformOrigin get_transformOrigin() ;

/// @brief Method get_transitionDelay addr 0x2cdfc18 size 0x50 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::UIElements::TimeValue> get_transitionDelay() ;

/// @brief Method get_transitionDuration addr 0x2cdfc68 size 0x50 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::UIElements::TimeValue> get_transitionDuration() ;

/// @brief Method get_transitionProperty addr 0x2cdfcb8 size 0x50 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::UIElements::StylePropertyName> get_transitionProperty() ;

/// @brief Method get_transitionTimingFunction addr 0x2cdfd08 size 0x50 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::UIElements::EasingFunction> get_transitionTimingFunction() ;

/// @brief Method get_translate addr 0x2cdf514 size 0x68 virtual false final false
 UnityEngine::UIElements::Translate get_translate() ;

/// @brief Method get_unityBackgroundImageTintColor addr 0x2cdfd58 size 0x54 virtual false final false
 UnityEngine::Color get_unityBackgroundImageTintColor() ;

/// @brief Method get_unityBackgroundScaleMode addr 0x2cdfdac size 0x50 virtual false final false
 UnityEngine::ScaleMode get_unityBackgroundScaleMode() ;

/// @brief Method get_unityFont addr 0x2cdfdfc size 0x50 virtual false final false
 UnityEngine::Font get_unityFont() ;

/// @brief Method get_unityFontDefinition addr 0x2cdfe4c size 0x54 virtual false final false
 UnityEngine::UIElements::FontDefinition get_unityFontDefinition() ;

/// @brief Method get_unityFontStyleAndWeight addr 0x2cdfea0 size 0x50 virtual false final false
 UnityEngine::FontStyle get_unityFontStyleAndWeight() ;

/// @brief Method get_unityOverflowClipBox addr 0x2cdfef0 size 0x50 virtual false final false
 UnityEngine::UIElements::OverflowClipBox get_unityOverflowClipBox() ;

/// @brief Method get_unityParagraphSpacing addr 0x2cdff40 size 0x50 virtual false final false
 UnityEngine::UIElements::Length get_unityParagraphSpacing() ;

/// @brief Method get_unitySliceBottom addr 0x2cdff90 size 0x50 virtual false final false
 int32_t get_unitySliceBottom() ;

/// @brief Method get_unitySliceLeft addr 0x2cdffe0 size 0x50 virtual false final false
 int32_t get_unitySliceLeft() ;

/// @brief Method get_unitySliceRight addr 0x2ce0030 size 0x50 virtual false final false
 int32_t get_unitySliceRight() ;

/// @brief Method get_unitySliceTop addr 0x2ce0080 size 0x50 virtual false final false
 int32_t get_unitySliceTop() ;

/// @brief Method get_unityTextAlign addr 0x2ce00d0 size 0x50 virtual false final false
 UnityEngine::TextAnchor get_unityTextAlign() ;

/// @brief Method get_unityTextOutlineColor addr 0x2ce0120 size 0x54 virtual false final false
 UnityEngine::Color get_unityTextOutlineColor() ;

/// @brief Method get_unityTextOutlineWidth addr 0x2ce0174 size 0x50 virtual false final false
 float_t get_unityTextOutlineWidth() ;

/// @brief Method get_unityTextOverflowPosition addr 0x2ce01c4 size 0x50 virtual false final false
 UnityEngine::UIElements::TextOverflowPosition get_unityTextOverflowPosition() ;

/// @brief Method get_visibility addr 0x2ce0214 size 0x50 virtual false final false
 UnityEngine::UIElements::Visibility get_visibility() ;

/// @brief Method get_whiteSpace addr 0x2ce0264 size 0x50 virtual false final false
 UnityEngine::UIElements::WhiteSpace get_whiteSpace() ;

/// @brief Method get_width addr 0x2cdd03c size 0x50 virtual false final false
 UnityEngine::UIElements::Length get_width() ;

/// @brief Method get_wordSpacing addr 0x2ce02b4 size 0x50 virtual false final false
 UnityEngine::UIElements::Length get_wordSpacing() ;

/// @brief Method Create addr 0x2ce0304 size 0x170 virtual false final false
static UnityEngine::UIElements::ComputedStyle Create(ByRef<UnityEngine::UIElements::ComputedStyle> parentStyle) ;

/// @brief Method CreateInitial addr 0x2ce0474 size 0x138 virtual false final false
static UnityEngine::UIElements::ComputedStyle CreateInitial() ;

/// @brief Method Acquire addr 0x2ce05ac size 0x118 virtual false final false
 UnityEngine::UIElements::ComputedStyle Acquire() ;

/// @brief Method Release addr 0x2ce06c4 size 0x100 virtual false final false
 void Release() ;

/// @brief Method CopyFrom addr 0x2cdeeec size 0x140 virtual false final false
 void CopyFrom(ByRef<UnityEngine::UIElements::ComputedStyle> other) ;

/// @brief Method ApplyProperties addr 0x2ce07c4 size 0x11e4 virtual false final false
 void ApplyProperties(UnityEngine::UIElements::StyleSheets::StylePropertyReader reader, ByRef<UnityEngine::UIElements::ComputedStyle> parentStyle) ;

/// @brief Method ApplyStyleValue addr 0x2ce19a8 size 0xb84 virtual false final false
 void ApplyStyleValue(UnityEngine::UIElements::StyleSheets::StyleValue sv, ByRef<UnityEngine::UIElements::ComputedStyle> parentStyle) ;

/// @brief Method ApplyStyleValueManaged addr 0x2ce252c size 0x3a8 virtual false final false
 void ApplyStyleValueManaged(UnityEngine::UIElements::StyleSheets::StyleValueManaged sv, ByRef<UnityEngine::UIElements::ComputedStyle> parentStyle) ;

/// @brief Method ApplyStyleCursor addr 0x2ce28d4 size 0x68 virtual false final false
 void ApplyStyleCursor(UnityEngine::UIElements::Cursor cursor) ;

/// @brief Method ApplyStyleTextShadow addr 0x2ce293c size 0x70 virtual false final false
 void ApplyStyleTextShadow(UnityEngine::UIElements::TextShadow st) ;

/// @brief Method ApplyFromComputedStyle addr 0x2ce29ac size 0xec0 virtual false final false
 void ApplyFromComputedStyle(UnityEngine::UIElements::StyleSheets::StylePropertyId id, ByRef<UnityEngine::UIElements::ComputedStyle> other) ;

/// @brief Method ApplyPropertyAnimation addr 0x2ce386c size 0x720 virtual false final false
 void ApplyPropertyAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::UIElements::Length newValue) ;

/// @brief Method ApplyPropertyAnimation addr 0x2ce3f8c size 0x2d0 virtual false final false
 void ApplyPropertyAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id, float_t newValue) ;

/// @brief Method ApplyPropertyAnimation addr 0x2ce425c size 0x514 virtual false final false
 void ApplyPropertyAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id, int32_t newValue) ;

/// @brief Method ApplyPropertyAnimation addr 0x2ce4770 size 0x294 virtual false final false
 void ApplyPropertyAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::Color newValue) ;

/// @brief Method ApplyPropertyAnimation addr 0x2ce4a04 size 0x140 virtual false final false
 void ApplyPropertyAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::UIElements::Background newValue) ;

/// @brief Method ApplyPropertyAnimation addr 0x2ce4b44 size 0x13c virtual false final false
 void ApplyPropertyAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::Font newValue) ;

/// @brief Method ApplyPropertyAnimation addr 0x2ce4c80 size 0x148 virtual false final false
 void ApplyPropertyAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::UIElements::FontDefinition newValue) ;

/// @brief Method ApplyPropertyAnimation addr 0x2ce4dc8 size 0x150 virtual false final false
 void ApplyPropertyAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::UIElements::TextShadow newValue) ;

/// @brief Method ApplyPropertyAnimation addr 0x2ce4f18 size 0x148 virtual false final false
 void ApplyPropertyAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::UIElements::Translate newValue) ;

/// @brief Method ApplyPropertyAnimation addr 0x2ce5060 size 0x148 virtual false final false
 void ApplyPropertyAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::UIElements::TransformOrigin newValue) ;

/// @brief Method ApplyPropertyAnimation addr 0x2ce51a8 size 0x140 virtual false final false
 void ApplyPropertyAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::UIElements::Rotate newValue) ;

/// @brief Method ApplyPropertyAnimation addr 0x2ce52e8 size 0x148 virtual false final false
 void ApplyPropertyAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::UIElements::Scale newValue) ;

/// @brief Method StartAnimation addr 0x2ce5430 size 0x4444 virtual false final false
static bool StartAnimation(UnityEngine::UIElements::VisualElement element, UnityEngine::UIElements::StyleSheets::StylePropertyId id, ByRef<UnityEngine::UIElements::ComputedStyle> oldStyle, ByRef<UnityEngine::UIElements::ComputedStyle> newStyle, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method StartAnimationAllProperty addr 0x2ce9874 size 0x3a6c virtual false final false
static bool StartAnimationAllProperty(UnityEngine::UIElements::VisualElement element, ByRef<UnityEngine::UIElements::ComputedStyle> oldStyle, ByRef<UnityEngine::UIElements::ComputedStyle> newStyle, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method StartAnimationInline addr 0x2ced2e0 size 0x36f8 virtual false final false
static bool StartAnimationInline(UnityEngine::UIElements::VisualElement element, UnityEngine::UIElements::StyleSheets::StylePropertyId id, ByRef<UnityEngine::UIElements::ComputedStyle> computedStyle, UnityEngine::UIElements::StyleSheets::StyleValue sv, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method ApplyStyleTransformOrigin addr 0x2cf09d8 size 0x68 virtual false final false
 void ApplyStyleTransformOrigin(UnityEngine::UIElements::TransformOrigin st) ;

/// @brief Method ApplyStyleTranslate addr 0x2cf0a40 size 0x68 virtual false final false
 void ApplyStyleTranslate(UnityEngine::UIElements::Translate translateValue) ;

/// @brief Method ApplyStyleRotate addr 0x2cf0aa8 size 0x68 virtual false final false
 void ApplyStyleRotate(UnityEngine::UIElements::Rotate rotateValue) ;

/// @brief Method ApplyStyleScale addr 0x2cf0b10 size 0x60 virtual false final false
 void ApplyStyleScale(UnityEngine::UIElements::Scale scaleValue) ;

/// @brief Method ApplyInitialValue addr 0x2cdd58c size 0x3c virtual false final false
 void ApplyInitialValue(UnityEngine::UIElements::StyleSheets::StylePropertyReader reader) ;

/// @brief Method ApplyInitialValue addr 0x2cdd618 size 0x16d8 virtual false final false
 void ApplyInitialValue(UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method ApplyUnsetValue addr 0x2cdd5c8 size 0x2c virtual false final false
 void ApplyUnsetValue(UnityEngine::UIElements::StyleSheets::StylePropertyReader reader, ByRef<UnityEngine::UIElements::ComputedStyle> parentStyle) ;

/// @brief Method ApplyUnsetValue addr 0x2cf0b70 size 0x126c virtual false final false
 void ApplyUnsetValue(UnityEngine::UIElements::StyleSheets::StylePropertyId id, ByRef<UnityEngine::UIElements::ComputedStyle> parentStyle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::ComputedStyle, "UnityEngine.UIElements", "ComputedStyle");
