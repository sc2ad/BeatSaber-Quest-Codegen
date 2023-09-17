#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace {
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
class TMP_ColorGradient;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Material;
}
namespace TMPro {
class TMP_SpriteAsset;
}
// Forward declare root types
namespace TMPro {
class MaterialReferenceManager;
}
// Type: TMPro::MaterialReferenceManager
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12244))
// CS Name: TMPro.MaterialReferenceManager
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

static ::TMPro::MaterialReferenceManager __declspec(property(get=__get_s_Instance, put=__set_s_Instance))  s_Instance;

static void __set_s_Instance(::TMPro::MaterialReferenceManager value) ;

static ::TMPro::MaterialReferenceManager __get_s_Instance() ;

 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Material> __declspec(property(get=__get_m_FontMaterialReferenceLookup, put=__set_m_FontMaterialReferenceLookup))  m_FontMaterialReferenceLookup;

constexpr void __set_m_FontMaterialReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Material> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Material> __get_m_FontMaterialReferenceLookup() const;

 ::System::Collections::Generic::Dictionary_2<int32_t,::TMPro::TMP_FontAsset> __declspec(property(get=__get_m_FontAssetReferenceLookup, put=__set_m_FontAssetReferenceLookup))  m_FontAssetReferenceLookup;

constexpr void __set_m_FontAssetReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t,::TMPro::TMP_FontAsset> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::TMPro::TMP_FontAsset> __get_m_FontAssetReferenceLookup() const;

 ::System::Collections::Generic::Dictionary_2<int32_t,::TMPro::TMP_SpriteAsset> __declspec(property(get=__get_m_SpriteAssetReferenceLookup, put=__set_m_SpriteAssetReferenceLookup))  m_SpriteAssetReferenceLookup;

constexpr void __set_m_SpriteAssetReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t,::TMPro::TMP_SpriteAsset> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::TMPro::TMP_SpriteAsset> __get_m_SpriteAssetReferenceLookup() const;

 ::System::Collections::Generic::Dictionary_2<int32_t,::TMPro::TMP_ColorGradient> __declspec(property(get=__get_m_ColorGradientReferenceLookup, put=__set_m_ColorGradientReferenceLookup))  m_ColorGradientReferenceLookup;

constexpr void __set_m_ColorGradientReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t,::TMPro::TMP_ColorGradient> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::TMPro::TMP_ColorGradient> __get_m_ColorGradientReferenceLookup() const;


// Properties

static ::TMPro::MaterialReferenceManager __declspec(property(get=get_instance))  instance;


// Methods

/// @brief Method get_instance addr 0x2a57a3c size 0x7c virtual false final false
static ::TMPro::MaterialReferenceManager get_instance() ;

/// @brief Method AddFontAsset addr 0x2a57c00 size 0x20 virtual false final false
static void AddFontAsset(::TMPro::TMP_FontAsset fontAsset) ;

/// @brief Method AddFontAssetInternal addr 0x2a57c20 size 0xc4 virtual false final false
 void AddFontAssetInternal(::TMPro::TMP_FontAsset fontAsset) ;

/// @brief Method AddSpriteAsset addr 0x2a57ce4 size 0x20 virtual false final false
static void AddSpriteAsset(::TMPro::TMP_SpriteAsset spriteAsset) ;

/// @brief Method AddSpriteAssetInternal addr 0x2a57d04 size 0xc4 virtual false final false
 void AddSpriteAssetInternal(::TMPro::TMP_SpriteAsset spriteAsset) ;

/// @brief Method AddSpriteAsset addr 0x2a57dc8 size 0x30 virtual false final false
static void AddSpriteAsset(int32_t hashCode, ::TMPro::TMP_SpriteAsset spriteAsset) ;

/// @brief Method AddSpriteAssetInternal addr 0x2a57df8 size 0xd4 virtual false final false
 void AddSpriteAssetInternal(int32_t hashCode, ::TMPro::TMP_SpriteAsset spriteAsset) ;

/// @brief Method AddFontMaterial addr 0x2a57ecc size 0x30 virtual false final false
static void AddFontMaterial(int32_t hashCode, ::UnityEngine::Material material) ;

/// @brief Method AddFontMaterialInternal addr 0x2a57efc size 0x68 virtual false final false
 void AddFontMaterialInternal(int32_t hashCode, ::UnityEngine::Material material) ;

/// @brief Method AddColorGradientPreset addr 0x2a57f64 size 0x30 virtual false final false
static void AddColorGradientPreset(int32_t hashCode, ::TMPro::TMP_ColorGradient spriteAsset) ;

/// @brief Method AddColorGradientPreset_Internal addr 0x2a57f94 size 0xa4 virtual false final false
 void AddColorGradientPreset_Internal(int32_t hashCode, ::TMPro::TMP_ColorGradient spriteAsset) ;

/// @brief Method Contains addr 0x2a58038 size 0x5c virtual false final false
 bool Contains(::TMPro::TMP_FontAsset font) ;

/// @brief Method Contains addr 0x2a58094 size 0x5c virtual false final false
 bool Contains(::TMPro::TMP_SpriteAsset sprite) ;

/// @brief Method TryGetFontAsset addr 0x2a580f0 size 0x30 virtual false final false
static bool TryGetFontAsset(int32_t hashCode, ByRef<::TMPro::TMP_FontAsset> fontAsset) ;

/// @brief Method TryGetFontAssetInternal addr 0x2a58120 size 0x6c virtual false final false
 bool TryGetFontAssetInternal(int32_t hashCode, ByRef<::TMPro::TMP_FontAsset> fontAsset) ;

/// @brief Method TryGetSpriteAsset addr 0x2a5818c size 0x30 virtual false final false
static bool TryGetSpriteAsset(int32_t hashCode, ByRef<::TMPro::TMP_SpriteAsset> spriteAsset) ;

/// @brief Method TryGetSpriteAssetInternal addr 0x2a581bc size 0x6c virtual false final false
 bool TryGetSpriteAssetInternal(int32_t hashCode, ByRef<::TMPro::TMP_SpriteAsset> spriteAsset) ;

/// @brief Method TryGetColorGradientPreset addr 0x2a58228 size 0x30 virtual false final false
static bool TryGetColorGradientPreset(int32_t hashCode, ByRef<::TMPro::TMP_ColorGradient> gradientPreset) ;

/// @brief Method TryGetColorGradientPresetInternal addr 0x2a58258 size 0x6c virtual false final false
 bool TryGetColorGradientPresetInternal(int32_t hashCode, ByRef<::TMPro::TMP_ColorGradient> gradientPreset) ;

/// @brief Method TryGetMaterial addr 0x2a582c4 size 0x30 virtual false final false
static bool TryGetMaterial(int32_t hashCode, ByRef<::UnityEngine::Material> material) ;

/// @brief Method TryGetMaterialInternal addr 0x2a582f4 size 0x6c virtual false final false
 bool TryGetMaterialInternal(int32_t hashCode, ByRef<::UnityEngine::Material> material) ;

// Ctor Parameters []
explicit MaterialReferenceManager() ;

/// @brief Method .ctor addr 0x2a57ab8 size 0x148 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
NEED_NO_BOX(::TMPro::MaterialReferenceManager);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::MaterialReferenceManager, "TMPro", "MaterialReferenceManager");
