#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::UIElements {
class UxmlChildElementDescription;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__VisualElement__MeasureMode;
}
namespace System {
class Action;
}
namespace UnityEngine {
class ____UnityEngine__GUILayoutUtility__LayoutCache;
}
namespace UnityEngine::UIElements {
class FocusChangeDirection;
}
namespace UnityEngine::UIElements {
class MeshGenerationContext;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
class ObjectGUIState;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements {
struct ContextType;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine {
struct Vector2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ______UnityEngine__UIElements__IMGUIContainer__UxmlTraits___get_uxmlChildElementsDescription_d__2;
}
namespace UnityEngine::UIElements {
class IMGUIContainer;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__IMGUIContainer__UxmlFactory;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__IMGUIContainer__UxmlTraits;
}
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__IMGUIContainer__GUIGlobals;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6821))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6994))
// CS Name: UnityEngine.UIElements.IMGUIContainer::UxmlTraits
class CORDL_TYPE ____UnityEngine__UIElements__IMGUIContainer__UxmlTraits : public ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElement__UxmlTraits {
public:
// Declarations
using _get_uxmlChildElementsDescription_d__2 = ::GlobalNamespace::______UnityEngine__UIElements__IMGUIContainer__UxmlTraits___get_uxmlChildElementsDescription_d__2;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~____UnityEngine__UIElements__IMGUIContainer__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__IMGUIContainer__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__IMGUIContainer__UxmlTraits(____UnityEngine__UIElements__IMGUIContainer__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__IMGUIContainer__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__IMGUIContainer__UxmlTraits(____UnityEngine__UIElements__IMGUIContainer__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__IMGUIContainer__UxmlTraits(void* ptr) noexcept : ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElement__UxmlTraits(ptr) {
}


  constexpr ____UnityEngine__UIElements__IMGUIContainer__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__IMGUIContainer__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__IMGUIContainer__UxmlTraits& operator=(____UnityEngine__UIElements__IMGUIContainer__UxmlTraits&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__IMGUIContainer__UxmlTraits& operator=(____UnityEngine__UIElements__IMGUIContainer__UxmlTraits const& o) noexcept = default;
                


// Properties

 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlChildElementDescription> __declspec(property(get=get_uxmlChildElementsDescription))  uxmlChildElementsDescription;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__UIElements__IMGUIContainer__UxmlTraits() ;

/// @brief Method .ctor addr 0x2c898a4 size 0x70 virtual false final false
 void _ctor() ;

/// @brief Method get_uxmlChildElementsDescription addr 0x2c89914 size 0x64 virtual true final false
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlChildElementDescription> get_uxmlChildElementsDescription() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::IMGUIContainer
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6828))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6996))
// CS Name: UnityEngine.UIElements.IMGUIContainer
class CORDL_TYPE IMGUIContainer : public ::UnityEngine::UIElements::VisualElement {
public:
// Declarations
using GUIGlobals = ::UnityEngine::UIElements::____UnityEngine__UIElements__IMGUIContainer__GUIGlobals;

using UxmlTraits = ::UnityEngine::UIElements::____UnityEngine__UIElements__IMGUIContainer__UxmlTraits;

using UxmlFactory = ::UnityEngine::UIElements::____UnityEngine__UIElements__IMGUIContainer__UxmlFactory;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x4c8};

virtual ~IMGUIContainer() = default;

