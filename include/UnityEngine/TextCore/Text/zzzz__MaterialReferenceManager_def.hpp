#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::TextCore::Text {
class SpriteAsset;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::TextCore::Text {
class TextColorGradient;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class MaterialReferenceManager;
}
// Type: UnityEngine.TextCore.Text::MaterialReferenceManager
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13498))
// CS Name: UnityEngine.TextCore.Text.MaterialReferenceManager
class CORDL_TYPE MaterialReferenceManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MaterialReferenceManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialReferenceManager", modifiers: " const&", def_value: None }]
constexpr MaterialReferenceManager(MaterialReferenceManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialReferenceManager", modifiers: "&&", def_value: None }]
constexpr MaterialReferenceManager(MaterialReferenceManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MaterialReferenceManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MaterialReferenceManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MaterialReferenceManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MaterialReferenceManager& operator=(MaterialReferenceManager&& o) noexcept = default;
  constexpr MaterialReferenceManager& operator=(MaterialReferenceManager const& o) noexcept = default;
                


// Fields

static UnityEngine::TextCore::Text::MaterialReferenceManager __declspec(property(get=__get_s_Instance, put=__set_s_Instance))  s_Instance;

static void __set_s_Instance(UnityEngine::TextCore::Text::MaterialReferenceManager value) ;

static UnityEngine::TextCore::Text::MaterialReferenceManager __get_s_Instance() ;

 System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::Material> __declspec(property(get=__get_m_FontMaterialReferenceLookup, put=__set_m_FontMaterialReferenceLookup))  m_FontMaterialReferenceLookup;

constexpr void __set_m_FontMaterialReferenceLookup(System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::Material> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::Material> __get_m_FontMaterialReferenceLookup() const;

 System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::TextCore::Text::FontAsset> __declspec(property(get=__get_m_FontAssetReferenceLookup, put=__set_m_FontAssetReferenceLookup))  m_FontAssetReferenceLookup;

constexpr void __set_m_FontAssetReferenceLookup(System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::TextCore::Text::FontAsset> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::TextCore::Text::FontAsset> __get_m_FontAssetReferenceLookup() const;

 System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::TextCore::Text::SpriteAsset> __declspec(property(get=__get_m_SpriteAssetReferenceLookup, put=__set_m_SpriteAssetReferenceLookup))  m_SpriteAssetReferenceLookup;

constexpr void __set_m_SpriteAssetReferenceLookup(System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::TextCore::Text::SpriteAsset> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::TextCore::Text::SpriteAsset> __get_m_SpriteAssetReferenceLookup() const;

 System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::TextCore::Text::TextColorGradient> __declspec(property(get=__get_m_ColorGradientReferenceLookup, put=__set_m_ColorGradientReferenceLookup))  m_ColorGradientReferenceLookup;

constexpr void __set_m_ColorGradientReferenceLookup(System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::TextCore::Text::TextColorGradient> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::TextCore::Text::TextColorGradient> __get_m_ColorGradientReferenceLookup() const;


// Properties

static UnityEngine::TextCore::Text::MaterialReferenceManager __declspec(property(get=get_instance))  instance;


// Methods

/// @brief Method get_instance addr 0x2bc8e2c size 0x78 virtual false final false
static UnityEngine::TextCore::Text::MaterialReferenceManager get_instance() ;

/// @brief Method AddFontAsset addr 0x2bc8fec size 0x20 virtual false final false
static void AddFontAsset(UnityEngine::TextCore::Text::FontAsset fontAsset) ;

/// @brief Method AddFontAssetInternal addr 0x2bc900c size 0xf4 virtual false final false
 void AddFontAssetInternal(UnityEngine::TextCore::Text::FontAsset fontAsset) ;

/// @brief Method AddSpriteAsset addr 0x2bc9100 size 0x30 virtual false final false
static void AddSpriteAsset(int32_t hashCode, UnityEngine::TextCore::Text::SpriteAsset spriteAsset) ;

/// @brief Method AddSpriteAssetInternal addr 0x2bc9130 size 0xd4 virtual false final false
 void AddSpriteAssetInternal(int32_t hashCode, UnityEngine::TextCore::Text::SpriteAsset spriteAsset) ;

/// @brief Method AddFontMaterial addr 0x2bc9204 size 0x30 virtual false final false
static void AddFontMaterial(int32_t hashCode, UnityEngine::Material material) ;

/// @brief Method AddFontMaterialInternal addr 0x2bc9234 size 0x68 virtual false final false
 void AddFontMaterialInternal(int32_t hashCode, UnityEngine::Material material) ;

/// @brief Method AddColorGradientPreset addr 0x2bc929c size 0x30 virtual false final false
static void AddColorGradientPreset(int32_t hashCode, UnityEngine::TextCore::Text::TextColorGradient spriteAsset) ;

/// @brief Method AddColorGradientPreset_Internal addr 0x2bc92cc size 0xa4 virtual false final false
 void AddColorGradientPreset_Internal(int32_t hashCode, UnityEngine::TextCore::Text::TextColorGradient spriteAsset) ;

/// @brief Method TryGetFontAsset addr 0x2bc9370 size 0x30 virtual false final false
static bool TryGetFontAsset(int32_t hashCode, ByRef<UnityEngine::TextCore::Text::FontAsset> fontAsset) ;

/// @brief Method TryGetFontAssetInternal addr 0x2bc93a0 size 0x6c virtual false final false
 bool TryGetFontAssetInternal(int32_t hashCode, ByRef<UnityEngine::TextCore::Text::FontAsset> fontAsset) ;

/// @brief Method TryGetSpriteAsset addr 0x2bc940c size 0x30 virtual false final false
static bool TryGetSpriteAsset(int32_t hashCode, ByRef<UnityEngine::TextCore::Text::SpriteAsset> spriteAsset) ;

/// @brief Method TryGetSpriteAssetInternal addr 0x2bc943c size 0x6c virtual false final false
 bool TryGetSpriteAssetInternal(int32_t hashCode, ByRef<UnityEngine::TextCore::Text::SpriteAsset> spriteAsset) ;

/// @brief Method TryGetColorGradientPreset addr 0x2bc94a8 size 0x30 virtual false final false
static bool TryGetColorGradientPreset(int32_t hashCode, ByRef<UnityEngine::TextCore::Text::TextColorGradient> gradientPreset) ;

/// @brief Method TryGetColorGradientPresetInternal addr 0x2bc94d8 size 0x6c virtual false final false
 bool TryGetColorGradientPresetInternal(int32_t hashCode, ByRef<UnityEngine::TextCore::Text::TextColorGradient> gradientPreset) ;

/// @brief Method TryGetMaterial addr 0x2bc9544 size 0x30 virtual false final false
static bool TryGetMaterial(int32_t hashCode, ByRef<UnityEngine::Material> material) ;

/// @brief Method TryGetMaterialInternal addr 0x2bc9574 size 0x6c virtual false final false
 bool TryGetMaterialInternal(int32_t hashCode, ByRef<UnityEngine::Material> material) ;

static UnityEngine::TextCore::Text::MaterialReferenceManager New_ctor() ;

/// @brief Method .ctor addr 0x2bc8ea4 size 0x148 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
NEED_NO_BOX(UnityEngine::TextCore::Text::MaterialReferenceManager);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::MaterialReferenceManager, "UnityEngine.TextCore.Text", "MaterialReferenceManager");
