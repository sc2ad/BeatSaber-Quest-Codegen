#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAsset_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::TextCore::Text {
class Character;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphRenderMode;
}
namespace UnityEngine::TextCore::LowLevel {
struct FontEngineError;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::TextCore {
class Glyph;
}
namespace UnityEngine::TextCore::Text {
class UnityEngine__TextCore__Text__FontAsset____c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::TextCore::Text {
struct AtlasPopulationMode;
}
namespace UnityEngine::TextCore::Text {
class FontFeatureTable;
}
namespace UnityEngine::TextCore {
struct GlyphRect;
}
namespace UnityEngine::TextCore {
struct FaceInfo;
}
namespace UnityEngine::TextCore::Text {
struct FontWeightPair;
}
namespace UnityEngine::TextCore::Text {
struct FontAssetCreationEditorSettings;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
class Texture2D;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
class UnityEngine__TextCore__Text__FontAsset____c;
}
// Type: ::<>c
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13494))
// CS Name: UnityEngine.TextCore.Text.FontAsset::<>c
class CORDL_TYPE UnityEngine__TextCore__Text__FontAsset____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__TextCore__Text__FontAsset____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__TextCore__Text__FontAsset____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__TextCore__Text__FontAsset____c(UnityEngine__TextCore__Text__FontAsset____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__TextCore__Text__FontAsset____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__TextCore__Text__FontAsset____c(UnityEngine__TextCore__Text__FontAsset____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__TextCore__Text__FontAsset____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__TextCore__Text__FontAsset____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__TextCore__Text__FontAsset____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__TextCore__Text__FontAsset____c& operator=(UnityEngine__TextCore__Text__FontAsset____c&& o) noexcept = default;
  constexpr UnityEngine__TextCore__Text__FontAsset____c& operator=(UnityEngine__TextCore__Text__FontAsset____c const& o) noexcept = default;
                


// Fields

static UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__FontAsset____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__FontAsset____c value) ;

static UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__FontAsset____c __get___9() ;

static System::Func_2<UnityEngine::TextCore::Text::Character,uint32_t> __declspec(property(get=__get___9__144_0, put=__set___9__144_0))  __9__144_0;

static void __set___9__144_0(System::Func_2<UnityEngine::TextCore::Text::Character,uint32_t> value) ;

static System::Func_2<UnityEngine::TextCore::Text::Character,uint32_t> __get___9__144_0() ;

static System::Func_2<UnityEngine::TextCore::Glyph,uint32_t> __declspec(property(get=__get___9__145_0, put=__set___9__145_0))  __9__145_0;

static void __set___9__145_0(System::Func_2<UnityEngine::TextCore::Glyph,uint32_t> value) ;

static System::Func_2<UnityEngine::TextCore::Glyph,uint32_t> __get___9__145_0() ;


// Methods

static UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__FontAsset____c New_ctor() ;

/// @brief Method .ctor addr 0x2bc8668 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SortCharacterTable>b__144_0 addr 0x2bc8670 size 0x18 virtual false final false
 uint32_t _SortCharacterTable_b__144_0(UnityEngine::TextCore::Text::Character c) ;

/// @brief Method <SortGlyphTable>b__145_0 addr 0x2bc8688 size 0x18 virtual false final false
 uint32_t _SortGlyphTable_b__145_0(UnityEngine::TextCore::Glyph c) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
// Type: UnityEngine.TextCore.Text::FontAsset
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13537))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13495))
// CS Name: UnityEngine.TextCore.Text.FontAsset
class CORDL_TYPE FontAsset : public UnityEngine::TextCore::Text::TextAsset {
public:
// Declarations
using __c = UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__FontAsset____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1e0};

