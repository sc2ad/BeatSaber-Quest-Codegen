#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Threading {
class ThreadAbortException;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Runtime::Remoting::Messaging {
class MonoMethodMessage;
}
namespace System {
class IAsyncResult;
}
namespace System::Threading {
class IThreadPoolWorkItem;
}
namespace System::Threading {
class WaitCallback;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System::Threading {
class WaitHandle;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class AsyncResult;
}
// Type: System.Runtime.Remoting.Messaging::AsyncResult
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3147))
// CS Name: System.Runtime.Remoting.Messaging.AsyncResult
class CORDL_TYPE AsyncResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IAsyncResult
constexpr operator  System::IAsyncResult() const noexcept;

/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMessageSink
constexpr operator  System::Runtime::Remoting::Messaging::IMessageSink() const noexcept;

/// @brief Convert operator to System::Threading::IThreadPoolWorkItem
constexpr operator  System::Threading::IThreadPoolWorkItem() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~AsyncResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncResult", modifiers: " const&", def_value: None }]
constexpr AsyncResult(AsyncResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncResult", modifiers: "&&", def_value: None }]
constexpr AsyncResult(AsyncResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsyncResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AsyncResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsyncResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsyncResult& operator=(AsyncResult&& o) noexcept = default;
  constexpr AsyncResult& operator=(AsyncResult const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_async_state, put=__set_async_state))  async_state;

constexpr void __set_async_state(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_async_state() const;

 System::Threading::WaitHandle __declspec(property(get=__get_handle, put=__set_handle))  handle;

constexpr void __set_handle(System::Threading::WaitHandle value) ;

constexpr System::Threading::WaitHandle __get_handle() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_async_delegate, put=__set_async_delegate))  async_delegate;

constexpr void __set_async_delegate(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_async_delegate() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_data() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_object_data, put=__set_object_data))  object_data;

constexpr void __set_object_data(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_object_data() const;

 bool __declspec(property(get=__get_sync_completed, put=__set_sync_completed))  sync_completed;

constexpr void __set_sync_completed(bool value) ;

constexpr bool __get_sync_completed() const;

 bool __declspec(property(get=__get_completed, put=__set_completed))  completed;

constexpr void __set_completed(bool value) ;

constexpr bool __get_completed() const;

 bool __declspec(property(get=__get_endinvoke_called, put=__set_endinvoke_called))  endinvoke_called;

constexpr void __set_endinvoke_called(bool value) ;

constexpr bool __get_endinvoke_called() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_async_callback, put=__set_async_callback))  async_callback;

constexpr void __set_async_callback(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_async_callback() const;

 System::Threading::ExecutionContext __declspec(property(get=__get_current, put=__set_current))  current;

constexpr void __set_current(System::Threading::ExecutionContext value) ;

constexpr System::Threading::ExecutionContext __get_current() const;

 System::Threading::ExecutionContext __declspec(property(get=__get_original, put=__set_original))  original;

constexpr void __set_original(System::Threading::ExecutionContext value) ;

constexpr System::Threading::ExecutionContext __get_original() const;

 int64_t __declspec(property(get=__get_add_time, put=__set_add_time))  add_time;

constexpr void __set_add_time(int64_t value) ;

constexpr int64_t __get_add_time() const;

 System::Runtime::Remoting::Messaging::MonoMethodMessage __declspec(property(get=__get_call_message, put=__set_call_message))  call_message;

constexpr void __set_call_message(System::Runtime::Remoting::Messaging::MonoMethodMessage value) ;

constexpr System::Runtime::Remoting::Messaging::MonoMethodMessage __get_call_message() const;

 System::Runtime::Remoting::Messaging::IMessageCtrl __declspec(property(get=__get_message_ctrl, put=__set_message_ctrl))  message_ctrl;

constexpr void __set_message_ctrl(System::Runtime::Remoting::Messaging::IMessageCtrl value) ;

constexpr System::Runtime::Remoting::Messaging::IMessageCtrl __get_message_ctrl() const;

 System::Runtime::Remoting::Messaging::IMessage __declspec(property(get=__get_reply_message, put=__set_reply_message))  reply_message;

constexpr void __set_reply_message(System::Runtime::Remoting::Messaging::IMessage value) ;

constexpr System::Runtime::Remoting::Messaging::IMessage __get_reply_message() const;

 System::Threading::WaitCallback __declspec(property(get=__get_orig_cb, put=__set_orig_cb))  orig_cb;

constexpr void __set_orig_cb(System::Threading::WaitCallback value) ;

constexpr System::Threading::WaitCallback __get_orig_cb() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_AsyncState))  AsyncState;

 System::Threading::WaitHandle __declspec(property(get=get_AsyncWaitHandle))  AsyncWaitHandle;

 bool __declspec(property(get=get_CompletedSynchronously))  CompletedSynchronously;

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;

 bool __declspec(property(get=get_EndInvokeCalled, put=set_EndInvokeCalled))  EndInvokeCalled;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_AsyncDelegate))  AsyncDelegate;

 System::Runtime::Remoting::Messaging::IMessageSink __declspec(property(get=get_NextSink))  NextSink;

 System::Runtime::Remoting::Messaging::MonoMethodMessage __declspec(property(get=get_CallMessage, put=set_CallMessage))  CallMessage;


