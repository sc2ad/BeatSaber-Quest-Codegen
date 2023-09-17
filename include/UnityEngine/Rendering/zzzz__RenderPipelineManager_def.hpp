#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
class Camera;
}
namespace UnityEngine::Rendering {
class RenderPipelineAsset;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace System {
class Action;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct ____UnityEngine__Camera__RenderRequest;
}
namespace UnityEngine::Rendering {
class RenderPipeline;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class RenderPipelineManager;
}
// Type: UnityEngine.Rendering::RenderPipelineManager
namespace UnityEngine::Rendering {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10290))
// CS Name: UnityEngine.Rendering.RenderPipelineManager
class CORDL_TYPE RenderPipelineManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RenderPipelineManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "RenderPipelineManager", modifiers: " const&", def_value: None }]
constexpr RenderPipelineManager(RenderPipelineManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RenderPipelineManager", modifiers: "&&", def_value: None }]
constexpr RenderPipelineManager(RenderPipelineManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RenderPipelineManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RenderPipelineManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RenderPipelineManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RenderPipelineManager& operator=(RenderPipelineManager&& o) noexcept = default;
  constexpr RenderPipelineManager& operator=(RenderPipelineManager const& o) noexcept = default;
                


// Fields

static ::UnityEngine::Rendering::RenderPipelineAsset __declspec(property(get=__get_s_CurrentPipelineAsset, put=__set_s_CurrentPipelineAsset))  s_CurrentPipelineAsset;

static void __set_s_CurrentPipelineAsset(::UnityEngine::Rendering::RenderPipelineAsset value) ;

static ::UnityEngine::Rendering::RenderPipelineAsset __get_s_CurrentPipelineAsset() ;

static ::System::Collections::Generic::List_1<::UnityEngine::Camera> __declspec(property(get=__get_s_Cameras, put=__set_s_Cameras))  s_Cameras;

static void __set_s_Cameras(::System::Collections::Generic::List_1<::UnityEngine::Camera> value) ;

static ::System::Collections::Generic::List_1<::UnityEngine::Camera> __get_s_Cameras() ;

static ::StringW __declspec(property(get=__get_s_currentPipelineType, put=__set_s_currentPipelineType))  s_currentPipelineType;

static void __set_s_currentPipelineType(::StringW value) ;

static ::StringW __get_s_currentPipelineType() ;

static ::StringW __declspec(property(get=__get_s_builtinPipelineName, put=__set_s_builtinPipelineName))  s_builtinPipelineName;

static void __set_s_builtinPipelineName(::StringW value) ;

static ::StringW __get_s_builtinPipelineName() ;

static ::UnityEngine::Rendering::RenderPipeline __declspec(property(get=__get_s_currentPipeline, put=__set_s_currentPipeline))  s_currentPipeline;

static void __set_s_currentPipeline(::UnityEngine::Rendering::RenderPipeline value) ;

static ::UnityEngine::Rendering::RenderPipeline __get_s_currentPipeline() ;

static ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext,::UnityEngine::Camera> __declspec(property(get=__get_beginCameraRendering, put=__set_beginCameraRendering))  beginCameraRendering;

static void __set_beginCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext,::UnityEngine::Camera> value) ;

static ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext,::UnityEngine::Camera> __get_beginCameraRendering() ;

static ::System::Action __declspec(property(get=__get_activeRenderPipelineTypeChanged, put=__set_activeRenderPipelineTypeChanged))  activeRenderPipelineTypeChanged;

static void __set_activeRenderPipelineTypeChanged(::System::Action value) ;

static ::System::Action __get_activeRenderPipelineTypeChanged() ;


// Properties

static ::UnityEngine::Rendering::RenderPipeline __declspec(property(get=get_currentPipeline, put=set_currentPipeline))  currentPipeline;


// Methods

/// @brief Method get_currentPipeline addr 0x2b7486c size 0x58 virtual false final false
static ::UnityEngine::Rendering::RenderPipeline get_currentPipeline() ;

/// @brief Method set_currentPipeline addr 0x2b748c4 size 0xb0 virtual false final false
static void set_currentPipeline(::UnityEngine::Rendering::RenderPipeline value) ;

/// @brief Method add_beginCameraRendering addr 0x2b74974 size 0xf4 virtual false final false
static void add_beginCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext,::UnityEngine::Camera> value) ;

/// @brief Method remove_beginCameraRendering addr 0x2b74a68 size 0xf4 virtual false final false
static void remove_beginCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext,::UnityEngine::Camera> value) ;

/// @brief Method OnActiveRenderPipelineTypeChanged addr 0x2b74b5c size 0x74 virtual false final false
static void OnActiveRenderPipelineTypeChanged() ;

/// @brief Method HandleRenderPipelineChange addr 0x2b74bd0 size 0x80 virtual false final false
static void HandleRenderPipelineChange(::UnityEngine::Rendering::RenderPipelineAsset pipelineAsset) ;

/// @brief Method CleanupRenderPipeline addr 0x2b74c50 size 0x188 virtual false final false
static void CleanupRenderPipeline() ;

/// @brief Method GetCurrentPipelineAssetType addr 0x2b74f3c size 0x58 virtual false final false
static ::StringW GetCurrentPipelineAssetType() ;

/// @brief Method DoRenderLoop_Internal addr 0x2b74f94 size 0x1c8 virtual false final false
static void DoRenderLoop_Internal(::UnityEngine::Rendering::RenderPipelineAsset pipe, ::cordl_internals::intptr_t loopPtr, ::System::Collections::Generic::List_1<::UnityEngine::____UnityEngine__Camera__RenderRequest> renderRequests) ;

/// @brief Method PrepareRenderPipeline addr 0x2b7515c size 0x16c virtual false final false
static void PrepareRenderPipeline(::UnityEngine::Rendering::RenderPipelineAsset pipelineAsset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Rendering::RenderPipelineManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderPipelineManager, "UnityEngine.Rendering", "RenderPipelineManager");
