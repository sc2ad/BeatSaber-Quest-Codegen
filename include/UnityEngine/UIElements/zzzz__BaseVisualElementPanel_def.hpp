#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class ICursorManager;
}
namespace UnityEngine::UIElements {
class IScheduler;
}
namespace UnityEngine::Yoga {
class YogaConfig;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UIElements {
class ElementUnderPointer;
}
namespace UnityEngine::UIElements {
class EventDispatcher;
}
namespace UnityEngine::UIElements {
class RepaintData;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine::UIElements {
class IGroupBox;
}
namespace UnityEngine::UIElements {
struct PanelClearSettings;
}
namespace UnityEngine::UIElements {
class ContextualMenuManager;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::UIElements {
class SavePersistentViewData;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class AtlasBase;
}
namespace UnityEngine {
struct EventInterests;
}
namespace UnityEngine::UIElements {
struct VisualTreeUpdatePhase;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
struct ContextType;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class IStylePropertyAnimationSystem;
}
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
struct DispatchMode;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
struct HierarchyChangeType;
}
namespace UnityEngine::UIElements {
class GetViewDataDictionary;
}
namespace UnityEngine::UIElements {
class HierarchyEvent;
}
namespace UnityEngine::UIElements {
class IMGUIContainer;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine::UIElements {
class IVisualTreeUpdater;
}
namespace UnityEngine::UIElements {
class FocusController;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
// Type: UnityEngine.UIElements::BaseVisualElementPanel
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6956))
// CS Name: UnityEngine.UIElements.BaseVisualElementPanel
class CORDL_TYPE BaseVisualElementPanel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UIElements::IPanel
constexpr operator  ::UnityEngine::UIElements::IPanel() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief Convert operator to ::UnityEngine::UIElements::IGroupBox
constexpr operator  ::UnityEngine::UIElements::IGroupBox() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~BaseVisualElementPanel() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseVisualElementPanel", modifiers: " const&", def_value: None }]
constexpr BaseVisualElementPanel(BaseVisualElementPanel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseVisualElementPanel", modifiers: "&&", def_value: None }]
constexpr BaseVisualElementPanel(BaseVisualElementPanel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseVisualElementPanel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BaseVisualElementPanel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseVisualElementPanel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseVisualElementPanel& operator=(BaseVisualElementPanel&& o) noexcept = default;
  constexpr BaseVisualElementPanel& operator=(BaseVisualElementPanel const& o) noexcept = default;
                


// Fields

 ::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel> __declspec(property(get=__get_panelDisposed, put=__set_panelDisposed))  panelDisposed;

constexpr void __set_panelDisposed(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel> value) ;

constexpr ::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel> __get_panelDisposed() const;

 float_t __declspec(property(get=__get_m_Scale, put=__set_m_Scale))  m_Scale;

constexpr void __set_m_Scale(float_t value) ;

constexpr float_t __get_m_Scale() const;

 ::UnityEngine::Yoga::YogaConfig __declspec(property(get=__get_yogaConfig, put=__set_yogaConfig))  yogaConfig;

constexpr void __set_yogaConfig(::UnityEngine::Yoga::YogaConfig value) ;

constexpr ::UnityEngine::Yoga::YogaConfig __get_yogaConfig() const;

 float_t __declspec(property(get=__get_m_PixelsPerPoint, put=__set_m_PixelsPerPoint))  m_PixelsPerPoint;

constexpr void __set_m_PixelsPerPoint(float_t value) ;

constexpr float_t __get_m_PixelsPerPoint() const;

 ::UnityEngine::UIElements::PanelClearSettings __declspec(property(get=__get__clearSettings_k__BackingField, put=__set__clearSettings_k__BackingField))  _clearSettings_k__BackingField;

constexpr void __set__clearSettings_k__BackingField(::UnityEngine::UIElements::PanelClearSettings value) ;

constexpr ::UnityEngine::UIElements::PanelClearSettings __get__clearSettings_k__BackingField() const;

 bool __declspec(property(get=__get__duringLayoutPhase_k__BackingField, put=__set__duringLayoutPhase_k__BackingField))  _duringLayoutPhase_k__BackingField;

constexpr void __set__duringLayoutPhase_k__BackingField(bool value) ;

constexpr bool __get__duringLayoutPhase_k__BackingField() const;

 ::UnityEngine::UIElements::RepaintData __declspec(property(get=__get__repaintData_k__BackingField, put=__set__repaintData_k__BackingField))  _repaintData_k__BackingField;

constexpr void __set__repaintData_k__BackingField(::UnityEngine::UIElements::RepaintData value) ;

constexpr ::UnityEngine::UIElements::RepaintData __get__repaintData_k__BackingField() const;

 ::UnityEngine::UIElements::ICursorManager __declspec(property(get=__get__cursorManager_k__BackingField, put=__set__cursorManager_k__BackingField))  _cursorManager_k__BackingField;

constexpr void __set__cursorManager_k__BackingField(::UnityEngine::UIElements::ICursorManager value) ;

constexpr ::UnityEngine::UIElements::ICursorManager __get__cursorManager_k__BackingField() const;

 ::UnityEngine::UIElements::ContextualMenuManager __declspec(property(get=__get__contextualMenuManager_k__BackingField, put=__set__contextualMenuManager_k__BackingField))  _contextualMenuManager_k__BackingField;

constexpr void __set__contextualMenuManager_k__BackingField(::UnityEngine::UIElements::ContextualMenuManager value) ;

constexpr ::UnityEngine::UIElements::ContextualMenuManager __get__contextualMenuManager_k__BackingField() const;

 bool __declspec(property(get=__get__disposed_k__BackingField, put=__set__disposed_k__BackingField))  _disposed_k__BackingField;

constexpr void __set__disposed_k__BackingField(bool value) ;

constexpr bool __get__disposed_k__BackingField() const;

 ::UnityEngine::UIElements::ElementUnderPointer __declspec(property(get=__get_m_TopElementUnderPointers, put=__set_m_TopElementUnderPointers))  m_TopElementUnderPointers;

constexpr void __set_m_TopElementUnderPointers(::UnityEngine::UIElements::ElementUnderPointer value) ;

constexpr ::UnityEngine::UIElements::ElementUnderPointer __get_m_TopElementUnderPointers() const;

 ::System::Action __declspec(property(get=__get_standardShaderChanged, put=__set_standardShaderChanged))  standardShaderChanged;

constexpr void __set_standardShaderChanged(::System::Action value) ;

constexpr ::System::Action __get_standardShaderChanged() const;

 ::System::Action __declspec(property(get=__get_standardWorldSpaceShaderChanged, put=__set_standardWorldSpaceShaderChanged))  standardWorldSpaceShaderChanged;

constexpr void __set_standardWorldSpaceShaderChanged(::System::Action value) ;

constexpr ::System::Action __get_standardWorldSpaceShaderChanged() const;

 ::System::Action __declspec(property(get=__get_atlasChanged, put=__set_atlasChanged))  atlasChanged;

constexpr void __set_atlasChanged(::System::Action value) ;

constexpr ::System::Action __get_atlasChanged() const;

 ::System::Action_1<::UnityEngine::Material> __declspec(property(get=__get_updateMaterial, put=__set_updateMaterial))  updateMaterial;

constexpr void __set_updateMaterial(::System::Action_1<::UnityEngine::Material> value) ;

constexpr ::System::Action_1<::UnityEngine::Material> __get_updateMaterial() const;

 ::UnityEngine::UIElements::HierarchyEvent __declspec(property(get=__get_hierarchyChanged, put=__set_hierarchyChanged))  hierarchyChanged;

constexpr void __set_hierarchyChanged(::UnityEngine::UIElements::HierarchyEvent value) ;

constexpr ::UnityEngine::UIElements::HierarchyEvent __get_hierarchyChanged() const;

 ::System::Action_1<::UnityEngine::UIElements::IPanel> __declspec(property(get=__get_beforeUpdate, put=__set_beforeUpdate))  beforeUpdate;

constexpr void __set_beforeUpdate(::System::Action_1<::UnityEngine::UIElements::IPanel> value) ;

constexpr ::System::Action_1<::UnityEngine::UIElements::IPanel> __get_beforeUpdate() const;


// Properties

 ::UnityEngine::EventInterests __declspec(property(get=get_IMGUIEventInterests, put=set_IMGUIEventInterests))  IMGUIEventInterests;

 ::UnityEngine::ScriptableObject __declspec(property(get=get_ownerObject, put=set_ownerObject))  ownerObject;

 ::UnityEngine::UIElements::SavePersistentViewData __declspec(property(get=get_saveViewData))  saveViewData;

 ::UnityEngine::UIElements::GetViewDataDictionary __declspec(property(get=get_getViewDataDictionary))  getViewDataDictionary;

 int32_t __declspec(property(get=get_IMGUIContainersCount, put=set_IMGUIContainersCount))  IMGUIContainersCount;

 ::UnityEngine::UIElements::FocusController __declspec(property(get=get_focusController, put=set_focusController))  focusController;

 ::UnityEngine::UIElements::IMGUIContainer __declspec(property(get=get_rootIMGUIContainer))  rootIMGUIContainer;

 float_t __declspec(property(get=get_scale, put=set_scale))  scale;

 float_t __declspec(property(put=set_pixelsPerPoint))  pixelsPerPoint;

 float_t __declspec(property(get=get_scaledPixelsPerPoint))  scaledPixelsPerPoint;

 ::UnityEngine::UIElements::PanelClearSettings __declspec(property(get=get_clearSettings, put=set_clearSettings))  clearSettings;

 bool __declspec(property(get=get_duringLayoutPhase, put=set_duringLayoutPhase))  duringLayoutPhase;

 uint32_t __declspec(property(get=get_version))  version;

 uint32_t __declspec(property(get=get_hierarchyVersion))  hierarchyVersion;

 ::UnityEngine::UIElements::RepaintData __declspec(property(get=get_repaintData, put=set_repaintData))  repaintData;

 ::UnityEngine::UIElements::ICursorManager __declspec(property(get=get_cursorManager, put=set_cursorManager))  cursorManager;

 ::UnityEngine::UIElements::ContextualMenuManager __declspec(property(get=get_contextualMenuManager, put=set_contextualMenuManager))  contextualMenuManager;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=get_visualTree))  visualTree;

