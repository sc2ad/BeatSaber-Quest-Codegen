#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
class Material;
}
namespace UnityEngine::Rendering {
class RenderPipeline;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class RenderPipelineAsset;
}
// Type: UnityEngine.Rendering::RenderPipelineAsset
namespace UnityEngine::Rendering {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10293))
// CS Name: UnityEngine.Rendering.RenderPipelineAsset
class CORDL_TYPE RenderPipelineAsset : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RenderPipelineAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "RenderPipelineAsset", modifiers: " const&", def_value: None }]
constexpr RenderPipelineAsset(RenderPipelineAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RenderPipelineAsset", modifiers: "&&", def_value: None }]
constexpr RenderPipelineAsset(RenderPipelineAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RenderPipelineAsset(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr RenderPipelineAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RenderPipelineAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RenderPipelineAsset& operator=(RenderPipelineAsset&& o) noexcept = default;
  constexpr RenderPipelineAsset& operator=(RenderPipelineAsset const& o) noexcept = default;
                


// Properties

 ::ArrayW<::StringW> __declspec(property(get=get_renderingLayerMaskNames))  renderingLayerMaskNames;

 ::ArrayW<::StringW> __declspec(property(get=get_prefixedRenderingLayerMaskNames))  prefixedRenderingLayerMaskNames;

 UnityEngine::Material __declspec(property(get=get_defaultMaterial))  defaultMaterial;

 UnityEngine::Shader __declspec(property(get=get_autodeskInteractiveShader))  autodeskInteractiveShader;

 UnityEngine::Shader __declspec(property(get=get_autodeskInteractiveTransparentShader))  autodeskInteractiveTransparentShader;

 UnityEngine::Shader __declspec(property(get=get_autodeskInteractiveMaskedShader))  autodeskInteractiveMaskedShader;

 UnityEngine::Shader __declspec(property(get=get_terrainDetailLitShader))  terrainDetailLitShader;

 UnityEngine::Shader __declspec(property(get=get_terrainDetailGrassShader))  terrainDetailGrassShader;

 UnityEngine::Shader __declspec(property(get=get_terrainDetailGrassBillboardShader))  terrainDetailGrassBillboardShader;

 UnityEngine::Material __declspec(property(get=get_defaultParticleMaterial))  defaultParticleMaterial;

 UnityEngine::Material __declspec(property(get=get_defaultLineMaterial))  defaultLineMaterial;

 UnityEngine::Material __declspec(property(get=get_defaultTerrainMaterial))  defaultTerrainMaterial;

 UnityEngine::Material __declspec(property(get=get_defaultUIMaterial))  defaultUIMaterial;

 UnityEngine::Material __declspec(property(get=get_defaultUIOverdrawMaterial))  defaultUIOverdrawMaterial;

 UnityEngine::Material __declspec(property(get=get_defaultUIETC1SupportedMaterial))  defaultUIETC1SupportedMaterial;

 UnityEngine::Material __declspec(property(get=get_default2DMaterial))  default2DMaterial;

 UnityEngine::Material __declspec(property(get=get_default2DMaskMaterial))  default2DMaskMaterial;

 UnityEngine::Shader __declspec(property(get=get_defaultShader))  defaultShader;

 UnityEngine::Shader __declspec(property(get=get_defaultSpeedTree7Shader))  defaultSpeedTree7Shader;

 UnityEngine::Shader __declspec(property(get=get_defaultSpeedTree8Shader))  defaultSpeedTree8Shader;


// Methods

/// @brief Method InternalCreatePipeline addr 0x2b754e4 size 0x2f8 virtual false final false
 UnityEngine::Rendering::RenderPipeline InternalCreatePipeline() ;

/// @brief Method get_renderingLayerMaskNames addr 0x2b75b1c size 0x8 virtual true final false
 ::ArrayW<::StringW> get_renderingLayerMaskNames() ;

/// @brief Method get_prefixedRenderingLayerMaskNames addr 0x2b75b24 size 0x8 virtual true final false
 ::ArrayW<::StringW> get_prefixedRenderingLayerMaskNames() ;

/// @brief Method get_defaultMaterial addr 0x2b75b2c size 0x8 virtual true final false
 UnityEngine::Material get_defaultMaterial() ;

/// @brief Method get_autodeskInteractiveShader addr 0x2b75b34 size 0x8 virtual true final false
 UnityEngine::Shader get_autodeskInteractiveShader() ;

/// @brief Method get_autodeskInteractiveTransparentShader addr 0x2b75b3c size 0x8 virtual true final false
 UnityEngine::Shader get_autodeskInteractiveTransparentShader() ;

/// @brief Method get_autodeskInteractiveMaskedShader addr 0x2b75b44 size 0x8 virtual true final false
 UnityEngine::Shader get_autodeskInteractiveMaskedShader() ;

/// @brief Method get_terrainDetailLitShader addr 0x2b75b4c size 0x8 virtual true final false
 UnityEngine::Shader get_terrainDetailLitShader() ;

/// @brief Method get_terrainDetailGrassShader addr 0x2b75b54 size 0x8 virtual true final false
 UnityEngine::Shader get_terrainDetailGrassShader() ;

/// @brief Method get_terrainDetailGrassBillboardShader addr 0x2b75b5c size 0x8 virtual true final false
 UnityEngine::Shader get_terrainDetailGrassBillboardShader() ;

/// @brief Method get_defaultParticleMaterial addr 0x2b75b64 size 0x8 virtual true final false
 UnityEngine::Material get_defaultParticleMaterial() ;

/// @brief Method get_defaultLineMaterial addr 0x2b75b6c size 0x8 virtual true final false
 UnityEngine::Material get_defaultLineMaterial() ;

/// @brief Method get_defaultTerrainMaterial addr 0x2b75b74 size 0x8 virtual true final false
 UnityEngine::Material get_defaultTerrainMaterial() ;

/// @brief Method get_defaultUIMaterial addr 0x2b75b7c size 0x8 virtual true final false
 UnityEngine::Material get_defaultUIMaterial() ;

/// @brief Method get_defaultUIOverdrawMaterial addr 0x2b75b84 size 0x8 virtual true final false
 UnityEngine::Material get_defaultUIOverdrawMaterial() ;

/// @brief Method get_defaultUIETC1SupportedMaterial addr 0x2b75b8c size 0x8 virtual true final false
 UnityEngine::Material get_defaultUIETC1SupportedMaterial() ;

/// @brief Method get_default2DMaterial addr 0x2b75b94 size 0x8 virtual true final false
 UnityEngine::Material get_default2DMaterial() ;

/// @brief Method get_default2DMaskMaterial addr 0x2b75b9c size 0x8 virtual true final false
 UnityEngine::Material get_default2DMaskMaterial() ;

/// @brief Method get_defaultShader addr 0x2b75ba4 size 0x8 virtual true final false
 UnityEngine::Shader get_defaultShader() ;

/// @brief Method get_defaultSpeedTree7Shader addr 0x2b75bac size 0x8 virtual true final false
 UnityEngine::Shader get_defaultSpeedTree7Shader() ;

/// @brief Method get_defaultSpeedTree8Shader addr 0x2b75bb4 size 0x8 virtual true final false
 UnityEngine::Shader get_defaultSpeedTree8Shader() ;

/// @brief Method CreatePipeline addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Rendering::RenderPipeline CreatePipeline() ;

/// @brief Method OnValidate addr 0x2b75bbc size 0xbc virtual true final false
 void OnValidate() ;

/// @brief Method OnDisable addr 0x2b75c78 size 0x4c virtual true final false
 void OnDisable() ;

// Ctor Parameters []
explicit RenderPipelineAsset() ;

/// @brief Method .ctor addr 0x2b75cc4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
NEED_NO_BOX(UnityEngine::Rendering::RenderPipelineAsset);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::RenderPipelineAsset, "UnityEngine.Rendering", "RenderPipelineAsset");