virtual ~FontAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "FontAsset", modifiers: " const&", def_value: None }]
constexpr FontAsset(FontAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FontAsset", modifiers: "&&", def_value: None }]
constexpr FontAsset(FontAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FontAsset(void* ptr) noexcept : UnityEngine::TextCore::Text::TextAsset(ptr) {
}


  constexpr FontAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FontAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FontAsset& operator=(FontAsset&& o) noexcept = default;
  constexpr FontAsset& operator=(FontAsset const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_SourceFontFileGUID, put=__set_m_SourceFontFileGUID))  m_SourceFontFileGUID;

constexpr void __set_m_SourceFontFileGUID(::StringW value) ;

constexpr ::StringW __get_m_SourceFontFileGUID() const;

 UnityEngine::Font __declspec(property(get=__get_m_SourceFontFile, put=__set_m_SourceFontFile))  m_SourceFontFile;

constexpr void __set_m_SourceFontFile(UnityEngine::Font value) ;

constexpr UnityEngine::Font __get_m_SourceFontFile() const;

 UnityEngine::TextCore::Text::AtlasPopulationMode __declspec(property(get=__get_m_AtlasPopulationMode, put=__set_m_AtlasPopulationMode))  m_AtlasPopulationMode;

constexpr void __set_m_AtlasPopulationMode(UnityEngine::TextCore::Text::AtlasPopulationMode value) ;

constexpr UnityEngine::TextCore::Text::AtlasPopulationMode __get_m_AtlasPopulationMode() const;

 bool __declspec(property(get=__get_InternalDynamicOS, put=__set_InternalDynamicOS))  InternalDynamicOS;

constexpr void __set_InternalDynamicOS(bool value) ;

constexpr bool __get_InternalDynamicOS() const;

 UnityEngine::TextCore::FaceInfo __declspec(property(get=__get_m_FaceInfo, put=__set_m_FaceInfo))  m_FaceInfo;

constexpr void __set_m_FaceInfo(UnityEngine::TextCore::FaceInfo value) ;

constexpr UnityEngine::TextCore::FaceInfo __get_m_FaceInfo() const;

 int32_t __declspec(property(get=__get_m_FamilyNameHashCode, put=__set_m_FamilyNameHashCode))  m_FamilyNameHashCode;

constexpr void __set_m_FamilyNameHashCode(int32_t value) ;

constexpr int32_t __get_m_FamilyNameHashCode() const;

 int32_t __declspec(property(get=__get_m_StyleNameHashCode, put=__set_m_StyleNameHashCode))  m_StyleNameHashCode;

constexpr void __set_m_StyleNameHashCode(int32_t value) ;

constexpr int32_t __get_m_StyleNameHashCode() const;

 ::ArrayW<UnityEngine::TextCore::Text::FontWeightPair> __declspec(property(get=__get_m_FontWeightTable, put=__set_m_FontWeightTable))  m_FontWeightTable;

constexpr void __set_m_FontWeightTable(::ArrayW<UnityEngine::TextCore::Text::FontWeightPair> value) ;

constexpr ::ArrayW<UnityEngine::TextCore::Text::FontWeightPair> __get_m_FontWeightTable() const;

 System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph> __declspec(property(get=__get_m_GlyphTable, put=__set_m_GlyphTable))  m_GlyphTable;

constexpr void __set_m_GlyphTable(System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph> __get_m_GlyphTable() const;

 System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Glyph> __declspec(property(get=__get_m_GlyphLookupDictionary, put=__set_m_GlyphLookupDictionary))  m_GlyphLookupDictionary;

constexpr void __set_m_GlyphLookupDictionary(System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Glyph> value) ;

constexpr System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Glyph> __get_m_GlyphLookupDictionary() const;

 System::Collections::Generic::List_1<UnityEngine::TextCore::Text::Character> __declspec(property(get=__get_m_CharacterTable, put=__set_m_CharacterTable))  m_CharacterTable;

constexpr void __set_m_CharacterTable(System::Collections::Generic::List_1<UnityEngine::TextCore::Text::Character> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::TextCore::Text::Character> __get_m_CharacterTable() const;

 System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Text::Character> __declspec(property(get=__get_m_CharacterLookupDictionary, put=__set_m_CharacterLookupDictionary))  m_CharacterLookupDictionary;

constexpr void __set_m_CharacterLookupDictionary(System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Text::Character> value) ;

constexpr System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Text::Character> __get_m_CharacterLookupDictionary() const;

 UnityEngine::Texture2D __declspec(property(get=__get_m_AtlasTexture, put=__set_m_AtlasTexture))  m_AtlasTexture;

constexpr void __set_m_AtlasTexture(UnityEngine::Texture2D value) ;

constexpr UnityEngine::Texture2D __get_m_AtlasTexture() const;

 ::ArrayW<UnityEngine::Texture2D> __declspec(property(get=__get_m_AtlasTextures, put=__set_m_AtlasTextures))  m_AtlasTextures;

constexpr void __set_m_AtlasTextures(::ArrayW<UnityEngine::Texture2D> value) ;

constexpr ::ArrayW<UnityEngine::Texture2D> __get_m_AtlasTextures() const;

 int32_t __declspec(property(get=__get_m_AtlasTextureIndex, put=__set_m_AtlasTextureIndex))  m_AtlasTextureIndex;

constexpr void __set_m_AtlasTextureIndex(int32_t value) ;

constexpr int32_t __get_m_AtlasTextureIndex() const;

 bool __declspec(property(get=__get_m_IsMultiAtlasTexturesEnabled, put=__set_m_IsMultiAtlasTexturesEnabled))  m_IsMultiAtlasTexturesEnabled;

constexpr void __set_m_IsMultiAtlasTexturesEnabled(bool value) ;

constexpr bool __get_m_IsMultiAtlasTexturesEnabled() const;

 bool __declspec(property(get=__get_m_ClearDynamicDataOnBuild, put=__set_m_ClearDynamicDataOnBuild))  m_ClearDynamicDataOnBuild;

constexpr void __set_m_ClearDynamicDataOnBuild(bool value) ;

constexpr bool __get_m_ClearDynamicDataOnBuild() const;

 int32_t __declspec(property(get=__get_m_AtlasWidth, put=__set_m_AtlasWidth))  m_AtlasWidth;

constexpr void __set_m_AtlasWidth(int32_t value) ;

constexpr int32_t __get_m_AtlasWidth() const;

 int32_t __declspec(property(get=__get_m_AtlasHeight, put=__set_m_AtlasHeight))  m_AtlasHeight;

constexpr void __set_m_AtlasHeight(int32_t value) ;

constexpr int32_t __get_m_AtlasHeight() const;

 int32_t __declspec(property(get=__get_m_AtlasPadding, put=__set_m_AtlasPadding))  m_AtlasPadding;

constexpr void __set_m_AtlasPadding(int32_t value) ;

constexpr int32_t __get_m_AtlasPadding() const;

 UnityEngine::TextCore::LowLevel::GlyphRenderMode __declspec(property(get=__get_m_AtlasRenderMode, put=__set_m_AtlasRenderMode))  m_AtlasRenderMode;

constexpr void __set_m_AtlasRenderMode(UnityEngine::TextCore::LowLevel::GlyphRenderMode value) ;

constexpr UnityEngine::TextCore::LowLevel::GlyphRenderMode __get_m_AtlasRenderMode() const;

 System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> __declspec(property(get=__get_m_UsedGlyphRects, put=__set_m_UsedGlyphRects))  m_UsedGlyphRects;

constexpr void __set_m_UsedGlyphRects(System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> __get_m_UsedGlyphRects() const;

 System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> __declspec(property(get=__get_m_FreeGlyphRects, put=__set_m_FreeGlyphRects))  m_FreeGlyphRects;

constexpr void __set_m_FreeGlyphRects(System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> __get_m_FreeGlyphRects() const;

 UnityEngine::TextCore::Text::FontFeatureTable __declspec(property(get=__get_m_FontFeatureTable, put=__set_m_FontFeatureTable))  m_FontFeatureTable;

constexpr void __set_m_FontFeatureTable(UnityEngine::TextCore::Text::FontFeatureTable value) ;

constexpr UnityEngine::TextCore::Text::FontFeatureTable __get_m_FontFeatureTable() const;

 System::Collections::Generic::List_1<UnityEngine::TextCore::Text::FontAsset> __declspec(property(get=__get_m_FallbackFontAssetTable, put=__set_m_FallbackFontAssetTable))  m_FallbackFontAssetTable;

constexpr void __set_m_FallbackFontAssetTable(System::Collections::Generic::List_1<UnityEngine::TextCore::Text::FontAsset> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::TextCore::Text::FontAsset> __get_m_FallbackFontAssetTable() const;

 UnityEngine::TextCore::Text::FontAssetCreationEditorSettings __declspec(property(get=__get_m_fontAssetCreationEditorSettings, put=__set_m_fontAssetCreationEditorSettings))  m_fontAssetCreationEditorSettings;

constexpr void __set_m_fontAssetCreationEditorSettings(UnityEngine::TextCore::Text::FontAssetCreationEditorSettings value) ;

constexpr UnityEngine::TextCore::Text::FontAssetCreationEditorSettings __get_m_fontAssetCreationEditorSettings() const;

 float_t __declspec(property(get=__get_m_RegularStyleWeight, put=__set_m_RegularStyleWeight))  m_RegularStyleWeight;

constexpr void __set_m_RegularStyleWeight(float_t value) ;

constexpr float_t __get_m_RegularStyleWeight() const;

 float_t __declspec(property(get=__get_m_RegularStyleSpacing, put=__set_m_RegularStyleSpacing))  m_RegularStyleSpacing;

constexpr void __set_m_RegularStyleSpacing(float_t value) ;

constexpr float_t __get_m_RegularStyleSpacing() const;

 float_t __declspec(property(get=__get_m_BoldStyleWeight, put=__set_m_BoldStyleWeight))  m_BoldStyleWeight;

constexpr void __set_m_BoldStyleWeight(float_t value) ;

constexpr float_t __get_m_BoldStyleWeight() const;

 float_t __declspec(property(get=__get_m_BoldStyleSpacing, put=__set_m_BoldStyleSpacing))  m_BoldStyleSpacing;

constexpr void __set_m_BoldStyleSpacing(float_t value) ;

constexpr float_t __get_m_BoldStyleSpacing() const;

 uint8_t __declspec(property(get=__get_m_ItalicStyleSlant, put=__set_m_ItalicStyleSlant))  m_ItalicStyleSlant;

constexpr void __set_m_ItalicStyleSlant(uint8_t value) ;

constexpr uint8_t __get_m_ItalicStyleSlant() const;

 uint8_t __declspec(property(get=__get_m_TabMultiple, put=__set_m_TabMultiple))  m_TabMultiple;

constexpr void __set_m_TabMultiple(uint8_t value) ;

constexpr uint8_t __get_m_TabMultiple() const;

 bool __declspec(property(get=__get_IsFontAssetLookupTablesDirty, put=__set_IsFontAssetLookupTablesDirty))  IsFontAssetLookupTablesDirty;

constexpr void __set_IsFontAssetLookupTablesDirty(bool value) ;

constexpr bool __get_IsFontAssetLookupTablesDirty() const;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_ReadFontAssetDefinitionMarker, put=__set_k_ReadFontAssetDefinitionMarker))  k_ReadFontAssetDefinitionMarker;

static void __set_k_ReadFontAssetDefinitionMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_ReadFontAssetDefinitionMarker() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_AddSynthesizedCharactersMarker, put=__set_k_AddSynthesizedCharactersMarker))  k_AddSynthesizedCharactersMarker;

static void __set_k_AddSynthesizedCharactersMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_AddSynthesizedCharactersMarker() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_TryAddCharacterMarker, put=__set_k_TryAddCharacterMarker))  k_TryAddCharacterMarker;

