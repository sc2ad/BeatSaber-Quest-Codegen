#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::TextCore::Text {
template<typename T>
struct TextProcessingStack_1;
}
namespace UnityEngine::TextCore::Text {
struct TextElementType;
}
namespace UnityEngine::TextCore::Text {
struct FontStyleStack;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::TextCore::Text {
struct WordWrapState;
}
namespace UnityEngine::TextCore::Text {
class TextElement;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine::TextCore::Text {
class TextGenerationSettings;
}
namespace UnityEngine::TextCore::Text {
struct TextFontWeight;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::TextCore::Text {
struct TextAlignment;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::TextCore::Text {
struct XmlTagAttribute;
}
namespace UnityEngine::TextCore::Text {
struct MaterialReference;
}
namespace UnityEngine::TextCore::Text {
struct FontStyles;
}
namespace UnityEngine::TextCore::Text {
struct TextElementInfo;
}
namespace UnityEngine::TextCore::Text {
class SpriteAsset;
}
namespace UnityEngine::TextCore::Text {
class TextColorGradient;
}
namespace UnityEngine::TextCore::Text {
struct Extents;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
struct RichTextTagAttribute;
}
namespace UnityEngine::TextCore::Text {
class TextInfo;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine::TextCore::Text {
class Character;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextGenerator;
}
namespace UnityEngine::TextCore::Text {
struct ____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter;
}
// Type: ::SpecialCharacter
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13503))
// CS Name: UnityEngine.TextCore.Text.TextGenerator::SpecialCharacter
struct CORDL_TYPE ____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "character", ty: "::UnityEngine::TextCore::Text::Character", modifiers: "", def_value: None }, CppParam { name: "fontAsset", ty: "::UnityEngine::TextCore::Text::FontAsset", modifiers: "", def_value: None }, CppParam { name: "material", ty: "::UnityEngine::Material", modifiers: "", def_value: None }, CppParam { name: "materialIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter(::UnityEngine::TextCore::Text::Character character, ::UnityEngine::TextCore::Text::FontAsset fontAsset, ::UnityEngine::Material material, int32_t materialIndex) noexcept;


