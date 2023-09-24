#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Threading {
template<typename T>
struct AsyncLocalValueChangedArgs_1;
}
namespace System {
class MulticastDelegate;
}
namespace System::Threading {
template<typename T>
class AsyncLocal_1;
}
namespace System::Security::Principal {
class IPrincipal;
}
namespace System {
class LocalDataStoreMgr;
}
namespace System::Runtime::Remoting::Contexts {
class Context;
}
namespace System::Threading {
class InternalThread;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Threading {
class ParameterizedThreadStart;
}
namespace System::Threading {
struct ThreadState;
}
namespace System {
class LocalDataStoreHolder;
}
namespace System {
class Delegate;
}
namespace System::Threading {
struct StackCrawlMark;
}
namespace System::Threading {
struct System__Threading__ExecutionContext__Reader;
}
namespace System::Threading {
class ThreadStart;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Threading {
struct ThreadPriority;
}
// Forward declare root types
namespace System::Threading {
class Thread;
}
// Type: System.Threading::Thread
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3347))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2722))
// CS Name: System.Threading.Thread
class CORDL_TYPE Thread : public System::Runtime::ConstrainedExecution::CriticalFinalizerObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~Thread() = default;

// Ctor Parameters [CppParam { name: "", ty: "Thread", modifiers: " const&", def_value: None }]
constexpr Thread(Thread const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Thread", modifiers: "&&", def_value: None }]
constexpr Thread(Thread&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Thread(void* ptr) noexcept : System::Runtime::ConstrainedExecution::CriticalFinalizerObject(ptr) {
}


  constexpr Thread& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Thread& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Thread& operator=(Thread&& o) noexcept = default;
  constexpr Thread& operator=(Thread const& o) noexcept = default;
                


// Fields

static System::LocalDataStoreMgr __declspec(property(get=__get_s_LocalDataStoreMgr, put=__set_s_LocalDataStoreMgr))  s_LocalDataStoreMgr;

static void __set_s_LocalDataStoreMgr(System::LocalDataStoreMgr value) ;

static System::LocalDataStoreMgr __get_s_LocalDataStoreMgr() ;

static System::LocalDataStoreHolder __declspec(property(get=__get_s_LocalDataStore, put=__set_s_LocalDataStore))  s_LocalDataStore;

static void __set_s_LocalDataStore(System::LocalDataStoreHolder value) ;

static System::LocalDataStoreHolder __get_s_LocalDataStore() ;

static System::Globalization::CultureInfo __declspec(property(get=__get_m_CurrentCulture, put=__set_m_CurrentCulture))  m_CurrentCulture;

static void __set_m_CurrentCulture(System::Globalization::CultureInfo value) ;

static System::Globalization::CultureInfo __get_m_CurrentCulture() ;

static System::Globalization::CultureInfo __declspec(property(get=__get_m_CurrentUICulture, put=__set_m_CurrentUICulture))  m_CurrentUICulture;

static void __set_m_CurrentUICulture(System::Globalization::CultureInfo value) ;

static System::Globalization::CultureInfo __get_m_CurrentUICulture() ;

static System::Threading::AsyncLocal_1<System::Globalization::CultureInfo> __declspec(property(get=__get_s_asyncLocalCurrentCulture, put=__set_s_asyncLocalCurrentCulture))  s_asyncLocalCurrentCulture;

static void __set_s_asyncLocalCurrentCulture(System::Threading::AsyncLocal_1<System::Globalization::CultureInfo> value) ;

static System::Threading::AsyncLocal_1<System::Globalization::CultureInfo> __get_s_asyncLocalCurrentCulture() ;

static System::Threading::AsyncLocal_1<System::Globalization::CultureInfo> __declspec(property(get=__get_s_asyncLocalCurrentUICulture, put=__set_s_asyncLocalCurrentUICulture))  s_asyncLocalCurrentUICulture;

static void __set_s_asyncLocalCurrentUICulture(System::Threading::AsyncLocal_1<System::Globalization::CultureInfo> value) ;

static System::Threading::AsyncLocal_1<System::Globalization::CultureInfo> __get_s_asyncLocalCurrentUICulture() ;

 System::Threading::InternalThread __declspec(property(get=__get_internal_thread, put=__set_internal_thread))  internal_thread;

constexpr void __set_internal_thread(System::Threading::InternalThread value) ;

constexpr System::Threading::InternalThread __get_internal_thread() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_ThreadStartArg, put=__set_m_ThreadStartArg))  m_ThreadStartArg;

constexpr void __set_m_ThreadStartArg(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_ThreadStartArg() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_pending_exception, put=__set_pending_exception))  pending_exception;

