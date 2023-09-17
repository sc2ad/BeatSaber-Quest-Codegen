#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
class GetViewDataDictionary;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
class IVisualTreeUpdater;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class TimerEventScheduler;
}
namespace UnityEngine::UIElements {
class FocusController;
}
namespace UnityEngine::UIElements {
class IScheduler;
}
namespace UnityEngine::UIElements {
class EventDispatcher;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine::UIElements {
class VisualTreeUpdater;
}
namespace UnityEngine::UIElements {
struct VisualTreeUpdatePhase;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine::UIElements {
struct ContextType;
}
namespace UnityEngine::UIElements {
class SavePersistentViewData;
}
namespace UnityEngine::UIElements {
class IMGUIContainer;
}
namespace UnityEngine::UIElements {
class TimeMsFunction;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class LoadResourceFunction;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine::UIElements {
class AtlasBase;
}
namespace UnityEngine {
struct EventInterests;
}
namespace UnityEngine::UIElements {
class IStylePropertyAnimationSystem;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Panel;
}
// Type: UnityEngine.UIElements::Panel
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6956))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6961))
// CS Name: UnityEngine.UIElements.Panel
class CORDL_TYPE Panel : public ::UnityEngine::UIElements::BaseVisualElementPanel {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x158};

virtual ~Panel() = default;

// Ctor Parameters [CppParam { name: "", ty: "Panel", modifiers: " const&", def_value: None }]
constexpr Panel(Panel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Panel", modifiers: "&&", def_value: None }]
constexpr Panel(Panel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Panel(void* ptr) noexcept : ::UnityEngine::UIElements::BaseVisualElementPanel(ptr) {
}


  constexpr Panel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Panel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Panel& operator=(Panel&& o) noexcept = default;
  constexpr Panel& operator=(Panel const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_RootContainer, put=__set_m_RootContainer))  m_RootContainer;

constexpr void __set_m_RootContainer(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get_m_RootContainer() const;

 ::UnityEngine::UIElements::VisualTreeUpdater __declspec(property(get=__get_m_VisualTreeUpdater, put=__set_m_VisualTreeUpdater))  m_VisualTreeUpdater;

constexpr void __set_m_VisualTreeUpdater(::UnityEngine::UIElements::VisualTreeUpdater value) ;

constexpr ::UnityEngine::UIElements::VisualTreeUpdater __get_m_VisualTreeUpdater() const;

 ::UnityEngine::UIElements::IStylePropertyAnimationSystem __declspec(property(get=__get_m_StylePropertyAnimationSystem, put=__set_m_StylePropertyAnimationSystem))  m_StylePropertyAnimationSystem;

constexpr void __set_m_StylePropertyAnimationSystem(::UnityEngine::UIElements::IStylePropertyAnimationSystem value) ;

constexpr ::UnityEngine::UIElements::IStylePropertyAnimationSystem __get_m_StylePropertyAnimationSystem() const;

 ::StringW __declspec(property(get=__get_m_PanelName, put=__set_m_PanelName))  m_PanelName;

constexpr void __set_m_PanelName(::StringW value) ;

constexpr ::StringW __get_m_PanelName() const;

 uint32_t __declspec(property(get=__get_m_Version, put=__set_m_Version))  m_Version;

constexpr void __set_m_Version(uint32_t value) ;

constexpr uint32_t __get_m_Version() const;

 uint32_t __declspec(property(get=__get_m_RepaintVersion, put=__set_m_RepaintVersion))  m_RepaintVersion;

constexpr void __set_m_RepaintVersion(uint32_t value) ;

constexpr uint32_t __get_m_RepaintVersion() const;

 uint32_t __declspec(property(get=__get_m_HierarchyVersion, put=__set_m_HierarchyVersion))  m_HierarchyVersion;

constexpr void __set_m_HierarchyVersion(uint32_t value) ;

constexpr uint32_t __get_m_HierarchyVersion() const;

 ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_m_MarkerBeforeUpdate, put=__set_m_MarkerBeforeUpdate))  m_MarkerBeforeUpdate;

