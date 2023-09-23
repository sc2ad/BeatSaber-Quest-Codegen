#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System::Net {
class ServicePoint;
}
namespace System::Net {
class WebOperation;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace System {
struct DateTime;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Net {
class WebConnection;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Threading {
class CancellationTokenSource;
}
// Forward declare root types
namespace GlobalNamespace {
class System__Net__ServicePointScheduler__AsyncManualResetEvent____c;
}
namespace System::Net {
class ServicePointScheduler;
}
namespace System::Net {
class System__Net__ServicePointScheduler__AsyncManualResetEvent;
}
namespace System::Net {
class System__Net__ServicePointScheduler__ConnectionGroup;
}
namespace System::Net {
struct System__Net__ServicePointScheduler___RunScheduler_d__32;
}
namespace System::Net {
struct System__Net__ServicePointScheduler___WaitAsync_d__46;
}
// Type: ::ConnectionGroup
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8054))
// CS Name: System.Net.ServicePointScheduler::ConnectionGroup
class CORDL_TYPE System__Net__ServicePointScheduler__ConnectionGroup : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~System__Net__ServicePointScheduler__ConnectionGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__ServicePointScheduler__ConnectionGroup", modifiers: " const&", def_value: None }]
constexpr System__Net__ServicePointScheduler__ConnectionGroup(System__Net__ServicePointScheduler__ConnectionGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__ServicePointScheduler__ConnectionGroup", modifiers: "&&", def_value: None }]
constexpr System__Net__ServicePointScheduler__ConnectionGroup(System__Net__ServicePointScheduler__ConnectionGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__ServicePointScheduler__ConnectionGroup(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__ServicePointScheduler__ConnectionGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__ServicePointScheduler__ConnectionGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__ServicePointScheduler__ConnectionGroup& operator=(System__Net__ServicePointScheduler__ConnectionGroup&& o) noexcept = default;
  constexpr System__Net__ServicePointScheduler__ConnectionGroup& operator=(System__Net__ServicePointScheduler__ConnectionGroup const& o) noexcept = default;
                


// Fields

 System::Net::ServicePointScheduler __declspec(property(get=__get__Scheduler_k__BackingField, put=__set__Scheduler_k__BackingField))  _Scheduler_k__BackingField;

constexpr void __set__Scheduler_k__BackingField(System::Net::ServicePointScheduler value) ;

constexpr System::Net::ServicePointScheduler __get__Scheduler_k__BackingField() const;

 ::StringW __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField))  _Name_k__BackingField;

constexpr void __set__Name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Name_k__BackingField() const;

static int32_t __declspec(property(get=__get_nextId, put=__set_nextId))  nextId;

static void __set_nextId(int32_t value) ;

static int32_t __get_nextId() ;

 int32_t __declspec(property(get=__get_ID, put=__set_ID))  ID;

constexpr void __set_ID(int32_t value) ;

constexpr int32_t __get_ID() const;

 System::Collections::Generic::LinkedList_1<System::Net::WebConnection> __declspec(property(get=__get_connections, put=__set_connections))  connections;

constexpr void __set_connections(System::Collections::Generic::LinkedList_1<System::Net::WebConnection> value) ;

constexpr System::Collections::Generic::LinkedList_1<System::Net::WebConnection> __get_connections() const;

 System::Collections::Generic::LinkedList_1<System::Net::WebOperation> __declspec(property(get=__get_queue, put=__set_queue))  queue;

constexpr void __set_queue(System::Collections::Generic::LinkedList_1<System::Net::WebOperation> value) ;

constexpr System::Collections::Generic::LinkedList_1<System::Net::WebOperation> __get_queue() const;


// Properties

 System::Net::ServicePointScheduler __declspec(property(get=get_Scheduler))  Scheduler;


// Methods

/// @brief Method get_Scheduler addr 0x2848900 size 0x8 virtual false final false
 System::Net::ServicePointScheduler get_Scheduler() ;

// Ctor Parameters [CppParam { name: "scheduler", ty: "System::Net::ServicePointScheduler", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit System__Net__ServicePointScheduler__ConnectionGroup(System::Net::ServicePointScheduler scheduler, ::StringW name) ;

/// @brief Method .ctor addr 0x2846e54 size 0x10c virtual false final false
 void _ctor(System::Net::ServicePointScheduler scheduler, ::StringW name) ;

/// @brief Method IsEmpty addr 0x28474e8 size 0x74 virtual false final false
 bool IsEmpty() ;

/// @brief Method RemoveConnection addr 0x2847c0c size 0x88 virtual false final false
 void RemoveConnection(System::Net::WebConnection connection) ;

/// @brief Method Cleanup addr 0x2847d60 size 0xf0 virtual false final false
 void Cleanup() ;

/// @brief Method Close addr 0x28484b4 size 0x318 virtual false final false
 void Close() ;

/// @brief Method EnqueueOperation addr 0x284845c size 0x58 virtual false final false
 void EnqueueOperation(System::Net::WebOperation operation) ;

/// @brief Method GetNextOperation addr 0x2848028 size 0xec virtual false final false
 System::Net::WebOperation GetNextOperation() ;

/// @brief Method FindIdleConnection addr 0x28489b0 size 0x314 virtual false final false
 System::Net::WebConnection FindIdleConnection(System::Net::WebOperation operation) ;

/// @brief Method CreateOrReuseConnection addr 0x2847e50 size 0x1a0 virtual false final false
 System::ValueTuple_2<System::Net::WebConnection,bool> CreateOrReuseConnection(System::Net::WebOperation operation, bool force) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8055))