static void __set_k_TryAddCharacterMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_TryAddCharacterMarker() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_TryAddCharactersMarker, put=__set_k_TryAddCharactersMarker))  k_TryAddCharactersMarker;

static void __set_k_TryAddCharactersMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_TryAddCharactersMarker() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_UpdateGlyphAdjustmentRecordsMarker, put=__set_k_UpdateGlyphAdjustmentRecordsMarker))  k_UpdateGlyphAdjustmentRecordsMarker;

static void __set_k_UpdateGlyphAdjustmentRecordsMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_UpdateGlyphAdjustmentRecordsMarker() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_ClearFontAssetDataMarker, put=__set_k_ClearFontAssetDataMarker))  k_ClearFontAssetDataMarker;

static void __set_k_ClearFontAssetDataMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_ClearFontAssetDataMarker() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_UpdateFontAssetDataMarker, put=__set_k_UpdateFontAssetDataMarker))  k_UpdateFontAssetDataMarker;

static void __set_k_UpdateFontAssetDataMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_UpdateFontAssetDataMarker() ;

static ::StringW __declspec(property(get=__get_s_DefaultMaterialSuffix, put=__set_s_DefaultMaterialSuffix))  s_DefaultMaterialSuffix;

static void __set_s_DefaultMaterialSuffix(::StringW value) ;

static ::StringW __get_s_DefaultMaterialSuffix() ;

static System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get_k_SearchedFontAssetLookup, put=__set_k_SearchedFontAssetLookup))  k_SearchedFontAssetLookup;

static void __set_k_SearchedFontAssetLookup(System::Collections::Generic::HashSet_1<int32_t> value) ;

static System::Collections::Generic::HashSet_1<int32_t> __get_k_SearchedFontAssetLookup() ;

static System::Collections::Generic::List_1<UnityEngine::TextCore::Text::FontAsset> __declspec(property(get=__get_k_FontAssets_FontFeaturesUpdateQueue, put=__set_k_FontAssets_FontFeaturesUpdateQueue))  k_FontAssets_FontFeaturesUpdateQueue;

static void __set_k_FontAssets_FontFeaturesUpdateQueue(System::Collections::Generic::List_1<UnityEngine::TextCore::Text::FontAsset> value) ;

static System::Collections::Generic::List_1<UnityEngine::TextCore::Text::FontAsset> __get_k_FontAssets_FontFeaturesUpdateQueue() ;

static System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get_k_FontAssets_FontFeaturesUpdateQueueLookup, put=__set_k_FontAssets_FontFeaturesUpdateQueueLookup))  k_FontAssets_FontFeaturesUpdateQueueLookup;

static void __set_k_FontAssets_FontFeaturesUpdateQueueLookup(System::Collections::Generic::HashSet_1<int32_t> value) ;

