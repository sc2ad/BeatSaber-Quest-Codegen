#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAsset_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
class Texture;
}
namespace UnityEngine::TextCore::Text {
class TextSettings;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::TextCore::Text {
class SpriteCharacter;
}
namespace UnityEngine::TextCore::Text {
class SpriteGlyph;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::TextCore {
struct FaceInfo;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class SpriteAsset;
}
namespace UnityEngine::TextCore::Text {
class UnityEngine__TextCore__Text__SpriteAsset____c;
}
// Type: ::<>c
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13505))
// CS Name: UnityEngine.TextCore.Text.SpriteAsset::<>c
class CORDL_TYPE UnityEngine__TextCore__Text__SpriteAsset____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__TextCore__Text__SpriteAsset____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__TextCore__Text__SpriteAsset____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__TextCore__Text__SpriteAsset____c(UnityEngine__TextCore__Text__SpriteAsset____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__TextCore__Text__SpriteAsset____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__TextCore__Text__SpriteAsset____c(UnityEngine__TextCore__Text__SpriteAsset____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__TextCore__Text__SpriteAsset____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__TextCore__Text__SpriteAsset____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__TextCore__Text__SpriteAsset____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__TextCore__Text__SpriteAsset____c& operator=(UnityEngine__TextCore__Text__SpriteAsset____c&& o) noexcept = default;
  constexpr UnityEngine__TextCore__Text__SpriteAsset____c& operator=(UnityEngine__TextCore__Text__SpriteAsset____c const& o) noexcept = default;
                


// Fields

static UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__SpriteAsset____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__SpriteAsset____c value) ;

static UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__SpriteAsset____c __get___9() ;

static System::Func_2<UnityEngine::TextCore::Text::SpriteGlyph,uint32_t> __declspec(property(get=__get___9__37_0, put=__set___9__37_0))  __9__37_0;

static void __set___9__37_0(System::Func_2<UnityEngine::TextCore::Text::SpriteGlyph,uint32_t> value) ;

static System::Func_2<UnityEngine::TextCore::Text::SpriteGlyph,uint32_t> __get___9__37_0() ;

static System::Func_2<UnityEngine::TextCore::Text::SpriteCharacter,uint32_t> __declspec(property(get=__get___9__38_0, put=__set___9__38_0))  __9__38_0;

static void __set___9__38_0(System::Func_2<UnityEngine::TextCore::Text::SpriteCharacter,uint32_t> value) ;

static System::Func_2<UnityEngine::TextCore::Text::SpriteCharacter,uint32_t> __get___9__38_0() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__TextCore__Text__SpriteAsset____c() ;

/// @brief Method .ctor addr 0x2bcb618 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SortGlyphTable>b__37_0 addr 0x2bcb620 size 0x18 virtual false final false
 uint32_t _SortGlyphTable_b__37_0(UnityEngine::TextCore::Text::SpriteGlyph item) ;

/// @brief Method <SortCharacterTable>b__38_0 addr 0x2bcb638 size 0x18 virtual false final false
 uint32_t _SortCharacterTable_b__38_0(UnityEngine::TextCore::Text::SpriteCharacter c) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
// Type: UnityEngine.TextCore.Text::SpriteAsset
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13537))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13506))
// CS Name: UnityEngine.TextCore.Text.SpriteAsset
class CORDL_TYPE SpriteAsset : public UnityEngine::TextCore::Text::TextAsset {
public:
// Declarations
using __c = UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__SpriteAsset____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe0};

