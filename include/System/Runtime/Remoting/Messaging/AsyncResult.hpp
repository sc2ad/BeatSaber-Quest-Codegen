// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.Threading.IThreadPoolWorkItem
#include "System/Threading/IThreadPoolWorkItem.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessageSink
#include "System/Runtime/Remoting/Messaging/IMessageSink.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: WaitHandle
  class WaitHandle;
  // Forward declaring type: ExecutionContext
  class ExecutionContext;
  // Forward declaring type: WaitCallback
  class WaitCallback;
  // Forward declaring type: ContextCallback
  class ContextCallback;
  // Forward declaring type: ThreadAbortException
  class ThreadAbortException;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: MonoMethodMessage
  class MonoMethodMessage;
  // Forward declaring type: IMessageCtrl
  class IMessageCtrl;
  // Forward declaring type: IMessage
  class IMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: AsyncResult
  class AsyncResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::AsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::AsyncResult*, "System.Runtime.Remoting.Messaging", "AsyncResult");
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x80
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.Remoting.Messaging.AsyncResult
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1070DB8
  class AsyncResult : public ::Il2CppObject/*, public ::System::IAsyncResult, public ::System::Threading::IThreadPoolWorkItem, public ::System::Runtime::Remoting::Messaging::IMessageSink*/ {
    public:
    public:
    // private System.Object async_state
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* async_state;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Threading.WaitHandle handle
    // Size: 0x8
    // Offset: 0x18
    ::System::Threading::WaitHandle* handle;
    // Field size check
    static_assert(sizeof(::System::Threading::WaitHandle*) == 0x8);
    // private System.Object async_delegate
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* async_delegate;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.IntPtr data
    // Size: 0x8
    // Offset: 0x28
    ::System::IntPtr data;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.Object object_data
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppObject* object_data;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Boolean sync_completed
    // Size: 0x1
    // Offset: 0x38
    bool sync_completed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean completed
    // Size: 0x1
    // Offset: 0x39
    bool completed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean endinvoke_called
    // Size: 0x1
    // Offset: 0x3A
    bool endinvoke_called;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: endinvoke_called and: async_callback
    char __padding7[0x5] = {};
    // private System.Object async_callback
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppObject* async_callback;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Threading.ExecutionContext current
    // Size: 0x8
    // Offset: 0x48
    ::System::Threading::ExecutionContext* current;
    // Field size check
    static_assert(sizeof(::System::Threading::ExecutionContext*) == 0x8);
    // private System.Threading.ExecutionContext original
    // Size: 0x8
    // Offset: 0x50
    ::System::Threading::ExecutionContext* original;
    // Field size check
    static_assert(sizeof(::System::Threading::ExecutionContext*) == 0x8);
    // private System.Int64 add_time
    // Size: 0x8
    // Offset: 0x58
    int64_t add_time;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Runtime.Remoting.Messaging.MonoMethodMessage call_message
    // Size: 0x8
    // Offset: 0x60
    ::System::Runtime::Remoting::Messaging::MonoMethodMessage* call_message;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Messaging::MonoMethodMessage*) == 0x8);
    // private System.Runtime.Remoting.Messaging.IMessageCtrl message_ctrl
    // Size: 0x8
    // Offset: 0x68
    ::System::Runtime::Remoting::Messaging::IMessageCtrl* message_ctrl;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Messaging::IMessageCtrl*) == 0x8);
    // private System.Runtime.Remoting.Messaging.IMessage reply_message
    // Size: 0x8
    // Offset: 0x70
    ::System::Runtime::Remoting::Messaging::IMessage* reply_message;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Messaging::IMessage*) == 0x8);
    // private System.Threading.WaitCallback orig_cb
    // Size: 0x8
    // Offset: 0x78
    ::System::Threading::WaitCallback* orig_cb;
    // Field size check
    static_assert(sizeof(::System::Threading::WaitCallback*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IAsyncResult
    operator ::System::IAsyncResult() noexcept {
      return *reinterpret_cast<::System::IAsyncResult*>(this);
    }
    // Creating interface conversion operator: i_IAsyncResult
    inline ::System::IAsyncResult* i_IAsyncResult() noexcept {
      return reinterpret_cast<::System::IAsyncResult*>(this);
    }
    // Creating interface conversion operator: operator ::System::Threading::IThreadPoolWorkItem
    operator ::System::Threading::IThreadPoolWorkItem() noexcept {
      return *reinterpret_cast<::System::Threading::IThreadPoolWorkItem*>(this);
    }
    // Creating interface conversion operator: i_IThreadPoolWorkItem
    inline ::System::Threading::IThreadPoolWorkItem* i_IThreadPoolWorkItem() noexcept {
      return reinterpret_cast<::System::Threading::IThreadPoolWorkItem*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::Remoting::Messaging::IMessageSink
    operator ::System::Runtime::Remoting::Messaging::IMessageSink() noexcept {
      return *reinterpret_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(this);
    }
    // Creating interface conversion operator: i_IMessageSink
    inline ::System::Runtime::Remoting::Messaging::IMessageSink* i_IMessageSink() noexcept {
      return reinterpret_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(this);
    }
    // Get static field: static System.Threading.ContextCallback ccb
    static ::System::Threading::ContextCallback* _get_ccb();
    // Set static field: static System.Threading.ContextCallback ccb
    static void _set_ccb(::System::Threading::ContextCallback* value);
    // Get instance field reference: private System.Object async_state
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_async_state();
    // Get instance field reference: private System.Threading.WaitHandle handle
    [[deprecated("Use field access instead!")]] ::System::Threading::WaitHandle*& dyn_handle();
    // Get instance field reference: private System.Object async_delegate
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_async_delegate();
    // Get instance field reference: private System.IntPtr data
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_data();
    // Get instance field reference: private System.Object object_data
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_object_data();
    // Get instance field reference: private System.Boolean sync_completed
    [[deprecated("Use field access instead!")]] bool& dyn_sync_completed();
    // Get instance field reference: private System.Boolean completed
    [[deprecated("Use field access instead!")]] bool& dyn_completed();
    // Get instance field reference: private System.Boolean endinvoke_called
    [[deprecated("Use field access instead!")]] bool& dyn_endinvoke_called();
    // Get instance field reference: private System.Object async_callback
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_async_callback();
    // Get instance field reference: private System.Threading.ExecutionContext current
    [[deprecated("Use field access instead!")]] ::System::Threading::ExecutionContext*& dyn_current();
    // Get instance field reference: private System.Threading.ExecutionContext original
    [[deprecated("Use field access instead!")]] ::System::Threading::ExecutionContext*& dyn_original();
    // Get instance field reference: private System.Int64 add_time
    [[deprecated("Use field access instead!")]] int64_t& dyn_add_time();
    // Get instance field reference: private System.Runtime.Remoting.Messaging.MonoMethodMessage call_message
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Messaging::MonoMethodMessage*& dyn_call_message();
    // Get instance field reference: private System.Runtime.Remoting.Messaging.IMessageCtrl message_ctrl
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Messaging::IMessageCtrl*& dyn_message_ctrl();
    // Get instance field reference: private System.Runtime.Remoting.Messaging.IMessage reply_message
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Messaging::IMessage*& dyn_reply_message();
    // Get instance field reference: private System.Threading.WaitCallback orig_cb
    [[deprecated("Use field access instead!")]] ::System::Threading::WaitCallback*& dyn_orig_cb();
    // public System.Object get_AsyncState()
    // Offset: 0x1D37874
    ::Il2CppObject* get_AsyncState();
    // public System.Threading.WaitHandle get_AsyncWaitHandle()
    // Offset: 0x1D3787C
    ::System::Threading::WaitHandle* get_AsyncWaitHandle();
    // public System.Boolean get_CompletedSynchronously()
    // Offset: 0x1D37964
    bool get_CompletedSynchronously();
    // public System.Boolean get_IsCompleted()
    // Offset: 0x1D3796C
    bool get_IsCompleted();
    // public System.Boolean get_EndInvokeCalled()
    // Offset: 0x1D37974
    bool get_EndInvokeCalled();
    // public System.Void set_EndInvokeCalled(System.Boolean value)
    // Offset: 0x1D3797C
    void set_EndInvokeCalled(bool value);
    // public System.Object get_AsyncDelegate()
    // Offset: 0x1D37988
    ::Il2CppObject* get_AsyncDelegate();
    // public System.Runtime.Remoting.Messaging.IMessageSink get_NextSink()
    // Offset: 0x1D37990
    ::System::Runtime::Remoting::Messaging::IMessageSink* get_NextSink();
    // System.Runtime.Remoting.Messaging.MonoMethodMessage get_CallMessage()
    // Offset: 0x1D37C48
    ::System::Runtime::Remoting::Messaging::MonoMethodMessage* get_CallMessage();
    // System.Void set_CallMessage(System.Runtime.Remoting.Messaging.MonoMethodMessage value)
    // Offset: 0x1D37C50
    void set_CallMessage(::System::Runtime::Remoting::Messaging::MonoMethodMessage* value);
    // System.Void .ctor(System.Threading.WaitCallback cb, System.Object state, System.Boolean capture_context)
    // Offset: 0x1D37700
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsyncResult* New_ctor(::System::Threading::WaitCallback* cb, ::Il2CppObject* state, bool capture_context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::AsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsyncResult*, creationType>(cb, state, capture_context)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1D37C64
    static void _cctor();
    // static private System.Void WaitCallback_Context(System.Object state)
    // Offset: 0x1D377E0
    static void WaitCallback_Context(::Il2CppObject* state);
    // public System.Runtime.Remoting.Messaging.IMessageCtrl AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0x1D37998
    ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);
    // public System.Runtime.Remoting.Messaging.IMessage GetReplyMessage()
    // Offset: 0x1D379F8
    ::System::Runtime::Remoting::Messaging::IMessage* GetReplyMessage();
    // public System.Void SetMessageCtrl(System.Runtime.Remoting.Messaging.IMessageCtrl mc)
    // Offset: 0x1D37A00
    void SetMessageCtrl(::System::Runtime::Remoting::Messaging::IMessageCtrl* mc);
    // System.Void SetCompletedSynchronously(System.Boolean completed)
    // Offset: 0x1D37A08
    void SetCompletedSynchronously(bool completed);
    // System.Runtime.Remoting.Messaging.IMessage EndInvoke()
    // Offset: 0x1D37A14
    ::System::Runtime::Remoting::Messaging::IMessage* EndInvoke();
    // public System.Runtime.Remoting.Messaging.IMessage SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0x1D37B10
    ::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);
    // private System.Void System.Threading.IThreadPoolWorkItem.ExecuteWorkItem()
    // Offset: 0x1D37C58
    void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem();
    // private System.Void System.Threading.IThreadPoolWorkItem.MarkAborted(System.Threading.ThreadAbortException tae)
    // Offset: 0x1D37C60
    void System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException* tae);
    // System.Object Invoke()
    // Offset: 0x1D37C5C
    ::Il2CppObject* Invoke();
    // private System.Void <.ctor>b__17_0(System.Object <p0>)
    // Offset: 0x1D37CE0
    void $_ctor$b__17_0(::Il2CppObject* $p0$);
    // System.Void .ctor()
    // Offset: 0x1D376F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsyncResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::AsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsyncResult*, creationType>()));
    }
  }; // System.Runtime.Remoting.Messaging.AsyncResult
  #pragma pack(pop)
  static check_size<sizeof(AsyncResult), 120 + sizeof(::System::Threading::WaitCallback*)> __System_Runtime_Remoting_Messaging_AsyncResultSizeCheck;
  static_assert(sizeof(AsyncResult) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncState
// Il2CppName: get_AsyncState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::AsyncResult*), "get_AsyncState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncWaitHandle
// Il2CppName: get_AsyncWaitHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::WaitHandle* (System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncWaitHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::AsyncResult*), "get_AsyncWaitHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::AsyncResult::get_CompletedSynchronously
// Il2CppName: get_CompletedSynchronously
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&System::Runtime::Remoting::Messaging::AsyncResult::get_CompletedSynchronously)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::AsyncResult*), "get_CompletedSynchronously", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::AsyncResult::get_IsCompleted
// Il2CppName: get_IsCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&System::Runtime::Remoting::Messaging::AsyncResult::get_IsCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::AsyncResult*), "get_IsCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::AsyncResult::get_EndInvokeCalled
// Il2CppName: get_EndInvokeCalled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&System::Runtime::Remoting::Messaging::AsyncResult::get_EndInvokeCalled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::AsyncResult*), "get_EndInvokeCalled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::AsyncResult::set_EndInvokeCalled
// Il2CppName: set_EndInvokeCalled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::AsyncResult::*)(bool)>(&System::Runtime::Remoting::Messaging::AsyncResult::set_EndInvokeCalled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::AsyncResult*), "set_EndInvokeCalled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncDelegate
// Il2CppName: get_AsyncDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncDelegate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::AsyncResult*), "get_AsyncDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::AsyncResult::get_NextSink
// Il2CppName: get_NextSink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&System::Runtime::Remoting::Messaging::AsyncResult::get_NextSink)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::AsyncResult*), "get_NextSink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::AsyncResult::get_CallMessage
// Il2CppName: get_CallMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::MonoMethodMessage* (System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&System::Runtime::Remoting::Messaging::AsyncResult::get_CallMessage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::AsyncResult*), "get_CallMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::AsyncResult::set_CallMessage
// Il2CppName: set_CallMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::AsyncResult::*)(::System::Runtime::Remoting::Messaging::MonoMethodMessage*)>(&System::Runtime::Remoting::Messaging::AsyncResult::set_CallMessage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "MonoMethodMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::AsyncResult*), "set_CallMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::AsyncResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::AsyncResult::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::Remoting::Messaging::AsyncResult::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::AsyncResult*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::AsyncResult::WaitCallback_Context
// Il2CppName: WaitCallback_Context
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::Runtime::Remoting::Messaging::AsyncResult::WaitCallback_Context)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::AsyncResult*), "WaitCallback_Context", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::AsyncResult::AsyncProcessMessage
// Il2CppName: AsyncProcessMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageCtrl* (System::Runtime::Remoting::Messaging::AsyncResult::*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(&System::Runtime::Remoting::Messaging::AsyncResult::AsyncProcessMessage)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    static auto* replySink = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessageSink")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::AsyncResult*), "AsyncProcessMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg, replySink});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::AsyncResult::GetReplyMessage
// Il2CppName: GetReplyMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&System::Runtime::Remoting::Messaging::AsyncResult::GetReplyMessage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::AsyncResult*), "GetReplyMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::AsyncResult::SetMessageCtrl
// Il2CppName: SetMessageCtrl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::AsyncResult::*)(::System::Runtime::Remoting::Messaging::IMessageCtrl*)>(&System::Runtime::Remoting::Messaging::AsyncResult::SetMessageCtrl)> {
  static const MethodInfo* get() {
    static auto* mc = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessageCtrl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::AsyncResult*), "SetMessageCtrl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mc});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::AsyncResult::SetCompletedSynchronously