 ::UnityEngine::UIElements::EventDispatcher __declspec(property(get=get_dispatcher, put=set_dispatcher))  dispatcher;

 ::UnityEngine::UIElements::IScheduler __declspec(property(get=get_scheduler))  scheduler;

 ::UnityEngine::UIElements::IStylePropertyAnimationSystem __declspec(property(get=get_styleAnimationSystem, put=set_styleAnimationSystem))  styleAnimationSystem;

 ::UnityEngine::UIElements::ContextType __declspec(property(get=get_contextType, put=set_contextType))  contextType;

 bool __declspec(property(get=get_disposed, put=set_disposed))  disposed;

 ::UnityEngine::Shader __declspec(property(get=get_standardShader))  standardShader;

 ::UnityEngine::Shader __declspec(property(get=get_standardWorldSpaceShader))  standardWorldSpaceShader;

 ::UnityEngine::UIElements::AtlasBase __declspec(property(get=get_atlas, put=set_atlas))  atlas;


// Methods

/// @brief Method get_IMGUIEventInterests addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::EventInterests get_IMGUIEventInterests() ;

/// @brief Method set_IMGUIEventInterests addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_IMGUIEventInterests(::UnityEngine::EventInterests value) ;

/// @brief Method get_ownerObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::ScriptableObject get_ownerObject() ;

/// @brief Method set_ownerObject addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_ownerObject(::UnityEngine::ScriptableObject value) ;

/// @brief Method get_saveViewData addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::SavePersistentViewData get_saveViewData() ;

/// @brief Method get_getViewDataDictionary addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::GetViewDataDictionary get_getViewDataDictionary() ;

/// @brief Method get_IMGUIContainersCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_IMGUIContainersCount() ;

/// @brief Method set_IMGUIContainersCount addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_IMGUIContainersCount(int32_t value) ;

/// @brief Method get_focusController addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::FocusController get_focusController() ;

/// @brief Method set_focusController addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_focusController(::UnityEngine::UIElements::FocusController value) ;

/// @brief Method get_rootIMGUIContainer addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::IMGUIContainer get_rootIMGUIContainer() ;

/// @brief Method add_panelDisposed addr 0x2c4fd90 size 0xb0 virtual false final false
 void add_panelDisposed(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel> value) ;

/// @brief Method remove_panelDisposed addr 0x2c4fe40 size 0xb0 virtual false final false
 void remove_panelDisposed(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel> value) ;

// Ctor Parameters []
explicit BaseVisualElementPanel() ;

/// @brief Method .ctor addr 0x2c4fef0 size 0xe8 virtual false final false
 void _ctor() ;

/// @brief Method Dispose addr 0x2c4ffd8 size 0x70 virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x2c50048 size 0x13c virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Repaint addr 0x0 size 0xffffffffffffffff virtual true final false
 void Repaint(::UnityEngine::Event e) ;

/// @brief Method ValidateLayout addr 0x0 size 0xffffffffffffffff virtual true final false
 void ValidateLayout() ;

/// @brief Method UpdateAnimations addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateAnimations() ;

/// @brief Method UpdateBindings addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateBindings() ;

/// @brief Method ApplyStyles addr 0x0 size 0xffffffffffffffff virtual true final false
 void ApplyStyles() ;

/// @brief Method get_scale addr 0x2c50184 size 0x8 virtual false final false
 float_t get_scale() ;

/// @brief Method set_scale addr 0x2c5018c size 0x10c virtual false final false
 void set_scale(float_t value) ;

/// @brief Method set_pixelsPerPoint addr 0x2c50298 size 0x10c virtual false final false
 void set_pixelsPerPoint(float_t value) ;

/// @brief Method get_scaledPixelsPerPoint addr 0x2c48cdc size 0x10 virtual false final false
 float_t get_scaledPixelsPerPoint() ;

/// @brief Method get_clearSettings addr 0x2c503a4 size 0x14 virtual false final false
 ::UnityEngine::UIElements::PanelClearSettings get_clearSettings() ;

/// @brief Method set_clearSettings addr 0x2c503b8 size 0x14 virtual false final false
 void set_clearSettings(::UnityEngine::UIElements::PanelClearSettings value) ;

/// @brief Method get_duringLayoutPhase addr 0x2c503cc size 0x8 virtual false final false
 bool get_duringLayoutPhase() ;

/// @brief Method set_duringLayoutPhase addr 0x2c503d4 size 0xc virtual false final false
 void set_duringLayoutPhase(bool value) ;

/// @brief Method get_version addr 0x0 size 0xffffffffffffffff virtual true final false
 uint32_t get_version() ;

/// @brief Method get_hierarchyVersion addr 0x0 size 0xffffffffffffffff virtual true final false
 uint32_t get_hierarchyVersion() ;

/// @brief Method OnVersionChanged addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnVersionChanged(::UnityEngine::UIElements::VisualElement ele, ::UnityEngine::UIElements::VersionChangeType changeTypeFlag) ;

/// @brief Method get_repaintData addr 0x2c503e0 size 0x8 virtual true final false
 ::UnityEngine::UIElements::RepaintData get_repaintData() ;

/// @brief Method set_repaintData addr 0x2c503e8 size 0x8 virtual true final false
 void set_repaintData(::UnityEngine::UIElements::RepaintData value) ;

/// @brief Method get_cursorManager addr 0x2c503f0 size 0x8 virtual true final false
 ::UnityEngine::UIElements::ICursorManager get_cursorManager() ;

/// @brief Method set_cursorManager addr 0x2c503f8 size 0x8 virtual true final false
 void set_cursorManager(::UnityEngine::UIElements::ICursorManager value) ;

/// @brief Method get_contextualMenuManager addr 0x2c50400 size 0x8 virtual true final true
 ::UnityEngine::UIElements::ContextualMenuManager get_contextualMenuManager() ;

/// @brief Method set_contextualMenuManager addr 0x2c50408 size 0x8 virtual false final false
 void set_contextualMenuManager(::UnityEngine::UIElements::ContextualMenuManager value) ;

/// @brief Method get_visualTree addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::VisualElement get_visualTree() ;

/// @brief Method get_dispatcher addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::EventDispatcher get_dispatcher() ;

/// @brief Method set_dispatcher addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_dispatcher(::UnityEngine::UIElements::EventDispatcher value) ;

/// @brief Method SendEvent addr 0x2c50410 size 0xc4 virtual false final false
 void SendEvent(::UnityEngine::UIElements::EventBase e, ::UnityEngine::UIElements::DispatchMode dispatchMode) ;

/// @brief Method get_scheduler addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::IScheduler get_scheduler() ;

/// @brief Method get_styleAnimationSystem addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::IStylePropertyAnimationSystem get_styleAnimationSystem() ;

/// @brief Method set_styleAnimationSystem addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_styleAnimationSystem(::UnityEngine::UIElements::IStylePropertyAnimationSystem value) ;

/// @brief Method get_contextType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::ContextType get_contextType() ;

/// @brief Method set_contextType addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_contextType(::UnityEngine::UIElements::ContextType value) ;

/// @brief Method Pick addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::VisualElement Pick(::UnityEngine::Vector2 point) ;

/// @brief Method PickAll addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::VisualElement PickAll(::UnityEngine::Vector2 point, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement> picked) ;

/// @brief Method get_disposed addr 0x2c504d4 size 0x8 virtual false final false
 bool get_disposed() ;

/// @brief Method set_disposed addr 0x2c504dc size 0xc virtual false final false
 void set_disposed(bool value) ;

/// @brief Method GetUpdater addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::IVisualTreeUpdater GetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase phase) ;

/// @brief Method GetTopElementUnderPointer addr 0x2c45a48 size 0x1c virtual false final false
 ::UnityEngine::UIElements::VisualElement GetTopElementUnderPointer(int32_t pointerId) ;

/// @brief Method RecomputeTopElementUnderPointer addr 0x2c504e8 size 0x134 virtual false final false
 ::UnityEngine::UIElements::VisualElement RecomputeTopElementUnderPointer(int32_t pointerId, ::UnityEngine::Vector2 pointerPos, ::UnityEngine::UIElements::EventBase triggerEvent) ;

/// @brief Method ClearCachedElementUnderPointer addr 0x2c5061c size 0x28 virtual false final false
 void ClearCachedElementUnderPointer(int32_t pointerId, ::UnityEngine::UIElements::EventBase triggerEvent) ;

/// @brief Method CommitElementUnderPointers addr 0x2c50644 size 0x5c virtual false final false
 void CommitElementUnderPointers() ;

/// @brief Method get_standardShader addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Shader get_standardShader() ;

/// @brief Method get_standardWorldSpaceShader addr 0x2c506a0 size 0x8 virtual true final false
 ::UnityEngine::Shader get_standardWorldSpaceShader() ;

/// @brief Method add_standardShaderChanged addr 0x2c506a8 size 0x9c virtual false final false
 void add_standardShaderChanged(::System::Action value) ;

/// @brief Method remove_standardShaderChanged addr 0x2c50744 size 0x9c virtual false final false
 void remove_standardShaderChanged(::System::Action value) ;

/// @brief Method add_standardWorldSpaceShaderChanged addr 0x2c507e0 size 0x9c virtual false final false
 void add_standardWorldSpaceShaderChanged(::System::Action value) ;

/// @brief Method remove_standardWorldSpaceShaderChanged addr 0x2c5087c size 0x9c virtual false final false
 void remove_standardWorldSpaceShaderChanged(::System::Action value) ;

/// @brief Method add_atlasChanged addr 0x2c50918 size 0x9c virtual false final false
 void add_atlasChanged(::System::Action value) ;

/// @brief Method remove_atlasChanged addr 0x2c509b4 size 0x9c virtual false final false
 void remove_atlasChanged(::System::Action value) ;

/// @brief Method InvokeAtlasChanged addr 0x2c50a50 size 0x1c virtual false final false
 void InvokeAtlasChanged() ;

/// @brief Method get_atlas addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::AtlasBase get_atlas() ;

/// @brief Method set_atlas addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_atlas(::UnityEngine::UIElements::AtlasBase value) ;

/// @brief Method InvokeUpdateMaterial addr 0x2c50a6c size 0x1c virtual false final false
 void InvokeUpdateMaterial(::UnityEngine::Material mat) ;

/// @brief Method add_hierarchyChanged addr 0x2c50a88 size 0x9c virtual false final false
 void add_hierarchyChanged(::UnityEngine::UIElements::HierarchyEvent value) ;

/// @brief Method remove_hierarchyChanged addr 0x2c50b24 size 0x9c virtual false final false
 void remove_hierarchyChanged(::UnityEngine::UIElements::HierarchyEvent value) ;

/// @brief Method InvokeHierarchyChanged addr 0x2c50bc0 size 0x1c virtual false final false
 void InvokeHierarchyChanged(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::HierarchyChangeType changeType) ;

/// @brief Method InvokeBeforeUpdate addr 0x2c50bdc size 0x20 virtual false final false
 void InvokeBeforeUpdate() ;

/// @brief Method UpdateElementUnderPointers addr 0x2c41714 size 0x200 virtual false final false
 void UpdateElementUnderPointers() ;

/// @brief Method Update addr 0x2c50bfc size 0xf4 virtual true final false
 void Update() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::BaseVisualElementPanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseVisualElementPanel, "UnityEngine.UIElements", "BaseVisualElementPanel");
