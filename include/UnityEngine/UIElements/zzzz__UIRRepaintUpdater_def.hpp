#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements {
struct HierarchyChangeType;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements::UIR {
class RenderChain;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIRRepaintUpdater;
}
// Type: UnityEngine.UIElements::UIRRepaintUpdater
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6838))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7426))
// CS Name: UnityEngine.UIElements.UIRRepaintUpdater
class CORDL_TYPE UIRRepaintUpdater : public UnityEngine::UIElements::BaseVisualTreeUpdater {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~UIRRepaintUpdater() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIRRepaintUpdater", modifiers: " const&", def_value: None }]
constexpr UIRRepaintUpdater(UIRRepaintUpdater const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIRRepaintUpdater", modifiers: "&&", def_value: None }]
constexpr UIRRepaintUpdater(UIRRepaintUpdater&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIRRepaintUpdater(void* ptr) noexcept : UnityEngine::UIElements::BaseVisualTreeUpdater(ptr) {
}


  constexpr UIRRepaintUpdater& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UIRRepaintUpdater& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UIRRepaintUpdater& operator=(UIRRepaintUpdater&& o) noexcept = default;
  constexpr UIRRepaintUpdater& operator=(UIRRepaintUpdater const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::BaseVisualElementPanel __declspec(property(get=__get_attachedPanel, put=__set_attachedPanel))  attachedPanel;

constexpr void __set_attachedPanel(UnityEngine::UIElements::BaseVisualElementPanel value) ;

constexpr UnityEngine::UIElements::BaseVisualElementPanel __get_attachedPanel() const;

 UnityEngine::UIElements::UIR::RenderChain __declspec(property(get=__get_renderChain, put=__set_renderChain))  renderChain;

constexpr void __set_renderChain(UnityEngine::UIElements::UIR::RenderChain value) ;

constexpr UnityEngine::UIElements::UIR::RenderChain __get_renderChain() const;

static ::StringW __declspec(property(get=__get_s_Description, put=__set_s_Description))  s_Description;

static void __set_s_Description(::StringW value) ;

static ::StringW __get_s_Description() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_ProfilerMarker, put=__set_s_ProfilerMarker))  s_ProfilerMarker;

static void __set_s_ProfilerMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_ProfilerMarker() ;

 bool __declspec(property(get=__get__drawStats_k__BackingField, put=__set__drawStats_k__BackingField))  _drawStats_k__BackingField;

constexpr void __set__drawStats_k__BackingField(bool value) ;

constexpr bool __get__drawStats_k__BackingField() const;

 bool __declspec(property(get=__get__breakBatches_k__BackingField, put=__set__breakBatches_k__BackingField))  _breakBatches_k__BackingField;

constexpr void __set__breakBatches_k__BackingField(bool value) ;

constexpr bool __get__breakBatches_k__BackingField() const;

 bool __declspec(property(get=__get__disposed_k__BackingField, put=__set__disposed_k__BackingField))  _disposed_k__BackingField;

constexpr void __set__disposed_k__BackingField(bool value) ;

constexpr bool __get__disposed_k__BackingField() const;


// Properties

 Unity::Profiling::ProfilerMarker __declspec(property(get=get_profilerMarker))  profilerMarker;

 bool __declspec(property(get=get_drawStats))  drawStats;

 bool __declspec(property(get=get_breakBatches))  breakBatches;

 bool __declspec(property(get=get_disposed, put=set_disposed))  disposed;


// Methods

// Ctor Parameters []
explicit UIRRepaintUpdater() ;

/// @brief Method .ctor addr 0x2d00230 size 0x90 virtual false final false
 void _ctor() ;

/// @brief Method get_profilerMarker addr 0x2d002c0 size 0x58 virtual true final false
 Unity::Profiling::ProfilerMarker get_profilerMarker() ;

/// @brief Method get_drawStats addr 0x2d00318 size 0x8 virtual false final false
 bool get_drawStats() ;

/// @brief Method get_breakBatches addr 0x2d00320 size 0x8 virtual false final false
 bool get_breakBatches() ;

/// @brief Method OnVersionChanged addr 0x2d00328 size 0xf8 virtual true final false
 void OnVersionChanged(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::VersionChangeType versionChangeType) ;

/// @brief Method Update addr 0x2d00420 size 0xbc virtual true final false
 void Update() ;

/// @brief Method CreateRenderChain addr 0x2d00598 size 0x78 virtual true final false
 UnityEngine::UIElements::UIR::RenderChain CreateRenderChain() ;

/// @brief Method OnGraphicsResourcesRecreate addr 0x2d0071c size 0x1d0 virtual false final false
static void OnGraphicsResourcesRecreate(bool recreate) ;

/// @brief Method OnPanelChanged addr 0x2d0093c size 0x18 virtual false final false
 void OnPanelChanged(UnityEngine::UIElements::BaseVisualElementPanel obj) ;

/// @brief Method AttachToPanel addr 0x2d00af8 size 0x1f4 virtual false final false
 void AttachToPanel() ;

/// @brief Method DetachFromPanel addr 0x2d00954 size 0x1a4 virtual false final false
 void DetachFromPanel() ;

/// @brief Method InitRenderChain addr 0x2d004dc size 0xbc virtual false final false
 void InitRenderChain() ;

/// @brief Method DestroyRenderChain addr 0x2d008ec size 0x50 virtual false final false
 void DestroyRenderChain() ;

/// @brief Method OnPanelAtlasChanged addr 0x2d010c4 size 0x4 virtual false final false
 void OnPanelAtlasChanged() ;

/// @brief Method OnPanelHierarchyChanged addr 0x2d010c8 size 0x38 virtual false final false
 void OnPanelHierarchyChanged(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::HierarchyChangeType changeType) ;

/// @brief Method OnPanelStandardShaderChanged addr 0x2d00cec size 0x1a4 virtual false final false
 void OnPanelStandardShaderChanged() ;

/// @brief Method OnPanelStandardWorldSpaceShaderChanged addr 0x2d00e90 size 0x1a4 virtual false final false
 void OnPanelStandardWorldSpaceShaderChanged() ;

/// @brief Method ResetAllElementsDataRecursive addr 0x2d01034 size 0x90 virtual false final false
 void ResetAllElementsDataRecursive(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method get_disposed addr 0x2d01100 size 0x8 virtual false final false
 bool get_disposed() ;

/// @brief Method set_disposed addr 0x2d01108 size 0xc virtual false final false
 void set_disposed(bool value) ;

/// @brief Method Dispose addr 0x2d01114 size 0x2c virtual true final false
 void Dispose(bool disposing) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::UIRRepaintUpdater);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIRRepaintUpdater, "UnityEngine.UIElements", "UIRRepaintUpdater");