// Ctor Parameters [CppParam { name: "", ty: "IMGUIContainer", modifiers: " const&", def_value: None }]
constexpr IMGUIContainer(IMGUIContainer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IMGUIContainer", modifiers: "&&", def_value: None }]
constexpr IMGUIContainer(IMGUIContainer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMGUIContainer(void* ptr) noexcept : ::UnityEngine::UIElements::VisualElement(ptr) {
}


  constexpr IMGUIContainer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IMGUIContainer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IMGUIContainer& operator=(IMGUIContainer&& o) noexcept = default;
  constexpr IMGUIContainer& operator=(IMGUIContainer const& o) noexcept = default;
                


// Fields

 ::System::Action __declspec(property(get=__get_m_OnGUIHandler, put=__set_m_OnGUIHandler))  m_OnGUIHandler;

constexpr void __set_m_OnGUIHandler(::System::Action value) ;

constexpr ::System::Action __get_m_OnGUIHandler() const;

 ::UnityEngine::ObjectGUIState __declspec(property(get=__get_m_ObjectGUIState, put=__set_m_ObjectGUIState))  m_ObjectGUIState;

constexpr void __set_m_ObjectGUIState(::UnityEngine::ObjectGUIState value) ;

constexpr ::UnityEngine::ObjectGUIState __get_m_ObjectGUIState() const;

 bool __declspec(property(get=__get_useOwnerObjectGUIState, put=__set_useOwnerObjectGUIState))  useOwnerObjectGUIState;

constexpr void __set_useOwnerObjectGUIState(bool value) ;

constexpr bool __get_useOwnerObjectGUIState() const;

 ::UnityEngine::Rect __declspec(property(get=__get__lastWorldClip_k__BackingField, put=__set__lastWorldClip_k__BackingField))  _lastWorldClip_k__BackingField;

constexpr void __set__lastWorldClip_k__BackingField(::UnityEngine::Rect value) ;

constexpr ::UnityEngine::Rect __get__lastWorldClip_k__BackingField() const;

 bool __declspec(property(get=__get_m_CullingEnabled, put=__set_m_CullingEnabled))  m_CullingEnabled;

constexpr void __set_m_CullingEnabled(bool value) ;

constexpr bool __get_m_CullingEnabled() const;

 bool __declspec(property(get=__get_m_IsFocusDelegated, put=__set_m_IsFocusDelegated))  m_IsFocusDelegated;

constexpr void __set_m_IsFocusDelegated(bool value) ;

constexpr bool __get_m_IsFocusDelegated() const;

 bool __declspec(property(get=__get_m_RefreshCachedLayout, put=__set_m_RefreshCachedLayout))  m_RefreshCachedLayout;

constexpr void __set_m_RefreshCachedLayout(bool value) ;

constexpr bool __get_m_RefreshCachedLayout() const;

 ::UnityEngine::____UnityEngine__GUILayoutUtility__LayoutCache __declspec(property(get=__get_m_Cache, put=__set_m_Cache))  m_Cache;

constexpr void __set_m_Cache(::UnityEngine::____UnityEngine__GUILayoutUtility__LayoutCache value) ;

constexpr ::UnityEngine::____UnityEngine__GUILayoutUtility__LayoutCache __get_m_Cache() const;

 ::UnityEngine::Rect __declspec(property(get=__get_m_CachedClippingRect, put=__set_m_CachedClippingRect))  m_CachedClippingRect;

constexpr void __set_m_CachedClippingRect(::UnityEngine::Rect value) ;

constexpr ::UnityEngine::Rect __get_m_CachedClippingRect() const;

 ::UnityEngine::Matrix4x4 __declspec(property(get=__get_m_CachedTransform, put=__set_m_CachedTransform))  m_CachedTransform;

constexpr void __set_m_CachedTransform(::UnityEngine::Matrix4x4 value) ;

constexpr ::UnityEngine::Matrix4x4 __get_m_CachedTransform() const;

 ::UnityEngine::UIElements::ContextType __declspec(property(get=__get__contextType_k__BackingField, put=__set__contextType_k__BackingField))  _contextType_k__BackingField;

constexpr void __set__contextType_k__BackingField(::UnityEngine::UIElements::ContextType value) ;

constexpr ::UnityEngine::UIElements::ContextType __get__contextType_k__BackingField() const;

 bool __declspec(property(get=__get_lostFocus, put=__set_lostFocus))  lostFocus;

constexpr void __set_lostFocus(bool value) ;

constexpr bool __get_lostFocus() const;

 bool __declspec(property(get=__get_receivedFocus, put=__set_receivedFocus))  receivedFocus;

constexpr void __set_receivedFocus(bool value) ;

constexpr bool __get_receivedFocus() const;

 ::UnityEngine::UIElements::FocusChangeDirection __declspec(property(get=__get_focusChangeDirection, put=__set_focusChangeDirection))  focusChangeDirection;

constexpr void __set_focusChangeDirection(::UnityEngine::UIElements::FocusChangeDirection value) ;

constexpr ::UnityEngine::UIElements::FocusChangeDirection __get_focusChangeDirection() const;

 bool __declspec(property(get=__get_hasFocusableControls, put=__set_hasFocusableControls))  hasFocusableControls;

constexpr void __set_hasFocusableControls(bool value) ;

constexpr bool __get_hasFocusableControls() const;

 int32_t __declspec(property(get=__get_newKeyboardFocusControlID, put=__set_newKeyboardFocusControlID))  newKeyboardFocusControlID;

constexpr void __set_newKeyboardFocusControlID(int32_t value) ;

constexpr int32_t __get_newKeyboardFocusControlID() const;

 bool __declspec(property(get=__get__focusOnlyIfHasFocusableControls_k__BackingField, put=__set__focusOnlyIfHasFocusableControls_k__BackingField))  _focusOnlyIfHasFocusableControls_k__BackingField;

constexpr void __set__focusOnlyIfHasFocusableControls_k__BackingField(bool value) ;

constexpr bool __get__focusOnlyIfHasFocusableControls_k__BackingField() const;

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

static ::StringW __declspec(property(get=__get_ussFoldoutChildDepthClassName, put=__set_ussFoldoutChildDepthClassName))  ussFoldoutChildDepthClassName;

static void __set_ussFoldoutChildDepthClassName(::StringW value) ;

static ::StringW __get_ussFoldoutChildDepthClassName() ;

static ::System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_ussFoldoutChildDepthClassNames, put=__set_ussFoldoutChildDepthClassNames))  ussFoldoutChildDepthClassNames;

