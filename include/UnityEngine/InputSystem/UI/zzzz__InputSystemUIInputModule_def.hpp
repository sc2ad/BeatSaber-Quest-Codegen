#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::UI {
struct PointerModel;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::InputSystem::UI {
struct UIPointerType;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine::InputSystem::UI {
class ExtendedPointerEventData;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem::UI {
struct ____UnityEngine__InputSystem__UI__PointerModel__ButtonState;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::InputSystem::UI {
struct NavigationModel;
}
namespace UnityEngine::EventSystems {
class AxisEventData;
}
namespace UnityEngine::InputSystem::UI {
struct UIPointerBehavior;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputAction__CallbackContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
struct ____UnityEngine__InputSystem__UI__InputSystemUIInputModule__CursorLockBehavior;
}
namespace UnityEngine::InputSystem::UI {
class InputSystemUIInputModule;
}
namespace UnityEngine::InputSystem::UI {
struct ____UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState;
}
// Type: ::InputActionReferenceState
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6457))
// CS Name: UnityEngine.InputSystem.UI.InputSystemUIInputModule::InputActionReferenceState
struct CORDL_TYPE ____UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "refCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "enabledByInputModule", ty: "bool", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState(int32_t refCount, bool enabledByInputModule) noexcept;


                    constexpr ____UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState(____UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState const&) = default;
                    constexpr ____UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState(____UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState&&) = default;
                    constexpr ____UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState& operator=(____UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState& operator=(____UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_refCount, put=__set_refCount))  refCount;

constexpr void __set_refCount(int32_t value) ;

constexpr int32_t __get_refCount() const;

