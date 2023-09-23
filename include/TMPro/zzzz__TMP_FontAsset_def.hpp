#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "TMPro/zzzz__TMP_Asset_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace TMPro {
struct FontAssetCreationSettings;
}
namespace UnityEngine {
class Texture2D;
}
namespace TMPro {
class FaceInfo_Legacy;
}
namespace TMPro {
struct TMP_FontWeightPair;
}
namespace TMPro {
class TMP_Character;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphRenderMode;
}
namespace TMPro {
struct AtlasPopulationMode;
}
namespace TMPro {
class TMP_FontFeatureTable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::TextCore {
struct GlyphRect;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::TextCore {
struct FaceInfo;
}
namespace UnityEngine {
class Font;
}
namespace TMPro {
class TMP_Glyph;
}
namespace UnityEngine::TextCore {
class Glyph;
}
namespace TMPro {
class KerningTable;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
class TMPro__TMP_FontAsset____c;
}
// Type: ::<>c
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12297))
// CS Name: TMPro.TMP_FontAsset::<>c
class CORDL_TYPE TMPro__TMP_FontAsset____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TMPro__TMP_FontAsset____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_FontAsset____c", modifiers: " const&", def_value: None }]
constexpr TMPro__TMP_FontAsset____c(TMPro__TMP_FontAsset____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_FontAsset____c", modifiers: "&&", def_value: None }]
constexpr TMPro__TMP_FontAsset____c(TMPro__TMP_FontAsset____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_FontAsset____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMPro__TMP_FontAsset____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__TMP_FontAsset____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__TMP_FontAsset____c& operator=(TMPro__TMP_FontAsset____c&& o) noexcept = default;
  constexpr TMPro__TMP_FontAsset____c& operator=(TMPro__TMP_FontAsset____c const& o) noexcept = default;
                


// Fields

static TMPro::TMPro__TMP_FontAsset____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(TMPro::TMPro__TMP_FontAsset____c value) ;

static TMPro::TMPro__TMP_FontAsset____c __get___9() ;

static System::Func_2<TMPro::TMP_Character,uint32_t> __declspec(property(get=__get___9__124_0, put=__set___9__124_0))  __9__124_0;

static void __set___9__124_0(System::Func_2<TMPro::TMP_Character,uint32_t> value) ;

static System::Func_2<TMPro::TMP_Character,uint32_t> __get___9__124_0() ;

static System::Func_2<UnityEngine::TextCore::Glyph,uint32_t> __declspec(property(get=__get___9__125_0, put=__set___9__125_0))  __9__125_0;

static void __set___9__125_0(System::Func_2<UnityEngine::TextCore::Glyph,uint32_t> value) ;

static System::Func_2<UnityEngine::TextCore::Glyph,uint32_t> __get___9__125_0() ;


// Methods

// Ctor Parameters []
explicit TMPro__TMP_FontAsset____c() ;

/// @brief Method .ctor addr 0x2a787d4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SortCharacterTable>b__124_0 addr 0x2a787dc size 0x18 virtual false final false
 uint32_t _SortCharacterTable_b__124_0(TMPro::TMP_Character c) ;

/// @brief Method <SortGlyphTable>b__125_0 addr 0x2a787f4 size 0x18 virtual false final false
 uint32_t _SortGlyphTable_b__125_0(UnityEngine::TextCore::Glyph c) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TMP_FontAsset
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12269))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12298))
// CS Name: TMPro.TMP_FontAsset
class CORDL_TYPE TMP_FontAsset : public TMPro::TMP_Asset {
public:
// Declarations
using __c = TMPro::TMPro__TMP_FontAsset____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x218};

