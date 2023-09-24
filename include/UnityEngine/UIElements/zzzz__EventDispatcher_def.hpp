#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
struct DispatchMode;
}
namespace UnityEngine::UIElements {
template<typename T>
class ObjectPool_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__EventDispatcher__DispatchContext;
}
namespace UnityEngine::UIElements {
class ClickDetector;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__EventDispatcher__EventRecord;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class PointerDispatchState;
}
namespace UnityEngine::UIElements {
class IEventDispatchingStrategy;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventDispatcher;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__EventDispatcher__DispatchContext;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__EventDispatcher__EventRecord;
}
// Type: ::EventRecord
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7000))
// CS Name: UnityEngine.UIElements.EventDispatcher::EventRecord
struct CORDL_TYPE UnityEngine__UIElements__EventDispatcher__EventRecord : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Event", ty: "UnityEngine::UIElements::EventBase", modifiers: "", def_value: None }, CppParam { name: "m_Panel", ty: "UnityEngine::UIElements::IPanel", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__EventDispatcher__EventRecord(UnityEngine::UIElements::EventBase m_Event, UnityEngine::UIElements::IPanel m_Panel) noexcept;


                    constexpr UnityEngine__UIElements__EventDispatcher__EventRecord(UnityEngine__UIElements__EventDispatcher__EventRecord const&) = default;
                    constexpr UnityEngine__UIElements__EventDispatcher__EventRecord(UnityEngine__UIElements__EventDispatcher__EventRecord&&) = default;
                    constexpr UnityEngine__UIElements__EventDispatcher__EventRecord& operator=(UnityEngine__UIElements__EventDispatcher__EventRecord const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__EventDispatcher__EventRecord& operator=(UnityEngine__UIElements__EventDispatcher__EventRecord&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__EventDispatcher__EventRecord(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::EventBase __declspec(property(get=__get_m_Event, put=__set_m_Event))  m_Event;

constexpr void __set_m_Event(UnityEngine::UIElements::EventBase value) ;

constexpr UnityEngine::UIElements::EventBase __get_m_Event() const;

 UnityEngine::UIElements::IPanel __declspec(property(get=__get_m_Panel, put=__set_m_Panel))  m_Panel;

constexpr void __set_m_Panel(UnityEngine::UIElements::IPanel value) ;

constexpr UnityEngine::UIElements::IPanel __get_m_Panel() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::DispatchContext
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7001))
// CS Name: UnityEngine.UIElements.EventDispatcher::DispatchContext
struct CORDL_TYPE UnityEngine__UIElements__EventDispatcher__DispatchContext : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_GateCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Queue", ty: "System::Collections::Generic::Queue_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__EventRecord>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__EventDispatcher__DispatchContext(uint32_t m_GateCount, System::Collections::Generic::Queue_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__EventRecord> m_Queue) noexcept;


                    constexpr UnityEngine__UIElements__EventDispatcher__DispatchContext(UnityEngine__UIElements__EventDispatcher__DispatchContext const&) = default;
                    constexpr UnityEngine__UIElements__EventDispatcher__DispatchContext(UnityEngine__UIElements__EventDispatcher__DispatchContext&&) = default;
                    constexpr UnityEngine__UIElements__EventDispatcher__DispatchContext& operator=(UnityEngine__UIElements__EventDispatcher__DispatchContext const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__EventDispatcher__DispatchContext& operator=(UnityEngine__UIElements__EventDispatcher__DispatchContext&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__EventDispatcher__DispatchContext(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_m_GateCount, put=__set_m_GateCount))  m_GateCount;

constexpr void __set_m_GateCount(uint32_t value) ;

constexpr uint32_t __get_m_GateCount() const;

 System::Collections::Generic::Queue_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__EventRecord> __declspec(property(get=__get_m_Queue, put=__set_m_Queue))  m_Queue;

constexpr void __set_m_Queue(System::Collections::Generic::Queue_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__EventRecord> value) ;

constexpr System::Collections::Generic::Queue_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__EventRecord> __get_m_Queue() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::EventDispatcher
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7002))
// CS Name: UnityEngine.UIElements.EventDispatcher
class CORDL_TYPE EventDispatcher : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using DispatchContext = UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext;