static void __set_ussFoldoutChildDepthClassNames(::System::Collections::Generic::List_1<::StringW> value) ;

static ::System::Collections::Generic::List_1<::StringW> __get_ussFoldoutChildDepthClassNames() ;

 ::UnityEngine::UIElements::____UnityEngine__UIElements__IMGUIContainer__GUIGlobals __declspec(property(get=__get_m_GUIGlobals, put=__set_m_GUIGlobals))  m_GUIGlobals;

constexpr void __set_m_GUIGlobals(::UnityEngine::UIElements::____UnityEngine__UIElements__IMGUIContainer__GUIGlobals value) ;

constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__IMGUIContainer__GUIGlobals __get_m_GUIGlobals() const;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_OnGUIMarker, put=__set_k_OnGUIMarker))  k_OnGUIMarker;

static void __set_k_OnGUIMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_OnGUIMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_ImmediateCallbackMarker, put=__set_k_ImmediateCallbackMarker))  k_ImmediateCallbackMarker;

static void __set_k_ImmediateCallbackMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_ImmediateCallbackMarker() ;

static ::UnityEngine::Event __declspec(property(get=__get_s_DefaultMeasureEvent, put=__set_s_DefaultMeasureEvent))  s_DefaultMeasureEvent;

static void __set_s_DefaultMeasureEvent(::UnityEngine::Event value) ;

static ::UnityEngine::Event __get_s_DefaultMeasureEvent() ;

static ::UnityEngine::Event __declspec(property(get=__get_s_MeasureEvent, put=__set_s_MeasureEvent))  s_MeasureEvent;

static void __set_s_MeasureEvent(::UnityEngine::Event value) ;

static ::UnityEngine::Event __get_s_MeasureEvent() ;

static ::UnityEngine::Event __declspec(property(get=__get_s_CurrentEvent, put=__set_s_CurrentEvent))  s_CurrentEvent;

static void __set_s_CurrentEvent(::UnityEngine::Event value) ;

static ::UnityEngine::Event __get_s_CurrentEvent() ;