virtual ~TMP_FontAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_FontAsset", modifiers: " const&", def_value: None }]
constexpr TMP_FontAsset(TMP_FontAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_FontAsset", modifiers: "&&", def_value: None }]
constexpr TMP_FontAsset(TMP_FontAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_FontAsset(void* ptr) noexcept : TMPro::TMP_Asset(ptr) {
}


  constexpr TMP_FontAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_FontAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_FontAsset& operator=(TMP_FontAsset&& o) noexcept = default;
  constexpr TMP_FontAsset& operator=(TMP_FontAsset const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_Version, put=__set_m_Version))  m_Version;

constexpr void __set_m_Version(::StringW value) ;

constexpr ::StringW __get_m_Version() const;

 ::StringW __declspec(property(get=__get_m_SourceFontFileGUID, put=__set_m_SourceFontFileGUID))  m_SourceFontFileGUID;

constexpr void __set_m_SourceFontFileGUID(::StringW value) ;

constexpr ::StringW __get_m_SourceFontFileGUID() const;

 UnityEngine::Font __declspec(property(get=__get_m_SourceFontFile, put=__set_m_SourceFontFile))  m_SourceFontFile;

constexpr void __set_m_SourceFontFile(UnityEngine::Font value) ;

constexpr UnityEngine::Font __get_m_SourceFontFile() const;

 TMPro::AtlasPopulationMode __declspec(property(get=__get_m_AtlasPopulationMode, put=__set_m_AtlasPopulationMode))  m_AtlasPopulationMode;

constexpr void __set_m_AtlasPopulationMode(TMPro::AtlasPopulationMode value) ;

constexpr TMPro::AtlasPopulationMode __get_m_AtlasPopulationMode() const;

 UnityEngine::TextCore::FaceInfo __declspec(property(get=__get_m_FaceInfo, put=__set_m_FaceInfo))  m_FaceInfo;

constexpr void __set_m_FaceInfo(UnityEngine::TextCore::FaceInfo value) ;

constexpr UnityEngine::TextCore::FaceInfo __get_m_FaceInfo() const;

 System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph> __declspec(property(get=__get_m_GlyphTable, put=__set_m_GlyphTable))  m_GlyphTable;

constexpr void __set_m_GlyphTable(System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph> __get_m_GlyphTable() const;

 System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Glyph> __declspec(property(get=__get_m_GlyphLookupDictionary, put=__set_m_GlyphLookupDictionary))  m_GlyphLookupDictionary;

constexpr void __set_m_GlyphLookupDictionary(System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Glyph> value) ;

constexpr System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Glyph> __get_m_GlyphLookupDictionary() const;

 System::Collections::Generic::List_1<TMPro::TMP_Character> __declspec(property(get=__get_m_CharacterTable, put=__set_m_CharacterTable))  m_CharacterTable;

constexpr void __set_m_CharacterTable(System::Collections::Generic::List_1<TMPro::TMP_Character> value) ;

constexpr System::Collections::Generic::List_1<TMPro::TMP_Character> __get_m_CharacterTable() const;

 System::Collections::Generic::Dictionary_2<uint32_t,TMPro::TMP_Character> __declspec(property(get=__get_m_CharacterLookupDictionary, put=__set_m_CharacterLookupDictionary))  m_CharacterLookupDictionary;

constexpr void __set_m_CharacterLookupDictionary(System::Collections::Generic::Dictionary_2<uint32_t,TMPro::TMP_Character> value) ;

constexpr System::Collections::Generic::Dictionary_2<uint32_t,TMPro::TMP_Character> __get_m_CharacterLookupDictionary() const;

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

 System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> __declspec(property(get=__get_m_UsedGlyphRects, put=__set_m_UsedGlyphRects))  m_UsedGlyphRects;

constexpr void __set_m_UsedGlyphRects(System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> __get_m_UsedGlyphRects() const;

 System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> __declspec(property(get=__get_m_FreeGlyphRects, put=__set_m_FreeGlyphRects))  m_FreeGlyphRects;

constexpr void __set_m_FreeGlyphRects(System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> __get_m_FreeGlyphRects() const;

 TMPro::FaceInfo_Legacy __declspec(property(get=__get_m_fontInfo, put=__set_m_fontInfo))  m_fontInfo;

constexpr void __set_m_fontInfo(TMPro::FaceInfo_Legacy value) ;

constexpr TMPro::FaceInfo_Legacy __get_m_fontInfo() const;

 UnityEngine::Texture2D __declspec(property(get=__get_atlas, put=__set_atlas))  atlas;

constexpr void __set_atlas(UnityEngine::Texture2D value) ;

constexpr UnityEngine::Texture2D __get_atlas() const;

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

 System::Collections::Generic::List_1<TMPro::TMP_Glyph> __declspec(property(get=__get_m_glyphInfoList, put=__set_m_glyphInfoList))  m_glyphInfoList;

constexpr void __set_m_glyphInfoList(System::Collections::Generic::List_1<TMPro::TMP_Glyph> value) ;

constexpr System::Collections::Generic::List_1<TMPro::TMP_Glyph> __get_m_glyphInfoList() const;

 TMPro::KerningTable __declspec(property(get=__get_m_KerningTable, put=__set_m_KerningTable))  m_KerningTable;

constexpr void __set_m_KerningTable(TMPro::KerningTable value) ;

constexpr TMPro::KerningTable __get_m_KerningTable() const;

 TMPro::TMP_FontFeatureTable __declspec(property(get=__get_m_FontFeatureTable, put=__set_m_FontFeatureTable))  m_FontFeatureTable;

constexpr void __set_m_FontFeatureTable(TMPro::TMP_FontFeatureTable value) ;

constexpr TMPro::TMP_FontFeatureTable __get_m_FontFeatureTable() const;

 System::Collections::Generic::List_1<TMPro::TMP_FontAsset> __declspec(property(get=__get_fallbackFontAssets, put=__set_fallbackFontAssets))  fallbackFontAssets;

constexpr void __set_fallbackFontAssets(System::Collections::Generic::List_1<TMPro::TMP_FontAsset> value) ;

constexpr System::Collections::Generic::List_1<TMPro::TMP_FontAsset> __get_fallbackFontAssets() const;

 System::Collections::Generic::List_1<TMPro::TMP_FontAsset> __declspec(property(get=__get_m_FallbackFontAssetTable, put=__set_m_FallbackFontAssetTable))  m_FallbackFontAssetTable;

constexpr void __set_m_FallbackFontAssetTable(System::Collections::Generic::List_1<TMPro::TMP_FontAsset> value) ;

constexpr System::Collections::Generic::List_1<TMPro::TMP_FontAsset> __get_m_FallbackFontAssetTable() const;

 TMPro::FontAssetCreationSettings __declspec(property(get=__get_m_CreationSettings, put=__set_m_CreationSettings))  m_CreationSettings;

constexpr void __set_m_CreationSettings(TMPro::FontAssetCreationSettings value) ;

constexpr TMPro::FontAssetCreationSettings __get_m_CreationSettings() const;

 ::ArrayW<TMPro::TMP_FontWeightPair> __declspec(property(get=__get_m_FontWeightTable, put=__set_m_FontWeightTable))  m_FontWeightTable;

constexpr void __set_m_FontWeightTable(::ArrayW<TMPro::TMP_FontWeightPair> value) ;

constexpr ::ArrayW<TMPro::TMP_FontWeightPair> __get_m_FontWeightTable() const;

 ::ArrayW<TMPro::TMP_FontWeightPair> __declspec(property(get=__get_fontWeights, put=__set_fontWeights))  fontWeights;

constexpr void __set_fontWeights(::ArrayW<TMPro::TMP_FontWeightPair> value) ;

constexpr ::ArrayW<TMPro::TMP_FontWeightPair> __get_fontWeights() const;

 float_t __declspec(property(get=__get_normalStyle, put=__set_normalStyle))  normalStyle;

constexpr void __set_normalStyle(float_t value) ;

constexpr float_t __get_normalStyle() const;

 float_t __declspec(property(get=__get_normalSpacingOffset, put=__set_normalSpacingOffset))  normalSpacingOffset;

constexpr void __set_normalSpacingOffset(float_t value) ;

constexpr float_t __get_normalSpacingOffset() const;

 float_t __declspec(property(get=__get_boldStyle, put=__set_boldStyle))  boldStyle;

constexpr void __set_boldStyle(float_t value) ;

constexpr float_t __get_boldStyle() const;

 float_t __declspec(property(get=__get_boldSpacing, put=__set_boldSpacing))  boldSpacing;

constexpr void __set_boldSpacing(float_t value) ;

constexpr float_t __get_boldSpacing() const;

 uint8_t __declspec(property(get=__get_italicStyle, put=__set_italicStyle))  italicStyle;

constexpr void __set_italicStyle(uint8_t value) ;

constexpr uint8_t __get_italicStyle() const;

 uint8_t __declspec(property(get=__get_tabSize, put=__set_tabSize))  tabSize;

constexpr void __set_tabSize(uint8_t value) ;

constexpr uint8_t __get_tabSize() const;

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

 System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get_FallbackSearchQueryLookup, put=__set_FallbackSearchQueryLookup))  FallbackSearchQueryLookup;

constexpr void __set_FallbackSearchQueryLookup(System::Collections::Generic::HashSet_1<int32_t> value) ;

constexpr System::Collections::Generic::HashSet_1<int32_t> __get_FallbackSearchQueryLookup() const;

static System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get_k_SearchedFontAssetLookup, put=__set_k_SearchedFontAssetLookup))  k_SearchedFontAssetLookup;