                    constexpr ____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter(____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter const&) = default;
                    constexpr ____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter(____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter&&) = default;
                    constexpr ____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter& operator=(____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter& operator=(____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::TextCore::Text::Character __declspec(property(get=__get_character, put=__set_character))  character;

constexpr void __set_character(::UnityEngine::TextCore::Text::Character value) ;

constexpr ::UnityEngine::TextCore::Text::Character __get_character() const;

 ::UnityEngine::TextCore::Text::FontAsset __declspec(property(get=__get_fontAsset, put=__set_fontAsset))  fontAsset;

constexpr void __set_fontAsset(::UnityEngine::TextCore::Text::FontAsset value) ;

constexpr ::UnityEngine::TextCore::Text::FontAsset __get_fontAsset() const;

 ::UnityEngine::Material __declspec(property(get=__get_material, put=__set_material))  material;

constexpr void __set_material(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get_material() const;

 int32_t __declspec(property(get=__get_materialIndex, put=__set_materialIndex))  materialIndex;

constexpr void __set_materialIndex(int32_t value) ;

constexpr int32_t __get_materialIndex() const;


// Methods

/// @brief Method .ctor addr 0x2bca0f8 size 0xec virtual false final false
 void _ctor(::UnityEngine::TextCore::Text::Character character, int32_t materialIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
// Type: UnityEngine.TextCore.Text::TextGenerator
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13504))
// CS Name: UnityEngine.TextCore.Text.TextGenerator
class CORDL_TYPE TextGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SpecialCharacter = ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa58};

virtual ~TextGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextGenerator", modifiers: " const&", def_value: None }]
constexpr TextGenerator(TextGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextGenerator", modifiers: "&&", def_value: None }]
constexpr TextGenerator(TextGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TextGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextGenerator& operator=(TextGenerator&& o) noexcept = default;
  constexpr TextGenerator& operator=(TextGenerator const& o) noexcept = default;
                


// Fields

static ::UnityEngine::TextCore::Text::TextGenerator __declspec(property(get=__get_s_TextGenerator, put=__set_s_TextGenerator))  s_TextGenerator;

static void __set_s_TextGenerator(::UnityEngine::TextCore::Text::TextGenerator value) ;

static ::UnityEngine::TextCore::Text::TextGenerator __get_s_TextGenerator() ;

 ::ArrayW<::UnityEngine::Vector3> __declspec(property(get=__get_m_RectTransformCorners, put=__set_m_RectTransformCorners))  m_RectTransformCorners;

constexpr void __set_m_RectTransformCorners(::ArrayW<::UnityEngine::Vector3> value) ;

constexpr ::ArrayW<::UnityEngine::Vector3> __get_m_RectTransformCorners() const;

 float_t __declspec(property(get=__get_m_MarginWidth, put=__set_m_MarginWidth))  m_MarginWidth;

constexpr void __set_m_MarginWidth(float_t value) ;

constexpr float_t __get_m_MarginWidth() const;

 float_t __declspec(property(get=__get_m_MarginHeight, put=__set_m_MarginHeight))  m_MarginHeight;

constexpr void __set_m_MarginHeight(float_t value) ;

constexpr float_t __get_m_MarginHeight() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_m_CharBuffer, put=__set_m_CharBuffer))  m_CharBuffer;

constexpr void __set_m_CharBuffer(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_m_CharBuffer() const;

 float_t __declspec(property(get=__get_m_PreferredWidth, put=__set_m_PreferredWidth))  m_PreferredWidth;

constexpr void __set_m_PreferredWidth(float_t value) ;

constexpr float_t __get_m_PreferredWidth() const;

 float_t __declspec(property(get=__get_m_PreferredHeight, put=__set_m_PreferredHeight))  m_PreferredHeight;

constexpr void __set_m_PreferredHeight(float_t value) ;

constexpr float_t __get_m_PreferredHeight() const;

 ::UnityEngine::TextCore::Text::FontAsset __declspec(property(get=__get_m_CurrentFontAsset, put=__set_m_CurrentFontAsset))  m_CurrentFontAsset;

constexpr void __set_m_CurrentFontAsset(::UnityEngine::TextCore::Text::FontAsset value) ;

constexpr ::UnityEngine::TextCore::Text::FontAsset __get_m_CurrentFontAsset() const;

 ::UnityEngine::Material __declspec(property(get=__get_m_CurrentMaterial, put=__set_m_CurrentMaterial))  m_CurrentMaterial;

constexpr void __set_m_CurrentMaterial(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get_m_CurrentMaterial() const;

 int32_t __declspec(property(get=__get_m_CurrentMaterialIndex, put=__set_m_CurrentMaterialIndex))  m_CurrentMaterialIndex;

constexpr void __set_m_CurrentMaterialIndex(int32_t value) ;

constexpr int32_t __get_m_CurrentMaterialIndex() const;

 ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference> __declspec(property(get=__get_m_MaterialReferenceStack, put=__set_m_MaterialReferenceStack))  m_MaterialReferenceStack;

constexpr void __set_m_MaterialReferenceStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference> value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference> __get_m_MaterialReferenceStack() const;

 float_t __declspec(property(get=__get_m_Padding, put=__set_m_Padding))  m_Padding;

constexpr void __set_m_Padding(float_t value) ;

constexpr float_t __get_m_Padding() const;

 ::UnityEngine::TextCore::Text::SpriteAsset __declspec(property(get=__get_m_CurrentSpriteAsset, put=__set_m_CurrentSpriteAsset))  m_CurrentSpriteAsset;

constexpr void __set_m_CurrentSpriteAsset(::UnityEngine::TextCore::Text::SpriteAsset value) ;

constexpr ::UnityEngine::TextCore::Text::SpriteAsset __get_m_CurrentSpriteAsset() const;

 int32_t __declspec(property(get=__get_m_TotalCharacterCount, put=__set_m_TotalCharacterCount))  m_TotalCharacterCount;

constexpr void __set_m_TotalCharacterCount(int32_t value) ;

constexpr int32_t __get_m_TotalCharacterCount() const;

 float_t __declspec(property(get=__get_m_FontScale, put=__set_m_FontScale))  m_FontScale;

constexpr void __set_m_FontScale(float_t value) ;

constexpr float_t __get_m_FontScale() const;

 float_t __declspec(property(get=__get_m_FontSize, put=__set_m_FontSize))  m_FontSize;

constexpr void __set_m_FontSize(float_t value) ;

constexpr float_t __get_m_FontSize() const;

 float_t __declspec(property(get=__get_m_FontScaleMultiplier, put=__set_m_FontScaleMultiplier))  m_FontScaleMultiplier;

constexpr void __set_m_FontScaleMultiplier(float_t value) ;

constexpr float_t __get_m_FontScaleMultiplier() const;

 float_t __declspec(property(get=__get_m_CurrentFontSize, put=__set_m_CurrentFontSize))  m_CurrentFontSize;

constexpr void __set_m_CurrentFontSize(float_t value) ;

constexpr float_t __get_m_CurrentFontSize() const;

 ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> __declspec(property(get=__get_m_SizeStack, put=__set_m_SizeStack))  m_SizeStack;

constexpr void __set_m_SizeStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> __get_m_SizeStack() const;

 ::UnityEngine::TextCore::Text::FontStyles __declspec(property(get=__get_m_FontStyleInternal, put=__set_m_FontStyleInternal))  m_FontStyleInternal;

constexpr void __set_m_FontStyleInternal(::UnityEngine::TextCore::Text::FontStyles value) ;

constexpr ::UnityEngine::TextCore::Text::FontStyles __get_m_FontStyleInternal() const;

 ::UnityEngine::TextCore::Text::FontStyleStack __declspec(property(get=__get_m_FontStyleStack, put=__set_m_FontStyleStack))  m_FontStyleStack;

constexpr void __set_m_FontStyleStack(::UnityEngine::TextCore::Text::FontStyleStack value) ;

constexpr ::UnityEngine::TextCore::Text::FontStyleStack __get_m_FontStyleStack() const;

 ::UnityEngine::TextCore::Text::TextFontWeight __declspec(property(get=__get_m_FontWeightInternal, put=__set_m_FontWeightInternal))  m_FontWeightInternal;

constexpr void __set_m_FontWeightInternal(::UnityEngine::TextCore::Text::TextFontWeight value) ;

constexpr ::UnityEngine::TextCore::Text::TextFontWeight __get_m_FontWeightInternal() const;

 ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight> __declspec(property(get=__get_m_FontWeightStack, put=__set_m_FontWeightStack))  m_FontWeightStack;

constexpr void __set_m_FontWeightStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight> value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight> __get_m_FontWeightStack() const;

 ::UnityEngine::TextCore::Text::TextAlignment __declspec(property(get=__get_m_LineJustification, put=__set_m_LineJustification))  m_LineJustification;

constexpr void __set_m_LineJustification(::UnityEngine::TextCore::Text::TextAlignment value) ;

constexpr ::UnityEngine::TextCore::Text::TextAlignment __get_m_LineJustification() const;

 ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment> __declspec(property(get=__get_m_LineJustificationStack, put=__set_m_LineJustificationStack))  m_LineJustificationStack;

constexpr void __set_m_LineJustificationStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment> value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment> __get_m_LineJustificationStack() const;

 float_t __declspec(property(get=__get_m_BaselineOffset, put=__set_m_BaselineOffset))  m_BaselineOffset;

constexpr void __set_m_BaselineOffset(float_t value) ;

constexpr float_t __get_m_BaselineOffset() const;

 ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> __declspec(property(get=__get_m_BaselineOffsetStack, put=__set_m_BaselineOffsetStack))  m_BaselineOffsetStack;

constexpr void __set_m_BaselineOffsetStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> __get_m_BaselineOffsetStack() const;

 ::UnityEngine::Color32 __declspec(property(get=__get_m_FontColor32, put=__set_m_FontColor32))  m_FontColor32;

constexpr void __set_m_FontColor32(::UnityEngine::Color32 value) ;

constexpr ::UnityEngine::Color32 __get_m_FontColor32() const;

 ::UnityEngine::Color32 __declspec(property(get=__get_m_HtmlColor, put=__set_m_HtmlColor))  m_HtmlColor;

constexpr void __set_m_HtmlColor(::UnityEngine::Color32 value) ;

constexpr ::UnityEngine::Color32 __get_m_HtmlColor() const;

 ::UnityEngine::Color32 __declspec(property(get=__get_m_UnderlineColor, put=__set_m_UnderlineColor))  m_UnderlineColor;

constexpr void __set_m_UnderlineColor(::UnityEngine::Color32 value) ;

constexpr ::UnityEngine::Color32 __get_m_UnderlineColor() const;

 ::UnityEngine::Color32 __declspec(property(get=__get_m_StrikethroughColor, put=__set_m_StrikethroughColor))  m_StrikethroughColor;

constexpr void __set_m_StrikethroughColor(::UnityEngine::Color32 value) ;

constexpr ::UnityEngine::Color32 __get_m_StrikethroughColor() const;

 ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> __declspec(property(get=__get_m_ColorStack, put=__set_m_ColorStack))  m_ColorStack;

constexpr void __set_m_ColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> __get_m_ColorStack() const;

 ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> __declspec(property(get=__get_m_UnderlineColorStack, put=__set_m_UnderlineColorStack))  m_UnderlineColorStack;

constexpr void __set_m_UnderlineColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> __get_m_UnderlineColorStack() const;

 ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> __declspec(property(get=__get_m_StrikethroughColorStack, put=__set_m_StrikethroughColorStack))  m_StrikethroughColorStack;

constexpr void __set_m_StrikethroughColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> __get_m_StrikethroughColorStack() const;

 ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> __declspec(property(get=__get_m_HighlightColorStack, put=__set_m_HighlightColorStack))  m_HighlightColorStack;

constexpr void __set_m_HighlightColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> __get_m_HighlightColorStack() const;

 ::UnityEngine::TextCore::Text::TextColorGradient __declspec(property(get=__get_m_ColorGradientPreset, put=__set_m_ColorGradientPreset))  m_ColorGradientPreset;

constexpr void __set_m_ColorGradientPreset(::UnityEngine::TextCore::Text::TextColorGradient value) ;

constexpr ::UnityEngine::TextCore::Text::TextColorGradient __get_m_ColorGradientPreset() const;

 ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient> __declspec(property(get=__get_m_ColorGradientStack, put=__set_m_ColorGradientStack))  m_ColorGradientStack;

constexpr void __set_m_ColorGradientStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient> value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient> __get_m_ColorGradientStack() const;

 ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> __declspec(property(get=__get_m_ActionStack, put=__set_m_ActionStack))  m_ActionStack;

constexpr void __set_m_ActionStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> __get_m_ActionStack() const;

 bool __declspec(property(get=__get_m_IsFxMatrixSet, put=__set_m_IsFxMatrixSet))  m_IsFxMatrixSet;

constexpr void __set_m_IsFxMatrixSet(bool value) ;

constexpr bool __get_m_IsFxMatrixSet() const;

 float_t __declspec(property(get=__get_m_LineOffset, put=__set_m_LineOffset))  m_LineOffset;

constexpr void __set_m_LineOffset(float_t value) ;

constexpr float_t __get_m_LineOffset() const;

 float_t __declspec(property(get=__get_m_LineHeight, put=__set_m_LineHeight))  m_LineHeight;

constexpr void __set_m_LineHeight(float_t value) ;

constexpr float_t __get_m_LineHeight() const;

 float_t __declspec(property(get=__get_m_CSpacing, put=__set_m_CSpacing))  m_CSpacing;

constexpr void __set_m_CSpacing(float_t value) ;

constexpr float_t __get_m_CSpacing() const;

 float_t __declspec(property(get=__get_m_MonoSpacing, put=__set_m_MonoSpacing))  m_MonoSpacing;

constexpr void __set_m_MonoSpacing(float_t value) ;

constexpr float_t __get_m_MonoSpacing() const;

 float_t __declspec(property(get=__get_m_XAdvance, put=__set_m_XAdvance))  m_XAdvance;

constexpr void __set_m_XAdvance(float_t value) ;

constexpr float_t __get_m_XAdvance() const;

 float_t __declspec(property(get=__get_m_TagLineIndent, put=__set_m_TagLineIndent))  m_TagLineIndent;

constexpr void __set_m_TagLineIndent(float_t value) ;

constexpr float_t __get_m_TagLineIndent() const;

 float_t __declspec(property(get=__get_m_TagIndent, put=__set_m_TagIndent))  m_TagIndent;

constexpr void __set_m_TagIndent(float_t value) ;

constexpr float_t __get_m_TagIndent() const;

 ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> __declspec(property(get=__get_m_IndentStack, put=__set_m_IndentStack))  m_IndentStack;

constexpr void __set_m_IndentStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> __get_m_IndentStack() const;

 bool __declspec(property(get=__get_m_TagNoParsing, put=__set_m_TagNoParsing))  m_TagNoParsing;

constexpr void __set_m_TagNoParsing(bool value) ;

constexpr bool __get_m_TagNoParsing() const;

 int32_t __declspec(property(get=__get_m_CharacterCount, put=__set_m_CharacterCount))  m_CharacterCount;

constexpr void __set_m_CharacterCount(int32_t value) ;

constexpr int32_t __get_m_CharacterCount() const;

 int32_t __declspec(property(get=__get_m_FirstCharacterOfLine, put=__set_m_FirstCharacterOfLine))  m_FirstCharacterOfLine;

constexpr void __set_m_FirstCharacterOfLine(int32_t value) ;

constexpr int32_t __get_m_FirstCharacterOfLine() const;

 int32_t __declspec(property(get=__get_m_LastCharacterOfLine, put=__set_m_LastCharacterOfLine))  m_LastCharacterOfLine;

constexpr void __set_m_LastCharacterOfLine(int32_t value) ;

constexpr int32_t __get_m_LastCharacterOfLine() const;

 int32_t __declspec(property(get=__get_m_FirstVisibleCharacterOfLine, put=__set_m_FirstVisibleCharacterOfLine))  m_FirstVisibleCharacterOfLine;

constexpr void __set_m_FirstVisibleCharacterOfLine(int32_t value) ;

constexpr int32_t __get_m_FirstVisibleCharacterOfLine() const;

 int32_t __declspec(property(get=__get_m_LastVisibleCharacterOfLine, put=__set_m_LastVisibleCharacterOfLine))  m_LastVisibleCharacterOfLine;

constexpr void __set_m_LastVisibleCharacterOfLine(int32_t value) ;

constexpr int32_t __get_m_LastVisibleCharacterOfLine() const;

 float_t __declspec(property(get=__get_m_MaxLineAscender, put=__set_m_MaxLineAscender))  m_MaxLineAscender;

constexpr void __set_m_MaxLineAscender(float_t value) ;

constexpr float_t __get_m_MaxLineAscender() const;

 float_t __declspec(property(get=__get_m_MaxLineDescender, put=__set_m_MaxLineDescender))  m_MaxLineDescender;

constexpr void __set_m_MaxLineDescender(float_t value) ;

constexpr float_t __get_m_MaxLineDescender() const;

 int32_t __declspec(property(get=__get_m_LineNumber, put=__set_m_LineNumber))  m_LineNumber;

constexpr void __set_m_LineNumber(int32_t value) ;

constexpr int32_t __get_m_LineNumber() const;

 int32_t __declspec(property(get=__get_m_LineVisibleCharacterCount, put=__set_m_LineVisibleCharacterCount))  m_LineVisibleCharacterCount;

constexpr void __set_m_LineVisibleCharacterCount(int32_t value) ;

constexpr int32_t __get_m_LineVisibleCharacterCount() const;

 int32_t __declspec(property(get=__get_m_FirstOverflowCharacterIndex, put=__set_m_FirstOverflowCharacterIndex))  m_FirstOverflowCharacterIndex;

constexpr void __set_m_FirstOverflowCharacterIndex(int32_t value) ;

constexpr int32_t __get_m_FirstOverflowCharacterIndex() const;

 int32_t __declspec(property(get=__get_m_PageNumber, put=__set_m_PageNumber))  m_PageNumber;

constexpr void __set_m_PageNumber(int32_t value) ;

constexpr int32_t __get_m_PageNumber() const;

 float_t __declspec(property(get=__get_m_MarginLeft, put=__set_m_MarginLeft))  m_MarginLeft;

constexpr void __set_m_MarginLeft(float_t value) ;

constexpr float_t __get_m_MarginLeft() const;

 float_t __declspec(property(get=__get_m_MarginRight, put=__set_m_MarginRight))  m_MarginRight;

constexpr void __set_m_MarginRight(float_t value) ;

constexpr float_t __get_m_MarginRight() const;

 float_t __declspec(property(get=__get_m_Width, put=__set_m_Width))  m_Width;

constexpr void __set_m_Width(float_t value) ;

constexpr float_t __get_m_Width() const;

 ::UnityEngine::TextCore::Text::Extents __declspec(property(get=__get_m_MeshExtents, put=__set_m_MeshExtents))  m_MeshExtents;

constexpr void __set_m_MeshExtents(::UnityEngine::TextCore::Text::Extents value) ;

constexpr ::UnityEngine::TextCore::Text::Extents __get_m_MeshExtents() const;

 float_t __declspec(property(get=__get_m_MaxCapHeight, put=__set_m_MaxCapHeight))  m_MaxCapHeight;

constexpr void __set_m_MaxCapHeight(float_t value) ;

constexpr float_t __get_m_MaxCapHeight() const;

 float_t __declspec(property(get=__get_m_MaxAscender, put=__set_m_MaxAscender))  m_MaxAscender;

constexpr void __set_m_MaxAscender(float_t value) ;

constexpr float_t __get_m_MaxAscender() const;

 float_t __declspec(property(get=__get_m_MaxDescender, put=__set_m_MaxDescender))  m_MaxDescender;

constexpr void __set_m_MaxDescender(float_t value) ;

constexpr float_t __get_m_MaxDescender() const;

 bool __declspec(property(get=__get_m_IsNewPage, put=__set_m_IsNewPage))  m_IsNewPage;

constexpr void __set_m_IsNewPage(bool value) ;

constexpr bool __get_m_IsNewPage() const;

 bool __declspec(property(get=__get_m_IsNonBreakingSpace, put=__set_m_IsNonBreakingSpace))  m_IsNonBreakingSpace;

constexpr void __set_m_IsNonBreakingSpace(bool value) ;

constexpr bool __get_m_IsNonBreakingSpace() const;

 ::UnityEngine::TextCore::Text::WordWrapState __declspec(property(get=__get_m_SavedWordWrapState, put=__set_m_SavedWordWrapState))  m_SavedWordWrapState;

constexpr void __set_m_SavedWordWrapState(::UnityEngine::TextCore::Text::WordWrapState value) ;

constexpr ::UnityEngine::TextCore::Text::WordWrapState __get_m_SavedWordWrapState() const;

 ::UnityEngine::TextCore::Text::WordWrapState __declspec(property(get=__get_m_SavedLineState, put=__set_m_SavedLineState))  m_SavedLineState;

constexpr void __set_m_SavedLineState(::UnityEngine::TextCore::Text::WordWrapState value) ;

constexpr ::UnityEngine::TextCore::Text::WordWrapState __get_m_SavedLineState() const;

 int32_t __declspec(property(get=__get_m_LoopCountA, put=__set_m_LoopCountA))  m_LoopCountA;

constexpr void __set_m_LoopCountA(int32_t value) ;

constexpr int32_t __get_m_LoopCountA() const;

 ::UnityEngine::TextCore::Text::TextElementType __declspec(property(get=__get_m_TextElementType, put=__set_m_TextElementType))  m_TextElementType;

constexpr void __set_m_TextElementType(::UnityEngine::TextCore::Text::TextElementType value) ;

constexpr ::UnityEngine::TextCore::Text::TextElementType __get_m_TextElementType() const;

 bool __declspec(property(get=__get_m_IsParsingText, put=__set_m_IsParsingText))  m_IsParsingText;

constexpr void __set_m_IsParsingText(bool value) ;

constexpr bool __get_m_IsParsingText() const;

 int32_t __declspec(property(get=__get_m_SpriteIndex, put=__set_m_SpriteIndex))  m_SpriteIndex;

constexpr void __set_m_SpriteIndex(int32_t value) ;

constexpr int32_t __get_m_SpriteIndex() const;

 ::UnityEngine::Color32 __declspec(property(get=__get_m_SpriteColor, put=__set_m_SpriteColor))  m_SpriteColor;

constexpr void __set_m_SpriteColor(::UnityEngine::Color32 value) ;

constexpr ::UnityEngine::Color32 __get_m_SpriteColor() const;

 ::UnityEngine::TextCore::Text::TextElement __declspec(property(get=__get_m_CachedTextElement, put=__set_m_CachedTextElement))  m_CachedTextElement;

constexpr void __set_m_CachedTextElement(::UnityEngine::TextCore::Text::TextElement value) ;

constexpr ::UnityEngine::TextCore::Text::TextElement __get_m_CachedTextElement() const;

 ::UnityEngine::Color32 __declspec(property(get=__get_m_HighlightColor, put=__set_m_HighlightColor))  m_HighlightColor;

constexpr void __set_m_HighlightColor(::UnityEngine::Color32 value) ;

constexpr ::UnityEngine::Color32 __get_m_HighlightColor() const;

 float_t __declspec(property(get=__get_m_CharWidthAdjDelta, put=__set_m_CharWidthAdjDelta))  m_CharWidthAdjDelta;

constexpr void __set_m_CharWidthAdjDelta(float_t value) ;

constexpr float_t __get_m_CharWidthAdjDelta() const;

 ::UnityEngine::Matrix4x4 __declspec(property(get=__get_m_FxMatrix, put=__set_m_FxMatrix))  m_FxMatrix;

constexpr void __set_m_FxMatrix(::UnityEngine::Matrix4x4 value) ;

constexpr ::UnityEngine::Matrix4x4 __get_m_FxMatrix() const;

 float_t __declspec(property(get=__get_m_MaxFontSize, put=__set_m_MaxFontSize))  m_MaxFontSize;

constexpr void __set_m_MaxFontSize(float_t value) ;

constexpr float_t __get_m_MaxFontSize() const;

 float_t __declspec(property(get=__get_m_MinFontSize, put=__set_m_MinFontSize))  m_MinFontSize;

constexpr void __set_m_MinFontSize(float_t value) ;

constexpr float_t __get_m_MinFontSize() const;

 bool __declspec(property(get=__get_m_IsCharacterWrappingEnabled, put=__set_m_IsCharacterWrappingEnabled))  m_IsCharacterWrappingEnabled;

constexpr void __set_m_IsCharacterWrappingEnabled(bool value) ;

constexpr bool __get_m_IsCharacterWrappingEnabled() const;

 float_t __declspec(property(get=__get_m_StartOfLineAscender, put=__set_m_StartOfLineAscender))  m_StartOfLineAscender;

constexpr void __set_m_StartOfLineAscender(float_t value) ;

constexpr float_t __get_m_StartOfLineAscender() const;

 float_t __declspec(property(get=__get_m_LineSpacingDelta, put=__set_m_LineSpacingDelta))  m_LineSpacingDelta;

constexpr void __set_m_LineSpacingDelta(float_t value) ;

constexpr float_t __get_m_LineSpacingDelta() const;

 bool __declspec(property(get=__get_m_IsMaskingEnabled, put=__set_m_IsMaskingEnabled))  m_IsMaskingEnabled;

constexpr void __set_m_IsMaskingEnabled(bool value) ;

constexpr bool __get_m_IsMaskingEnabled() const;

 ::ArrayW<::UnityEngine::TextCore::Text::MaterialReference> __declspec(property(get=__get_m_MaterialReferences, put=__set_m_MaterialReferences))  m_MaterialReferences;

constexpr void __set_m_MaterialReferences(::ArrayW<::UnityEngine::TextCore::Text::MaterialReference> value) ;

constexpr ::ArrayW<::UnityEngine::TextCore::Text::MaterialReference> __get_m_MaterialReferences() const;

 int32_t __declspec(property(get=__get_m_SpriteCount, put=__set_m_SpriteCount))  m_SpriteCount;

constexpr void __set_m_SpriteCount(int32_t value) ;

constexpr int32_t __get_m_SpriteCount() const;

 ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> __declspec(property(get=__get_m_StyleStack, put=__set_m_StyleStack))  m_StyleStack;

constexpr void __set_m_StyleStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> __get_m_StyleStack() const;

 int32_t __declspec(property(get=__get_m_SpriteAnimationId, put=__set_m_SpriteAnimationId))  m_SpriteAnimationId;

constexpr void __set_m_SpriteAnimationId(int32_t value) ;

constexpr int32_t __get_m_SpriteAnimationId() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_m_InternalTextParsingBuffer, put=__set_m_InternalTextParsingBuffer))  m_InternalTextParsingBuffer;

constexpr void __set_m_InternalTextParsingBuffer(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_m_InternalTextParsingBuffer() const;

 ::ArrayW<::UnityEngine::TextCore::Text::RichTextTagAttribute> __declspec(property(get=__get_m_Attributes, put=__set_m_Attributes))  m_Attributes;

constexpr void __set_m_Attributes(::ArrayW<::UnityEngine::TextCore::Text::RichTextTagAttribute> value) ;

constexpr ::ArrayW<::UnityEngine::TextCore::Text::RichTextTagAttribute> __get_m_Attributes() const;

 ::ArrayW<::UnityEngine::TextCore::Text::XmlTagAttribute> __declspec(property(get=__get_m_XmlAttribute, put=__set_m_XmlAttribute))  m_XmlAttribute;

constexpr void __set_m_XmlAttribute(::ArrayW<::UnityEngine::TextCore::Text::XmlTagAttribute> value) ;

constexpr ::ArrayW<::UnityEngine::TextCore::Text::XmlTagAttribute> __get_m_XmlAttribute() const;

 ::ArrayW<char16_t> __declspec(property(get=__get_m_RichTextTag, put=__set_m_RichTextTag))  m_RichTextTag;

constexpr void __set_m_RichTextTag(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_m_RichTextTag() const;

 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t> __declspec(property(get=__get_m_MaterialReferenceIndexLookup, put=__set_m_MaterialReferenceIndexLookup))  m_MaterialReferenceIndexLookup;

constexpr void __set_m_MaterialReferenceIndexLookup(::System::Collections::Generic::Dictionary_2<int32_t,int32_t> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t> __get_m_MaterialReferenceIndexLookup() const;

 bool __declspec(property(get=__get_m_IsCalculatingPreferredValues, put=__set_m_IsCalculatingPreferredValues))  m_IsCalculatingPreferredValues;

constexpr void __set_m_IsCalculatingPreferredValues(bool value) ;

constexpr bool __get_m_IsCalculatingPreferredValues() const;

 ::UnityEngine::TextCore::Text::SpriteAsset __declspec(property(get=__get_m_DefaultSpriteAsset, put=__set_m_DefaultSpriteAsset))  m_DefaultSpriteAsset;

constexpr void __set_m_DefaultSpriteAsset(::UnityEngine::TextCore::Text::SpriteAsset value) ;

constexpr ::UnityEngine::TextCore::Text::SpriteAsset __get_m_DefaultSpriteAsset() const;

 bool __declspec(property(get=__get_m_TintSprite, put=__set_m_TintSprite))  m_TintSprite;

constexpr void __set_m_TintSprite(bool value) ;

constexpr bool __get_m_TintSprite() const;

 ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter __declspec(property(get=__get_m_Ellipsis, put=__set_m_Ellipsis))  m_Ellipsis;

constexpr void __set_m_Ellipsis(::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter value) ;

constexpr ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter __get_m_Ellipsis() const;

 ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter __declspec(property(get=__get_m_Underline, put=__set_m_Underline))  m_Underline;

constexpr void __set_m_Underline(::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter value) ;

constexpr ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter __get_m_Underline() const;

 bool __declspec(property(get=__get_m_IsUsingBold, put=__set_m_IsUsingBold))  m_IsUsingBold;

constexpr void __set_m_IsUsingBold(bool value) ;

constexpr bool __get_m_IsUsingBold() const;

 bool __declspec(property(get=__get_m_IsSdfShader, put=__set_m_IsSdfShader))  m_IsSdfShader;

constexpr void __set_m_IsSdfShader(bool value) ;

constexpr bool __get_m_IsSdfShader() const;

 ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo> __declspec(property(get=__get_m_InternalTextElementInfo, put=__set_m_InternalTextElementInfo))  m_InternalTextElementInfo;

constexpr void __set_m_InternalTextElementInfo(::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo> value) ;

constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo> __get_m_InternalTextElementInfo() const;

 int32_t __declspec(property(get=__get_m_RecursiveCount, put=__set_m_RecursiveCount))  m_RecursiveCount;

constexpr void __set_m_RecursiveCount(int32_t value) ;

constexpr int32_t __get_m_RecursiveCount() const;


// Methods

/// @brief Method GetTextGenerator addr 0x2bb34e4 size 0x78 virtual false final false
static ::UnityEngine::TextCore::Text::TextGenerator GetTextGenerator() ;

/// @brief Method GenerateText addr 0x2bb3a38 size 0x174 virtual false final false
static void GenerateText(::UnityEngine::TextCore::Text::TextGenerationSettings settings, ::UnityEngine::TextCore::Text::TextInfo textInfo) ;

/// @brief Method GetCursorPosition addr 0x2bb3ce0 size 0x138 virtual false final false
static ::UnityEngine::Vector2 GetCursorPosition(::UnityEngine::TextCore::Text::TextInfo textInfo, ::UnityEngine::Rect screenRect, int32_t index, bool inverseYAxis) ;

/// @brief Method GetPreferredValues addr 0x2bb3e18 size 0x12c virtual false final false
static ::UnityEngine::Vector2 GetPreferredValues(::UnityEngine::TextCore::Text::TextGenerationSettings settings, ::UnityEngine::TextCore::Text::TextInfo textInfo) ;

/// @brief Method Prepare addr 0x2bb3bac size 0x134 virtual false final false
 void Prepare(::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings, ::UnityEngine::TextCore::Text::TextInfo textInfo) ;

/// @brief Method GenerateTextMesh addr 0x2bacc1c size 0x68c8 virtual false final false
 void GenerateTextMesh(::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings, ::UnityEngine::TextCore::Text::TextInfo textInfo) ;

/// @brief Method SaveWordWrappingState addr 0x2bb5038 size 0x218 virtual false final false
 void SaveWordWrappingState(ByRef<::UnityEngine::TextCore::Text::WordWrapState> state, int32_t index, int32_t count, ::UnityEngine::TextCore::Text::TextInfo textInfo) ;

/// @brief Method RestoreWordWrappingState addr 0x2bb5250 size 0x23c virtual false final false
 int32_t RestoreWordWrappingState(ByRef<::UnityEngine::TextCore::Text::WordWrapState> state, ::UnityEngine::TextCore::Text::TextInfo textInfo) ;

/// @brief Method ValidateHtmlTag addr 0x2bb548c size 0x42ac virtual false final false
 bool ValidateHtmlTag(::ArrayW<int32_t> chars, int32_t startIndex, ByRef<int32_t> endIndex, ::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings, ::UnityEngine::TextCore::Text::TextInfo textInfo) ;

/// @brief Method SaveGlyphVertexInfo addr 0x2bb9738 size 0x1dec virtual false final false
 void SaveGlyphVertexInfo(float_t padding, float_t stylePadding, ::UnityEngine::Color32 vertexColor, ::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings, ::UnityEngine::TextCore::Text::TextInfo textInfo) ;

/// @brief Method SaveSpriteVertexInfo addr 0x2bbb524 size 0x1ab4 virtual false final false
 void SaveSpriteVertexInfo(::UnityEngine::Color32 vertexColor, ::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings, ::UnityEngine::TextCore::Text::TextInfo textInfo) ;

/// @brief Method DrawUnderlineMesh addr 0x2bbcfd8 size 0xf68 virtual false final false
 void DrawUnderlineMesh(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ByRef<int32_t> index, float_t startScale, float_t endScale, float_t maxScale, float_t sdfScale, ::UnityEngine::Color32 underlineColor, ::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings, ::UnityEngine::TextCore::Text::TextInfo textInfo) ;

/// @brief Method DrawTextHighlight addr 0x2bbe078 size 0x5ac virtual false final false
 void DrawTextHighlight(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ByRef<int32_t> index, ::UnityEngine::Color32 highlightColor, ::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings, ::UnityEngine::TextCore::Text::TextInfo textInfo) ;

/// @brief Method ClearMesh addr 0x2bbe624 size 0x20 virtual false final false
static void ClearMesh(bool updateMesh, ::UnityEngine::TextCore::Text::TextInfo textInfo) ;

/// @brief Method EnableMasking addr 0x2bbe644 size 0xc virtual false final false
 void EnableMasking() ;

/// @brief Method DisableMasking addr 0x2bbe650 size 0x8 virtual false final false
 void DisableMasking() ;

/// @brief Method SetArraySizes addr 0x2bb41c0 size 0xe78 virtual false final false
 void SetArraySizes(::ArrayW<int32_t> chars, ::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings, ::UnityEngine::TextCore::Text::TextInfo textInfo) ;

/// @brief Method GetTextElement addr 0x2bbe658 size 0x2ec virtual false final false
 ::UnityEngine::TextCore::Text::TextElement GetTextElement(::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings, uint32_t unicode, ::UnityEngine::TextCore::Text::FontAsset fontAsset, ::UnityEngine::TextCore::Text::FontStyles fontStyle, ::UnityEngine::TextCore::Text::TextFontWeight fontWeight, ByRef<bool> isUsingAlternativeTypeface) ;

/// @brief Method ComputeMarginSize addr 0x2bb4080 size 0x140 virtual false final false
 void ComputeMarginSize(::UnityEngine::Rect rect, ::UnityEngine::Vector4 margins) ;

/// @brief Method GetSpecialCharacters addr 0x2bb4058 size 0x28 virtual false final false
 void GetSpecialCharacters(::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings) ;

/// @brief Method GetEllipsisSpecialCharacter addr 0x2bbe944 size 0x18c virtual false final false
 void GetEllipsisSpecialCharacter(::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings) ;

/// @brief Method GetUnderlineSpecialCharacter addr 0x2bbdf40 size 0x138 virtual false final false
 void GetUnderlineSpecialCharacter(::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings) ;

/// @brief Method GetPaddingForMaterial addr 0x2bbead0 size 0x114 virtual false final false
 float_t GetPaddingForMaterial(::UnityEngine::Material material, bool extraPadding) ;

/// @brief Method GetPreferredValuesInternal addr 0x2bb3f44 size 0x114 virtual false final false
 ::UnityEngine::Vector2 GetPreferredValuesInternal(::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings, ::UnityEngine::TextCore::Text::TextInfo textInfo) ;

/// @brief Method CalculatePreferredValues addr 0x2bbebe4 size 0x1c10 virtual true final false
 ::UnityEngine::Vector2 CalculatePreferredValues(float_t defaultFontSize, ::UnityEngine::Vector2 marginSize, bool ignoreTextAutoSizing, ::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings, ::UnityEngine::TextCore::Text::TextInfo textInfo) ;

// Ctor Parameters []
explicit TextGenerator() ;

/// @brief Method .ctor addr 0x2bb355c size 0x4dc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextGenerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextGenerator, "UnityEngine.TextCore.Text", "TextGenerator");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter, "UnityEngine.TextCore.Text", "TextGenerator/SpecialCharacter");