virtual ~SpriteAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "SpriteAsset", modifiers: " const&", def_value: None }]
constexpr SpriteAsset(SpriteAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SpriteAsset", modifiers: "&&", def_value: None }]
constexpr SpriteAsset(SpriteAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SpriteAsset(void* ptr) noexcept : UnityEngine::TextCore::Text::TextAsset(ptr) {
}


  constexpr SpriteAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SpriteAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SpriteAsset& operator=(SpriteAsset&& o) noexcept = default;
  constexpr SpriteAsset& operator=(SpriteAsset const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<int32_t,int32_t> __declspec(property(get=__get_m_NameLookup, put=__set_m_NameLookup))  m_NameLookup;

constexpr void __set_m_NameLookup(System::Collections::Generic::Dictionary_2<int32_t,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,int32_t> __get_m_NameLookup() const;

 System::Collections::Generic::Dictionary_2<uint32_t,int32_t> __declspec(property(get=__get_m_GlyphIndexLookup, put=__set_m_GlyphIndexLookup))  m_GlyphIndexLookup;

constexpr void __set_m_GlyphIndexLookup(System::Collections::Generic::Dictionary_2<uint32_t,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<uint32_t,int32_t> __get_m_GlyphIndexLookup() const;

 UnityEngine::TextCore::FaceInfo __declspec(property(get=__get_m_FaceInfo, put=__set_m_FaceInfo))  m_FaceInfo;

constexpr void __set_m_FaceInfo(UnityEngine::TextCore::FaceInfo value) ;

constexpr UnityEngine::TextCore::FaceInfo __get_m_FaceInfo() const;

 UnityEngine::Texture __declspec(property(get=__get_m_SpriteAtlasTexture, put=__set_m_SpriteAtlasTexture))  m_SpriteAtlasTexture;

constexpr void __set_m_SpriteAtlasTexture(UnityEngine::Texture value) ;

constexpr UnityEngine::Texture __get_m_SpriteAtlasTexture() const;

 System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteCharacter> __declspec(property(get=__get_m_SpriteCharacterTable, put=__set_m_SpriteCharacterTable))  m_SpriteCharacterTable;

constexpr void __set_m_SpriteCharacterTable(System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteCharacter> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteCharacter> __get_m_SpriteCharacterTable() const;

 System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Text::SpriteCharacter> __declspec(property(get=__get_m_SpriteCharacterLookup, put=__set_m_SpriteCharacterLookup))  m_SpriteCharacterLookup;

constexpr void __set_m_SpriteCharacterLookup(System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Text::SpriteCharacter> value) ;

constexpr System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Text::SpriteCharacter> __get_m_SpriteCharacterLookup() const;

 System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteGlyph> __declspec(property(get=__get_m_SpriteGlyphTable, put=__set_m_SpriteGlyphTable))  m_SpriteGlyphTable;

constexpr void __set_m_SpriteGlyphTable(System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteGlyph> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteGlyph> __get_m_SpriteGlyphTable() const;

 System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Text::SpriteGlyph> __declspec(property(get=__get_m_SpriteGlyphLookup, put=__set_m_SpriteGlyphLookup))  m_SpriteGlyphLookup;

constexpr void __set_m_SpriteGlyphLookup(System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Text::SpriteGlyph> value) ;

constexpr System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Text::SpriteGlyph> __get_m_SpriteGlyphLookup() const;

 System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteAsset> __declspec(property(get=__get_fallbackSpriteAssets, put=__set_fallbackSpriteAssets))  fallbackSpriteAssets;

constexpr void __set_fallbackSpriteAssets(System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteAsset> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteAsset> __get_fallbackSpriteAssets() const;

 bool __declspec(property(get=__get_m_IsSpriteAssetLookupTablesDirty, put=__set_m_IsSpriteAssetLookupTablesDirty))  m_IsSpriteAssetLookupTablesDirty;

constexpr void __set_m_IsSpriteAssetLookupTablesDirty(bool value) ;

constexpr bool __get_m_IsSpriteAssetLookupTablesDirty() const;

static System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get_k_searchedSpriteAssets, put=__set_k_searchedSpriteAssets))  k_searchedSpriteAssets;

static void __set_k_searchedSpriteAssets(System::Collections::Generic::HashSet_1<int32_t> value) ;

static System::Collections::Generic::HashSet_1<int32_t> __get_k_searchedSpriteAssets() ;


// Properties

 UnityEngine::TextCore::FaceInfo __declspec(property(get=get_faceInfo, put=set_faceInfo))  faceInfo;

 UnityEngine::Texture __declspec(property(get=get_spriteSheet, put=set_spriteSheet))  spriteSheet;

 System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteCharacter> __declspec(property(get=get_spriteCharacterTable, put=set_spriteCharacterTable))  spriteCharacterTable;

 System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Text::SpriteCharacter> __declspec(property(get=get_spriteCharacterLookupTable, put=set_spriteCharacterLookupTable))  spriteCharacterLookupTable;

 System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteGlyph> __declspec(property(get=get_spriteGlyphTable, put=set_spriteGlyphTable))  spriteGlyphTable;


// Methods

/// @brief Method get_faceInfo addr 0x2bca1ec size 0x1c virtual false final false
 UnityEngine::TextCore::FaceInfo get_faceInfo() ;

/// @brief Method set_faceInfo addr 0x2bca208 size 0x18 virtual false final false
 void set_faceInfo(UnityEngine::TextCore::FaceInfo value) ;

/// @brief Method get_spriteSheet addr 0x2bca220 size 0x8 virtual false final false
 UnityEngine::Texture get_spriteSheet() ;

/// @brief Method set_spriteSheet addr 0x2bca228 size 0x8 virtual false final false
 void set_spriteSheet(UnityEngine::Texture value) ;

/// @brief Method get_spriteCharacterTable addr 0x2bca230 size 0x24 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteCharacter> get_spriteCharacterTable() ;

/// @brief Method set_spriteCharacterTable addr 0x2bca730 size 0x8 virtual false final false
 void set_spriteCharacterTable(System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteCharacter> value) ;

/// @brief Method get_spriteCharacterLookupTable addr 0x2bca738 size 0x24 virtual false final false
 System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Text::SpriteCharacter> get_spriteCharacterLookupTable() ;

/// @brief Method set_spriteCharacterLookupTable addr 0x2bca75c size 0x8 virtual false final false
 void set_spriteCharacterLookupTable(System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Text::SpriteCharacter> value) ;

/// @brief Method get_spriteGlyphTable addr 0x2bca764 size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteGlyph> get_spriteGlyphTable() ;

/// @brief Method set_spriteGlyphTable addr 0x2bca76c size 0x8 virtual false final false
 void set_spriteGlyphTable(System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteGlyph> value) ;

/// @brief Method Awake addr 0x2bca774 size 0x4 virtual false final false
 void Awake() ;

/// @brief Method UpdateLookupTables addr 0x2bca254 size 0x4dc virtual false final false
 void UpdateLookupTables() ;

/// @brief Method GetSpriteIndexFromHashcode addr 0x2bca778 size 0x88 virtual false final false
 int32_t GetSpriteIndexFromHashcode(int32_t hashCode) ;

/// @brief Method GetSpriteIndexFromUnicode addr 0x2bca800 size 0x94 virtual false final false
 int32_t GetSpriteIndexFromUnicode(uint32_t unicode) ;

/// @brief Method GetSpriteIndexFromName addr 0x2bca894 size 0x3c virtual false final false
 int32_t GetSpriteIndexFromName(::StringW name) ;

/// @brief Method SearchForSpriteByUnicode addr 0x2bca8d0 size 0x1c8 virtual false final false
static UnityEngine::TextCore::Text::SpriteAsset SearchForSpriteByUnicode(UnityEngine::TextCore::Text::SpriteAsset spriteAsset, uint32_t unicode, bool includeFallbacks, ByRef<int32_t> spriteIndex) ;

/// @brief Method SearchForSpriteByUnicodeInternal addr 0x2bcaa98 size 0x1a0 virtual false final false
static UnityEngine::TextCore::Text::SpriteAsset SearchForSpriteByUnicodeInternal(System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteAsset> spriteAssets, uint32_t unicode, bool includeFallbacks, ByRef<int32_t> spriteIndex) ;

/// @brief Method SearchForSpriteByUnicodeInternal addr 0x2bcac38 size 0xb0 virtual false final false
static UnityEngine::TextCore::Text::SpriteAsset SearchForSpriteByUnicodeInternal(UnityEngine::TextCore::Text::SpriteAsset spriteAsset, uint32_t unicode, bool includeFallbacks, ByRef<int32_t> spriteIndex) ;

/// @brief Method SearchForSpriteByHashCode addr 0x2bcace8 size 0x32c virtual false final false
static UnityEngine::TextCore::Text::SpriteAsset SearchForSpriteByHashCode(UnityEngine::TextCore::Text::SpriteAsset spriteAsset, int32_t hashCode, bool includeFallbacks, ByRef<int32_t> spriteIndex, UnityEngine::TextCore::Text::TextSettings textSettings) ;

/// @brief Method SearchForSpriteByHashCodeInternal addr 0x2bcb014 size 0x1a0 virtual false final false
static UnityEngine::TextCore::Text::SpriteAsset SearchForSpriteByHashCodeInternal(System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteAsset> spriteAssets, int32_t hashCode, bool searchFallbacks, ByRef<int32_t> spriteIndex) ;

/// @brief Method SearchForSpriteByHashCodeInternal addr 0x2bcb1b4 size 0xb0 virtual false final false
static UnityEngine::TextCore::Text::SpriteAsset SearchForSpriteByHashCodeInternal(UnityEngine::TextCore::Text::SpriteAsset spriteAsset, int32_t hashCode, bool searchFallbacks, ByRef<int32_t> spriteIndex) ;

/// @brief Method SortGlyphTable addr 0x2bcb264 size 0x138 virtual false final false
 void SortGlyphTable() ;

/// @brief Method SortCharacterTable addr 0x2bcb39c size 0x13c virtual false final false
 void SortCharacterTable() ;

/// @brief Method SortGlyphAndCharacterTables addr 0x2bcb4d8 size 0x18 virtual false final false
 void SortGlyphAndCharacterTables() ;

// Ctor Parameters []
explicit SpriteAsset() ;

/// @brief Method .ctor addr 0x2bcb4f0 size 0xc4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
NEED_NO_BOX(UnityEngine::TextCore::Text::SpriteAsset);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::SpriteAsset, "UnityEngine.TextCore.Text", "SpriteAsset");
NEED_NO_BOX(UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__SpriteAsset____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__SpriteAsset____c, "UnityEngine.TextCore.Text", "SpriteAsset/<>c");