static void __set_k_SearchedFontAssetLookup(System::Collections::Generic::HashSet_1<int32_t> value) ;

static System::Collections::Generic::HashSet_1<int32_t> __get_k_SearchedFontAssetLookup() ;

static System::Collections::Generic::List_1<TMPro::TMP_FontAsset> __declspec(property(get=__get_k_FontAssets_FontFeaturesUpdateQueue, put=__set_k_FontAssets_FontFeaturesUpdateQueue))  k_FontAssets_FontFeaturesUpdateQueue;

static void __set_k_FontAssets_FontFeaturesUpdateQueue(System::Collections::Generic::List_1<TMPro::TMP_FontAsset> value) ;

static System::Collections::Generic::List_1<TMPro::TMP_FontAsset> __get_k_FontAssets_FontFeaturesUpdateQueue() ;

static System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get_k_FontAssets_FontFeaturesUpdateQueueLookup, put=__set_k_FontAssets_FontFeaturesUpdateQueueLookup))  k_FontAssets_FontFeaturesUpdateQueueLookup;

static void __set_k_FontAssets_FontFeaturesUpdateQueueLookup(System::Collections::Generic::HashSet_1<int32_t> value) ;

static System::Collections::Generic::HashSet_1<int32_t> __get_k_FontAssets_FontFeaturesUpdateQueueLookup() ;

