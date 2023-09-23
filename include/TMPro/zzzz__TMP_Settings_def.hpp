#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace TMPro {
class TMP_StyleSheet;
}
namespace UnityEngine {
class TextAsset;
}
namespace UnityEngine {
struct Vector2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
class TMP_SpriteAsset;
}
// Forward declare root types
namespace TMPro {
class TMP_Settings;
}
namespace TMPro {
class TMPro__TMP_Settings__LineBreakingTable;
}
// Type: ::LineBreakingTable
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12356))
// CS Name: TMPro.TMP_Settings::LineBreakingTable
class CORDL_TYPE TMPro__TMP_Settings__LineBreakingTable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TMPro__TMP_Settings__LineBreakingTable() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_Settings__LineBreakingTable", modifiers: " const&", def_value: None }]
constexpr TMPro__TMP_Settings__LineBreakingTable(TMPro__TMP_Settings__LineBreakingTable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_Settings__LineBreakingTable", modifiers: "&&", def_value: None }]
constexpr TMPro__TMP_Settings__LineBreakingTable(TMPro__TMP_Settings__LineBreakingTable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_Settings__LineBreakingTable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMPro__TMP_Settings__LineBreakingTable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__TMP_Settings__LineBreakingTable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__TMP_Settings__LineBreakingTable& operator=(TMPro__TMP_Settings__LineBreakingTable&& o) noexcept = default;
  constexpr TMPro__TMP_Settings__LineBreakingTable& operator=(TMPro__TMP_Settings__LineBreakingTable const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<int32_t,char16_t> __declspec(property(get=__get_leadingCharacters, put=__set_leadingCharacters))  leadingCharacters;

constexpr void __set_leadingCharacters(System::Collections::Generic::Dictionary_2<int32_t,char16_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,char16_t> __get_leadingCharacters() const;

 System::Collections::Generic::Dictionary_2<int32_t,char16_t> __declspec(property(get=__get_followingCharacters, put=__set_followingCharacters))  followingCharacters;

constexpr void __set_followingCharacters(System::Collections::Generic::Dictionary_2<int32_t,char16_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,char16_t> __get_followingCharacters() const;


// Methods

// Ctor Parameters []
explicit TMPro__TMP_Settings__LineBreakingTable() ;

/// @brief Method .ctor addr 0x2aa8b94 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TMP_Settings
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12357))
// CS Name: TMPro.TMP_Settings
class CORDL_TYPE TMP_Settings : public UnityEngine::ScriptableObject {
public:
// Declarations
using LineBreakingTable = TMPro::TMPro__TMP_Settings__LineBreakingTable;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~TMP_Settings() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_Settings", modifiers: " const&", def_value: None }]
constexpr TMP_Settings(TMP_Settings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_Settings", modifiers: "&&", def_value: None }]
constexpr TMP_Settings(TMP_Settings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_Settings(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr TMP_Settings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_Settings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_Settings& operator=(TMP_Settings&& o) noexcept = default;
  constexpr TMP_Settings& operator=(TMP_Settings const& o) noexcept = default;
                


// Fields

static TMPro::TMP_Settings __declspec(property(get=__get_s_Instance, put=__set_s_Instance))  s_Instance;

static void __set_s_Instance(TMPro::TMP_Settings value) ;

static TMPro::TMP_Settings __get_s_Instance() ;

 bool __declspec(property(get=__get_m_enableWordWrapping, put=__set_m_enableWordWrapping))  m_enableWordWrapping;

constexpr void __set_m_enableWordWrapping(bool value) ;

constexpr bool __get_m_enableWordWrapping() const;

 bool __declspec(property(get=__get_m_enableKerning, put=__set_m_enableKerning))  m_enableKerning;

constexpr void __set_m_enableKerning(bool value) ;

constexpr bool __get_m_enableKerning() const;

 bool __declspec(property(get=__get_m_enableExtraPadding, put=__set_m_enableExtraPadding))  m_enableExtraPadding;

constexpr void __set_m_enableExtraPadding(bool value) ;

constexpr bool __get_m_enableExtraPadding() const;

 bool __declspec(property(get=__get_m_enableTintAllSprites, put=__set_m_enableTintAllSprites))  m_enableTintAllSprites;

constexpr void __set_m_enableTintAllSprites(bool value) ;

constexpr bool __get_m_enableTintAllSprites() const;

 bool __declspec(property(get=__get_m_enableParseEscapeCharacters, put=__set_m_enableParseEscapeCharacters))  m_enableParseEscapeCharacters;

constexpr void __set_m_enableParseEscapeCharacters(bool value) ;

constexpr bool __get_m_enableParseEscapeCharacters() const;

 bool __declspec(property(get=__get_m_EnableRaycastTarget, put=__set_m_EnableRaycastTarget))  m_EnableRaycastTarget;

constexpr void __set_m_EnableRaycastTarget(bool value) ;

constexpr bool __get_m_EnableRaycastTarget() const;

 bool __declspec(property(get=__get_m_GetFontFeaturesAtRuntime, put=__set_m_GetFontFeaturesAtRuntime))  m_GetFontFeaturesAtRuntime;

constexpr void __set_m_GetFontFeaturesAtRuntime(bool value) ;

constexpr bool __get_m_GetFontFeaturesAtRuntime() const;

 int32_t __declspec(property(get=__get_m_missingGlyphCharacter, put=__set_m_missingGlyphCharacter))  m_missingGlyphCharacter;

constexpr void __set_m_missingGlyphCharacter(int32_t value) ;

constexpr int32_t __get_m_missingGlyphCharacter() const;

 bool __declspec(property(get=__get_m_warningsDisabled, put=__set_m_warningsDisabled))  m_warningsDisabled;

constexpr void __set_m_warningsDisabled(bool value) ;

constexpr bool __get_m_warningsDisabled() const;

 TMPro::TMP_FontAsset __declspec(property(get=__get_m_defaultFontAsset, put=__set_m_defaultFontAsset))  m_defaultFontAsset;

constexpr void __set_m_defaultFontAsset(TMPro::TMP_FontAsset value) ;

constexpr TMPro::TMP_FontAsset __get_m_defaultFontAsset() const;

 ::StringW __declspec(property(get=__get_m_defaultFontAssetPath, put=__set_m_defaultFontAssetPath))  m_defaultFontAssetPath;

constexpr void __set_m_defaultFontAssetPath(::StringW value) ;

constexpr ::StringW __get_m_defaultFontAssetPath() const;

 float_t __declspec(property(get=__get_m_defaultFontSize, put=__set_m_defaultFontSize))  m_defaultFontSize;

constexpr void __set_m_defaultFontSize(float_t value) ;

constexpr float_t __get_m_defaultFontSize() const;

 float_t __declspec(property(get=__get_m_defaultAutoSizeMinRatio, put=__set_m_defaultAutoSizeMinRatio))  m_defaultAutoSizeMinRatio;

constexpr void __set_m_defaultAutoSizeMinRatio(float_t value) ;

constexpr float_t __get_m_defaultAutoSizeMinRatio() const;

 float_t __declspec(property(get=__get_m_defaultAutoSizeMaxRatio, put=__set_m_defaultAutoSizeMaxRatio))  m_defaultAutoSizeMaxRatio;

constexpr void __set_m_defaultAutoSizeMaxRatio(float_t value) ;

constexpr float_t __get_m_defaultAutoSizeMaxRatio() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_defaultTextMeshProTextContainerSize, put=__set_m_defaultTextMeshProTextContainerSize))  m_defaultTextMeshProTextContainerSize;

constexpr void __set_m_defaultTextMeshProTextContainerSize(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_defaultTextMeshProTextContainerSize() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_defaultTextMeshProUITextContainerSize, put=__set_m_defaultTextMeshProUITextContainerSize))  m_defaultTextMeshProUITextContainerSize;

constexpr void __set_m_defaultTextMeshProUITextContainerSize(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_defaultTextMeshProUITextContainerSize() const;

 bool __declspec(property(get=__get_m_autoSizeTextContainer, put=__set_m_autoSizeTextContainer))  m_autoSizeTextContainer;

constexpr void __set_m_autoSizeTextContainer(bool value) ;

constexpr bool __get_m_autoSizeTextContainer() const;

 bool __declspec(property(get=__get_m_IsTextObjectScaleStatic, put=__set_m_IsTextObjectScaleStatic))  m_IsTextObjectScaleStatic;

constexpr void __set_m_IsTextObjectScaleStatic(bool value) ;

constexpr bool __get_m_IsTextObjectScaleStatic() const;

 System::Collections::Generic::List_1<TMPro::TMP_FontAsset> __declspec(property(get=__get_m_fallbackFontAssets, put=__set_m_fallbackFontAssets))  m_fallbackFontAssets;

constexpr void __set_m_fallbackFontAssets(System::Collections::Generic::List_1<TMPro::TMP_FontAsset> value) ;

constexpr System::Collections::Generic::List_1<TMPro::TMP_FontAsset> __get_m_fallbackFontAssets() const;

 bool __declspec(property(get=__get_m_matchMaterialPreset, put=__set_m_matchMaterialPreset))  m_matchMaterialPreset;

constexpr void __set_m_matchMaterialPreset(bool value) ;

constexpr bool __get_m_matchMaterialPreset() const;

 TMPro::TMP_SpriteAsset __declspec(property(get=__get_m_defaultSpriteAsset, put=__set_m_defaultSpriteAsset))  m_defaultSpriteAsset;

constexpr void __set_m_defaultSpriteAsset(TMPro::TMP_SpriteAsset value) ;

constexpr TMPro::TMP_SpriteAsset __get_m_defaultSpriteAsset() const;

 ::StringW __declspec(property(get=__get_m_defaultSpriteAssetPath, put=__set_m_defaultSpriteAssetPath))  m_defaultSpriteAssetPath;

constexpr void __set_m_defaultSpriteAssetPath(::StringW value) ;

constexpr ::StringW __get_m_defaultSpriteAssetPath() const;

 bool __declspec(property(get=__get_m_enableEmojiSupport, put=__set_m_enableEmojiSupport))  m_enableEmojiSupport;

constexpr void __set_m_enableEmojiSupport(bool value) ;

constexpr bool __get_m_enableEmojiSupport() const;

 uint32_t __declspec(property(get=__get_m_MissingCharacterSpriteUnicode, put=__set_m_MissingCharacterSpriteUnicode))  m_MissingCharacterSpriteUnicode;

constexpr void __set_m_MissingCharacterSpriteUnicode(uint32_t value) ;

constexpr uint32_t __get_m_MissingCharacterSpriteUnicode() const;

 ::StringW __declspec(property(get=__get_m_defaultColorGradientPresetsPath, put=__set_m_defaultColorGradientPresetsPath))  m_defaultColorGradientPresetsPath;

constexpr void __set_m_defaultColorGradientPresetsPath(::StringW value) ;

constexpr ::StringW __get_m_defaultColorGradientPresetsPath() const;

 TMPro::TMP_StyleSheet __declspec(property(get=__get_m_defaultStyleSheet, put=__set_m_defaultStyleSheet))  m_defaultStyleSheet;

constexpr void __set_m_defaultStyleSheet(TMPro::TMP_StyleSheet value) ;

constexpr TMPro::TMP_StyleSheet __get_m_defaultStyleSheet() const;

 ::StringW __declspec(property(get=__get_m_StyleSheetsResourcePath, put=__set_m_StyleSheetsResourcePath))  m_StyleSheetsResourcePath;

constexpr void __set_m_StyleSheetsResourcePath(::StringW value) ;

constexpr ::StringW __get_m_StyleSheetsResourcePath() const;

 UnityEngine::TextAsset __declspec(property(get=__get_m_leadingCharacters, put=__set_m_leadingCharacters))  m_leadingCharacters;

constexpr void __set_m_leadingCharacters(UnityEngine::TextAsset value) ;

constexpr UnityEngine::TextAsset __get_m_leadingCharacters() const;

 UnityEngine::TextAsset __declspec(property(get=__get_m_followingCharacters, put=__set_m_followingCharacters))  m_followingCharacters;

constexpr void __set_m_followingCharacters(UnityEngine::TextAsset value) ;

constexpr UnityEngine::TextAsset __get_m_followingCharacters() const;

 TMPro::TMPro__TMP_Settings__LineBreakingTable __declspec(property(get=__get_m_linebreakingRules, put=__set_m_linebreakingRules))  m_linebreakingRules;

constexpr void __set_m_linebreakingRules(TMPro::TMPro__TMP_Settings__LineBreakingTable value) ;

constexpr TMPro::TMPro__TMP_Settings__LineBreakingTable __get_m_linebreakingRules() const;

 bool __declspec(property(get=__get_m_UseModernHangulLineBreakingRules, put=__set_m_UseModernHangulLineBreakingRules))  m_UseModernHangulLineBreakingRules;

constexpr void __set_m_UseModernHangulLineBreakingRules(bool value) ;

constexpr bool __get_m_UseModernHangulLineBreakingRules() const;


// Properties

static ::StringW __declspec(property(get=get_version))  version;

static bool __declspec(property(get=get_enableWordWrapping))  enableWordWrapping;

static bool __declspec(property(get=get_enableKerning))  enableKerning;

static bool __declspec(property(get=get_enableExtraPadding))  enableExtraPadding;

static bool __declspec(property(get=get_enableTintAllSprites))  enableTintAllSprites;

static bool __declspec(property(get=get_enableParseEscapeCharacters))  enableParseEscapeCharacters;

static bool __declspec(property(get=get_enableRaycastTarget))  enableRaycastTarget;

static bool __declspec(property(get=get_getFontFeaturesAtRuntime))  getFontFeaturesAtRuntime;

static int32_t __declspec(property(get=get_missingGlyphCharacter, put=set_missingGlyphCharacter))  missingGlyphCharacter;

static bool __declspec(property(get=get_warningsDisabled))  warningsDisabled;

static TMPro::TMP_FontAsset __declspec(property(get=get_defaultFontAsset))  defaultFontAsset;

static ::StringW __declspec(property(get=get_defaultFontAssetPath))  defaultFontAssetPath;

static float_t __declspec(property(get=get_defaultFontSize))  defaultFontSize;

static float_t __declspec(property(get=get_defaultTextAutoSizingMinRatio))  defaultTextAutoSizingMinRatio;

static float_t __declspec(property(get=get_defaultTextAutoSizingMaxRatio))  defaultTextAutoSizingMaxRatio;

static UnityEngine::Vector2 __declspec(property(get=get_defaultTextMeshProTextContainerSize))  defaultTextMeshProTextContainerSize;

static UnityEngine::Vector2 __declspec(property(get=get_defaultTextMeshProUITextContainerSize))  defaultTextMeshProUITextContainerSize;

static bool __declspec(property(get=get_autoSizeTextContainer))  autoSizeTextContainer;

static bool __declspec(property(get=get_isTextObjectScaleStatic, put=set_isTextObjectScaleStatic))  isTextObjectScaleStatic;

static System::Collections::Generic::List_1<TMPro::TMP_FontAsset> __declspec(property(get=get_fallbackFontAssets))  fallbackFontAssets;

static bool __declspec(property(get=get_matchMaterialPreset))  matchMaterialPreset;

static TMPro::TMP_SpriteAsset __declspec(property(get=get_defaultSpriteAsset))  defaultSpriteAsset;

static ::StringW __declspec(property(get=get_defaultSpriteAssetPath))  defaultSpriteAssetPath;

static bool __declspec(property(get=get_enableEmojiSupport, put=set_enableEmojiSupport))  enableEmojiSupport;

static uint32_t __declspec(property(get=get_missingCharacterSpriteUnicode, put=set_missingCharacterSpriteUnicode))  missingCharacterSpriteUnicode;

static ::StringW __declspec(property(get=get_defaultColorGradientPresetsPath))  defaultColorGradientPresetsPath;

static TMPro::TMP_StyleSheet __declspec(property(get=get_defaultStyleSheet))  defaultStyleSheet;

static ::StringW __declspec(property(get=get_styleSheetsResourcePath))  styleSheetsResourcePath;

static UnityEngine::TextAsset __declspec(property(get=get_leadingCharacters))  leadingCharacters;

static UnityEngine::TextAsset __declspec(property(get=get_followingCharacters))  followingCharacters;

static TMPro::TMPro__TMP_Settings__LineBreakingTable __declspec(property(get=get_linebreakingRules))  linebreakingRules;

static bool __declspec(property(get=get_useModernHangulLineBreakingRules, put=set_useModernHangulLineBreakingRules))  useModernHangulLineBreakingRules;

static TMPro::TMP_Settings __declspec(property(get=get_instance))  instance;


// Methods

/// @brief Method get_version addr 0x2aa8254 size 0x40 virtual false final false
static ::StringW get_version() ;

/// @brief Method get_enableWordWrapping addr 0x2aa8294 size 0x1c virtual false final false
static bool get_enableWordWrapping() ;

/// @brief Method get_enableKerning addr 0x2aa837c size 0x1c virtual false final false
static bool get_enableKerning() ;

/// @brief Method get_enableExtraPadding addr 0x2aa8398 size 0x1c virtual false final false
static bool get_enableExtraPadding() ;

/// @brief Method get_enableTintAllSprites addr 0x2aa83b4 size 0x1c virtual false final false
static bool get_enableTintAllSprites() ;

/// @brief Method get_enableParseEscapeCharacters addr 0x2aa83d0 size 0x1c virtual false final false
static bool get_enableParseEscapeCharacters() ;

/// @brief Method get_enableRaycastTarget addr 0x2aa83ec size 0x1c virtual false final false
static bool get_enableRaycastTarget() ;

/// @brief Method get_getFontFeaturesAtRuntime addr 0x2aa8408 size 0x1c virtual false final false
static bool get_getFontFeaturesAtRuntime() ;

/// @brief Method get_missingGlyphCharacter addr 0x2aa8424 size 0x1c virtual false final false
static int32_t get_missingGlyphCharacter() ;

/// @brief Method set_missingGlyphCharacter addr 0x2aa8440 size 0x20 virtual false final false
static void set_missingGlyphCharacter(int32_t value) ;

/// @brief Method get_warningsDisabled addr 0x2aa8460 size 0x1c virtual false final false
static bool get_warningsDisabled() ;

/// @brief Method get_defaultFontAsset addr 0x2aa847c size 0x1c virtual false final false
static TMPro::TMP_FontAsset get_defaultFontAsset() ;

/// @brief Method get_defaultFontAssetPath addr 0x2aa8498 size 0x1c virtual false final false
static ::StringW get_defaultFontAssetPath() ;

/// @brief Method get_defaultFontSize addr 0x2aa84b4 size 0x1c virtual false final false
static float_t get_defaultFontSize() ;

/// @brief Method get_defaultTextAutoSizingMinRatio addr 0x2aa84d0 size 0x1c virtual false final false
static float_t get_defaultTextAutoSizingMinRatio() ;

/// @brief Method get_defaultTextAutoSizingMaxRatio addr 0x2aa84ec size 0x1c virtual false final false
static float_t get_defaultTextAutoSizingMaxRatio() ;

/// @brief Method get_defaultTextMeshProTextContainerSize addr 0x2aa8508 size 0x1c virtual false final false
static UnityEngine::Vector2 get_defaultTextMeshProTextContainerSize() ;

/// @brief Method get_defaultTextMeshProUITextContainerSize addr 0x2aa8524 size 0x1c virtual false final false
static UnityEngine::Vector2 get_defaultTextMeshProUITextContainerSize() ;

/// @brief Method get_autoSizeTextContainer addr 0x2aa8540 size 0x1c virtual false final false
static bool get_autoSizeTextContainer() ;

/// @brief Method get_isTextObjectScaleStatic addr 0x2aa855c size 0x1c virtual false final false
static bool get_isTextObjectScaleStatic() ;

/// @brief Method set_isTextObjectScaleStatic addr 0x2aa8578 size 0x24 virtual false final false
static void set_isTextObjectScaleStatic(bool value) ;

/// @brief Method get_fallbackFontAssets addr 0x2aa859c size 0x1c virtual false final false
static System::Collections::Generic::List_1<TMPro::TMP_FontAsset> get_fallbackFontAssets() ;

/// @brief Method get_matchMaterialPreset addr 0x2aa85b8 size 0x1c virtual false final false
static bool get_matchMaterialPreset() ;

/// @brief Method get_defaultSpriteAsset addr 0x2aa85d4 size 0x1c virtual false final false
static TMPro::TMP_SpriteAsset get_defaultSpriteAsset() ;

/// @brief Method get_defaultSpriteAssetPath addr 0x2aa85f0 size 0x1c virtual false final false
static ::StringW get_defaultSpriteAssetPath() ;

/// @brief Method get_enableEmojiSupport addr 0x2aa860c size 0x1c virtual false final false
static bool get_enableEmojiSupport() ;

/// @brief Method set_enableEmojiSupport addr 0x2aa8628 size 0x24 virtual false final false
static void set_enableEmojiSupport(bool value) ;

/// @brief Method get_missingCharacterSpriteUnicode addr 0x2aa864c size 0x1c virtual false final false
static uint32_t get_missingCharacterSpriteUnicode() ;

/// @brief Method set_missingCharacterSpriteUnicode addr 0x2aa8668 size 0x20 virtual false final false
static void set_missingCharacterSpriteUnicode(uint32_t value) ;

/// @brief Method get_defaultColorGradientPresetsPath addr 0x2aa8688 size 0x1c virtual false final false
static ::StringW get_defaultColorGradientPresetsPath() ;

/// @brief Method get_defaultStyleSheet addr 0x2aa86a4 size 0x1c virtual false final false
static TMPro::TMP_StyleSheet get_defaultStyleSheet() ;

/// @brief Method get_styleSheetsResourcePath addr 0x2aa86c0 size 0x1c virtual false final false
static ::StringW get_styleSheetsResourcePath() ;

/// @brief Method get_leadingCharacters addr 0x2aa86dc size 0x1c virtual false final false
static UnityEngine::TextAsset get_leadingCharacters() ;

/// @brief Method get_followingCharacters addr 0x2aa86f8 size 0x1c virtual false final false
static UnityEngine::TextAsset get_followingCharacters() ;

/// @brief Method get_linebreakingRules addr 0x2aa8714 size 0x30 virtual false final false
static TMPro::TMPro__TMP_Settings__LineBreakingTable get_linebreakingRules() ;

/// @brief Method get_useModernHangulLineBreakingRules addr 0x2aa8854 size 0x1c virtual false final false
static bool get_useModernHangulLineBreakingRules() ;

/// @brief Method set_useModernHangulLineBreakingRules addr 0x2aa8870 size 0x24 virtual false final false
static void set_useModernHangulLineBreakingRules(bool value) ;

/// @brief Method get_instance addr 0x2aa82b0 size 0xcc virtual false final false
static TMPro::TMP_Settings get_instance() ;

/// @brief Method LoadDefaultSettings addr 0x2aa8894 size 0xf8 virtual false final false
static TMPro::TMP_Settings LoadDefaultSettings() ;

/// @brief Method GetSettings addr 0x2aa898c size 0x7c virtual false final false
static TMPro::TMP_Settings GetSettings() ;

/// @brief Method GetFontAsset addr 0x2aa8a08 size 0x84 virtual false final false
static TMPro::TMP_FontAsset GetFontAsset() ;

/// @brief Method GetSpriteAsset addr 0x2aa8a8c size 0x84 virtual false final false
static TMPro::TMP_SpriteAsset GetSpriteAsset() ;

/// @brief Method GetStyleSheet addr 0x2aa8b10 size 0x84 virtual false final false
static TMPro::TMP_StyleSheet GetStyleSheet() ;

/// @brief Method LoadLinebreakingRules addr 0x2aa8744 size 0x110 virtual false final false
static void LoadLinebreakingRules() ;

/// @brief Method GetCharacters addr 0x2aa8b9c size 0x120 virtual false final false
static System::Collections::Generic::Dictionary_2<int32_t,char16_t> GetCharacters(UnityEngine::TextAsset file) ;

// Ctor Parameters []
explicit TMP_Settings() ;

/// @brief Method .ctor addr 0x2aa8cbc size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::TMP_Settings);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Settings, "TMPro", "TMP_Settings");
NEED_NO_BOX(TMPro::TMPro__TMP_Settings__LineBreakingTable);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_Settings__LineBreakingTable, "TMPro", "TMP_Settings/LineBreakingTable");
