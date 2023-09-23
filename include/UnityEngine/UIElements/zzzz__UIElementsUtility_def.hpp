#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::UIElements {
class Panel;
}
namespace UnityEngine::UIElements {
class IMGUIContainer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements {
class IUIElementsUtility;
}
namespace UnityEngine {
struct Color;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace UnityEngine {
class UnityEngine__GUILayoutUtility__LayoutCache;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct System__Collections__Generic__Dictionary_2__Enumerator;
}
namespace UnityEngine::UIElements {
struct ContextType;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace System {
class Exception;
}
namespace UnityEngine {
struct EventType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIElementsUtility;
}
// Type: UnityEngine.UIElements::UIElementsUtility
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6988))
// CS Name: UnityEngine.UIElements.UIElementsUtility
class CORDL_TYPE UIElementsUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::IUIElementsUtility
constexpr operator  UnityEngine::UIElements::IUIElementsUtility() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UIElementsUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIElementsUtility", modifiers: " const&", def_value: None }]
constexpr UIElementsUtility(UIElementsUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIElementsUtility", modifiers: "&&", def_value: None }]
constexpr UIElementsUtility(UIElementsUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIElementsUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UIElementsUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UIElementsUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UIElementsUtility& operator=(UIElementsUtility&& o) noexcept = default;
  constexpr UIElementsUtility& operator=(UIElementsUtility const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::Stack_1<UnityEngine::UIElements::IMGUIContainer> __declspec(property(get=__get_s_ContainerStack, put=__set_s_ContainerStack))  s_ContainerStack;

static void __set_s_ContainerStack(System::Collections::Generic::Stack_1<UnityEngine::UIElements::IMGUIContainer> value) ;

static System::Collections::Generic::Stack_1<UnityEngine::UIElements::IMGUIContainer> __get_s_ContainerStack() ;

static System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::UIElements::Panel> __declspec(property(get=__get_s_UIElementsCache, put=__set_s_UIElementsCache))  s_UIElementsCache;

static void __set_s_UIElementsCache(System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::UIElements::Panel> value) ;

static System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::UIElements::Panel> __get_s_UIElementsCache() ;

static UnityEngine::Event __declspec(property(get=__get_s_EventInstance, put=__set_s_EventInstance))  s_EventInstance;

static void __set_s_EventInstance(UnityEngine::Event value) ;

static UnityEngine::Event __get_s_EventInstance() ;

static UnityEngine::Color __declspec(property(get=__get_editorPlayModeTintColor, put=__set_editorPlayModeTintColor))  editorPlayModeTintColor;

static void __set_editorPlayModeTintColor(UnityEngine::Color value) ;

static UnityEngine::Color __get_editorPlayModeTintColor() ;

static float_t __declspec(property(get=__get_singleLineHeight, put=__set_singleLineHeight))  singleLineHeight;

static void __set_singleLineHeight(float_t value) ;

static float_t __get_singleLineHeight() ;

static UnityEngine::UIElements::UIElementsUtility __declspec(property(get=__get_s_Instance, put=__set_s_Instance))  s_Instance;

static void __set_s_Instance(UnityEngine::UIElements::UIElementsUtility value) ;

static UnityEngine::UIElements::UIElementsUtility __get_s_Instance() ;

static System::Collections::Generic::List_1<UnityEngine::UIElements::Panel> __declspec(property(get=__get_s_PanelsIterationList, put=__set_s_PanelsIterationList))  s_PanelsIterationList;

static void __set_s_PanelsIterationList(System::Collections::Generic::List_1<UnityEngine::UIElements::Panel> value) ;

static System::Collections::Generic::List_1<UnityEngine::UIElements::Panel> __get_s_PanelsIterationList() ;

static ::StringW __declspec(property(get=__get_s_RepaintProfilerMarkerName, put=__set_s_RepaintProfilerMarkerName))  s_RepaintProfilerMarkerName;

static void __set_s_RepaintProfilerMarkerName(::StringW value) ;

static ::StringW __get_s_RepaintProfilerMarkerName() ;

static ::StringW __declspec(property(get=__get_s_EventProfilerMarkerName, put=__set_s_EventProfilerMarkerName))  s_EventProfilerMarkerName;

static void __set_s_EventProfilerMarkerName(::StringW value) ;

static ::StringW __get_s_EventProfilerMarkerName() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_RepaintProfilerMarker, put=__set_s_RepaintProfilerMarker))  s_RepaintProfilerMarker;

static void __set_s_RepaintProfilerMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_RepaintProfilerMarker() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_EventProfilerMarker, put=__set_s_EventProfilerMarker))  s_EventProfilerMarker;