static System::Collections::Generic::List_1<TMPro::TMP_FontAsset> __declspec(property(get=__get_k_FontAssets_AtlasTexturesUpdateQueue, put=__set_k_FontAssets_AtlasTexturesUpdateQueue))  k_FontAssets_AtlasTexturesUpdateQueue;

static void __set_k_FontAssets_AtlasTexturesUpdateQueue(System::Collections::Generic::List_1<TMPro::TMP_FontAsset> value) ;

static System::Collections::Generic::List_1<TMPro::TMP_FontAsset> __get_k_FontAssets_AtlasTexturesUpdateQueue() ;

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

 System::Collections::Generic::List_1<TMPro::TMP_Character> __declspec(property(get=__get_m_CharactersToAdd, put=__set_m_CharactersToAdd))  m_CharactersToAdd;

constexpr void __set_m_CharactersToAdd(System::Collections::Generic::List_1<TMPro::TMP_Character> value) ;

constexpr System::Collections::Generic::List_1<TMPro::TMP_Character> __get_m_CharactersToAdd() const;

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

 ::StringW __declspec(property(get=get_version, put=set_version))  version;

 UnityEngine::Font __declspec(property(get=get_sourceFontFile, put=set_sourceFontFile))  sourceFontFile;

 TMPro::AtlasPopulationMode __declspec(property(get=get_atlasPopulationMode, put=set_atlasPopulationMode))  atlasPopulationMode;

 UnityEngine::TextCore::FaceInfo __declspec(property(get=get_faceInfo, put=set_faceInfo))  faceInfo;

 System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph> __declspec(property(get=get_glyphTable, put=set_glyphTable))  glyphTable;

 System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Glyph> __declspec(property(get=get_glyphLookupTable))  glyphLookupTable;

 System::Collections::Generic::List_1<TMPro::TMP_Character> __declspec(property(get=get_characterTable, put=set_characterTable))  characterTable;

 System::Collections::Generic::Dictionary_2<uint32_t,TMPro::TMP_Character> __declspec(property(get=get_characterLookupTable))  characterLookupTable;

 UnityEngine::Texture2D __declspec(property(get=get_atlasTexture))  atlasTexture;

 ::ArrayW<UnityEngine::Texture2D> __declspec(property(get=get_atlasTextures, put=set_atlasTextures))  atlasTextures;

 int32_t __declspec(property(get=get_atlasTextureCount))  atlasTextureCount;

 bool __declspec(property(get=get_isMultiAtlasTexturesEnabled, put=set_isMultiAtlasTexturesEnabled))  isMultiAtlasTexturesEnabled;

 bool __declspec(property(get=get_clearDynamicDataOnBuild, put=set_clearDynamicDataOnBuild))  clearDynamicDataOnBuild;

 System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> __declspec(property(get=get_usedGlyphRects, put=set_usedGlyphRects))  usedGlyphRects;

 System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> __declspec(property(get=get_freeGlyphRects, put=set_freeGlyphRects))  freeGlyphRects;

 TMPro::FaceInfo_Legacy __declspec(property(get=get_fontInfo))  fontInfo;

 int32_t __declspec(property(get=get_atlasWidth, put=set_atlasWidth))  atlasWidth;

 int32_t __declspec(property(get=get_atlasHeight, put=set_atlasHeight))  atlasHeight;

 int32_t __declspec(property(get=get_atlasPadding, put=set_atlasPadding))  atlasPadding;

 UnityEngine::TextCore::LowLevel::GlyphRenderMode __declspec(property(get=get_atlasRenderMode, put=set_atlasRenderMode))  atlasRenderMode;

 TMPro::TMP_FontFeatureTable __declspec(property(get=get_fontFeatureTable, put=set_fontFeatureTable))  fontFeatureTable;

 System::Collections::Generic::List_1<TMPro::TMP_FontAsset> __declspec(property(get=get_fallbackFontAssetTable, put=set_fallbackFontAssetTable))  fallbackFontAssetTable;

 TMPro::FontAssetCreationSettings __declspec(property(get=get_creationSettings, put=set_creationSettings))  creationSettings;

 ::ArrayW<TMPro::TMP_FontWeightPair> __declspec(property(get=get_fontWeightTable, put=set_fontWeightTable))  fontWeightTable;