// CS Name: System.Net.ServicePointScheduler::AsyncManualResetEvent::<>c
class CORDL_TYPE System__Net__ServicePointScheduler__AsyncManualResetEvent____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Net__ServicePointScheduler__AsyncManualResetEvent____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__ServicePointScheduler__AsyncManualResetEvent____c", modifiers: " const&", def_value: None }]
constexpr System__Net__ServicePointScheduler__AsyncManualResetEvent____c(System__Net__ServicePointScheduler__AsyncManualResetEvent____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__ServicePointScheduler__AsyncManualResetEvent____c", modifiers: "&&", def_value: None }]
constexpr System__Net__ServicePointScheduler__AsyncManualResetEvent____c(System__Net__ServicePointScheduler__AsyncManualResetEvent____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__ServicePointScheduler__AsyncManualResetEvent____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__ServicePointScheduler__AsyncManualResetEvent____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__ServicePointScheduler__AsyncManualResetEvent____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__ServicePointScheduler__AsyncManualResetEvent____c& operator=(System__Net__ServicePointScheduler__AsyncManualResetEvent____c&& o) noexcept = default;
  constexpr System__Net__ServicePointScheduler__AsyncManualResetEvent____c& operator=(System__Net__ServicePointScheduler__AsyncManualResetEvent____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::System__Net__ServicePointScheduler__AsyncManualResetEvent____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::System__Net__ServicePointScheduler__AsyncManualResetEvent____c value) ;

static GlobalNamespace::System__Net__ServicePointScheduler__AsyncManualResetEvent____c __get___9() ;

static System::Func_2<::bs_hook::Il2CppWrapperType,bool> __declspec(property(get=__get___9__4_0, put=__set___9__4_0))  __9__4_0;

static void __set___9__4_0(System::Func_2<::bs_hook::Il2CppWrapperType,bool> value) ;

static System::Func_2<::bs_hook::Il2CppWrapperType,bool> __get___9__4_0() ;


// Methods

// Ctor Parameters []
explicit System__Net__ServicePointScheduler__AsyncManualResetEvent____c() ;

/// @brief Method .ctor addr 0x28493c4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Set>b__4_0 addr 0x28493cc size 0x9c virtual false final false
 bool _Set_b__4_0(::bs_hook::Il2CppWrapperType s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AsyncManualResetEvent
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8056))
// CS Name: System.Net.ServicePointScheduler::AsyncManualResetEvent
class CORDL_TYPE System__Net__ServicePointScheduler__AsyncManualResetEvent : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::System__Net__ServicePointScheduler__AsyncManualResetEvent____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~System__Net__ServicePointScheduler__AsyncManualResetEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__ServicePointScheduler__AsyncManualResetEvent", modifiers: " const&", def_value: None }]
constexpr System__Net__ServicePointScheduler__AsyncManualResetEvent(System__Net__ServicePointScheduler__AsyncManualResetEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__ServicePointScheduler__AsyncManualResetEvent", modifiers: "&&", def_value: None }]
constexpr System__Net__ServicePointScheduler__AsyncManualResetEvent(System__Net__ServicePointScheduler__AsyncManualResetEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__ServicePointScheduler__AsyncManualResetEvent(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__ServicePointScheduler__AsyncManualResetEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__ServicePointScheduler__AsyncManualResetEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__ServicePointScheduler__AsyncManualResetEvent& operator=(System__Net__ServicePointScheduler__AsyncManualResetEvent&& o) noexcept = default;
  constexpr System__Net__ServicePointScheduler__AsyncManualResetEvent& operator=(System__Net__ServicePointScheduler__AsyncManualResetEvent const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::TaskCompletionSource_1<bool> __declspec(property(get=__get_m_tcs, put=__set_m_tcs))  m_tcs;

constexpr void __set_m_tcs(System::Threading::Tasks::TaskCompletionSource_1<bool> value) ;

constexpr System::Threading::Tasks::TaskCompletionSource_1<bool> __get_m_tcs() const;


// Methods

/// @brief Method WaitAsync addr 0x284930c size 0x54 virtual false final false
 System::Threading::Tasks::Task_1<bool> WaitAsync(int32_t millisecondTimeout) ;

/// @brief Method Set addr 0x2847028 size 0x230 virtual false final false
 void Set() ;

/// @brief Method Reset addr 0x28476e8 size 0xc4 virtual false final false
 void Reset() ;

// Ctor Parameters [CppParam { name: "state", ty: "bool", modifiers: "", def_value: None }]
explicit System__Net__ServicePointScheduler__AsyncManualResetEvent(bool state) ;

/// @brief Method .ctor addr 0x2846dac size 0xa8 virtual false final false
 void _ctor(bool state) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<RunScheduler>d__32
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8057))
// CS Name: System.Net.ServicePointScheduler::<RunScheduler>d__32
struct CORDL_TYPE System__Net__ServicePointScheduler___RunScheduler_d__32 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::Net::ServicePointScheduler", modifiers: "", def_value: None }, CppParam { name: "_operationArray_5__2", ty: "::ArrayW<System::ValueTuple_2<System::Net::System__Net__ServicePointScheduler__ConnectionGroup,System::Net::WebOperation>>", modifiers: "", def_value: None }, CppParam { name: "_idleArray_5__3", ty: "::ArrayW<System::ValueTuple_3<System::Net::System__Net__ServicePointScheduler__ConnectionGroup,System::Net::WebConnection,System::Threading::Tasks::Task>>", modifiers: "", def_value: None }, CppParam { name: "_taskList_5__4", ty: "System::Collections::Generic::List_1<System::Threading::Tasks::Task>", modifiers: "", def_value: None }, CppParam { name: "_schedulerTask_5__5", ty: "System::Threading::Tasks::Task_1<bool>", modifiers: "", def_value: None }, CppParam { name: "_finalCleanup_5__6", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Threading::Tasks::Task>", modifiers: "", def_value: None }]
constexpr System__Net__ServicePointScheduler___RunScheduler_d__32(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, System::Net::ServicePointScheduler __4__this, ::ArrayW<System::ValueTuple_2<System::Net::System__Net__ServicePointScheduler__ConnectionGroup,System::Net::WebOperation>> _operationArray_5__2, ::ArrayW<System::ValueTuple_3<System::Net::System__Net__ServicePointScheduler__ConnectionGroup,System::Net::WebConnection,System::Threading::Tasks::Task>> _idleArray_5__3, System::Collections::Generic::List_1<System::Threading::Tasks::Task> _taskList_5__4, System::Threading::Tasks::Task_1<bool> _schedulerTask_5__5, bool _finalCleanup_5__6, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Threading::Tasks::Task> __u__1) noexcept;


                    constexpr System__Net__ServicePointScheduler___RunScheduler_d__32(System__Net__ServicePointScheduler___RunScheduler_d__32 const&) = default;
                    constexpr System__Net__ServicePointScheduler___RunScheduler_d__32(System__Net__ServicePointScheduler___RunScheduler_d__32&&) = default;
                    constexpr System__Net__ServicePointScheduler___RunScheduler_d__32& operator=(System__Net__ServicePointScheduler___RunScheduler_d__32 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__ServicePointScheduler___RunScheduler_d__32& operator=(System__Net__ServicePointScheduler___RunScheduler_d__32&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x60};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__ServicePointScheduler___RunScheduler_d__32(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder __get___t__builder() const;

 System::Net::ServicePointScheduler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Net::ServicePointScheduler value) ;

constexpr System::Net::ServicePointScheduler __get___4__this() const;

 ::ArrayW<System::ValueTuple_2<System::Net::System__Net__ServicePointScheduler__ConnectionGroup,System::Net::WebOperation>> __declspec(property(get=__get__operationArray_5__2, put=__set__operationArray_5__2))  _operationArray_5__2;

constexpr void __set__operationArray_5__2(::ArrayW<System::ValueTuple_2<System::Net::System__Net__ServicePointScheduler__ConnectionGroup,System::Net::WebOperation>> value) ;

constexpr ::ArrayW<System::ValueTuple_2<System::Net::System__Net__ServicePointScheduler__ConnectionGroup,System::Net::WebOperation>> __get__operationArray_5__2() const;

 ::ArrayW<System::ValueTuple_3<System::Net::System__Net__ServicePointScheduler__ConnectionGroup,System::Net::WebConnection,System::Threading::Tasks::Task>> __declspec(property(get=__get__idleArray_5__3, put=__set__idleArray_5__3))  _idleArray_5__3;

constexpr void __set__idleArray_5__3(::ArrayW<System::ValueTuple_3<System::Net::System__Net__ServicePointScheduler__ConnectionGroup,System::Net::WebConnection,System::Threading::Tasks::Task>> value) ;

constexpr ::ArrayW<System::ValueTuple_3<System::Net::System__Net__ServicePointScheduler__ConnectionGroup,System::Net::WebConnection,System::Threading::Tasks::Task>> __get__idleArray_5__3() const;

 System::Collections::Generic::List_1<System::Threading::Tasks::Task> __declspec(property(get=__get__taskList_5__4, put=__set__taskList_5__4))  _taskList_5__4;

constexpr void __set__taskList_5__4(System::Collections::Generic::List_1<System::Threading::Tasks::Task> value) ;

constexpr System::Collections::Generic::List_1<System::Threading::Tasks::Task> __get__taskList_5__4() const;

 System::Threading::Tasks::Task_1<bool> __declspec(property(get=__get__schedulerTask_5__5, put=__set__schedulerTask_5__5))  _schedulerTask_5__5;

constexpr void __set__schedulerTask_5__5(System::Threading::Tasks::Task_1<bool> value) ;

constexpr System::Threading::Tasks::Task_1<bool> __get__schedulerTask_5__5() const;

 bool __declspec(property(get=__get__finalCleanup_5__6, put=__set__finalCleanup_5__6))  _finalCleanup_5__6;

constexpr void __set__finalCleanup_5__6(bool value) ;

constexpr bool __get__finalCleanup_5__6() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Threading::Tasks::Task> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Threading::Tasks::Task> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Threading::Tasks::Task> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2849468 size 0xaf4 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2849f5c size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<WaitAsync>d__46
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8058))
// CS Name: System.Net.ServicePointScheduler::<WaitAsync>d__46
struct CORDL_TYPE System__Net__ServicePointScheduler___WaitAsync_d__46 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "millisecondTimeout", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "workerTask", ty: "System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "_cts_5__2", ty: "System::Threading::CancellationTokenSource", modifiers: "", def_value: None }, CppParam { name: "_timeoutTask_5__3", ty: "System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Threading::Tasks::Task>", modifiers: "", def_value: None }]
constexpr System__Net__ServicePointScheduler___WaitAsync_d__46(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, int32_t millisecondTimeout, System::Threading::Tasks::Task workerTask, System::Threading::CancellationTokenSource _cts_5__2, System::Threading::Tasks::Task _timeoutTask_5__3, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Threading::Tasks::Task> __u__1) noexcept;


                    constexpr System__Net__ServicePointScheduler___WaitAsync_d__46(System__Net__ServicePointScheduler___WaitAsync_d__46 const&) = default;
                    constexpr System__Net__ServicePointScheduler___WaitAsync_d__46(System__Net__ServicePointScheduler___WaitAsync_d__46&&) = default;
                    constexpr System__Net__ServicePointScheduler___WaitAsync_d__46& operator=(System__Net__ServicePointScheduler___WaitAsync_d__46 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__ServicePointScheduler___WaitAsync_d__46& operator=(System__Net__ServicePointScheduler___WaitAsync_d__46&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__ServicePointScheduler___WaitAsync_d__46(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __get___t__builder() const;

 int32_t __declspec(property(get=__get_millisecondTimeout, put=__set_millisecondTimeout))  millisecondTimeout;

constexpr void __set_millisecondTimeout(int32_t value) ;

constexpr int32_t __get_millisecondTimeout() const;

 System::Threading::Tasks::Task __declspec(property(get=__get_workerTask, put=__set_workerTask))  workerTask;

constexpr void __set_workerTask(System::Threading::Tasks::Task value) ;

constexpr System::Threading::Tasks::Task __get_workerTask() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get__cts_5__2, put=__set__cts_5__2))  _cts_5__2;

constexpr void __set__cts_5__2(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get__cts_5__2() const;

 System::Threading::Tasks::Task __declspec(property(get=__get__timeoutTask_5__3, put=__set__timeoutTask_5__3))  _timeoutTask_5__3;

constexpr void __set__timeoutTask_5__3(System::Threading::Tasks::Task value) ;

constexpr System::Threading::Tasks::Task __get__timeoutTask_5__3() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Threading::Tasks::Task> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Threading::Tasks::Task> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Threading::Tasks::Task> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2849f68 size 0x44c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x284a3b4 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::ServicePointScheduler
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8059))
// CS Name: System.Net.ServicePointScheduler
class CORDL_TYPE ServicePointScheduler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _WaitAsync_d__46 = System::Net::System__Net__ServicePointScheduler___WaitAsync_d__46;