constexpr void __set_m_MarkerBeforeUpdate(::Unity::Profiling::ProfilerMarker value) ;

constexpr ::Unity::Profiling::ProfilerMarker __get_m_MarkerBeforeUpdate() const;

 ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_m_MarkerUpdate, put=__set_m_MarkerUpdate))  m_MarkerUpdate;

constexpr void __set_m_MarkerUpdate(::Unity::Profiling::ProfilerMarker value) ;

constexpr ::Unity::Profiling::ProfilerMarker __get_m_MarkerUpdate() const;

 ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_m_MarkerLayout, put=__set_m_MarkerLayout))  m_MarkerLayout;

constexpr void __set_m_MarkerLayout(::Unity::Profiling::ProfilerMarker value) ;

constexpr ::Unity::Profiling::ProfilerMarker __get_m_MarkerLayout() const;

 ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_m_MarkerBindings, put=__set_m_MarkerBindings))  m_MarkerBindings;

constexpr void __set_m_MarkerBindings(::Unity::Profiling::ProfilerMarker value) ;

constexpr ::Unity::Profiling::ProfilerMarker __get_m_MarkerBindings() const;

 ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_m_MarkerAnimations, put=__set_m_MarkerAnimations))  m_MarkerAnimations;

constexpr void __set_m_MarkerAnimations(::Unity::Profiling::ProfilerMarker value) ;

constexpr ::Unity::Profiling::ProfilerMarker __get_m_MarkerAnimations() const;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_MarkerPickAll, put=__set_s_MarkerPickAll))  s_MarkerPickAll;

