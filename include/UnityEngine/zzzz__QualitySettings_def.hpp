#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
struct ColorSpace;
}
namespace UnityEngine::Rendering {
class RenderPipelineAsset;
}
namespace UnityEngine {
class ScriptableObject;
}
// Forward declare root types
namespace UnityEngine {
class QualitySettings;
}
// Type: UnityEngine::QualitySettings
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10027))
// CS Name: UnityEngine.QualitySettings
class CORDL_TYPE QualitySettings : public ::UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~QualitySettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "QualitySettings", modifiers: " const&", def_value: None }]
constexpr QualitySettings(QualitySettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "QualitySettings", modifiers: "&&", def_value: None }]
constexpr QualitySettings(QualitySettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit QualitySettings(void* ptr) noexcept : ::UnityEngine::Object(ptr) {
}


  constexpr QualitySettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr QualitySettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr QualitySettings& operator=(QualitySettings&& o) noexcept = default;
  constexpr QualitySettings& operator=(QualitySettings const& o) noexcept = default;
                


// Properties

static int32_t __declspec(property(put=set_vSyncCount))  vSyncCount;

static int32_t __declspec(property(get=get_antiAliasing, put=set_antiAliasing))  antiAliasing;

static ::UnityEngine::ScriptableObject __declspec(property(get=get_INTERNAL_renderPipeline, put=set_INTERNAL_renderPipeline))  INTERNAL_renderPipeline;

static ::UnityEngine::Rendering::RenderPipelineAsset __declspec(property(get=get_renderPipeline, put=set_renderPipeline))  renderPipeline;

static int32_t __declspec(property(put=set_maxQueuedFrames))  maxQueuedFrames;

static ::UnityEngine::ColorSpace __declspec(property(get=get_activeColorSpace))  activeColorSpace;


// Methods

/// @brief Method set_vSyncCount addr 0x2b40464 size 0x3c virtual false final false
static void set_vSyncCount(int32_t value) ;

/// @brief Method get_antiAliasing addr 0x2b404a0 size 0x28 virtual false final false
static int32_t get_antiAliasing() ;

/// @brief Method set_antiAliasing addr 0x2b404c8 size 0x3c virtual false final false
static void set_antiAliasing(int32_t value) ;

/// @brief Method get_INTERNAL_renderPipeline addr 0x2b40504 size 0x28 virtual false final false
static ::UnityEngine::ScriptableObject get_INTERNAL_renderPipeline() ;

/// @brief Method set_INTERNAL_renderPipeline addr 0x2b4052c size 0x3c virtual false final false
static void set_INTERNAL_renderPipeline(::UnityEngine::ScriptableObject value) ;

/// @brief Method get_renderPipeline addr 0x2b40568 size 0x90 virtual false final false
static ::UnityEngine::Rendering::RenderPipelineAsset get_renderPipeline() ;

/// @brief Method set_renderPipeline addr 0x2b405f8 size 0x3c virtual false final false
static void set_renderPipeline(::UnityEngine::Rendering::RenderPipelineAsset value) ;

/// @brief Method set_maxQueuedFrames addr 0x2b40634 size 0x3c virtual false final false
static void set_maxQueuedFrames(int32_t value) ;

/// @brief Method get_activeColorSpace addr 0x2b40670 size 0x28 virtual false final false
static ::UnityEngine::ColorSpace get_activeColorSpace() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::QualitySettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::QualitySettings, "UnityEngine", "QualitySettings");