using _RunScheduler_d__32 = System::Net::System__Net__ServicePointScheduler___RunScheduler_d__32;

using AsyncManualResetEvent = System::Net::System__Net__ServicePointScheduler__AsyncManualResetEvent;

using ConnectionGroup = System::Net::System__Net__ServicePointScheduler__ConnectionGroup;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ServicePointScheduler() = default;

// Ctor Parameters [CppParam { name: "", ty: "ServicePointScheduler", modifiers: " const&", def_value: None }]
constexpr ServicePointScheduler(ServicePointScheduler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ServicePointScheduler", modifiers: "&&", def_value: None }]
constexpr ServicePointScheduler(ServicePointScheduler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ServicePointScheduler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ServicePointScheduler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ServicePointScheduler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ServicePointScheduler& operator=(ServicePointScheduler&& o) noexcept = default;
  constexpr ServicePointScheduler& operator=(ServicePointScheduler const& o) noexcept = default;
                


// Fields

 System::Net::ServicePoint __declspec(property(get=__get__ServicePoint_k__BackingField, put=__set__ServicePoint_k__BackingField))  _ServicePoint_k__BackingField;

constexpr void __set__ServicePoint_k__BackingField(System::Net::ServicePoint value) ;

constexpr System::Net::ServicePoint __get__ServicePoint_k__BackingField() const;

 int32_t __declspec(property(get=__get_running, put=__set_running))  running;

constexpr void __set_running(int32_t value) ;

constexpr int32_t __get_running() const;

 int32_t __declspec(property(get=__get_maxIdleTime, put=__set_maxIdleTime))  maxIdleTime;

constexpr void __set_maxIdleTime(int32_t value) ;

constexpr int32_t __get_maxIdleTime() const;

 System::Net::System__Net__ServicePointScheduler__AsyncManualResetEvent __declspec(property(get=__get_schedulerEvent, put=__set_schedulerEvent))  schedulerEvent;

constexpr void __set_schedulerEvent(System::Net::System__Net__ServicePointScheduler__AsyncManualResetEvent value) ;

constexpr System::Net::System__Net__ServicePointScheduler__AsyncManualResetEvent __get_schedulerEvent() const;

 System::Net::System__Net__ServicePointScheduler__ConnectionGroup __declspec(property(get=__get_defaultGroup, put=__set_defaultGroup))  defaultGroup;

constexpr void __set_defaultGroup(System::Net::System__Net__ServicePointScheduler__ConnectionGroup value) ;

constexpr System::Net::System__Net__ServicePointScheduler__ConnectionGroup __get_defaultGroup() const;

 System::Collections::Generic::Dictionary_2<::StringW,System::Net::System__Net__ServicePointScheduler__ConnectionGroup> __declspec(property(get=__get_groups, put=__set_groups))  groups;

constexpr void __set_groups(System::Collections::Generic::Dictionary_2<::StringW,System::Net::System__Net__ServicePointScheduler__ConnectionGroup> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,System::Net::System__Net__ServicePointScheduler__ConnectionGroup> __get_groups() const;

 System::Collections::Generic::LinkedList_1<System::ValueTuple_2<System::Net::System__Net__ServicePointScheduler__ConnectionGroup,System::Net::WebOperation>> __declspec(property(get=__get_operations, put=__set_operations))  operations;

constexpr void __set_operations(System::Collections::Generic::LinkedList_1<System::ValueTuple_2<System::Net::System__Net__ServicePointScheduler__ConnectionGroup,System::Net::WebOperation>> value) ;

constexpr System::Collections::Generic::LinkedList_1<System::ValueTuple_2<System::Net::System__Net__ServicePointScheduler__ConnectionGroup,System::Net::WebOperation>> __get_operations() const;

 System::Collections::Generic::LinkedList_1<System::ValueTuple_3<System::Net::System__Net__ServicePointScheduler__ConnectionGroup,System::Net::WebConnection,System::Threading::Tasks::Task>> __declspec(property(get=__get_idleConnections, put=__set_idleConnections))  idleConnections;

constexpr void __set_idleConnections(System::Collections::Generic::LinkedList_1<System::ValueTuple_3<System::Net::System__Net__ServicePointScheduler__ConnectionGroup,System::Net::WebConnection,System::Threading::Tasks::Task>> value) ;

constexpr System::Collections::Generic::LinkedList_1<System::ValueTuple_3<System::Net::System__Net__ServicePointScheduler__ConnectionGroup,System::Net::WebConnection,System::Threading::Tasks::Task>> __get_idleConnections() const;

 int32_t __declspec(property(get=__get_currentConnections, put=__set_currentConnections))  currentConnections;

constexpr void __set_currentConnections(int32_t value) ;

constexpr int32_t __get_currentConnections() const;

 int32_t __declspec(property(get=__get_connectionLimit, put=__set_connectionLimit))  connectionLimit;

constexpr void __set_connectionLimit(int32_t value) ;

constexpr int32_t __get_connectionLimit() const;

 System::DateTime __declspec(property(get=__get_idleSince, put=__set_idleSince))  idleSince;

constexpr void __set_idleSince(System::DateTime value) ;

constexpr System::DateTime __get_idleSince() const;

static int32_t __declspec(property(get=__get_nextId, put=__set_nextId))  nextId;

static void __set_nextId(int32_t value) ;

static int32_t __get_nextId() ;

 int32_t __declspec(property(get=__get_ID, put=__set_ID))  ID;

constexpr void __set_ID(int32_t value) ;

constexpr int32_t __get_ID() const;


// Properties

 System::Net::ServicePoint __declspec(property(get=get_ServicePoint, put=set_ServicePoint))  ServicePoint;

 int32_t __declspec(property(get=get_MaxIdleTime))  MaxIdleTime;


// Methods

/// @brief Method get_ServicePoint addr 0x2846d94 size 0x8 virtual false final false
 System::Net::ServicePoint get_ServicePoint() ;

/// @brief Method set_ServicePoint addr 0x2846d9c size 0x8 virtual false final false
 void set_ServicePoint(System::Net::ServicePoint value) ;

/// @brief Method get_MaxIdleTime addr 0x2846da4 size 0x8 virtual false final false
 int32_t get_MaxIdleTime() ;

// Ctor Parameters [CppParam { name: "servicePoint", ty: "System::Net::ServicePoint", modifiers: "", def_value: None }, CppParam { name: "connectionLimit", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxIdleTime", ty: "int32_t", modifiers: "", def_value: None }]
explicit ServicePointScheduler(System::Net::ServicePoint servicePoint, int32_t connectionLimit, int32_t maxIdleTime) ;

/// @brief Method .ctor addr 0x2844c5c size 0x1d8 virtual false final false
 void _ctor(System::Net::ServicePoint servicePoint, int32_t connectionLimit, int32_t maxIdleTime) ;

/// @brief Method Run addr 0x2846f60 size 0xc8 virtual false final false
 void Run() ;

/// @brief Method RunScheduler addr 0x2847258 size 0xd0 virtual false final false
 System::Threading::Tasks::Task RunScheduler() ;

/// @brief Method Cleanup addr 0x2847328 size 0x1c0 virtual false final false
 void Cleanup() ;

/// @brief Method RunSchedulerIteration addr 0x284755c size 0x18c virtual false final false
 void RunSchedulerIteration() ;

/// @brief Method OperationCompleted addr 0x284788c size 0x220 virtual false final false
 bool OperationCompleted(System::Net::System__Net__ServicePointScheduler__ConnectionGroup group, System::Net::WebOperation operation) ;

/// @brief Method CloseIdleConnection addr 0x2847ff0 size 0x38 virtual false final false
 void CloseIdleConnection(System::Net::System__Net__ServicePointScheduler__ConnectionGroup group, System::Net::WebConnection connection) ;

/// @brief Method SchedulerIteration addr 0x28477ac size 0xe0 virtual false final false
 bool SchedulerIteration(System::Net::System__Net__ServicePointScheduler__ConnectionGroup group) ;

/// @brief Method RemoveOperation addr 0x2848114 size 0xcc virtual false final false
 void RemoveOperation(System::Net::WebOperation operation) ;

/// @brief Method RemoveIdleConnection addr 0x2847c94 size 0xcc virtual false final false
 void RemoveIdleConnection(System::Net::WebConnection connection) ;

/// @brief Method FinalCleanup addr 0x28481e0 size 0x80 virtual false final false
 void FinalCleanup() ;

/// @brief Method SendRequest addr 0x284583c size 0xe8 virtual false final false
 void SendRequest(System::Net::WebOperation operation, ::StringW groupName) ;

/// @brief Method CloseConnectionGroup addr 0x2845a10 size 0x110 virtual false final false
 bool CloseConnectionGroup(::StringW groupName) ;

/// @brief Method GetConnectionGroup addr 0x2848260 size 0x1fc virtual false final false
 System::Net::System__Net__ServicePointScheduler__ConnectionGroup GetConnectionGroup(::StringW name) ;

/// @brief Method OnConnectionCreated addr 0x28487cc size 0xc virtual false final false
 void OnConnectionCreated(System::Net::WebConnection connection) ;

/// @brief Method OnConnectionClosed addr 0x28487d8 size 0x1c virtual false final false
 void OnConnectionClosed(System::Net::WebConnection connection) ;

/// @brief Method WaitAsync addr 0x28487f4 size 0x108 virtual false final false
static System::Threading::Tasks::Task_1<bool> WaitAsync(System::Threading::Tasks::Task workerTask, int32_t millisecondTimeout) ;

/// @brief Method <Run>b__31_0 addr 0x28488fc size 0x4 virtual false final false
 System::Threading::Tasks::Task _Run_b__31_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(GlobalNamespace::System__Net__ServicePointScheduler__AsyncManualResetEvent____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::System__Net__ServicePointScheduler__AsyncManualResetEvent____c, "System.Net", "ServicePointScheduler/AsyncManualResetEvent/<>c");
NEED_NO_BOX(System::Net::ServicePointScheduler);
DEFINE_IL2CPP_ARG_TYPE(System::Net::ServicePointScheduler, "System.Net", "ServicePointScheduler");
NEED_NO_BOX(System::Net::System__Net__ServicePointScheduler__AsyncManualResetEvent);
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__ServicePointScheduler__AsyncManualResetEvent, "System.Net", "ServicePointScheduler/AsyncManualResetEvent");
NEED_NO_BOX(System::Net::System__Net__ServicePointScheduler__ConnectionGroup);
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__ServicePointScheduler__ConnectionGroup, "System.Net", "ServicePointScheduler/ConnectionGroup");
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__ServicePointScheduler___RunScheduler_d__32, "System.Net", "ServicePointScheduler/<RunScheduler>d__32");
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__ServicePointScheduler___WaitAsync_d__46, "System.Net", "ServicePointScheduler/<WaitAsync>d__46");
