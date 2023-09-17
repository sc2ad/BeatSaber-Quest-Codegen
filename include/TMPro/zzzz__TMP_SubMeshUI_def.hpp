#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UI/zzzz__MaskableGraphic_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace TMPro {
class TMP_Text;
}
namespace TMPro {
struct MaterialReference;
}
namespace UnityEngine {
struct Rect;
}
namespace TMPro {
class TMP_SpriteAsset;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine {
class Mesh;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture;
}
namespace TMPro {
class TMP_FontAsset;
}
// Forward declare root types
namespace TMPro {
class TMP_SubMeshUI;
}
// Type: TMPro::TMP_SubMeshUI
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13038))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12369))
// CS Name: TMPro.TMP_SubMeshUI
class CORDL_TYPE TMP_SubMeshUI : public ::UnityEngine::UI::MaskableGraphic {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x128};

virtual ~TMP_SubMeshUI() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_SubMeshUI", modifiers: " const&", def_value: None }]
constexpr TMP_SubMeshUI(TMP_SubMeshUI const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_SubMeshUI", modifiers: "&&", def_value: None }]
constexpr TMP_SubMeshUI(TMP_SubMeshUI&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_SubMeshUI(void* ptr) noexcept : ::UnityEngine::UI::MaskableGraphic(ptr) {
}


  constexpr TMP_SubMeshUI& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_SubMeshUI& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_SubMeshUI& operator=(TMP_SubMeshUI&& o) noexcept = default;
  constexpr TMP_SubMeshUI& operator=(TMP_SubMeshUI const& o) noexcept = default;
                


// Fields

 ::TMPro::TMP_FontAsset __declspec(property(get=__get_m_fontAsset, put=__set_m_fontAsset))  m_fontAsset;

constexpr void __set_m_fontAsset(::TMPro::TMP_FontAsset value) ;

constexpr ::TMPro::TMP_FontAsset __get_m_fontAsset() const;

 ::TMPro::TMP_SpriteAsset __declspec(property(get=__get_m_spriteAsset, put=__set_m_spriteAsset))  m_spriteAsset;

constexpr void __set_m_spriteAsset(::TMPro::TMP_SpriteAsset value) ;

constexpr ::TMPro::TMP_SpriteAsset __get_m_spriteAsset() const;

 ::UnityEngine::Material __declspec(property(get=__get_m_material, put=__set_m_material))  m_material;

constexpr void __set_m_material(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get_m_material() const;

 ::UnityEngine::Material __declspec(property(get=__get_m_sharedMaterial, put=__set_m_sharedMaterial))  m_sharedMaterial;

constexpr void __set_m_sharedMaterial(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get_m_sharedMaterial() const;

 ::UnityEngine::Material __declspec(property(get=__get_m_fallbackMaterial, put=__set_m_fallbackMaterial))  m_fallbackMaterial;

constexpr void __set_m_fallbackMaterial(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get_m_fallbackMaterial() const;

 ::UnityEngine::Material __declspec(property(get=__get_m_fallbackSourceMaterial, put=__set_m_fallbackSourceMaterial))  m_fallbackSourceMaterial;

constexpr void __set_m_fallbackSourceMaterial(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get_m_fallbackSourceMaterial() const;

 bool __declspec(property(get=__get_m_isDefaultMaterial, put=__set_m_isDefaultMaterial))  m_isDefaultMaterial;

constexpr void __set_m_isDefaultMaterial(bool value) ;

constexpr bool __get_m_isDefaultMaterial() const;

 float_t __declspec(property(get=__get_m_padding, put=__set_m_padding))  m_padding;

constexpr void __set_m_padding(float_t value) ;

constexpr float_t __get_m_padding() const;

 ::UnityEngine::Mesh __declspec(property(get=__get_m_mesh, put=__set_m_mesh))  m_mesh;

constexpr void __set_m_mesh(::UnityEngine::Mesh value) ;

constexpr ::UnityEngine::Mesh __get_m_mesh() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get_m_TextComponent, put=__set_m_TextComponent))  m_TextComponent;

constexpr void __set_m_TextComponent(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get_m_TextComponent() const;

 bool __declspec(property(get=__get_m_isRegisteredForEvents, put=__set_m_isRegisteredForEvents))  m_isRegisteredForEvents;

constexpr void __set_m_isRegisteredForEvents(bool value) ;

constexpr bool __get_m_isRegisteredForEvents() const;

 bool __declspec(property(get=__get_m_materialDirty, put=__set_m_materialDirty))  m_materialDirty;

constexpr void __set_m_materialDirty(bool value) ;

constexpr bool __get_m_materialDirty() const;

 int32_t __declspec(property(get=__get_m_materialReferenceIndex, put=__set_m_materialReferenceIndex))  m_materialReferenceIndex;

constexpr void __set_m_materialReferenceIndex(int32_t value) ;

constexpr int32_t __get_m_materialReferenceIndex() const;

 ::UnityEngine::Transform __declspec(property(get=__get_m_RootCanvasTransform, put=__set_m_RootCanvasTransform))  m_RootCanvasTransform;

constexpr void __set_m_RootCanvasTransform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_m_RootCanvasTransform() const;


// Properties

 ::TMPro::TMP_FontAsset __declspec(property(get=get_fontAsset, put=set_fontAsset))  fontAsset;

 ::TMPro::TMP_SpriteAsset __declspec(property(get=get_spriteAsset, put=set_spriteAsset))  spriteAsset;

 ::UnityEngine::Texture __declspec(property(get=get_mainTexture))  mainTexture;

 ::UnityEngine::Material __declspec(property(get=get_material, put=set_material))  material;

 ::UnityEngine::Material __declspec(property(get=get_sharedMaterial, put=set_sharedMaterial))  sharedMaterial;

 ::UnityEngine::Material __declspec(property(get=get_fallbackMaterial, put=set_fallbackMaterial))  fallbackMaterial;

 ::UnityEngine::Material __declspec(property(get=get_fallbackSourceMaterial, put=set_fallbackSourceMaterial))  fallbackSourceMaterial;

 ::UnityEngine::Material __declspec(property(get=get_materialForRendering))  materialForRendering;

 bool __declspec(property(get=get_isDefaultMaterial, put=set_isDefaultMaterial))  isDefaultMaterial;

 float_t __declspec(property(get=get_padding, put=set_padding))  padding;

 ::UnityEngine::Mesh __declspec(property(get=get_mesh, put=set_mesh))  mesh;

 ::TMPro::TMP_Text __declspec(property(get=get_textComponent))  textComponent;


// Methods

/// @brief Method get_fontAsset addr 0x2aaed48 size 0x8 virtual false final false
 ::TMPro::TMP_FontAsset get_fontAsset() ;

/// @brief Method set_fontAsset addr 0x2aaed50 size 0x8 virtual false final false
 void set_fontAsset(::TMPro::TMP_FontAsset value) ;

/// @brief Method get_spriteAsset addr 0x2aaed58 size 0x8 virtual false final false
 ::TMPro::TMP_SpriteAsset get_spriteAsset() ;

/// @brief Method set_spriteAsset addr 0x2aaed60 size 0x8 virtual false final false
 void set_spriteAsset(::TMPro::TMP_SpriteAsset value) ;

/// @brief Method get_mainTexture addr 0x2aaed68 size 0xbc virtual true final false
 ::UnityEngine::Texture get_mainTexture() ;

/// @brief Method get_material addr 0x2aaee24 size 0x8 virtual true final false
 ::UnityEngine::Material get_material() ;

/// @brief Method set_material addr 0x2aaef20 size 0xe8 virtual true final false
 void set_material(::UnityEngine::Material value) ;

/// @brief Method get_sharedMaterial addr 0x2aaf07c size 0x8 virtual false final false
 ::UnityEngine::Material get_sharedMaterial() ;

/// @brief Method set_sharedMaterial addr 0x2aaf084 size 0x30 virtual false final false
 void set_sharedMaterial(::UnityEngine::Material value) ;

/// @brief Method get_fallbackMaterial addr 0x2aaf0e4 size 0x8 virtual false final false
 ::UnityEngine::Material get_fallbackMaterial() ;

/// @brief Method set_fallbackMaterial addr 0x2aaf0ec size 0x148 virtual false final false
 void set_fallbackMaterial(::UnityEngine::Material value) ;

/// @brief Method get_fallbackSourceMaterial addr 0x2aaf234 size 0x8 virtual false final false
 ::UnityEngine::Material get_fallbackSourceMaterial() ;

/// @brief Method set_fallbackSourceMaterial addr 0x2aaf23c size 0x8 virtual false final false
 void set_fallbackSourceMaterial(::UnityEngine::Material value) ;

/// @brief Method get_materialForRendering addr 0x2aaf244 size 0x5c virtual true final false
 ::UnityEngine::Material get_materialForRendering() ;

/// @brief Method get_isDefaultMaterial addr 0x2aaf2a0 size 0x8 virtual false final false
 bool get_isDefaultMaterial() ;

/// @brief Method set_isDefaultMaterial addr 0x2aaf2a8 size 0xc virtual false final false
 void set_isDefaultMaterial(bool value) ;

/// @brief Method get_padding addr 0x2aaf2b4 size 0x8 virtual false final false
 float_t get_padding() ;

/// @brief Method set_padding addr 0x2aaf2bc size 0x8 virtual false final false
 void set_padding(float_t value) ;

/// @brief Method get_mesh addr 0x2aaf2c4 size 0xb0 virtual false final false
 ::UnityEngine::Mesh get_mesh() ;

/// @brief Method set_mesh addr 0x2aaf374 size 0x8 virtual false final false
 void set_mesh(::UnityEngine::Mesh value) ;

/// @brief Method get_textComponent addr 0x2aaf37c size 0x94 virtual false final false
 ::TMPro::TMP_Text get_textComponent() ;

/// @brief Method AddSubTextObject addr 0x2aaf410 size 0x3b0 virtual false final false
static ::TMPro::TMP_SubMeshUI AddSubTextObject(::TMPro::TextMeshProUGUI textComponent, ::TMPro::MaterialReference materialReference) ;

/// @brief Method OnEnable addr 0x2aaf7c0 size 0x70 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2aaf830 size 0xa8 virtual true final false
 void OnDisable() ;

/// @brief Method OnDestroy addr 0x2aaf8d8 size 0x1ac virtual true final false
 void OnDestroy() ;

/// @brief Method OnTransformParentChanged addr 0x2aafa84 size 0x54 virtual true final false
 void OnTransformParentChanged() ;

/// @brief Method GetModifiedMaterial addr 0x2aafad8 size 0x100 virtual true final false
 ::UnityEngine::Material GetModifiedMaterial(::UnityEngine::Material baseMaterial) ;

/// @brief Method GetPaddingForMaterial addr 0x2aaf008 size 0x74 virtual false final false
 float_t GetPaddingForMaterial() ;

/// @brief Method GetPaddingForMaterial addr 0x2aafbd8 size 0x74 virtual false final false
 float_t GetPaddingForMaterial(::UnityEngine::Material mat) ;

/// @brief Method UpdateMeshPadding addr 0x2aafc4c size 0x74 virtual false final false
 void UpdateMeshPadding(bool isExtraPadding, bool isUsingBold) ;

/// @brief Method SetAllDirty addr 0x2aafcc0 size 0x4 virtual true final false
 void SetAllDirty() ;

/// @brief Method SetVerticesDirty addr 0x2aafcc4 size 0xb4 virtual true final false
 void SetVerticesDirty() ;

/// @brief Method SetLayoutDirty addr 0x2aafd78 size 0x4 virtual true final false
 void SetLayoutDirty() ;

/// @brief Method SetMaterialDirty addr 0x2aafd7c size 0x44 virtual true final false
 void SetMaterialDirty() ;

/// @brief Method SetPivotDirty addr 0x2aafdc0 size 0x68 virtual false final false
 void SetPivotDirty() ;

/// @brief Method GetRootCanvasTransform addr 0x2aafe28 size 0xa0 virtual false final false
 ::UnityEngine::Transform GetRootCanvasTransform() ;

/// @brief Method Cull addr 0x2aafec8 size 0x4 virtual true final false
 void Cull(::UnityEngine::Rect clipRect, bool validRect) ;

/// @brief Method UpdateGeometry addr 0x2aafecc size 0x4 virtual true final false
 void UpdateGeometry() ;

/// @brief Method Rebuild addr 0x2aafed0 size 0x38 virtual true final false
 void Rebuild(::UnityEngine::UI::CanvasUpdate update) ;

/// @brief Method RefreshMaterial addr 0x2aaff08 size 0x10 virtual false final false
 void RefreshMaterial() ;

/// @brief Method UpdateMaterial addr 0x2aaff18 size 0x180 virtual true final false
 void UpdateMaterial() ;

/// @brief Method RecalculateClipping addr 0x2ab0098 size 0x8 virtual true final false
 void RecalculateClipping() ;

/// @brief Method GetMaterial addr 0x2ab00a0 size 0x8 virtual false final false
 ::UnityEngine::Material GetMaterial() ;

/// @brief Method GetMaterial addr 0x2aaee2c size 0xf4 virtual false final false
 ::UnityEngine::Material GetMaterial(::UnityEngine::Material mat) ;

/// @brief Method CreateMaterialInstance addr 0x2ab00a8 size 0xc0 virtual false final false
 ::UnityEngine::Material CreateMaterialInstance(::UnityEngine::Material source) ;

/// @brief Method GetSharedMaterial addr 0x2ab0168 size 0x20 virtual false final false
 ::UnityEngine::Material GetSharedMaterial() ;

/// @brief Method SetSharedMaterial addr 0x2aaf0b4 size 0x30 virtual false final false
 void SetSharedMaterial(::UnityEngine::Material mat) ;

// Ctor Parameters []
explicit TMP_SubMeshUI() ;

/// @brief Method .ctor addr 0x2ab0188 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
NEED_NO_BOX(::TMPro::TMP_SubMeshUI);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_SubMeshUI, "TMPro", "TMP_SubMeshUI");