static void __set_s_EventProfilerMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_EventProfilerMarker() ;


// Methods

// Ctor Parameters []
explicit UIElementsUtility() ;

/// @brief Method .ctor addr 0x2c843ec size 0x60 virtual false final false
 void _ctor() ;

/// @brief Method UnityEngine.UIElements.IUIElementsUtility.MakeCurrentIMGUIContainerDirty addr 0x2c8444c size 0xd8 virtual true final true
 bool UnityEngine_UIElements_IUIElementsUtility_MakeCurrentIMGUIContainerDirty() ;

/// @brief Method UnityEngine.UIElements.IUIElementsUtility.TakeCapture addr 0x2c84538 size 0x16c virtual true final true
 bool UnityEngine_UIElements_IUIElementsUtility_TakeCapture() ;

/// @brief Method UnityEngine.UIElements.IUIElementsUtility.ReleaseCapture addr 0x2c84784 size 0x8 virtual true final true
 bool UnityEngine_UIElements_IUIElementsUtility_ReleaseCapture() ;

/// @brief Method UnityEngine.UIElements.IUIElementsUtility.ProcessEvent addr 0x2c8478c size 0x140 virtual true final true
 bool UnityEngine_UIElements_IUIElementsUtility_ProcessEvent(int32_t instanceID, ::cordl_internals::intptr_t nativeEventPtr, ByRef<bool> eventHandled) ;

/// @brief Method UnityEngine.UIElements.IUIElementsUtility.CleanupRoots addr 0x2c84f5c size 0x60 virtual true final true
 bool UnityEngine_UIElements_IUIElementsUtility_CleanupRoots() ;

/// @brief Method UnityEngine.UIElements.IUIElementsUtility.EndContainerGUIFromException addr 0x2c84fbc size 0xc0 virtual true final true
 bool UnityEngine_UIElements_IUIElementsUtility_EndContainerGUIFromException(System::Exception exception) ;

/// @brief Method RegisterCachedPanel addr 0x2c8507c size 0x90 virtual false final false
static void RegisterCachedPanel(int32_t instanceID, UnityEngine::UIElements::Panel panel) ;

/// @brief Method RemoveCachedPanel addr 0x2c8510c size 0x80 virtual false final false
static void RemoveCachedPanel(int32_t instanceID) ;

/// @brief Method TryGetPanel addr 0x2c8518c size 0x90 virtual false final false
static bool TryGetPanel(int32_t instanceID, ByRef<UnityEngine::UIElements::Panel> panel) ;

/// @brief Method BeginContainerGUI addr 0x2c8521c size 0x1cc virtual false final false
static void BeginContainerGUI(UnityEngine::UnityEngine__GUILayoutUtility__LayoutCache cache, UnityEngine::Event evt, UnityEngine::UIElements::IMGUIContainer container) ;

/// @brief Method EndContainerGUI addr 0x2c8548c size 0x224 virtual false final false
static void EndContainerGUI(UnityEngine::Event evt, UnityEngine::Rect layoutSize) ;

/// @brief Method CreateEvent addr 0x2c856b0 size 0x74 virtual false final false
static UnityEngine::UIElements::EventBase CreateEvent(UnityEngine::Event systemEvent) ;

/// @brief Method CreateEvent addr 0x2c85724 size 0x29c virtual false final false
static UnityEngine::UIElements::EventBase CreateEvent(UnityEngine::Event systemEvent, UnityEngine::EventType eventType) ;

/// @brief Method DoDispatch addr 0x2c848cc size 0x690 virtual false final false
static bool DoDispatch(UnityEngine::UIElements::BaseVisualElementPanel panel) ;

/// @brief Method GetAllPanels addr 0x2c859c0 size 0x158 virtual false final false
static void GetAllPanels(System::Collections::Generic::List_1<UnityEngine::UIElements::Panel> panels, UnityEngine::UIElements::ContextType contextType) ;

/// @brief Method GetPanelsIterator addr 0x2c85b18 size 0xa8 virtual false final false
static System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<int32_t,UnityEngine::UIElements::Panel> GetPanelsIterator() ;

/// @brief Method PixelsPerUnitScaleForElement addr 0x2c85bc0 size 0xa8 virtual false final false
static float_t PixelsPerUnitScaleForElement(UnityEngine::UIElements::VisualElement ve, UnityEngine::Sprite sprite) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::UIElementsUtility);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIElementsUtility, "UnityEngine.UIElements", "UIElementsUtility");
