#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Threading {
struct ThreadState;
}
// Forward declare root types
namespace System::Threading {
class InternalThread;
}
// Type: System.Threading::InternalThread
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3347))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2746))
// CS Name: System.Threading.InternalThread
class CORDL_TYPE InternalThread : public System::Runtime::ConstrainedExecution::CriticalFinalizerObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x128};

virtual ~InternalThread() = default;

// Ctor Parameters [CppParam { name: "", ty: "InternalThread", modifiers: " const&", def_value: None }]
constexpr InternalThread(InternalThread const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InternalThread", modifiers: "&&", def_value: None }]
constexpr InternalThread(InternalThread&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InternalThread(void* ptr) noexcept : System::Runtime::ConstrainedExecution::CriticalFinalizerObject(ptr) {
}


  constexpr InternalThread& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InternalThread& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InternalThread& operator=(InternalThread&& o) noexcept = default;
  constexpr InternalThread& operator=(InternalThread const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_lock_thread_id, put=__set_lock_thread_id))  lock_thread_id;

constexpr void __set_lock_thread_id(int32_t value) ;

constexpr int32_t __get_lock_thread_id() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_handle, put=__set_handle))  handle;

constexpr void __set_handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_handle() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_native_handle, put=__set_native_handle))  native_handle;

constexpr void __set_native_handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_native_handle() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_name_chars, put=__set_name_chars))  name_chars;

constexpr void __set_name_chars(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_name_chars() const;

 int32_t __declspec(property(get=__get_name_free, put=__set_name_free))  name_free;

constexpr void __set_name_free(int32_t value) ;

constexpr int32_t __get_name_free() const;

 int32_t __declspec(property(get=__get_name_length, put=__set_name_length))  name_length;

constexpr void __set_name_length(int32_t value) ;

constexpr int32_t __get_name_length() const;

 System::Threading::ThreadState __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(System::Threading::ThreadState value) ;

constexpr System::Threading::ThreadState __get_state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_abort_exc, put=__set_abort_exc))  abort_exc;

constexpr void __set_abort_exc(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_abort_exc() const;

 int32_t __declspec(property(get=__get_abort_state_handle, put=__set_abort_state_handle))  abort_state_handle;

constexpr void __set_abort_state_handle(int32_t value) ;

constexpr int32_t __get_abort_state_handle() const;

 int64_t __declspec(property(get=__get_thread_id, put=__set_thread_id))  thread_id;

constexpr void __set_thread_id(int64_t value) ;

constexpr int64_t __get_thread_id() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_debugger_thread, put=__set_debugger_thread))  debugger_thread;

constexpr void __set_debugger_thread(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_debugger_thread() const;

 ::cordl_internals::uintptr_t __declspec(property(get=__get_static_data, put=__set_static_data))  static_data;

constexpr void __set_static_data(::cordl_internals::uintptr_t value) ;

constexpr ::cordl_internals::uintptr_t __get_static_data() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_runtime_thread_info, put=__set_runtime_thread_info))  runtime_thread_info;

constexpr void __set_runtime_thread_info(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_runtime_thread_info() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_current_appcontext, put=__set_current_appcontext))  current_appcontext;

constexpr void __set_current_appcontext(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_current_appcontext() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_root_domain_thread, put=__set_root_domain_thread))  root_domain_thread;

constexpr void __set_root_domain_thread(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_root_domain_thread() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__serialized_principal, put=__set__serialized_principal))  _serialized_principal;

constexpr void __set__serialized_principal(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__serialized_principal() const;

 int32_t __declspec(property(get=__get__serialized_principal_version, put=__set__serialized_principal_version))  _serialized_principal_version;

constexpr void __set__serialized_principal_version(int32_t value) ;

constexpr int32_t __get__serialized_principal_version() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_appdomain_refs, put=__set_appdomain_refs))  appdomain_refs;

