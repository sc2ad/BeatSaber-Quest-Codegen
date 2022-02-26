// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "System/Runtime/ConstrainedExecution/CriticalFinalizerObject.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Threading.ThreadState
#include "System/Threading/ThreadState.hpp"
// Including type: System.UIntPtr
#include "System/UIntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: InternalThread
  class InternalThread;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::InternalThread);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::InternalThread*, "System.Threading", "InternalThread");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x120
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Threading.InternalThread
  // [TokenAttribute] Offset: FFFFFFFF
  class InternalThread : public ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Int32 lock_thread_id
    // Size: 0x4
    // Offset: 0x10
    int lock_thread_id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: lock_thread_id and: handle
    char __padding0[0x4] = {};
    // private System.IntPtr handle
    // Size: 0x8
    // Offset: 0x18
    ::System::IntPtr handle;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.IntPtr native_handle
    // Size: 0x8
    // Offset: 0x20
    ::System::IntPtr native_handle;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.IntPtr unused3
    // Size: 0x8
    // Offset: 0x28
    ::System::IntPtr unused3;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.IntPtr name
    // Size: 0x8
    // Offset: 0x30
    ::System::IntPtr name;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.Int32 name_len
    // Size: 0x4
    // Offset: 0x38
    int name_len;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Threading.ThreadState state
    // Size: 0x4
    // Offset: 0x3C
    ::System::Threading::ThreadState state;
    // Field size check
    static_assert(sizeof(::System::Threading::ThreadState) == 0x4);
    // private System.Object abort_exc
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppObject* abort_exc;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Int32 abort_state_handle
    // Size: 0x4
    // Offset: 0x48
    int abort_state_handle;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: abort_state_handle and: thread_id
    char __padding8[0x4] = {};
    // System.Int64 thread_id
    // Size: 0x8
    // Offset: 0x50
    int64_t thread_id;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.IntPtr debugger_thread
    // Size: 0x8
    // Offset: 0x58
    ::System::IntPtr debugger_thread;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.UIntPtr static_data
    // Size: 0x8
    // Offset: 0x60
    ::System::UIntPtr static_data;
    // Field size check
    static_assert(sizeof(::System::UIntPtr) == 0x8);
    // private System.IntPtr runtime_thread_info
    // Size: 0x8
    // Offset: 0x68
    ::System::IntPtr runtime_thread_info;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.Object current_appcontext
    // Size: 0x8
    // Offset: 0x70
    ::Il2CppObject* current_appcontext;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object root_domain_thread
    // Size: 0x8
    // Offset: 0x78
    ::Il2CppObject* root_domain_thread;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Byte[] _serialized_principal
    // Size: 0x8
    // Offset: 0x80
    ::ArrayW<uint8_t> serialized_principal;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // System.Int32 _serialized_principal_version
    // Size: 0x4
    // Offset: 0x88
    int serialized_principal_version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: serialized_principal_version and: appdomain_refs
    char __padding16[0x4] = {};
    // private System.IntPtr appdomain_refs
    // Size: 0x8
    // Offset: 0x90
    ::System::IntPtr appdomain_refs;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.Int32 interruption_requested
    // Size: 0x4
    // Offset: 0x98
    int interruption_requested;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: interruption_requested and: synch_cs
    char __padding18[0x4] = {};
    // private System.IntPtr synch_cs
    // Size: 0x8
    // Offset: 0xA0
    ::System::IntPtr synch_cs;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // System.Boolean threadpool_thread
    // Size: 0x1
    // Offset: 0xA8
    bool threadpool_thread;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean thread_interrupt_requested
    // Size: 0x1
    // Offset: 0xA9
    bool thread_interrupt_requested;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: thread_interrupt_requested and: stack_size
    char __padding21[0x2] = {};
    // System.Int32 stack_size
    // Size: 0x4
    // Offset: 0xAC
    int stack_size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Byte apartment_state
    // Size: 0x1
    // Offset: 0xB0
    uint8_t apartment_state;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: apartment_state and: critical_region_level
    char __padding23[0x3] = {};
    // System.Int32 critical_region_level
    // Size: 0x4
    // Offset: 0xB4
    int critical_region_level;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 managed_id
    // Size: 0x4
    // Offset: 0xB8
    int managed_id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 small_id
    // Size: 0x4
    // Offset: 0xBC
    int small_id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.IntPtr manage_callback
    // Size: 0x8
    // Offset: 0xC0
    ::System::IntPtr manage_callback;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.IntPtr unused4
    // Size: 0x8
    // Offset: 0xC8
    ::System::IntPtr unused4;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.IntPtr flags
    // Size: 0x8
    // Offset: 0xD0
    ::System::IntPtr flags;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.IntPtr thread_pinning_ref
    // Size: 0x8
    // Offset: 0xD8
    ::System::IntPtr thread_pinning_ref;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.IntPtr abort_protected_block_count
    // Size: 0x8
    // Offset: 0xE0
    ::System::IntPtr abort_protected_block_count;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.Int32 priority
    // Size: 0x4
    // Offset: 0xE8
    int priority;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: priority and: owned_mutex
    char __padding32[0x4] = {};
    // private System.IntPtr owned_mutex
    // Size: 0x8
    // Offset: 0xF0
    ::System::IntPtr owned_mutex;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.IntPtr suspended_event
    // Size: 0x8
    // Offset: 0xF8
    ::System::IntPtr suspended_event;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.Int32 self_suspended
    // Size: 0x4
    // Offset: 0x100
    int self_suspended;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: self_suspended and: unused1
    char __padding35[0x4] = {};
    // private System.IntPtr unused1
    // Size: 0x8
    // Offset: 0x108
    ::System::IntPtr unused1;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.IntPtr unused2
    // Size: 0x8
    // Offset: 0x110
    ::System::IntPtr unused2;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.IntPtr last
    // Size: 0x8
    // Offset: 0x118
    ::System::IntPtr last;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Get instance field reference: private System.Int32 lock_thread_id
    int& dyn_lock_thread_id();
    // Get instance field reference: private System.IntPtr handle
    ::System::IntPtr& dyn_handle();
    // Get instance field reference: private System.IntPtr native_handle
    ::System::IntPtr& dyn_native_handle();
    // Get instance field reference: private System.IntPtr unused3
    ::System::IntPtr& dyn_unused3();
    // Get instance field reference: private System.IntPtr name
    ::System::IntPtr& dyn_name();
    // Get instance field reference: private System.Int32 name_len
    int& dyn_name_len();
    // Get instance field reference: private System.Threading.ThreadState state
    ::System::Threading::ThreadState& dyn_state();
    // Get instance field reference: private System.Object abort_exc
    ::Il2CppObject*& dyn_abort_exc();
    // Get instance field reference: private System.Int32 abort_state_handle
    int& dyn_abort_state_handle();
    // Get instance field reference: System.Int64 thread_id
    int64_t& dyn_thread_id();
    // Get instance field reference: private System.IntPtr debugger_thread
    ::System::IntPtr& dyn_debugger_thread();
    // Get instance field reference: private System.UIntPtr static_data
    ::System::UIntPtr& dyn_static_data();
    // Get instance field reference: private System.IntPtr runtime_thread_info
    ::System::IntPtr& dyn_runtime_thread_info();
    // Get instance field reference: private System.Object current_appcontext
    ::Il2CppObject*& dyn_current_appcontext();
    // Get instance field reference: private System.Object root_domain_thread
    ::Il2CppObject*& dyn_root_domain_thread();
    // Get instance field reference: System.Byte[] _serialized_principal
    ::ArrayW<uint8_t>& dyn__serialized_principal();
    // Get instance field reference: System.Int32 _serialized_principal_version
    int& dyn__serialized_principal_version();
    // Get instance field reference: private System.IntPtr appdomain_refs
    ::System::IntPtr& dyn_appdomain_refs();
    // Get instance field reference: private System.Int32 interruption_requested
    int& dyn_interruption_requested();
    // Get instance field reference: private System.IntPtr synch_cs
    ::System::IntPtr& dyn_synch_cs();
    // Get instance field reference: System.Boolean threadpool_thread
    bool& dyn_threadpool_thread();
    // Get instance field reference: private System.Boolean thread_interrupt_requested
    bool& dyn_thread_interrupt_requested();
    // Get instance field reference: System.Int32 stack_size
    int& dyn_stack_size();
    // Get instance field reference: System.Byte apartment_state
    uint8_t& dyn_apartment_state();
    // Get instance field reference: System.Int32 critical_region_level
    int& dyn_critical_region_level();
    // Get instance field reference: System.Int32 managed_id
    int& dyn_managed_id();
    // Get instance field reference: private System.Int32 small_id
    int& dyn_small_id();
    // Get instance field reference: private System.IntPtr manage_callback
    ::System::IntPtr& dyn_manage_callback();
    // Get instance field reference: private System.IntPtr unused4
    ::System::IntPtr& dyn_unused4();
    // Get instance field reference: private System.IntPtr flags
    ::System::IntPtr& dyn_flags();
    // Get instance field reference: private System.IntPtr thread_pinning_ref
    ::System::IntPtr& dyn_thread_pinning_ref();
    // Get instance field reference: private System.IntPtr abort_protected_block_count
    ::System::IntPtr& dyn_abort_protected_block_count();
    // Get instance field reference: private System.Int32 priority
    int& dyn_priority();
    // Get instance field reference: private System.IntPtr owned_mutex
    ::System::IntPtr& dyn_owned_mutex();
    // Get instance field reference: private System.IntPtr suspended_event
    ::System::IntPtr& dyn_suspended_event();
    // Get instance field reference: private System.Int32 self_suspended
    int& dyn_self_suspended();
    // Get instance field reference: private System.IntPtr unused1
    ::System::IntPtr& dyn_unused1();
    // Get instance field reference: private System.IntPtr unused2
    ::System::IntPtr& dyn_unused2();
    // Get instance field reference: private System.IntPtr last
    ::System::IntPtr& dyn_last();
    // private System.Void Thread_free_internal()
    // Offset: 0x1C2DD30
    void Thread_free_internal();
    // public System.Void .ctor()
    // Offset: 0x1C2DD9C
    // Implemented from: System.Runtime.ConstrainedExecution.CriticalFinalizerObject
    // Base method: System.Void CriticalFinalizerObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InternalThread* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::InternalThread::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InternalThread*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x1C2DD34
    // Implemented from: System.Runtime.ConstrainedExecution.CriticalFinalizerObject
    // Base method: System.Void CriticalFinalizerObject::Finalize()
    void Finalize();
  }; // System.Threading.InternalThread
  #pragma pack(pop)
  static check_size<sizeof(InternalThread), 280 + sizeof(::System::IntPtr)> __System_Threading_InternalThreadSizeCheck;
  static_assert(sizeof(InternalThread) == 0x120);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::InternalThread::Thread_free_internal
// Il2CppName: Thread_free_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::InternalThread::*)()>(&System::Threading::InternalThread::Thread_free_internal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::InternalThread*), "Thread_free_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::InternalThread::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::InternalThread::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::InternalThread::*)()>(&System::Threading::InternalThread::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::InternalThread*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