// Properties

 ::System::Action __declspec(property(get=get_onGUIHandler, put=set_onGUIHandler))  onGUIHandler;

 ::UnityEngine::ObjectGUIState __declspec(property(get=get_guiState))  guiState;

 ::UnityEngine::Rect __declspec(property(get=get_lastWorldClip, put=set_lastWorldClip))  lastWorldClip;

 bool __declspec(property(get=get_cullingEnabled))  cullingEnabled;

 ::UnityEngine::____UnityEngine__GUILayoutUtility__LayoutCache __declspec(property(get=get_cache))  cache;

 float_t __declspec(property(get=get_layoutMeasuredWidth))  layoutMeasuredWidth;

 float_t __declspec(property(get=get_layoutMeasuredHeight))  layoutMeasuredHeight;

 ::UnityEngine::UIElements::ContextType __declspec(property(get=get_contextType, put=set_contextType))  contextType;

 bool __declspec(property(get=get_focusOnlyIfHasFocusableControls))  focusOnlyIfHasFocusableControls;

 bool __declspec(property(get=get_canGrabFocus))  canGrabFocus;


// Methods

/// @brief Method get_onGUIHandler addr 0x2c8642c size 0x8 virtual false final false
 ::System::Action get_onGUIHandler() ;

/// @brief Method set_onGUIHandler addr 0x2c86434 size 0x58 virtual false final false
 void set_onGUIHandler(::System::Action value) ;

/// @brief Method get_guiState addr 0x2c853e8 size 0xa4 virtual false final false
 ::UnityEngine::ObjectGUIState get_guiState() ;

/// @brief Method get_lastWorldClip addr 0x2c8648c size 0x14 virtual false final false
 ::UnityEngine::Rect get_lastWorldClip() ;

/// @brief Method set_lastWorldClip addr 0x2c864a0 size 0x14 virtual false final false
 void set_lastWorldClip(::UnityEngine::Rect value) ;

/// @brief Method get_cullingEnabled addr 0x2c864b4 size 0x8 virtual false final false
 bool get_cullingEnabled() ;

/// @brief Method get_cache addr 0x2c864bc size 0x70 virtual false final false
 ::UnityEngine::____UnityEngine__GUILayoutUtility__LayoutCache get_cache() ;

/// @brief Method get_layoutMeasuredWidth addr 0x2c8652c size 0x28 virtual false final false
 float_t get_layoutMeasuredWidth() ;

/// @brief Method get_layoutMeasuredHeight addr 0x2c86554 size 0x28 virtual false final false
 float_t get_layoutMeasuredHeight() ;

/// @brief Method get_contextType addr 0x2c8657c size 0x8 virtual false final false
 ::UnityEngine::UIElements::ContextType get_contextType() ;

/// @brief Method set_contextType addr 0x2c86584 size 0x8 virtual false final false
 void set_contextType(::UnityEngine::UIElements::ContextType value) ;

/// @brief Method get_focusOnlyIfHasFocusableControls addr 0x2c8658c size 0x8 virtual false final false
 bool get_focusOnlyIfHasFocusableControls() ;

/// @brief Method get_canGrabFocus addr 0x2c86594 size 0x20 virtual true final false
 bool get_canGrabFocus() ;

// Ctor Parameters []
explicit IMGUIContainer() ;

/// @brief Method .ctor addr 0x2c86980 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "onGUIHandler", ty: "::System::Action", modifiers: "", def_value: None }]
explicit IMGUIContainer(::System::Action onGUIHandler) ;

/// @brief Method .ctor addr 0x2c86988 size 0x238 virtual false final false
 void _ctor(::System::Action onGUIHandler) ;

/// @brief Method OnGenerateVisualContent addr 0x2c86bc0 size 0x12c virtual false final false
 void OnGenerateVisualContent(::UnityEngine::UIElements::MeshGenerationContext mgc) ;

/// @brief Method SaveGlobals addr 0x2c86cec size 0x110 virtual false final false
 void SaveGlobals() ;

/// @brief Method RestoreGlobals addr 0x2c86dfc size 0x118 virtual false final false
 void RestoreGlobals() ;

/// @brief Method DoOnGUI addr 0x2c86f14 size 0xd1c virtual false final false
 void DoOnGUI(::UnityEngine::Event evt, ::UnityEngine::Matrix4x4 parentTransform, ::UnityEngine::Rect clippingRect, bool isComputingLayout, ::UnityEngine::Rect layoutSize, ::System::Action onGUIHandler, bool canAffectFocus) ;