// Methods

/// @brief Method get_version addr 0x2a6fee0 size 0x8 virtual false final false
 ::StringW get_version() ;

/// @brief Method set_version addr 0x2a6fee8 size 0x8 virtual false final false
 void set_version(::StringW value) ;

/// @brief Method get_sourceFontFile addr 0x2a6fef0 size 0x8 virtual false final false
 UnityEngine::Font get_sourceFontFile() ;

/// @brief Method set_sourceFontFile addr 0x2a6fef8 size 0x8 virtual false final false
 void set_sourceFontFile(UnityEngine::Font value) ;

/// @brief Method get_atlasPopulationMode addr 0x2a6ff00 size 0x8 virtual false final false
 TMPro::AtlasPopulationMode get_atlasPopulationMode() ;

/// @brief Method set_atlasPopulationMode addr 0x2a6ff08 size 0x8 virtual false final false
 void set_atlasPopulationMode(TMPro::AtlasPopulationMode value) ;

/// @brief Method get_faceInfo addr 0x2a6ff10 size 0x10 virtual false final false
 UnityEngine::TextCore::FaceInfo get_faceInfo() ;

/// @brief Method set_faceInfo addr 0x2a6ff20 size 0x18 virtual false final false
 void set_faceInfo(UnityEngine::TextCore::FaceInfo value) ;

/// @brief Method get_glyphTable addr 0x2a6ff38 size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph> get_glyphTable() ;

/// @brief Method set_glyphTable addr 0x2a6ff40 size 0x8 virtual false final false
 void set_glyphTable(System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph> value) ;

/// @brief Method get_glyphLookupTable addr 0x2a6ff48 size 0x24 virtual false final false
 System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Glyph> get_glyphLookupTable() ;

/// @brief Method get_characterTable addr 0x2a701a4 size 0x8 virtual false final false
 System::Collections::Generic::List_1<TMPro::TMP_Character> get_characterTable() ;

/// @brief Method set_characterTable addr 0x2a701ac size 0x8 virtual false final false
 void set_characterTable(System::Collections::Generic::List_1<TMPro::TMP_Character> value) ;

/// @brief Method get_characterLookupTable addr 0x2a701b4 size 0x24 virtual false final false
 System::Collections::Generic::Dictionary_2<uint32_t,TMPro::TMP_Character> get_characterLookupTable() ;

/// @brief Method get_atlasTexture addr 0x2a701d8 size 0x90 virtual false final false
 UnityEngine::Texture2D get_atlasTexture() ;

/// @brief Method get_atlasTextures addr 0x2a70268 size 0x8 virtual false final false
 ::ArrayW<UnityEngine::Texture2D> get_atlasTextures() ;

/// @brief Method set_atlasTextures addr 0x2a70270 size 0x8 virtual false final false
 void set_atlasTextures(::ArrayW<UnityEngine::Texture2D> value) ;

/// @brief Method get_atlasTextureCount addr 0x2a70278 size 0xc virtual false final false
 int32_t get_atlasTextureCount() ;

/// @brief Method get_isMultiAtlasTexturesEnabled addr 0x2a70284 size 0x8 virtual false final false
 bool get_isMultiAtlasTexturesEnabled() ;

/// @brief Method set_isMultiAtlasTexturesEnabled addr 0x2a7028c size 0xc virtual false final false
 void set_isMultiAtlasTexturesEnabled(bool value) ;

/// @brief Method get_clearDynamicDataOnBuild addr 0x2a70298 size 0x8 virtual false final false
 bool get_clearDynamicDataOnBuild() ;

/// @brief Method set_clearDynamicDataOnBuild addr 0x2a702a0 size 0xc virtual false final false
 void set_clearDynamicDataOnBuild(bool value) ;