static void __set_s_MarkerPickAll(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_s_MarkerPickAll() ;

 ::UnityEngine::UIElements::EventDispatcher __declspec(property(get=__get__dispatcher_k__BackingField, put=__set__dispatcher_k__BackingField))  _dispatcher_k__BackingField;

constexpr void __set__dispatcher_k__BackingField(::UnityEngine::UIElements::EventDispatcher value) ;

constexpr ::UnityEngine::UIElements::EventDispatcher __get__dispatcher_k__BackingField() const;

 ::UnityEngine::UIElements::TimerEventScheduler __declspec(property(get=__get_m_Scheduler, put=__set_m_Scheduler))  m_Scheduler;

constexpr void __set_m_Scheduler(::UnityEngine::UIElements::TimerEventScheduler value) ;

constexpr ::UnityEngine::UIElements::TimerEventScheduler __get_m_Scheduler() const;

 ::UnityEngine::ScriptableObject __declspec(property(get=__get__ownerObject_k__BackingField, put=__set__ownerObject_k__BackingField))  _ownerObject_k__BackingField;

constexpr void __set__ownerObject_k__BackingField(::UnityEngine::ScriptableObject value) ;

constexpr ::UnityEngine::ScriptableObject __get__ownerObject_k__BackingField() const;

 ::UnityEngine::UIElements::ContextType __declspec(property(get=__get__contextType_k__BackingField, put=__set__contextType_k__BackingField))  _contextType_k__BackingField;

constexpr void __set__contextType_k__BackingField(::UnityEngine::UIElements::ContextType value) ;

constexpr ::UnityEngine::UIElements::ContextType __get__contextType_k__BackingField() const;

 ::UnityEngine::UIElements::SavePersistentViewData __declspec(property(get=__get__saveViewData_k__BackingField, put=__set__saveViewData_k__BackingField))  _saveViewData_k__BackingField;

constexpr void __set__saveViewData_k__BackingField(::UnityEngine::UIElements::SavePersistentViewData value) ;

constexpr ::UnityEngine::UIElements::SavePersistentViewData __get__saveViewData_k__BackingField() const;

 ::UnityEngine::UIElements::GetViewDataDictionary __declspec(property(get=__get__getViewDataDictionary_k__BackingField, put=__set__getViewDataDictionary_k__BackingField))  _getViewDataDictionary_k__BackingField;

constexpr void __set__getViewDataDictionary_k__BackingField(::UnityEngine::UIElements::GetViewDataDictionary value) ;

constexpr ::UnityEngine::UIElements::GetViewDataDictionary __get__getViewDataDictionary_k__BackingField() const;

 ::UnityEngine::UIElements::FocusController __declspec(property(get=__get__focusController_k__BackingField, put=__set__focusController_k__BackingField))  _focusController_k__BackingField;

constexpr void __set__focusController_k__BackingField(::UnityEngine::UIElements::FocusController value) ;

constexpr ::UnityEngine::UIElements::FocusController __get__focusController_k__BackingField() const;

 ::UnityEngine::EventInterests __declspec(property(get=__get__IMGUIEventInterests_k__BackingField, put=__set__IMGUIEventInterests_k__BackingField))  _IMGUIEventInterests_k__BackingField;

constexpr void __set__IMGUIEventInterests_k__BackingField(::UnityEngine::EventInterests value) ;

constexpr ::UnityEngine::EventInterests __get__IMGUIEventInterests_k__BackingField() const;

static ::UnityEngine::UIElements::LoadResourceFunction __declspec(property(get=__get__loadResourceFunc_k__BackingField, put=__set__loadResourceFunc_k__BackingField))  _loadResourceFunc_k__BackingField;

static void __set__loadResourceFunc_k__BackingField(::UnityEngine::UIElements::LoadResourceFunction value) ;

static ::UnityEngine::UIElements::LoadResourceFunction __get__loadResourceFunc_k__BackingField() ;

static ::UnityEngine::UIElements::TimeMsFunction __declspec(property(get=__get__TimeSinceStartup_k__BackingField, put=__set__TimeSinceStartup_k__BackingField))  _TimeSinceStartup_k__BackingField;

static void __set__TimeSinceStartup_k__BackingField(::UnityEngine::UIElements::TimeMsFunction value) ;

static ::UnityEngine::UIElements::TimeMsFunction __get__TimeSinceStartup_k__BackingField() ;

 int32_t __declspec(property(get=__get__IMGUIContainersCount_k__BackingField, put=__set__IMGUIContainersCount_k__BackingField))  _IMGUIContainersCount_k__BackingField;

constexpr void __set__IMGUIContainersCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__IMGUIContainersCount_k__BackingField() const;

 ::UnityEngine::UIElements::IMGUIContainer __declspec(property(get=__get__rootIMGUIContainer_k__BackingField, put=__set__rootIMGUIContainer_k__BackingField))  _rootIMGUIContainer_k__BackingField;

constexpr void __set__rootIMGUIContainer_k__BackingField(::UnityEngine::UIElements::IMGUIContainer value) ;

constexpr ::UnityEngine::UIElements::IMGUIContainer __get__rootIMGUIContainer_k__BackingField() const;

 ::UnityEngine::Shader __declspec(property(get=__get_m_StandardShader, put=__set_m_StandardShader))  m_StandardShader;

constexpr void __set_m_StandardShader(::UnityEngine::Shader value) ;

constexpr ::UnityEngine::Shader __get_m_StandardShader() const;

 ::UnityEngine::UIElements::AtlasBase __declspec(property(get=__get_m_Atlas, put=__set_m_Atlas))  m_Atlas;

constexpr void __set_m_Atlas(::UnityEngine::UIElements::AtlasBase value) ;

constexpr ::UnityEngine::UIElements::AtlasBase __get_m_Atlas() const;

 bool __declspec(property(get=__get_m_ValidatingLayout, put=__set_m_ValidatingLayout))  m_ValidatingLayout;

constexpr void __set_m_ValidatingLayout(bool value) ;

constexpr bool __get_m_ValidatingLayout() const;

static ::System::Action_1<::UnityEngine::UIElements::Panel> __declspec(property(get=__get_beforeAnyRepaint, put=__set_beforeAnyRepaint))  beforeAnyRepaint;

static void __set_beforeAnyRepaint(::System::Action_1<::UnityEngine::UIElements::Panel> value) ;

static ::System::Action_1<::UnityEngine::UIElements::Panel> __get_beforeAnyRepaint() ;


// Properties

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=get_visualTree))  visualTree;

 ::UnityEngine::UIElements::EventDispatcher __declspec(property(get=get_dispatcher, put=set_dispatcher))  dispatcher;

 ::UnityEngine::UIElements::TimerEventScheduler __declspec(property(get=get_timerEventScheduler))  timerEventScheduler;

 ::UnityEngine::UIElements::IScheduler __declspec(property(get=get_scheduler))  scheduler;

 ::UnityEngine::UIElements::IStylePropertyAnimationSystem __declspec(property(get=get_styleAnimationSystem, put=set_styleAnimationSystem))  styleAnimationSystem;

 ::UnityEngine::ScriptableObject __declspec(property(get=get_ownerObject, put=set_ownerObject))  ownerObject;

 ::UnityEngine::UIElements::ContextType __declspec(property(get=get_contextType, put=set_contextType))  contextType;

 ::UnityEngine::UIElements::SavePersistentViewData __declspec(property(get=get_saveViewData))  saveViewData;

 ::UnityEngine::UIElements::GetViewDataDictionary __declspec(property(get=get_getViewDataDictionary))  getViewDataDictionary;

 ::UnityEngine::UIElements::FocusController __declspec(property(get=get_focusController, put=set_focusController))  focusController;

 ::UnityEngine::EventInterests __declspec(property(get=get_IMGUIEventInterests, put=set_IMGUIEventInterests))  IMGUIEventInterests;

