#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::UIElements {
class PanelSettings;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__UIElementsRuntimeUtility__CreateRuntimePanelDelegate;
}
namespace UnityEngine::UIElements {
class Panel;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__UIElementsRuntimeUtility____c;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class DefaultEventSystem;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine::UIElements {
class BaseRuntimePanel;
}
namespace System {
template<typename T>
class Comparison_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIElementsRuntimeUtility;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__UIElementsRuntimeUtility__CreateRuntimePanelDelegate;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__UIElementsRuntimeUtility____c;
}
// Type: ::CreateRuntimePanelDelegate
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7020))
// CS Name: UnityEngine.UIElements.UIElementsRuntimeUtility::CreateRuntimePanelDelegate
class CORDL_TYPE UnityEngine__UIElements__UIElementsRuntimeUtility__CreateRuntimePanelDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__UIElements__UIElementsRuntimeUtility__CreateRuntimePanelDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIElementsRuntimeUtility__CreateRuntimePanelDelegate", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UIElementsRuntimeUtility__CreateRuntimePanelDelegate(UnityEngine__UIElements__UIElementsRuntimeUtility__CreateRuntimePanelDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIElementsRuntimeUtility__CreateRuntimePanelDelegate", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UIElementsRuntimeUtility__CreateRuntimePanelDelegate(UnityEngine__UIElements__UIElementsRuntimeUtility__CreateRuntimePanelDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIElementsRuntimeUtility__CreateRuntimePanelDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__UIElements__UIElementsRuntimeUtility__CreateRuntimePanelDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIElementsRuntimeUtility__CreateRuntimePanelDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIElementsRuntimeUtility__CreateRuntimePanelDelegate& operator=(UnityEngine__UIElements__UIElementsRuntimeUtility__CreateRuntimePanelDelegate&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UIElementsRuntimeUtility__CreateRuntimePanelDelegate& operator=(UnityEngine__UIElements__UIElementsRuntimeUtility__CreateRuntimePanelDelegate const& o) noexcept = default;
                


// Methods

static UnityEngine::UIElements::UnityEngine__UIElements__UIElementsRuntimeUtility__CreateRuntimePanelDelegate New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2c8e92c size 0x12c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2c8ea58 size 0x14 virtual true final false
 UnityEngine::UIElements::BaseRuntimePanel Invoke(UnityEngine::ScriptableObject ownerObject) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::<>c
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7021))
// CS Name: UnityEngine.UIElements.UIElementsRuntimeUtility::<>c
class CORDL_TYPE UnityEngine__UIElements__UIElementsRuntimeUtility____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__UIElementsRuntimeUtility____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIElementsRuntimeUtility____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UIElementsRuntimeUtility____c(UnityEngine__UIElements__UIElementsRuntimeUtility____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIElementsRuntimeUtility____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UIElementsRuntimeUtility____c(UnityEngine__UIElements__UIElementsRuntimeUtility____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIElementsRuntimeUtility____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__UIElementsRuntimeUtility____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIElementsRuntimeUtility____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIElementsRuntimeUtility____c& operator=(UnityEngine__UIElements__UIElementsRuntimeUtility____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UIElementsRuntimeUtility____c& operator=(UnityEngine__UIElements__UIElementsRuntimeUtility____c const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::UnityEngine__UIElements__UIElementsRuntimeUtility____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::UIElements::UnityEngine__UIElements__UIElementsRuntimeUtility____c value) ;

static UnityEngine::UIElements::UnityEngine__UIElements__UIElementsRuntimeUtility____c __get___9() ;

static System::Comparison_1<UnityEngine::UIElements::Panel> __declspec(property(get=__get___9__46_0, put=__set___9__46_0))  __9__46_0;

static void __set___9__46_0(System::Comparison_1<UnityEngine::UIElements::Panel> value) ;

static System::Comparison_1<UnityEngine::UIElements::Panel> __get___9__46_0() ;


// Methods

static UnityEngine::UIElements::UnityEngine__UIElements__UIElementsRuntimeUtility____c New_ctor() ;

/// @brief Method .ctor addr 0x2c8ead0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__9_0 addr 0x2c8ead8 size 0x4 virtual false final false
 void __cctor_b__9_0() ;

/// @brief Method <.cctor>b__9_1 addr 0x2c8eadc size 0x64 virtual false final false
 void __cctor_b__9_1(int32_t displayIndex, int32_t sortOrder) ;

/// @brief Method <SortPanels>b__46_0 addr 0x2c8eb40 size 0x170 virtual false final false
 int32_t _SortPanels_b__46_0(UnityEngine::UIElements::Panel a, UnityEngine::UIElements::Panel b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::UIElementsRuntimeUtility
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7022))
// CS Name: UnityEngine.UIElements.UIElementsRuntimeUtility
class CORDL_TYPE UIElementsRuntimeUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::UIElements::UnityEngine__UIElements__UIElementsRuntimeUtility____c;

using CreateRuntimePanelDelegate = UnityEngine::UIElements::UnityEngine__UIElements__UIElementsRuntimeUtility__CreateRuntimePanelDelegate;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UIElementsRuntimeUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIElementsRuntimeUtility", modifiers: " const&", def_value: None }]
constexpr UIElementsRuntimeUtility(UIElementsRuntimeUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIElementsRuntimeUtility", modifiers: "&&", def_value: None }]
constexpr UIElementsRuntimeUtility(UIElementsRuntimeUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIElementsRuntimeUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UIElementsRuntimeUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UIElementsRuntimeUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UIElementsRuntimeUtility& operator=(UIElementsRuntimeUtility&& o) noexcept = default;
  constexpr UIElementsRuntimeUtility& operator=(UIElementsRuntimeUtility const& o) noexcept = default;
                


// Fields

static System::Action_1<UnityEngine::UIElements::BaseRuntimePanel> __declspec(property(get=__get_onCreatePanel, put=__set_onCreatePanel))  onCreatePanel;

static void __set_onCreatePanel(System::Action_1<UnityEngine::UIElements::BaseRuntimePanel> value) ;

static System::Action_1<UnityEngine::UIElements::BaseRuntimePanel> __get_onCreatePanel() ;

static bool __declspec(property(get=__get_s_RegisteredPlayerloopCallback, put=__set_s_RegisteredPlayerloopCallback))  s_RegisteredPlayerloopCallback;

static void __set_s_RegisteredPlayerloopCallback(bool value) ;

static bool __get_s_RegisteredPlayerloopCallback() ;

static System::Collections::Generic::List_1<UnityEngine::UIElements::Panel> __declspec(property(get=__get_s_SortedRuntimePanels, put=__set_s_SortedRuntimePanels))  s_SortedRuntimePanels;

static void __set_s_SortedRuntimePanels(System::Collections::Generic::List_1<UnityEngine::UIElements::Panel> value) ;

static System::Collections::Generic::List_1<UnityEngine::UIElements::Panel> __get_s_SortedRuntimePanels() ;

static bool __declspec(property(get=__get_s_PanelOrderingDirty, put=__set_s_PanelOrderingDirty))  s_PanelOrderingDirty;

static void __set_s_PanelOrderingDirty(bool value) ;

static bool __get_s_PanelOrderingDirty() ;

static ::StringW __declspec(property(get=__get_s_RepaintProfilerMarkerName, put=__set_s_RepaintProfilerMarkerName))  s_RepaintProfilerMarkerName;

static void __set_s_RepaintProfilerMarkerName(::StringW value) ;

static ::StringW __get_s_RepaintProfilerMarkerName() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_RepaintProfilerMarker, put=__set_s_RepaintProfilerMarker))  s_RepaintProfilerMarker;

static void __set_s_RepaintProfilerMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_RepaintProfilerMarker() ;

static int32_t __declspec(property(get=__get_currentOverlayIndex, put=__set_currentOverlayIndex))  currentOverlayIndex;

static void __set_currentOverlayIndex(int32_t value) ;

static int32_t __get_currentOverlayIndex() ;

static UnityEngine::Object __declspec(property(get=__get__activeEventSystem_k__BackingField, put=__set__activeEventSystem_k__BackingField))  _activeEventSystem_k__BackingField;

static void __set__activeEventSystem_k__BackingField(UnityEngine::Object value) ;

static UnityEngine::Object __get__activeEventSystem_k__BackingField() ;

static UnityEngine::UIElements::DefaultEventSystem __declspec(property(get=__get_s_DefaultEventSystem, put=__set_s_DefaultEventSystem))  s_DefaultEventSystem;

static void __set_s_DefaultEventSystem(UnityEngine::UIElements::DefaultEventSystem value) ;

static UnityEngine::UIElements::DefaultEventSystem __get_s_DefaultEventSystem() ;

static System::Collections::Generic::List_1<UnityEngine::UIElements::PanelSettings> __declspec(property(get=__get_s_PotentiallyEmptyPanelSettings, put=__set_s_PotentiallyEmptyPanelSettings))  s_PotentiallyEmptyPanelSettings;

static void __set_s_PotentiallyEmptyPanelSettings(System::Collections::Generic::List_1<UnityEngine::UIElements::PanelSettings> value) ;

static System::Collections::Generic::List_1<UnityEngine::UIElements::PanelSettings> __get_s_PotentiallyEmptyPanelSettings() ;


// Properties

static UnityEngine::Object __declspec(property(get=get_activeEventSystem, put=set_activeEventSystem))  activeEventSystem;

static bool __declspec(property(get=get_useDefaultEventSystem))  useDefaultEventSystem;

static UnityEngine::UIElements::DefaultEventSystem __declspec(property(get=get_defaultEventSystem))  defaultEventSystem;


// Methods

/// @brief Method add_onCreatePanel addr 0x2c8ca38 size 0xf0 virtual false final false
static void add_onCreatePanel(System::Action_1<UnityEngine::UIElements::BaseRuntimePanel> value) ;

/// @brief Method remove_onCreatePanel addr 0x2c8cb28 size 0xf0 virtual false final false
static void remove_onCreatePanel(System::Action_1<UnityEngine::UIElements::BaseRuntimePanel> value) ;

/// @brief Method CreateEvent addr 0x2c8cf4c size 0x74 virtual false final false
static UnityEngine::UIElements::EventBase CreateEvent(UnityEngine::Event systemEvent) ;

/// @brief Method FindOrCreateRuntimePanel addr 0x2c8cfc0 size 0x19c virtual false final false
static UnityEngine::UIElements::BaseRuntimePanel FindOrCreateRuntimePanel(UnityEngine::ScriptableObject ownerObject, UnityEngine::UIElements::UnityEngine__UIElements__UIElementsRuntimeUtility__CreateRuntimePanelDelegate createDelegate) ;

/// @brief Method DisposeRuntimePanel addr 0x2c8d3b0 size 0xd0 virtual false final false
static void DisposeRuntimePanel(UnityEngine::ScriptableObject ownerObject) ;

/// @brief Method RegisterCachedPanelInternal addr 0x2c8d28c size 0x124 virtual false final false
static void RegisterCachedPanelInternal(int32_t instanceID, UnityEngine::UIElements::IPanel panel) ;

/// @brief Method RemoveCachedPanelInternal addr 0x2c8d15c size 0x130 virtual false final false
static void RemoveCachedPanelInternal(int32_t instanceID) ;

/// @brief Method RepaintOverlayPanel addr 0x2c8d56c size 0x1c0 virtual false final false
static void RepaintOverlayPanel(UnityEngine::UIElements::BaseRuntimePanel panel) ;

/// @brief Method BeginRenderOverlays addr 0x2c8d72c size 0x58 virtual false final false
static void BeginRenderOverlays(int32_t displayIndex) ;

/// @brief Method RenderOverlaysBeforePriority addr 0x2c8d784 size 0x1b0 virtual false final false
static void RenderOverlaysBeforePriority(int32_t displayIndex, float_t maxPriority) ;

/// @brief Method EndRenderOverlays addr 0x2c8d9bc size 0x70 virtual false final false
static void EndRenderOverlays(int32_t displayIndex) ;

/// @brief Method get_activeEventSystem addr 0x2c8da2c size 0x58 virtual false final false
static UnityEngine::Object get_activeEventSystem() ;

/// @brief Method set_activeEventSystem addr 0x2c8da84 size 0x5c virtual false final false
static void set_activeEventSystem(UnityEngine::Object value) ;

/// @brief Method get_useDefaultEventSystem addr 0x2c8dae0 size 0xbc virtual false final false
static bool get_useDefaultEventSystem() ;

/// @brief Method RegisterEventSystem addr 0x2c8db9c size 0x218 virtual false final false
static void RegisterEventSystem(UnityEngine::Object eventSystem) ;

/// @brief Method UnregisterEventSystem addr 0x2c8ddb4 size 0x114 virtual false final false
static void UnregisterEventSystem(UnityEngine::Object eventSystem) ;

/// @brief Method get_defaultEventSystem addr 0x2c8dec8 size 0xac virtual false final false
static UnityEngine::UIElements::DefaultEventSystem get_defaultEventSystem() ;

/// @brief Method UpdateRuntimePanels addr 0x2c8df74 size 0x21c virtual false final false
static void UpdateRuntimePanels() ;

/// @brief Method MarkPotentiallyEmpty addr 0x2c8e394 size 0x114 virtual false final false
static void MarkPotentiallyEmpty(UnityEngine::UIElements::PanelSettings settings) ;

/// @brief Method RemoveUnusedPanels addr 0x2c8e190 size 0x204 virtual false final false
static void RemoveUnusedPanels() ;

/// @brief Method RegisterPlayerloopCallback addr 0x2c8d480 size 0x9c virtual false final false
static void RegisterPlayerloopCallback() ;

/// @brief Method UnregisterPlayerloopCallback addr 0x2c8d51c size 0x50 virtual false final false
static void UnregisterPlayerloopCallback() ;

/// @brief Method SetPanelOrderingDirty addr 0x2c80268 size 0x5c virtual false final false
static void SetPanelOrderingDirty() ;

/// @brief Method GetSortedPlayerPanels addr 0x2c8d934 size 0x88 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::UIElements::Panel> GetSortedPlayerPanels() ;

/// @brief Method SortPanels addr 0x2c8e4a8 size 0x1c4 virtual false final false
static void SortPanels() ;

/// @brief Method MultiDisplayBottomLeftToPanelPosition addr 0x2c8e66c size 0x80 virtual false final false
static UnityEngine::Vector2 MultiDisplayBottomLeftToPanelPosition(UnityEngine::Vector2 position, ByRef<System::Nullable_1<int32_t>> targetDisplay) ;

/// @brief Method MultiDisplayToLocalScreenPosition addr 0x2c8e6ec size 0x154 virtual false final false
static UnityEngine::Vector2 MultiDisplayToLocalScreenPosition(UnityEngine::Vector2 position, ByRef<System::Nullable_1<int32_t>> targetDisplay) ;

/// @brief Method ScreenBottomLeftToPanelPosition addr 0x2c8e840 size 0xe4 virtual false final false
static UnityEngine::Vector2 ScreenBottomLeftToPanelPosition(UnityEngine::Vector2 position, int32_t targetDisplay) ;

/// @brief Method ScreenBottomLeftToPanelDelta addr 0x2c8e924 size 0x8 virtual false final false
static UnityEngine::Vector2 ScreenBottomLeftToPanelDelta(UnityEngine::Vector2 delta) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::UIElementsRuntimeUtility);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIElementsRuntimeUtility, "UnityEngine.UIElements", "UIElementsRuntimeUtility");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__UIElementsRuntimeUtility__CreateRuntimePanelDelegate);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__UIElementsRuntimeUtility__CreateRuntimePanelDelegate, "UnityEngine.UIElements", "UIElementsRuntimeUtility/CreateRuntimePanelDelegate");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__UIElementsRuntimeUtility____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__UIElementsRuntimeUtility____c, "UnityEngine.UIElements", "UIElementsRuntimeUtility/<>c");
