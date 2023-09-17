#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
// Type: UnityEngine.UIElements.StyleSheets::StylePropertyId
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7587))
// CS Name: UnityEngine.UIElements.StyleSheets.StylePropertyId
struct CORDL_TYPE StylePropertyId : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StylePropertyId(int32_t value__) noexcept;


                    constexpr StylePropertyId(StylePropertyId const&) = default;
                    constexpr StylePropertyId(StylePropertyId&&) = default;
                    constexpr StylePropertyId& operator=(StylePropertyId const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StylePropertyId& operator=(StylePropertyId&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StylePropertyId(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __StylePropertyId_Unwrapped : int32_t {
__Unknown = 0,
__Custom = -1,
__AlignContent = 131072,
__AlignItems = 131073,
__AlignSelf = 131074,
__All = 262144,
__BackgroundColor = 458752,
__BackgroundImage = 458753,
__BorderBottomColor = 458754,
__BorderBottomLeftRadius = 458755,
__BorderBottomRightRadius = 458756,
__BorderBottomWidth = 131075,
__BorderColor = 262145,
__BorderLeftColor = 458757,
__BorderLeftWidth = 131076,
__BorderRadius = 262146,
__BorderRightColor = 458758,
__BorderRightWidth = 131077,
__BorderTopColor = 458759,
__BorderTopLeftRadius = 458760,
__BorderTopRightRadius = 458761,
__BorderTopWidth = 131078,
__BorderWidth = 262147,
__Bottom = 131079,
__Color = 65536,
__Cursor = 196608,
__Display = 131080,
__Flex = 262148,
__FlexBasis = 131081,
__FlexDirection = 131082,
__FlexGrow = 131083,
__FlexShrink = 131084,
__FlexWrap = 131085,
__FontSize = 65537,
__Height = 131086,
__JustifyContent = 131087,
__Left = 131088,
__LetterSpacing = 65538,
__Margin = 262149,
__MarginBottom = 131089,
__MarginLeft = 131090,
__MarginRight = 131091,
__MarginTop = 131092,
__MaxHeight = 131093,
__MaxWidth = 131094,
__MinHeight = 131095,
__MinWidth = 131096,
__Opacity = 458762,
__Overflow = 458763,
__Padding = 262150,
__PaddingBottom = 131097,
__PaddingLeft = 131098,
__PaddingRight = 131099,
__PaddingTop = 131100,
__Position = 131101,
__Right = 131102,
__Rotate = 327680,
__Scale = 327681,
__TextOverflow = 196609,
__TextShadow = 65539,
__Top = 131103,
__TransformOrigin = 327682,
__Transition = 262151,
__TransitionDelay = 393216,
__TransitionDuration = 393217,
__TransitionProperty = 393218,
__TransitionTimingFunction = 393219,
__Translate = 327683,
__UnityBackgroundImageTintColor = 196610,
__UnityBackgroundScaleMode = 196611,
__UnityFont = 65540,
__UnityFontDefinition = 65541,
__UnityFontStyleAndWeight = 65542,
__UnityOverflowClipBox = 196612,
__UnityParagraphSpacing = 65543,
__UnitySliceBottom = 196613,
__UnitySliceLeft = 196614,
__UnitySliceRight = 196615,
__UnitySliceTop = 196616,
__UnityTextAlign = 65544,
__UnityTextOutline = 262152,
__UnityTextOutlineColor = 65545,
__UnityTextOutlineWidth = 65546,
__UnityTextOverflowPosition = 196617,
__Visibility = 65547,
__WhiteSpace = 65548,
__Width = 131104,
__WordSpacing = 65549,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StylePropertyId_Unwrapped () const noexcept {
return std::bit_cast<__StylePropertyId_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Unknown;

/// @brief Field Custom offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Custom;

/// @brief Field AlignContent offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const AlignContent;

/// @brief Field AlignItems offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const AlignItems;

/// @brief Field AlignSelf offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const AlignSelf;

/// @brief Field All offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const All;

/// @brief Field BackgroundColor offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BackgroundColor;

/// @brief Field BackgroundImage offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BackgroundImage;

/// @brief Field BorderBottomColor offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderBottomColor;

/// @brief Field BorderBottomLeftRadius offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderBottomLeftRadius;

/// @brief Field BorderBottomRightRadius offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderBottomRightRadius;

/// @brief Field BorderBottomWidth offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderBottomWidth;

/// @brief Field BorderColor offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderColor;

/// @brief Field BorderLeftColor offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderLeftColor;

/// @brief Field BorderLeftWidth offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderLeftWidth;

/// @brief Field BorderRadius offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderRadius;

/// @brief Field BorderRightColor offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderRightColor;

/// @brief Field BorderRightWidth offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderRightWidth;

/// @brief Field BorderTopColor offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderTopColor;

/// @brief Field BorderTopLeftRadius offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderTopLeftRadius;

/// @brief Field BorderTopRightRadius offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderTopRightRadius;

/// @brief Field BorderTopWidth offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderTopWidth;

/// @brief Field BorderWidth offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const BorderWidth;

/// @brief Field Bottom offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Bottom;

/// @brief Field Color offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Color;

/// @brief Field Cursor offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Cursor;

/// @brief Field Display offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Display;

/// @brief Field Flex offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Flex;

/// @brief Field FlexBasis offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const FlexBasis;

/// @brief Field FlexDirection offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const FlexDirection;

/// @brief Field FlexGrow offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const FlexGrow;

/// @brief Field FlexShrink offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const FlexShrink;

/// @brief Field FlexWrap offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const FlexWrap;

/// @brief Field FontSize offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const FontSize;

/// @brief Field Height offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Height;

/// @brief Field JustifyContent offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const JustifyContent;

/// @brief Field Left offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Left;

/// @brief Field LetterSpacing offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const LetterSpacing;

/// @brief Field Margin offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Margin;

/// @brief Field MarginBottom offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const MarginBottom;

/// @brief Field MarginLeft offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const MarginLeft;

/// @brief Field MarginRight offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const MarginRight;

/// @brief Field MarginTop offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const MarginTop;

/// @brief Field MaxHeight offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const MaxHeight;

/// @brief Field MaxWidth offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const MaxWidth;

/// @brief Field MinHeight offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const MinHeight;

/// @brief Field MinWidth offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const MinWidth;

/// @brief Field Opacity offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Opacity;

/// @brief Field Overflow offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Overflow;

/// @brief Field Padding offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Padding;

/// @brief Field PaddingBottom offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const PaddingBottom;

/// @brief Field PaddingLeft offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const PaddingLeft;

/// @brief Field PaddingRight offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const PaddingRight;

/// @brief Field PaddingTop offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const PaddingTop;

/// @brief Field Position offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Position;

/// @brief Field Right offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Right;

/// @brief Field Rotate offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Rotate;

/// @brief Field Scale offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Scale;

/// @brief Field TextOverflow offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const TextOverflow;

/// @brief Field TextShadow offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const TextShadow;

/// @brief Field Top offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Top;

/// @brief Field TransformOrigin offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const TransformOrigin;

/// @brief Field Transition offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Transition;

/// @brief Field TransitionDelay offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const TransitionDelay;

/// @brief Field TransitionDuration offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const TransitionDuration;

/// @brief Field TransitionProperty offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const TransitionProperty;

/// @brief Field TransitionTimingFunction offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const TransitionTimingFunction;

/// @brief Field Translate offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Translate;

/// @brief Field UnityBackgroundImageTintColor offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityBackgroundImageTintColor;

/// @brief Field UnityBackgroundScaleMode offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityBackgroundScaleMode;

/// @brief Field UnityFont offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityFont;

/// @brief Field UnityFontDefinition offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityFontDefinition;

/// @brief Field UnityFontStyleAndWeight offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityFontStyleAndWeight;

/// @brief Field UnityOverflowClipBox offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityOverflowClipBox;

/// @brief Field UnityParagraphSpacing offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityParagraphSpacing;

/// @brief Field UnitySliceBottom offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnitySliceBottom;

/// @brief Field UnitySliceLeft offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnitySliceLeft;

/// @brief Field UnitySliceRight offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnitySliceRight;

/// @brief Field UnitySliceTop offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnitySliceTop;

/// @brief Field UnityTextAlign offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityTextAlign;

/// @brief Field UnityTextOutline offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityTextOutline;

/// @brief Field UnityTextOutlineColor offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityTextOutlineColor;

/// @brief Field UnityTextOutlineWidth offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityTextOutlineWidth;

/// @brief Field UnityTextOverflowPosition offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const UnityTextOverflowPosition;

/// @brief Field Visibility offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Visibility;

/// @brief Field WhiteSpace offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const WhiteSpace;

/// @brief Field Width offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const Width;

/// @brief Field WordSpacing offset 0
static ::UnityEngine::UIElements::StyleSheets::StylePropertyId const WordSpacing;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StylePropertyId, "UnityEngine.UIElements.StyleSheets", "StylePropertyId");
