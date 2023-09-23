#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputActionState__TriggerState;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
class InputActionState;
}
namespace UnityEngine::InputSystem {
struct InputActionPhase;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputInteractionContext__Flags;
}
namespace UnityEngine::InputSystem {
struct InputInteractionContext;
}
// Type: ::Flags
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6288))
// CS Name: UnityEngine.InputSystem.InputInteractionContext::Flags
struct CORDL_TYPE UnityEngine__InputSystem__InputInteractionContext__Flags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputInteractionContext__Flags(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__InputInteractionContext__Flags(UnityEngine__InputSystem__InputInteractionContext__Flags const&) = default;
                    constexpr UnityEngine__InputSystem__InputInteractionContext__Flags(UnityEngine__InputSystem__InputInteractionContext__Flags&&) = default;
                    constexpr UnityEngine__InputSystem__InputInteractionContext__Flags& operator=(UnityEngine__InputSystem__InputInteractionContext__Flags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputInteractionContext__Flags& operator=(UnityEngine__InputSystem__InputInteractionContext__Flags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputInteractionContext__Flags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__InputInteractionContext__Flags_Unwrapped : int32_t {
__TimerHasExpired = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__InputInteractionContext__Flags_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__InputInteractionContext__Flags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field TimerHasExpired offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputInteractionContext__Flags const TimerHasExpired;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputInteractionContext
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6289))
// CS Name: UnityEngine.InputSystem.InputInteractionContext
struct CORDL_TYPE InputInteractionContext : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Flags = UnityEngine::InputSystem::UnityEngine__InputSystem__InputInteractionContext__Flags;

// Ctor Parameters [CppParam { name: "m_State", ty: "UnityEngine::InputSystem::InputActionState", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "UnityEngine::InputSystem::UnityEngine__InputSystem__InputInteractionContext__Flags", modifiers: "", def_value: None }, CppParam { name: "m_TriggerState", ty: "UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState", modifiers: "", def_value: None }]
constexpr InputInteractionContext(UnityEngine::InputSystem::InputActionState m_State, UnityEngine::InputSystem::UnityEngine__InputSystem__InputInteractionContext__Flags m_Flags, UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState m_TriggerState) noexcept;


                    constexpr InputInteractionContext(InputInteractionContext const&) = default;
                    constexpr InputInteractionContext(InputInteractionContext&&) = default;
                    constexpr InputInteractionContext& operator=(InputInteractionContext const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputInteractionContext& operator=(InputInteractionContext&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputInteractionContext(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::InputActionState __declspec(property(get=__get_m_State, put=__set_m_State))  m_State;

constexpr void __set_m_State(UnityEngine::InputSystem::InputActionState value) ;

constexpr UnityEngine::InputSystem::InputActionState __get_m_State() const;

 UnityEngine::InputSystem::UnityEngine__InputSystem__InputInteractionContext__Flags __declspec(property(get=__get_m_Flags, put=__set_m_Flags))  m_Flags;

constexpr void __set_m_Flags(UnityEngine::InputSystem::UnityEngine__InputSystem__InputInteractionContext__Flags value) ;

constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputInteractionContext__Flags __get_m_Flags() const;

 UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState __declspec(property(get=__get_m_TriggerState, put=__set_m_TriggerState))  m_TriggerState;

constexpr void __set_m_TriggerState(UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState value) ;

constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__TriggerState __get_m_TriggerState() const;


// Properties

 UnityEngine::InputSystem::InputAction __declspec(property(get=get_action))  action;

 UnityEngine::InputSystem::InputControl __declspec(property(get=get_control))  control;

 UnityEngine::InputSystem::InputActionPhase __declspec(property(get=get_phase))  phase;

 double_t __declspec(property(get=get_time))  time;

 double_t __declspec(property(get=get_startTime))  startTime;

 bool __declspec(property(get=get_timerHasExpired, put=set_timerHasExpired))  timerHasExpired;

 bool __declspec(property(get=get_isWaiting))  isWaiting;

 bool __declspec(property(get=get_isStarted))  isStarted;

 int32_t __declspec(property(get=get_mapIndex))  mapIndex;

 int32_t __declspec(property(get=get_controlIndex))  controlIndex;

 int32_t __declspec(property(get=get_bindingIndex))  bindingIndex;

 int32_t __declspec(property(get=get_interactionIndex))  interactionIndex;


// Methods

/// @brief Method get_action addr 0x28ca1a8 size 0x24 virtual false final false
 UnityEngine::InputSystem::InputAction get_action() ;

/// @brief Method get_control addr 0x28ca1cc size 0x24 virtual false final false
 UnityEngine::InputSystem::InputControl get_control() ;

/// @brief Method get_phase addr 0x28ca1f0 size 0x8 virtual false final false
 UnityEngine::InputSystem::InputActionPhase get_phase() ;

/// @brief Method get_time addr 0x28ca1f8 size 0x8 virtual false final false
 double_t get_time() ;

/// @brief Method get_startTime addr 0x28ca200 size 0x8 virtual false final false
 double_t get_startTime() ;

/// @brief Method get_timerHasExpired addr 0x28ca208 size 0xc virtual false final false
 bool get_timerHasExpired() ;

/// @brief Method set_timerHasExpired addr 0x28ca214 size 0x1c virtual false final false
 void set_timerHasExpired(bool value) ;

/// @brief Method get_isWaiting addr 0x28ca230 size 0x10 virtual false final false
 bool get_isWaiting() ;

/// @brief Method get_isStarted addr 0x28ca240 size 0x10 virtual false final false
 bool get_isStarted() ;

/// @brief Method ComputeMagnitude addr 0x28ca250 size 0x8 virtual false final false
 float_t ComputeMagnitude() ;

/// @brief Method ControlIsActuated addr 0x28ca258 size 0xc virtual false final false
 bool ControlIsActuated(float_t threshold) ;

/// @brief Method Started addr 0x28ca264 size 0x38 virtual false final false
 void Started() ;

/// @brief Method Performed addr 0x28ca29c size 0x40 virtual false final false
 void Performed() ;

/// @brief Method PerformedAndStayStarted addr 0x28ca2dc size 0x40 virtual false final false
 void PerformedAndStayStarted() ;

/// @brief Method PerformedAndStayPerformed addr 0x28ca31c size 0x40 virtual false final false
 void PerformedAndStayPerformed() ;

/// @brief Method Canceled addr 0x28ca35c size 0x40 virtual false final false
 void Canceled() ;

/// @brief Method Waiting addr 0x28ca39c size 0x40 virtual false final false
 void Waiting() ;

/// @brief Method SetTimeout addr 0x28ca3dc size 0x24 virtual false final false
 void SetTimeout(float_t seconds) ;

/// @brief Method SetTotalTimeoutCompletionTime addr 0x28ca400 size 0x94 virtual false final false
 void SetTotalTimeoutCompletionTime(float_t seconds) ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
 TValue ReadValue() ;

/// @brief Method get_mapIndex addr 0x28ca494 size 0x8 virtual false final false
 int32_t get_mapIndex() ;

/// @brief Method get_controlIndex addr 0x28ca49c size 0xc virtual false final false
 int32_t get_controlIndex() ;

/// @brief Method get_bindingIndex addr 0x28ca4a8 size 0x8 virtual false final false
 int32_t get_bindingIndex() ;

/// @brief Method get_interactionIndex addr 0x28ca4b0 size 0xc virtual false final false
 int32_t get_interactionIndex() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputInteractionContext__Flags, "UnityEngine.InputSystem", "InputInteractionContext/Flags");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::InputInteractionContext, "UnityEngine.InputSystem", "InputInteractionContext");
