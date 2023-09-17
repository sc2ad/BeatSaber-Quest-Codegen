#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerInputModule_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::EventSystems {
class ____UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRInput__Button;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace GlobalNamespace {
class OVRCursor;
}
namespace UnityEngine::EventSystems {
class OVRPointerEventData;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct KeyCode;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::EventSystems {
struct ____UnityEngine__EventSystems__PointerEventData__FramePressState;
}
namespace UnityEngine::EventSystems {
class ____UnityEngine__EventSystems__PointerInputModule__MouseState;
}
namespace GlobalNamespace {
class OVRRaycaster;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
struct ____UnityEngine__EventSystems__OVRInputModule__InputMode;
}
namespace UnityEngine::EventSystems {
class OVRInputModule;
}
// Type: ::InputMode
namespace UnityEngine::EventSystems {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9517))
// CS Name: UnityEngine.EventSystems.OVRInputModule::InputMode
struct CORDL_TYPE ____UnityEngine__EventSystems__OVRInputModule__InputMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__EventSystems__OVRInputModule__InputMode(int32_t value__) noexcept;


                    constexpr ____UnityEngine__EventSystems__OVRInputModule__InputMode(____UnityEngine__EventSystems__OVRInputModule__InputMode const&) = default;
                    constexpr ____UnityEngine__EventSystems__OVRInputModule__InputMode(____UnityEngine__EventSystems__OVRInputModule__InputMode&&) = default;
                    constexpr ____UnityEngine__EventSystems__OVRInputModule__InputMode& operator=(____UnityEngine__EventSystems__OVRInputModule__InputMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__EventSystems__OVRInputModule__InputMode& operator=(____UnityEngine__EventSystems__OVRInputModule__InputMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__EventSystems__OVRInputModule__InputMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__EventSystems__OVRInputModule__InputMode_Unwrapped : int32_t {
__Mouse = 0,
__Buttons = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__EventSystems__OVRInputModule__InputMode_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__EventSystems__OVRInputModule__InputMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Mouse offset 0
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__OVRInputModule__InputMode const Mouse;

/// @brief Field Buttons offset 0
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__OVRInputModule__InputMode const Buttons;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
// Type: UnityEngine.EventSystems::OVRInputModule
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9518))
// CS Name: UnityEngine.EventSystems.OVRInputModule
class CORDL_TYPE OVRInputModule : public ::UnityEngine::EventSystems::PointerInputModule {
public:
// Declarations
using InputMode = ::UnityEngine::EventSystems::____UnityEngine__EventSystems__OVRInputModule__InputMode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf0};

virtual ~OVRInputModule() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRInputModule", modifiers: " const&", def_value: None }]
constexpr OVRInputModule(OVRInputModule const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRInputModule", modifiers: "&&", def_value: None }]
constexpr OVRInputModule(OVRInputModule&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRInputModule(void* ptr) noexcept : ::UnityEngine::EventSystems::PointerInputModule(ptr) {
}


  constexpr OVRInputModule& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRInputModule& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRInputModule& operator=(OVRInputModule&& o) noexcept = default;
  constexpr OVRInputModule& operator=(OVRInputModule const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get_rayTransform, put=__set_rayTransform))  rayTransform;

constexpr void __set_rayTransform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_rayTransform() const;

 ::GlobalNamespace::OVRCursor __declspec(property(get=__get_m_Cursor, put=__set_m_Cursor))  m_Cursor;

constexpr void __set_m_Cursor(::GlobalNamespace::OVRCursor value) ;

constexpr ::GlobalNamespace::OVRCursor __get_m_Cursor() const;

 ::GlobalNamespace::____GlobalNamespace__OVRInput__Button __declspec(property(get=__get_joyPadClickButton, put=__set_joyPadClickButton))  joyPadClickButton;

constexpr void __set_joyPadClickButton(::GlobalNamespace::____GlobalNamespace__OVRInput__Button value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRInput__Button __get_joyPadClickButton() const;

 ::UnityEngine::KeyCode __declspec(property(get=__get_gazeClickKey, put=__set_gazeClickKey))  gazeClickKey;

constexpr void __set_gazeClickKey(::UnityEngine::KeyCode value) ;

constexpr ::UnityEngine::KeyCode __get_gazeClickKey() const;

 bool __declspec(property(get=__get_performSphereCastForGazepointer, put=__set_performSphereCastForGazepointer))  performSphereCastForGazepointer;

constexpr void __set_performSphereCastForGazepointer(bool value) ;

constexpr bool __get_performSphereCastForGazepointer() const;

 bool __declspec(property(get=__get_useRightStickScroll, put=__set_useRightStickScroll))  useRightStickScroll;

constexpr void __set_useRightStickScroll(bool value) ;

constexpr bool __get_useRightStickScroll() const;

 float_t __declspec(property(get=__get_rightStickDeadZone, put=__set_rightStickDeadZone))  rightStickDeadZone;

constexpr void __set_rightStickDeadZone(float_t value) ;

constexpr float_t __get_rightStickDeadZone() const;

 bool __declspec(property(get=__get_useSwipeScroll, put=__set_useSwipeScroll))  useSwipeScroll;

constexpr void __set_useSwipeScroll(bool value) ;

constexpr bool __get_useSwipeScroll() const;

 float_t __declspec(property(get=__get_swipeDragThreshold, put=__set_swipeDragThreshold))  swipeDragThreshold;

constexpr void __set_swipeDragThreshold(float_t value) ;

constexpr float_t __get_swipeDragThreshold() const;

 float_t __declspec(property(get=__get_swipeDragScale, put=__set_swipeDragScale))  swipeDragScale;

constexpr void __set_swipeDragScale(float_t value) ;

constexpr float_t __get_swipeDragScale() const;

 bool __declspec(property(get=__get_InvertSwipeXAxis, put=__set_InvertSwipeXAxis))  InvertSwipeXAxis;

constexpr void __set_InvertSwipeXAxis(bool value) ;

constexpr bool __get_InvertSwipeXAxis() const;

 ::GlobalNamespace::OVRRaycaster __declspec(property(get=__get_activeGraphicRaycaster, put=__set_activeGraphicRaycaster))  activeGraphicRaycaster;

constexpr void __set_activeGraphicRaycaster(::GlobalNamespace::OVRRaycaster value) ;

constexpr ::GlobalNamespace::OVRRaycaster __get_activeGraphicRaycaster() const;

 float_t __declspec(property(get=__get_angleDragThreshold, put=__set_angleDragThreshold))  angleDragThreshold;

constexpr void __set_angleDragThreshold(float_t value) ;

constexpr float_t __get_angleDragThreshold() const;

 float_t __declspec(property(get=__get_m_SpherecastRadius, put=__set_m_SpherecastRadius))  m_SpherecastRadius;

constexpr void __set_m_SpherecastRadius(float_t value) ;

constexpr float_t __get_m_SpherecastRadius() const;

 float_t __declspec(property(get=__get_m_NextAction, put=__set_m_NextAction))  m_NextAction;

constexpr void __set_m_NextAction(float_t value) ;

constexpr float_t __get_m_NextAction() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_LastMousePosition, put=__set_m_LastMousePosition))  m_LastMousePosition;

constexpr void __set_m_LastMousePosition(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_LastMousePosition() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_MousePosition, put=__set_m_MousePosition))  m_MousePosition;