constexpr void __set_appdomain_refs(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_appdomain_refs() const;

 int32_t __declspec(property(get=__get_interruption_requested, put=__set_interruption_requested))  interruption_requested;

constexpr void __set_interruption_requested(int32_t value) ;

constexpr int32_t __get_interruption_requested() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_longlived, put=__set_longlived))  longlived;

constexpr void __set_longlived(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_longlived() const;

 bool __declspec(property(get=__get_threadpool_thread, put=__set_threadpool_thread))  threadpool_thread;

constexpr void __set_threadpool_thread(bool value) ;

constexpr bool __get_threadpool_thread() const;

 bool __declspec(property(get=__get_thread_interrupt_requested, put=__set_thread_interrupt_requested))  thread_interrupt_requested;

constexpr void __set_thread_interrupt_requested(bool value) ;

constexpr bool __get_thread_interrupt_requested() const;

 int32_t __declspec(property(get=__get_stack_size, put=__set_stack_size))  stack_size;

constexpr void __set_stack_size(int32_t value) ;

constexpr int32_t __get_stack_size() const;

 uint8_t __declspec(property(get=__get_apartment_state, put=__set_apartment_state))  apartment_state;

constexpr void __set_apartment_state(uint8_t value) ;

constexpr uint8_t __get_apartment_state() const;

 int32_t __declspec(property(get=__get_critical_region_level, put=__set_critical_region_level))  critical_region_level;

constexpr void __set_critical_region_level(int32_t value) ;

constexpr int32_t __get_critical_region_level() const;

 int32_t __declspec(property(get=__get_managed_id, put=__set_managed_id))  managed_id;

constexpr void __set_managed_id(int32_t value) ;

constexpr int32_t __get_managed_id() const;

 int32_t __declspec(property(get=__get_small_id, put=__set_small_id))  small_id;

constexpr void __set_small_id(int32_t value) ;

constexpr int32_t __get_small_id() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_manage_callback, put=__set_manage_callback))  manage_callback;

constexpr void __set_manage_callback(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_manage_callback() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_flags, put=__set_flags))  flags;

constexpr void __set_flags(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_flags() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_thread_pinning_ref, put=__set_thread_pinning_ref))  thread_pinning_ref;

constexpr void __set_thread_pinning_ref(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_thread_pinning_ref() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_abort_protected_block_count, put=__set_abort_protected_block_count))  abort_protected_block_count;

constexpr void __set_abort_protected_block_count(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_abort_protected_block_count() const;

 int32_t __declspec(property(get=__get_priority, put=__set_priority))  priority;

constexpr void __set_priority(int32_t value) ;

constexpr int32_t __get_priority() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_owned_mutex, put=__set_owned_mutex))  owned_mutex;

constexpr void __set_owned_mutex(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_owned_mutex() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_suspended_event, put=__set_suspended_event))  suspended_event;

constexpr void __set_suspended_event(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_suspended_event() const;

 int32_t __declspec(property(get=__get_self_suspended, put=__set_self_suspended))  self_suspended;

constexpr void __set_self_suspended(int32_t value) ;

constexpr int32_t __get_self_suspended() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_thread_state, put=__set_thread_state))  thread_state;

constexpr void __set_thread_state(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_thread_state() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_netcore0, put=__set_netcore0))  netcore0;

constexpr void __set_netcore0(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_netcore0() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_netcore1, put=__set_netcore1))  netcore1;

constexpr void __set_netcore1(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_netcore1() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_netcore2, put=__set_netcore2))  netcore2;

constexpr void __set_netcore2(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_netcore2() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_last, put=__set_last))  last;

constexpr void __set_last(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_last() const;


// Methods

/// @brief Method Thread_free_internal addr 0x24b2310 size 0x4 virtual false final false
 void Thread_free_internal() ;

/// @brief Method Finalize addr 0x24b2314 size 0x94 virtual true final false
 void Finalize() ;

// Ctor Parameters []
explicit InternalThread() ;

/// @brief Method .ctor addr 0x24b23a8 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::InternalThread);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::InternalThread, "System.Threading", "InternalThread");
