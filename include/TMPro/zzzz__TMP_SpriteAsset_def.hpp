#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "TMPro/zzzz__TMP_Asset_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine::TextCore {
struct FaceInfo;
}
namespace TMPro {
class TMP_Sprite;
}
namespace UnityEngine {
class Texture;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace TMPro {
class TMP_SpriteCharacter;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
class Material;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_SpriteGlyph;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace TMPro {
class TMP_SpriteAsset;
}
namespace TMPro {
class TMPro__TMP_SpriteAsset____c;
}
// Type: ::<>c
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12362))
// CS Name: TMPro.TMP_SpriteAsset::<>c
class CORDL_TYPE TMPro__TMP_SpriteAsset____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TMPro__TMP_SpriteAsset____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_SpriteAsset____c", modifiers: " const&", def_value: None }]
constexpr TMPro__TMP_SpriteAsset____c(TMPro__TMP_SpriteAsset____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_SpriteAsset____c", modifiers: "&&", def_value: None }]
constexpr TMPro__TMP_SpriteAsset____c(TMPro__TMP_SpriteAsset____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_SpriteAsset____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMPro__TMP_SpriteAsset____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__TMP_SpriteAsset____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__TMP_SpriteAsset____c& operator=(TMPro__TMP_SpriteAsset____c&& o) noexcept = default;
  constexpr TMPro__TMP_SpriteAsset____c& operator=(TMPro__TMP_SpriteAsset____c const& o) noexcept = default;
                


// Fields

static TMPro::TMPro__TMP_SpriteAsset____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(TMPro::TMPro__TMP_SpriteAsset____c value) ;

static TMPro::TMPro__TMP_SpriteAsset____c __get___9() ;

static System::Func_2<TMPro::TMP_SpriteGlyph,uint32_t> __declspec(property(get=__get___9__40_0, put=__set___9__40_0))  __9__40_0;

static void __set___9__40_0(System::Func_2<TMPro::TMP_SpriteGlyph,uint32_t> value) ;

static System::Func_2<TMPro::TMP_SpriteGlyph,uint32_t> __get___9__40_0() ;

static System::Func_2<TMPro::TMP_SpriteCharacter,uint32_t> __declspec(property(get=__get___9__41_0, put=__set___9__41_0))  __9__41_0;

static void __set___9__41_0(System::Func_2<TMPro::TMP_SpriteCharacter,uint32_t> value) ;

static System::Func_2<TMPro::TMP_SpriteCharacter,uint32_t> __get___9__41_0() ;


// Methods

// Ctor Parameters []
explicit TMPro__TMP_SpriteAsset____c() ;

/// @brief Method .ctor addr 0x2aace84 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SortGlyphTable>b__40_0 addr 0x2aace8c size 0x18 virtual false final false
 uint32_t _SortGlyphTable_b__40_0(TMPro::TMP_SpriteGlyph item) ;

/// @brief Method <SortCharacterTable>b__41_0 addr 0x2aacea4 size 0x18 virtual false final false
 uint32_t _SortCharacterTable_b__41_0(TMPro::TMP_SpriteCharacter c) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TMP_SpriteAsset
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12269))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12363))
// CS Name: TMPro.TMP_SpriteAsset
class CORDL_TYPE TMP_SpriteAsset : public TMPro::TMP_Asset {
public:
// Declarations
using __c = TMPro::TMPro__TMP_SpriteAsset____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe8};