constexpr void __set_m_MousePosition(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_MousePosition() const;

 ::StringW __declspec(property(get=__get_m_HorizontalAxis, put=__set_m_HorizontalAxis))  m_HorizontalAxis;

constexpr void __set_m_HorizontalAxis(::StringW value) ;

constexpr ::StringW __get_m_HorizontalAxis() const;

 ::StringW __declspec(property(get=__get_m_VerticalAxis, put=__set_m_VerticalAxis))  m_VerticalAxis;

constexpr void __set_m_VerticalAxis(::StringW value) ;

constexpr ::StringW __get_m_VerticalAxis() const;

 ::StringW __declspec(property(get=__get_m_SubmitButton, put=__set_m_SubmitButton))  m_SubmitButton;

constexpr void __set_m_SubmitButton(::StringW value) ;

constexpr ::StringW __get_m_SubmitButton() const;

 ::StringW __declspec(property(get=__get_m_CancelButton, put=__set_m_CancelButton))  m_CancelButton;

constexpr void __set_m_CancelButton(::StringW value) ;

constexpr ::StringW __get_m_CancelButton() const;

 float_t __declspec(property(get=__get_m_InputActionsPerSecond, put=__set_m_InputActionsPerSecond))  m_InputActionsPerSecond;

constexpr void __set_m_InputActionsPerSecond(float_t value) ;

constexpr float_t __get_m_InputActionsPerSecond() const;

 bool __declspec(property(get=__get_m_AllowActivationOnMobileDevice, put=__set_m_AllowActivationOnMobileDevice))  m_AllowActivationOnMobileDevice;

constexpr void __set_m_AllowActivationOnMobileDevice(bool value) ;

constexpr bool __get_m_AllowActivationOnMobileDevice() const;

 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::OVRPointerEventData> __declspec(property(get=__get_m_VRRayPointerData, put=__set_m_VRRayPointerData))  m_VRRayPointerData;

constexpr void __set_m_VRRayPointerData(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::OVRPointerEventData> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::OVRPointerEventData> __get_m_VRRayPointerData() const;

 ::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerInputModule__MouseState __declspec(property(get=__get_m_MouseState, put=__set_m_MouseState))  m_MouseState;

constexpr void __set_m_MouseState(::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerInputModule__MouseState value) ;

constexpr ::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerInputModule__MouseState __get_m_MouseState() const;


// Properties

 ::UnityEngine::EventSystems::____UnityEngine__EventSystems__OVRInputModule__InputMode __declspec(property(get=get_inputMode))  inputMode;

 bool __declspec(property(get=get_allowActivationOnMobileDevice, put=set_allowActivationOnMobileDevice))  allowActivationOnMobileDevice;

 float_t __declspec(property(get=get_inputActionsPerSecond, put=set_inputActionsPerSecond))  inputActionsPerSecond;

 ::StringW __declspec(property(get=get_horizontalAxis, put=set_horizontalAxis))  horizontalAxis;

 ::StringW __declspec(property(get=get_verticalAxis, put=set_verticalAxis))  verticalAxis;

 ::StringW __declspec(property(get=get_submitButton, put=set_submitButton))  submitButton;

 ::StringW __declspec(property(get=get_cancelButton, put=set_cancelButton))  cancelButton;


// Methods

// Ctor Parameters []
explicit OVRInputModule() ;

/// @brief Method .ctor addr 0x266ac1c size 0x16c virtual false final false
 void _ctor() ;

/// @brief Method get_inputMode addr 0x266ad88 size 0x8 virtual false final false
 ::UnityEngine::EventSystems::____UnityEngine__EventSystems__OVRInputModule__InputMode get_inputMode() ;

/// @brief Method get_allowActivationOnMobileDevice addr 0x266ad90 size 0x8 virtual false final false
 bool get_allowActivationOnMobileDevice() ;

/// @brief Method set_allowActivationOnMobileDevice addr 0x266ad98 size 0xc virtual false final false
 void set_allowActivationOnMobileDevice(bool value) ;

/// @brief Method get_inputActionsPerSecond addr 0x266ada4 size 0x8 virtual false final false
 float_t get_inputActionsPerSecond() ;

/// @brief Method set_inputActionsPerSecond addr 0x266adac size 0x8 virtual false final false
 void set_inputActionsPerSecond(float_t value) ;

/// @brief Method get_horizontalAxis addr 0x266adb4 size 0x8 virtual false final false
 ::StringW get_horizontalAxis() ;

/// @brief Method set_horizontalAxis addr 0x266adbc size 0x8 virtual false final false
 void set_horizontalAxis(::StringW value) ;

/// @brief Method get_verticalAxis addr 0x266adc4 size 0x8 virtual false final false
 ::StringW get_verticalAxis() ;

/// @brief Method set_verticalAxis addr 0x266adcc size 0x8 virtual false final false
 void set_verticalAxis(::StringW value) ;

/// @brief Method get_submitButton addr 0x266add4 size 0x8 virtual false final false
 ::StringW get_submitButton() ;

/// @brief Method set_submitButton addr 0x266addc size 0x8 virtual false final false
 void set_submitButton(::StringW value) ;

/// @brief Method get_cancelButton addr 0x266ade4 size 0x8 virtual false final false
 ::StringW get_cancelButton() ;

/// @brief Method set_cancelButton addr 0x266adec size 0x8 virtual false final false
 void set_cancelButton(::StringW value) ;

/// @brief Method UpdateModule addr 0x266adf4 size 0x24 virtual true final false
 void UpdateModule() ;

/// @brief Method IsModuleSupported addr 0x266ae18 size 0x18 virtual true final false
 bool IsModuleSupported() ;

/// @brief Method ShouldActivateModule addr 0x266ae30 size 0x188 virtual true final false
 bool ShouldActivateModule() ;

/// @brief Method ActivateModule addr 0x266afb8 size 0xcc virtual true final false
 void ActivateModule() ;

/// @brief Method DeactivateModule addr 0x266b084 size 0x1c virtual true final false
 void DeactivateModule() ;

/// @brief Method SendSubmitEventToSelectedObject addr 0x266b394 size 0x1e8 virtual false final false
 bool SendSubmitEventToSelectedObject() ;

/// @brief Method AllowMoveEventProcessing addr 0x266b57c size 0x5c virtual false final false
 bool AllowMoveEventProcessing(float_t time) ;

/// @brief Method GetRawMoveVector addr 0x266b5d8 size 0xbc virtual false final false
 ::UnityEngine::Vector2 GetRawMoveVector() ;

/// @brief Method SendMoveEventToSelectedObject addr 0x266b694 size 0x204 virtual false final false
 bool SendMoveEventToSelectedObject() ;

/// @brief Method SendUpdateEventToSelectedObject addr 0x266b898 size 0x148 virtual false final false
 bool SendUpdateEventToSelectedObject() ;

/// @brief Method ProcessMousePress addr 0x266b9e0 size 0x64c virtual false final false
 void ProcessMousePress(::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData data) ;

/// @brief Method ProcessMouseEvent addr 0x266c130 size 0x2c8 virtual false final false
 void ProcessMouseEvent(::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerInputModule__MouseState mouseData) ;

/// @brief Method Process addr 0x266c438 size 0x64 virtual true final false
 void Process() ;

/// @brief Method UseMouse addr 0x266c3f8 size 0x40 virtual false final false
static bool UseMouse(bool pressed, bool released, ::UnityEngine::EventSystems::PointerEventData pointerData) ;

/// @brief Method CopyFromTo addr 0x266c4d0 size 0x68 virtual false final false
 void CopyFromTo(::UnityEngine::EventSystems::OVRPointerEventData from, ::UnityEngine::EventSystems::OVRPointerEventData to) ;

/// @brief Method CopyFromTo addr 0x266c538 size 0x58 virtual false final false
 void CopyFromTo(::UnityEngine::EventSystems::PointerEventData from, ::UnityEngine::EventSystems::PointerEventData to) ;

/// @brief Method GetPointerData addr 0x266c590 size 0xec virtual false final false
 bool GetPointerData(int32_t id, ByRef<::UnityEngine::EventSystems::OVRPointerEventData> data, bool create) ;

/// @brief Method ClearSelection addr 0x266b0a0 size 0x2f4 virtual false final false
 void ClearSelection() ;

/// @brief Method GetRectTransformNormal addr 0x266c684 size 0x1a4 virtual false final false
static ::UnityEngine::Vector3 GetRectTransformNormal(::UnityEngine::RectTransform rectTransform) ;

/// @brief Method GetGazePointerData addr 0x266c828 size 0x674 virtual true final false
 ::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerInputModule__MouseState GetGazePointerData() ;

/// @brief Method GetCanvasPointerData addr 0x266d3b8 size 0x3a4 virtual false final false
 ::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerInputModule__MouseState GetCanvasPointerData() ;

/// @brief Method ShouldStartDrag addr 0x266d75c size 0x338 virtual false final false
 bool ShouldStartDrag(::UnityEngine::EventSystems::PointerEventData pointerEvent) ;

/// @brief Method IsPointerMoving addr 0x266c49c size 0x34 virtual false final false
static bool IsPointerMoving(::UnityEngine::EventSystems::PointerEventData pointerEvent) ;

/// @brief Method SwipeAdjustedPosition addr 0x266db10 size 0x88 virtual false final false
 ::UnityEngine::Vector2 SwipeAdjustedPosition(::UnityEngine::Vector2 originalPosition, ::UnityEngine::EventSystems::PointerEventData pointerEvent) ;

/// @brief Method ProcessDrag addr 0x266db98 size 0x2fc virtual true final false
 void ProcessDrag(::UnityEngine::EventSystems::PointerEventData pointerEvent) ;

/// @brief Method GetGazeButtonState addr 0x266de94 size 0x110 virtual true final false
 ::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__FramePressState GetGazeButtonState() ;

/// @brief Method GetExtraScrollDelta addr 0x266ce9c size 0x94 virtual false final false
 ::UnityEngine::Vector2 GetExtraScrollDelta() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::____UnityEngine__EventSystems__OVRInputModule__InputMode, "UnityEngine.EventSystems", "OVRInputModule/InputMode");
NEED_NO_BOX(::UnityEngine::EventSystems::OVRInputModule);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::OVRInputModule, "UnityEngine.EventSystems", "OVRInputModule");