static ::UnityEngine::UIElements::LoadResourceFunction __declspec(property(get=get_loadResourceFunc))  loadResourceFunc;

 ::StringW __declspec(property(get=get_name, put=set_name))  name;

static ::UnityEngine::UIElements::TimeMsFunction __declspec(property(get=get_TimeSinceStartup))  TimeSinceStartup;

 int32_t __declspec(property(get=get_IMGUIContainersCount, put=set_IMGUIContainersCount))  IMGUIContainersCount;

 ::UnityEngine::UIElements::IMGUIContainer __declspec(property(get=get_rootIMGUIContainer))  rootIMGUIContainer;

 uint32_t __declspec(property(get=get_version))  version;

 uint32_t __declspec(property(get=get_hierarchyVersion))  hierarchyVersion;

 ::UnityEngine::Shader __declspec(property(get=get_standardShader))  standardShader;

 ::UnityEngine::UIElements::AtlasBase __declspec(property(get=get_atlas, put=set_atlas))  atlas;


// Methods

/// @brief Method get_visualTree addr 0x2c5104c size 0x8 virtual true final true
 ::UnityEngine::UIElements::VisualElement get_visualTree() ;

/// @brief Method get_dispatcher addr 0x2c51054 size 0x8 virtual true final true
 ::UnityEngine::UIElements::EventDispatcher get_dispatcher() ;

/// @brief Method set_dispatcher addr 0x2c5105c size 0x8 virtual true final true
 void set_dispatcher(::UnityEngine::UIElements::EventDispatcher value) ;

/// @brief Method get_timerEventScheduler addr 0x2c51064 size 0x6c virtual false final false
 ::UnityEngine::UIElements::TimerEventScheduler get_timerEventScheduler() ;

/// @brief Method get_scheduler addr 0x2c510d0 size 0x4 virtual true final false
 ::UnityEngine::UIElements::IScheduler get_scheduler() ;

/// @brief Method get_styleAnimationSystem addr 0x2c510d4 size 0x8 virtual true final false
 ::UnityEngine::UIElements::IStylePropertyAnimationSystem get_styleAnimationSystem() ;

/// @brief Method set_styleAnimationSystem addr 0x2c510dc size 0xb4 virtual true final false
 void set_styleAnimationSystem(::UnityEngine::UIElements::IStylePropertyAnimationSystem value) ;

