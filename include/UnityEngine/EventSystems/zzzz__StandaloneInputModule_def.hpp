#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerInputModule_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::EventSystems {
class ____UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
struct ____UnityEngine__EventSystems__StandaloneInputModule__InputMode;
}
namespace UnityEngine::EventSystems {
class StandaloneInputModule;
}
// Type: ::InputMode
namespace UnityEngine::EventSystems {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13143))
// CS Name: UnityEngine.EventSystems.StandaloneInputModule::InputMode
struct CORDL_TYPE ____UnityEngine__EventSystems__StandaloneInputModule__InputMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__EventSystems__StandaloneInputModule__InputMode(int32_t value__) noexcept;


                    constexpr ____UnityEngine__EventSystems__StandaloneInputModule__InputMode(____UnityEngine__EventSystems__StandaloneInputModule__InputMode const&) = default;
                    constexpr ____UnityEngine__EventSystems__StandaloneInputModule__InputMode(____UnityEngine__EventSystems__StandaloneInputModule__InputMode&&) = default;
                    constexpr ____UnityEngine__EventSystems__StandaloneInputModule__InputMode& operator=(____UnityEngine__EventSystems__StandaloneInputModule__InputMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__EventSystems__StandaloneInputModule__InputMode& operator=(____UnityEngine__EventSystems__StandaloneInputModule__InputMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__EventSystems__StandaloneInputModule__InputMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__EventSystems__StandaloneInputModule__InputMode_Unwrapped : int32_t {
__Mouse = 0,
__Buttons = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__EventSystems__StandaloneInputModule__InputMode_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__EventSystems__StandaloneInputModule__InputMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Mouse offset 0
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__StandaloneInputModule__InputMode const Mouse;

/// @brief Field Buttons offset 0
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__StandaloneInputModule__InputMode const Buttons;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
// Type: UnityEngine.EventSystems::StandaloneInputModule
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13144))
// CS Name: UnityEngine.EventSystems.StandaloneInputModule
class CORDL_TYPE StandaloneInputModule : public ::UnityEngine::EventSystems::PointerInputModule {
public:
// Declarations
using InputMode = ::UnityEngine::EventSystems::____UnityEngine__EventSystems__StandaloneInputModule__InputMode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~StandaloneInputModule() = default;

// Ctor Parameters [CppParam { name: "", ty: "StandaloneInputModule", modifiers: " const&", def_value: None }]
constexpr StandaloneInputModule(StandaloneInputModule const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StandaloneInputModule", modifiers: "&&", def_value: None }]
constexpr StandaloneInputModule(StandaloneInputModule&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StandaloneInputModule(void* ptr) noexcept : ::UnityEngine::EventSystems::PointerInputModule(ptr) {
}


  constexpr StandaloneInputModule& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StandaloneInputModule& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StandaloneInputModule& operator=(StandaloneInputModule&& o) noexcept = default;
  constexpr StandaloneInputModule& operator=(StandaloneInputModule const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_m_PrevActionTime, put=__set_m_PrevActionTime))  m_PrevActionTime;

constexpr void __set_m_PrevActionTime(float_t value) ;

constexpr float_t __get_m_PrevActionTime() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_LastMoveVector, put=__set_m_LastMoveVector))  m_LastMoveVector;

constexpr void __set_m_LastMoveVector(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_LastMoveVector() const;

 int32_t __declspec(property(get=__get_m_ConsecutiveMoveCount, put=__set_m_ConsecutiveMoveCount))  m_ConsecutiveMoveCount;

constexpr void __set_m_ConsecutiveMoveCount(int32_t value) ;

constexpr int32_t __get_m_ConsecutiveMoveCount() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_LastMousePosition, put=__set_m_LastMousePosition))  m_LastMousePosition;

constexpr void __set_m_LastMousePosition(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_LastMousePosition() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_MousePosition, put=__set_m_MousePosition))  m_MousePosition;