static System::Collections::Generic::HashSet_1<int32_t> __get_k_FontAssets_FontFeaturesUpdateQueueLookup() ;

static System::Collections::Generic::List_1<UnityEngine::Texture2D> __declspec(property(get=__get_k_FontAssets_AtlasTexturesUpdateQueue, put=__set_k_FontAssets_AtlasTexturesUpdateQueue))  k_FontAssets_AtlasTexturesUpdateQueue;

static void __set_k_FontAssets_AtlasTexturesUpdateQueue(System::Collections::Generic::List_1<UnityEngine::Texture2D> value) ;

static System::Collections::Generic::List_1<UnityEngine::Texture2D> __get_k_FontAssets_AtlasTexturesUpdateQueue() ;

static System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get_k_FontAssets_AtlasTexturesUpdateQueueLookup, put=__set_k_FontAssets_AtlasTexturesUpdateQueueLookup))  k_FontAssets_AtlasTexturesUpdateQueueLookup;

static void __set_k_FontAssets_AtlasTexturesUpdateQueueLookup(System::Collections::Generic::HashSet_1<int32_t> value) ;

static System::Collections::Generic::HashSet_1<int32_t> __get_k_FontAssets_AtlasTexturesUpdateQueueLookup() ;

 System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph> __declspec(property(get=__get_m_GlyphsToRender, put=__set_m_GlyphsToRender))  m_GlyphsToRender;

