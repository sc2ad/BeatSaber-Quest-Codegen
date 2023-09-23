#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace System {
template<typename T>
class Action_1;
}
namespace System::Threading {
class WaitCallback;
}
namespace System::Threading {
class RegisteredWaitHandle;
}
namespace System::Threading {
class IThreadPoolWorkItem;
}
namespace System::Threading {
class WaitOrTimerCallback;
}
namespace System {
struct TimeSpan;
}
namespace System::Threading {
struct StackCrawlMark;
}
namespace System::Threading {
class WaitHandle;
}
// Forward declare root types
namespace System::Threading {
template<typename TState>
class System__Threading__ThreadPool____c__DisplayClass17_0_1;
}
namespace System::Threading {
template<::cordl_internals::il2cpp_reference_type TState>
class System__Threading__ThreadPool____c__DisplayClass17_0_1<TState>;
}
namespace System::Threading {
class ThreadPool;
}
// Type: ::<>c__DisplayClass17_0`1
// Type: System.Threading::ThreadPool
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2738))
// CS Name: System.Threading.ThreadPool
class CORDL_TYPE ThreadPool : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename TState>
using __c__DisplayClass17_0_1 = System::Threading::System__Threading__ThreadPool____c__DisplayClass17_0_1<TState>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ThreadPool() = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadPool", modifiers: " const&", def_value: None }]
constexpr ThreadPool(ThreadPool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadPool", modifiers: "&&", def_value: None }]
constexpr ThreadPool(ThreadPool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ThreadPool(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ThreadPool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ThreadPool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ThreadPool& operator=(ThreadPool&& o) noexcept = default;
  constexpr ThreadPool& operator=(ThreadPool const& o) noexcept = default;
                


// Properties

static bool __declspec(property(get=get_IsThreadPoolThread))  IsThreadPoolThread;


// Methods

/// @brief Method RegisterWaitForSingleObject addr 0x24af0a0 size 0x1d8 virtual false final false
static System::Threading::RegisteredWaitHandle RegisterWaitForSingleObject(System::Threading::WaitHandle waitObject, System::Threading::WaitOrTimerCallback callBack, ::bs_hook::Il2CppWrapperType state, uint32_t millisecondsTimeOutInterval, bool executeOnlyOnce, ByRef<System::Threading::StackCrawlMark> stackMark, bool compressStack) ;

/// @brief Method RegisterWaitForSingleObject addr 0x24af37c size 0x84 virtual false final false
static System::Threading::RegisteredWaitHandle RegisterWaitForSingleObject(System::Threading::WaitHandle waitObject, System::Threading::WaitOrTimerCallback callBack, ::bs_hook::Il2CppWrapperType state, int32_t millisecondsTimeOutInterval, bool executeOnlyOnce) ;

/// @brief Method RegisterWaitForSingleObject addr 0x24af400 size 0xf4 virtual false final false
static System::Threading::RegisteredWaitHandle RegisterWaitForSingleObject(System::Threading::WaitHandle waitObject, System::Threading::WaitOrTimerCallback callBack, ::bs_hook::Il2CppWrapperType state, System::TimeSpan timeout, bool executeOnlyOnce) ;

/// @brief Method QueueUserWorkItem addr 0x24af32c size 0x28 virtual false final false
static bool QueueUserWorkItem(System::Threading::WaitCallback callBack, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method QueueUserWorkItem addr 0x24af618 size 0x2c virtual false final false
static bool QueueUserWorkItem(System::Threading::WaitCallback callBack) ;

/// @brief Method UnsafeQueueUserWorkItem addr 0x24af354 size 0x28 virtual false final false
static bool UnsafeQueueUserWorkItem(System::Threading::WaitCallback callBack, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method QueueUserWorkItem addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TState>
static bool QueueUserWorkItem(System::Action_1<TState> callBack, TState state, bool preferLocal) ;

/// @brief Method QueueUserWorkItemHelper addr 0x24af4f4 size 0x124 virtual false final false
static bool QueueUserWorkItemHelper(System::Threading::WaitCallback callBack, ::bs_hook::Il2CppWrapperType state, ByRef<System::Threading::StackCrawlMark> stackMark, bool compressStack, bool forceGlobal) ;

/// @brief Method UnsafeQueueCustomWorkItem addr 0x24af6d8 size 0x80 virtual false final false
static void UnsafeQueueCustomWorkItem(System::Threading::IThreadPoolWorkItem workItem, bool forceGlobal) ;

/// @brief Method TryPopCustomWorkItem addr 0x24af758 size 0xa0 virtual false final false
static bool TryPopCustomWorkItem(System::Threading::IThreadPoolWorkItem workItem) ;

/// @brief Method RequestWorkerThread addr 0x24af7f8 size 0x4 virtual false final false
static bool RequestWorkerThread() ;

/// @brief Method EnsureVMInitialized addr 0x24af644 size 0x94 virtual false final false
static void EnsureVMInitialized() ;

/// @brief Method NotifyWorkItemComplete addr 0x24af800 size 0x4 virtual false final false
static bool NotifyWorkItemComplete() ;

/// @brief Method ReportThreadStatus addr 0x24af804 size 0x8 virtual false final false
static void ReportThreadStatus(bool isWorking) ;

/// @brief Method NotifyWorkItemProgress addr 0x24af80c size 0x10 virtual false final false
static void NotifyWorkItemProgress() ;

/// @brief Method NotifyWorkItemProgressNative addr 0x24af81c size 0x4 virtual false final false
static void NotifyWorkItemProgressNative() ;

/// @brief Method NotifyWorkItemQueued addr 0x24af820 size 0x4 virtual false final false
static void NotifyWorkItemQueued() ;

/// @brief Method InitializeVMTp addr 0x24af7fc size 0x4 virtual false final false
static void InitializeVMTp(ByRef<bool> enableWorkerTracking) ;

/// @brief Method get_IsThreadPoolThread addr 0x24af824 size 0x20 virtual false final false
static bool get_IsThreadPoolThread() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: ::<>c__DisplayClass17_0`1
namespace System::Threading {
// cpp template
template<::cordl_internals::il2cpp_reference_type TState>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2737))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2737), inst: 2 })
// CS Name: System.Threading.ThreadPool::<>c__DisplayClass17_0`1
class CORDL_TYPE System__Threading__ThreadPool____c__DisplayClass17_0_1<TState> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Threading__ThreadPool____c__DisplayClass17_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__ThreadPool____c__DisplayClass17_0_1", modifiers: " const&", def_value: None }]
constexpr System__Threading__ThreadPool____c__DisplayClass17_0_1(System__Threading__ThreadPool____c__DisplayClass17_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__ThreadPool____c__DisplayClass17_0_1", modifiers: "&&", def_value: None }]
constexpr System__Threading__ThreadPool____c__DisplayClass17_0_1(System__Threading__ThreadPool____c__DisplayClass17_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Threading__ThreadPool____c__DisplayClass17_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Threading__ThreadPool____c__DisplayClass17_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Threading__ThreadPool____c__DisplayClass17_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Threading__ThreadPool____c__DisplayClass17_0_1& operator=(System__Threading__ThreadPool____c__DisplayClass17_0_1&& o) noexcept = default;
  constexpr System__Threading__ThreadPool____c__DisplayClass17_0_1& operator=(System__Threading__ThreadPool____c__DisplayClass17_0_1 const& o) noexcept = default;
                


// Fields

 System::Action_1<TState> __declspec(property(get=__get_callBack, put=__set_callBack))  callBack;

constexpr void __set_callBack(System::Action_1<TState> value) ;

constexpr System::Action_1<TState> __get_callBack() const;


// Methods

// Ctor Parameters []
explicit System__Threading__ThreadPool____c__DisplayClass17_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <QueueUserWorkItem>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _QueueUserWorkItem_b__0(::bs_hook::Il2CppWrapperType x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::System__Threading__ThreadPool____c__DisplayClass17_0_1, "System.Threading", "ThreadPool/<>c__DisplayClass17_0`1");
NEED_NO_BOX(System::Threading::ThreadPool);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ThreadPool, "System.Threading", "ThreadPool");