constexpr void __set_m_MousePosition(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_MousePosition() const;

 ::UnityEngine::GameObject __declspec(property(get=__get_m_CurrentFocusedGameObject, put=__set_m_CurrentFocusedGameObject))  m_CurrentFocusedGameObject;

constexpr void __set_m_CurrentFocusedGameObject(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_m_CurrentFocusedGameObject() const;

 ::UnityEngine::EventSystems::PointerEventData __declspec(property(get=__get_m_InputPointerEvent, put=__set_m_InputPointerEvent))  m_InputPointerEvent;

constexpr void __set_m_InputPointerEvent(::UnityEngine::EventSystems::PointerEventData value) ;

constexpr ::UnityEngine::EventSystems::PointerEventData __get_m_InputPointerEvent() const;

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

 float_t __declspec(property(get=__get_m_RepeatDelay, put=__set_m_RepeatDelay))  m_RepeatDelay;

constexpr void __set_m_RepeatDelay(float_t value) ;

constexpr float_t __get_m_RepeatDelay() const;

 bool __declspec(property(get=__get_m_ForceModuleActive, put=__set_m_ForceModuleActive))  m_ForceModuleActive;

constexpr void __set_m_ForceModuleActive(bool value) ;

constexpr bool __get_m_ForceModuleActive() const;


// Properties

 ::UnityEngine::EventSystems::____UnityEngine__EventSystems__StandaloneInputModule__InputMode __declspec(property(get=get_inputMode))  inputMode;

 bool __declspec(property(get=get_allowActivationOnMobileDevice, put=set_allowActivationOnMobileDevice))  allowActivationOnMobileDevice;

 bool __declspec(property(get=get_forceModuleActive, put=set_forceModuleActive))  forceModuleActive;

 float_t __declspec(property(get=get_inputActionsPerSecond, put=set_inputActionsPerSecond))  inputActionsPerSecond;

 float_t __declspec(property(get=get_repeatDelay, put=set_repeatDelay))  repeatDelay;

 ::StringW __declspec(property(get=get_horizontalAxis, put=set_horizontalAxis))  horizontalAxis;

 ::StringW __declspec(property(get=get_verticalAxis, put=set_verticalAxis))  verticalAxis;

 ::StringW __declspec(property(get=get_submitButton, put=set_submitButton))  submitButton;

 ::StringW __declspec(property(get=get_cancelButton, put=set_cancelButton))  cancelButton;


// Methods

// Ctor Parameters []
explicit StandaloneInputModule() ;

/// @brief Method .ctor addr 0x2c2401c size 0xbc virtual false final false
 void _ctor() ;

/// @brief Method get_inputMode addr 0x2c240d8 size 0x8 virtual false final false
 ::UnityEngine::EventSystems::____UnityEngine__EventSystems__StandaloneInputModule__InputMode get_inputMode() ;

/// @brief Method get_allowActivationOnMobileDevice addr 0x2c240e0 size 0x8 virtual false final false
 bool get_allowActivationOnMobileDevice() ;

/// @brief Method set_allowActivationOnMobileDevice addr 0x2c240e8 size 0xc virtual false final false
 void set_allowActivationOnMobileDevice(bool value) ;

/// @brief Method get_forceModuleActive addr 0x2c240f4 size 0x8 virtual false final false
 bool get_forceModuleActive() ;

/// @brief Method set_forceModuleActive addr 0x2c240fc size 0xc virtual false final false
 void set_forceModuleActive(bool value) ;

/// @brief Method get_inputActionsPerSecond addr 0x2c24108 size 0x8 virtual false final false
 float_t get_inputActionsPerSecond() ;

/// @brief Method set_inputActionsPerSecond addr 0x2c24110 size 0x8 virtual false final false
 void set_inputActionsPerSecond(float_t value) ;

/// @brief Method get_repeatDelay addr 0x2c24118 size 0x8 virtual false final false
 float_t get_repeatDelay() ;

/// @brief Method set_repeatDelay addr 0x2c24120 size 0x8 virtual false final false
 void set_repeatDelay(float_t value) ;

/// @brief Method get_horizontalAxis addr 0x2c24128 size 0x8 virtual false final false
 ::StringW get_horizontalAxis() ;

/// @brief Method set_horizontalAxis addr 0x2c24130 size 0x8 virtual false final false
 void set_horizontalAxis(::StringW value) ;

/// @brief Method get_verticalAxis addr 0x2c24138 size 0x8 virtual false final false
 ::StringW get_verticalAxis() ;

/// @brief Method set_verticalAxis addr 0x2c24140 size 0x8 virtual false final false
 void set_verticalAxis(::StringW value) ;

/// @brief Method get_submitButton addr 0x2c24148 size 0x8 virtual false final false
 ::StringW get_submitButton() ;

/// @brief Method set_submitButton addr 0x2c24150 size 0x8 virtual false final false
 void set_submitButton(::StringW value) ;

/// @brief Method get_cancelButton addr 0x2c24158 size 0x8 virtual false final false
 ::StringW get_cancelButton() ;

/// @brief Method set_cancelButton addr 0x2c24160 size 0x8 virtual false final false
 void set_cancelButton(::StringW value) ;

/// @brief Method ShouldIgnoreEventsOnNoFocus addr 0x2c24168 size 0x8 virtual false final false
 bool ShouldIgnoreEventsOnNoFocus() ;

/// @brief Method UpdateModule addr 0x2c24170 size 0xd0 virtual true final false
 void UpdateModule() ;

/// @brief Method ReleaseMouse addr 0x2c24240 size 0x36c virtual false final false
 void ReleaseMouse(::UnityEngine::EventSystems::PointerEventData pointerEvent, ::UnityEngine::GameObject currentOverGo) ;

/// @brief Method ShouldActivateModule addr 0x2c245ac size 0x234 virtual true final false
 bool ShouldActivateModule() ;

/// @brief Method ActivateModule addr 0x2c247e0 size 0x100 virtual true final false
 void ActivateModule() ;

/// @brief Method DeactivateModule addr 0x2c248e0 size 0x4 virtual true final false
 void DeactivateModule() ;

/// @brief Method Process addr 0x2c248e4 size 0xa4 virtual true final false
 void Process() ;

/// @brief Method ProcessTouchEvents addr 0x2c24ad0 size 0x164 virtual false final false
 bool ProcessTouchEvents() ;

/// @brief Method ProcessTouchPress addr 0x2c250ac size 0x664 virtual false final false
 void ProcessTouchPress(::UnityEngine::EventSystems::PointerEventData pointerEvent, bool pressed, bool released) ;

/// @brief Method SendSubmitEventToSelectedObject addr 0x2c24ea0 size 0x20c virtual false final false
 bool SendSubmitEventToSelectedObject() ;

/// @brief Method GetRawMoveVector addr 0x2c25710 size 0x110 virtual false final false
 ::UnityEngine::Vector2 GetRawMoveVector() ;

/// @brief Method SendMoveEventToSelectedObject addr 0x2c24c3c size 0x264 virtual false final false
 bool SendMoveEventToSelectedObject() ;

/// @brief Method ProcessMouseEvent addr 0x2c24c34 size 0x8 virtual false final false
 void ProcessMouseEvent() ;

/// @brief Method ForceAutoSelect addr 0x2c25ac8 size 0x8 virtual true final false
 bool ForceAutoSelect() ;

/// @brief Method ProcessMouseEvent addr 0x2c25820 size 0x2a8 virtual false final false
 void ProcessMouseEvent(int32_t id) ;

/// @brief Method SendUpdateEventToSelectedObject addr 0x2c24988 size 0x148 virtual false final false
 bool SendUpdateEventToSelectedObject() ;

/// @brief Method ProcessMousePress addr 0x2c25ad0 size 0x354 virtual false final false
 void ProcessMousePress(::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData data) ;

/// @brief Method GetCurrentFocusedGameObject addr 0x2c25e24 size 0x8 virtual false final false
 ::UnityEngine::GameObject GetCurrentFocusedGameObject() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::____UnityEngine__EventSystems__StandaloneInputModule__InputMode, "UnityEngine.EventSystems", "StandaloneInputModule/InputMode");
NEED_NO_BOX(::UnityEngine::EventSystems::StandaloneInputModule);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::StandaloneInputModule, "UnityEngine.EventSystems", "StandaloneInputModule");