constexpr void __set_m_GlyphsToRender(System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph> __get_m_GlyphsToRender() const;

 System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph> __declspec(property(get=__get_m_GlyphsRendered, put=__set_m_GlyphsRendered))  m_GlyphsRendered;

constexpr void __set_m_GlyphsRendered(System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph> __get_m_GlyphsRendered() const;

 System::Collections::Generic::List_1<uint32_t> __declspec(property(get=__get_m_GlyphIndexList, put=__set_m_GlyphIndexList))  m_GlyphIndexList;

constexpr void __set_m_GlyphIndexList(System::Collections::Generic::List_1<uint32_t> value) ;

constexpr System::Collections::Generic::List_1<uint32_t> __get_m_GlyphIndexList() const;

 System::Collections::Generic::List_1<uint32_t> __declspec(property(get=__get_m_GlyphIndexListNewlyAdded, put=__set_m_GlyphIndexListNewlyAdded))  m_GlyphIndexListNewlyAdded;

constexpr void __set_m_GlyphIndexListNewlyAdded(System::Collections::Generic::List_1<uint32_t> value) ;

constexpr System::Collections::Generic::List_1<uint32_t> __get_m_GlyphIndexListNewlyAdded() const;

 System::Collections::Generic::List_1<uint32_t> __declspec(property(get=__get_m_GlyphsToAdd, put=__set_m_GlyphsToAdd))  m_GlyphsToAdd;

constexpr void __set_m_GlyphsToAdd(System::Collections::Generic::List_1<uint32_t> value) ;

constexpr System::Collections::Generic::List_1<uint32_t> __get_m_GlyphsToAdd() const;

 System::Collections::Generic::HashSet_1<uint32_t> __declspec(property(get=__get_m_GlyphsToAddLookup, put=__set_m_GlyphsToAddLookup))  m_GlyphsToAddLookup;

constexpr void __set_m_GlyphsToAddLookup(System::Collections::Generic::HashSet_1<uint32_t> value) ;

constexpr System::Collections::Generic::HashSet_1<uint32_t> __get_m_GlyphsToAddLookup() const;

 System::Collections::Generic::List_1<UnityEngine::TextCore::Text::Character> __declspec(property(get=__get_m_CharactersToAdd, put=__set_m_CharactersToAdd))  m_CharactersToAdd;

constexpr void __set_m_CharactersToAdd(System::Collections::Generic::List_1<UnityEngine::TextCore::Text::Character> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::TextCore::Text::Character> __get_m_CharactersToAdd() const;

 System::Collections::Generic::HashSet_1<uint32_t> __declspec(property(get=__get_m_CharactersToAddLookup, put=__set_m_CharactersToAddLookup))  m_CharactersToAddLookup;

constexpr void __set_m_CharactersToAddLookup(System::Collections::Generic::HashSet_1<uint32_t> value) ;

constexpr System::Collections::Generic::HashSet_1<uint32_t> __get_m_CharactersToAddLookup() const;

 System::Collections::Generic::List_1<uint32_t> __declspec(property(get=__get_s_MissingCharacterList, put=__set_s_MissingCharacterList))  s_MissingCharacterList;

constexpr void __set_s_MissingCharacterList(System::Collections::Generic::List_1<uint32_t> value) ;

constexpr System::Collections::Generic::List_1<uint32_t> __get_s_MissingCharacterList() const;

 System::Collections::Generic::HashSet_1<uint32_t> __declspec(property(get=__get_m_MissingUnicodesFromFontFile, put=__set_m_MissingUnicodesFromFontFile))  m_MissingUnicodesFromFontFile;

constexpr void __set_m_MissingUnicodesFromFontFile(System::Collections::Generic::HashSet_1<uint32_t> value) ;

constexpr System::Collections::Generic::HashSet_1<uint32_t> __get_m_MissingUnicodesFromFontFile() const;

static ::ArrayW<uint32_t> __declspec(property(get=__get_k_GlyphIndexArray, put=__set_k_GlyphIndexArray))  k_GlyphIndexArray;

static void __set_k_GlyphIndexArray(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_k_GlyphIndexArray() ;


// Properties

 UnityEngine::Font __declspec(property(get=get_sourceFontFile, put=set_sourceFontFile))  sourceFontFile;

 UnityEngine::TextCore::Text::AtlasPopulationMode __declspec(property(get=get_atlasPopulationMode, put=set_atlasPopulationMode))  atlasPopulationMode;

 UnityEngine::TextCore::FaceInfo __declspec(property(get=get_faceInfo, put=set_faceInfo))  faceInfo;

 int32_t __declspec(property(get=get_familyNameHashCode, put=set_familyNameHashCode))  familyNameHashCode;

 int32_t __declspec(property(get=get_styleNameHashCode, put=set_styleNameHashCode))  styleNameHashCode;

 ::ArrayW<UnityEngine::TextCore::Text::FontWeightPair> __declspec(property(get=get_fontWeightTable, put=set_fontWeightTable))  fontWeightTable;

 System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph> __declspec(property(get=get_glyphTable, put=set_glyphTable))  glyphTable;

 System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Glyph> __declspec(property(get=get_glyphLookupTable))  glyphLookupTable;

 System::Collections::Generic::List_1<UnityEngine::TextCore::Text::Character> __declspec(property(get=get_characterTable, put=set_characterTable))  characterTable;

 System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Text::Character> __declspec(property(get=get_characterLookupTable))  characterLookupTable;

 UnityEngine::Texture2D __declspec(property(get=get_atlasTexture))  atlasTexture;

 ::ArrayW<UnityEngine::Texture2D> __declspec(property(get=get_atlasTextures, put=set_atlasTextures))  atlasTextures;

 int32_t __declspec(property(get=get_atlasTextureCount))  atlasTextureCount;

 bool __declspec(property(get=get_isMultiAtlasTexturesEnabled, put=set_isMultiAtlasTexturesEnabled))  isMultiAtlasTexturesEnabled;

 bool __declspec(property(get=get_clearDynamicDataOnBuild, put=set_clearDynamicDataOnBuild))  clearDynamicDataOnBuild;

 int32_t __declspec(property(get=get_atlasWidth, put=set_atlasWidth))  atlasWidth;

 int32_t __declspec(property(get=get_atlasHeight, put=set_atlasHeight))  atlasHeight;

 int32_t __declspec(property(get=get_atlasPadding, put=set_atlasPadding))  atlasPadding;

 UnityEngine::TextCore::LowLevel::GlyphRenderMode __declspec(property(get=get_atlasRenderMode, put=set_atlasRenderMode))  atlasRenderMode;

 System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> __declspec(property(get=get_usedGlyphRects, put=set_usedGlyphRects))  usedGlyphRects;

 System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> __declspec(property(get=get_freeGlyphRects, put=set_freeGlyphRects))  freeGlyphRects;

 UnityEngine::TextCore::Text::FontFeatureTable __declspec(property(get=get_fontFeatureTable, put=set_fontFeatureTable))  fontFeatureTable;

 System::Collections::Generic::List_1<UnityEngine::TextCore::Text::FontAsset> __declspec(property(get=get_fallbackFontAssetTable, put=set_fallbackFontAssetTable))  fallbackFontAssetTable;

 UnityEngine::TextCore::Text::FontAssetCreationEditorSettings __declspec(property(get=get_fontAssetCreationEditorSettings, put=set_fontAssetCreationEditorSettings))  fontAssetCreationEditorSettings;

 float_t __declspec(property(get=get_regularStyleWeight, put=set_regularStyleWeight))  regularStyleWeight;

 float_t __declspec(property(get=get_regularStyleSpacing, put=set_regularStyleSpacing))  regularStyleSpacing;

 float_t __declspec(property(get=get_boldStyleWeight, put=set_boldStyleWeight))  boldStyleWeight;

 float_t __declspec(property(get=get_boldStyleSpacing, put=set_boldStyleSpacing))  boldStyleSpacing;

 uint8_t __declspec(property(get=get_italicStyleSlant, put=set_italicStyleSlant))  italicStyleSlant;

 uint8_t __declspec(property(get=get_tabMultiple, put=set_tabMultiple))  tabMultiple;


// Methods

/// @brief Method get_sourceFontFile addr 0x2bc07f4 size 0x8 virtual false final false
 UnityEngine::Font get_sourceFontFile() ;

/// @brief Method set_sourceFontFile addr 0x2bc07fc size 0x8 virtual false final false
 void set_sourceFontFile(UnityEngine::Font value) ;

/// @brief Method get_atlasPopulationMode addr 0x2bc0804 size 0x8 virtual false final false
 UnityEngine::TextCore::Text::AtlasPopulationMode get_atlasPopulationMode() ;

/// @brief Method set_atlasPopulationMode addr 0x2bc080c size 0x8 virtual false final false
 void set_atlasPopulationMode(UnityEngine::TextCore::Text::AtlasPopulationMode value) ;

/// @brief Method get_faceInfo addr 0x2bc0814 size 0x1c virtual false final false
 UnityEngine::TextCore::FaceInfo get_faceInfo() ;

/// @brief Method set_faceInfo addr 0x2bc0830 size 0x18 virtual false final false
 void set_faceInfo(UnityEngine::TextCore::FaceInfo value) ;

/// @brief Method get_familyNameHashCode addr 0x2bc0848 size 0x2c virtual false final false
 int32_t get_familyNameHashCode() ;

/// @brief Method set_familyNameHashCode addr 0x2bc08e4 size 0x8 virtual false final false
 void set_familyNameHashCode(int32_t value) ;

/// @brief Method get_styleNameHashCode addr 0x2bc08ec size 0x2c virtual false final false
 int32_t get_styleNameHashCode() ;

/// @brief Method set_styleNameHashCode addr 0x2bc0918 size 0x8 virtual false final false
 void set_styleNameHashCode(int32_t value) ;

/// @brief Method get_fontWeightTable addr 0x2bc0920 size 0x8 virtual false final false
 ::ArrayW<UnityEngine::TextCore::Text::FontWeightPair> get_fontWeightTable() ;

/// @brief Method set_fontWeightTable addr 0x2bc0928 size 0x8 virtual false final false
 void set_fontWeightTable(::ArrayW<UnityEngine::TextCore::Text::FontWeightPair> value) ;

/// @brief Method get_glyphTable addr 0x2bc0930 size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph> get_glyphTable() ;

/// @brief Method set_glyphTable addr 0x2bc0938 size 0x8 virtual false final false
 void set_glyphTable(System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph> value) ;

/// @brief Method get_glyphLookupTable addr 0x2bc0940 size 0x24 virtual false final false
 System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Glyph> get_glyphLookupTable() ;

/// @brief Method get_characterTable addr 0x2bc0ce4 size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::TextCore::Text::Character> get_characterTable() ;

/// @brief Method set_characterTable addr 0x2bc0cec size 0x8 virtual false final false
 void set_characterTable(System::Collections::Generic::List_1<UnityEngine::TextCore::Text::Character> value) ;

/// @brief Method get_characterLookupTable addr 0x2bc0cf4 size 0x24 virtual false final false
 System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Text::Character> get_characterLookupTable() ;

/// @brief Method get_atlasTexture addr 0x2bc0d18 size 0x90 virtual false final false
 UnityEngine::Texture2D get_atlasTexture() ;

/// @brief Method get_atlasTextures addr 0x2bc0da8 size 0x8 virtual false final false
 ::ArrayW<UnityEngine::Texture2D> get_atlasTextures() ;

/// @brief Method set_atlasTextures addr 0x2bc0db0 size 0x8 virtual false final false
 void set_atlasTextures(::ArrayW<UnityEngine::Texture2D> value) ;

/// @brief Method get_atlasTextureCount addr 0x2bc0db8 size 0xc virtual false final false
 int32_t get_atlasTextureCount() ;

/// @brief Method get_isMultiAtlasTexturesEnabled addr 0x2bc0dc4 size 0x8 virtual false final false
 bool get_isMultiAtlasTexturesEnabled() ;

/// @brief Method set_isMultiAtlasTexturesEnabled addr 0x2bc0dcc size 0xc virtual false final false
 void set_isMultiAtlasTexturesEnabled(bool value) ;

/// @brief Method get_clearDynamicDataOnBuild addr 0x2bc0dd8 size 0x8 virtual false final false
 bool get_clearDynamicDataOnBuild() ;

/// @brief Method set_clearDynamicDataOnBuild addr 0x2bc0de0 size 0xc virtual false final false
 void set_clearDynamicDataOnBuild(bool value) ;

/// @brief Method get_atlasWidth addr 0x2bc0dec size 0x8 virtual false final false
 int32_t get_atlasWidth() ;

/// @brief Method set_atlasWidth addr 0x2bc0df4 size 0x8 virtual false final false
 void set_atlasWidth(int32_t value) ;

/// @brief Method get_atlasHeight addr 0x2bc0dfc size 0x8 virtual false final false
 int32_t get_atlasHeight() ;

/// @brief Method set_atlasHeight addr 0x2bc0e04 size 0x8 virtual false final false
 void set_atlasHeight(int32_t value) ;

/// @brief Method get_atlasPadding addr 0x2bc0e0c size 0x8 virtual false final false
 int32_t get_atlasPadding() ;

/// @brief Method set_atlasPadding addr 0x2bc0e14 size 0x8 virtual false final false
 void set_atlasPadding(int32_t value) ;

/// @brief Method get_atlasRenderMode addr 0x2bc0e1c size 0x8 virtual false final false
 UnityEngine::TextCore::LowLevel::GlyphRenderMode get_atlasRenderMode() ;

/// @brief Method set_atlasRenderMode addr 0x2bc0e24 size 0x8 virtual false final false
 void set_atlasRenderMode(UnityEngine::TextCore::LowLevel::GlyphRenderMode value) ;

/// @brief Method get_usedGlyphRects addr 0x2bc0e2c size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> get_usedGlyphRects() ;

/// @brief Method set_usedGlyphRects addr 0x2bc0e34 size 0x8 virtual false final false
 void set_usedGlyphRects(System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> value) ;

/// @brief Method get_freeGlyphRects addr 0x2bc0e3c size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> get_freeGlyphRects() ;

/// @brief Method set_freeGlyphRects addr 0x2bc0e44 size 0x8 virtual false final false
 void set_freeGlyphRects(System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> value) ;

/// @brief Method get_fontFeatureTable addr 0x2bc0e4c size 0x8 virtual false final false
 UnityEngine::TextCore::Text::FontFeatureTable get_fontFeatureTable() ;

/// @brief Method set_fontFeatureTable addr 0x2bc0e54 size 0x8 virtual false final false
 void set_fontFeatureTable(UnityEngine::TextCore::Text::FontFeatureTable value) ;

/// @brief Method get_fallbackFontAssetTable addr 0x2bc0e5c size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::TextCore::Text::FontAsset> get_fallbackFontAssetTable() ;

/// @brief Method set_fallbackFontAssetTable addr 0x2bc0e64 size 0x8 virtual false final false
 void set_fallbackFontAssetTable(System::Collections::Generic::List_1<UnityEngine::TextCore::Text::FontAsset> value) ;

/// @brief Method get_fontAssetCreationEditorSettings addr 0x2bc0e6c size 0x1c virtual false final false
 UnityEngine::TextCore::Text::FontAssetCreationEditorSettings get_fontAssetCreationEditorSettings() ;

/// @brief Method set_fontAssetCreationEditorSettings addr 0x2bc0e88 size 0x18 virtual false final false
 void set_fontAssetCreationEditorSettings(UnityEngine::TextCore::Text::FontAssetCreationEditorSettings value) ;

/// @brief Method get_regularStyleWeight addr 0x2bc0ea0 size 0x8 virtual false final false
 float_t get_regularStyleWeight() ;

/// @brief Method set_regularStyleWeight addr 0x2bc0ea8 size 0x8 virtual false final false
 void set_regularStyleWeight(float_t value) ;

/// @brief Method get_regularStyleSpacing addr 0x2bc0eb0 size 0x8 virtual false final false
 float_t get_regularStyleSpacing() ;

/// @brief Method set_regularStyleSpacing addr 0x2bc0eb8 size 0x8 virtual false final false
 void set_regularStyleSpacing(float_t value) ;

/// @brief Method get_boldStyleWeight addr 0x2bc0ec0 size 0x8 virtual false final false
 float_t get_boldStyleWeight() ;

/// @brief Method set_boldStyleWeight addr 0x2bc0ec8 size 0x8 virtual false final false
 void set_boldStyleWeight(float_t value) ;

/// @brief Method get_boldStyleSpacing addr 0x2bc0ed0 size 0x8 virtual false final false
 float_t get_boldStyleSpacing() ;

/// @brief Method set_boldStyleSpacing addr 0x2bc0ed8 size 0x8 virtual false final false
 void set_boldStyleSpacing(float_t value) ;

/// @brief Method get_italicStyleSlant addr 0x2bc0ee0 size 0x8 virtual false final false
 uint8_t get_italicStyleSlant() ;

/// @brief Method set_italicStyleSlant addr 0x2bc0ee8 size 0x8 virtual false final false
 void set_italicStyleSlant(uint8_t value) ;

/// @brief Method get_tabMultiple addr 0x2bc0ef0 size 0x8 virtual false final false
 uint8_t get_tabMultiple() ;

/// @brief Method set_tabMultiple addr 0x2bc0ef8 size 0x8 virtual false final false
 void set_tabMultiple(uint8_t value) ;

/// @brief Method CreateFontAsset addr 0x2bc0f00 size 0x274 virtual false final false
static UnityEngine::TextCore::Text::FontAsset CreateFontAsset(::StringW familyName, ::StringW styleName, int32_t pointSize) ;

/// @brief Method CreateFontAsset addr 0x2bc1174 size 0x17c virtual false final false
static UnityEngine::TextCore::Text::FontAsset CreateFontAsset(::StringW fontFilePath, int32_t faceIndex, int32_t samplingPointSize, int32_t atlasPadding, UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight, UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport) ;

/// @brief Method CreateFontAsset addr 0x2bc174c size 0x7c virtual false final false
static UnityEngine::TextCore::Text::FontAsset CreateFontAsset(UnityEngine::Font font) ;

/// @brief Method CreateFontAsset addr 0x2bc17c8 size 0xc0 virtual false final false
static UnityEngine::TextCore::Text::FontAsset CreateFontAsset(UnityEngine::Font font, int32_t samplingPointSize, int32_t atlasPadding, UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight, UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport) ;

/// @brief Method CreateFontAsset addr 0x2bc1888 size 0x214 virtual false final false
static UnityEngine::TextCore::Text::FontAsset CreateFontAsset(UnityEngine::Font font, int32_t faceIndex, int32_t samplingPointSize, int32_t atlasPadding, UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight, UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport) ;

/// @brief Method CreateFontAssetInstance addr 0x2bc12f0 size 0x45c virtual false final false
static UnityEngine::TextCore::Text::FontAsset CreateFontAssetInstance(UnityEngine::Font font, int32_t atlasPadding, UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight, UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport) ;

/// @brief Method Awake addr 0x2bc1a9c size 0x4 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x2bc1aa0 size 0x64 virtual false final false
 void OnDestroy() ;

/// @brief Method ReadFontAssetDefinition addr 0x2bc0964 size 0x380 virtual false final false
 void ReadFontAssetDefinition() ;

/// @brief Method InitializeDictionaryLookupTables addr 0x2bc1bc8 size 0x20 virtual false final false
 void InitializeDictionaryLookupTables() ;

/// @brief Method InitializeGlyphLookupDictionary addr 0x2bc1dc8 size 0x288 virtual false final false
 void InitializeGlyphLookupDictionary() ;

/// @brief Method InitializeCharacterLookupDictionary addr 0x2bc2050 size 0x19c virtual false final false
 void InitializeCharacterLookupDictionary() ;

/// @brief Method InitializeGlyphPaidAdjustmentRecordsLookupDictionary addr 0x2bc21ec size 0x23c virtual false final false
 void InitializeGlyphPaidAdjustmentRecordsLookupDictionary() ;

/// @brief Method AddSynthesizedCharactersAndFaceMetrics addr 0x2bc1be8 size 0x1d8 virtual false final false
 void AddSynthesizedCharactersAndFaceMetrics() ;

/// @brief Method AddSynthesizedCharacter addr 0x2bc2548 size 0x254 virtual false final false
 void AddSynthesizedCharacter(uint32_t unicode, bool isFontFaceLoaded, bool addImmediately) ;

/// @brief Method AddCharacterToLookupCache addr 0x2bc27fc size 0x68 virtual false final false
 void AddCharacterToLookupCache(uint32_t unicode, UnityEngine::TextCore::Text::Character character) ;

/// @brief Method LoadFontFace addr 0x2bc2440 size 0x108 virtual false final false
 UnityEngine::TextCore::LowLevel::FontEngineError LoadFontFace() ;

/// @brief Method SortCharacterTable addr 0x2bc2864 size 0x13c virtual false final false
 void SortCharacterTable() ;

/// @brief Method SortGlyphTable addr 0x2bc29a0 size 0x13c virtual false final false
 void SortGlyphTable() ;

/// @brief Method SortFontFeatureTable addr 0x2bc2adc size 0x18 virtual false final false
 void SortFontFeatureTable() ;

/// @brief Method SortAllTables addr 0x2bc2ce0 size 0x28 virtual false final false
 void SortAllTables() ;

/// @brief Method HasCharacter addr 0x2bc2d08 size 0x60 virtual false final false
 bool HasCharacter(int32_t character) ;

/// @brief Method HasCharacter addr 0x2bc2d68 size 0x31c virtual false final false
 bool HasCharacter(char16_t character, bool searchFallbacks, bool tryAddCharacter) ;

/// @brief Method HasCharacter_Internal addr 0x2bc3bf8 size 0x224 virtual false final false
 bool HasCharacter_Internal(uint32_t character, bool searchFallbacks, bool tryAddCharacter) ;

/// @brief Method HasCharacters addr 0x2bc3e1c size 0x1a8 virtual false final false
 bool HasCharacters(::StringW text, ByRef<System::Collections::Generic::List_1<char16_t>> missingCharacters) ;

/// @brief Method HasCharacters addr 0x2bc3fc4 size 0x440 virtual false final false
 bool HasCharacters(::StringW text, ByRef<::ArrayW<uint32_t>> missingCharacters, bool searchFallbacks, bool tryAddCharacter) ;

/// @brief Method HasCharacters addr 0x2bc4404 size 0xb4 virtual false final false
 bool HasCharacters(::StringW text) ;

/// @brief Method GetCharacters addr 0x2bc44b8 size 0xe0 virtual false final false
static ::StringW GetCharacters(UnityEngine::TextCore::Text::FontAsset fontAsset) ;

/// @brief Method GetCharactersArray addr 0x2bc4598 size 0xe4 virtual false final false
static ::ArrayW<int32_t> GetCharactersArray(UnityEngine::TextCore::Text::FontAsset fontAsset) ;

/// @brief Method GetGlyphIndex addr 0x2bc467c size 0xdc virtual false final false
 uint32_t GetGlyphIndex(uint32_t unicode) ;

/// @brief Method RegisterFontAssetForFontFeatureUpdate addr 0x2bc4758 size 0x12c virtual false final false
static void RegisterFontAssetForFontFeatureUpdate(UnityEngine::TextCore::Text::FontAsset fontAsset) ;

/// @brief Method UpdateFontFeaturesForFontAssetsInQueue addr 0x2bc4884 size 0x178 virtual false final false
static void UpdateFontFeaturesForFontAssetsInQueue() ;

/// @brief Method RegisterAtlasTextureForApply addr 0x2bc4d54 size 0x12c virtual false final false
static void RegisterAtlasTextureForApply(UnityEngine::Texture2D texture) ;

/// @brief Method UpdateAtlasTexturesInQueue addr 0x2bc4e80 size 0x184 virtual false final false
static void UpdateAtlasTexturesInQueue() ;

/// @brief Method UpdateFontAssetInUpdateQueue addr 0x2bc5004 size 0x50 virtual false final false
static void UpdateFontAssetInUpdateQueue() ;

/// @brief Method TryAddCharacters addr 0x2bc5054 size 0x20 virtual false final false
 bool TryAddCharacters(::ArrayW<uint32_t> unicodes, bool includeFontFeatures) ;

/// @brief Method TryAddCharacters addr 0x2bc5074 size 0xbf4 virtual false final false
 bool TryAddCharacters(::ArrayW<uint32_t> unicodes, ByRef<::ArrayW<uint32_t>> missingUnicodes, bool includeFontFeatures) ;

/// @brief Method TryAddCharacters addr 0x2bc6134 size 0x20 virtual false final false
 bool TryAddCharacters(::StringW characters, bool includeFontFeatures) ;

/// @brief Method TryAddCharacters addr 0x2bc6154 size 0xbac virtual false final false
 bool TryAddCharacters(::StringW characters, ByRef<::StringW> missingCharacters, bool includeFontFeatures) ;

/// @brief Method TryAddCharacterInternal addr 0x2bc3084 size 0xb74 virtual false final false
 bool TryAddCharacterInternal(uint32_t unicode, ByRef<UnityEngine::TextCore::Text::Character> character, bool shouldGetFontFeatures) ;

/// @brief Method TryGetCharacter_and_QueueRenderToTexture addr 0x2bc7008 size 0x574 virtual false final false
 bool TryGetCharacter_and_QueueRenderToTexture(uint32_t unicode, ByRef<UnityEngine::TextCore::Text::Character> character, bool shouldGetFontFeatures) ;

/// @brief Method TryAddGlyphsToAtlasTextures addr 0x2bc757c size 0x4 virtual false final false
 void TryAddGlyphsToAtlasTextures() ;

/// @brief Method TryAddGlyphsToNewAtlasTexture addr 0x2bc5ca8 size 0x48c virtual false final false
 bool TryAddGlyphsToNewAtlasTexture() ;

/// @brief Method SetupNewAtlasTexture addr 0x2bc6dd8 size 0x230 virtual false final false
 void SetupNewAtlasTexture() ;

/// @brief Method UpdateAtlasTexture addr 0x2bc7580 size 0x174 virtual false final false
 void UpdateAtlasTexture() ;

/// @brief Method UpdateGlyphAdjustmentRecords addr 0x2bc49fc size 0x358 virtual false final false
 void UpdateGlyphAdjustmentRecords() ;

/// @brief Method UpdateGlyphAdjustmentRecords addr 0x2bc77b8 size 0x330 virtual false final false
 void UpdateGlyphAdjustmentRecords(::ArrayW<uint32_t> glyphIndexes) ;

/// @brief Method UpdateGlyphAdjustmentRecords addr 0x2bc7ae8 size 0x4 virtual false final false
 void UpdateGlyphAdjustmentRecords(System::Collections::Generic::List_1<uint32_t> glyphIndexes) ;

/// @brief Method UpdateGlyphAdjustmentRecords addr 0x2bc7aec size 0x4 virtual false final false
 void UpdateGlyphAdjustmentRecords(System::Collections::Generic::List_1<uint32_t> newGlyphIndexes, System::Collections::Generic::List_1<uint32_t> allGlyphIndexes) ;

/// @brief Method CopyListDataToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void CopyListDataToArray(System::Collections::Generic::List_1<T> srcList, ByRef<::ArrayW<T>> dstArray) ;

/// @brief Method ClearFontAssetData addr 0x2bc7af0 size 0x30 virtual false final false
 void ClearFontAssetData(bool setAtlasSizeToZero) ;

/// @brief Method ClearFontAssetDataInternal addr 0x2bc7f0c size 0x1c virtual false final false
 void ClearFontAssetDataInternal() ;

/// @brief Method UpdateFontAssetData addr 0x2bc7f28 size 0x124 virtual false final false
 void UpdateFontAssetData() ;

/// @brief Method ClearFontAssetTables addr 0x2bc7b20 size 0x1f8 virtual false final false
 void ClearFontAssetTables() ;

/// @brief Method ClearAtlasTextures addr 0x2bc7d18 size 0x1f4 virtual false final false
 void ClearAtlasTextures(bool setAtlasSizeToZero) ;

/// @brief Method DestroyAtlasTextures addr 0x2bc1b04 size 0xc4 virtual false final false
 void DestroyAtlasTextures() ;

static UnityEngine::TextCore::Text::FontAsset New_ctor() ;

/// @brief Method .ctor addr 0x2bc8054 size 0x2a8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
NEED_NO_BOX(UnityEngine::TextCore::Text::FontAsset);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::FontAsset, "UnityEngine.TextCore.Text", "FontAsset");
NEED_NO_BOX(UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__FontAsset____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__FontAsset____c, "UnityEngine.TextCore.Text", "FontAsset/<>c");