 bool __declspec(property(get=__get_enabledByInputModule, put=__set_enabledByInputModule))  enabledByInputModule;

constexpr void __set_enabledByInputModule(bool value) ;

constexpr bool __get_enabledByInputModule() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::UI
// Type: ::CursorLockBehavior
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6458))
// CS Name: UnityEngine.InputSystem.UI.InputSystemUIInputModule::CursorLockBehavior
struct CORDL_TYPE ____UnityEngine__InputSystem__UI__InputSystemUIInputModule__CursorLockBehavior : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__UI__InputSystemUIInputModule__CursorLockBehavior(int32_t value__) noexcept;


                    constexpr ____UnityEngine__InputSystem__UI__InputSystemUIInputModule__CursorLockBehavior(____UnityEngine__InputSystem__UI__InputSystemUIInputModule__CursorLockBehavior const&) = default;
                    constexpr ____UnityEngine__InputSystem__UI__InputSystemUIInputModule__CursorLockBehavior(____UnityEngine__InputSystem__UI__InputSystemUIInputModule__CursorLockBehavior&&) = default;
                    constexpr ____UnityEngine__InputSystem__UI__InputSystemUIInputModule__CursorLockBehavior& operator=(____UnityEngine__InputSystem__UI__InputSystemUIInputModule__CursorLockBehavior const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__UI__InputSystemUIInputModule__CursorLockBehavior& operator=(____UnityEngine__InputSystem__UI__InputSystemUIInputModule__CursorLockBehavior&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__UI__InputSystemUIInputModule__CursorLockBehavior(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__InputSystem__UI__InputSystemUIInputModule__CursorLockBehavior_Unwrapped : int32_t {
__OutsideScreen = 0,
__ScreenCenter = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__InputSystem__UI__InputSystemUIInputModule__CursorLockBehavior_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__InputSystem__UI__InputSystemUIInputModule__CursorLockBehavior_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OutsideScreen offset 0
static ::UnityEngine::InputSystem::UI::____UnityEngine__InputSystem__UI__InputSystemUIInputModule__CursorLockBehavior const OutsideScreen;

/// @brief Field ScreenCenter offset 0
static ::UnityEngine::InputSystem::UI::____UnityEngine__InputSystem__UI__InputSystemUIInputModule__CursorLockBehavior const ScreenCenter;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::UI
// Type: UnityEngine.InputSystem.UI::InputSystemUIInputModule
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6459))
// CS Name: UnityEngine.InputSystem.UI.InputSystemUIInputModule
class CORDL_TYPE InputSystemUIInputModule : public ::UnityEngine::EventSystems::BaseInputModule {
public:
// Declarations
using CursorLockBehavior = ::UnityEngine::InputSystem::UI::____UnityEngine__InputSystem__UI__InputSystemUIInputModule__CursorLockBehavior;

using InputActionReferenceState = ::UnityEngine::InputSystem::UI::____UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x390};

virtual ~InputSystemUIInputModule() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputSystemUIInputModule", modifiers: " const&", def_value: None }]
constexpr InputSystemUIInputModule(InputSystemUIInputModule const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputSystemUIInputModule", modifiers: "&&", def_value: None }]
constexpr InputSystemUIInputModule(InputSystemUIInputModule&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputSystemUIInputModule(void* ptr) noexcept : ::UnityEngine::EventSystems::BaseInputModule(ptr) {
}


  constexpr InputSystemUIInputModule& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputSystemUIInputModule& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputSystemUIInputModule& operator=(InputSystemUIInputModule&& o) noexcept = default;
  constexpr InputSystemUIInputModule& operator=(InputSystemUIInputModule const& o) noexcept = default;
                


// Fields

/// @brief Field kClickSpeed offset 0
static constexpr float_t  kClickSpeed{0.3};

 float_t __declspec(property(get=__get_m_MoveRepeatDelay, put=__set_m_MoveRepeatDelay))  m_MoveRepeatDelay;

constexpr void __set_m_MoveRepeatDelay(float_t value) ;

constexpr float_t __get_m_MoveRepeatDelay() const;

 float_t __declspec(property(get=__get_m_MoveRepeatRate, put=__set_m_MoveRepeatRate))  m_MoveRepeatRate;

constexpr void __set_m_MoveRepeatRate(float_t value) ;

constexpr float_t __get_m_MoveRepeatRate() const;

 float_t __declspec(property(get=__get_m_TrackedDeviceDragThresholdMultiplier, put=__set_m_TrackedDeviceDragThresholdMultiplier))  m_TrackedDeviceDragThresholdMultiplier;

constexpr void __set_m_TrackedDeviceDragThresholdMultiplier(float_t value) ;

constexpr float_t __get_m_TrackedDeviceDragThresholdMultiplier() const;

 ::UnityEngine::Transform __declspec(property(get=__get_m_XRTrackingOrigin, put=__set_m_XRTrackingOrigin))  m_XRTrackingOrigin;

constexpr void __set_m_XRTrackingOrigin(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_m_XRTrackingOrigin() const;

/// @brief Field kPixelPerLine offset 0
static constexpr float_t  kPixelPerLine{20};

 ::UnityEngine::InputSystem::InputActionAsset __declspec(property(get=__get_m_ActionsAsset, put=__set_m_ActionsAsset))  m_ActionsAsset;

constexpr void __set_m_ActionsAsset(::UnityEngine::InputSystem::InputActionAsset value) ;

constexpr ::UnityEngine::InputSystem::InputActionAsset __get_m_ActionsAsset() const;

 ::UnityEngine::InputSystem::InputActionReference __declspec(property(get=__get_m_PointAction, put=__set_m_PointAction))  m_PointAction;

constexpr void __set_m_PointAction(::UnityEngine::InputSystem::InputActionReference value) ;

constexpr ::UnityEngine::InputSystem::InputActionReference __get_m_PointAction() const;

 ::UnityEngine::InputSystem::InputActionReference __declspec(property(get=__get_m_MoveAction, put=__set_m_MoveAction))  m_MoveAction;

constexpr void __set_m_MoveAction(::UnityEngine::InputSystem::InputActionReference value) ;

constexpr ::UnityEngine::InputSystem::InputActionReference __get_m_MoveAction() const;

 ::UnityEngine::InputSystem::InputActionReference __declspec(property(get=__get_m_SubmitAction, put=__set_m_SubmitAction))  m_SubmitAction;

constexpr void __set_m_SubmitAction(::UnityEngine::InputSystem::InputActionReference value) ;

constexpr ::UnityEngine::InputSystem::InputActionReference __get_m_SubmitAction() const;

 ::UnityEngine::InputSystem::InputActionReference __declspec(property(get=__get_m_CancelAction, put=__set_m_CancelAction))  m_CancelAction;

constexpr void __set_m_CancelAction(::UnityEngine::InputSystem::InputActionReference value) ;

constexpr ::UnityEngine::InputSystem::InputActionReference __get_m_CancelAction() const;

 ::UnityEngine::InputSystem::InputActionReference __declspec(property(get=__get_m_LeftClickAction, put=__set_m_LeftClickAction))  m_LeftClickAction;

constexpr void __set_m_LeftClickAction(::UnityEngine::InputSystem::InputActionReference value) ;

constexpr ::UnityEngine::InputSystem::InputActionReference __get_m_LeftClickAction() const;

 ::UnityEngine::InputSystem::InputActionReference __declspec(property(get=__get_m_MiddleClickAction, put=__set_m_MiddleClickAction))  m_MiddleClickAction;

constexpr void __set_m_MiddleClickAction(::UnityEngine::InputSystem::InputActionReference value) ;

constexpr ::UnityEngine::InputSystem::InputActionReference __get_m_MiddleClickAction() const;

 ::UnityEngine::InputSystem::InputActionReference __declspec(property(get=__get_m_RightClickAction, put=__set_m_RightClickAction))  m_RightClickAction;

constexpr void __set_m_RightClickAction(::UnityEngine::InputSystem::InputActionReference value) ;

constexpr ::UnityEngine::InputSystem::InputActionReference __get_m_RightClickAction() const;

 ::UnityEngine::InputSystem::InputActionReference __declspec(property(get=__get_m_ScrollWheelAction, put=__set_m_ScrollWheelAction))  m_ScrollWheelAction;

constexpr void __set_m_ScrollWheelAction(::UnityEngine::InputSystem::InputActionReference value) ;

constexpr ::UnityEngine::InputSystem::InputActionReference __get_m_ScrollWheelAction() const;

 ::UnityEngine::InputSystem::InputActionReference __declspec(property(get=__get_m_TrackedDevicePositionAction, put=__set_m_TrackedDevicePositionAction))  m_TrackedDevicePositionAction;

constexpr void __set_m_TrackedDevicePositionAction(::UnityEngine::InputSystem::InputActionReference value) ;

constexpr ::UnityEngine::InputSystem::InputActionReference __get_m_TrackedDevicePositionAction() const;

 ::UnityEngine::InputSystem::InputActionReference __declspec(property(get=__get_m_TrackedDeviceOrientationAction, put=__set_m_TrackedDeviceOrientationAction))  m_TrackedDeviceOrientationAction;

constexpr void __set_m_TrackedDeviceOrientationAction(::UnityEngine::InputSystem::InputActionReference value) ;

constexpr ::UnityEngine::InputSystem::InputActionReference __get_m_TrackedDeviceOrientationAction() const;

 bool __declspec(property(get=__get_m_DeselectOnBackgroundClick, put=__set_m_DeselectOnBackgroundClick))  m_DeselectOnBackgroundClick;

constexpr void __set_m_DeselectOnBackgroundClick(bool value) ;

constexpr bool __get_m_DeselectOnBackgroundClick() const;

 ::UnityEngine::InputSystem::UI::UIPointerBehavior __declspec(property(get=__get_m_PointerBehavior, put=__set_m_PointerBehavior))  m_PointerBehavior;

constexpr void __set_m_PointerBehavior(::UnityEngine::InputSystem::UI::UIPointerBehavior value) ;

constexpr ::UnityEngine::InputSystem::UI::UIPointerBehavior __get_m_PointerBehavior() const;

 ::UnityEngine::InputSystem::UI::____UnityEngine__InputSystem__UI__InputSystemUIInputModule__CursorLockBehavior __declspec(property(get=__get_m_CursorLockBehavior, put=__set_m_CursorLockBehavior))  m_CursorLockBehavior;

constexpr void __set_m_CursorLockBehavior(::UnityEngine::InputSystem::UI::____UnityEngine__InputSystem__UI__InputSystemUIInputModule__CursorLockBehavior value) ;

constexpr ::UnityEngine::InputSystem::UI::____UnityEngine__InputSystem__UI__InputSystemUIInputModule__CursorLockBehavior __get_m_CursorLockBehavior() const;

static ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputAction,::UnityEngine::InputSystem::UI::____UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState> __declspec(property(get=__get_s_InputActionReferenceCounts, put=__set_s_InputActionReferenceCounts))  s_InputActionReferenceCounts;

static void __set_s_InputActionReferenceCounts(::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputAction,::UnityEngine::InputSystem::UI::____UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState> value) ;

static ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputAction,::UnityEngine::InputSystem::UI::____UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState> __get_s_InputActionReferenceCounts() ;

 bool __declspec(property(get=__get_m_ActionsHooked, put=__set_m_ActionsHooked))  m_ActionsHooked;

constexpr void __set_m_ActionsHooked(bool value) ;

constexpr bool __get_m_ActionsHooked() const;

 bool __declspec(property(get=__get_m_NeedToPurgeStalePointers, put=__set_m_NeedToPurgeStalePointers))  m_NeedToPurgeStalePointers;

constexpr void __set_m_NeedToPurgeStalePointers(bool value) ;

constexpr bool __get_m_NeedToPurgeStalePointers() const;

 ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> __declspec(property(get=__get_m_OnPointDelegate, put=__set_m_OnPointDelegate))  m_OnPointDelegate;

constexpr void __set_m_OnPointDelegate(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> value) ;

constexpr ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> __get_m_OnPointDelegate() const;

 ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> __declspec(property(get=__get_m_OnMoveDelegate, put=__set_m_OnMoveDelegate))  m_OnMoveDelegate;

constexpr void __set_m_OnMoveDelegate(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> value) ;

constexpr ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> __get_m_OnMoveDelegate() const;

 ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> __declspec(property(get=__get_m_OnLeftClickDelegate, put=__set_m_OnLeftClickDelegate))  m_OnLeftClickDelegate;

constexpr void __set_m_OnLeftClickDelegate(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> value) ;

constexpr ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> __get_m_OnLeftClickDelegate() const;

 ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> __declspec(property(get=__get_m_OnRightClickDelegate, put=__set_m_OnRightClickDelegate))  m_OnRightClickDelegate;

constexpr void __set_m_OnRightClickDelegate(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> value) ;

constexpr ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> __get_m_OnRightClickDelegate() const;

 ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> __declspec(property(get=__get_m_OnMiddleClickDelegate, put=__set_m_OnMiddleClickDelegate))  m_OnMiddleClickDelegate;

constexpr void __set_m_OnMiddleClickDelegate(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> value) ;

constexpr ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> __get_m_OnMiddleClickDelegate() const;

 ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> __declspec(property(get=__get_m_OnScrollWheelDelegate, put=__set_m_OnScrollWheelDelegate))  m_OnScrollWheelDelegate;

constexpr void __set_m_OnScrollWheelDelegate(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> value) ;

constexpr ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> __get_m_OnScrollWheelDelegate() const;

 ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> __declspec(property(get=__get_m_OnTrackedDevicePositionDelegate, put=__set_m_OnTrackedDevicePositionDelegate))  m_OnTrackedDevicePositionDelegate;

constexpr void __set_m_OnTrackedDevicePositionDelegate(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> value) ;

constexpr ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> __get_m_OnTrackedDevicePositionDelegate() const;

 ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> __declspec(property(get=__get_m_OnTrackedDeviceOrientationDelegate, put=__set_m_OnTrackedDeviceOrientationDelegate))  m_OnTrackedDeviceOrientationDelegate;

constexpr void __set_m_OnTrackedDeviceOrientationDelegate(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> value) ;

constexpr ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> __get_m_OnTrackedDeviceOrientationDelegate() const;

 ::System::Action_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_m_OnControlsChangedDelegate, put=__set_m_OnControlsChangedDelegate))  m_OnControlsChangedDelegate;

constexpr void __set_m_OnControlsChangedDelegate(::System::Action_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::System::Action_1<::bs_hook::Il2CppWrapperType> __get_m_OnControlsChangedDelegate() const;

 int32_t __declspec(property(get=__get_m_CurrentPointerId, put=__set_m_CurrentPointerId))  m_CurrentPointerId;

constexpr void __set_m_CurrentPointerId(int32_t value) ;

constexpr int32_t __get_m_CurrentPointerId() const;

 int32_t __declspec(property(get=__get_m_CurrentPointerIndex, put=__set_m_CurrentPointerIndex))  m_CurrentPointerIndex;

constexpr void __set_m_CurrentPointerIndex(int32_t value) ;

constexpr int32_t __get_m_CurrentPointerIndex() const;

 ::UnityEngine::InputSystem::UI::UIPointerType __declspec(property(get=__get_m_CurrentPointerType, put=__set_m_CurrentPointerType))  m_CurrentPointerType;

constexpr void __set_m_CurrentPointerType(::UnityEngine::InputSystem::UI::UIPointerType value) ;

constexpr ::UnityEngine::InputSystem::UI::UIPointerType __get_m_CurrentPointerType() const;

 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t> __declspec(property(get=__get_m_PointerIds, put=__set_m_PointerIds))  m_PointerIds;

constexpr void __set_m_PointerIds(::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t> __get_m_PointerIds() const;

 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputControl> __declspec(property(get=__get_m_PointerTouchControls, put=__set_m_PointerTouchControls))  m_PointerTouchControls;

constexpr void __set_m_PointerTouchControls(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputControl> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputControl> __get_m_PointerTouchControls() const;

 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel> __declspec(property(get=__get_m_PointerStates, put=__set_m_PointerStates))  m_PointerStates;

constexpr void __set_m_PointerStates(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel> __get_m_PointerStates() const;

 ::UnityEngine::InputSystem::UI::NavigationModel __declspec(property(get=__get_m_NavigationState, put=__set_m_NavigationState))  m_NavigationState;

constexpr void __set_m_NavigationState(::UnityEngine::InputSystem::UI::NavigationModel value) ;

constexpr ::UnityEngine::InputSystem::UI::NavigationModel __get_m_NavigationState() const;

 ::UnityEngine::GameObject __declspec(property(get=__get_m_LocalMultiPlayerRoot, put=__set_m_LocalMultiPlayerRoot))  m_LocalMultiPlayerRoot;

constexpr void __set_m_LocalMultiPlayerRoot(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_m_LocalMultiPlayerRoot() const;


// Properties

 bool __declspec(property(get=get_deselectOnBackgroundClick, put=set_deselectOnBackgroundClick))  deselectOnBackgroundClick;

 ::UnityEngine::InputSystem::UI::UIPointerBehavior __declspec(property(get=get_pointerBehavior, put=set_pointerBehavior))  pointerBehavior;

 ::UnityEngine::InputSystem::UI::____UnityEngine__InputSystem__UI__InputSystemUIInputModule__CursorLockBehavior __declspec(property(get=get_cursorLockBehavior, put=set_cursorLockBehavior))  cursorLockBehavior;

 ::UnityEngine::GameObject __declspec(property(get=get_localMultiPlayerRoot, put=set_localMultiPlayerRoot))  localMultiPlayerRoot;

 float_t __declspec(property(get=get_moveRepeatDelay, put=set_moveRepeatDelay))  moveRepeatDelay;

 float_t __declspec(property(get=get_moveRepeatRate, put=set_moveRepeatRate))  moveRepeatRate;

 bool __declspec(property(get=get_explictlyIgnoreFocus))  explictlyIgnoreFocus;

 bool __declspec(property(get=get_shouldIgnoreFocus))  shouldIgnoreFocus;

 float_t __declspec(property(get=get_repeatRate, put=set_repeatRate))  repeatRate;

 float_t __declspec(property(get=get_repeatDelay, put=set_repeatDelay))  repeatDelay;

 ::UnityEngine::Transform __declspec(property(get=get_xrTrackingOrigin, put=set_xrTrackingOrigin))  xrTrackingOrigin;

 float_t __declspec(property(get=get_trackedDeviceDragThresholdMultiplier, put=set_trackedDeviceDragThresholdMultiplier))  trackedDeviceDragThresholdMultiplier;

 ::UnityEngine::InputSystem::InputActionReference __declspec(property(get=get_point, put=set_point))  point;

 ::UnityEngine::InputSystem::InputActionReference __declspec(property(get=get_scrollWheel, put=set_scrollWheel))  scrollWheel;

 ::UnityEngine::InputSystem::InputActionReference __declspec(property(get=get_leftClick, put=set_leftClick))  leftClick;

 ::UnityEngine::InputSystem::InputActionReference __declspec(property(get=get_middleClick, put=set_middleClick))  middleClick;

 ::UnityEngine::InputSystem::InputActionReference __declspec(property(get=get_rightClick, put=set_rightClick))  rightClick;

 ::UnityEngine::InputSystem::InputActionReference __declspec(property(get=get_move, put=set_move))  move;

 ::UnityEngine::InputSystem::InputActionReference __declspec(property(get=get_submit, put=set_submit))  submit;

 ::UnityEngine::InputSystem::InputActionReference __declspec(property(get=get_cancel, put=set_cancel))  cancel;

 ::UnityEngine::InputSystem::InputActionReference __declspec(property(get=get_trackedDeviceOrientation, put=set_trackedDeviceOrientation))  trackedDeviceOrientation;

 ::UnityEngine::InputSystem::InputActionReference __declspec(property(get=get_trackedDevicePosition, put=set_trackedDevicePosition))  trackedDevicePosition;

 ::UnityEngine::InputSystem::InputActionReference __declspec(property(get=get_trackedDeviceSelect, put=set_trackedDeviceSelect))  trackedDeviceSelect;

 ::UnityEngine::InputSystem::InputActionAsset __declspec(property(get=get_actionsAsset, put=set_actionsAsset))  actionsAsset;


// Methods

/// @brief Method get_deselectOnBackgroundClick addr 0x293c898 size 0x8 virtual false final false
 bool get_deselectOnBackgroundClick() ;

/// @brief Method set_deselectOnBackgroundClick addr 0x293c8a0 size 0xc virtual false final false
 void set_deselectOnBackgroundClick(bool value) ;

/// @brief Method get_pointerBehavior addr 0x293c8ac size 0x8 virtual false final false
 ::UnityEngine::InputSystem::UI::UIPointerBehavior get_pointerBehavior() ;

/// @brief Method set_pointerBehavior addr 0x293c8b4 size 0x8 virtual false final false
 void set_pointerBehavior(::UnityEngine::InputSystem::UI::UIPointerBehavior value) ;

/// @brief Method get_cursorLockBehavior addr 0x293c8bc size 0x8 virtual false final false
 ::UnityEngine::InputSystem::UI::____UnityEngine__InputSystem__UI__InputSystemUIInputModule__CursorLockBehavior get_cursorLockBehavior() ;

/// @brief Method set_cursorLockBehavior addr 0x293c8c4 size 0x8 virtual false final false
 void set_cursorLockBehavior(::UnityEngine::InputSystem::UI::____UnityEngine__InputSystem__UI__InputSystemUIInputModule__CursorLockBehavior value) ;

/// @brief Method get_localMultiPlayerRoot addr 0x293c8cc size 0x8 virtual false final false
 ::UnityEngine::GameObject get_localMultiPlayerRoot() ;

/// @brief Method set_localMultiPlayerRoot addr 0x293c8d4 size 0x8 virtual false final false
 void set_localMultiPlayerRoot(::UnityEngine::GameObject value) ;

/// @brief Method ActivateModule addr 0x293c8dc size 0xb4 virtual true final false
 void ActivateModule() ;

/// @brief Method IsPointerOverGameObject addr 0x293c990 size 0x168 virtual true final false
 bool IsPointerOverGameObject(int32_t pointerOrTouchId) ;

/// @brief Method GetLastRaycastResult addr 0x293cc28 size 0xb0 virtual false final false
 ::UnityEngine::EventSystems::RaycastResult GetLastRaycastResult(int32_t pointerOrTouchId) ;

/// @brief Method PerformRaycast addr 0x293ccd8 size 0x260 virtual false final false
 ::UnityEngine::EventSystems::RaycastResult PerformRaycast(::UnityEngine::InputSystem::UI::ExtendedPointerEventData eventData) ;

/// @brief Method ProcessPointer addr 0x293d518 size 0x3bc virtual false final false
 void ProcessPointer(ByRef<::UnityEngine::InputSystem::UI::PointerModel> state) ;

/// @brief Method PointerShouldIgnoreTransform addr 0x293e670 size 0xec virtual false final false
 bool PointerShouldIgnoreTransform(::UnityEngine::Transform t) ;

/// @brief Method ProcessPointerMovement addr 0x293d974 size 0x4c virtual false final false
 void ProcessPointerMovement(ByRef<::UnityEngine::InputSystem::UI::PointerModel> pointer, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData eventData) ;

/// @brief Method ProcessPointerMovement addr 0x293e770 size 0x694 virtual false final false
 void ProcessPointerMovement(::UnityEngine::InputSystem::UI::ExtendedPointerEventData eventData, ::UnityEngine::GameObject currentPointerTarget) ;

/// @brief Method ProcessPointerButton addr 0x293d9dc size 0x804 virtual false final false
 void ProcessPointerButton(ByRef<::UnityEngine::InputSystem::UI::____UnityEngine__InputSystem__UI__PointerModel__ButtonState> button, ::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method ProcessPointerButtonDrag addr 0x293e1e0 size 0x2fc virtual false final false
 void ProcessPointerButtonDrag(ByRef<::UnityEngine::InputSystem::UI::____UnityEngine__InputSystem__UI__PointerModel__ButtonState> button, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData eventData) ;

/// @brief Method ProcessPointerScroll addr 0x293e4dc size 0x194 virtual false final false
static void ProcessPointerScroll(ByRef<::UnityEngine::InputSystem::UI::PointerModel> pointer, ::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method ProcessNavigation addr 0x293ee7c size 0x61c virtual false final false
 void ProcessNavigation(ByRef<::UnityEngine::InputSystem::UI::NavigationModel> navigationState) ;

/// @brief Method IsMoveAllowed addr 0x293f498 size 0x1f8 virtual false final false
 bool IsMoveAllowed(::UnityEngine::EventSystems::AxisEventData eventData) ;

/// @brief Method get_moveRepeatDelay addr 0x293f690 size 0x8 virtual false final false
 float_t get_moveRepeatDelay() ;

/// @brief Method set_moveRepeatDelay addr 0x293f698 size 0x8 virtual false final false
 void set_moveRepeatDelay(float_t value) ;

/// @brief Method get_moveRepeatRate addr 0x293f6a0 size 0x8 virtual false final false
 float_t get_moveRepeatRate() ;

/// @brief Method set_moveRepeatRate addr 0x293f6a8 size 0x8 virtual false final false
 void set_moveRepeatRate(float_t value) ;

/// @brief Method get_explictlyIgnoreFocus addr 0x293f6b0 size 0x68 virtual false final false
 bool get_explictlyIgnoreFocus() ;

/// @brief Method get_shouldIgnoreFocus addr 0x293f718 size 0xc8 virtual false final false
 bool get_shouldIgnoreFocus() ;

/// @brief Method get_repeatRate addr 0x293f7e0 size 0x8 virtual false final false
 float_t get_repeatRate() ;

/// @brief Method set_repeatRate addr 0x293f7e8 size 0x8 virtual false final false
 void set_repeatRate(float_t value) ;

/// @brief Method get_repeatDelay addr 0x293f7f0 size 0x8 virtual false final false
 float_t get_repeatDelay() ;

/// @brief Method set_repeatDelay addr 0x293f7f8 size 0x8 virtual false final false
 void set_repeatDelay(float_t value) ;

/// @brief Method get_xrTrackingOrigin addr 0x293f800 size 0x8 virtual false final false
 ::UnityEngine::Transform get_xrTrackingOrigin() ;

/// @brief Method set_xrTrackingOrigin addr 0x293f808 size 0x8 virtual false final false
 void set_xrTrackingOrigin(::UnityEngine::Transform value) ;

/// @brief Method get_trackedDeviceDragThresholdMultiplier addr 0x293f810 size 0x8 virtual false final false
 float_t get_trackedDeviceDragThresholdMultiplier() ;

/// @brief Method set_trackedDeviceDragThresholdMultiplier addr 0x293f818 size 0x8 virtual false final false
 void set_trackedDeviceDragThresholdMultiplier(float_t value) ;

/// @brief Method SwapAction addr 0x293f820 size 0x2b4 virtual false final false
 void SwapAction(ByRef<::UnityEngine::InputSystem::InputActionReference> property, ::UnityEngine::InputSystem::InputActionReference newValue, bool actionsHooked, ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> actionCallback) ;

/// @brief Method get_point addr 0x293fdb8 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::InputActionReference get_point() ;

/// @brief Method set_point addr 0x293fdc0 size 0x18 virtual false final false
 void set_point(::UnityEngine::InputSystem::InputActionReference value) ;

/// @brief Method get_scrollWheel addr 0x293fdd8 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::InputActionReference get_scrollWheel() ;

/// @brief Method set_scrollWheel addr 0x293fde0 size 0x18 virtual false final false
 void set_scrollWheel(::UnityEngine::InputSystem::InputActionReference value) ;

/// @brief Method get_leftClick addr 0x293fdf8 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::InputActionReference get_leftClick() ;

/// @brief Method set_leftClick addr 0x293fe00 size 0x18 virtual false final false
 void set_leftClick(::UnityEngine::InputSystem::InputActionReference value) ;

/// @brief Method get_middleClick addr 0x293fe18 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::InputActionReference get_middleClick() ;

/// @brief Method set_middleClick addr 0x293fe20 size 0x18 virtual false final false
 void set_middleClick(::UnityEngine::InputSystem::InputActionReference value) ;

/// @brief Method get_rightClick addr 0x293fe38 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::InputActionReference get_rightClick() ;

/// @brief Method set_rightClick addr 0x293fe40 size 0x18 virtual false final false
 void set_rightClick(::UnityEngine::InputSystem::InputActionReference value) ;

/// @brief Method get_move addr 0x293fe58 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::InputActionReference get_move() ;

/// @brief Method set_move addr 0x293fe60 size 0x18 virtual false final false
 void set_move(::UnityEngine::InputSystem::InputActionReference value) ;

/// @brief Method get_submit addr 0x293fe78 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::InputActionReference get_submit() ;

/// @brief Method set_submit addr 0x293fe80 size 0x18 virtual false final false
 void set_submit(::UnityEngine::InputSystem::InputActionReference value) ;

/// @brief Method get_cancel addr 0x293fe98 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::InputActionReference get_cancel() ;

/// @brief Method set_cancel addr 0x293fea0 size 0x18 virtual false final false
 void set_cancel(::UnityEngine::InputSystem::InputActionReference value) ;

/// @brief Method get_trackedDeviceOrientation addr 0x293feb8 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::InputActionReference get_trackedDeviceOrientation() ;

/// @brief Method set_trackedDeviceOrientation addr 0x293fec0 size 0x18 virtual false final false
 void set_trackedDeviceOrientation(::UnityEngine::InputSystem::InputActionReference value) ;

/// @brief Method get_trackedDevicePosition addr 0x293fed8 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::InputActionReference get_trackedDevicePosition() ;

/// @brief Method set_trackedDevicePosition addr 0x293fee0 size 0x18 virtual false final false
 void set_trackedDevicePosition(::UnityEngine::InputSystem::InputActionReference value) ;

/// @brief Method AssignDefaultActions addr 0x293fef8 size 0x2cc virtual false final false
 void AssignDefaultActions() ;

/// @brief Method UnassignActions addr 0x29403f4 size 0x104 virtual false final false
 void UnassignActions() ;

/// @brief Method get_trackedDeviceSelect addr 0x29404f8 size 0x40 virtual false final false
 ::UnityEngine::InputSystem::InputActionReference get_trackedDeviceSelect() ;

/// @brief Method set_trackedDeviceSelect addr 0x2940538 size 0x40 virtual false final false
 void set_trackedDeviceSelect(::UnityEngine::InputSystem::InputActionReference value) ;

/// @brief Method Awake addr 0x2940578 size 0x58 virtual true final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x2940620 size 0x30 virtual true final false
 void OnDestroy() ;

/// @brief Method OnEnable addr 0x2940664 size 0xf8 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2940b8c size 0xa0 virtual true final false
 void OnDisable() ;

/// @brief Method ResetPointers addr 0x294088c size 0x44 virtual false final false
 void ResetPointers() ;

/// @brief Method HasNoActions addr 0x294075c size 0x130 virtual false final false
 bool HasNoActions() ;

/// @brief Method EnableAllActions addr 0x2940b30 size 0x5c virtual false final false
 void EnableAllActions() ;

/// @brief Method DisableAllActions addr 0x2940c2c size 0xa8 virtual false final false
 void DisableAllActions() ;

/// @brief Method EnableInputAction addr 0x293fc4c size 0x16c virtual false final false
 void EnableInputAction(::UnityEngine::InputSystem::InputActionReference inputActionReference) ;

/// @brief Method TryDisableInputAction addr 0x293fad4 size 0x178 virtual false final false
 void TryDisableInputAction(::UnityEngine::InputSystem::InputActionReference inputActionReference, bool isComponentDisabling) ;

/// @brief Method GetPointerStateIndexFor addr 0x293caf8 size 0x130 virtual false final false
 int32_t GetPointerStateIndexFor(int32_t pointerOrTouchId) ;

/// @brief Method GetPointerStateForIndex addr 0x2940da0 size 0x44 virtual false final false
 ByRef<::UnityEngine::InputSystem::UI::PointerModel> GetPointerStateForIndex(int32_t index) ;

/// @brief Method GetPointerStateIndexFor addr 0x2940de4 size 0x60 virtual false final false
 int32_t GetPointerStateIndexFor(ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> context) ;

/// @brief Method GetPointerStateIndexFor addr 0x2940ea8 size 0x8a0 virtual false final false
 int32_t GetPointerStateIndexFor(::UnityEngine::InputSystem::InputControl control, bool createIfNotExists) ;

/// @brief Method AllocatePointer addr 0x2941814 size 0x234 virtual false final false
 int32_t AllocatePointer(int32_t pointerId, int32_t touchId, ::UnityEngine::InputSystem::UI::UIPointerType pointerType, ::UnityEngine::InputSystem::InputControl control, ::UnityEngine::InputSystem::InputDevice device, ::UnityEngine::InputSystem::InputControl touchControl) ;

/// @brief Method SendPointerExitEventsAndRemovePointer addr 0x2940cd4 size 0xcc virtual false final false
 void SendPointerExitEventsAndRemovePointer(int32_t index) ;

/// @brief Method RemovePointerAtIndex addr 0x2941af4 size 0x1e8 virtual false final false
 void RemovePointerAtIndex(int32_t index) ;

/// @brief Method PurgeStalePointers addr 0x2941cdc size 0x118 virtual false final false
 void PurgeStalePointers() ;

/// @brief Method HaveControlForDevice addr 0x2941748 size 0xcc virtual false final false
static bool HaveControlForDevice(::UnityEngine::InputSystem::InputDevice device, ::UnityEngine::InputSystem::InputActionReference actionReference) ;

/// @brief Method OnPointCallback addr 0x2941df4 size 0xe8 virtual false final false
 void OnPointCallback(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method IgnoreNextClick addr 0x2941edc size 0x124 virtual false final false
 bool IgnoreNextClick(ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> context, bool wasPressed) ;

/// @brief Method OnLeftClickCallback addr 0x2942000 size 0x80 virtual false final false
 void OnLeftClickCallback(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method OnRightClickCallback addr 0x29420d4 size 0x80 virtual false final false
 void OnRightClickCallback(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method OnMiddleClickCallback addr 0x2942154 size 0x80 virtual false final false
 void OnMiddleClickCallback(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method CheckForRemovedDevice addr 0x2940e44 size 0x64 virtual false final false
 bool CheckForRemovedDevice(ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> context) ;

/// @brief Method OnScrollCallback addr 0x29421d4 size 0xc8 virtual false final false
 void OnScrollCallback(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method OnMoveCallback addr 0x29422dc size 0x60 virtual false final false
 void OnMoveCallback(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method OnTrackedDeviceOrientationCallback addr 0x294233c size 0x84 virtual false final false
 void OnTrackedDeviceOrientationCallback(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method OnTrackedDevicePositionCallback addr 0x2942418 size 0x84 virtual false final false
 void OnTrackedDevicePositionCallback(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method OnControlsChanged addr 0x29424f0 size 0xc virtual false final false
 void OnControlsChanged(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Process addr 0x29424fc size 0x1ac virtual true final false
 void Process() ;

/// @brief Method ConvertUIToolkitPointerId addr 0x29427b8 size 0xd0 virtual true final false
 int32_t ConvertUIToolkitPointerId(::UnityEngine::EventSystems::PointerEventData sourcePointerData) ;

/// @brief Method HookActions addr 0x29408d0 size 0x260 virtual false final false
 void HookActions() ;

/// @brief Method UnhookActions addr 0x2940650 size 0x14 virtual false final false
 void UnhookActions() ;

/// @brief Method SetActionCallbacks addr 0x2942888 size 0xec virtual false final false
 void SetActionCallbacks(bool install) ;

/// @brief Method SetActionCallback addr 0x2942974 size 0xe4 virtual false final false
static void SetActionCallback(::UnityEngine::InputSystem::InputActionReference actionReference, ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> callback, bool install) ;

/// @brief Method UpdateReferenceForNewAsset addr 0x2942a58 size 0x88 virtual false final false
 ::UnityEngine::InputSystem::InputActionReference UpdateReferenceForNewAsset(::UnityEngine::InputSystem::InputActionReference actionReference) ;

/// @brief Method get_actionsAsset addr 0x2942ae0 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::InputActionAsset get_actionsAsset() ;

/// @brief Method set_actionsAsset addr 0x29401c4 size 0x230 virtual false final false
 void set_actionsAsset(::UnityEngine::InputSystem::InputActionAsset value) ;

// Ctor Parameters []
explicit InputSystemUIInputModule() ;

/// @brief Method .ctor addr 0x2942ae8 size 0x2c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::UI
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::____UnityEngine__InputSystem__UI__InputSystemUIInputModule__CursorLockBehavior, "UnityEngine.InputSystem.UI", "InputSystemUIInputModule/CursorLockBehavior");
NEED_NO_BOX(::UnityEngine::InputSystem::UI::InputSystemUIInputModule);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, "UnityEngine.InputSystem.UI", "InputSystemUIInputModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::____UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState, "UnityEngine.InputSystem.UI", "InputSystemUIInputModule/InputActionReferenceState");