/// @brief Method get_usedGlyphRects addr 0x2a702ac size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> get_usedGlyphRects() ;

/// @brief Method set_usedGlyphRects addr 0x2a702b4 size 0x8 virtual false final false
 void set_usedGlyphRects(System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> value) ;

/// @brief Method get_freeGlyphRects addr 0x2a702bc size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> get_freeGlyphRects() ;

/// @brief Method set_freeGlyphRects addr 0x2a702c4 size 0x8 virtual false final false
 void set_freeGlyphRects(System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> value) ;

/// @brief Method get_fontInfo addr 0x2a702cc size 0x8 virtual false final false
 TMPro::FaceInfo_Legacy get_fontInfo() ;

/// @brief Method get_atlasWidth addr 0x2a702d4 size 0x8 virtual false final false
 int32_t get_atlasWidth() ;

/// @brief Method set_atlasWidth addr 0x2a702dc size 0x8 virtual false final false
 void set_atlasWidth(int32_t value) ;

/// @brief Method get_atlasHeight addr 0x2a702e4 size 0x8 virtual false final false
 int32_t get_atlasHeight() ;

/// @brief Method set_atlasHeight addr 0x2a702ec size 0x8 virtual false final false
 void set_atlasHeight(int32_t value) ;

/// @brief Method get_atlasPadding addr 0x2a702f4 size 0x8 virtual false final false
 int32_t get_atlasPadding() ;

/// @brief Method set_atlasPadding addr 0x2a702fc size 0x8 virtual false final false
 void set_atlasPadding(int32_t value) ;

/// @brief Method get_atlasRenderMode addr 0x2a70304 size 0x8 virtual false final false
 UnityEngine::TextCore::LowLevel::GlyphRenderMode get_atlasRenderMode() ;

/// @brief Method set_atlasRenderMode addr 0x2a7030c size 0x8 virtual false final false
 void set_atlasRenderMode(UnityEngine::TextCore::LowLevel::GlyphRenderMode value) ;

/// @brief Method get_fontFeatureTable addr 0x2a70314 size 0x8 virtual false final false
 TMPro::TMP_FontFeatureTable get_fontFeatureTable() ;

/// @brief Method set_fontFeatureTable addr 0x2a7031c size 0x8 virtual false final false
 void set_fontFeatureTable(TMPro::TMP_FontFeatureTable value) ;

/// @brief Method get_fallbackFontAssetTable addr 0x2a70324 size 0x8 virtual false final false
 System::Collections::Generic::List_1<TMPro::TMP_FontAsset> get_fallbackFontAssetTable() ;

/// @brief Method set_fallbackFontAssetTable addr 0x2a7032c size 0x8 virtual false final false
 void set_fallbackFontAssetTable(System::Collections::Generic::List_1<TMPro::TMP_FontAsset> value) ;

/// @brief Method get_creationSettings addr 0x2a70334 size 0x10 virtual false final false
 TMPro::FontAssetCreationSettings get_creationSettings() ;

/// @brief Method set_creationSettings addr 0x2a70344 size 0x18 virtual false final false
 void set_creationSettings(TMPro::FontAssetCreationSettings value) ;

/// @brief Method get_fontWeightTable addr 0x2a7035c size 0x8 virtual false final false
 ::ArrayW<TMPro::TMP_FontWeightPair> get_fontWeightTable() ;

/// @brief Method set_fontWeightTable addr 0x2a70364 size 0x8 virtual false final false
 void set_fontWeightTable(::ArrayW<TMPro::TMP_FontWeightPair> value) ;

/// @brief Method CreateFontAsset addr 0x2a7036c size 0x7c virtual false final false
static TMPro::TMP_FontAsset CreateFontAsset(UnityEngine::Font font) ;

/// @brief Method CreateFontAsset addr 0x2a703e8 size 0x524 virtual false final false
static TMPro::TMP_FontAsset CreateFontAsset(UnityEngine::Font font, int32_t samplingPointSize, int32_t atlasPadding, UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight, TMPro::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport) ;

/// @brief Method Awake addr 0x2a7090c size 0x88 virtual false final false
 void Awake() ;

/// @brief Method ReadFontAssetDefinition addr 0x2a6ff6c size 0x238 virtual false final false
 void ReadFontAssetDefinition() ;

/// @brief Method InitializeDictionaryLookupTables addr 0x2a715e8 size 0x20 virtual false final false
 void InitializeDictionaryLookupTables() ;

/// @brief Method InitializeGlyphLookupDictionary addr 0x2a7190c size 0x288 virtual false final false
 void InitializeGlyphLookupDictionary() ;

