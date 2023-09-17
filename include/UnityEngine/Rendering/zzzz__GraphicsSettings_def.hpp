#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
namespace {
namespace UnityEngine::Rendering {
class RenderPipelineAsset;
}
namespace UnityEngine {
class ScriptableObject;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GraphicsSettings;
}
// Type: UnityEngine.Rendering::GraphicsSettings
namespace UnityEngine::Rendering {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10263))
// CS Name: UnityEngine.Rendering.GraphicsSettings
class CORDL_TYPE GraphicsSettings : public ::UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GraphicsSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "GraphicsSettings", modifiers: " const&", def_value: None }]
constexpr GraphicsSettings(GraphicsSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GraphicsSettings", modifiers: "&&", def_value: None }]
constexpr GraphicsSettings(GraphicsSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GraphicsSettings(void* ptr) noexcept : ::UnityEngine::Object(ptr) {
}


  constexpr GraphicsSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GraphicsSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GraphicsSettings& operator=(GraphicsSettings&& o) noexcept = default;
  constexpr GraphicsSettings& operator=(GraphicsSettings const& o) noexcept = default;
                


// Properties

static bool __declspec(property(get=get_lightsUseLinearIntensity))  lightsUseLinearIntensity;

static ::UnityEngine::Rendering::RenderPipelineAsset __declspec(property(get=get_renderPipelineAsset, put=set_renderPipelineAsset))  renderPipelineAsset;

static ::UnityEngine::ScriptableObject __declspec(property(get=get_INTERNAL_defaultRenderPipeline, put=set_INTERNAL_defaultRenderPipeline))  INTERNAL_defaultRenderPipeline;

static ::UnityEngine::Rendering::RenderPipelineAsset __declspec(property(get=get_defaultRenderPipeline, put=set_defaultRenderPipeline))  defaultRenderPipeline;


// Methods

/// @brief Method get_lightsUseLinearIntensity addr 0x2b738b0 size 0x28 virtual false final false
static bool get_lightsUseLinearIntensity() ;

/// @brief Method get_renderPipelineAsset addr 0x2b738d8 size 0x4 virtual false final false
static ::UnityEngine::Rendering::RenderPipelineAsset get_renderPipelineAsset() ;

/// @brief Method set_renderPipelineAsset addr 0x2b7396c size 0x3c virtual false final false
static void set_renderPipelineAsset(::UnityEngine::Rendering::RenderPipelineAsset value) ;

/// @brief Method get_INTERNAL_defaultRenderPipeline addr 0x2b739e4 size 0x28 virtual false final false
static ::UnityEngine::ScriptableObject get_INTERNAL_defaultRenderPipeline() ;

/// @brief Method set_INTERNAL_defaultRenderPipeline addr 0x2b73a0c size 0x3c virtual false final false
static void set_INTERNAL_defaultRenderPipeline(::UnityEngine::ScriptableObject value) ;

/// @brief Method get_defaultRenderPipeline addr 0x2b738dc size 0x90 virtual false final false
static ::UnityEngine::Rendering::RenderPipelineAsset get_defaultRenderPipeline() ;

/// @brief Method set_defaultRenderPipeline addr 0x2b739a8 size 0x3c virtual false final false
static void set_defaultRenderPipeline(::UnityEngine::Rendering::RenderPipelineAsset value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Rendering::GraphicsSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GraphicsSettings, "UnityEngine.Rendering", "GraphicsSettings");