// Il2CppName: SetCompletedSynchronously
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::AsyncResult::*)(bool)>(&System::Runtime::Remoting::Messaging::AsyncResult::SetCompletedSynchronously)> {
  static const MethodInfo* get() {
    static auto* completed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::AsyncResult*), "SetCompletedSynchronously", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{completed});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::AsyncResult::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&System::Runtime::Remoting::Messaging::AsyncResult::EndInvoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::AsyncResult*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::AsyncResult::SyncProcessMessage
// Il2CppName: SyncProcessMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (System::Runtime::Remoting::Messaging::AsyncResult::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&System::Runtime::Remoting::Messaging::AsyncResult::SyncProcessMessage)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::AsyncResult*), "SyncProcessMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::AsyncResult::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
// Il2CppName: System.Threading.IThreadPoolWorkItem.ExecuteWorkItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&System::Runtime::Remoting::Messaging::AsyncResult::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::AsyncResult*), "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::AsyncResult::System_Threading_IThreadPoolWorkItem_MarkAborted
// Il2CppName: System.Threading.IThreadPoolWorkItem.MarkAborted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::AsyncResult::*)(::System::Threading::ThreadAbortException*)>(&System::Runtime::Remoting::Messaging::AsyncResult::System_Threading_IThreadPoolWorkItem_MarkAborted)> {
  static const MethodInfo* get() {
    static auto* tae = &::il2cpp_utils::GetClassFromName("System.Threading", "ThreadAbortException")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::AsyncResult*), "System.Threading.IThreadPoolWorkItem.MarkAborted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tae});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::AsyncResult::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&System::Runtime::Remoting::Messaging::AsyncResult::Invoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::AsyncResult*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::AsyncResult::$_ctor$b__17_0
// Il2CppName: <.ctor>b__17_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::AsyncResult::*)(::Il2CppObject*)>(&System::Runtime::Remoting::Messaging::AsyncResult::$_ctor$b__17_0)> {
  static const MethodInfo* get() {
    static auto* $p0$ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::AsyncResult*), "<.ctor>b__17_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{$p0$});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::AsyncResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
