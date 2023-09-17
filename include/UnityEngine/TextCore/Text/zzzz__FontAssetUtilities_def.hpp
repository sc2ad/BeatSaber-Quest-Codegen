#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::TextCore::Text {
class Character;
}
namespace UnityEngine::TextCore::Text {
class SpriteAsset;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
class SpriteCharacter;
}
namespace UnityEngine::TextCore::Text {
struct TextFontWeight;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::TextCore::Text {
struct FontStyles;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class FontAssetUtilities;
}
// Type: UnityEngine.TextCore.Text::FontAssetUtilities
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13541))
// CS Name: UnityEngine.TextCore.Text.FontAssetUtilities
class CORDL_TYPE FontAssetUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FontAssetUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "FontAssetUtilities", modifiers: " const&", def_value: None }]
constexpr FontAssetUtilities(FontAssetUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FontAssetUtilities", modifiers: "&&", def_value: None }]
constexpr FontAssetUtilities(FontAssetUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FontAssetUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FontAssetUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FontAssetUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FontAssetUtilities& operator=(FontAssetUtilities&& o) noexcept = default;
  constexpr FontAssetUtilities& operator=(FontAssetUtilities const& o) noexcept = default;
                


// Fields

static ::System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get_k_SearchedAssets, put=__set_k_SearchedAssets))  k_SearchedAssets;

static void __set_k_SearchedAssets(::System::Collections::Generic::HashSet_1<int32_t> value) ;

static ::System::Collections::Generic::HashSet_1<int32_t> __get_k_SearchedAssets() ;


// Methods

/// @brief Method GetCharacterFromFontAsset addr 0x2bd2888 size 0x108 virtual false final false
static ::UnityEngine::TextCore::Text::Character GetCharacterFromFontAsset(uint32_t unicode, ::UnityEngine::TextCore::Text::FontAsset sourceFontAsset, bool includeFallbacks, ::UnityEngine::TextCore::Text::FontStyles fontStyle, ::UnityEngine::TextCore::Text::TextFontWeight fontWeight, ByRef<bool> isAlternativeTypeface) ;

/// @brief Method GetCharacterFromFontAsset_Internal addr 0x2bd2990 size 0x3d4 virtual false final false
static ::UnityEngine::TextCore::Text::Character GetCharacterFromFontAsset_Internal(uint32_t unicode, ::UnityEngine::TextCore::Text::FontAsset sourceFontAsset, bool includeFallbacks, ::UnityEngine::TextCore::Text::FontStyles fontStyle, ::UnityEngine::TextCore::Text::TextFontWeight fontWeight, ByRef<bool> isAlternativeTypeface) ;

/// @brief Method GetCharacterFromFontAssets addr 0x2bd2d64 size 0x1b8 virtual false final false
static ::UnityEngine::TextCore::Text::Character GetCharacterFromFontAssets(uint32_t unicode, ::UnityEngine::TextCore::Text::FontAsset sourceFontAsset, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset> fontAssets, bool includeFallbacks, ::UnityEngine::TextCore::Text::FontStyles fontStyle, ::UnityEngine::TextCore::Text::TextFontWeight fontWeight, ByRef<bool> isAlternativeTypeface) ;

/// @brief Method GetSpriteCharacterFromSpriteAsset addr 0x2bd2f1c size 0x298 virtual false final false
static ::UnityEngine::TextCore::Text::SpriteCharacter GetSpriteCharacterFromSpriteAsset(uint32_t unicode, ::UnityEngine::TextCore::Text::SpriteAsset spriteAsset, bool includeFallbacks) ;

/// @brief Method GetSpriteCharacterFromSpriteAsset_Internal addr 0x2bd31b4 size 0x1b8 virtual false final false
static ::UnityEngine::TextCore::Text::SpriteCharacter GetSpriteCharacterFromSpriteAsset_Internal(uint32_t unicode, ::UnityEngine::TextCore::Text::SpriteAsset spriteAsset, bool includeFallbacks) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::TextCore::Text::FontAssetUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::FontAssetUtilities, "UnityEngine.TextCore.Text", "FontAssetUtilities");
