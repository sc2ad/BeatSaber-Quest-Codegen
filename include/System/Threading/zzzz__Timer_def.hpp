#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Threading {
struct System__Threading__Timer__TimerComparer;
}
namespace System::Threading {
class System__Threading__Timer__Scheduler;
}
namespace System {
class IDisposable;
}
namespace System::Threading {
class TimerCallback;
}
namespace System {
struct TimeSpan;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
// Forward declare root types
namespace System::Threading {
class System__Threading__Timer__Scheduler;
}
namespace System::Threading {
class Timer;
}
namespace System::Threading {
struct System__Threading__Timer__TimerComparer;
}
// Type: ::TimerComparer
namespace System::Threading {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2747))
// CS Name: System.Threading.Timer::TimerComparer
struct CORDL_TYPE System__Threading__Timer__TimerComparer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::IComparer
constexpr operator  System::Collections::IComparer() const;

/// @brief Convert operator to System::Collections::Generic::IComparer_1<System::Threading::Timer>
constexpr operator  System::Collections::Generic::IComparer_1<System::Threading::Timer>() const;


                    constexpr System__Threading__Timer__TimerComparer(System__Threading__Timer__TimerComparer const&) = default;
                    constexpr System__Threading__Timer__TimerComparer(System__Threading__Timer__TimerComparer&&) = default;
                    constexpr System__Threading__Timer__TimerComparer& operator=(System__Threading__Timer__TimerComparer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Threading__Timer__TimerComparer& operator=(System__Threading__Timer__TimerComparer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Threading__Timer__TimerComparer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Methods

/// @brief Method System.Collections.IComparer.Compare addr 0x24b2aa4 size 0x98 virtual true final true
 int32_t System_Collections_IComparer_Compare(::bs_hook::Il2CppWrapperType x, ::bs_hook::Il2CppWrapperType y) ;

/// @brief Method Compare addr 0x24b2b3c size 0x70 virtual true final true
 int32_t Compare(System::Threading::Timer tx, System::Threading::Timer ty) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: ::Scheduler
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2748))
// CS Name: System.Threading.Timer::Scheduler
class CORDL_TYPE System__Threading__Timer__Scheduler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~System__Threading__Timer__Scheduler() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__Timer__Scheduler", modifiers: " const&", def_value: None }]
constexpr System__Threading__Timer__Scheduler(System__Threading__Timer__Scheduler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__Timer__Scheduler", modifiers: "&&", def_value: None }]
constexpr System__Threading__Timer__Scheduler(System__Threading__Timer__Scheduler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Threading__Timer__Scheduler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Threading__Timer__Scheduler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Threading__Timer__Scheduler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Threading__Timer__Scheduler& operator=(System__Threading__Timer__Scheduler&& o) noexcept = default;
  constexpr System__Threading__Timer__Scheduler& operator=(System__Threading__Timer__Scheduler const& o) noexcept = default;
                


// Fields

static System::Threading::System__Threading__Timer__Scheduler __declspec(property(get=__get_instance, put=__set_instance))  instance;

static void __set_instance(System::Threading::System__Threading__Timer__Scheduler value) ;

static System::Threading::System__Threading__Timer__Scheduler __get_instance() ;

 bool __declspec(property(get=__get_needReSort, put=__set_needReSort))  needReSort;

constexpr void __set_needReSort(bool value) ;

constexpr bool __get_needReSort() const;

 System::Collections::Generic::List_1<System::Threading::Timer> __declspec(property(get=__get_list, put=__set_list))  list;

constexpr void __set_list(System::Collections::Generic::List_1<System::Threading::Timer> value) ;

constexpr System::Collections::Generic::List_1<System::Threading::Timer> __get_list() const;

 int64_t __declspec(property(get=__get_current_next_run, put=__set_current_next_run))  current_next_run;

constexpr void __set_current_next_run(int64_t value) ;

constexpr int64_t __get_current_next_run() const;

 System::Threading::ManualResetEvent __declspec(property(get=__get_changed, put=__set_changed))  changed;

constexpr void __set_changed(System::Threading::ManualResetEvent value) ;

constexpr System::Threading::ManualResetEvent __get_changed() const;


// Properties

static System::Threading::System__Threading__Timer__Scheduler __declspec(property(get=get_Instance))  Instance;


// Methods

/// @brief Method InitScheduler addr 0x24b2bac size 0xf4 virtual false final false
 void InitScheduler() ;

/// @brief Method WakeupScheduler addr 0x24b2ca0 size 0x1c virtual false final false
 void WakeupScheduler() ;

/// @brief Method SchedulerThread addr 0x24b2cbc size 0x138 virtual false final false
 void SchedulerThread() ;

/// @brief Method get_Instance addr 0x24b3108 size 0x58 virtual false final false
static System::Threading::System__Threading__Timer__Scheduler get_Instance() ;

static System::Threading::System__Threading__Timer__Scheduler New_ctor() ;

/// @brief Method .ctor addr 0x24b3160 size 0x9c virtual false final false
 void _ctor() ;

/// @brief Method Remove addr 0x24b2840 size 0xcc virtual false final false
 void Remove(System::Threading::Timer timer) ;

/// @brief Method Change addr 0x24b2910 size 0x190 virtual false final false
 void Change(System::Threading::Timer timer, int64_t new_next_run) ;

/// @brief Method Add addr 0x24b322c size 0xf0 virtual false final false
 void Add(System::Threading::Timer timer) ;

/// @brief Method InternalRemove addr 0x24b31fc size 0x30 virtual false final false
 void InternalRemove(System::Threading::Timer timer) ;

/// @brief Method TimerCB addr 0x24b331c size 0x78 virtual false final false
static void TimerCB(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method FireTimer addr 0x24b3394 size 0xc8 virtual false final false
 void FireTimer(System::Threading::Timer timer) ;

/// @brief Method RunSchedulerLoop addr 0x24b2df4 size 0x314 virtual false final false
 int32_t RunSchedulerLoop() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: System.Threading::Timer
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2749))
// CS Name: System.Threading.Timer
class CORDL_TYPE Timer : public System::MarshalByRefObject {
public:
// Declarations
using Scheduler = System::Threading::System__Threading__Timer__Scheduler;

using TimerComparer = System::Threading::System__Threading__Timer__TimerComparer;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~Timer() = default;

// Ctor Parameters [CppParam { name: "", ty: "Timer", modifiers: " const&", def_value: None }]
constexpr Timer(Timer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Timer", modifiers: "&&", def_value: None }]
constexpr Timer(Timer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Timer(void* ptr) noexcept : System::MarshalByRefObject(ptr) {
}


  constexpr Timer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Timer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Timer& operator=(Timer&& o) noexcept = default;
  constexpr Timer& operator=(Timer const& o) noexcept = default;
                


// Fields

 System::Threading::TimerCallback __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Threading::TimerCallback value) ;

constexpr System::Threading::TimerCallback __get_callback() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_state() const;

 int64_t __declspec(property(get=__get_due_time_ms, put=__set_due_time_ms))  due_time_ms;

constexpr void __set_due_time_ms(int64_t value) ;

constexpr int64_t __get_due_time_ms() const;

 int64_t __declspec(property(get=__get_period_ms, put=__set_period_ms))  period_ms;

constexpr void __set_period_ms(int64_t value) ;

constexpr int64_t __get_period_ms() const;

 int64_t __declspec(property(get=__get_next_run, put=__set_next_run))  next_run;

constexpr void __set_next_run(int64_t value) ;

constexpr int64_t __get_next_run() const;

 bool __declspec(property(get=__get_disposed, put=__set_disposed))  disposed;

constexpr void __set_disposed(bool value) ;

constexpr bool __get_disposed() const;

 bool __declspec(property(get=__get_is_dead, put=__set_is_dead))  is_dead;

constexpr void __set_is_dead(bool value) ;

constexpr bool __get_is_dead() const;

 bool __declspec(property(get=__get_is_added, put=__set_is_added))  is_added;

constexpr void __set_is_added(bool value) ;

constexpr bool __get_is_added() const;

/// @brief Field MaxValue offset 0
static constexpr int64_t  MaxValue{4294967294};


// Properties

static System::Threading::System__Threading__Timer__Scheduler __declspec(property(get=get_scheduler))  scheduler;


// Methods

/// @brief Method get_scheduler addr 0x24b23b8 size 0x88 virtual false final false
static System::Threading::System__Threading__Timer__Scheduler get_scheduler() ;

static System::Threading::Timer New_ctor(System::Threading::TimerCallback callback, ::bs_hook::Il2CppWrapperType state, int32_t dueTime, int32_t period) ;

/// @brief Method .ctor addr 0x24b2440 size 0x4c virtual false final false
 void _ctor(System::Threading::TimerCallback callback, ::bs_hook::Il2CppWrapperType state, int32_t dueTime, int32_t period) ;

static System::Threading::Timer New_ctor(System::Threading::TimerCallback callback, ::bs_hook::Il2CppWrapperType state, System::TimeSpan dueTime, System::TimeSpan period) ;

/// @brief Method .ctor addr 0x24b2500 size 0x90 virtual false final false
 void _ctor(System::Threading::TimerCallback callback, ::bs_hook::Il2CppWrapperType state, System::TimeSpan dueTime, System::TimeSpan period) ;

/// @brief Method Init addr 0x24b248c size 0x74 virtual false final false
 void Init(System::Threading::TimerCallback callback, ::bs_hook::Il2CppWrapperType state, int64_t dueTime, int64_t period) ;

/// @brief Method Change addr 0x24b2770 size 0x20 virtual false final false
 bool Change(int32_t dueTime, int32_t period) ;

/// @brief Method Change addr 0x24b2790 size 0x78 virtual false final false
 bool Change(System::TimeSpan dueTime, System::TimeSpan period) ;

/// @brief Method Dispose addr 0x24b2808 size 0x38 virtual true final true
 void Dispose() ;

/// @brief Method Change addr 0x24b2590 size 0x1e0 virtual false final false
 bool Change(int64_t dueTime, int64_t period, bool first) ;

/// @brief Method KeepRootedWhileScheduled addr 0x24b2aa0 size 0x4 virtual false final false
 void KeepRootedWhileScheduled() ;

/// @brief Method GetTimeMonotonic addr 0x24b290c size 0x4 virtual false final false
static int64_t GetTimeMonotonic() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::System__Threading__Timer__Scheduler);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::System__Threading__Timer__Scheduler, "System.Threading", "Timer/Scheduler");
NEED_NO_BOX(System::Threading::Timer);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Timer, "System.Threading", "Timer");
DEFINE_IL2CPP_ARG_TYPE(System::Threading::System__Threading__Timer__TimerComparer, "System.Threading", "Timer/TimerComparer");