constexpr void __set_pending_exception(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_pending_exception() const;

static System::Threading::Thread __declspec(property(get=__get_current_thread, put=__set_current_thread))  current_thread;

static void __set_current_thread(System::Threading::Thread value) ;

static System::Threading::Thread __get_current_thread() ;

 System::MulticastDelegate __declspec(property(get=__get_m_Delegate, put=__set_m_Delegate))  m_Delegate;

constexpr void __set_m_Delegate(System::MulticastDelegate value) ;

constexpr System::MulticastDelegate __get_m_Delegate() const;

 System::Threading::ExecutionContext __declspec(property(get=__get_m_ExecutionContext, put=__set_m_ExecutionContext))  m_ExecutionContext;

constexpr void __set_m_ExecutionContext(System::Threading::ExecutionContext value) ;

constexpr System::Threading::ExecutionContext __get_m_ExecutionContext() const;

 bool __declspec(property(get=__get_m_ExecutionContextBelongsToOuterScope, put=__set_m_ExecutionContextBelongsToOuterScope))  m_ExecutionContextBelongsToOuterScope;

constexpr void __set_m_ExecutionContextBelongsToOuterScope(bool value) ;

constexpr bool __get_m_ExecutionContextBelongsToOuterScope() const;

 System::Security::Principal::IPrincipal __declspec(property(get=__get_principal, put=__set_principal))  principal;

constexpr void __set_principal(System::Security::Principal::IPrincipal value) ;

constexpr System::Security::Principal::IPrincipal __get_principal() const;

 int32_t __declspec(property(get=__get_principal_version, put=__set_principal_version))  principal_version;

constexpr void __set_principal_version(int32_t value) ;

constexpr int32_t __get_principal_version() const;


// Properties

 bool __declspec(property(get=get_ExecutionContextBelongsToCurrentScope, put=set_ExecutionContextBelongsToCurrentScope))  ExecutionContextBelongsToCurrentScope;

 System::Threading::ThreadPriority __declspec(property(get=get_Priority, put=set_Priority))  Priority;

 System::Globalization::CultureInfo __declspec(property(get=get_CurrentUICulture))  CurrentUICulture;

 System::Globalization::CultureInfo __declspec(property(get=get_CurrentCulture, put=set_CurrentCulture))  CurrentCulture;

 System::Threading::InternalThread __declspec(property(get=get_Internal))  Internal;

static System::Runtime::Remoting::Contexts::Context __declspec(property(get=get_CurrentContext))  CurrentContext;

static System::Threading::Thread __declspec(property(get=get_CurrentThread))  CurrentThread;

static int32_t __declspec(property(get=get_CurrentThreadId))  CurrentThreadId;

 bool __declspec(property(get=get_IsThreadPoolThread))  IsThreadPoolThread;

 bool __declspec(property(get=get_IsThreadPoolThreadInternal))  IsThreadPoolThreadInternal;

 bool __declspec(property(get=get_IsAlive))  IsAlive;

 bool __declspec(property(put=set_IsBackground))  IsBackground;

 ::StringW __declspec(property(put=set_Name))  Name;

 int32_t __declspec(property(get=get_ManagedThreadId))  ManagedThreadId;


// Methods

/// @brief Method AsyncLocalSetCurrentCulture addr 0x24ac16c size 0x60 virtual false final false
static void AsyncLocalSetCurrentCulture(System::Threading::AsyncLocalValueChangedArgs_1<System::Globalization::CultureInfo> args) ;

static System::Threading::Thread New_ctor(System::Threading::ThreadStart start) ;

/// @brief Method .ctor addr 0x24ac1cc size 0x80 virtual false final false
 void _ctor(System::Threading::ThreadStart start) ;

static System::Threading::Thread New_ctor(System::Threading::ParameterizedThreadStart start) ;

/// @brief Method .ctor addr 0x24ac374 size 0x80 virtual false final false
 void _ctor(System::Threading::ParameterizedThreadStart start) ;

static System::Threading::Thread New_ctor(System::Threading::ParameterizedThreadStart start, int32_t maxStackSize) ;

/// @brief Method .ctor addr 0x24ac3f4 size 0xf0 virtual false final false
 void _ctor(System::Threading::ParameterizedThreadStart start, int32_t maxStackSize) ;

/// @brief Method Start addr 0x24ac4e4 size 0x14 virtual false final false
 void Start() ;

/// @brief Method Start addr 0x24ac5b4 size 0xd0 virtual false final false
 void Start(::bs_hook::Il2CppWrapperType parameter) ;

/// @brief Method Start addr 0x24ac4f8 size 0xbc virtual false final false
 void Start(ByRef<System::Threading::StackCrawlMark> stackMark) ;

/// @brief Method GetExecutionContextReader addr 0x24a9864 size 0x8 virtual false final false
 System::Threading::System__Threading__ExecutionContext__Reader GetExecutionContextReader() ;

/// @brief Method get_ExecutionContextBelongsToCurrentScope addr 0x24aa7c4 size 0x10 virtual false final false
 bool get_ExecutionContextBelongsToCurrentScope() ;

/// @brief Method set_ExecutionContextBelongsToCurrentScope addr 0x24aa7d4 size 0x10 virtual false final false
 void set_ExecutionContextBelongsToCurrentScope(bool value) ;

/// @brief Method GetMutableExecutionContext addr 0x24aa06c size 0x8c virtual false final false
 System::Threading::ExecutionContext GetMutableExecutionContext() ;

/// @brief Method SetExecutionContext addr 0x24aa814 size 0x14 virtual false final false
 void SetExecutionContext(System::Threading::ExecutionContext value, bool belongsToCurrentScope) ;

/// @brief Method SetExecutionContext addr 0x24a986c size 0x14 virtual false final false
 void SetExecutionContext(System::Threading::System__Threading__ExecutionContext__Reader value, bool belongsToCurrentScope) ;

/// @brief Method get_Priority addr 0x24ac6f0 size 0x4 virtual false final false
 System::Threading::ThreadPriority get_Priority() ;

/// @brief Method set_Priority addr 0x24ac6f8 size 0x4 virtual false final false
 void set_Priority(System::Threading::ThreadPriority value) ;

/// @brief Method GetPriorityNative addr 0x24ac6f4 size 0x4 virtual false final false
 int32_t GetPriorityNative() ;

/// @brief Method SetPriorityNative addr 0x24ac6fc size 0x4 virtual false final false
 void SetPriorityNative(int32_t priority) ;

/// @brief Method JoinInternal addr 0x24ac700 size 0x4 virtual false final false
 bool JoinInternal(int32_t millisecondsTimeout) ;

/// @brief Method Join addr 0x24ac704 size 0x8 virtual false final false
 void Join() ;

/// @brief Method SleepInternal addr 0x24ac70c size 0x4 virtual false final false
static void SleepInternal(int32_t millisecondsTimeout) ;

/// @brief Method Sleep addr 0x24a915c size 0x7c virtual false final false
static void Sleep(int32_t millisecondsTimeout) ;

/// @brief Method YieldInternal addr 0x24ac710 size 0x4 virtual false final false
static bool YieldInternal() ;

/// @brief Method Yield addr 0x24a91d8 size 0x4 virtual false final false
static bool Yield() ;

/// @brief Method SetStartHelper addr 0x24ac24c size 0x128 virtual false final false
 void SetStartHelper(System::Delegate start, int32_t maxStackSize) ;

/// @brief Method get_CurrentUICulture addr 0x24ac7fc size 0x2c virtual false final false
 System::Globalization::CultureInfo get_CurrentUICulture() ;

/// @brief Method GetCurrentUICultureNoAppX addr 0x24ac828 size 0xac virtual false final false
 System::Globalization::CultureInfo GetCurrentUICultureNoAppX() ;

/// @brief Method get_CurrentCulture addr 0x24ac8d4 size 0x2c virtual false final false
 System::Globalization::CultureInfo get_CurrentCulture() ;

/// @brief Method set_CurrentCulture addr 0x24ac9ac size 0x1ec virtual false final false
 void set_CurrentCulture(System::Globalization::CultureInfo value) ;

/// @brief Method GetCurrentCultureNoAppX addr 0x24ac900 size 0xac virtual false final false
 System::Globalization::CultureInfo GetCurrentCultureNoAppX() ;

/// @brief Method nativeInitCultureAccessors addr 0x24acb98 size 0xa4 virtual false final false
static void nativeInitCultureAccessors() ;

/// @brief Method MemoryBarrier addr 0x24acc3c size 0x4 virtual false final false
static void MemoryBarrier() ;

/// @brief Method ConstructInternalThread addr 0x24acc40 size 0x4 virtual false final false
 void ConstructInternalThread() ;

/// @brief Method get_Internal addr 0x24acc44 size 0x24 virtual false final false
 System::Threading::InternalThread get_Internal() ;

/// @brief Method get_CurrentContext addr 0x24acc68 size 0x8 virtual false final false
static System::Runtime::Remoting::Contexts::Context get_CurrentContext() ;

/// @brief Method GetCurrentThread_icall addr 0x24acc70 size 0x4 virtual false final false
static void GetCurrentThread_icall(ByRef<System::Threading::Thread> thread) ;

/// @brief Method GetCurrentThread addr 0x24acc74 size 0x1c virtual false final false
static System::Threading::Thread GetCurrentThread() ;

/// @brief Method get_CurrentThread addr 0x24a91dc size 0x5c virtual false final false
static System::Threading::Thread get_CurrentThread() ;

/// @brief Method get_CurrentThreadId addr 0x24acc90 size 0x24 virtual false final false
static int32_t get_CurrentThreadId() ;

/// @brief Method GetDomainID addr 0x24accb4 size 0x4 virtual false final false
static int32_t GetDomainID() ;

/// @brief Method Thread_internal addr 0x24accb8 size 0x4 virtual false final false
 bool Thread_internal(System::MulticastDelegate start) ;

/// @brief Method Finalize addr 0x24accbc size 0x8 virtual true final false
 void Finalize() ;

/// @brief Method get_IsThreadPoolThread addr 0x24accc4 size 0x4 virtual false final false
 bool get_IsThreadPoolThread() ;

/// @brief Method get_IsThreadPoolThreadInternal addr 0x24accc8 size 0x2c virtual false final false
 bool get_IsThreadPoolThreadInternal() ;

/// @brief Method get_IsAlive addr 0x24accf4 size 0x44 virtual false final false
 bool get_IsAlive() ;

/// @brief Method set_IsBackground addr 0x24acd3c size 0x48 virtual false final false
 void set_IsBackground(bool value) ;

/// @brief Method SetName_icall addr 0x24ace00 size 0x4 virtual false final false
static void SetName_icall(System::Threading::InternalThread thread, void* name, int32_t nameLength) ;

/// @brief Method SetName_internal addr 0x24ace04 size 0x40 virtual false final false
static void SetName_internal(System::Threading::InternalThread thread, ::StringW name) ;

/// @brief Method set_Name addr 0x24ace44 size 0x34 virtual false final false
 void set_Name(::StringW value) ;

/// @brief Method Abort_internal addr 0x24ace78 size 0x4 virtual false final false
static void Abort_internal(System::Threading::InternalThread thread, ::bs_hook::Il2CppWrapperType stateInfo) ;

/// @brief Method Abort addr 0x24ace7c size 0x28 virtual false final false
 void Abort() ;

/// @brief Method SpinWait_nop addr 0x24acea4 size 0x4 virtual false final false
static void SpinWait_nop() ;

/// @brief Method SpinWait addr 0x24a9134 size 0x28 virtual false final false
static void SpinWait(int32_t iterations) ;

/// @brief Method StartInternal addr 0x24ac684 size 0x6c virtual false final false
 void StartInternal(::bs_hook::Il2CppWrapperType principal, ByRef<System::Threading::StackCrawlMark> stackMark) ;

/// @brief Method SetState addr 0x24acdf8 size 0x4 virtual false final false
static void SetState(System::Threading::InternalThread thread, System::Threading::ThreadState set) ;

/// @brief Method ClrState addr 0x24acdfc size 0x4 virtual false final false
static void ClrState(System::Threading::InternalThread thread, System::Threading::ThreadState clr) ;

/// @brief Method GetState addr 0x24acd38 size 0x4 virtual false final false
static System::Threading::ThreadState GetState(System::Threading::InternalThread thread) ;

/// @brief Method SystemMaxStackStize addr 0x24acea8 size 0x4 virtual false final false
static int32_t SystemMaxStackStize() ;

/// @brief Method GetProcessDefaultStackSize addr 0x24ac714 size 0xac virtual false final false
static int32_t GetProcessDefaultStackSize(int32_t maxStackSize) ;

/// @brief Method SetStart addr 0x24ac7c0 size 0x3c virtual false final false
 void SetStart(System::MulticastDelegate start, int32_t maxStackSize) ;

/// @brief Method get_ManagedThreadId addr 0x24a9238 size 0x2c virtual false final false
 int32_t get_ManagedThreadId() ;

/// @brief Method BeginCriticalRegion addr 0x24a89d0 size 0x50 virtual false final false
static void BeginCriticalRegion() ;

/// @brief Method EndCriticalRegion addr 0x24a8f40 size 0x50 virtual false final false
static void EndCriticalRegion() ;

/// @brief Method GetHashCode addr 0x24aceac size 0x4 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ValidateThreadState addr 0x24acd84 size 0x74 virtual false final false
 System::Threading::ThreadState ValidateThreadState() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::Thread);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Thread, "System.Threading", "Thread");
