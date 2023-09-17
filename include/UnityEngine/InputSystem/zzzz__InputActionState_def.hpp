#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem {
class InputProcessor;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem {
class IInputInteraction;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::InputSystem::Utilities {
class ISavedState;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateChangeMonitor;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem {
struct InputActionChange;
}
namespace UnityEngine::InputSystem {
class InputBindingComposite;
}
namespace UnityEngine::InputSystem {
template<typename TControl>
struct InputControlList_1;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace System {
class ICloneable;
}
namespace System {
class Action;
}
namespace UnityEngine::InputSystem {
struct InputActionPhase;
}
namespace UnityEngine::InputSystem {
struct InputBindingResolver;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputAction__CallbackContext;
}
namespace UnityEngine::InputSystem {
template<typename TValue>
class InputControl_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TDelegate>
struct CallbackArray_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename T>
class ____UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct ______UnityEngine__InputSystem__InputActionState__BindingState__Flags;
}
namespace GlobalNamespace {
struct ______UnityEngine__InputSystem__InputActionState__InteractionState__Flags;
}
namespace GlobalNamespace {
struct ______UnityEngine__InputSystem__InputActionState__TriggerState__Flags;
}
namespace UnityEngine::InputSystem {
class InputActionState;
}
namespace UnityEngine::InputSystem {
class ____UnityEngine__InputSystem__InputActionState____c;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionState__ActionMapIndices;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionState__BindingState;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionState__GlobalState;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionState__InteractionState;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionState__TriggerState;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionState__UnmanagedMemory;
}
// Type: ::Flags
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6254))
// CS Name: UnityEngine.InputSystem.InputActionState::InteractionState::Flags
struct CORDL_TYPE ______UnityEngine__InputSystem__InputActionState__InteractionState__Flags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ______UnityEngine__InputSystem__InputActionState__InteractionState__Flags(int32_t value__) noexcept;


