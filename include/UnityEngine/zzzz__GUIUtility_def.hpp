#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
class Exception;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
struct IMECompositionMode;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace UnityEngine {
class ObjectGUIState;
}
namespace UnityEngine {
class GUISkin;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine {
struct FocusType;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
class Action;
}
// Forward declare root types
namespace UnityEngine {
class GUIUtility;
}
// Type: UnityEngine::GUIUtility
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14769))
// CS Name: UnityEngine.GUIUtility
class CORDL_TYPE GUIUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GUIUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "GUIUtility", modifiers: " const&", def_value: None }]
constexpr GUIUtility(GUIUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GUIUtility", modifiers: "&&", def_value: None }]
constexpr GUIUtility(GUIUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GUIUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GUIUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GUIUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GUIUtility& operator=(GUIUtility&& o) noexcept = default;
  constexpr GUIUtility& operator=(GUIUtility const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_s_ControlCount, put=__set_s_ControlCount))  s_ControlCount;

static void __set_s_ControlCount(int32_t value) ;

static int32_t __get_s_ControlCount() ;

static int32_t __declspec(property(get=__get_s_SkinMode, put=__set_s_SkinMode))  s_SkinMode;

static void __set_s_SkinMode(int32_t value) ;

static int32_t __get_s_SkinMode() ;

static int32_t __declspec(property(get=__get_s_OriginalID, put=__set_s_OriginalID))  s_OriginalID;

static void __set_s_OriginalID(int32_t value) ;

static int32_t __get_s_OriginalID() ;

static System::Action __declspec(property(get=__get_takeCapture, put=__set_takeCapture))  takeCapture;

static void __set_takeCapture(System::Action value) ;

static System::Action __get_takeCapture() ;

static System::Action __declspec(property(get=__get_releaseCapture, put=__set_releaseCapture))  releaseCapture;

static void __set_releaseCapture(System::Action value) ;

static System::Action __get_releaseCapture() ;

static System::Func_3<int32_t,::cordl_internals::intptr_t,bool> __declspec(property(get=__get_processEvent, put=__set_processEvent))  processEvent;

static void __set_processEvent(System::Func_3<int32_t,::cordl_internals::intptr_t,bool> value) ;

static System::Func_3<int32_t,::cordl_internals::intptr_t,bool> __get_processEvent() ;

static System::Action __declspec(property(get=__get_cleanupRoots, put=__set_cleanupRoots))  cleanupRoots;

static void __set_cleanupRoots(System::Action value) ;

static System::Action __get_cleanupRoots() ;

static System::Func_2<System::Exception,bool> __declspec(property(get=__get_endContainerGUIFromException, put=__set_endContainerGUIFromException))  endContainerGUIFromException;

static void __set_endContainerGUIFromException(System::Func_2<System::Exception,bool> value) ;

static System::Func_2<System::Exception,bool> __get_endContainerGUIFromException() ;

static System::Action __declspec(property(get=__get_guiChanged, put=__set_guiChanged))  guiChanged;

static void __set_guiChanged(System::Action value) ;

static System::Action __get_guiChanged() ;

static bool __declspec(property(get=__get__guiIsExiting_k__BackingField, put=__set__guiIsExiting_k__BackingField))  _guiIsExiting_k__BackingField;

static void __set__guiIsExiting_k__BackingField(bool value) ;

static bool __get__guiIsExiting_k__BackingField() ;

static System::Func_1<bool> __declspec(property(get=__get_s_HasCurrentWindowKeyFocusFunc, put=__set_s_HasCurrentWindowKeyFocusFunc))  s_HasCurrentWindowKeyFocusFunc;

static void __set_s_HasCurrentWindowKeyFocusFunc(System::Func_1<bool> value) ;

static System::Func_1<bool> __get_s_HasCurrentWindowKeyFocusFunc() ;


// Properties

static float_t __declspec(property(get=get_pixelsPerPoint))  pixelsPerPoint;

static int32_t __declspec(property(get=get_guiDepth))  guiDepth;

static bool __declspec(property(get=get_textFieldInput))  textFieldInput;

static ::StringW __declspec(property(get=get_systemCopyBuffer, put=set_systemCopyBuffer))  systemCopyBuffer;

static ::StringW __declspec(property(get=get_compositionString))  compositionString;

static UnityEngine::IMECompositionMode __declspec(property(put=set_imeCompositionMode))  imeCompositionMode;

static UnityEngine::Vector2 __declspec(property(put=set_compositionCursorPos))  compositionCursorPos;

static bool __declspec(property(put=set_guiIsExiting))  guiIsExiting;

static int32_t __declspec(property(get=get_hotControl, put=set_hotControl))  hotControl;

static int32_t __declspec(property(get=get_keyboardControl, put=set_keyboardControl))  keyboardControl;


// Methods

/// @brief Method get_pixelsPerPoint addr 0x2b8a04c size 0x28 virtual false final false
static float_t get_pixelsPerPoint() ;

/// @brief Method get_guiDepth addr 0x2b8b358 size 0x28 virtual false final false
static int32_t get_guiDepth() ;

/// @brief Method get_textFieldInput addr 0x2b863f4 size 0x28 virtual false final false
static bool get_textFieldInput() ;

/// @brief Method get_systemCopyBuffer addr 0x2b8b380 size 0x28 virtual false final false
static ::StringW get_systemCopyBuffer() ;

/// @brief Method set_systemCopyBuffer addr 0x2b8b3a8 size 0x3c virtual false final false
static void set_systemCopyBuffer(::StringW value) ;

/// @brief Method Internal_GetControlID addr 0x2b8b3e4 size 0x5c virtual false final false
static int32_t Internal_GetControlID(int32_t hint, UnityEngine::FocusType focusType, UnityEngine::Rect rect) ;

/// @brief Method GetControlID addr 0x2b8b494 size 0x98 virtual false final false
static int32_t GetControlID(int32_t hint, UnityEngine::FocusType focusType, UnityEngine::Rect rect) ;

/// @brief Method BeginContainerFromOwner addr 0x2b8b52c size 0x3c virtual false final false
static void BeginContainerFromOwner(UnityEngine::ScriptableObject owner) ;

/// @brief Method BeginContainer addr 0x2b8b568 size 0x3c virtual false final false
static void BeginContainer(UnityEngine::ObjectGUIState objectGUIState) ;

/// @brief Method Internal_EndContainer addr 0x2b8b5a4 size 0x28 virtual false final false
static void Internal_EndContainer() ;

/// @brief Method CheckForTabEvent addr 0x2b8b5cc size 0x3c virtual false final false
static int32_t CheckForTabEvent(UnityEngine::Event evt) ;

/// @brief Method SetKeyboardControlToFirstControlId addr 0x2b8b608 size 0x28 virtual false final false
static void SetKeyboardControlToFirstControlId() ;

/// @brief Method SetKeyboardControlToLastControlId addr 0x2b8b630 size 0x28 virtual false final false
static void SetKeyboardControlToLastControlId() ;

/// @brief Method HasFocusableControls addr 0x2b8b658 size 0x28 virtual false final false
static bool HasFocusableControls() ;

/// @brief Method OwnsId addr 0x2b8b680 size 0x3c virtual false final false
static bool OwnsId(int32_t id) ;

/// @brief Method get_compositionString addr 0x2b8b6bc size 0x28 virtual false final false
static ::StringW get_compositionString() ;

/// @brief Method set_imeCompositionMode addr 0x2b8b6e4 size 0x3c virtual false final false
static void set_imeCompositionMode(UnityEngine::IMECompositionMode value) ;

/// @brief Method set_compositionCursorPos addr 0x2b8b720 size 0x40 virtual false final false
static void set_compositionCursorPos(UnityEngine::Vector2 value) ;

/// @brief Method Internal_GetHotControl addr 0x2b8b79c size 0x28 virtual false final false
static int32_t Internal_GetHotControl() ;

/// @brief Method Internal_GetKeyboardControl addr 0x2b8b7c4 size 0x28 virtual false final false
static int32_t Internal_GetKeyboardControl() ;

/// @brief Method Internal_SetHotControl addr 0x2b8b7ec size 0x3c virtual false final false
static void Internal_SetHotControl(int32_t value) ;

/// @brief Method Internal_SetKeyboardControl addr 0x2b8b828 size 0x3c virtual false final false
static void Internal_SetKeyboardControl(int32_t value) ;

/// @brief Method Internal_GetDefaultSkin addr 0x2b8b864 size 0x3c virtual false final false
static ::bs_hook::Il2CppWrapperType Internal_GetDefaultSkin(int32_t skinMode) ;

/// @brief Method Internal_ExitGUI addr 0x2b8b8a0 size 0x28 virtual false final false
static void Internal_ExitGUI() ;

/// @brief Method MarkGUIChanged addr 0x2b8b8c8 size 0x64 virtual false final false
static void MarkGUIChanged() ;

/// @brief Method GetControlID addr 0x2b84e78 size 0x2c virtual false final false
static int32_t GetControlID(int32_t hint, UnityEngine::FocusType focus) ;

/// @brief Method set_guiIsExiting addr 0x2b8b92c size 0x4c virtual false final false
static void set_guiIsExiting(bool value) ;

/// @brief Method get_hotControl addr 0x2b8b978 size 0x28 virtual false final false
static int32_t get_hotControl() ;

/// @brief Method set_hotControl addr 0x2b8b9a0 size 0x3c virtual false final false
static void set_hotControl(int32_t value) ;

/// @brief Method TakeCapture addr 0x2b8b9dc size 0x64 virtual false final false
static void TakeCapture() ;

/// @brief Method RemoveCapture addr 0x2b8ba40 size 0x64 virtual false final false
static void RemoveCapture() ;

/// @brief Method get_keyboardControl addr 0x2b8baa4 size 0x28 virtual false final false
static int32_t get_keyboardControl() ;

/// @brief Method set_keyboardControl addr 0x2b8bacc size 0x3c virtual false final false
static void set_keyboardControl(int32_t value) ;

/// @brief Method HasKeyFocus addr 0x2b8bb08 size 0xa0 virtual false final false
static bool HasKeyFocus(int32_t controlID) ;

/// @brief Method ExitGUI addr 0x2b8bba8 size 0x40 virtual false final false
static void ExitGUI() ;

/// @brief Method GetDefaultSkin addr 0x2b8450c size 0x98 virtual false final false
static UnityEngine::GUISkin GetDefaultSkin() ;

/// @brief Method ProcessEvent addr 0x2b8bbe8 size 0x84 virtual false final false
static void ProcessEvent(int32_t instanceID, ::cordl_internals::intptr_t nativeEventPtr, ByRef<bool> result) ;

/// @brief Method EndContainer addr 0x2b8bc6c size 0x48 virtual false final false
static void EndContainer() ;

/// @brief Method BeginGUI addr 0x2b8bcb4 size 0x9c virtual false final false
static void BeginGUI(int32_t skinMode, int32_t instanceID, int32_t useGUILayout) ;

/// @brief Method EndGUI addr 0x2b8be50 size 0x1f0 virtual false final false
static void EndGUI(int32_t layoutType) ;

/// @brief Method EndGUIFromException addr 0x2b8c0e0 size 0x40 virtual false final false
static bool EndGUIFromException(System::Exception exception) ;

/// @brief Method EndContainerGUIFromException addr 0x2b8c124 size 0x70 virtual false final false
static bool EndContainerGUIFromException(System::Exception exception) ;

/// @brief Method ResetGlobalState addr 0x2b8bd50 size 0x100 virtual false final false
static void ResetGlobalState() ;

/// @brief Method IsExitGUIException addr 0x2b8c194 size 0x84 virtual false final false
static bool IsExitGUIException(System::Exception exception) ;

/// @brief Method ShouldRethrowException addr 0x2b8c120 size 0x4 virtual false final false
static bool ShouldRethrowException(System::Exception exception) ;

/// @brief Method CheckOnGUI addr 0x2b84388 size 0x84 virtual false final false
static void CheckOnGUI() ;

/// @brief Method RoundToPixelGrid addr 0x2b8c218 size 0x6c virtual false final false
static float_t RoundToPixelGrid(float_t v) ;

/// @brief Method HitTest addr 0x2b8c284 size 0xa4 virtual false final false
static bool HitTest(UnityEngine::Rect rect, UnityEngine::Vector2 point, int32_t offset) ;

/// @brief Method HitTest addr 0x2b8c328 size 0x8 virtual false final false
static bool HitTest(UnityEngine::Rect rect, UnityEngine::Vector2 point, bool isDirectManipulationDevice) ;

/// @brief Method Internal_GetControlID_Injected addr 0x2b8b440 size 0x54 virtual false final false
static int32_t Internal_GetControlID_Injected(int32_t hint, UnityEngine::FocusType focusType, ByRef<UnityEngine::Rect> rect) ;

/// @brief Method set_compositionCursorPos_Injected addr 0x2b8b760 size 0x3c virtual false final false
static void set_compositionCursorPos_Injected(ByRef<UnityEngine::Vector2> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::GUIUtility);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUIUtility, "UnityEngine", "GUIUtility");
