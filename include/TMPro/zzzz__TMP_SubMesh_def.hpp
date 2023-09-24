#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Material;
}
namespace TMPro {
struct MaterialReference;
}
namespace TMPro {
class TMP_SpriteAsset;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace TMPro {
class TMP_SubMesh;
}
// Type: TMPro::TMP_SubMesh
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12368))
// CS Name: TMPro.TMP_SubMesh
class CORDL_TYPE TMP_SubMesh : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~TMP_SubMesh() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_SubMesh", modifiers: " const&", def_value: None }]
constexpr TMP_SubMesh(TMP_SubMesh const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_SubMesh", modifiers: "&&", def_value: None }]
constexpr TMP_SubMesh(TMP_SubMesh&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_SubMesh(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TMP_SubMesh& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_SubMesh& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_SubMesh& operator=(TMP_SubMesh&& o) noexcept = default;
  constexpr TMP_SubMesh& operator=(TMP_SubMesh const& o) noexcept = default;
                


// Fields

 TMPro::TMP_FontAsset __declspec(property(get=__get_m_fontAsset, put=__set_m_fontAsset))  m_fontAsset;

constexpr void __set_m_fontAsset(TMPro::TMP_FontAsset value) ;

constexpr TMPro::TMP_FontAsset __get_m_fontAsset() const;

 TMPro::TMP_SpriteAsset __declspec(property(get=__get_m_spriteAsset, put=__set_m_spriteAsset))  m_spriteAsset;

constexpr void __set_m_spriteAsset(TMPro::TMP_SpriteAsset value) ;

constexpr TMPro::TMP_SpriteAsset __get_m_spriteAsset() const;

 UnityEngine::Material __declspec(property(get=__get_m_material, put=__set_m_material))  m_material;

constexpr void __set_m_material(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_m_material() const;

 UnityEngine::Material __declspec(property(get=__get_m_sharedMaterial, put=__set_m_sharedMaterial))  m_sharedMaterial;

constexpr void __set_m_sharedMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_m_sharedMaterial() const;

 UnityEngine::Material __declspec(property(get=__get_m_fallbackMaterial, put=__set_m_fallbackMaterial))  m_fallbackMaterial;

constexpr void __set_m_fallbackMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_m_fallbackMaterial() const;

 UnityEngine::Material __declspec(property(get=__get_m_fallbackSourceMaterial, put=__set_m_fallbackSourceMaterial))  m_fallbackSourceMaterial;

constexpr void __set_m_fallbackSourceMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_m_fallbackSourceMaterial() const;

 bool __declspec(property(get=__get_m_isDefaultMaterial, put=__set_m_isDefaultMaterial))  m_isDefaultMaterial;

constexpr void __set_m_isDefaultMaterial(bool value) ;

constexpr bool __get_m_isDefaultMaterial() const;

 float_t __declspec(property(get=__get_m_padding, put=__set_m_padding))  m_padding;

constexpr void __set_m_padding(float_t value) ;

constexpr float_t __get_m_padding() const;

 UnityEngine::Renderer __declspec(property(get=__get_m_renderer, put=__set_m_renderer))  m_renderer;

constexpr void __set_m_renderer(UnityEngine::Renderer value) ;

constexpr UnityEngine::Renderer __get_m_renderer() const;

 UnityEngine::MeshFilter __declspec(property(get=__get_m_meshFilter, put=__set_m_meshFilter))  m_meshFilter;

constexpr void __set_m_meshFilter(UnityEngine::MeshFilter value) ;

constexpr UnityEngine::MeshFilter __get_m_meshFilter() const;

 UnityEngine::Mesh __declspec(property(get=__get_m_mesh, put=__set_m_mesh))  m_mesh;

constexpr void __set_m_mesh(UnityEngine::Mesh value) ;

constexpr UnityEngine::Mesh __get_m_mesh() const;

 TMPro::TextMeshPro __declspec(property(get=__get_m_TextComponent, put=__set_m_TextComponent))  m_TextComponent;

constexpr void __set_m_TextComponent(TMPro::TextMeshPro value) ;

constexpr TMPro::TextMeshPro __get_m_TextComponent() const;

 bool __declspec(property(get=__get_m_isRegisteredForEvents, put=__set_m_isRegisteredForEvents))  m_isRegisteredForEvents;

constexpr void __set_m_isRegisteredForEvents(bool value) ;

constexpr bool __get_m_isRegisteredForEvents() const;


// Properties

 TMPro::TMP_FontAsset __declspec(property(get=get_fontAsset, put=set_fontAsset))  fontAsset;

 TMPro::TMP_SpriteAsset __declspec(property(get=get_spriteAsset, put=set_spriteAsset))  spriteAsset;

 UnityEngine::Material __declspec(property(get=get_material, put=set_material))  material;

 UnityEngine::Material __declspec(property(get=get_sharedMaterial, put=set_sharedMaterial))  sharedMaterial;

 UnityEngine::Material __declspec(property(get=get_fallbackMaterial, put=set_fallbackMaterial))  fallbackMaterial;

 UnityEngine::Material __declspec(property(get=get_fallbackSourceMaterial, put=set_fallbackSourceMaterial))  fallbackSourceMaterial;

 bool __declspec(property(get=get_isDefaultMaterial, put=set_isDefaultMaterial))  isDefaultMaterial;

 float_t __declspec(property(get=get_padding, put=set_padding))  padding;

 UnityEngine::Renderer __declspec(property(get=get_renderer))  renderer;

 UnityEngine::MeshFilter __declspec(property(get=get_meshFilter))  meshFilter;

 UnityEngine::Mesh __declspec(property(get=get_mesh, put=set_mesh))  mesh;

 TMPro::TMP_Text __declspec(property(get=get_textComponent))  textComponent;


// Methods

/// @brief Method get_fontAsset addr 0x2aadb18 size 0x8 virtual false final false
 TMPro::TMP_FontAsset get_fontAsset() ;

/// @brief Method set_fontAsset addr 0x2aadb20 size 0x8 virtual false final false
 void set_fontAsset(TMPro::TMP_FontAsset value) ;

/// @brief Method get_spriteAsset addr 0x2aadb28 size 0x8 virtual false final false
 TMPro::TMP_SpriteAsset get_spriteAsset() ;

/// @brief Method set_spriteAsset addr 0x2aadb30 size 0x8 virtual false final false
 void set_spriteAsset(TMPro::TMP_SpriteAsset value) ;

/// @brief Method get_material addr 0x2aadb38 size 0x8 virtual false final false
 UnityEngine::Material get_material() ;

/// @brief Method set_material addr 0x2aadc68 size 0x74 virtual false final false
 void set_material(UnityEngine::Material value) ;

/// @brief Method get_sharedMaterial addr 0x2aade04 size 0x8 virtual false final false
 UnityEngine::Material get_sharedMaterial() ;

/// @brief Method set_sharedMaterial addr 0x2aade0c size 0x20 virtual false final false
 void set_sharedMaterial(UnityEngine::Material value) ;

/// @brief Method get_fallbackMaterial addr 0x2aade4c size 0x8 virtual false final false
 UnityEngine::Material get_fallbackMaterial() ;

/// @brief Method set_fallbackMaterial addr 0x2aade54 size 0x138 virtual false final false
 void set_fallbackMaterial(UnityEngine::Material value) ;

/// @brief Method get_fallbackSourceMaterial addr 0x2aadf8c size 0x8 virtual false final false
 UnityEngine::Material get_fallbackSourceMaterial() ;

/// @brief Method set_fallbackSourceMaterial addr 0x2aadf94 size 0x8 virtual false final false
 void set_fallbackSourceMaterial(UnityEngine::Material value) ;

/// @brief Method get_isDefaultMaterial addr 0x2aadf9c size 0x8 virtual false final false
 bool get_isDefaultMaterial() ;

/// @brief Method set_isDefaultMaterial addr 0x2aadfa4 size 0xc virtual false final false
 void set_isDefaultMaterial(bool value) ;

/// @brief Method get_padding addr 0x2aadfb0 size 0x8 virtual false final false
 float_t get_padding() ;

/// @brief Method set_padding addr 0x2aadfb8 size 0x8 virtual false final false
 void set_padding(float_t value) ;

/// @brief Method get_renderer addr 0x2aadfc0 size 0x94 virtual false final false
 UnityEngine::Renderer get_renderer() ;

/// @brief Method get_meshFilter addr 0x2aae054 size 0xfc virtual false final false
 UnityEngine::MeshFilter get_meshFilter() ;

/// @brief Method get_mesh addr 0x2aae150 size 0xb0 virtual false final false
 UnityEngine::Mesh get_mesh() ;

/// @brief Method set_mesh addr 0x2aae200 size 0x8 virtual false final false
 void set_mesh(UnityEngine::Mesh value) ;

/// @brief Method get_textComponent addr 0x2aae208 size 0x94 virtual false final false
 TMPro::TMP_Text get_textComponent() ;

/// @brief Method AddSubTextObject addr 0x2aae29c size 0x3c4 virtual false final false
static TMPro::TMP_SubMesh AddSubTextObject(TMPro::TextMeshPro textComponent, TMPro::MaterialReference materialReference) ;

/// @brief Method OnEnable addr 0x2aae660 size 0x12c virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2aae78c size 0xb4 virtual false final false
 void OnDisable() ;

/// @brief Method OnDestroy addr 0x2aae840 size 0x148 virtual false final false
 void OnDestroy() ;

/// @brief Method DestroySelf addr 0x2aae988 size 0x70 virtual false final false
 void DestroySelf() ;

/// @brief Method GetMaterial addr 0x2aadb40 size 0x128 virtual false final false
 UnityEngine::Material GetMaterial(UnityEngine::Material mat) ;

/// @brief Method CreateMaterialInstance addr 0x2aae9f8 size 0xc0 virtual false final false
 UnityEngine::Material CreateMaterialInstance(UnityEngine::Material source) ;

/// @brief Method GetSharedMaterial addr 0x2aaeab8 size 0xa4 virtual false final false
 UnityEngine::Material GetSharedMaterial() ;

/// @brief Method SetSharedMaterial addr 0x2aade2c size 0x20 virtual false final false
 void SetSharedMaterial(UnityEngine::Material mat) ;

/// @brief Method GetPaddingForMaterial addr 0x2aadcdc size 0x74 virtual false final false
 float_t GetPaddingForMaterial() ;

/// @brief Method UpdateMeshPadding addr 0x2aaeb5c size 0x74 virtual false final false
 void UpdateMeshPadding(bool isExtraPadding, bool isUsingBold) ;

/// @brief Method SetVerticesDirty addr 0x2aadd50 size 0xb0 virtual false final false
 void SetVerticesDirty() ;

/// @brief Method SetMaterialDirty addr 0x2aade00 size 0x4 virtual false final false
 void SetMaterialDirty() ;

/// @brief Method UpdateMaterial addr 0x2aaebd0 size 0x170 virtual false final false
 void UpdateMaterial() ;

static TMPro::TMP_SubMesh New_ctor() ;

/// @brief Method .ctor addr 0x2aaed40 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::TMP_SubMesh);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_SubMesh, "TMPro", "TMP_SubMesh");