virtual ~TMP_SpriteAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_SpriteAsset", modifiers: " const&", def_value: None }]
constexpr TMP_SpriteAsset(TMP_SpriteAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_SpriteAsset", modifiers: "&&", def_value: None }]
constexpr TMP_SpriteAsset(TMP_SpriteAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_SpriteAsset(void* ptr) noexcept : TMPro::TMP_Asset(ptr) {
}


  constexpr TMP_SpriteAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_SpriteAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_SpriteAsset& operator=(TMP_SpriteAsset&& o) noexcept = default;
  constexpr TMP_SpriteAsset& operator=(TMP_SpriteAsset const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<int32_t,int32_t> __declspec(property(get=__get_m_NameLookup, put=__set_m_NameLookup))  m_NameLookup;

constexpr void __set_m_NameLookup(System::Collections::Generic::Dictionary_2<int32_t,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,int32_t> __get_m_NameLookup() const;

 System::Collections::Generic::Dictionary_2<uint32_t,int32_t> __declspec(property(get=__get_m_GlyphIndexLookup, put=__set_m_GlyphIndexLookup))  m_GlyphIndexLookup;

constexpr void __set_m_GlyphIndexLookup(System::Collections::Generic::Dictionary_2<uint32_t,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<uint32_t,int32_t> __get_m_GlyphIndexLookup() const;

 ::StringW __declspec(property(get=__get_m_Version, put=__set_m_Version))  m_Version;

constexpr void __set_m_Version(::StringW value) ;

constexpr ::StringW __get_m_Version() const;

 UnityEngine::TextCore::FaceInfo __declspec(property(get=__get_m_FaceInfo, put=__set_m_FaceInfo))  m_FaceInfo;

constexpr void __set_m_FaceInfo(UnityEngine::TextCore::FaceInfo value) ;

constexpr UnityEngine::TextCore::FaceInfo __get_m_FaceInfo() const;

 UnityEngine::Texture __declspec(property(get=__get_spriteSheet, put=__set_spriteSheet))  spriteSheet;

constexpr void __set_spriteSheet(UnityEngine::Texture value) ;

constexpr UnityEngine::Texture __get_spriteSheet() const;

 System::Collections::Generic::List_1<TMPro::TMP_SpriteCharacter> __declspec(property(get=__get_m_SpriteCharacterTable, put=__set_m_SpriteCharacterTable))  m_SpriteCharacterTable;

constexpr void __set_m_SpriteCharacterTable(System::Collections::Generic::List_1<TMPro::TMP_SpriteCharacter> value) ;

constexpr System::Collections::Generic::List_1<TMPro::TMP_SpriteCharacter> __get_m_SpriteCharacterTable() const;

 System::Collections::Generic::Dictionary_2<uint32_t,TMPro::TMP_SpriteCharacter> __declspec(property(get=__get_m_SpriteCharacterLookup, put=__set_m_SpriteCharacterLookup))  m_SpriteCharacterLookup;

constexpr void __set_m_SpriteCharacterLookup(System::Collections::Generic::Dictionary_2<uint32_t,TMPro::TMP_SpriteCharacter> value) ;

constexpr System::Collections::Generic::Dictionary_2<uint32_t,TMPro::TMP_SpriteCharacter> __get_m_SpriteCharacterLookup() const;

 System::Collections::Generic::List_1<TMPro::TMP_SpriteGlyph> __declspec(property(get=__get_m_SpriteGlyphTable, put=__set_m_SpriteGlyphTable))  m_SpriteGlyphTable;

constexpr void __set_m_SpriteGlyphTable(System::Collections::Generic::List_1<TMPro::TMP_SpriteGlyph> value) ;

constexpr System::Collections::Generic::List_1<TMPro::TMP_SpriteGlyph> __get_m_SpriteGlyphTable() const;

 System::Collections::Generic::Dictionary_2<uint32_t,TMPro::TMP_SpriteGlyph> __declspec(property(get=__get_m_SpriteGlyphLookup, put=__set_m_SpriteGlyphLookup))  m_SpriteGlyphLookup;

constexpr void __set_m_SpriteGlyphLookup(System::Collections::Generic::Dictionary_2<uint32_t,TMPro::TMP_SpriteGlyph> value) ;

constexpr System::Collections::Generic::Dictionary_2<uint32_t,TMPro::TMP_SpriteGlyph> __get_m_SpriteGlyphLookup() const;

 System::Collections::Generic::List_1<TMPro::TMP_Sprite> __declspec(property(get=__get_spriteInfoList, put=__set_spriteInfoList))  spriteInfoList;

constexpr void __set_spriteInfoList(System::Collections::Generic::List_1<TMPro::TMP_Sprite> value) ;

constexpr System::Collections::Generic::List_1<TMPro::TMP_Sprite> __get_spriteInfoList() const;

 System::Collections::Generic::List_1<TMPro::TMP_SpriteAsset> __declspec(property(get=__get_fallbackSpriteAssets, put=__set_fallbackSpriteAssets))  fallbackSpriteAssets;

constexpr void __set_fallbackSpriteAssets(System::Collections::Generic::List_1<TMPro::TMP_SpriteAsset> value) ;

constexpr System::Collections::Generic::List_1<TMPro::TMP_SpriteAsset> __get_fallbackSpriteAssets() const;

 bool __declspec(property(get=__get_m_IsSpriteAssetLookupTablesDirty, put=__set_m_IsSpriteAssetLookupTablesDirty))  m_IsSpriteAssetLookupTablesDirty;

constexpr void __set_m_IsSpriteAssetLookupTablesDirty(bool value) ;

constexpr bool __get_m_IsSpriteAssetLookupTablesDirty() const;

static System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get_k_searchedSpriteAssets, put=__set_k_searchedSpriteAssets))  k_searchedSpriteAssets;

static void __set_k_searchedSpriteAssets(System::Collections::Generic::HashSet_1<int32_t> value) ;

static System::Collections::Generic::HashSet_1<int32_t> __get_k_searchedSpriteAssets() ;


// Properties

 ::StringW __declspec(property(get=get_version, put=set_version))  version;

 UnityEngine::TextCore::FaceInfo __declspec(property(get=get_faceInfo, put=set_faceInfo))  faceInfo;

 System::Collections::Generic::List_1<TMPro::TMP_SpriteCharacter> __declspec(property(get=get_spriteCharacterTable, put=set_spriteCharacterTable))  spriteCharacterTable;

 System::Collections::Generic::Dictionary_2<uint32_t,TMPro::TMP_SpriteCharacter> __declspec(property(get=get_spriteCharacterLookupTable, put=set_spriteCharacterLookupTable))  spriteCharacterLookupTable;

 System::Collections::Generic::List_1<TMPro::TMP_SpriteGlyph> __declspec(property(get=get_spriteGlyphTable, put=set_spriteGlyphTable))  spriteGlyphTable;


// Methods

/// @brief Method get_version addr 0x2aab204 size 0x8 virtual false final false
 ::StringW get_version() ;

/// @brief Method set_version addr 0x2aab20c size 0x8 virtual false final false
 void set_version(::StringW value) ;

/// @brief Method get_faceInfo addr 0x2aab214 size 0x10 virtual false final false
 UnityEngine::TextCore::FaceInfo get_faceInfo() ;

/// @brief Method set_faceInfo addr 0x2aab224 size 0x18 virtual false final false
 void set_faceInfo(UnityEngine::TextCore::FaceInfo value) ;

/// @brief Method get_spriteCharacterTable addr 0x2aab190 size 0x24 virtual false final false
 System::Collections::Generic::List_1<TMPro::TMP_SpriteCharacter> get_spriteCharacterTable() ;

/// @brief Method set_spriteCharacterTable addr 0x2aab760 size 0x8 virtual false final false
 void set_spriteCharacterTable(System::Collections::Generic::List_1<TMPro::TMP_SpriteCharacter> value) ;

/// @brief Method get_spriteCharacterLookupTable addr 0x2aab768 size 0x24 virtual false final false
 System::Collections::Generic::Dictionary_2<uint32_t,TMPro::TMP_SpriteCharacter> get_spriteCharacterLookupTable() ;

/// @brief Method set_spriteCharacterLookupTable addr 0x2aab78c size 0x8 virtual false final false
 void set_spriteCharacterLookupTable(System::Collections::Generic::Dictionary_2<uint32_t,TMPro::TMP_SpriteCharacter> value) ;

/// @brief Method get_spriteGlyphTable addr 0x2aab794 size 0x8 virtual false final false
 System::Collections::Generic::List_1<TMPro::TMP_SpriteGlyph> get_spriteGlyphTable() ;

/// @brief Method set_spriteGlyphTable addr 0x2aab79c size 0x8 virtual false final false
 void set_spriteGlyphTable(System::Collections::Generic::List_1<TMPro::TMP_SpriteGlyph> value) ;

/// @brief Method Awake addr 0x2aab7a4 size 0x88 virtual false final false
 void Awake() ;

/// @brief Method GetDefaultSpriteMaterial addr 0x2aabd68 size 0xe8 virtual false final false
 UnityEngine::Material GetDefaultSpriteMaterial() ;

/// @brief Method UpdateLookupTables addr 0x2aab23c size 0x524 virtual false final false
 void UpdateLookupTables() ;

/// @brief Method GetSpriteIndexFromHashcode addr 0x2aabe50 size 0x88 virtual false final false
 int32_t GetSpriteIndexFromHashcode(int32_t hashCode) ;

/// @brief Method GetSpriteIndexFromUnicode addr 0x2aabed8 size 0x94 virtual false final false
 int32_t GetSpriteIndexFromUnicode(uint32_t unicode) ;

/// @brief Method GetSpriteIndexFromName addr 0x2aabf6c size 0x74 virtual false final false
 int32_t GetSpriteIndexFromName(::StringW name) ;

/// @brief Method SearchForSpriteByUnicode addr 0x2aac04c size 0x228 virtual false final false
static TMPro::TMP_SpriteAsset SearchForSpriteByUnicode(TMPro::TMP_SpriteAsset spriteAsset, uint32_t unicode, bool includeFallbacks, ByRef<int32_t> spriteIndex) ;

/// @brief Method SearchForSpriteByUnicodeInternal addr 0x2aac274 size 0x1a0 virtual false final false
static TMPro::TMP_SpriteAsset SearchForSpriteByUnicodeInternal(System::Collections::Generic::List_1<TMPro::TMP_SpriteAsset> spriteAssets, uint32_t unicode, bool includeFallbacks, ByRef<int32_t> spriteIndex) ;

/// @brief Method SearchForSpriteByUnicodeInternal addr 0x2aac414 size 0xb0 virtual false final false
static TMPro::TMP_SpriteAsset SearchForSpriteByUnicodeInternal(TMPro::TMP_SpriteAsset spriteAsset, uint32_t unicode, bool includeFallbacks, ByRef<int32_t> spriteIndex) ;

/// @brief Method SearchForSpriteByHashCode addr 0x2aac4c4 size 0x320 virtual false final false
static TMPro::TMP_SpriteAsset SearchForSpriteByHashCode(TMPro::TMP_SpriteAsset spriteAsset, int32_t hashCode, bool includeFallbacks, ByRef<int32_t> spriteIndex) ;

/// @brief Method SearchForSpriteByHashCodeInternal addr 0x2aac7e4 size 0x1a0 virtual false final false
static TMPro::TMP_SpriteAsset SearchForSpriteByHashCodeInternal(System::Collections::Generic::List_1<TMPro::TMP_SpriteAsset> spriteAssets, int32_t hashCode, bool searchFallbacks, ByRef<int32_t> spriteIndex) ;

/// @brief Method SearchForSpriteByHashCodeInternal addr 0x2aac984 size 0xb0 virtual false final false
static TMPro::TMP_SpriteAsset SearchForSpriteByHashCodeInternal(TMPro::TMP_SpriteAsset spriteAsset, int32_t hashCode, bool searchFallbacks, ByRef<int32_t> spriteIndex) ;

/// @brief Method SortGlyphTable addr 0x2aaca34 size 0x138 virtual false final false
 void SortGlyphTable() ;

/// @brief Method SortCharacterTable addr 0x2aacb6c size 0x13c virtual false final false
 void SortCharacterTable() ;

/// @brief Method SortGlyphAndCharacterTables addr 0x2aacca8 size 0x18 virtual false final false
 void SortGlyphAndCharacterTables() ;

/// @brief Method UpgradeSpriteAsset addr 0x2aab82c size 0x53c virtual false final false
 void UpgradeSpriteAsset() ;

// Ctor Parameters []
explicit TMP_SpriteAsset() ;

/// @brief Method .ctor addr 0x2aacd60 size 0xc0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::TMP_SpriteAsset);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_SpriteAsset, "TMPro", "TMP_SpriteAsset");
NEED_NO_BOX(TMPro::TMPro__TMP_SpriteAsset____c);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_SpriteAsset____c, "TMPro", "TMP_SpriteAsset/<>c");