                    constexpr ______UnityEngine__InputSystem__InputActionState__InteractionState__Flags(______UnityEngine__InputSystem__InputActionState__InteractionState__Flags const&) = default;
                    constexpr ______UnityEngine__InputSystem__InputActionState__InteractionState__Flags(______UnityEngine__InputSystem__InputActionState__InteractionState__Flags&&) = default;
                    constexpr ______UnityEngine__InputSystem__InputActionState__InteractionState__Flags& operator=(______UnityEngine__InputSystem__InputActionState__InteractionState__Flags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ______UnityEngine__InputSystem__InputActionState__InteractionState__Flags& operator=(______UnityEngine__InputSystem__InputActionState__InteractionState__Flags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ______UnityEngine__InputSystem__InputActionState__InteractionState__Flags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ________UnityEngine__InputSystem__InputActionState__InteractionState__Flags_Unwrapped : int32_t {
__TimerRunning = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ________UnityEngine__InputSystem__InputActionState__InteractionState__Flags_Unwrapped () const noexcept {
return std::bit_cast<________UnityEngine__InputSystem__InputActionState__InteractionState__Flags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field TimerRunning offset 0
static ::GlobalNamespace::______UnityEngine__InputSystem__InputActionState__InteractionState__Flags const TimerRunning;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::InteractionState
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6255))
// CS Name: UnityEngine.InputSystem.InputActionState::InteractionState
struct CORDL_TYPE ____UnityEngine__InputSystem__InputActionState__InteractionState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Flags = ::GlobalNamespace::______UnityEngine__InputSystem__InputActionState__InteractionState__Flags;

// Ctor Parameters [CppParam { name: "m_TriggerControlIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_Phase", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_TimerDuration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_StartTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_TimerStartTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_PerformedTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_TotalTimeoutCompletionTimeDone", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_TotalTimeoutCompletionTimeRemaining", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_TimerMonitorIndex", ty: "int64_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionState__InteractionState(uint16_t m_TriggerControlIndex, uint8_t m_Phase, uint8_t m_Flags, float_t m_TimerDuration, double_t m_StartTime, double_t m_TimerStartTime, double_t m_PerformedTime, float_t m_TotalTimeoutCompletionTimeDone, float_t m_TotalTimeoutCompletionTimeRemaining, int64_t m_TimerMonitorIndex) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputActionState__InteractionState(____UnityEngine__InputSystem__InputActionState__InteractionState const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionState__InteractionState(____UnityEngine__InputSystem__InputActionState__InteractionState&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionState__InteractionState& operator=(____UnityEngine__InputSystem__InputActionState__InteractionState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputActionState__InteractionState& operator=(____UnityEngine__InputSystem__InputActionState__InteractionState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionState__InteractionState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint16_t __declspec(property(get=__get_m_TriggerControlIndex, put=__set_m_TriggerControlIndex))  m_TriggerControlIndex;

constexpr void __set_m_TriggerControlIndex(uint16_t value) ;

constexpr uint16_t __get_m_TriggerControlIndex() const;

 uint8_t __declspec(property(get=__get_m_Phase, put=__set_m_Phase))  m_Phase;

constexpr void __set_m_Phase(uint8_t value) ;

constexpr uint8_t __get_m_Phase() const;

 uint8_t __declspec(property(get=__get_m_Flags, put=__set_m_Flags))  m_Flags;

constexpr void __set_m_Flags(uint8_t value) ;

constexpr uint8_t __get_m_Flags() const;

 float_t __declspec(property(get=__get_m_TimerDuration, put=__set_m_TimerDuration))  m_TimerDuration;

constexpr void __set_m_TimerDuration(float_t value) ;

constexpr float_t __get_m_TimerDuration() const;

 double_t __declspec(property(get=__get_m_StartTime, put=__set_m_StartTime))  m_StartTime;

constexpr void __set_m_StartTime(double_t value) ;

constexpr double_t __get_m_StartTime() const;

 double_t __declspec(property(get=__get_m_TimerStartTime, put=__set_m_TimerStartTime))  m_TimerStartTime;

constexpr void __set_m_TimerStartTime(double_t value) ;

constexpr double_t __get_m_TimerStartTime() const;

 double_t __declspec(property(get=__get_m_PerformedTime, put=__set_m_PerformedTime))  m_PerformedTime;

constexpr void __set_m_PerformedTime(double_t value) ;

constexpr double_t __get_m_PerformedTime() const;

 float_t __declspec(property(get=__get_m_TotalTimeoutCompletionTimeDone, put=__set_m_TotalTimeoutCompletionTimeDone))  m_TotalTimeoutCompletionTimeDone;

constexpr void __set_m_TotalTimeoutCompletionTimeDone(float_t value) ;

constexpr float_t __get_m_TotalTimeoutCompletionTimeDone() const;

 float_t __declspec(property(get=__get_m_TotalTimeoutCompletionTimeRemaining, put=__set_m_TotalTimeoutCompletionTimeRemaining))  m_TotalTimeoutCompletionTimeRemaining;

constexpr void __set_m_TotalTimeoutCompletionTimeRemaining(float_t value) ;

constexpr float_t __get_m_TotalTimeoutCompletionTimeRemaining() const;

 int64_t __declspec(property(get=__get_m_TimerMonitorIndex, put=__set_m_TimerMonitorIndex))  m_TimerMonitorIndex;

constexpr void __set_m_TimerMonitorIndex(int64_t value) ;

constexpr int64_t __get_m_TimerMonitorIndex() const;


// Properties

 int32_t __declspec(property(get=get_triggerControlIndex, put=set_triggerControlIndex))  triggerControlIndex;

 double_t __declspec(property(get=get_startTime, put=set_startTime))  startTime;

 double_t __declspec(property(get=get_performedTime, put=set_performedTime))  performedTime;

 double_t __declspec(property(get=get_timerStartTime, put=set_timerStartTime))  timerStartTime;

 float_t __declspec(property(get=get_timerDuration, put=set_timerDuration))  timerDuration;

 float_t __declspec(property(get=get_totalTimeoutCompletionDone, put=set_totalTimeoutCompletionDone))  totalTimeoutCompletionDone;

 float_t __declspec(property(get=get_totalTimeoutCompletionTimeRemaining, put=set_totalTimeoutCompletionTimeRemaining))  totalTimeoutCompletionTimeRemaining;

 int64_t __declspec(property(get=get_timerMonitorIndex, put=set_timerMonitorIndex))  timerMonitorIndex;

 bool __declspec(property(get=get_isTimerRunning, put=set_isTimerRunning))  isTimerRunning;

 ::UnityEngine::InputSystem::InputActionPhase __declspec(property(get=get_phase, put=set_phase))  phase;


// Methods

/// @brief Method get_triggerControlIndex addr 0x28bc0d0 size 0x14 virtual false final false
 int32_t get_triggerControlIndex() ;

/// @brief Method set_triggerControlIndex addr 0x28bcef4 size 0x74 virtual false final false
 void set_triggerControlIndex(int32_t value) ;

/// @brief Method get_startTime addr 0x28c1a9c size 0x8 virtual false final false
 double_t get_startTime() ;

/// @brief Method set_startTime addr 0x28c1aa4 size 0x8 virtual false final false
 void set_startTime(double_t value) ;

/// @brief Method get_performedTime addr 0x28c1aac size 0x8 virtual false final false
 double_t get_performedTime() ;

/// @brief Method set_performedTime addr 0x28c1ab4 size 0x8 virtual false final false
 void set_performedTime(double_t value) ;

/// @brief Method get_timerStartTime addr 0x28c1abc size 0x8 virtual false final false
 double_t get_timerStartTime() ;

/// @brief Method set_timerStartTime addr 0x28c1ac4 size 0x8 virtual false final false
 void set_timerStartTime(double_t value) ;

/// @brief Method get_timerDuration addr 0x28c1acc size 0x8 virtual false final false
 float_t get_timerDuration() ;

/// @brief Method set_timerDuration addr 0x28c1ad4 size 0x8 virtual false final false
 void set_timerDuration(float_t value) ;

/// @brief Method get_totalTimeoutCompletionDone addr 0x28c1adc size 0x8 virtual false final false
 float_t get_totalTimeoutCompletionDone() ;

/// @brief Method set_totalTimeoutCompletionDone addr 0x28c1ae4 size 0x8 virtual false final false
 void set_totalTimeoutCompletionDone(float_t value) ;

/// @brief Method get_totalTimeoutCompletionTimeRemaining addr 0x28c1aec size 0x8 virtual false final false
 float_t get_totalTimeoutCompletionTimeRemaining() ;

/// @brief Method set_totalTimeoutCompletionTimeRemaining addr 0x28c1af4 size 0x8 virtual false final false
 void set_totalTimeoutCompletionTimeRemaining(float_t value) ;

/// @brief Method get_timerMonitorIndex addr 0x28c1afc size 0x8 virtual false final false
 int64_t get_timerMonitorIndex() ;

/// @brief Method set_timerMonitorIndex addr 0x28c1b04 size 0x8 virtual false final false
 void set_timerMonitorIndex(int64_t value) ;

/// @brief Method get_isTimerRunning addr 0x28bcf68 size 0xc virtual false final false
 bool get_isTimerRunning() ;

/// @brief Method set_isTimerRunning addr 0x28bf5b8 size 0x1c virtual false final false
 void set_isTimerRunning(bool value) ;

/// @brief Method get_phase addr 0x28c1b0c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::InputActionPhase get_phase() ;

/// @brief Method set_phase addr 0x28bceec size 0x8 virtual false final false
 void set_phase(::UnityEngine::InputSystem::InputActionPhase value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::Flags
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6256))
// CS Name: UnityEngine.InputSystem.InputActionState::BindingState::Flags
struct CORDL_TYPE ______UnityEngine__InputSystem__InputActionState__BindingState__Flags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ______UnityEngine__InputSystem__InputActionState__BindingState__Flags(int32_t value__) noexcept;


                    constexpr ______UnityEngine__InputSystem__InputActionState__BindingState__Flags(______UnityEngine__InputSystem__InputActionState__BindingState__Flags const&) = default;
                    constexpr ______UnityEngine__InputSystem__InputActionState__BindingState__Flags(______UnityEngine__InputSystem__InputActionState__BindingState__Flags&&) = default;
                    constexpr ______UnityEngine__InputSystem__InputActionState__BindingState__Flags& operator=(______UnityEngine__InputSystem__InputActionState__BindingState__Flags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ______UnityEngine__InputSystem__InputActionState__BindingState__Flags& operator=(______UnityEngine__InputSystem__InputActionState__BindingState__Flags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ______UnityEngine__InputSystem__InputActionState__BindingState__Flags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ________UnityEngine__InputSystem__InputActionState__BindingState__Flags_Unwrapped : int32_t {
__ChainsWithNext = 1,
__EndOfChain = 2,
__Composite = 4,
__PartOfComposite = 8,
__InitialStateCheckPending = 16,
__WantsInitialStateCheck = 32,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ________UnityEngine__InputSystem__InputActionState__BindingState__Flags_Unwrapped () const noexcept {
return std::bit_cast<________UnityEngine__InputSystem__InputActionState__BindingState__Flags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ChainsWithNext offset 0
static ::GlobalNamespace::______UnityEngine__InputSystem__InputActionState__BindingState__Flags const ChainsWithNext;

/// @brief Field EndOfChain offset 0
static ::GlobalNamespace::______UnityEngine__InputSystem__InputActionState__BindingState__Flags const EndOfChain;

/// @brief Field Composite offset 0
static ::GlobalNamespace::______UnityEngine__InputSystem__InputActionState__BindingState__Flags const Composite;

/// @brief Field PartOfComposite offset 0
static ::GlobalNamespace::______UnityEngine__InputSystem__InputActionState__BindingState__Flags const PartOfComposite;

/// @brief Field InitialStateCheckPending offset 0
static ::GlobalNamespace::______UnityEngine__InputSystem__InputActionState__BindingState__Flags const InitialStateCheckPending;

/// @brief Field WantsInitialStateCheck offset 0
static ::GlobalNamespace::______UnityEngine__InputSystem__InputActionState__BindingState__Flags const WantsInitialStateCheck;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BindingState
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6257))
// CS Name: UnityEngine.InputSystem.InputActionState::BindingState
struct CORDL_TYPE ____UnityEngine__InputSystem__InputActionState__BindingState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Flags = ::GlobalNamespace::______UnityEngine__InputSystem__InputActionState__BindingState__Flags;

// Ctor Parameters [CppParam { name: "m_ControlCount", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_InteractionCount", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_ProcessorCount", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_MapIndex", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_PartIndex", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_ActionIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_CompositeOrCompositeBindingIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_ProcessorStartIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_InteractionStartIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_ControlStartIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_PressTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_TriggerEventIdForComposite", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__padding", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionState__BindingState(uint8_t m_ControlCount, uint8_t m_InteractionCount, uint8_t m_ProcessorCount, uint8_t m_MapIndex, uint8_t m_Flags, uint8_t m_PartIndex, uint16_t m_ActionIndex, uint16_t m_CompositeOrCompositeBindingIndex, uint16_t m_ProcessorStartIndex, uint16_t m_InteractionStartIndex, uint16_t m_ControlStartIndex, double_t m_PressTime, int32_t m_TriggerEventIdForComposite, int32_t __padding) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputActionState__BindingState(____UnityEngine__InputSystem__InputActionState__BindingState const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionState__BindingState(____UnityEngine__InputSystem__InputActionState__BindingState&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionState__BindingState& operator=(____UnityEngine__InputSystem__InputActionState__BindingState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputActionState__BindingState& operator=(____UnityEngine__InputSystem__InputActionState__BindingState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionState__BindingState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint8_t __declspec(property(get=__get_m_ControlCount, put=__set_m_ControlCount))  m_ControlCount;

constexpr void __set_m_ControlCount(uint8_t value) ;

constexpr uint8_t __get_m_ControlCount() const;

 uint8_t __declspec(property(get=__get_m_InteractionCount, put=__set_m_InteractionCount))  m_InteractionCount;

constexpr void __set_m_InteractionCount(uint8_t value) ;

constexpr uint8_t __get_m_InteractionCount() const;

 uint8_t __declspec(property(get=__get_m_ProcessorCount, put=__set_m_ProcessorCount))  m_ProcessorCount;

constexpr void __set_m_ProcessorCount(uint8_t value) ;

constexpr uint8_t __get_m_ProcessorCount() const;

 uint8_t __declspec(property(get=__get_m_MapIndex, put=__set_m_MapIndex))  m_MapIndex;

constexpr void __set_m_MapIndex(uint8_t value) ;

constexpr uint8_t __get_m_MapIndex() const;

 uint8_t __declspec(property(get=__get_m_Flags, put=__set_m_Flags))  m_Flags;

constexpr void __set_m_Flags(uint8_t value) ;

constexpr uint8_t __get_m_Flags() const;

 uint8_t __declspec(property(get=__get_m_PartIndex, put=__set_m_PartIndex))  m_PartIndex;

constexpr void __set_m_PartIndex(uint8_t value) ;

constexpr uint8_t __get_m_PartIndex() const;

 uint16_t __declspec(property(get=__get_m_ActionIndex, put=__set_m_ActionIndex))  m_ActionIndex;

constexpr void __set_m_ActionIndex(uint16_t value) ;

constexpr uint16_t __get_m_ActionIndex() const;

 uint16_t __declspec(property(get=__get_m_CompositeOrCompositeBindingIndex, put=__set_m_CompositeOrCompositeBindingIndex))  m_CompositeOrCompositeBindingIndex;

constexpr void __set_m_CompositeOrCompositeBindingIndex(uint16_t value) ;

constexpr uint16_t __get_m_CompositeOrCompositeBindingIndex() const;

 uint16_t __declspec(property(get=__get_m_ProcessorStartIndex, put=__set_m_ProcessorStartIndex))  m_ProcessorStartIndex;

constexpr void __set_m_ProcessorStartIndex(uint16_t value) ;

constexpr uint16_t __get_m_ProcessorStartIndex() const;

 uint16_t __declspec(property(get=__get_m_InteractionStartIndex, put=__set_m_InteractionStartIndex))  m_InteractionStartIndex;

constexpr void __set_m_InteractionStartIndex(uint16_t value) ;

constexpr uint16_t __get_m_InteractionStartIndex() const;

 uint16_t __declspec(property(get=__get_m_ControlStartIndex, put=__set_m_ControlStartIndex))  m_ControlStartIndex;

constexpr void __set_m_ControlStartIndex(uint16_t value) ;

constexpr uint16_t __get_m_ControlStartIndex() const;

 double_t __declspec(property(get=__get_m_PressTime, put=__set_m_PressTime))  m_PressTime;

constexpr void __set_m_PressTime(double_t value) ;

constexpr double_t __get_m_PressTime() const;

 int32_t __declspec(property(get=__get_m_TriggerEventIdForComposite, put=__set_m_TriggerEventIdForComposite))  m_TriggerEventIdForComposite;

constexpr void __set_m_TriggerEventIdForComposite(int32_t value) ;

constexpr int32_t __get_m_TriggerEventIdForComposite() const;

 int32_t __declspec(property(get=__get___padding, put=__set___padding))  __padding;

constexpr void __set___padding(int32_t value) ;

constexpr int32_t __get___padding() const;


// Properties

 int32_t __declspec(property(get=get_controlStartIndex, put=set_controlStartIndex))  controlStartIndex;

 int32_t __declspec(property(get=get_controlCount, put=set_controlCount))  controlCount;

 int32_t __declspec(property(get=get_interactionStartIndex, put=set_interactionStartIndex))  interactionStartIndex;

 int32_t __declspec(property(get=get_interactionCount, put=set_interactionCount))  interactionCount;

 int32_t __declspec(property(get=get_processorStartIndex, put=set_processorStartIndex))  processorStartIndex;

 int32_t __declspec(property(get=get_processorCount, put=set_processorCount))  processorCount;

 int32_t __declspec(property(get=get_actionIndex, put=set_actionIndex))  actionIndex;

 int32_t __declspec(property(get=get_mapIndex, put=set_mapIndex))  mapIndex;

 int32_t __declspec(property(get=get_compositeOrCompositeBindingIndex, put=set_compositeOrCompositeBindingIndex))  compositeOrCompositeBindingIndex;

 int32_t __declspec(property(get=get_triggerEventIdForComposite, put=set_triggerEventIdForComposite))  triggerEventIdForComposite;

 double_t __declspec(property(get=get_pressTime, put=set_pressTime))  pressTime;

 ::GlobalNamespace::______UnityEngine__InputSystem__InputActionState__BindingState__Flags __declspec(property(get=get_flags, put=set_flags))  flags;

 bool __declspec(property(get=get_chainsWithNext, put=set_chainsWithNext))  chainsWithNext;

 bool __declspec(property(get=get_isEndOfChain, put=set_isEndOfChain))  isEndOfChain;

 bool __declspec(property(get=get_isPartOfChain))  isPartOfChain;

 bool __declspec(property(get=get_isComposite, put=set_isComposite))  isComposite;

 bool __declspec(property(get=get_isPartOfComposite, put=set_isPartOfComposite))  isPartOfComposite;

 bool __declspec(property(get=get_initialStateCheckPending, put=set_initialStateCheckPending))  initialStateCheckPending;

 bool __declspec(property(get=get_wantsInitialStateCheck, put=set_wantsInitialStateCheck))  wantsInitialStateCheck;

 int32_t __declspec(property(get=get_partIndex, put=set_partIndex))  partIndex;


// Methods

/// @brief Method get_controlStartIndex addr 0x28c1b14 size 0x8 virtual false final false
 int32_t get_controlStartIndex() ;

/// @brief Method set_controlStartIndex addr 0x28c1b1c size 0x98 virtual false final false
 void set_controlStartIndex(int32_t value) ;

/// @brief Method get_controlCount addr 0x28c1bb4 size 0x8 virtual false final false
 int32_t get_controlCount() ;

/// @brief Method set_controlCount addr 0x28c1bbc size 0x98 virtual false final false
 void set_controlCount(int32_t value) ;

/// @brief Method get_interactionStartIndex addr 0x28bc0bc size 0x14 virtual false final false
 int32_t get_interactionStartIndex() ;

/// @brief Method set_interactionStartIndex addr 0x28c1c54 size 0xa8 virtual false final false
 void set_interactionStartIndex(int32_t value) ;

/// @brief Method get_interactionCount addr 0x28c1cfc size 0x8 virtual false final false
 int32_t get_interactionCount() ;

/// @brief Method set_interactionCount addr 0x28c1d04 size 0x98 virtual false final false
 void set_interactionCount(int32_t value) ;

/// @brief Method get_processorStartIndex addr 0x28c04fc size 0x14 virtual false final false
 int32_t get_processorStartIndex() ;

/// @brief Method set_processorStartIndex addr 0x28c1d9c size 0xa8 virtual false final false
 void set_processorStartIndex(int32_t value) ;

/// @brief Method get_processorCount addr 0x28c1e44 size 0x8 virtual false final false
 int32_t get_processorCount() ;

/// @brief Method set_processorCount addr 0x28c1e4c size 0x98 virtual false final false
 void set_processorCount(int32_t value) ;

/// @brief Method get_actionIndex addr 0x28bcba8 size 0x14 virtual false final false
 int32_t get_actionIndex() ;

/// @brief Method set_actionIndex addr 0x28c1ee4 size 0xa8 virtual false final false
 void set_actionIndex(int32_t value) ;

/// @brief Method get_mapIndex addr 0x28c1f8c size 0x8 virtual false final false
 int32_t get_mapIndex() ;

/// @brief Method set_mapIndex addr 0x28c1f94 size 0x98 virtual false final false
 void set_mapIndex(int32_t value) ;

/// @brief Method get_compositeOrCompositeBindingIndex addr 0x28bae7c size 0x14 virtual false final false
 int32_t get_compositeOrCompositeBindingIndex() ;

/// @brief Method set_compositeOrCompositeBindingIndex addr 0x28c202c size 0xa8 virtual false final false
 void set_compositeOrCompositeBindingIndex(int32_t value) ;

/// @brief Method get_triggerEventIdForComposite addr 0x28c20d4 size 0x8 virtual false final false
 int32_t get_triggerEventIdForComposite() ;

/// @brief Method set_triggerEventIdForComposite addr 0x28c20dc size 0x8 virtual false final false
 void set_triggerEventIdForComposite(int32_t value) ;

/// @brief Method get_pressTime addr 0x28c20e4 size 0x8 virtual false final false
 double_t get_pressTime() ;

/// @brief Method set_pressTime addr 0x28c20ec size 0x8 virtual false final false
 void set_pressTime(double_t value) ;

/// @brief Method get_flags addr 0x28c20f4 size 0x8 virtual false final false
 ::GlobalNamespace::______UnityEngine__InputSystem__InputActionState__BindingState__Flags get_flags() ;

/// @brief Method set_flags addr 0x28c20fc size 0x8 virtual false final false
 void set_flags(::GlobalNamespace::______UnityEngine__InputSystem__InputActionState__BindingState__Flags value) ;

/// @brief Method get_chainsWithNext addr 0x28c2104 size 0xc virtual false final false
 bool get_chainsWithNext() ;

/// @brief Method set_chainsWithNext addr 0x28c2110 size 0x1c virtual false final false
 void set_chainsWithNext(bool value) ;

/// @brief Method get_isEndOfChain addr 0x28c212c size 0xc virtual false final false
 bool get_isEndOfChain() ;

/// @brief Method set_isEndOfChain addr 0x28c2138 size 0x1c virtual false final false
 void set_isEndOfChain(bool value) ;

/// @brief Method get_isPartOfChain addr 0x28c2154 size 0x10 virtual false final false
 bool get_isPartOfChain() ;

/// @brief Method get_isComposite addr 0x28bba90 size 0xc virtual false final false
 bool get_isComposite() ;

/// @brief Method set_isComposite addr 0x28c2164 size 0x1c virtual false final false
 void set_isComposite(bool value) ;

/// @brief Method get_isPartOfComposite addr 0x28bae70 size 0xc virtual false final false
 bool get_isPartOfComposite() ;

/// @brief Method set_isPartOfComposite addr 0x28c2180 size 0x1c virtual false final false
 void set_isPartOfComposite(bool value) ;

/// @brief Method get_initialStateCheckPending addr 0x28be15c size 0xc virtual false final false
 bool get_initialStateCheckPending() ;

/// @brief Method set_initialStateCheckPending addr 0x28bcbd8 size 0x1c virtual false final false
 void set_initialStateCheckPending(bool value) ;

/// @brief Method get_wantsInitialStateCheck addr 0x28bcbcc size 0xc virtual false final false
 bool get_wantsInitialStateCheck() ;

/// @brief Method set_wantsInitialStateCheck addr 0x28c219c size 0x1c virtual false final false
 void set_wantsInitialStateCheck(bool value) ;

/// @brief Method get_partIndex addr 0x28c21b8 size 0x8 virtual false final false
 int32_t get_partIndex() ;

/// @brief Method set_partIndex addr 0x28c21c0 size 0x8 virtual false final false
 void set_partIndex(int32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::Flags
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6258))
// CS Name: UnityEngine.InputSystem.InputActionState::TriggerState::Flags
struct CORDL_TYPE ______UnityEngine__InputSystem__InputActionState__TriggerState__Flags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ______UnityEngine__InputSystem__InputActionState__TriggerState__Flags(int32_t value__) noexcept;


                    constexpr ______UnityEngine__InputSystem__InputActionState__TriggerState__Flags(______UnityEngine__InputSystem__InputActionState__TriggerState__Flags const&) = default;
                    constexpr ______UnityEngine__InputSystem__InputActionState__TriggerState__Flags(______UnityEngine__InputSystem__InputActionState__TriggerState__Flags&&) = default;
                    constexpr ______UnityEngine__InputSystem__InputActionState__TriggerState__Flags& operator=(______UnityEngine__InputSystem__InputActionState__TriggerState__Flags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ______UnityEngine__InputSystem__InputActionState__TriggerState__Flags& operator=(______UnityEngine__InputSystem__InputActionState__TriggerState__Flags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ______UnityEngine__InputSystem__InputActionState__TriggerState__Flags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ________UnityEngine__InputSystem__InputActionState__TriggerState__Flags_Unwrapped : int32_t {
__HaveMagnitude = 1,
__PassThrough = 2,
__MayNeedConflictResolution = 4,
__HasMultipleConcurrentActuations = 8,
__InProcessing = 16,
__Button = 32,
__Pressed = 64,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ________UnityEngine__InputSystem__InputActionState__TriggerState__Flags_Unwrapped () const noexcept {
return std::bit_cast<________UnityEngine__InputSystem__InputActionState__TriggerState__Flags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HaveMagnitude offset 0
static ::GlobalNamespace::______UnityEngine__InputSystem__InputActionState__TriggerState__Flags const HaveMagnitude;

/// @brief Field PassThrough offset 0
static ::GlobalNamespace::______UnityEngine__InputSystem__InputActionState__TriggerState__Flags const PassThrough;

/// @brief Field MayNeedConflictResolution offset 0
static ::GlobalNamespace::______UnityEngine__InputSystem__InputActionState__TriggerState__Flags const MayNeedConflictResolution;

/// @brief Field HasMultipleConcurrentActuations offset 0
static ::GlobalNamespace::______UnityEngine__InputSystem__InputActionState__TriggerState__Flags const HasMultipleConcurrentActuations;

/// @brief Field InProcessing offset 0
static ::GlobalNamespace::______UnityEngine__InputSystem__InputActionState__TriggerState__Flags const InProcessing;

/// @brief Field Button offset 0
static ::GlobalNamespace::______UnityEngine__InputSystem__InputActionState__TriggerState__Flags const Button;

/// @brief Field Pressed offset 0
static ::GlobalNamespace::______UnityEngine__InputSystem__InputActionState__TriggerState__Flags const Pressed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TriggerState
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6259))
// CS Name: UnityEngine.InputSystem.InputActionState::TriggerState
struct CORDL_TYPE ____UnityEngine__InputSystem__InputActionState__TriggerState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Flags = ::GlobalNamespace::______UnityEngine__InputSystem__InputActionState__TriggerState__Flags;

// Ctor Parameters [CppParam { name: "m_Phase", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_MapIndex", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_ControlIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_Time", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_StartTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_BindingIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_InteractionIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_Magnitude", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_LastPerformedInUpdate", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_LastCanceledInUpdate", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_PressedInUpdate", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_ReleasedInUpdate", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionState__TriggerState(uint8_t m_Phase, uint8_t m_Flags, uint8_t m_MapIndex, uint16_t m_ControlIndex, double_t m_Time, double_t m_StartTime, uint16_t m_BindingIndex, uint16_t m_InteractionIndex, float_t m_Magnitude, uint32_t m_LastPerformedInUpdate, uint32_t m_LastCanceledInUpdate, uint32_t m_PressedInUpdate, uint32_t m_ReleasedInUpdate) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputActionState__TriggerState(____UnityEngine__InputSystem__InputActionState__TriggerState const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionState__TriggerState(____UnityEngine__InputSystem__InputActionState__TriggerState&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionState__TriggerState& operator=(____UnityEngine__InputSystem__InputActionState__TriggerState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputActionState__TriggerState& operator=(____UnityEngine__InputSystem__InputActionState__TriggerState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionState__TriggerState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field kMaxNumMaps offset 0
static constexpr int32_t  kMaxNumMaps{255};

/// @brief Field kMaxNumControls offset 0
static constexpr int32_t  kMaxNumControls{65535};

/// @brief Field kMaxNumBindings offset 0
static constexpr int32_t  kMaxNumBindings{65535};

 uint8_t __declspec(property(get=__get_m_Phase, put=__set_m_Phase))  m_Phase;

constexpr void __set_m_Phase(uint8_t value) ;

constexpr uint8_t __get_m_Phase() const;

 uint8_t __declspec(property(get=__get_m_Flags, put=__set_m_Flags))  m_Flags;

constexpr void __set_m_Flags(uint8_t value) ;

constexpr uint8_t __get_m_Flags() const;

 uint8_t __declspec(property(get=__get_m_MapIndex, put=__set_m_MapIndex))  m_MapIndex;

constexpr void __set_m_MapIndex(uint8_t value) ;

constexpr uint8_t __get_m_MapIndex() const;

 uint16_t __declspec(property(get=__get_m_ControlIndex, put=__set_m_ControlIndex))  m_ControlIndex;

constexpr void __set_m_ControlIndex(uint16_t value) ;

constexpr uint16_t __get_m_ControlIndex() const;

 double_t __declspec(property(get=__get_m_Time, put=__set_m_Time))  m_Time;

constexpr void __set_m_Time(double_t value) ;

constexpr double_t __get_m_Time() const;

 double_t __declspec(property(get=__get_m_StartTime, put=__set_m_StartTime))  m_StartTime;

constexpr void __set_m_StartTime(double_t value) ;

constexpr double_t __get_m_StartTime() const;

 uint16_t __declspec(property(get=__get_m_BindingIndex, put=__set_m_BindingIndex))  m_BindingIndex;

constexpr void __set_m_BindingIndex(uint16_t value) ;

constexpr uint16_t __get_m_BindingIndex() const;

 uint16_t __declspec(property(get=__get_m_InteractionIndex, put=__set_m_InteractionIndex))  m_InteractionIndex;

constexpr void __set_m_InteractionIndex(uint16_t value) ;

constexpr uint16_t __get_m_InteractionIndex() const;

 float_t __declspec(property(get=__get_m_Magnitude, put=__set_m_Magnitude))  m_Magnitude;

constexpr void __set_m_Magnitude(float_t value) ;

constexpr float_t __get_m_Magnitude() const;

 uint32_t __declspec(property(get=__get_m_LastPerformedInUpdate, put=__set_m_LastPerformedInUpdate))  m_LastPerformedInUpdate;

constexpr void __set_m_LastPerformedInUpdate(uint32_t value) ;

constexpr uint32_t __get_m_LastPerformedInUpdate() const;

 uint32_t __declspec(property(get=__get_m_LastCanceledInUpdate, put=__set_m_LastCanceledInUpdate))  m_LastCanceledInUpdate;

constexpr void __set_m_LastCanceledInUpdate(uint32_t value) ;

constexpr uint32_t __get_m_LastCanceledInUpdate() const;

 uint32_t __declspec(property(get=__get_m_PressedInUpdate, put=__set_m_PressedInUpdate))  m_PressedInUpdate;

constexpr void __set_m_PressedInUpdate(uint32_t value) ;

constexpr uint32_t __get_m_PressedInUpdate() const;

 uint32_t __declspec(property(get=__get_m_ReleasedInUpdate, put=__set_m_ReleasedInUpdate))  m_ReleasedInUpdate;

constexpr void __set_m_ReleasedInUpdate(uint32_t value) ;

constexpr uint32_t __get_m_ReleasedInUpdate() const;


// Properties

 ::UnityEngine::InputSystem::InputActionPhase __declspec(property(get=get_phase, put=set_phase))  phase;

 bool __declspec(property(get=get_isDisabled))  isDisabled;

 bool __declspec(property(get=get_isWaiting))  isWaiting;

 bool __declspec(property(get=get_isStarted))  isStarted;

 bool __declspec(property(get=get_isPerformed))  isPerformed;

 bool __declspec(property(get=get_isCanceled))  isCanceled;

 double_t __declspec(property(get=get_time, put=set_time))  time;

 double_t __declspec(property(get=get_startTime, put=set_startTime))  startTime;

 float_t __declspec(property(get=get_magnitude, put=set_magnitude))  magnitude;

 bool __declspec(property(get=get_haveMagnitude))  haveMagnitude;

 int32_t __declspec(property(get=get_mapIndex, put=set_mapIndex))  mapIndex;

 int32_t __declspec(property(get=get_controlIndex, put=set_controlIndex))  controlIndex;

 int32_t __declspec(property(get=get_bindingIndex, put=set_bindingIndex))  bindingIndex;

 int32_t __declspec(property(get=get_interactionIndex, put=set_interactionIndex))  interactionIndex;

 uint32_t __declspec(property(get=get_lastPerformedInUpdate, put=set_lastPerformedInUpdate))  lastPerformedInUpdate;

 uint32_t __declspec(property(get=get_lastCanceledInUpdate, put=set_lastCanceledInUpdate))  lastCanceledInUpdate;

 uint32_t __declspec(property(get=get_pressedInUpdate, put=set_pressedInUpdate))  pressedInUpdate;

 uint32_t __declspec(property(get=get_releasedInUpdate, put=set_releasedInUpdate))  releasedInUpdate;

 bool __declspec(property(get=get_isPassThrough, put=set_isPassThrough))  isPassThrough;

 bool __declspec(property(get=get_isButton, put=set_isButton))  isButton;

 bool __declspec(property(get=get_isPressed, put=set_isPressed))  isPressed;

 bool __declspec(property(get=get_mayNeedConflictResolution, put=set_mayNeedConflictResolution))  mayNeedConflictResolution;

 bool __declspec(property(get=get_hasMultipleConcurrentActuations, put=set_hasMultipleConcurrentActuations))  hasMultipleConcurrentActuations;

 bool __declspec(property(get=get_inProcessing, put=set_inProcessing))  inProcessing;

 ::GlobalNamespace::______UnityEngine__InputSystem__InputActionState__TriggerState__Flags __declspec(property(get=get_flags, put=set_flags))  flags;


// Methods

/// @brief Method get_phase addr 0x28c21c8 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::InputActionPhase get_phase() ;

/// @brief Method set_phase addr 0x28bcba0 size 0x8 virtual false final false
 void set_phase(::UnityEngine::InputSystem::InputActionPhase value) ;

/// @brief Method get_isDisabled addr 0x28bcbbc size 0x10 virtual false final false
 bool get_isDisabled() ;

/// @brief Method get_isWaiting addr 0x28c21d0 size 0x10 virtual false final false
 bool get_isWaiting() ;

/// @brief Method get_isStarted addr 0x28c21e0 size 0x10 virtual false final false
 bool get_isStarted() ;

/// @brief Method get_isPerformed addr 0x28c21f0 size 0x10 virtual false final false
 bool get_isPerformed() ;

/// @brief Method get_isCanceled addr 0x28c2200 size 0x10 virtual false final false
 bool get_isCanceled() ;

/// @brief Method get_time addr 0x28c2210 size 0x8 virtual false final false
 double_t get_time() ;

/// @brief Method set_time addr 0x28c2218 size 0x8 virtual false final false
 void set_time(double_t value) ;

/// @brief Method get_startTime addr 0x28c2220 size 0x8 virtual false final false
 double_t get_startTime() ;

/// @brief Method set_startTime addr 0x28c2228 size 0x8 virtual false final false
 void set_startTime(double_t value) ;

/// @brief Method get_magnitude addr 0x28c2230 size 0x8 virtual false final false
 float_t get_magnitude() ;

/// @brief Method set_magnitude addr 0x28bce50 size 0x14 virtual false final false
 void set_magnitude(float_t value) ;

/// @brief Method get_haveMagnitude addr 0x28c2238 size 0xc virtual false final false
 bool get_haveMagnitude() ;

/// @brief Method get_mapIndex addr 0x28c2244 size 0x8 virtual false final false
 int32_t get_mapIndex() ;

/// @brief Method set_mapIndex addr 0x28bcf74 size 0x64 virtual false final false
 void set_mapIndex(int32_t value) ;

/// @brief Method get_controlIndex addr 0x28bc0a8 size 0x14 virtual false final false
 int32_t get_controlIndex() ;

/// @brief Method set_controlIndex addr 0x28bcddc size 0x74 virtual false final false
 void set_controlIndex(int32_t value) ;

/// @brief Method get_bindingIndex addr 0x28c224c size 0x8 virtual false final false
 int32_t get_bindingIndex() ;

/// @brief Method set_bindingIndex addr 0x28bcfd8 size 0x64 virtual false final false
 void set_bindingIndex(int32_t value) ;

/// @brief Method get_interactionIndex addr 0x28bce64 size 0x14 virtual false final false
 int32_t get_interactionIndex() ;

/// @brief Method set_interactionIndex addr 0x28bce78 size 0x74 virtual false final false
 void set_interactionIndex(int32_t value) ;

/// @brief Method get_lastPerformedInUpdate addr 0x28c2254 size 0x8 virtual false final false
 uint32_t get_lastPerformedInUpdate() ;

/// @brief Method set_lastPerformedInUpdate addr 0x28c225c size 0x8 virtual false final false
 void set_lastPerformedInUpdate(uint32_t value) ;

/// @brief Method get_lastCanceledInUpdate addr 0x28c2264 size 0x8 virtual false final false
 uint32_t get_lastCanceledInUpdate() ;

/// @brief Method set_lastCanceledInUpdate addr 0x28c226c size 0x8 virtual false final false
 void set_lastCanceledInUpdate(uint32_t value) ;

/// @brief Method get_pressedInUpdate addr 0x28c2274 size 0x8 virtual false final false
 uint32_t get_pressedInUpdate() ;

/// @brief Method set_pressedInUpdate addr 0x28c227c size 0x8 virtual false final false
 void set_pressedInUpdate(uint32_t value) ;

/// @brief Method get_releasedInUpdate addr 0x28c2284 size 0x8 virtual false final false
 uint32_t get_releasedInUpdate() ;

/// @brief Method set_releasedInUpdate addr 0x28c228c size 0x8 virtual false final false
 void set_releasedInUpdate(uint32_t value) ;

/// @brief Method get_isPassThrough addr 0x28bd648 size 0xc virtual false final false
 bool get_isPassThrough() ;

/// @brief Method set_isPassThrough addr 0x28be970 size 0x1c virtual false final false
 void set_isPassThrough(bool value) ;

/// @brief Method get_isButton addr 0x28be98c size 0xc virtual false final false
 bool get_isButton() ;

/// @brief Method set_isButton addr 0x28be998 size 0x1c virtual false final false
 void set_isButton(bool value) ;

/// @brief Method get_isPressed addr 0x28bf4ec size 0xc virtual false final false
 bool get_isPressed() ;

/// @brief Method set_isPressed addr 0x28bda10 size 0x1c virtual false final false
 void set_isPressed(bool value) ;

/// @brief Method get_mayNeedConflictResolution addr 0x28bf4f8 size 0xc virtual false final false
 bool get_mayNeedConflictResolution() ;

/// @brief Method set_mayNeedConflictResolution addr 0x28c2294 size 0x1c virtual false final false
 void set_mayNeedConflictResolution(bool value) ;

/// @brief Method get_hasMultipleConcurrentActuations addr 0x28bf504 size 0xc virtual false final false
 bool get_hasMultipleConcurrentActuations() ;

/// @brief Method set_hasMultipleConcurrentActuations addr 0x28bd9d8 size 0x1c virtual false final false
 void set_hasMultipleConcurrentActuations(bool value) ;

/// @brief Method get_inProcessing addr 0x28bfd38 size 0xc virtual false final false
 bool get_inProcessing() ;

/// @brief Method set_inProcessing addr 0x28bd9f4 size 0x1c virtual false final false
 void set_inProcessing(bool value) ;

/// @brief Method get_flags addr 0x28c22b0 size 0x8 virtual false final false
 ::GlobalNamespace::______UnityEngine__InputSystem__InputActionState__TriggerState__Flags get_flags() ;

/// @brief Method set_flags addr 0x28bfd44 size 0x8 virtual false final false
 void set_flags(::GlobalNamespace::______UnityEngine__InputSystem__InputActionState__TriggerState__Flags value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::ActionMapIndices
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6260))
// CS Name: UnityEngine.InputSystem.InputActionState::ActionMapIndices
struct CORDL_TYPE ____UnityEngine__InputSystem__InputActionState__ActionMapIndices : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "actionStartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "actionCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "controlStartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "controlCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bindingStartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bindingCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "interactionStartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "interactionCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "processorStartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "processorCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "compositeStartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "compositeCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionState__ActionMapIndices(int32_t actionStartIndex, int32_t actionCount, int32_t controlStartIndex, int32_t controlCount, int32_t bindingStartIndex, int32_t bindingCount, int32_t interactionStartIndex, int32_t interactionCount, int32_t processorStartIndex, int32_t processorCount, int32_t compositeStartIndex, int32_t compositeCount) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputActionState__ActionMapIndices(____UnityEngine__InputSystem__InputActionState__ActionMapIndices const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionState__ActionMapIndices(____UnityEngine__InputSystem__InputActionState__ActionMapIndices&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionState__ActionMapIndices& operator=(____UnityEngine__InputSystem__InputActionState__ActionMapIndices const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputActionState__ActionMapIndices& operator=(____UnityEngine__InputSystem__InputActionState__ActionMapIndices&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionState__ActionMapIndices(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_actionStartIndex, put=__set_actionStartIndex))  actionStartIndex;

constexpr void __set_actionStartIndex(int32_t value) ;

constexpr int32_t __get_actionStartIndex() const;

 int32_t __declspec(property(get=__get_actionCount, put=__set_actionCount))  actionCount;

constexpr void __set_actionCount(int32_t value) ;

constexpr int32_t __get_actionCount() const;

 int32_t __declspec(property(get=__get_controlStartIndex, put=__set_controlStartIndex))  controlStartIndex;

constexpr void __set_controlStartIndex(int32_t value) ;

constexpr int32_t __get_controlStartIndex() const;

 int32_t __declspec(property(get=__get_controlCount, put=__set_controlCount))  controlCount;

constexpr void __set_controlCount(int32_t value) ;

constexpr int32_t __get_controlCount() const;

 int32_t __declspec(property(get=__get_bindingStartIndex, put=__set_bindingStartIndex))  bindingStartIndex;

constexpr void __set_bindingStartIndex(int32_t value) ;

constexpr int32_t __get_bindingStartIndex() const;

 int32_t __declspec(property(get=__get_bindingCount, put=__set_bindingCount))  bindingCount;

constexpr void __set_bindingCount(int32_t value) ;

constexpr int32_t __get_bindingCount() const;

 int32_t __declspec(property(get=__get_interactionStartIndex, put=__set_interactionStartIndex))  interactionStartIndex;

constexpr void __set_interactionStartIndex(int32_t value) ;

constexpr int32_t __get_interactionStartIndex() const;

 int32_t __declspec(property(get=__get_interactionCount, put=__set_interactionCount))  interactionCount;

constexpr void __set_interactionCount(int32_t value) ;

constexpr int32_t __get_interactionCount() const;

 int32_t __declspec(property(get=__get_processorStartIndex, put=__set_processorStartIndex))  processorStartIndex;

constexpr void __set_processorStartIndex(int32_t value) ;

constexpr int32_t __get_processorStartIndex() const;

 int32_t __declspec(property(get=__get_processorCount, put=__set_processorCount))  processorCount;

constexpr void __set_processorCount(int32_t value) ;

constexpr int32_t __get_processorCount() const;

 int32_t __declspec(property(get=__get_compositeStartIndex, put=__set_compositeStartIndex))  compositeStartIndex;

constexpr void __set_compositeStartIndex(int32_t value) ;

constexpr int32_t __get_compositeStartIndex() const;

 int32_t __declspec(property(get=__get_compositeCount, put=__set_compositeCount))  compositeCount;

constexpr void __set_compositeCount(int32_t value) ;

constexpr int32_t __get_compositeCount() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::UnmanagedMemory
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6261))
// CS Name: UnityEngine.InputSystem.InputActionState::UnmanagedMemory
struct CORDL_TYPE ____UnityEngine__InputSystem__InputActionState__UnmanagedMemory : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

// Ctor Parameters [CppParam { name: "basePtr", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "mapCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "actionCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "interactionCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bindingCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "controlCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "compositeCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "actionStates", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "bindingStates", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "interactionStates", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "controlMagnitudes", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "compositeMagnitudes", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "enabledControls", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "actionBindingIndicesAndCounts", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "actionBindingIndices", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "controlIndexToBindingIndex", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "controlGroupingAndComplexity", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "controlGroupingInitialized", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "mapIndices", ty: "void*", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionState__UnmanagedMemory(void* basePtr, int32_t mapCount, int32_t actionCount, int32_t interactionCount, int32_t bindingCount, int32_t controlCount, int32_t compositeCount, void* actionStates, void* bindingStates, void* interactionStates, void* controlMagnitudes, void* compositeMagnitudes, void* enabledControls, void* actionBindingIndicesAndCounts, void* actionBindingIndices, void* controlIndexToBindingIndex, void* controlGroupingAndComplexity, bool controlGroupingInitialized, void* mapIndices) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputActionState__UnmanagedMemory(____UnityEngine__InputSystem__InputActionState__UnmanagedMemory const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionState__UnmanagedMemory(____UnityEngine__InputSystem__InputActionState__UnmanagedMemory&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionState__UnmanagedMemory& operator=(____UnityEngine__InputSystem__InputActionState__UnmanagedMemory const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputActionState__UnmanagedMemory& operator=(____UnityEngine__InputSystem__InputActionState__UnmanagedMemory&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x80};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionState__UnmanagedMemory(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_basePtr, put=__set_basePtr))  basePtr;

constexpr void __set_basePtr(void* value) ;

constexpr void* __get_basePtr() const;

 int32_t __declspec(property(get=__get_mapCount, put=__set_mapCount))  mapCount;

constexpr void __set_mapCount(int32_t value) ;

constexpr int32_t __get_mapCount() const;

 int32_t __declspec(property(get=__get_actionCount, put=__set_actionCount))  actionCount;

constexpr void __set_actionCount(int32_t value) ;

constexpr int32_t __get_actionCount() const;

 int32_t __declspec(property(get=__get_interactionCount, put=__set_interactionCount))  interactionCount;

constexpr void __set_interactionCount(int32_t value) ;

constexpr int32_t __get_interactionCount() const;

 int32_t __declspec(property(get=__get_bindingCount, put=__set_bindingCount))  bindingCount;

constexpr void __set_bindingCount(int32_t value) ;

constexpr int32_t __get_bindingCount() const;

 int32_t __declspec(property(get=__get_controlCount, put=__set_controlCount))  controlCount;

constexpr void __set_controlCount(int32_t value) ;

constexpr int32_t __get_controlCount() const;

 int32_t __declspec(property(get=__get_compositeCount, put=__set_compositeCount))  compositeCount;

constexpr void __set_compositeCount(int32_t value) ;

constexpr int32_t __get_compositeCount() const;

 void* __declspec(property(get=__get_actionStates, put=__set_actionStates))  actionStates;

constexpr void __set_actionStates(void* value) ;

constexpr void* __get_actionStates() const;

 void* __declspec(property(get=__get_bindingStates, put=__set_bindingStates))  bindingStates;

constexpr void __set_bindingStates(void* value) ;

constexpr void* __get_bindingStates() const;

 void* __declspec(property(get=__get_interactionStates, put=__set_interactionStates))  interactionStates;

constexpr void __set_interactionStates(void* value) ;

constexpr void* __get_interactionStates() const;

 void* __declspec(property(get=__get_controlMagnitudes, put=__set_controlMagnitudes))  controlMagnitudes;

constexpr void __set_controlMagnitudes(void* value) ;

constexpr void* __get_controlMagnitudes() const;

 void* __declspec(property(get=__get_compositeMagnitudes, put=__set_compositeMagnitudes))  compositeMagnitudes;

constexpr void __set_compositeMagnitudes(void* value) ;

constexpr void* __get_compositeMagnitudes() const;

 void* __declspec(property(get=__get_enabledControls, put=__set_enabledControls))  enabledControls;

constexpr void __set_enabledControls(void* value) ;

constexpr void* __get_enabledControls() const;

 void* __declspec(property(get=__get_actionBindingIndicesAndCounts, put=__set_actionBindingIndicesAndCounts))  actionBindingIndicesAndCounts;

constexpr void __set_actionBindingIndicesAndCounts(void* value) ;

constexpr void* __get_actionBindingIndicesAndCounts() const;

 void* __declspec(property(get=__get_actionBindingIndices, put=__set_actionBindingIndices))  actionBindingIndices;

constexpr void __set_actionBindingIndices(void* value) ;

constexpr void* __get_actionBindingIndices() const;

 void* __declspec(property(get=__get_controlIndexToBindingIndex, put=__set_controlIndexToBindingIndex))  controlIndexToBindingIndex;

constexpr void __set_controlIndexToBindingIndex(void* value) ;

constexpr void* __get_controlIndexToBindingIndex() const;

 void* __declspec(property(get=__get_controlGroupingAndComplexity, put=__set_controlGroupingAndComplexity))  controlGroupingAndComplexity;

constexpr void __set_controlGroupingAndComplexity(void* value) ;

constexpr void* __get_controlGroupingAndComplexity() const;

 bool __declspec(property(get=__get_controlGroupingInitialized, put=__set_controlGroupingInitialized))  controlGroupingInitialized;

constexpr void __set_controlGroupingInitialized(bool value) ;

constexpr bool __get_controlGroupingInitialized() const;

 void* __declspec(property(get=__get_mapIndices, put=__set_mapIndices))  mapIndices;

constexpr void __set_mapIndices(void* value) ;

constexpr void* __get_mapIndices() const;


// Properties

 bool __declspec(property(get=get_isAllocated))  isAllocated;

 int32_t __declspec(property(get=get_sizeInBytes))  sizeInBytes;


// Methods

/// @brief Method get_isAllocated addr 0x28c22b8 size 0x10 virtual false final false
 bool get_isAllocated() ;

/// @brief Method get_sizeInBytes addr 0x28c22c8 size 0x4c virtual false final false
 int32_t get_sizeInBytes() ;

/// @brief Method Allocate addr 0x28c2314 size 0x128 virtual false final false
 void Allocate(int32_t mapCount, int32_t actionCount, int32_t bindingCount, int32_t controlCount, int32_t interactionCount, int32_t compositeCount) ;

/// @brief Method Dispose addr 0x28bb378 size 0x3c virtual true final true
 void Dispose() ;

/// @brief Method CopyDataFrom addr 0x28c243c size 0x16c virtual false final false
 void CopyDataFrom(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__UnmanagedMemory memory) ;

/// @brief Method Clone addr 0x28bb50c size 0xa4 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__UnmanagedMemory Clone() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::GlobalState
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6262))
// CS Name: UnityEngine.InputSystem.InputActionState::GlobalState
struct CORDL_TYPE ____UnityEngine__InputSystem__InputActionState__GlobalState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "globalList", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle>", modifiers: "", def_value: None }, CppParam { name: "onActionChange", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::bs_hook::Il2CppWrapperType,::UnityEngine::InputSystem::InputActionChange>>", modifiers: "", def_value: None }, CppParam { name: "onActionControlsChanged", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionState__GlobalState(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle> globalList, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::bs_hook::Il2CppWrapperType,::UnityEngine::InputSystem::InputActionChange>> onActionChange, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::bs_hook::Il2CppWrapperType>> onActionControlsChanged) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputActionState__GlobalState(____UnityEngine__InputSystem__InputActionState__GlobalState const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionState__GlobalState(____UnityEngine__InputSystem__InputActionState__GlobalState&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionState__GlobalState& operator=(____UnityEngine__InputSystem__InputActionState__GlobalState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputActionState__GlobalState& operator=(____UnityEngine__InputSystem__InputActionState__GlobalState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xb8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionState__GlobalState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle> __declspec(property(get=__get_globalList, put=__set_globalList))  globalList;

constexpr void __set_globalList(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle> __get_globalList() const;

 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::bs_hook::Il2CppWrapperType,::UnityEngine::InputSystem::InputActionChange>> __declspec(property(get=__get_onActionChange, put=__set_onActionChange))  onActionChange;

constexpr void __set_onActionChange(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::bs_hook::Il2CppWrapperType,::UnityEngine::InputSystem::InputActionChange>> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::bs_hook::Il2CppWrapperType,::UnityEngine::InputSystem::InputActionChange>> __get_onActionChange() const;

 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_onActionControlsChanged, put=__set_onActionControlsChanged))  onActionControlsChanged;

constexpr void __set_onActionControlsChanged(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::bs_hook::Il2CppWrapperType>> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::bs_hook::Il2CppWrapperType>> __get_onActionControlsChanged() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::<>c
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6263))
// CS Name: UnityEngine.InputSystem.InputActionState::<>c
class CORDL_TYPE ____UnityEngine__InputSystem__InputActionState____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__InputSystem__InputActionState____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputActionState____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionState____c(____UnityEngine__InputSystem__InputActionState____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputActionState____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionState____c(____UnityEngine__InputSystem__InputActionState____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionState____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__InputSystem__InputActionState____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputActionState____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputActionState____c& operator=(____UnityEngine__InputSystem__InputActionState____c&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__InputActionState____c& operator=(____UnityEngine__InputSystem__InputActionState____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState____c value) ;

static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState____c __get___9() ;

static ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__GlobalState> __declspec(property(get=__get___9__135_0, put=__set___9__135_0))  __9__135_0;

static void __set___9__135_0(::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__GlobalState> value) ;

static ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__GlobalState> __get___9__135_0() ;

static ::System::Action __declspec(property(get=__get___9__135_1, put=__set___9__135_1))  __9__135_1;

static void __set___9__135_1(::System::Action value) ;

static ::System::Action __get___9__135_1() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__InputSystem__InputActionState____c() ;

/// @brief Method .ctor addr 0x28c260c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SaveAndResetState>b__135_0 addr 0x28c2614 size 0x6c virtual false final false
 void _SaveAndResetState_b__135_0(ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__GlobalState> state) ;

/// @brief Method <SaveAndResetState>b__135_1 addr 0x28c2680 size 0x4 virtual false final false
 void _SaveAndResetState_b__135_1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputActionState
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6264))
// CS Name: UnityEngine.InputSystem.InputActionState
class CORDL_TYPE InputActionState : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState____c;

using GlobalState = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__GlobalState;

using UnmanagedMemory = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__UnmanagedMemory;

using ActionMapIndices = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__ActionMapIndices;

using TriggerState = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__TriggerState;

using BindingState = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__BindingState;

using InteractionState = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__InteractionState;

/// @brief Convert operator to ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor() const noexcept;

/// @brief Convert operator to ::System::ICloneable
constexpr operator  ::System::ICloneable() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe0};

virtual ~InputActionState() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputActionState", modifiers: " const&", def_value: None }]
constexpr InputActionState(InputActionState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputActionState", modifiers: "&&", def_value: None }]
constexpr InputActionState(InputActionState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputActionState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputActionState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputActionState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputActionState& operator=(InputActionState&& o) noexcept = default;
  constexpr InputActionState& operator=(InputActionState const& o) noexcept = default;
                


// Fields

/// @brief Field kInvalidIndex offset 0
static constexpr int32_t  kInvalidIndex{-1};

 ::ArrayW<::UnityEngine::InputSystem::InputActionMap> __declspec(property(get=__get_maps, put=__set_maps))  maps;

constexpr void __set_maps(::ArrayW<::UnityEngine::InputSystem::InputActionMap> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap> __get_maps() const;

 ::ArrayW<::UnityEngine::InputSystem::InputControl> __declspec(property(get=__get_controls, put=__set_controls))  controls;

constexpr void __set_controls(::ArrayW<::UnityEngine::InputSystem::InputControl> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl> __get_controls() const;

 ::ArrayW<::UnityEngine::InputSystem::IInputInteraction> __declspec(property(get=__get_interactions, put=__set_interactions))  interactions;

constexpr void __set_interactions(::ArrayW<::UnityEngine::InputSystem::IInputInteraction> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::IInputInteraction> __get_interactions() const;

 ::ArrayW<::UnityEngine::InputSystem::InputProcessor> __declspec(property(get=__get_processors, put=__set_processors))  processors;

constexpr void __set_processors(::ArrayW<::UnityEngine::InputSystem::InputProcessor> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputProcessor> __get_processors() const;

 ::ArrayW<::UnityEngine::InputSystem::InputBindingComposite> __declspec(property(get=__get_composites, put=__set_composites))  composites;

constexpr void __set_composites(::ArrayW<::UnityEngine::InputSystem::InputBindingComposite> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputBindingComposite> __get_composites() const;

 int32_t __declspec(property(get=__get_totalProcessorCount, put=__set_totalProcessorCount))  totalProcessorCount;

constexpr void __set_totalProcessorCount(int32_t value) ;

constexpr int32_t __get_totalProcessorCount() const;

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__UnmanagedMemory __declspec(property(get=__get_memory, put=__set_memory))  memory;

constexpr void __set_memory(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__UnmanagedMemory value) ;

constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__UnmanagedMemory __get_memory() const;

 bool __declspec(property(get=__get_m_OnBeforeUpdateHooked, put=__set_m_OnBeforeUpdateHooked))  m_OnBeforeUpdateHooked;

constexpr void __set_m_OnBeforeUpdateHooked(bool value) ;

constexpr bool __get_m_OnBeforeUpdateHooked() const;

 bool __declspec(property(get=__get_m_OnAfterUpdateHooked, put=__set_m_OnAfterUpdateHooked))  m_OnAfterUpdateHooked;

constexpr void __set_m_OnAfterUpdateHooked(bool value) ;

constexpr bool __get_m_OnAfterUpdateHooked() const;

 bool __declspec(property(get=__get_m_InProcessControlStateChange, put=__set_m_InProcessControlStateChange))  m_InProcessControlStateChange;

constexpr void __set_m_InProcessControlStateChange(bool value) ;

constexpr bool __get_m_InProcessControlStateChange() const;

 ::UnityEngine::InputSystem::LowLevel::InputEventPtr __declspec(property(get=__get_m_CurrentlyProcessingThisEvent, put=__set_m_CurrentlyProcessingThisEvent))  m_CurrentlyProcessingThisEvent;

constexpr void __set_m_CurrentlyProcessingThisEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr __get_m_CurrentlyProcessingThisEvent() const;

 ::System::Action __declspec(property(get=__get_m_OnBeforeUpdateDelegate, put=__set_m_OnBeforeUpdateDelegate))  m_OnBeforeUpdateDelegate;

constexpr void __set_m_OnBeforeUpdateDelegate(::System::Action value) ;

constexpr ::System::Action __get_m_OnBeforeUpdateDelegate() const;

 ::System::Action __declspec(property(get=__get_m_OnAfterUpdateDelegate, put=__set_m_OnAfterUpdateDelegate))  m_OnAfterUpdateDelegate;

constexpr void __set_m_OnAfterUpdateDelegate(::System::Action value) ;

constexpr ::System::Action __get_m_OnAfterUpdateDelegate() const;

static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__GlobalState __declspec(property(get=__get_s_GlobalState, put=__set_s_GlobalState))  s_GlobalState;

static void __set_s_GlobalState(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__GlobalState value) ;

static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__GlobalState __get_s_GlobalState() ;


// Properties

 int32_t __declspec(property(get=get_totalCompositeCount))  totalCompositeCount;

 int32_t __declspec(property(get=get_totalMapCount))  totalMapCount;

 int32_t __declspec(property(get=get_totalActionCount))  totalActionCount;

 int32_t __declspec(property(get=get_totalBindingCount))  totalBindingCount;

 int32_t __declspec(property(get=get_totalInteractionCount))  totalInteractionCount;

 int32_t __declspec(property(get=get_totalControlCount))  totalControlCount;

 void* __declspec(property(get=get_mapIndices))  mapIndices;

 void* __declspec(property(get=get_actionStates))  actionStates;

 void* __declspec(property(get=get_bindingStates))  bindingStates;

 void* __declspec(property(get=get_interactionStates))  interactionStates;

 void* __declspec(property(get=get_controlIndexToBindingIndex))  controlIndexToBindingIndex;

 void* __declspec(property(get=get_controlGroupingAndComplexity))  controlGroupingAndComplexity;

 void* __declspec(property(get=get_controlMagnitudes))  controlMagnitudes;

 void* __declspec(property(get=get_enabledControls))  enabledControls;

 bool __declspec(property(get=get_isProcessingControlStateChange))  isProcessingControlStateChange;


// Methods

/// @brief Method get_totalCompositeCount addr 0x28baa9c size 0x8 virtual false final false
 int32_t get_totalCompositeCount() ;

/// @brief Method get_totalMapCount addr 0x28baaa4 size 0x8 virtual false final false
 int32_t get_totalMapCount() ;

/// @brief Method get_totalActionCount addr 0x28baaac size 0x8 virtual false final false
 int32_t get_totalActionCount() ;

/// @brief Method get_totalBindingCount addr 0x28baab4 size 0x8 virtual false final false
 int32_t get_totalBindingCount() ;

/// @brief Method get_totalInteractionCount addr 0x28baabc size 0x8 virtual false final false
 int32_t get_totalInteractionCount() ;

/// @brief Method get_totalControlCount addr 0x28baac4 size 0x8 virtual false final false
 int32_t get_totalControlCount() ;

/// @brief Method get_mapIndices addr 0x28baacc size 0x8 virtual false final false
 void* get_mapIndices() ;

/// @brief Method get_actionStates addr 0x28baad4 size 0x8 virtual false final false
 void* get_actionStates() ;

/// @brief Method get_bindingStates addr 0x28baadc size 0x8 virtual false final false
 void* get_bindingStates() ;

/// @brief Method get_interactionStates addr 0x28baae4 size 0x8 virtual false final false
 void* get_interactionStates() ;

/// @brief Method get_controlIndexToBindingIndex addr 0x28baaec size 0x8 virtual false final false
 void* get_controlIndexToBindingIndex() ;

/// @brief Method get_controlGroupingAndComplexity addr 0x28baaf4 size 0x8 virtual false final false
 void* get_controlGroupingAndComplexity() ;

/// @brief Method get_controlMagnitudes addr 0x28baafc size 0x8 virtual false final false
 void* get_controlMagnitudes() ;

/// @brief Method get_enabledControls addr 0x28bab04 size 0x8 virtual false final false
 void* get_enabledControls() ;

/// @brief Method get_isProcessingControlStateChange addr 0x28bab0c size 0x8 virtual false final false
 bool get_isProcessingControlStateChange() ;

/// @brief Method Initialize addr 0x28bab14 size 0x78 virtual false final false
 void Initialize(::UnityEngine::InputSystem::InputBindingResolver resolver) ;

/// @brief Method ComputeControlGroupingIfNecessary addr 0x28baca8 size 0x1c8 virtual false final false
 void ComputeControlGroupingIfNecessary() ;

/// @brief Method ClaimDataFrom addr 0x28bab8c size 0x94 virtual false final false
 void ClaimDataFrom(::UnityEngine::InputSystem::InputBindingResolver resolver) ;

/// @brief Method Finalize addr 0x28bae90 size 0x98 virtual true final false
 void Finalize() ;

/// @brief Method Dispose addr 0x28bb0b8 size 0x8 virtual true final true
 void Dispose() ;

/// @brief Method Destroy addr 0x28baf28 size 0x190 virtual false final false
 void Destroy(bool isFinalizing) ;

/// @brief Method Clone addr 0x28bb3b4 size 0x150 virtual false final false
 ::UnityEngine::InputSystem::InputActionState Clone() ;

/// @brief Method System.ICloneable.Clone addr 0x28bb5b0 size 0x4 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ICloneable_Clone() ;

/// @brief Method IsUsingDevice addr 0x28bb5b4 size 0x198 virtual false final false
 bool IsUsingDevice(::UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method CanUseDevice addr 0x28bb74c size 0x200 virtual false final false
 bool CanUseDevice(::UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method HasEnabledActions addr 0x28bb964 size 0x78 virtual false final false
 bool HasEnabledActions() ;

/// @brief Method FinishBindingCompositeSetups addr 0x28bb9dc size 0xb4 virtual false final false
 void FinishBindingCompositeSetups() ;

/// @brief Method PrepareForBindingReResolution addr 0x28bbaa8 size 0x500 virtual false final false
 void PrepareForBindingReResolution(bool needFullResolve, ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl>> activeControls, ByRef<bool> hasEnabledActions) ;

/// @brief Method FinishBindingResolution addr 0x28bc48c size 0x88 virtual false final false
 void FinishBindingResolution(bool hasEnabledActions, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__UnmanagedMemory oldMemory, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl> activeControls, bool isFullResolve) ;

/// @brief Method RestoreActionStatesAfterReResolvingBindings addr 0x28bc514 size 0x68c virtual false final false
 void RestoreActionStatesAfterReResolvingBindings(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__UnmanagedMemory oldState, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl> activeControls, bool isFullResolve) ;

/// @brief Method IsActiveControl addr 0x28bd368 size 0xa8 virtual false final false
 bool IsActiveControl(int32_t bindingIndex, int32_t controlIndex) ;

/// @brief Method FindControlIndexOnBinding addr 0x28bcd7c size 0x60 virtual false final false
 int32_t FindControlIndexOnBinding(int32_t bindingIndex, ::UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ResetActionStatesDrivenBy addr 0x28bd410 size 0x238 virtual false final false
 void ResetActionStatesDrivenBy(::UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method IsActionBoundToControlFromDevice addr 0x28bd654 size 0xb0 virtual false final false
 bool IsActionBoundToControlFromDevice(::UnityEngine::InputSystem::InputDevice device, int32_t actionIndex) ;

/// @brief Method ResetActionState addr 0x28bc23c size 0x11c virtual false final false
 void ResetActionState(int32_t actionIndex, ::UnityEngine::InputSystem::InputActionPhase toPhase, bool hardReset) ;

/// @brief Method FetchActionState addr 0x28bda2c size 0x24 virtual false final false
 ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__TriggerState> FetchActionState(::UnityEngine::InputSystem::InputAction action) ;

/// @brief Method FetchMapIndices addr 0x28bda50 size 0x34 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__ActionMapIndices FetchMapIndices(::UnityEngine::InputSystem::InputActionMap map) ;

/// @brief Method EnableAllActions addr 0x28bda84 size 0xac virtual false final false
 void EnableAllActions(::UnityEngine::InputSystem::InputActionMap map) ;

/// @brief Method EnableControls addr 0x28bdb30 size 0x40 virtual false final false
 void EnableControls(::UnityEngine::InputSystem::InputActionMap map) ;

/// @brief Method EnableSingleAction addr 0x28bdb70 size 0x64 virtual false final false
 void EnableSingleAction(::UnityEngine::InputSystem::InputAction action) ;

/// @brief Method EnableControls addr 0x28bdbd4 size 0xb0 virtual false final false
 void EnableControls(::UnityEngine::InputSystem::InputAction action) ;

/// @brief Method DisableAllActions addr 0x28bbfa8 size 0x100 virtual false final false
 void DisableAllActions(::UnityEngine::InputSystem::InputActionMap map) ;

/// @brief Method DisableControls addr 0x28bc358 size 0x40 virtual false final false
 void DisableControls(::UnityEngine::InputSystem::InputActionMap map) ;

/// @brief Method DisableSingleAction addr 0x28bdc84 size 0x58 virtual false final false
 void DisableSingleAction(::UnityEngine::InputSystem::InputAction action) ;

/// @brief Method DisableControls addr 0x28bdcdc size 0xb0 virtual false final false
 void DisableControls(::UnityEngine::InputSystem::InputAction action) ;

/// @brief Method EnableControls addr 0x28bcbf4 size 0x188 virtual false final false
 void EnableControls(int32_t mapIndex, int32_t controlStartIndex, int32_t numControls) ;

/// @brief Method DisableControls addr 0x28bb0c0 size 0x180 virtual false final false
 void DisableControls(int32_t mapIndex, int32_t controlStartIndex, int32_t numControls) ;

/// @brief Method SetInitialStateCheckPending addr 0x28bde60 size 0x90 virtual false final false
 void SetInitialStateCheckPending(int32_t actionIndex, bool value) ;

/// @brief Method SetInitialStateCheckPending addr 0x28bdde0 size 0x48 virtual false final false
 void SetInitialStateCheckPending(void* bindingStatePtr, bool value) ;

/// @brief Method IsControlEnabled addr 0x28bdd8c size 0x2c virtual false final false
 bool IsControlEnabled(int32_t controlIndex) ;

/// @brief Method SetControlEnabled addr 0x28bde28 size 0x38 virtual false final false
 void SetControlEnabled(int32_t controlIndex, bool state) ;

/// @brief Method HookOnBeforeUpdate addr 0x28bd194 size 0xd4 virtual false final false
 void HookOnBeforeUpdate() ;

/// @brief Method UnhookOnBeforeUpdate addr 0x28bdef0 size 0x7c virtual false final false
 void UnhookOnBeforeUpdate() ;

/// @brief Method OnBeforeInitialUpdate addr 0x28bdf6c size 0x1f0 virtual false final false
 void OnBeforeInitialUpdate() ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyControlStateChanged addr 0x28be168 size 0x18 virtual true final true
 void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl control, double_t time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, int64_t mapControlAndBindingIndex) ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyTimerExpired addr 0x28be750 size 0x18 virtual true final true
 void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired(::UnityEngine::InputSystem::InputControl control, double_t time, int64_t mapControlAndBindingIndex, int32_t interactionIndex) ;

/// @brief Method ToCombinedMapAndControlAndBindingIndex addr 0x28bddb8 size 0x28 virtual false final false
 int64_t ToCombinedMapAndControlAndBindingIndex(int32_t mapIndex, int32_t controlIndex, int32_t bindingIndex) ;

/// @brief Method SplitUpMapAndControlAndBindingIndex addr 0x28be180 size 0x1c virtual false final false
 void SplitUpMapAndControlAndBindingIndex(int64_t mapControlAndBindingIndex, ByRef<int32_t> mapIndex, ByRef<int32_t> controlIndex, ByRef<int32_t> bindingIndex) ;

/// @brief Method GetComplexityFromMonitorIndex addr 0x28be968 size 0x8 virtual false final false
static int32_t GetComplexityFromMonitorIndex(int64_t mapControlAndBindingIndex) ;

/// @brief Method ProcessControlStateChange addr 0x28be19c size 0x5b4 virtual false final false
 void ProcessControlStateChange(int32_t mapIndex, int32_t controlIndex, int32_t bindingIndex, double_t time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method ProcessButtonState addr 0x28befa0 size 0x1b0 virtual false final false
 void ProcessButtonState(ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__TriggerState> trigger, int32_t actionIndex, void* bindingStatePtr) ;

/// @brief Method ShouldIgnoreInputOnCompositeBinding addr 0x28be9b4 size 0x4c virtual false final false
static bool ShouldIgnoreInputOnCompositeBinding(void* binding, void* eventPtr) ;

/// @brief Method IsConflictingInput addr 0x28beb94 size 0x40c virtual false final false
 bool IsConflictingInput(ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__TriggerState> trigger, int32_t actionIndex) ;

/// @brief Method GetActionBindingStartIndexAndCount addr 0x28bd704 size 0x20 virtual false final false
 uint16_t GetActionBindingStartIndexAndCount(int32_t actionIndex, ByRef<uint16_t> bindingCount) ;

/// @brief Method ProcessDefaultInteraction addr 0x28bf150 size 0x39c virtual false final false
 void ProcessDefaultInteraction(ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__TriggerState> trigger, int32_t actionIndex) ;

/// @brief Method ProcessInteractions addr 0x28bea00 size 0x194 virtual false final false
 void ProcessInteractions(ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__TriggerState> trigger, int32_t interactionStartIndex, int32_t interactionCount) ;

/// @brief Method ProcessTimeout addr 0x28be768 size 0x200 virtual false final false
 void ProcessTimeout(double_t time, int32_t mapIndex, int32_t controlIndex, int32_t bindingIndex, int32_t interactionIndex) ;

/// @brief Method SetTotalTimeoutCompletionTime addr 0x28bf5d4 size 0x30 virtual false final false
 void SetTotalTimeoutCompletionTime(float_t seconds, ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__TriggerState> trigger) ;

/// @brief Method StartTimeout addr 0x28bd03c size 0x158 virtual false final false
 void StartTimeout(float_t seconds, ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__TriggerState> trigger) ;

/// @brief Method StopTimeout addr 0x28bf604 size 0xc4 virtual false final false
 void StopTimeout(int32_t interactionIndex) ;

/// @brief Method ChangePhaseOfInteraction addr 0x28bf6c8 size 0x400 virtual false final false
 void ChangePhaseOfInteraction(::UnityEngine::InputSystem::InputActionPhase newPhase, ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__TriggerState> trigger, ::UnityEngine::InputSystem::InputActionPhase phaseAfterPerformed, bool processNextInteractionOnCancel) ;

/// @brief Method ChangePhaseOfAction addr 0x28bd7cc size 0x20c virtual false final false
 bool ChangePhaseOfAction(::UnityEngine::InputSystem::InputActionPhase newPhase, ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__TriggerState> trigger, ::UnityEngine::InputSystem::InputActionPhase phaseAfterPerformedOrCanceled) ;

/// @brief Method ChangePhaseOfActionInternal addr 0x28bfac8 size 0x270 virtual false final false
 void ChangePhaseOfActionInternal(int32_t actionIndex, void* actionState, ::UnityEngine::InputSystem::InputActionPhase newPhase, ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__TriggerState> trigger) ;

/// @brief Method CallActionListeners addr 0x28bfd4c size 0x1d0 virtual false final false
 void CallActionListeners(int32_t actionIndex, ::UnityEngine::InputSystem::InputActionMap actionMap, ::UnityEngine::InputSystem::InputActionPhase phase, ByRef<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext>>> listeners, ::StringW callbackName) ;

/// @brief Method GetActionOrNoneString addr 0x28bff1c size 0x64 virtual false final false
 ::bs_hook::Il2CppWrapperType GetActionOrNoneString(ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__TriggerState> trigger) ;

/// @brief Method GetActionOrNull addr 0x28c0014 size 0x94 virtual false final false
 ::UnityEngine::InputSystem::InputAction GetActionOrNull(int32_t bindingIndex) ;

/// @brief Method GetActionOrNull addr 0x28bff80 size 0x94 virtual false final false
 ::UnityEngine::InputSystem::InputAction GetActionOrNull(ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__TriggerState> trigger) ;

/// @brief Method GetControl addr 0x28c00a8 size 0x40 virtual false final false
 ::UnityEngine::InputSystem::InputControl GetControl(ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__TriggerState> trigger) ;

/// @brief Method GetInteractionOrNull addr 0x28c00e8 size 0x4c virtual false final false
 ::UnityEngine::InputSystem::IInputInteraction GetInteractionOrNull(ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__TriggerState> trigger) ;

/// @brief Method GetBindingIndexInMap addr 0x28c0134 size 0x3c virtual false final false
 int32_t GetBindingIndexInMap(int32_t bindingIndex) ;

/// @brief Method GetBindingIndexInState addr 0x28c0170 size 0x28 virtual false final false
 int32_t GetBindingIndexInState(int32_t mapIndex, int32_t bindingIndexInMap) ;

/// @brief Method GetBindingState addr 0x28c0198 size 0x10 virtual false final false
 ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__BindingState> GetBindingState(int32_t bindingIndex) ;

/// @brief Method GetBinding addr 0x28c01a8 size 0x80 virtual false final false
 ByRef<::UnityEngine::InputSystem::InputBinding> GetBinding(int32_t bindingIndex) ;

/// @brief Method GetActionMap addr 0x28c0228 size 0x40 virtual false final false
 ::UnityEngine::InputSystem::InputActionMap GetActionMap(int32_t bindingIndex) ;

/// @brief Method ResetInteractionStateAndCancelIfNecessary addr 0x28bd724 size 0xa8 virtual false final false
 void ResetInteractionStateAndCancelIfNecessary(int32_t mapIndex, int32_t bindingIndex, int32_t interactionIndex) ;

/// @brief Method ResetInteractionState addr 0x28bc0e4 size 0x158 virtual false final false
 void ResetInteractionState(int32_t interactionIndex) ;

/// @brief Method GetValueSizeInBytes addr 0x28c0268 size 0x94 virtual false final false
 int32_t GetValueSizeInBytes(int32_t bindingIndex, int32_t controlIndex) ;

/// @brief Method GetValueType addr 0x28c02fc size 0x94 virtual false final false
 ::System::Type GetValueType(int32_t bindingIndex, int32_t controlIndex) ;

/// @brief Method IsActuated addr 0x28bf510 size 0xa8 virtual false final false
static bool IsActuated(ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__TriggerState> trigger, float_t threshold) ;

/// @brief Method ReadValue addr 0x28c0390 size 0x16c virtual false final false
 void ReadValue(int32_t bindingIndex, int32_t controlIndex, void* buffer, int32_t bufferSize, bool ignoreComposites) ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
 TValue ReadValue(int32_t bindingIndex, int32_t controlIndex, bool ignoreComposites) ;

/// @brief Method ApplyProcessors addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
 TValue ApplyProcessors(int32_t bindingIndex, TValue value, ::UnityEngine::InputSystem::InputControl_1<TValue> controlOfType) ;

/// @brief Method EvaluateCompositePartMagnitude addr 0x28c0510 size 0xd4 virtual false final false
 float_t EvaluateCompositePartMagnitude(int32_t bindingIndex, int32_t partNumber) ;

/// @brief Method GetCompositePartPressTime addr 0x28c05e4 size 0x80 virtual false final false
 double_t GetCompositePartPressTime(int32_t bindingIndex, int32_t partNumber) ;

/// @brief Method ReadCompositePartValue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue,typename TComparer>
 TValue ReadCompositePartValue(int32_t bindingIndex, int32_t partNumber, void* buttonValuePtr, ByRef<int32_t> controlIndex, TComparer comparer) ;

/// @brief Method ReadCompositePartValue addr 0x28c0664 size 0x114 virtual false final false
 bool ReadCompositePartValue(int32_t bindingIndex, int32_t partNumber, void* buffer, int32_t bufferSize) ;

/// @brief Method ReadCompositePartValueAsObject addr 0x28c0778 size 0xfc virtual false final false
 ::bs_hook::Il2CppWrapperType ReadCompositePartValueAsObject(int32_t bindingIndex, int32_t partNumber) ;

/// @brief Method ReadValueAsObject addr 0x28c0874 size 0x16c virtual false final false
 ::bs_hook::Il2CppWrapperType ReadValueAsObject(int32_t bindingIndex, int32_t controlIndex, bool ignoreComposites) ;

/// @brief Method ReadValueAsButton addr 0x28c09e0 size 0x130 virtual false final false
 bool ReadValueAsButton(int32_t bindingIndex, int32_t controlIndex) ;

/// @brief Method SaveAndResetState addr 0x28c0b10 size 0x1e4 virtual false final false
static ::UnityEngine::InputSystem::Utilities::ISavedState SaveAndResetState() ;

/// @brief Method AddToGlobalList addr 0x28bac20 size 0x88 virtual false final false
 void AddToGlobalList() ;

/// @brief Method RemoveMapFromGlobalList addr 0x28bb240 size 0x138 virtual false final false
 void RemoveMapFromGlobalList() ;

/// @brief Method CompactGlobalList addr 0x28c0cf4 size 0x168 virtual false final false
static void CompactGlobalList() ;

/// @brief Method NotifyListenersOfActionChange addr 0x28bc398 size 0xf4 virtual false final false
 void NotifyListenersOfActionChange(::UnityEngine::InputSystem::InputActionChange change) ;

/// @brief Method NotifyListenersOfActionChange addr 0x28bd268 size 0x100 virtual false final false
static void NotifyListenersOfActionChange(::UnityEngine::InputSystem::InputActionChange change, ::bs_hook::Il2CppWrapperType actionOrMapOrAsset) ;

/// @brief Method ResetGlobals addr 0x28c0e5c size 0x124 virtual false final false
static void ResetGlobals() ;

/// @brief Method FindAllEnabledActions addr 0x28c10f0 size 0x2b4 virtual false final false
static int32_t FindAllEnabledActions(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction> result) ;

/// @brief Method OnDeviceChange addr 0x28c13a4 size 0x314 virtual false final false
static void OnDeviceChange(::UnityEngine::InputSystem::InputDevice device, ::UnityEngine::InputSystem::InputDeviceChange change) ;

/// @brief Method DeferredResolutionOfBindings addr 0x28c16b8 size 0x294 virtual false final false
static void DeferredResolutionOfBindings() ;

/// @brief Method DisableAllActions addr 0x28c194c size 0x150 virtual false final false
static void DisableAllActions() ;

/// @brief Method DestroyAllActionMapStates addr 0x28c0f80 size 0x170 virtual false final false
static void DestroyAllActionMapStates() ;

// Ctor Parameters []
explicit InputActionState() ;

/// @brief Method .ctor addr 0x28bb504 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::______UnityEngine__InputSystem__InputActionState__BindingState__Flags, "UnityEngine.InputSystem", "InputActionState/BindingState/Flags");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::______UnityEngine__InputSystem__InputActionState__InteractionState__Flags, "UnityEngine.InputSystem", "InputActionState/InteractionState/Flags");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::______UnityEngine__InputSystem__InputActionState__TriggerState__Flags, "UnityEngine.InputSystem", "InputActionState/TriggerState/Flags");
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionState, "UnityEngine.InputSystem", "InputActionState");
NEED_NO_BOX(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState____c, "UnityEngine.InputSystem", "InputActionState/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__ActionMapIndices, "UnityEngine.InputSystem", "InputActionState/ActionMapIndices");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__BindingState, "UnityEngine.InputSystem", "InputActionState/BindingState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__GlobalState, "UnityEngine.InputSystem", "InputActionState/GlobalState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__InteractionState, "UnityEngine.InputSystem", "InputActionState/InteractionState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__TriggerState, "UnityEngine.InputSystem", "InputActionState/TriggerState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionState__UnmanagedMemory, "UnityEngine.InputSystem", "InputActionState/UnmanagedMemory");