/// @brief Method get_ownerObject addr 0x2c51190 size 0x8 virtual true final false
 ::UnityEngine::ScriptableObject get_ownerObject() ;

/// @brief Method set_ownerObject addr 0x2c51198 size 0x8 virtual true final false
 void set_ownerObject(::UnityEngine::ScriptableObject value) ;

/// @brief Method get_contextType addr 0x2c511a0 size 0x8 virtual true final false
 ::UnityEngine::UIElements::ContextType get_contextType() ;

/// @brief Method set_contextType addr 0x2c511a8 size 0x8 virtual true final false
 void set_contextType(::UnityEngine::UIElements::ContextType value) ;

/// @brief Method get_saveViewData addr 0x2c511b0 size 0x8 virtual true final false
 ::UnityEngine::UIElements::SavePersistentViewData get_saveViewData() ;

/// @brief Method get_getViewDataDictionary addr 0x2c511b8 size 0x8 virtual true final false
 ::UnityEngine::UIElements::GetViewDataDictionary get_getViewDataDictionary() ;

/// @brief Method get_focusController addr 0x2c511c0 size 0x8 virtual true final true
 ::UnityEngine::UIElements::FocusController get_focusController() ;

/// @brief Method set_focusController addr 0x2c511c8 size 0x8 virtual true final true
 void set_focusController(::UnityEngine::UIElements::FocusController value) ;

/// @brief Method get_IMGUIEventInterests addr 0x2c511d0 size 0x10 virtual true final false
 ::UnityEngine::EventInterests get_IMGUIEventInterests() ;

/// @brief Method set_IMGUIEventInterests addr 0x2c511e0 size 0x10 virtual true final false
 void set_IMGUIEventInterests(::UnityEngine::EventInterests value) ;

/// @brief Method get_loadResourceFunc addr 0x2c511f0 size 0x58 virtual false final false
static ::UnityEngine::UIElements::LoadResourceFunction get_loadResourceFunc() ;

/// @brief Method LoadResource addr 0x2c51248 size 0x12c virtual false final false
static ::UnityEngine::Object LoadResource(::StringW pathName, ::System::Type type, float_t dpiScaling) ;

/// @brief Method Focus addr 0x2c3c46c size 0x2c virtual false final false
 void Focus() ;

/// @brief Method Blur addr 0x2c3c440 size 0x2c virtual false final false
 void Blur() ;

/// @brief Method get_name addr 0x2c51374 size 0x8 virtual false final false
 ::StringW get_name() ;

/// @brief Method set_name addr 0x2c5137c size 0x8 virtual false final false
 void set_name(::StringW value) ;

/// @brief Method CreateMarkers addr 0x2c51384 size 0x24c virtual false final false
 void CreateMarkers() ;

/// @brief Method get_TimeSinceStartup addr 0x2c515d0 size 0x58 virtual false final false
static ::UnityEngine::UIElements::TimeMsFunction get_TimeSinceStartup() ;

/// @brief Method get_IMGUIContainersCount addr 0x2c51628 size 0x8 virtual true final false
 int32_t get_IMGUIContainersCount() ;

/// @brief Method set_IMGUIContainersCount addr 0x2c51630 size 0x8 virtual true final false
 void set_IMGUIContainersCount(int32_t value) ;

/// @brief Method get_rootIMGUIContainer addr 0x2c51638 size 0x8 virtual true final false
 ::UnityEngine::UIElements::IMGUIContainer get_rootIMGUIContainer() ;

/// @brief Method get_version addr 0x2c51640 size 0x8 virtual true final false
 uint32_t get_version() ;

/// @brief Method get_hierarchyVersion addr 0x2c51648 size 0x8 virtual true final false
 uint32_t get_hierarchyVersion() ;

/// @brief Method get_standardShader addr 0x2c51650 size 0x8 virtual true final false
 ::UnityEngine::Shader get_standardShader() ;