/// @brief Method InitializeCharacterLookupDictionary addr 0x2a71b94 size 0x228 virtual false final false
 void InitializeCharacterLookupDictionary() ;

/// @brief Method InitializeGlyphPaidAdjustmentRecordsLookupDictionary addr 0x2a71dbc size 0x1c8 virtual false final false
 void InitializeGlyphPaidAdjustmentRecordsLookupDictionary() ;

/// @brief Method AddSynthesizedCharactersAndFaceMetrics addr 0x2a71608 size 0x304 virtual false final false
 void AddSynthesizedCharactersAndFaceMetrics() ;

/// @brief Method AddSynthesizedCharacter addr 0x2a722d0 size 0x254 virtual false final false
 void AddSynthesizedCharacter(uint32_t unicode, bool isFontFaceLoaded, bool addImmediately) ;

/// @brief Method AddCharacterToLookupCache addr 0x2a72524 size 0xb8 virtual false final false
 void AddCharacterToLookupCache(uint32_t unicode, TMPro::TMP_Character character) ;

/// @brief Method SortCharacterTable addr 0x2a725dc size 0x13c virtual false final false
 void SortCharacterTable() ;

/// @brief Method SortGlyphTable addr 0x2a72718 size 0x13c virtual false final false
 void SortGlyphTable() ;

/// @brief Method SortFontFeatureTable addr 0x2a72854 size 0x18 virtual false final false
 void SortFontFeatureTable() ;

/// @brief Method SortAllTables addr 0x2a72a58 size 0x28 virtual false final false
 void SortAllTables() ;

/// @brief Method HasCharacter addr 0x2a72a80 size 0x60 virtual false final false
 bool HasCharacter(int32_t character) ;

/// @brief Method HasCharacter addr 0x2a72ae0 size 0x4c0 virtual false final false
 bool HasCharacter(char16_t character, bool searchFallbacks, bool tryAddCharacter) ;

/// @brief Method HasCharacter_Internal addr 0x2a738d8 size 0x21c virtual false final false
 bool HasCharacter_Internal(uint32_t character, bool searchFallbacks, bool tryAddCharacter) ;

/// @brief Method HasCharacters addr 0x2a73af4 size 0x1a8 virtual false final false
 bool HasCharacters(::StringW text, ByRef<System::Collections::Generic::List_1<char16_t>> missingCharacters) ;

/// @brief Method HasCharacters addr 0x2a73c9c size 0x5f8 virtual false final false
 bool HasCharacters(::StringW text, ByRef<::ArrayW<uint32_t>> missingCharacters, bool searchFallbacks, bool tryAddCharacter) ;

/// @brief Method HasCharacters addr 0x2a74294 size 0xb4 virtual false final false
 bool HasCharacters(::StringW text) ;

/// @brief Method GetCharacters addr 0x2a74348 size 0xe0 virtual false final false
static ::StringW GetCharacters(TMPro::TMP_FontAsset fontAsset) ;

/// @brief Method GetCharactersArray addr 0x2a74428 size 0xe4 virtual false final false
static ::ArrayW<int32_t> GetCharactersArray(TMPro::TMP_FontAsset fontAsset) ;

/// @brief Method GetGlyphIndex addr 0x2a7450c size 0x118 virtual false final false
 uint32_t GetGlyphIndex(uint32_t unicode) ;

/// @brief Method RegisterFontAssetForFontFeatureUpdate addr 0x2a74624 size 0x134 virtual false final false
static void RegisterFontAssetForFontFeatureUpdate(TMPro::TMP_FontAsset fontAsset) ;

/// @brief Method UpdateFontFeaturesForFontAssetsInQueue addr 0x2a74758 size 0x178 virtual false final false
static void UpdateFontFeaturesForFontAssetsInQueue() ;

/// @brief Method RegisterFontAssetForAtlasTextureUpdate addr 0x2a74be8 size 0x134 virtual false final false
static void RegisterFontAssetForAtlasTextureUpdate(TMPro::TMP_FontAsset fontAsset) ;

/// @brief Method UpdateAtlasTexturesForFontAssetsInQueue addr 0x2a74d1c size 0x174 virtual false final false
static void UpdateAtlasTexturesForFontAssetsInQueue() ;

/// @brief Method TryAddCharacters addr 0x2a74e94 size 0x20 virtual false final false
 bool TryAddCharacters(::ArrayW<uint32_t> unicodes, bool includeFontFeatures) ;