using EventRecord = UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__EventRecord;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~EventDispatcher() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventDispatcher", modifiers: " const&", def_value: None }]
constexpr EventDispatcher(EventDispatcher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventDispatcher", modifiers: "&&", def_value: None }]
constexpr EventDispatcher(EventDispatcher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventDispatcher(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EventDispatcher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventDispatcher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventDispatcher& operator=(EventDispatcher&& o) noexcept = default;
  constexpr EventDispatcher& operator=(EventDispatcher const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::ClickDetector __declspec(property(get=__get_m_ClickDetector, put=__set_m_ClickDetector))  m_ClickDetector;

constexpr void __set_m_ClickDetector(UnityEngine::UIElements::ClickDetector value) ;

constexpr UnityEngine::UIElements::ClickDetector __get_m_ClickDetector() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::IEventDispatchingStrategy> __declspec(property(get=__get_m_DispatchingStrategies, put=__set_m_DispatchingStrategies))  m_DispatchingStrategies;

constexpr void __set_m_DispatchingStrategies(System::Collections::Generic::List_1<UnityEngine::UIElements::IEventDispatchingStrategy> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::IEventDispatchingStrategy> __get_m_DispatchingStrategies() const;

static UnityEngine::UIElements::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__EventRecord>> __declspec(property(get=__get_k_EventQueuePool, put=__set_k_EventQueuePool))  k_EventQueuePool;

static void __set_k_EventQueuePool(UnityEngine::UIElements::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__EventRecord>> value) ;

static UnityEngine::UIElements::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__EventRecord>> __get_k_EventQueuePool() ;

 System::Collections::Generic::Queue_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__EventRecord> __declspec(property(get=__get_m_Queue, put=__set_m_Queue))  m_Queue;

constexpr void __set_m_Queue(System::Collections::Generic::Queue_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__EventRecord> value) ;

constexpr System::Collections::Generic::Queue_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__EventRecord> __get_m_Queue() const;

 UnityEngine::UIElements::PointerDispatchState __declspec(property(get=__get__pointerState_k__BackingField, put=__set__pointerState_k__BackingField))  _pointerState_k__BackingField;

constexpr void __set__pointerState_k__BackingField(UnityEngine::UIElements::PointerDispatchState value) ;

constexpr UnityEngine::UIElements::PointerDispatchState __get__pointerState_k__BackingField() const;

 uint32_t __declspec(property(get=__get_m_GateCount, put=__set_m_GateCount))  m_GateCount;

constexpr void __set_m_GateCount(uint32_t value) ;

constexpr uint32_t __get_m_GateCount() const;

 System::Collections::Generic::Stack_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext> __declspec(property(get=__get_m_DispatchContexts, put=__set_m_DispatchContexts))  m_DispatchContexts;

constexpr void __set_m_DispatchContexts(System::Collections::Generic::Stack_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext> value) ;

constexpr System::Collections::Generic::Stack_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext> __get_m_DispatchContexts() const;

static ::ArrayW<UnityEngine::UIElements::IEventDispatchingStrategy> __declspec(property(get=__get_s_EditorStrategies, put=__set_s_EditorStrategies))  s_EditorStrategies;

static void __set_s_EditorStrategies(::ArrayW<UnityEngine::UIElements::IEventDispatchingStrategy> value) ;

static ::ArrayW<UnityEngine::UIElements::IEventDispatchingStrategy> __get_s_EditorStrategies() ;

 bool __declspec(property(get=__get_m_Immediate, put=__set_m_Immediate))  m_Immediate;

constexpr void __set_m_Immediate(bool value) ;

constexpr bool __get_m_Immediate() const;

 bool __declspec(property(get=__get__processingEvents_k__BackingField, put=__set__processingEvents_k__BackingField))  _processingEvents_k__BackingField;

constexpr void __set__processingEvents_k__BackingField(bool value) ;

constexpr bool __get__processingEvents_k__BackingField() const;


// Properties

 UnityEngine::UIElements::PointerDispatchState __declspec(property(get=get_pointerState))  pointerState;

 bool __declspec(property(get=get_dispatchImmediately))  dispatchImmediately;

 bool __declspec(property(put=set_processingEvents))  processingEvents;


// Methods

/// @brief Method get_pointerState addr 0x2c89d68 size 0x8 virtual false final false
 UnityEngine::UIElements::PointerDispatchState get_pointerState() ;

/// @brief Method CreateForRuntime addr 0x2c89d70 size 0x60 virtual false final false
static UnityEngine::UIElements::EventDispatcher CreateForRuntime(System::Collections::Generic::IList_1<UnityEngine::UIElements::IEventDispatchingStrategy> strategies) ;

static UnityEngine::UIElements::EventDispatcher New_ctor(System::Collections::Generic::IList_1<UnityEngine::UIElements::IEventDispatchingStrategy> strategies) ;

/// @brief Method .ctor addr 0x2c89dd0 size 0x1ac virtual false final false
 void _ctor(System::Collections::Generic::IList_1<UnityEngine::UIElements::IEventDispatchingStrategy> strategies) ;

/// @brief Method get_dispatchImmediately addr 0x2c89f7c size 0x20 virtual false final false
 bool get_dispatchImmediately() ;

/// @brief Method set_processingEvents addr 0x2c89f9c size 0xc virtual false final false
 void set_processingEvents(bool value) ;

/// @brief Method Dispatch addr 0x2c89fa8 size 0x164 virtual false final false
 void Dispatch(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::IPanel panel, UnityEngine::UIElements::DispatchMode dispatchMode) ;

/// @brief Method CloseGate addr 0x2c89c18 size 0x10 virtual false final false
 void CloseGate() ;

/// @brief Method OpenGate addr 0x2c89c40 size 0x88 virtual false final false
 void OpenGate() ;

/// @brief Method ProcessEventQueue addr 0x2c8a4dc size 0x3c8 virtual false final false
 void ProcessEventQueue() ;

/// @brief Method ProcessEvent addr 0x2c8a10c size 0x3d0 virtual false final false
 void ProcessEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::IPanel panel) ;

/// @brief Method ApplyDispatchingStrategies addr 0x2c8a8a4 size 0x330 virtual false final false
 void ApplyDispatchingStrategies(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::IPanel panel, bool imguiEventIsInitiallyUsed) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::EventDispatcher);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::EventDispatcher, "UnityEngine.UIElements", "EventDispatcher");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext, "UnityEngine.UIElements", "EventDispatcher/DispatchContext");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__EventRecord, "UnityEngine.UIElements", "EventDispatcher/EventRecord");