/// @brief Method MarkDirtyLayout addr 0x2c84524 size 0x14 virtual false final false
 void MarkDirtyLayout() ;

/// @brief Method HandleEvent addr 0x2c87c30 size 0x90 virtual true final false
 void HandleEvent(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method DoIMGUIRepaint addr 0x2c87f5c size 0x390 virtual false final false
 void DoIMGUIRepaint() ;

/// @brief Method SendEventToIMGUI addr 0x2c87cc0 size 0x29c virtual false final false
 bool SendEventToIMGUI(::UnityEngine::UIElements::EventBase evt, bool canAffectFocus, bool verifyBounds) ;

/// @brief Method SendEventToIMGUIRaw addr 0x2c885e4 size 0x100 virtual false final false
 bool SendEventToIMGUIRaw(::UnityEngine::UIElements::EventBase evt, bool canAffectFocus, bool verifyBounds) ;

/// @brief Method VerifyBounds addr 0x2c886e4 size 0x90 virtual false final false
 bool VerifyBounds(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method IsContainerCapturingTheMouse addr 0x2c88784 size 0x114 virtual false final false
 bool IsContainerCapturingTheMouse() ;

/// @brief Method IsLocalEvent addr 0x2c88898 size 0x204 virtual false final false
 bool IsLocalEvent(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method IsEventInsideLocalWindow addr 0x2c88a9c size 0x180 virtual false final false
 bool IsEventInsideLocalWindow(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method IsDockAreaMouseUp addr 0x2c88c1c size 0x124 virtual false final false
static bool IsDockAreaMouseUp(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method HandleIMGUIEvent addr 0x2c88774 size 0x10 virtual false final false
 bool HandleIMGUIEvent(::UnityEngine::Event e, bool canAffectFocus) ;

/// @brief Method HandleIMGUIEvent addr 0x2c88dac size 0xcc virtual false final false
 bool HandleIMGUIEvent(::UnityEngine::Event e, ::System::Action onGUIHandler, bool canAffectFocus) ;

/// @brief Method HandleIMGUIEvent addr 0x2c882ec size 0x2f8 virtual false final false
 bool HandleIMGUIEvent(::UnityEngine::Event e, ::UnityEngine::Matrix4x4 worldTransform, ::UnityEngine::Rect clippingRect, ::System::Action onGUIHandler, bool canAffectFocus) ;

/// @brief Method ExecuteDefaultAction addr 0x2c8903c size 0x2e8 virtual true final false
 void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method SetFoldoutDepthClass addr 0x2c89324 size 0x168 virtual false final false
 void SetFoldoutDepthClass() ;

/// @brief Method DoMeasure addr 0x2c89570 size 0x258 virtual true final false
 ::UnityEngine::Vector2 DoMeasure(float_t desiredWidth, ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElement__MeasureMode widthMode, float_t desiredHeight, ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElement__MeasureMode heightMode) ;

/// @brief Method GetCurrentClipRect addr 0x2c88d40 size 0x6c virtual false final false
 ::UnityEngine::Rect GetCurrentClipRect() ;

/// @brief Method GetCurrentTransformAndClip addr 0x2c88e78 size 0x114 virtual false final false
static void GetCurrentTransformAndClip(::UnityEngine::UIElements::IMGUIContainer container, ::UnityEngine::Event evt, ByRef<::UnityEngine::Matrix4x4> transform, ByRef<::UnityEngine::Rect> clipRect) ;

/// @brief Method Dispose addr 0x2c897c8 size 0x70 virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x2c89838 size 0x18 virtual true final false
 void Dispose(bool disposeManaged) ;

/// @brief Method <DoOnGUI>b__56_0 addr 0x2c89850 size 0xc virtual false final false
 void _DoOnGUI_b__56_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 5090 }), TypeDefinitionIndex(TypeDefinitionIndex(6994)), TypeDefinitionIndex(TypeDefinitionIndex(7089)), TypeDefinitionIndex(TypeDefinitionIndex(6996))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6992))
// CS Name: UnityEngine.UIElements.IMGUIContainer::UxmlFactory
class CORDL_TYPE ____UnityEngine__UIElements__IMGUIContainer__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::IMGUIContainer,::UnityEngine::UIElements::____UnityEngine__UIElements__IMGUIContainer__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____UnityEngine__UIElements__IMGUIContainer__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__IMGUIContainer__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__IMGUIContainer__UxmlFactory(____UnityEngine__UIElements__IMGUIContainer__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__IMGUIContainer__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__IMGUIContainer__UxmlFactory(____UnityEngine__UIElements__IMGUIContainer__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__IMGUIContainer__UxmlFactory(void* ptr) noexcept : ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::IMGUIContainer,::UnityEngine::UIElements::____UnityEngine__UIElements__IMGUIContainer__UxmlTraits>(ptr) {
}


  constexpr ____UnityEngine__UIElements__IMGUIContainer__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__IMGUIContainer__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__IMGUIContainer__UxmlFactory& operator=(____UnityEngine__UIElements__IMGUIContainer__UxmlFactory&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__IMGUIContainer__UxmlFactory& operator=(____UnityEngine__UIElements__IMGUIContainer__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____UnityEngine__UIElements__IMGUIContainer__UxmlFactory() ;

/// @brief Method .ctor addr 0x2c8985c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::<get_uxmlChildElementsDescription>d__2
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6993))
// CS Name: UnityEngine.UIElements.IMGUIContainer::UxmlTraits::<get_uxmlChildElementsDescription>d__2
class CORDL_TYPE ______UnityEngine__UIElements__IMGUIContainer__UxmlTraits___get_uxmlChildElementsDescription_d__2 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlChildElementDescription>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlChildElementDescription>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UxmlChildElementDescription>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UxmlChildElementDescription>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~______UnityEngine__UIElements__IMGUIContainer__UxmlTraits___get_uxmlChildElementsDescription_d__2() = default;

// Ctor Parameters [CppParam { name: "", ty: "______UnityEngine__UIElements__IMGUIContainer__UxmlTraits___get_uxmlChildElementsDescription_d__2", modifiers: " const&", def_value: None }]
constexpr ______UnityEngine__UIElements__IMGUIContainer__UxmlTraits___get_uxmlChildElementsDescription_d__2(______UnityEngine__UIElements__IMGUIContainer__UxmlTraits___get_uxmlChildElementsDescription_d__2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "______UnityEngine__UIElements__IMGUIContainer__UxmlTraits___get_uxmlChildElementsDescription_d__2", modifiers: "&&", def_value: None }]
constexpr ______UnityEngine__UIElements__IMGUIContainer__UxmlTraits___get_uxmlChildElementsDescription_d__2(______UnityEngine__UIElements__IMGUIContainer__UxmlTraits___get_uxmlChildElementsDescription_d__2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ______UnityEngine__UIElements__IMGUIContainer__UxmlTraits___get_uxmlChildElementsDescription_d__2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ______UnityEngine__UIElements__IMGUIContainer__UxmlTraits___get_uxmlChildElementsDescription_d__2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ______UnityEngine__UIElements__IMGUIContainer__UxmlTraits___get_uxmlChildElementsDescription_d__2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ______UnityEngine__UIElements__IMGUIContainer__UxmlTraits___get_uxmlChildElementsDescription_d__2& operator=(______UnityEngine__UIElements__IMGUIContainer__UxmlTraits___get_uxmlChildElementsDescription_d__2&& o) noexcept = default;
  constexpr ______UnityEngine__UIElements__IMGUIContainer__UxmlTraits___get_uxmlChildElementsDescription_d__2& operator=(______UnityEngine__UIElements__IMGUIContainer__UxmlTraits___get_uxmlChildElementsDescription_d__2 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::UnityEngine::UIElements::UxmlChildElementDescription __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::UnityEngine::UIElements::UxmlChildElementDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlChildElementDescription __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 ::UnityEngine::UIElements::____UnityEngine__UIElements__IMGUIContainer__UxmlTraits __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::UnityEngine::UIElements::____UnityEngine__UIElements__IMGUIContainer__UxmlTraits value) ;

constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__IMGUIContainer__UxmlTraits __get___4__this() const;


// Properties

 ::UnityEngine::UIElements::UxmlChildElementDescription __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ______UnityEngine__UIElements__IMGUIContainer__UxmlTraits___get_uxmlChildElementsDescription_d__2(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2c89978 size 0x44 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2c899bc size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2c899c0 size 0x18 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.UIElements.UxmlChildElementDescription>.get_Current addr 0x2c899d8 size 0x8 virtual true final true
 ::UnityEngine::UIElements::UxmlChildElementDescription System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2c899e0 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2c89a20 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.UxmlChildElementDescription>.GetEnumerator addr 0x2c89a28 size 0xa0 virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UxmlChildElementDescription> System_Collections_Generic_IEnumerable_UnityEngine_UIElements_UxmlChildElementDescription__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2c89ac8 size 0x4 virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GUIGlobals
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6995))
// CS Name: UnityEngine.UIElements.IMGUIContainer::GUIGlobals
struct CORDL_TYPE ____UnityEngine__UIElements__IMGUIContainer__GUIGlobals : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "matrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "contentColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "backgroundColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "changed", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "displayIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UIElements__IMGUIContainer__GUIGlobals(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Color color, ::UnityEngine::Color contentColor, ::UnityEngine::Color backgroundColor, bool enabled, bool changed, int32_t displayIndex) noexcept;


                    constexpr ____UnityEngine__UIElements__IMGUIContainer__GUIGlobals(____UnityEngine__UIElements__IMGUIContainer__GUIGlobals const&) = default;
                    constexpr ____UnityEngine__UIElements__IMGUIContainer__GUIGlobals(____UnityEngine__UIElements__IMGUIContainer__GUIGlobals&&) = default;
                    constexpr ____UnityEngine__UIElements__IMGUIContainer__GUIGlobals& operator=(____UnityEngine__UIElements__IMGUIContainer__GUIGlobals const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UIElements__IMGUIContainer__GUIGlobals& operator=(____UnityEngine__UIElements__IMGUIContainer__GUIGlobals&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x78};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__IMGUIContainer__GUIGlobals(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Matrix4x4 __declspec(property(get=__get_matrix, put=__set_matrix))  matrix;

constexpr void __set_matrix(::UnityEngine::Matrix4x4 value) ;

constexpr ::UnityEngine::Matrix4x4 __get_matrix() const;

 ::UnityEngine::Color __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_color() const;

 ::UnityEngine::Color __declspec(property(get=__get_contentColor, put=__set_contentColor))  contentColor;

constexpr void __set_contentColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_contentColor() const;

 ::UnityEngine::Color __declspec(property(get=__get_backgroundColor, put=__set_backgroundColor))  backgroundColor;

constexpr void __set_backgroundColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_backgroundColor() const;

 bool __declspec(property(get=__get_enabled, put=__set_enabled))  enabled;

constexpr void __set_enabled(bool value) ;

constexpr bool __get_enabled() const;

 bool __declspec(property(get=__get_changed, put=__set_changed))  changed;

constexpr void __set_changed(bool value) ;

constexpr bool __get_changed() const;

 int32_t __declspec(property(get=__get_displayIndex, put=__set_displayIndex))  displayIndex;

constexpr void __set_displayIndex(int32_t value) ;

constexpr int32_t __get_displayIndex() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::______UnityEngine__UIElements__IMGUIContainer__UxmlTraits___get_uxmlChildElementsDescription_d__2);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::______UnityEngine__UIElements__IMGUIContainer__UxmlTraits___get_uxmlChildElementsDescription_d__2, "UnityEngine.UIElements", "IMGUIContainer/UxmlTraits/<get_uxmlChildElementsDescription>d__2");
NEED_NO_BOX(::UnityEngine::UIElements::IMGUIContainer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IMGUIContainer, "UnityEngine.UIElements", "IMGUIContainer");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__IMGUIContainer__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__IMGUIContainer__UxmlFactory, "UnityEngine.UIElements", "IMGUIContainer/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__IMGUIContainer__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__IMGUIContainer__UxmlTraits, "UnityEngine.UIElements", "IMGUIContainer/UxmlTraits");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__IMGUIContainer__GUIGlobals, "UnityEngine.UIElements", "IMGUIContainer/GUIGlobals");
