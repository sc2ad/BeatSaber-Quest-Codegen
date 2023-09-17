#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputAction__CallbackContext;
}
namespace UnityEngine::InputSystem {
class InputActionState;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
namespace UnityEngine::InputSystem {
struct InputActionChange;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventBuffer;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::InputSystem {
struct InputActionPhase;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class IInputInteraction;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class InputActionTrace;
}
namespace UnityEngine::InputSystem::Utilities {
struct ____UnityEngine__InputSystem__Utilities__InputActionTrace__ActionEventPtr;
}
namespace UnityEngine::InputSystem::Utilities {
struct ____UnityEngine__InputSystem__Utilities__InputActionTrace__Enumerator;
}
// Type: ::ActionEventPtr
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6736))
// CS Name: UnityEngine.InputSystem.Utilities.InputActionTrace::ActionEventPtr
struct CORDL_TYPE ____UnityEngine__InputSystem__Utilities__InputActionTrace__ActionEventPtr : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState", modifiers: "", def_value: None }, CppParam { name: "m_Ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__InputActionTrace__ActionEventPtr(::UnityEngine::InputSystem::InputActionState m_State, void* m_Ptr) noexcept;


                    constexpr ____UnityEngine__InputSystem__Utilities__InputActionTrace__ActionEventPtr(____UnityEngine__InputSystem__Utilities__InputActionTrace__ActionEventPtr const&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__InputActionTrace__ActionEventPtr(____UnityEngine__InputSystem__Utilities__InputActionTrace__ActionEventPtr&&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__InputActionTrace__ActionEventPtr& operator=(____UnityEngine__InputSystem__Utilities__InputActionTrace__ActionEventPtr const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__Utilities__InputActionTrace__ActionEventPtr& operator=(____UnityEngine__InputSystem__Utilities__InputActionTrace__ActionEventPtr&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Utilities__InputActionTrace__ActionEventPtr(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::InputActionState __declspec(property(get=__get_m_State, put=__set_m_State))  m_State;

constexpr void __set_m_State(::UnityEngine::InputSystem::InputActionState value) ;

constexpr ::UnityEngine::InputSystem::InputActionState __get_m_State() const;

 void* __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(void* value) ;

constexpr void* __get_m_Ptr() const;


// Properties

 ::UnityEngine::InputSystem::InputAction __declspec(property(get=get_action))  action;

 ::UnityEngine::InputSystem::InputActionPhase __declspec(property(get=get_phase))  phase;

 ::UnityEngine::InputSystem::InputControl __declspec(property(get=get_control))  control;

 ::UnityEngine::InputSystem::IInputInteraction __declspec(property(get=get_interaction))  interaction;

 double_t __declspec(property(get=get_time))  time;

 double_t __declspec(property(get=get_startTime))  startTime;

 double_t __declspec(property(get=get_duration))  duration;

 int32_t __declspec(property(get=get_valueSizeInBytes))  valueSizeInBytes;


// Methods

/// @brief Method get_action addr 0x297c214 size 0x28 virtual false final false
 ::UnityEngine::InputSystem::InputAction get_action() ;

/// @brief Method get_phase addr 0x297c23c size 0xc virtual false final false
 ::UnityEngine::InputSystem::InputActionPhase get_phase() ;

/// @brief Method get_control addr 0x297c248 size 0x40 virtual false final false
 ::UnityEngine::InputSystem::InputControl get_control() ;

/// @brief Method get_interaction addr 0x297c288 size 0x58 virtual false final false
 ::UnityEngine::InputSystem::IInputInteraction get_interaction() ;

/// @brief Method get_time addr 0x297c2e0 size 0x1c virtual false final false
 double_t get_time() ;

/// @brief Method get_startTime addr 0x297c2fc size 0xc virtual false final false
 double_t get_startTime() ;

/// @brief Method get_duration addr 0x297c308 size 0x30 virtual false final false
 double_t get_duration() ;

/// @brief Method get_valueSizeInBytes addr 0x297c338 size 0xc virtual false final false
 int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValueAsObject addr 0x297c344 size 0x244 virtual false final false
 ::bs_hook::Il2CppWrapperType ReadValueAsObject() ;

/// @brief Method ReadValue addr 0x297c588 size 0x104 virtual false final false
 void ReadValue(void* buffer, int32_t bufferSize) ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
 TValue ReadValue() ;

/// @brief Method ToString addr 0x297bb60 size 0x2f4 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6737))
// CS Name: UnityEngine.InputSystem.Utilities.InputActionTrace::Enumerator
struct CORDL_TYPE ____UnityEngine__InputSystem__Utilities__InputActionTrace__Enumerator : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__InputActionTrace__ActionEventPtr>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__InputActionTrace__ActionEventPtr>() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Trace", ty: "::UnityEngine::InputSystem::Utilities::InputActionTrace", modifiers: "", def_value: None }, CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_EventCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CurrentEvent", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_CurrentIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__InputActionTrace__Enumerator(::UnityEngine::InputSystem::Utilities::InputActionTrace m_Trace, void* m_Buffer, int32_t m_EventCount, void* m_CurrentEvent, int32_t m_CurrentIndex) noexcept;


                    constexpr ____UnityEngine__InputSystem__Utilities__InputActionTrace__Enumerator(____UnityEngine__InputSystem__Utilities__InputActionTrace__Enumerator const&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__InputActionTrace__Enumerator(____UnityEngine__InputSystem__Utilities__InputActionTrace__Enumerator&&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__InputActionTrace__Enumerator& operator=(____UnityEngine__InputSystem__Utilities__InputActionTrace__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__Utilities__InputActionTrace__Enumerator& operator=(____UnityEngine__InputSystem__Utilities__InputActionTrace__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Utilities__InputActionTrace__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::Utilities::InputActionTrace __declspec(property(get=__get_m_Trace, put=__set_m_Trace))  m_Trace;

constexpr void __set_m_Trace(::UnityEngine::InputSystem::Utilities::InputActionTrace value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InputActionTrace __get_m_Trace() const;

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_EventCount, put=__set_m_EventCount))  m_EventCount;

constexpr void __set_m_EventCount(int32_t value) ;

constexpr int32_t __get_m_EventCount() const;

 void* __declspec(property(get=__get_m_CurrentEvent, put=__set_m_CurrentEvent))  m_CurrentEvent;

constexpr void __set_m_CurrentEvent(void* value) ;

constexpr void* __get_m_CurrentEvent() const;

 int32_t __declspec(property(get=__get_m_CurrentIndex, put=__set_m_CurrentIndex))  m_CurrentIndex;

constexpr void __set_m_CurrentIndex(int32_t value) ;

constexpr int32_t __get_m_CurrentIndex() const;


// Properties

 ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__InputActionTrace__ActionEventPtr __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x297be6c size 0x48 virtual false final false
 void _ctor(::UnityEngine::InputSystem::Utilities::InputActionTrace trace) ;

/// @brief Method MoveNext addr 0x297c68c size 0x64 virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x297c6f0 size 0xc virtual true final true
 void Reset() ;

/// @brief Method Dispose addr 0x297c6fc size 0x4 virtual true final true
 void Dispose() ;

/// @brief Method get_Current addr 0x297c700 size 0x64 virtual true final true
 ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__InputActionTrace__ActionEventPtr get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x297c764 size 0x64 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::InputActionTrace
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6738))
// CS Name: UnityEngine.InputSystem.Utilities.InputActionTrace
class CORDL_TYPE InputActionTrace : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__InputActionTrace__Enumerator;

using ActionEventPtr = ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__InputActionTrace__ActionEventPtr;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__InputActionTrace__ActionEventPtr>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__InputActionTrace__ActionEventPtr>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~InputActionTrace() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputActionTrace", modifiers: " const&", def_value: None }]
constexpr InputActionTrace(InputActionTrace const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputActionTrace", modifiers: "&&", def_value: None }]
constexpr InputActionTrace(InputActionTrace&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputActionTrace(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputActionTrace& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputActionTrace& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputActionTrace& operator=(InputActionTrace&& o) noexcept = default;
  constexpr InputActionTrace& operator=(InputActionTrace const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_SubscribedToAll, put=__set_m_SubscribedToAll))  m_SubscribedToAll;

constexpr void __set_m_SubscribedToAll(bool value) ;

constexpr bool __get_m_SubscribedToAll() const;

 bool __declspec(property(get=__get_m_OnActionChangeHooked, put=__set_m_OnActionChangeHooked))  m_OnActionChangeHooked;

constexpr void __set_m_OnActionChangeHooked(bool value) ;

constexpr bool __get_m_OnActionChangeHooked() const;

 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputAction> __declspec(property(get=__get_m_SubscribedActions, put=__set_m_SubscribedActions))  m_SubscribedActions;

constexpr void __set_m_SubscribedActions(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputAction> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputAction> __get_m_SubscribedActions() const;

 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionMap> __declspec(property(get=__get_m_SubscribedActionMaps, put=__set_m_SubscribedActionMaps))  m_SubscribedActionMaps;

constexpr void __set_m_SubscribedActionMaps(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionMap> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionMap> __get_m_SubscribedActionMaps() const;

 ::UnityEngine::InputSystem::LowLevel::InputEventBuffer __declspec(property(get=__get_m_EventBuffer, put=__set_m_EventBuffer))  m_EventBuffer;

constexpr void __set_m_EventBuffer(::UnityEngine::InputSystem::LowLevel::InputEventBuffer value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventBuffer __get_m_EventBuffer() const;

 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState> __declspec(property(get=__get_m_ActionMapStates, put=__set_m_ActionMapStates))  m_ActionMapStates;

constexpr void __set_m_ActionMapStates(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState> __get_m_ActionMapStates() const;

 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState> __declspec(property(get=__get_m_ActionMapStateClones, put=__set_m_ActionMapStateClones))  m_ActionMapStateClones;

constexpr void __set_m_ActionMapStateClones(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState> __get_m_ActionMapStateClones() const;

 ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> __declspec(property(get=__get_m_CallbackDelegate, put=__set_m_CallbackDelegate))  m_CallbackDelegate;

constexpr void __set_m_CallbackDelegate(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> value) ;

constexpr ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> __get_m_CallbackDelegate() const;

 ::System::Action_2<::bs_hook::Il2CppWrapperType,::UnityEngine::InputSystem::InputActionChange> __declspec(property(get=__get_m_ActionChangeDelegate, put=__set_m_ActionChangeDelegate))  m_ActionChangeDelegate;

constexpr void __set_m_ActionChangeDelegate(::System::Action_2<::bs_hook::Il2CppWrapperType,::UnityEngine::InputSystem::InputActionChange> value) ;

constexpr ::System::Action_2<::bs_hook::Il2CppWrapperType,::UnityEngine::InputSystem::InputActionChange> __get_m_ActionChangeDelegate() const;


// Properties

 ::UnityEngine::InputSystem::LowLevel::InputEventBuffer __declspec(property(get=get_buffer))  buffer;

 int32_t __declspec(property(get=get_count))  count;


// Methods

/// @brief Method get_buffer addr 0x297ab78 size 0x10 virtual false final false
 ::UnityEngine::InputSystem::LowLevel::InputEventBuffer get_buffer() ;

/// @brief Method get_count addr 0x297ab88 size 0x8 virtual false final false
 int32_t get_count() ;

// Ctor Parameters []
explicit InputActionTrace() ;

/// @brief Method .ctor addr 0x297ab90 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "action", ty: "::UnityEngine::InputSystem::InputAction", modifiers: "", def_value: None }]
explicit InputActionTrace(::UnityEngine::InputSystem::InputAction action) ;

/// @brief Method .ctor addr 0x297ab98 size 0x7c virtual false final false
 void _ctor(::UnityEngine::InputSystem::InputAction action) ;

// Ctor Parameters [CppParam { name: "actionMap", ty: "::UnityEngine::InputSystem::InputActionMap", modifiers: "", def_value: None }]
explicit InputActionTrace(::UnityEngine::InputSystem::InputActionMap actionMap) ;

/// @brief Method .ctor addr 0x297ad48 size 0x7c virtual false final false
 void _ctor(::UnityEngine::InputSystem::InputActionMap actionMap) ;

/// @brief Method SubscribeToAll addr 0x297aed8 size 0xdc virtual false final false
 void SubscribeToAll() ;

/// @brief Method UnsubscribeFromAll addr 0x297b290 size 0xd8 virtual false final false
 void UnsubscribeFromAll() ;

/// @brief Method SubscribeTo addr 0x297ac14 size 0x134 virtual false final false
 void SubscribeTo(::UnityEngine::InputSystem::InputAction action) ;

/// @brief Method SubscribeTo addr 0x297adc4 size 0x114 virtual false final false
 void SubscribeTo(::UnityEngine::InputSystem::InputActionMap actionMap) ;

/// @brief Method UnsubscribeFrom addr 0x297b078 size 0x11c virtual false final false
 void UnsubscribeFrom(::UnityEngine::InputSystem::InputAction action) ;

/// @brief Method UnsubscribeFrom addr 0x297b194 size 0xfc virtual false final false
 void UnsubscribeFrom(::UnityEngine::InputSystem::InputActionMap actionMap) ;

/// @brief Method RecordAction addr 0x297b3d4 size 0x1d0 virtual false final false
 void RecordAction(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method Clear addr 0x297b5a4 size 0x54 virtual false final false
 void Clear() ;

/// @brief Method Finalize addr 0x297b5f8 size 0x94 virtual true final false
 void Finalize() ;

/// @brief Method ToString addr 0x297b78c size 0x35c virtual true final false
 ::StringW ToString() ;

/// @brief Method Dispose addr 0x297be54 size 0x18 virtual true final true
 void Dispose() ;

/// @brief Method DisposeInternal addr 0x297b68c size 0x100 virtual false final false
 void DisposeInternal() ;

/// @brief Method GetEnumerator addr 0x297bae8 size 0x78 virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__InputActionTrace__ActionEventPtr> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x297beb4 size 0x4 virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method HookOnActionChange addr 0x297afb4 size 0xc4 virtual false final false
 void HookOnActionChange() ;

/// @brief Method UnhookOnActionChange addr 0x297b368 size 0x6c virtual false final false
 void UnhookOnActionChange() ;

/// @brief Method OnActionChange addr 0x297beb8 size 0x264 virtual false final false
 void OnActionChange(::bs_hook::Il2CppWrapperType actionOrMapOrAsset, ::UnityEngine::InputSystem::InputActionChange change) ;

/// @brief Method CloneActionStateBeforeBindingsChange addr 0x297c11c size 0xf8 virtual false final false
 void CloneActionStateBeforeBindingsChange(::UnityEngine::InputSystem::InputActionMap actionMap) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::InputActionTrace);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::InputActionTrace, "UnityEngine.InputSystem.Utilities", "InputActionTrace");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__InputActionTrace__ActionEventPtr, "UnityEngine.InputSystem.Utilities", "InputActionTrace/ActionEventPtr");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__InputActionTrace__Enumerator, "UnityEngine.InputSystem.Utilities", "InputActionTrace/Enumerator");
