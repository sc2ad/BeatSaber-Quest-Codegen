#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_SpriteAsset;
}
namespace TMPro {
struct FontStyles;
}
namespace TMPro {
class TMP_SpriteCharacter;
}
namespace TMPro {
class TMP_Character;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
struct FontWeight;
}
// Forward declare root types
namespace TMPro {
class TMP_FontAssetUtilities;
}
// Type: TMPro::TMP_FontAssetUtilities
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12312))
// CS Name: TMPro.TMP_FontAssetUtilities
class CORDL_TYPE TMP_FontAssetUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TMP_FontAssetUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_FontAssetUtilities", modifiers: " const&", def_value: None }]
constexpr TMP_FontAssetUtilities(TMP_FontAssetUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_FontAssetUtilities", modifiers: "&&", def_value: None }]
constexpr TMP_FontAssetUtilities(TMP_FontAssetUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_FontAssetUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMP_FontAssetUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_FontAssetUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_FontAssetUtilities& operator=(TMP_FontAssetUtilities&& o) noexcept = default;
  constexpr TMP_FontAssetUtilities& operator=(TMP_FontAssetUtilities const& o) noexcept = default;
                


// Fields

static ::TMPro::TMP_FontAssetUtilities __declspec(property(get=__get_s_Instance, put=__set_s_Instance))  s_Instance;

static void __set_s_Instance(::TMPro::TMP_FontAssetUtilities value) ;

static ::TMPro::TMP_FontAssetUtilities __get_s_Instance() ;

static ::System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get_k_SearchedAssets, put=__set_k_SearchedAssets))  k_SearchedAssets;

static void __set_k_SearchedAssets(::System::Collections::Generic::HashSet_1<int32_t> value) ;

static ::System::Collections::Generic::HashSet_1<int32_t> __get_k_SearchedAssets() ;

static bool __declspec(property(get=__get_k_IsFontEngineInitialized, put=__set_k_IsFontEngineInitialized))  k_IsFontEngineInitialized;

static void __set_k_IsFontEngineInitialized(bool value) ;

static bool __get_k_IsFontEngineInitialized() ;


// Properties

static ::TMPro::TMP_FontAssetUtilities __declspec(property(get=get_instance))  instance;


// Methods

/// @brief Method get_instance addr 0x2a79abc size 0x58 virtual false final false
static ::TMPro::TMP_FontAssetUtilities get_instance() ;

/// @brief Method GetCharacterFromFontAsset addr 0x2a79b14 size 0x158 virtual false final false
static ::TMPro::TMP_Character GetCharacterFromFontAsset(uint32_t unicode, ::TMPro::TMP_FontAsset sourceFontAsset, bool includeFallbacks, ::TMPro::FontStyles fontStyle, ::TMPro::FontWeight fontWeight, ByRef<bool> isAlternativeTypeface) ;

/// @brief Method GetCharacterFromFontAsset_Internal addr 0x2a79c6c size 0x3dc virtual false final false
static ::TMPro::TMP_Character GetCharacterFromFontAsset_Internal(uint32_t unicode, ::TMPro::TMP_FontAsset sourceFontAsset, bool includeFallbacks, ::TMPro::FontStyles fontStyle, ::TMPro::FontWeight fontWeight, ByRef<bool> isAlternativeTypeface) ;

/// @brief Method GetCharacterFromFontAssets addr 0x2a7a048 size 0x258 virtual false final false
static ::TMPro::TMP_Character GetCharacterFromFontAssets(uint32_t unicode, ::TMPro::TMP_FontAsset sourceFontAsset, ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset> fontAssets, bool includeFallbacks, ::TMPro::FontStyles fontStyle, ::TMPro::FontWeight fontWeight, ByRef<bool> isAlternativeTypeface) ;

/// @brief Method GetSpriteCharacterFromSpriteAsset addr 0x2a7a2a0 size 0x30c virtual false final false
static ::TMPro::TMP_SpriteCharacter GetSpriteCharacterFromSpriteAsset(uint32_t unicode, ::TMPro::TMP_SpriteAsset spriteAsset, bool includeFallbacks) ;

/// @brief Method GetSpriteCharacterFromSpriteAsset_Internal addr 0x2a7a5ac size 0x1dc virtual false final false
static ::TMPro::TMP_SpriteCharacter GetSpriteCharacterFromSpriteAsset_Internal(uint32_t unicode, ::TMPro::TMP_SpriteAsset spriteAsset, bool includeFallbacks) ;

// Ctor Parameters []
explicit TMP_FontAssetUtilities() ;

/// @brief Method .ctor addr 0x2a79ab4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
NEED_NO_BOX(::TMPro::TMP_FontAssetUtilities);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_FontAssetUtilities, "TMPro", "TMP_FontAssetUtilities");