/// @brief Method get_atlas addr 0x2c51658 size 0x8 virtual true final false
 ::UnityEngine::UIElements::AtlasBase get_atlas() ;

/// @brief Method set_atlas addr 0x2c51660 size 0x74 virtual true final false
 void set_atlas(::UnityEngine::UIElements::AtlasBase value) ;

// Ctor Parameters [CppParam { name: "ownerObject", ty: "::UnityEngine::ScriptableObject", modifiers: "", def_value: None }, CppParam { name: "contextType", ty: "::UnityEngine::UIElements::ContextType", modifiers: "", def_value: None }, CppParam { name: "dispatcher", ty: "::UnityEngine::UIElements::EventDispatcher", modifiers: "", def_value: None }]
explicit Panel(::UnityEngine::ScriptableObject ownerObject, ::UnityEngine::UIElements::ContextType contextType, ::UnityEngine::UIElements::EventDispatcher dispatcher) ;

/// @brief Method .ctor addr 0x2c516d4 size 0x38c virtual false final false
 void _ctor(::UnityEngine::ScriptableObject ownerObject, ::UnityEngine::UIElements::ContextType contextType, ::UnityEngine::UIElements::EventDispatcher dispatcher) ;

/// @brief Method Dispose addr 0x2c51a60 size 0x68 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method TimeSinceStartupMs addr 0x2c3e984 size 0xdc virtual false final false
static int64_t TimeSinceStartupMs() ;

/// @brief Method DefaultTimeSinceStartupMs addr 0x2c51ac8 size 0x38 virtual false final false
static int64_t DefaultTimeSinceStartupMs() ;

/// @brief Method PickAll addr 0x2c51b00 size 0x7c virtual false final false
static ::UnityEngine::UIElements::VisualElement PickAll(::UnityEngine::UIElements::VisualElement root, ::UnityEngine::Vector2 point, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement> picked) ;

/// @brief Method PerformPick addr 0x2c51b7c size 0x2e4 virtual false final false
static ::UnityEngine::UIElements::VisualElement PerformPick(::UnityEngine::UIElements::VisualElement root, ::UnityEngine::Vector2 point, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement> picked) ;

/// @brief Method PickAll addr 0x2c51e60 size 0xd8 virtual true final false
 ::UnityEngine::UIElements::VisualElement PickAll(::UnityEngine::Vector2 point, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement> picked) ;

/// @brief Method Pick addr 0x2c51f38 size 0x174 virtual true final false
 ::UnityEngine::UIElements::VisualElement Pick(::UnityEngine::Vector2 point) ;

/// @brief Method ValidateLayout addr 0x2c521a4 size 0x64 virtual true final false
 void ValidateLayout() ;

/// @brief Method UpdateAnimations addr 0x2c52208 size 0x20 virtual true final false
 void UpdateAnimations() ;

/// @brief Method UpdateBindings addr 0x2c52228 size 0x20 virtual true final false
 void UpdateBindings() ;

/// @brief Method ApplyStyles addr 0x2c52248 size 0x20 virtual true final false
 void ApplyStyles() ;

/// @brief Method UpdateForRepaint addr 0x2c52268 size 0x74 virtual false final false
 void UpdateForRepaint() ;

/// @brief Method Repaint addr 0x2c522dc size 0x384 virtual true final false
 void Repaint(::UnityEngine::Event e) ;

/// @brief Method OnVersionChanged addr 0x2c52660 size 0x4c virtual true final false
 void OnVersionChanged(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType) ;

/// @brief Method GetUpdater addr 0x2c526ac size 0x1c virtual true final false
 ::UnityEngine::UIElements::IVisualTreeUpdater GetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase phase) ;

/// @brief Method <Pick>g__PixelOf|99_0 addr 0x2c520ac size 0xf8 virtual false final false
static ::UnityEngine::Vector2Int _Pick_g__PixelOf_99_0(::UnityEngine::Vector2 p) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::Panel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Panel, "UnityEngine.UIElements", "Panel");
