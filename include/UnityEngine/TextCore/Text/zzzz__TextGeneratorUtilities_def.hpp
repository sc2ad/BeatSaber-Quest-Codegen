#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine::TextCore::Text {
class TextGenerationSettings;
}
namespace UnityEngine::TextCore::Text {
struct TextAlignment;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine::TextCore::Text {
template<typename T>
struct TextProcessingStack_1;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine::TextCore::Text {
class TextStyle;
}
namespace UnityEngine::TextCore::Text {
class TextInfo;
}
namespace UnityEngine::TextCore::Text {
struct FontStyles;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextGeneratorUtilities;
}
// Type: UnityEngine.TextCore.Text::TextGeneratorUtilities
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13523))
// CS Name: UnityEngine.TextCore.Text.TextGeneratorUtilities
class CORDL_TYPE TextGeneratorUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TextGeneratorUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextGeneratorUtilities", modifiers: " const&", def_value: None }]
constexpr TextGeneratorUtilities(TextGeneratorUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextGeneratorUtilities", modifiers: "&&", def_value: None }]
constexpr TextGeneratorUtilities(TextGeneratorUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextGeneratorUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TextGeneratorUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextGeneratorUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextGeneratorUtilities& operator=(TextGeneratorUtilities&& o) noexcept = default;
  constexpr TextGeneratorUtilities& operator=(TextGeneratorUtilities const& o) noexcept = default;
                


// Fields

static ::UnityEngine::Vector2 __declspec(property(get=__get_largePositiveVector2, put=__set_largePositiveVector2))  largePositiveVector2;

static void __set_largePositiveVector2(::UnityEngine::Vector2 value) ;

static ::UnityEngine::Vector2 __get_largePositiveVector2() ;

static ::UnityEngine::Vector2 __declspec(property(get=__get_largeNegativeVector2, put=__set_largeNegativeVector2))  largeNegativeVector2;

static void __set_largeNegativeVector2(::UnityEngine::Vector2 value) ;

static ::UnityEngine::Vector2 __get_largeNegativeVector2() ;


// Methods

/// @brief Method Approximately addr 0x2bcc758 size 0x30 virtual false final false
static bool Approximately(float_t a, float_t b) ;

/// @brief Method HexCharsToColor addr 0x2bcc788 size 0x5bc virtual false final false
static ::UnityEngine::Color32 HexCharsToColor(::ArrayW<char16_t> hexChars, int32_t tagCount) ;

/// @brief Method HexCharsToColor addr 0x2bccd70 size 0x284 virtual false final false
static ::UnityEngine::Color32 HexCharsToColor(::ArrayW<char16_t> hexChars, int32_t startIndex, int32_t length) ;

/// @brief Method HexToInt addr 0x2bccd44 size 0x2c virtual false final false
static int32_t HexToInt(char16_t hex) ;

/// @brief Method ConvertToFloat addr 0x2bccff4 size 0x80 virtual false final false
static float_t ConvertToFloat(::ArrayW<char16_t> chars, int32_t startIndex, int32_t length) ;

/// @brief Method ConvertToFloat addr 0x2bcd074 size 0x164 virtual false final false
static float_t ConvertToFloat(::ArrayW<char16_t> chars, int32_t startIndex, int32_t length, ByRef<int32_t> lastIndex) ;

/// @brief Method PackUV addr 0x2bcd1d8 size 0x60 virtual false final false
static ::UnityEngine::Vector2 PackUV(float_t x, float_t y, float_t scale) ;

/// @brief Method StringToCharArray addr 0x2bcd238 size 0x848 virtual false final false
static void StringToCharArray(::StringW sourceText, ByRef<::ArrayW<int32_t>> charBuffer, ByRef<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>> styleStack, ::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings) ;

/// @brief Method ResizeInternalArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void ResizeInternalArray(ByRef<::ArrayW<T>> array) ;

/// @brief Method IsTagName addr 0x2bcdc78 size 0xa8 virtual false final false
static bool IsTagName(ByRef<::StringW> text, ::StringW tag, int32_t index) ;

/// @brief Method IsTagName addr 0x2bce37c size 0xcc virtual false final false
static bool IsTagName(ByRef<::ArrayW<int32_t>> text, ::StringW tag, int32_t index) ;

/// @brief Method ReplaceOpeningStyleTag addr 0x2bce448 size 0x334 virtual false final false
static bool ReplaceOpeningStyleTag(ByRef<::ArrayW<int32_t>> sourceText, int32_t srcIndex, ByRef<int32_t> srcOffset, ByRef<::ArrayW<int32_t>> charBuffer, ByRef<int32_t> writeIndex, ByRef<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>> styleStack, ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings> generationSettings) ;

/// @brief Method ReplaceOpeningStyleTag addr 0x2bcdd20 size 0x334 virtual false final false
static bool ReplaceOpeningStyleTag(ByRef<::StringW> sourceText, int32_t srcIndex, ByRef<int32_t> srcOffset, ByRef<::ArrayW<int32_t>> charBuffer, ByRef<int32_t> writeIndex, ByRef<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>> styleStack, ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings> generationSettings) ;

/// @brief Method ReplaceClosingStyleTag addr 0x2bce054 size 0x328 virtual false final false
static void ReplaceClosingStyleTag(ByRef<::ArrayW<int32_t>> charBuffer, ByRef<int32_t> writeIndex, ByRef<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>> styleStack, ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings> generationSettings) ;

/// @brief Method GetStyle addr 0x2bce810 size 0xec virtual false final false
static ::UnityEngine::TextCore::Text::TextStyle GetStyle(::UnityEngine::TextCore::Text::TextGenerationSettings generationSetting, int32_t hashCode) ;

/// @brief Method GetUtf32 addr 0x2bcda80 size 0x12c virtual false final false
static int32_t GetUtf32(::StringW text, int32_t i) ;

/// @brief Method GetUtf16 addr 0x2bcdbac size 0xcc virtual false final false
static int32_t GetUtf16(::StringW text, int32_t i) ;

/// @brief Method GetTagHashCode addr 0x2bce77c size 0x94 virtual false final false
static int32_t GetTagHashCode(ByRef<::ArrayW<int32_t>> text, int32_t index, ByRef<int32_t> closeIndex) ;

/// @brief Method GetTagHashCode addr 0x2bce8fc size 0xb8 virtual false final false
static int32_t GetTagHashCode(ByRef<::StringW> text, int32_t index, ByRef<int32_t> closeIndex) ;

/// @brief Method FillCharacterVertexBuffers addr 0x2bce9b4 size 0x880 virtual false final false
static void FillCharacterVertexBuffers(int32_t i, ::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings, ::UnityEngine::TextCore::Text::TextInfo textInfo) ;

/// @brief Method FillSpriteVertexBuffers addr 0x2bcf234 size 0x7f0 virtual false final false
static void FillSpriteVertexBuffers(int32_t i, ::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings, ::UnityEngine::TextCore::Text::TextInfo textInfo) ;

/// @brief Method AdjustLineOffset addr 0x2bcfa24 size 0x180 virtual false final false
static void AdjustLineOffset(int32_t startIndex, int32_t endIndex, float_t offset, ::UnityEngine::TextCore::Text::TextInfo textInfo) ;

/// @brief Method ResizeLineExtents addr 0x2bcfba4 size 0x1ac virtual false final false
static void ResizeLineExtents(int32_t size, ::UnityEngine::TextCore::Text::TextInfo textInfo) ;

/// @brief Method LegacyStyleToNewStyle addr 0x2bcfd50 size 0x10 virtual false final false
static ::UnityEngine::TextCore::Text::FontStyles LegacyStyleToNewStyle(::UnityEngine::FontStyle fontStyle) ;

/// @brief Method LegacyAlignmentToNewAlignment addr 0x2bcfd60 size 0x24 virtual false final false
static ::UnityEngine::TextCore::Text::TextAlignment LegacyAlignmentToNewAlignment(::UnityEngine::TextAnchor anchor) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextGeneratorUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextGeneratorUtilities, "UnityEngine.TextCore.Text", "TextGeneratorUtilities");