// Methods

// Ctor Parameters []
explicit AsyncResult() ;

/// @brief Method .ctor addr 0x233b60c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_AsyncState addr 0x233b614 size 0x8 virtual true final false
 ::bs_hook::Il2CppWrapperType get_AsyncState() ;

/// @brief Method get_AsyncWaitHandle addr 0x233b61c size 0x124 virtual true final false
 System::Threading::WaitHandle get_AsyncWaitHandle() ;

/// @brief Method get_CompletedSynchronously addr 0x233b740 size 0x8 virtual true final false
 bool get_CompletedSynchronously() ;

/// @brief Method get_IsCompleted addr 0x233b748 size 0x8 virtual true final false
 bool get_IsCompleted() ;

/// @brief Method get_EndInvokeCalled addr 0x233b750 size 0x8 virtual false final false
 bool get_EndInvokeCalled() ;

/// @brief Method set_EndInvokeCalled addr 0x233b758 size 0xc virtual false final false
 void set_EndInvokeCalled(bool value) ;

/// @brief Method get_AsyncDelegate addr 0x233b764 size 0x8 virtual true final false
 ::bs_hook::Il2CppWrapperType get_AsyncDelegate() ;

/// @brief Method get_NextSink addr 0x233b76c size 0x8 virtual true final true
 System::Runtime::Remoting::Messaging::IMessageSink get_NextSink() ;

/// @brief Method AsyncProcessMessage addr 0x233b774 size 0x40 virtual true final false
 System::Runtime::Remoting::Messaging::IMessageCtrl AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg, System::Runtime::Remoting::Messaging::IMessageSink replySink) ;

/// @brief Method GetReplyMessage addr 0x233b7b4 size 0x8 virtual true final false
 System::Runtime::Remoting::Messaging::IMessage GetReplyMessage() ;

/// @brief Method SetMessageCtrl addr 0x233b7bc size 0x8 virtual true final false
 void SetMessageCtrl(System::Runtime::Remoting::Messaging::IMessageCtrl mc) ;

/// @brief Method SetCompletedSynchronously addr 0x233b7c4 size 0xc virtual false final false
 void SetCompletedSynchronously(bool completed) ;

/// @brief Method EndInvoke addr 0x232b810 size 0x110 virtual false final false
 System::Runtime::Remoting::Messaging::IMessage EndInvoke() ;

/// @brief Method SyncProcessMessage addr 0x233b7d0 size 0x190 virtual true final false
 System::Runtime::Remoting::Messaging::IMessage SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg) ;

/// @brief Method get_CallMessage addr 0x233b960 size 0x8 virtual false final false
 System::Runtime::Remoting::Messaging::MonoMethodMessage get_CallMessage() ;

/// @brief Method set_CallMessage addr 0x233b968 size 0x8 virtual false final false
 void set_CallMessage(System::Runtime::Remoting::Messaging::MonoMethodMessage value) ;

/// @brief Method System.Threading.IThreadPoolWorkItem.ExecuteWorkItem addr 0x233b970 size 0x4 virtual true final true
 void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem() ;

/// @brief Method System.Threading.IThreadPoolWorkItem.MarkAborted addr 0x233b978 size 0x4 virtual true final true
 void System_Threading_IThreadPoolWorkItem_MarkAborted(System::Threading::ThreadAbortException tae) ;

/// @brief Method Invoke addr 0x233b974 size 0x4 virtual false final false
 ::bs_hook::Il2CppWrapperType Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(System::Runtime::Remoting::Messaging::AsyncResult);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::AsyncResult, "System.Runtime.Remoting.Messaging", "AsyncResult");
