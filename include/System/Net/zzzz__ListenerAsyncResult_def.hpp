#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class IAsyncResult;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Threading {
class WaitCallback;
}
namespace System::Net {
class HttpListenerContext;
}
namespace System::Threading {
class WaitHandle;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Net {
class ListenerAsyncResult;
}
// Type: System.Net::ListenerAsyncResult
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8040))
// CS Name: System.Net.ListenerAsyncResult
class CORDL_TYPE ListenerAsyncResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IAsyncResult
constexpr operator  System::IAsyncResult() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~ListenerAsyncResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "ListenerAsyncResult", modifiers: " const&", def_value: None }]
constexpr ListenerAsyncResult(ListenerAsyncResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ListenerAsyncResult", modifiers: "&&", def_value: None }]
constexpr ListenerAsyncResult(ListenerAsyncResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ListenerAsyncResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ListenerAsyncResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ListenerAsyncResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ListenerAsyncResult& operator=(ListenerAsyncResult&& o) noexcept = default;
  constexpr ListenerAsyncResult& operator=(ListenerAsyncResult const& o) noexcept = default;
                


// Fields

 System::Threading::ManualResetEvent __declspec(property(get=__get_handle, put=__set_handle))  handle;

constexpr void __set_handle(System::Threading::ManualResetEvent value) ;

constexpr System::Threading::ManualResetEvent __get_handle() const;

 bool __declspec(property(get=__get_synch, put=__set_synch))  synch;

constexpr void __set_synch(bool value) ;

constexpr bool __get_synch() const;

 bool __declspec(property(get=__get_completed, put=__set_completed))  completed;

constexpr void __set_completed(bool value) ;

constexpr bool __get_completed() const;

 System::AsyncCallback __declspec(property(get=__get_cb, put=__set_cb))  cb;

constexpr void __set_cb(System::AsyncCallback value) ;

constexpr System::AsyncCallback __get_cb() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_state() const;

 System::Exception __declspec(property(get=__get_exception, put=__set_exception))  exception;

constexpr void __set_exception(System::Exception value) ;

constexpr System::Exception __get_exception() const;

 System::Net::HttpListenerContext __declspec(property(get=__get_context, put=__set_context))  context;

constexpr void __set_context(System::Net::HttpListenerContext value) ;

constexpr System::Net::HttpListenerContext __get_context() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_locker, put=__set_locker))  locker;

constexpr void __set_locker(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_locker() const;

 System::Net::ListenerAsyncResult __declspec(property(get=__get_forward, put=__set_forward))  forward;

constexpr void __set_forward(System::Net::ListenerAsyncResult value) ;

constexpr System::Net::ListenerAsyncResult __get_forward() const;

 bool __declspec(property(get=__get_EndCalled, put=__set_EndCalled))  EndCalled;

constexpr void __set_EndCalled(bool value) ;

constexpr bool __get_EndCalled() const;

 bool __declspec(property(get=__get_InGet, put=__set_InGet))  InGet;

constexpr void __set_InGet(bool value) ;

constexpr bool __get_InGet() const;

static System::Threading::WaitCallback __declspec(property(get=__get_InvokeCB, put=__set_InvokeCB))  InvokeCB;

static void __set_InvokeCB(System::Threading::WaitCallback value) ;

static System::Threading::WaitCallback __get_InvokeCB() ;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_AsyncState))  AsyncState;

 System::Threading::WaitHandle __declspec(property(get=get_AsyncWaitHandle))  AsyncWaitHandle;

 bool __declspec(property(get=get_CompletedSynchronously))  CompletedSynchronously;

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

static System::Net::ListenerAsyncResult New_ctor(System::AsyncCallback cb, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method .ctor addr 0x283fff4 size 0x80 virtual false final false
 void _ctor(System::AsyncCallback cb, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method Complete addr 0x2840074 size 0x1f4 virtual false final false
 void Complete(System::Exception exc) ;

/// @brief Method InvokeCallback addr 0x2840268 size 0x13c virtual false final false
static void InvokeCallback(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method Complete addr 0x28403a4 size 0x8 virtual false final false
 void Complete(System::Net::HttpListenerContext context) ;

/// @brief Method Complete addr 0x28403ac size 0x530 virtual false final false
 void Complete(System::Net::HttpListenerContext context, bool synch) ;

/// @brief Method GetContext addr 0x28408dc size 0x3c virtual false final false
 System::Net::HttpListenerContext GetContext() ;

/// @brief Method get_AsyncState addr 0x2840918 size 0x14 virtual true final true
 ::bs_hook::Il2CppWrapperType get_AsyncState() ;

/// @brief Method get_AsyncWaitHandle addr 0x284092c size 0x138 virtual true final true
 System::Threading::WaitHandle get_AsyncWaitHandle() ;

/// @brief Method get_CompletedSynchronously addr 0x2840a64 size 0x14 virtual true final true
 bool get_CompletedSynchronously() ;

/// @brief Method get_IsCompleted addr 0x2840a78 size 0xe0 virtual true final true
 bool get_IsCompleted() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::ListenerAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(System::Net::ListenerAsyncResult, "System.Net", "ListenerAsyncResult");