/// @brief Method TryAddCharacters addr 0x2a74eb4 size 0xc30 virtual false final false
 bool TryAddCharacters(::ArrayW<uint32_t> unicodes, ByRef<::ArrayW<uint32_t>> missingUnicodes, bool includeFontFeatures) ;

/// @brief Method TryAddCharacters addr 0x2a75f70 size 0x20 virtual false final false
 bool TryAddCharacters(::StringW characters, bool includeFontFeatures) ;

/// @brief Method TryAddCharacters addr 0x2a75f90 size 0xbec virtual false final false
 bool TryAddCharacters(::StringW characters, ByRef<::StringW> missingCharacters, bool includeFontFeatures) ;

/// @brief Method TryAddCharacterInternal addr 0x2a72fa0 size 0x938 virtual false final false
 bool TryAddCharacterInternal(uint32_t unicode, ByRef<TMPro::TMP_Character> character) ;

/// @brief Method TryGetCharacter_and_QueueRenderToTexture addr 0x2a76db4 size 0x5b4 virtual false final false
 bool TryGetCharacter_and_QueueRenderToTexture(uint32_t unicode, ByRef<TMPro::TMP_Character> character) ;

/// @brief Method TryAddGlyphsToAtlasTextures addr 0x2a74e90 size 0x4 virtual false final false
 void TryAddGlyphsToAtlasTextures() ;

/// @brief Method TryAddGlyphsToNewAtlasTexture addr 0x2a75ae4 size 0x48c virtual false final false
 bool TryAddGlyphsToNewAtlasTexture() ;

/// @brief Method SetupNewAtlasTexture addr 0x2a76b7c size 0x238 virtual false final false
 void SetupNewAtlasTexture() ;

/// @brief Method UpdateAtlasTexture addr 0x2a77368 size 0x178 virtual false final false
 void UpdateAtlasTexture() ;

/// @brief Method UpdateGlyphAdjustmentRecords addr 0x2a748d0 size 0x318 virtual false final false
 void UpdateGlyphAdjustmentRecords() ;

/// @brief Method UpdateGlyphAdjustmentRecords addr 0x2a77658 size 0x2f0 virtual false final false
 void UpdateGlyphAdjustmentRecords(::ArrayW<uint32_t> glyphIndexes) ;

/// @brief Method UpdateGlyphAdjustmentRecords addr 0x2a77948 size 0x4 virtual false final false
 void UpdateGlyphAdjustmentRecords(System::Collections::Generic::List_1<uint32_t> glyphIndexes) ;

/// @brief Method UpdateGlyphAdjustmentRecords addr 0x2a7794c size 0x4 virtual false final false
 void UpdateGlyphAdjustmentRecords(System::Collections::Generic::List_1<uint32_t> newGlyphIndexes, System::Collections::Generic::List_1<uint32_t> allGlyphIndexes) ;

/// @brief Method CopyListDataToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void CopyListDataToArray(System::Collections::Generic::List_1<T> srcList, ByRef<::ArrayW<T>> dstArray) ;

/// @brief Method ClearFontAssetData addr 0x2a77950 size 0x30 virtual false final false
 void ClearFontAssetData(bool setAtlasSizeToZero) ;

/// @brief Method ClearFontAssetDataInternal addr 0x2a77f58 size 0x1c virtual false final false
 void ClearFontAssetDataInternal() ;

/// @brief Method UpdateFontAssetData addr 0x2a77f74 size 0x124 virtual false final false
 void UpdateFontAssetData() ;

/// @brief Method ClearFontAssetTables addr 0x2a77980 size 0x214 virtual false final false
 void ClearFontAssetTables() ;

/// @brief Method ClearAtlasTextures addr 0x2a77b94 size 0x3c4 virtual false final false
 void ClearAtlasTextures(bool setAtlasSizeToZero) ;

/// @brief Method UpgradeFontAsset addr 0x2a70994 size 0xc54 virtual false final false
 void UpgradeFontAsset() ;

/// @brief Method UpgradeGlyphAdjustmentTableToFontFeatureTable addr 0x2a71f84 size 0x324 virtual false final false
 void UpgradeGlyphAdjustmentTableToFontFeatureTable() ;

// Ctor Parameters []
explicit TMP_FontAsset() ;

/// @brief Method .ctor addr 0x2a780fc size 0x314 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::TMP_FontAsset);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_FontAsset, "TMPro", "TMP_FontAsset");
NEED_NO_BOX(TMPro::TMPro__TMP_FontAsset____c);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_FontAsset____c, "TMPro", "TMP_FontAsset/<>c");
