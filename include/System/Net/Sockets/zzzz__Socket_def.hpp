#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncEventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Threading {
class SendOrPostCallback;
}
namespace System::Threading {
class ContextCallback;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class IAsyncResult;
}
namespace System::Net::Sockets {
struct SocketOptionName;
}
namespace System::Net::Sockets {
struct IPProtectionLevel;
}
namespace System {
class AsyncCallback;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System::Net::Sockets {
struct SocketFlags;
}
namespace System::Net::Sockets {
struct SocketShutdown;
}
namespace System::Net::Sockets {
struct SocketType;
}
namespace System::Threading::Tasks {
template<typename TResult>
struct ValueTask_1;
}
namespace System {
class Exception;
}
namespace System {
class IOSelectorJob;
}
namespace System::Net::Sockets {
struct SelectMode;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::Net::Sockets {
struct SocketError;
}
namespace System::Net::Sockets {
struct SocketOperation;
}
namespace System::Net::Sockets {
struct SocketAsyncOperation;
}
namespace System::Net::NetworkInformation {
struct NetworkInterfaceComponent;
}
namespace System {
template<typename T>
struct ReadOnlyMemory_1;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Net {
class SocketAddress;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Net::Sockets {
struct ProtocolType;
}
namespace System::Net {
class EndPoint;
}
namespace System {
template<typename T>
struct Memory_1;
}
namespace System {
class IDisposable;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net::Sockets {
struct IOControlCode;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace System::Net::Sockets {
class SocketAsyncResult;
}
namespace System::Threading {
class Thread;
}
namespace System {
class IOAsyncCallback;
}
namespace System::Net::Sockets {
struct AddressFamily;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System::Net::Sockets {
class SocketAsyncEventArgs;
}
namespace System::Net::Sockets {
class SafeSocketHandle;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System::Net::Sockets {
struct SocketOptionLevel;
}
namespace System::Threading::Tasks::Sources {
template<typename TResult>
class IValueTaskSource_1;
}
namespace System::Threading::Tasks::Sources {
class IValueTaskSource;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Threading::Tasks::Sources {
struct ValueTaskSourceStatus;
}
namespace System::Threading::Tasks::Sources {
struct ValueTaskSourceOnCompletedFlags;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class IOAsyncResult;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace System::Net::Sockets {
template<typename TResult>
class ____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1;
}
namespace GlobalNamespace {
class ______System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net::Sockets {
class ____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs;
}
namespace System::Net::Sockets {
class ____System__Net__Sockets__Socket__CachedEventArgs;
}
namespace System::Net::Sockets {
class ____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs;
}
namespace System::Net::Sockets {
template<::cordl_internals::il2cpp_reference_type TResult>
class ____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<TResult>;
}
namespace System::Net::Sockets {
template<>
class ____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<int32_t>;
}
namespace System::Net::Sockets {
class ____System__Net__Sockets__Socket____c;
}
namespace System::Net::Sockets {
class ____System__Net__Sockets__Socket____c__DisplayClass240_0;
}
namespace System::Net::Sockets {
class ____System__Net__Sockets__Socket____c__DisplayClass298_0;
}
namespace System::Net::Sockets {
class ____System__Net__Sockets__Socket____c__DisplayClass355_0;
}
namespace System::Net::Sockets {
struct ____System__Net__Sockets__Socket__WSABUF;
}
// Type: ::CachedEventArgs
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8176))
// CS Name: System.Net.Sockets.Socket::CachedEventArgs
class CORDL_TYPE ____System__Net__Sockets__Socket__CachedEventArgs : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~____System__Net__Sockets__Socket__CachedEventArgs() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__Sockets__Socket__CachedEventArgs", modifiers: " const&", def_value: None }]
constexpr ____System__Net__Sockets__Socket__CachedEventArgs(____System__Net__Sockets__Socket__CachedEventArgs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__Sockets__Socket__CachedEventArgs", modifiers: "&&", def_value: None }]
constexpr ____System__Net__Sockets__Socket__CachedEventArgs(____System__Net__Sockets__Socket__CachedEventArgs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__Sockets__Socket__CachedEventArgs(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Net__Sockets__Socket__CachedEventArgs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Net__Sockets__Socket__CachedEventArgs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Net__Sockets__Socket__CachedEventArgs& operator=(____System__Net__Sockets__Socket__CachedEventArgs&& o) noexcept = default;
  constexpr ____System__Net__Sockets__Socket__CachedEventArgs& operator=(____System__Net__Sockets__Socket__CachedEventArgs const& o) noexcept = default;
                


// Fields

 ::System::Net::Sockets::____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket> __declspec(property(get=__get_TaskAccept, put=__set_TaskAccept))  TaskAccept;

constexpr void __set_TaskAccept(::System::Net::Sockets::____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket> value) ;

constexpr ::System::Net::Sockets::____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket> __get_TaskAccept() const;

 ::System::Net::Sockets::____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs __declspec(property(get=__get_TaskReceive, put=__set_TaskReceive))  TaskReceive;

constexpr void __set_TaskReceive(::System::Net::Sockets::____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs value) ;

constexpr ::System::Net::Sockets::____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs __get_TaskReceive() const;

 ::System::Net::Sockets::____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs __declspec(property(get=__get_TaskSend, put=__set_TaskSend))  TaskSend;

constexpr void __set_TaskSend(::System::Net::Sockets::____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs value) ;

constexpr ::System::Net::Sockets::____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs __get_TaskSend() const;

 ::System::Net::Sockets::____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs __declspec(property(get=__get_ValueTaskReceive, put=__set_ValueTaskReceive))  ValueTaskReceive;

constexpr void __set_ValueTaskReceive(::System::Net::Sockets::____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs value) ;

constexpr ::System::Net::Sockets::____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs __get_ValueTaskReceive() const;

 ::System::Net::Sockets::____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs __declspec(property(get=__get_ValueTaskSend, put=__set_ValueTaskSend))  ValueTaskSend;

constexpr void __set_ValueTaskSend(::System::Net::Sockets::____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs value) ;

constexpr ::System::Net::Sockets::____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs __get_ValueTaskSend() const;


// Methods

// Ctor Parameters []
explicit ____System__Net__Sockets__Socket__CachedEventArgs() ;

/// @brief Method .ctor addr 0x286ba2c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
// Type: ::TaskSocketAsyncEventArgs`1
// Type: ::TaskSocketAsyncEventArgs`1
namespace System::Net::Sockets {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8208)), TypeDefinitionIndex(TypeDefinitionIndex(8177))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8177), inst: 92 })
// CS Name: System.Net.Sockets.Socket::TaskSocketAsyncEventArgs`1
class CORDL_TYPE ____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<int32_t> : public ::System::Net::Sockets::SocketAsyncEventArgs {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe0};

virtual ~____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1", modifiers: " const&", def_value: None }]
constexpr ____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1(____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1", modifiers: "&&", def_value: None }]
constexpr ____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1(____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1(void* ptr) noexcept : ::System::Net::Sockets::SocketAsyncEventArgs(ptr) {
}


  constexpr ____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1& operator=(____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1&& o) noexcept = default;
  constexpr ____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1& operator=(____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1 const& o) noexcept = default;
                


// Fields

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __declspec(property(get=__get__builder, put=__set__builder))  _builder;

constexpr void __set__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __get__builder() const;

 bool __declspec(property(get=__get__accessed, put=__set__accessed))  _accessed;

constexpr void __set__accessed(bool value) ;

constexpr bool __get__accessed() const;


// Methods

// Ctor Parameters []
explicit ____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method GetCompletionResponsibility addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> GetCompletionResponsibility(ByRef<bool> responsibleForReturningToPool) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
// Type: ::Int32TaskSocketAsyncEventArgs
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8177)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8177), inst: 92 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8178))
// CS Name: System.Net.Sockets.Socket::Int32TaskSocketAsyncEventArgs
class CORDL_TYPE ____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs : public ::System::Net::Sockets::____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd8};

virtual ~____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs", modifiers: " const&", def_value: None }]
constexpr ____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs(____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs", modifiers: "&&", def_value: None }]
constexpr ____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs(____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs(void* ptr) noexcept : ::System::Net::Sockets::____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<int32_t>(ptr) {
}


  constexpr ____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs& operator=(____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs&& o) noexcept = default;
  constexpr ____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs& operator=(____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__wrapExceptionsInIOExceptions, put=__set__wrapExceptionsInIOExceptions))  _wrapExceptionsInIOExceptions;

constexpr void __set__wrapExceptionsInIOExceptions(bool value) ;

constexpr bool __get__wrapExceptionsInIOExceptions() const;


// Methods

// Ctor Parameters []
explicit ____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs() ;

/// @brief Method .ctor addr 0x286b9e4 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8179))
// CS Name: System.Net.Sockets.Socket::AwaitableSocketAsyncEventArgs::<>c
class CORDL_TYPE ______System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~______System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "______System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c", modifiers: " const&", def_value: None }]
constexpr ______System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c(______System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "______System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c", modifiers: "&&", def_value: None }]
constexpr ______System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c(______System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ______System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ______System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ______System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ______System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c& operator=(______System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c&& o) noexcept = default;
  constexpr ______System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c& operator=(______System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::______System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::______System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c value) ;

static ::GlobalNamespace::______System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c __get___9() ;

static ::System::Threading::ContextCallback __declspec(property(get=__get___9__14_0, put=__set___9__14_0))  __9__14_0;

static void __set___9__14_0(::System::Threading::ContextCallback value) ;

static ::System::Threading::ContextCallback __get___9__14_0() ;

static ::System::Threading::SendOrPostCallback __declspec(property(get=__get___9__20_0, put=__set___9__20_0))  __9__20_0;

static void __set___9__20_0(::System::Threading::SendOrPostCallback value) ;

static ::System::Threading::SendOrPostCallback __get___9__20_0() ;


// Methods

// Ctor Parameters []
explicit ______System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c() ;

/// @brief Method .ctor addr 0x2766414 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <OnCompleted>b__14_0 addr 0x276641c size 0xb4 virtual false final false
 void _OnCompleted_b__14_0(::bs_hook::Il2CppWrapperType runState) ;

/// @brief Method <InvokeContinuation>b__20_0 addr 0x27664d0 size 0xac virtual false final false
 void _InvokeContinuation_b__20_0(::bs_hook::Il2CppWrapperType s) ;

/// @brief Method <.cctor>b__27_0 addr 0x276657c size 0x50 virtual false final false
 void __cctor_b__27_0(::bs_hook::Il2CppWrapperType state) ;

/// @brief Method <.cctor>b__27_1 addr 0x27665cc size 0x50 virtual false final false
 void __cctor_b__27_1(::bs_hook::Il2CppWrapperType state) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AwaitableSocketAsyncEventArgs
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8208))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8180))
// CS Name: System.Net.Sockets.Socket::AwaitableSocketAsyncEventArgs
class CORDL_TYPE ____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs : public ::System::Net::Sockets::SocketAsyncEventArgs {
public:
// Declarations
using __c = ::GlobalNamespace::______System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c;

/// @brief Convert operator to ::System::Threading::Tasks::Sources::IValueTaskSource
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource() const noexcept;

/// @brief Convert operator to ::System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd8};

virtual ~____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs", modifiers: " const&", def_value: None }]
constexpr ____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs(____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs", modifiers: "&&", def_value: None }]
constexpr ____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs(____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs(void* ptr) noexcept : ::System::Net::Sockets::SocketAsyncEventArgs(ptr) {
}


  constexpr ____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs& operator=(____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs&& o) noexcept = default;
  constexpr ____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs& operator=(____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs const& o) noexcept = default;
                


// Fields

static ::System::Net::Sockets::____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs __declspec(property(get=__get_Reserved, put=__set_Reserved))  Reserved;

static void __set_Reserved(::System::Net::Sockets::____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs value) ;

static ::System::Net::Sockets::____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs __get_Reserved() ;

static ::System::Action_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_s_completedSentinel, put=__set_s_completedSentinel))  s_completedSentinel;

static void __set_s_completedSentinel(::System::Action_1<::bs_hook::Il2CppWrapperType> value) ;

static ::System::Action_1<::bs_hook::Il2CppWrapperType> __get_s_completedSentinel() ;

static ::System::Action_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_s_availableSentinel, put=__set_s_availableSentinel))  s_availableSentinel;

static void __set_s_availableSentinel(::System::Action_1<::bs_hook::Il2CppWrapperType> value) ;

static ::System::Action_1<::bs_hook::Il2CppWrapperType> __get_s_availableSentinel() ;

 ::System::Action_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__continuation, put=__set__continuation))  _continuation;

constexpr void __set__continuation(::System::Action_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::System::Action_1<::bs_hook::Il2CppWrapperType> __get__continuation() const;

 ::System::Threading::ExecutionContext __declspec(property(get=__get__executionContext, put=__set__executionContext))  _executionContext;

constexpr void __set__executionContext(::System::Threading::ExecutionContext value) ;

constexpr ::System::Threading::ExecutionContext __get__executionContext() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__scheduler, put=__set__scheduler))  _scheduler;

constexpr void __set__scheduler(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__scheduler() const;

 int16_t __declspec(property(get=__get__token, put=__set__token))  _token;

constexpr void __set__token(int16_t value) ;

constexpr int16_t __get__token() const;

 bool __declspec(property(get=__get__WrapExceptionsInIOExceptions_k__BackingField, put=__set__WrapExceptionsInIOExceptions_k__BackingField))  _WrapExceptionsInIOExceptions_k__BackingField;

constexpr void __set__WrapExceptionsInIOExceptions_k__BackingField(bool value) ;

constexpr bool __get__WrapExceptionsInIOExceptions_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_WrapExceptionsInIOExceptions, put=set_WrapExceptionsInIOExceptions))  WrapExceptionsInIOExceptions;


// Methods

// Ctor Parameters []
explicit ____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs() ;

/// @brief Method .ctor addr 0x286ba34 size 0x6c virtual false final false
 void _ctor() ;

/// @brief Method get_WrapExceptionsInIOExceptions addr 0x286baa0 size 0x8 virtual false final false
 bool get_WrapExceptionsInIOExceptions() ;

/// @brief Method set_WrapExceptionsInIOExceptions addr 0x286baa8 size 0xc virtual false final false
 void set_WrapExceptionsInIOExceptions(bool value) ;

/// @brief Method Reserve addr 0x2862974 size 0x80 virtual false final false
 bool Reserve() ;

/// @brief Method Release addr 0x286bab4 size 0x70 virtual false final false
 void Release() ;

/// @brief Method OnCompleted addr 0x286bb24 size 0x200 virtual true final false
 void OnCompleted(::System::Net::Sockets::SocketAsyncEventArgs _) ;

/// @brief Method ReceiveAsync addr 0x28629f4 size 0xa0 virtual false final false
 ::System::Threading::Tasks::ValueTask_1<int32_t> ReceiveAsync(::System::Net::Sockets::Socket socket) ;

/// @brief Method SendAsyncForNetworkStream addr 0x2862e5c size 0x6c virtual false final false
 ::System::Threading::Tasks::ValueTask SendAsyncForNetworkStream(::System::Net::Sockets::Socket socket) ;

/// @brief Method GetStatus addr 0x286c0f4 size 0x94 virtual true final true
 ::System::Threading::Tasks::Sources::ValueTaskSourceStatus GetStatus(int16_t token) ;

/// @brief Method OnCompleted addr 0x286c1d8 size 0x210 virtual true final true
 void OnCompleted(::System::Action_1<::bs_hook::Il2CppWrapperType> continuation, ::bs_hook::Il2CppWrapperType state, int16_t token, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags) ;

/// @brief Method InvokeContinuation addr 0x286bd24 size 0x2e0 virtual false final false
 void InvokeContinuation(::System::Action_1<::bs_hook::Il2CppWrapperType> continuation, ::bs_hook::Il2CppWrapperType state, bool forceAsync) ;

/// @brief Method GetResult addr 0x286c438 size 0x48 virtual true final true
 int32_t GetResult(int16_t token) ;

/// @brief Method System.Threading.Tasks.Sources.IValueTaskSource.GetResult addr 0x286c4a4 size 0x40 virtual true final true
 void System_Threading_Tasks_Sources_IValueTaskSource_GetResult(int16_t token) ;

/// @brief Method ThrowIncorrectTokenException addr 0x286c188 size 0x50 virtual false final false
 void ThrowIncorrectTokenException() ;

/// @brief Method ThrowMultipleContinuationsException addr 0x286c3e8 size 0x50 virtual false final false
 void ThrowMultipleContinuationsException() ;

/// @brief Method ThrowException addr 0x286c480 size 0x24 virtual false final false
 void ThrowException(::System::Net::Sockets::SocketError error) ;

/// @brief Method CreateException addr 0x286c004 size 0xf0 virtual false final false
 ::System::Exception CreateException(::System::Net::Sockets::SocketError error) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
// Type: ::WSABUF
namespace System::Net::Sockets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8181))
// CS Name: System.Net.Sockets.Socket::WSABUF
struct CORDL_TYPE ____System__Net__Sockets__Socket__WSABUF : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "len", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "buf", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr ____System__Net__Sockets__Socket__WSABUF(int32_t len, ::cordl_internals::intptr_t buf) noexcept;


                    constexpr ____System__Net__Sockets__Socket__WSABUF(____System__Net__Sockets__Socket__WSABUF const&) = default;
                    constexpr ____System__Net__Sockets__Socket__WSABUF(____System__Net__Sockets__Socket__WSABUF&&) = default;
                    constexpr ____System__Net__Sockets__Socket__WSABUF& operator=(____System__Net__Sockets__Socket__WSABUF const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Net__Sockets__Socket__WSABUF& operator=(____System__Net__Sockets__Socket__WSABUF&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__Sockets__Socket__WSABUF(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_len, put=__set_len))  len;

constexpr void __set_len(int32_t value) ;

constexpr int32_t __get_len() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_buf, put=__set_buf))  buf;

constexpr void __set_buf(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_buf() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
// Type: ::<>c
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8182))
// CS Name: System.Net.Sockets.Socket::<>c
class CORDL_TYPE ____System__Net__Sockets__Socket____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____System__Net__Sockets__Socket____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__Sockets__Socket____c", modifiers: " const&", def_value: None }]
constexpr ____System__Net__Sockets__Socket____c(____System__Net__Sockets__Socket____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__Sockets__Socket____c", modifiers: "&&", def_value: None }]
constexpr ____System__Net__Sockets__Socket____c(____System__Net__Sockets__Socket____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__Sockets__Socket____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Net__Sockets__Socket____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Net__Sockets__Socket____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Net__Sockets__Socket____c& operator=(____System__Net__Sockets__Socket____c&& o) noexcept = default;
  constexpr ____System__Net__Sockets__Socket____c& operator=(____System__Net__Sockets__Socket____c const& o) noexcept = default;
                


// Fields

static ::System::Net::Sockets::____System__Net__Sockets__Socket____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::System::Net::Sockets::____System__Net__Sockets__Socket____c value) ;

static ::System::Net::Sockets::____System__Net__Sockets__Socket____c __get___9() ;

static ::System::Func_1<::System::Net::Sockets::____System__Net__Sockets__Socket__CachedEventArgs> __declspec(property(get=__get___9__14_0, put=__set___9__14_0))  __9__14_0;

static void __set___9__14_0(::System::Func_1<::System::Net::Sockets::____System__Net__Sockets__Socket__CachedEventArgs> value) ;

static ::System::Func_1<::System::Net::Sockets::____System__Net__Sockets__Socket__CachedEventArgs> __get___9__14_0() ;

static ::System::Func_1<::System::Net::Sockets::____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs> __declspec(property(get=__get___9__14_1, put=__set___9__14_1))  __9__14_1;

static void __set___9__14_1(::System::Func_1<::System::Net::Sockets::____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs> value) ;

static ::System::Func_1<::System::Net::Sockets::____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs> __get___9__14_1() ;

static ::System::AsyncCallback __declspec(property(get=__get___9__15_0, put=__set___9__15_0))  __9__15_0;

static void __set___9__15_0(::System::AsyncCallback value) ;

static ::System::AsyncCallback __get___9__15_0() ;

static ::System::AsyncCallback __declspec(property(get=__get___9__15_1, put=__set___9__15_1))  __9__15_1;

static void __set___9__15_1(::System::AsyncCallback value) ;

static ::System::AsyncCallback __get___9__15_1() ;

static ::System::Func_1<::System::Net::Sockets::____System__Net__Sockets__Socket__CachedEventArgs> __declspec(property(get=__get___9__22_0, put=__set___9__22_0))  __9__22_0;

static void __set___9__22_0(::System::Func_1<::System::Net::Sockets::____System__Net__Sockets__Socket__CachedEventArgs> value) ;

static ::System::Func_1<::System::Net::Sockets::____System__Net__Sockets__Socket__CachedEventArgs> __get___9__22_0() ;

static ::System::Func_1<::System::Net::Sockets::____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs> __declspec(property(get=__get___9__22_1, put=__set___9__22_1))  __9__22_1;

static void __set___9__22_1(::System::Func_1<::System::Net::Sockets::____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs> value) ;

static ::System::Func_1<::System::Net::Sockets::____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs> __get___9__22_1() ;

static ::System::AsyncCallback __declspec(property(get=__get___9__23_0, put=__set___9__23_0))  __9__23_0;

static void __set___9__23_0(::System::AsyncCallback value) ;

static ::System::AsyncCallback __get___9__23_0() ;

static ::System::AsyncCallback __declspec(property(get=__get___9__23_1, put=__set___9__23_1))  __9__23_1;

static void __set___9__23_1(::System::AsyncCallback value) ;

static ::System::AsyncCallback __get___9__23_1() ;

static ::System::IOAsyncCallback __declspec(property(get=__get___9__295_0, put=__set___9__295_0))  __9__295_0;

static void __set___9__295_0(::System::IOAsyncCallback value) ;

static ::System::IOAsyncCallback __get___9__295_0() ;

static ::System::IOAsyncCallback __declspec(property(get=__get___9__297_0, put=__set___9__297_0))  __9__297_0;

static void __set___9__297_0(::System::IOAsyncCallback value) ;

static ::System::IOAsyncCallback __get___9__297_0() ;


// Methods

// Ctor Parameters []
explicit ____System__Net__Sockets__Socket____c() ;

/// @brief Method .ctor addr 0x2766680 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ReceiveAsync>b__14_0 addr 0x2766688 size 0x5c virtual false final false
 ::System::Net::Sockets::____System__Net__Sockets__Socket__CachedEventArgs _ReceiveAsync_b__14_0() ;

/// @brief Method <ReceiveAsync>b__14_1 addr 0x27666e4 size 0x5c virtual false final false
 ::System::Net::Sockets::____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs _ReceiveAsync_b__14_1() ;

/// @brief Method <ReceiveAsyncApm>b__15_0 addr 0x2766740 size 0x238 virtual false final false
 void _ReceiveAsyncApm_b__15_0(::System::IAsyncResult iar) ;

/// @brief Method <ReceiveAsyncApm>b__15_1 addr 0x2766978 size 0x434 virtual false final false
 void _ReceiveAsyncApm_b__15_1(::System::IAsyncResult iar) ;

/// @brief Method <SendAsyncForNetworkStream>b__22_0 addr 0x2766dac size 0x5c virtual false final false
 ::System::Net::Sockets::____System__Net__Sockets__Socket__CachedEventArgs _SendAsyncForNetworkStream_b__22_0() ;

/// @brief Method <SendAsyncForNetworkStream>b__22_1 addr 0x2766e08 size 0x5c virtual false final false
 ::System::Net::Sockets::____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs _SendAsyncForNetworkStream_b__22_1() ;

/// @brief Method <SendAsyncApm>b__23_0 addr 0x2766e64 size 0x238 virtual false final false
 void _SendAsyncApm_b__23_0(::System::IAsyncResult iar) ;

/// @brief Method <SendAsyncApm>b__23_1 addr 0x276709c size 0x304 virtual false final false
 void _SendAsyncApm_b__23_1(::System::IAsyncResult iar) ;

/// @brief Method <SendAsync>b__295_0 addr 0x27673a0 size 0x94 virtual false final false
 void _SendAsync_b__295_0(::System::IOAsyncResult s) ;

/// @brief Method <BeginSend>b__297_0 addr 0x2767434 size 0x94 virtual false final false
 void _BeginSend_b__297_0(::System::IOAsyncResult s) ;

/// @brief Method <.cctor>b__367_0 addr 0x27674c8 size 0xf8 virtual false final false
 void __cctor_b__367_0(::bs_hook::Il2CppWrapperType s, ::System::Net::Sockets::SocketAsyncEventArgs e) ;

/// @brief Method <.cctor>b__367_1 addr 0x27675c0 size 0xe0 virtual false final false
 void __cctor_b__367_1(::bs_hook::Il2CppWrapperType s, ::System::Net::Sockets::SocketAsyncEventArgs e) ;

/// @brief Method <.cctor>b__367_2 addr 0x27676a0 size 0xe0 virtual false final false
 void __cctor_b__367_2(::bs_hook::Il2CppWrapperType s, ::System::Net::Sockets::SocketAsyncEventArgs e) ;

/// @brief Method <.cctor>b__367_3 addr 0x2767780 size 0x284 virtual false final false
 void __cctor_b__367_3(::System::IAsyncResult ares) ;

/// @brief Method <.cctor>b__367_4 addr 0x2767a0c size 0x12c virtual false final false
 void __cctor_b__367_4(::System::IOAsyncResult ares) ;

/// @brief Method <.cctor>b__367_5 addr 0x2767b48 size 0x238 virtual false final false
 void __cctor_b__367_5(::System::IOAsyncResult ares) ;

/// @brief Method <.cctor>b__367_6 addr 0x2767d94 size 0x290 virtual false final false
 void __cctor_b__367_6(::System::IAsyncResult ares) ;

/// @brief Method <.cctor>b__367_7 addr 0x2768024 size 0x29c virtual false final false
 void __cctor_b__367_7(::System::IOAsyncResult ares) ;

/// @brief Method <.cctor>b__367_8 addr 0x27684b0 size 0x290 virtual false final false
 void __cctor_b__367_8(::System::IAsyncResult ares) ;

/// @brief Method <.cctor>b__367_9 addr 0x2768740 size 0x100 virtual false final false
 void __cctor_b__367_9(::System::IOAsyncResult ares) ;

/// @brief Method <.cctor>b__367_10 addr 0x2768840 size 0x290 virtual false final false
 void __cctor_b__367_10(::System::IAsyncResult ares) ;

/// @brief Method <.cctor>b__367_11 addr 0x2768ad8 size 0x2a8 virtual false final false
 void __cctor_b__367_11(::System::IOAsyncResult ares) ;

/// @brief Method <.cctor>b__367_12 addr 0x2768d88 size 0x10c virtual false final false
 void __cctor_b__367_12(::System::IOAsyncResult ares) ;

/// @brief Method <.cctor>b__367_13 addr 0x2768e94 size 0x2b4 virtual false final false
 void __cctor_b__367_13(::System::IAsyncResult ares) ;

/// @brief Method <.cctor>b__367_14 addr 0x2769148 size 0x17c virtual false final false
 void __cctor_b__367_14(::System::IOAsyncResult ares) ;

/// @brief Method <.cctor>b__367_15 addr 0x27692cc size 0x290 virtual false final false
 void __cctor_b__367_15(::System::IAsyncResult ares) ;

/// @brief Method <.cctor>b__367_16 addr 0x276955c size 0x10c virtual false final false
 void __cctor_b__367_16(::System::IOAsyncResult ares) ;

/// @brief Method <.cctor>b__367_17 addr 0x2769668 size 0x290 virtual false final false
 void __cctor_b__367_17(::System::IAsyncResult ares) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
// Type: ::<>c__DisplayClass240_0
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8183))
// CS Name: System.Net.Sockets.Socket::<>c__DisplayClass240_0
class CORDL_TYPE ____System__Net__Sockets__Socket____c__DisplayClass240_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____System__Net__Sockets__Socket____c__DisplayClass240_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__Sockets__Socket____c__DisplayClass240_0", modifiers: " const&", def_value: None }]
constexpr ____System__Net__Sockets__Socket____c__DisplayClass240_0(____System__Net__Sockets__Socket____c__DisplayClass240_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__Sockets__Socket____c__DisplayClass240_0", modifiers: "&&", def_value: None }]
constexpr ____System__Net__Sockets__Socket____c__DisplayClass240_0(____System__Net__Sockets__Socket____c__DisplayClass240_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__Sockets__Socket____c__DisplayClass240_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Net__Sockets__Socket____c__DisplayClass240_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Net__Sockets__Socket____c__DisplayClass240_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Net__Sockets__Socket____c__DisplayClass240_0& operator=(____System__Net__Sockets__Socket____c__DisplayClass240_0&& o) noexcept = default;
  constexpr ____System__Net__Sockets__Socket____c__DisplayClass240_0& operator=(____System__Net__Sockets__Socket____c__DisplayClass240_0 const& o) noexcept = default;
                


// Fields

 ::System::Net::Sockets::SocketAsyncResult __declspec(property(get=__get_sockares, put=__set_sockares))  sockares;

constexpr void __set_sockares(::System::Net::Sockets::SocketAsyncResult value) ;

constexpr ::System::Net::Sockets::SocketAsyncResult __get_sockares() const;


// Methods

// Ctor Parameters []
explicit ____System__Net__Sockets__Socket____c__DisplayClass240_0() ;

/// @brief Method .ctor addr 0x27698f8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <BeginConnect>b__0 addr 0x2769900 size 0x120 virtual false final false
 void _BeginConnect_b__0(::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress>> t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
// Type: ::<>c__DisplayClass298_0
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8184))
// CS Name: System.Net.Sockets.Socket::<>c__DisplayClass298_0
class CORDL_TYPE ____System__Net__Sockets__Socket____c__DisplayClass298_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____System__Net__Sockets__Socket____c__DisplayClass298_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__Sockets__Socket____c__DisplayClass298_0", modifiers: " const&", def_value: None }]
constexpr ____System__Net__Sockets__Socket____c__DisplayClass298_0(____System__Net__Sockets__Socket____c__DisplayClass298_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__Sockets__Socket____c__DisplayClass298_0", modifiers: "&&", def_value: None }]
constexpr ____System__Net__Sockets__Socket____c__DisplayClass298_0(____System__Net__Sockets__Socket____c__DisplayClass298_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__Sockets__Socket____c__DisplayClass298_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Net__Sockets__Socket____c__DisplayClass298_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Net__Sockets__Socket____c__DisplayClass298_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Net__Sockets__Socket____c__DisplayClass298_0& operator=(____System__Net__Sockets__Socket____c__DisplayClass298_0&& o) noexcept = default;
  constexpr ____System__Net__Sockets__Socket____c__DisplayClass298_0& operator=(____System__Net__Sockets__Socket____c__DisplayClass298_0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_sent_so_far, put=__set_sent_so_far))  sent_so_far;

constexpr void __set_sent_so_far(int32_t value) ;

constexpr int32_t __get_sent_so_far() const;


// Methods

// Ctor Parameters []
explicit ____System__Net__Sockets__Socket____c__DisplayClass298_0() ;

/// @brief Method .ctor addr 0x2769a20 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <BeginSendCallback>b__0 addr 0x2769a28 size 0xa4 virtual false final false
 void _BeginSendCallback_b__0(::System::IOAsyncResult s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
// Type: ::<>c__DisplayClass355_0
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8185))
// CS Name: System.Net.Sockets.Socket::<>c__DisplayClass355_0
class CORDL_TYPE ____System__Net__Sockets__Socket____c__DisplayClass355_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____System__Net__Sockets__Socket____c__DisplayClass355_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__Sockets__Socket____c__DisplayClass355_0", modifiers: " const&", def_value: None }]
constexpr ____System__Net__Sockets__Socket____c__DisplayClass355_0(____System__Net__Sockets__Socket____c__DisplayClass355_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__Sockets__Socket____c__DisplayClass355_0", modifiers: "&&", def_value: None }]
constexpr ____System__Net__Sockets__Socket____c__DisplayClass355_0(____System__Net__Sockets__Socket____c__DisplayClass355_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__Sockets__Socket____c__DisplayClass355_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Net__Sockets__Socket____c__DisplayClass355_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Net__Sockets__Socket____c__DisplayClass355_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Net__Sockets__Socket____c__DisplayClass355_0& operator=(____System__Net__Sockets__Socket____c__DisplayClass355_0&& o) noexcept = default;
  constexpr ____System__Net__Sockets__Socket____c__DisplayClass355_0& operator=(____System__Net__Sockets__Socket____c__DisplayClass355_0 const& o) noexcept = default;
                


// Fields

 ::System::Net::Sockets::Socket __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Net::Sockets::Socket value) ;

constexpr ::System::Net::Sockets::Socket __get___4__this() const;

 ::System::IOSelectorJob __declspec(property(get=__get_job, put=__set_job))  job;

constexpr void __set_job(::System::IOSelectorJob value) ;

constexpr ::System::IOSelectorJob __get_job() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_handle, put=__set_handle))  handle;

constexpr void __set_handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_handle() const;


// Methods

// Ctor Parameters []
explicit ____System__Net__Sockets__Socket____c__DisplayClass355_0() ;

/// @brief Method .ctor addr 0x2769acc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <QueueIOSelectorJob>b__0 addr 0x2769ad4 size 0x44 virtual false final false
 void _QueueIOSelectorJob_b__0(::System::Threading::Tasks::Task t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
// Type: System.Net.Sockets::Socket
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8186))
// CS Name: System.Net.Sockets.Socket
class CORDL_TYPE Socket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass355_0 = ::System::Net::Sockets::____System__Net__Sockets__Socket____c__DisplayClass355_0;

using __c__DisplayClass298_0 = ::System::Net::Sockets::____System__Net__Sockets__Socket____c__DisplayClass298_0;

using __c__DisplayClass240_0 = ::System::Net::Sockets::____System__Net__Sockets__Socket____c__DisplayClass240_0;

using __c = ::System::Net::Sockets::____System__Net__Sockets__Socket____c;

using WSABUF = ::System::Net::Sockets::____System__Net__Sockets__Socket__WSABUF;

using AwaitableSocketAsyncEventArgs = ::System::Net::Sockets::____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs;

using Int32TaskSocketAsyncEventArgs = ::System::Net::Sockets::____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs;

template<typename TResult>
using TaskSocketAsyncEventArgs_1 = ::System::Net::Sockets::____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<TResult>;

using CachedEventArgs = ::System::Net::Sockets::____System__Net__Sockets__Socket__CachedEventArgs;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~Socket() = default;

// Ctor Parameters [CppParam { name: "", ty: "Socket", modifiers: " const&", def_value: None }]
constexpr Socket(Socket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Socket", modifiers: "&&", def_value: None }]
constexpr Socket(Socket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Socket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Socket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Socket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Socket& operator=(Socket&& o) noexcept = default;
  constexpr Socket& operator=(Socket const& o) noexcept = default;
                


// Fields

static ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs> __declspec(property(get=__get_AcceptCompletedHandler, put=__set_AcceptCompletedHandler))  AcceptCompletedHandler;

static void __set_AcceptCompletedHandler(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs> value) ;

static ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs> __get_AcceptCompletedHandler() ;

static ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs> __declspec(property(get=__get_ReceiveCompletedHandler, put=__set_ReceiveCompletedHandler))  ReceiveCompletedHandler;

static void __set_ReceiveCompletedHandler(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs> value) ;

static ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs> __get_ReceiveCompletedHandler() ;

static ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs> __declspec(property(get=__get_SendCompletedHandler, put=__set_SendCompletedHandler))  SendCompletedHandler;

static void __set_SendCompletedHandler(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs> value) ;

static ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs> __get_SendCompletedHandler() ;

static ::System::Net::Sockets::____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket> __declspec(property(get=__get_s_rentedSocketSentinel, put=__set_s_rentedSocketSentinel))  s_rentedSocketSentinel;

static void __set_s_rentedSocketSentinel(::System::Net::Sockets::____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket> value) ;

static ::System::Net::Sockets::____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket> __get_s_rentedSocketSentinel() ;

static ::System::Net::Sockets::____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs __declspec(property(get=__get_s_rentedInt32Sentinel, put=__set_s_rentedInt32Sentinel))  s_rentedInt32Sentinel;

static void __set_s_rentedInt32Sentinel(::System::Net::Sockets::____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs value) ;

static ::System::Net::Sockets::____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs __get_s_rentedInt32Sentinel() ;

static ::System::Threading::Tasks::Task_1<int32_t> __declspec(property(get=__get_s_zeroTask, put=__set_s_zeroTask))  s_zeroTask;

static void __set_s_zeroTask(::System::Threading::Tasks::Task_1<int32_t> value) ;

static ::System::Threading::Tasks::Task_1<int32_t> __get_s_zeroTask() ;

 ::System::Net::Sockets::____System__Net__Sockets__Socket__CachedEventArgs __declspec(property(get=__get__cachedTaskEventArgs, put=__set__cachedTaskEventArgs))  _cachedTaskEventArgs;

constexpr void __set__cachedTaskEventArgs(::System::Net::Sockets::____System__Net__Sockets__Socket__CachedEventArgs value) ;

constexpr ::System::Net::Sockets::____System__Net__Sockets__Socket__CachedEventArgs __get__cachedTaskEventArgs() const;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_s_InternalSyncObject, put=__set_s_InternalSyncObject))  s_InternalSyncObject;

static void __set_s_InternalSyncObject(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_s_InternalSyncObject() ;

static bool __declspec(property(get=__get_s_SupportsIPv4, put=__set_s_SupportsIPv4))  s_SupportsIPv4;

static void __set_s_SupportsIPv4(bool value) ;

static bool __get_s_SupportsIPv4() ;

static bool __declspec(property(get=__get_s_SupportsIPv6, put=__set_s_SupportsIPv6))  s_SupportsIPv6;

static void __set_s_SupportsIPv6(bool value) ;

static bool __get_s_SupportsIPv6() ;

static bool __declspec(property(get=__get_s_OSSupportsIPv6, put=__set_s_OSSupportsIPv6))  s_OSSupportsIPv6;

static void __set_s_OSSupportsIPv6(bool value) ;

static bool __get_s_OSSupportsIPv6() ;

static bool __declspec(property(get=__get_s_Initialized, put=__set_s_Initialized))  s_Initialized;

static void __set_s_Initialized(bool value) ;

static bool __get_s_Initialized() ;

static bool __declspec(property(get=__get_s_LoggingEnabled, put=__set_s_LoggingEnabled))  s_LoggingEnabled;

static void __set_s_LoggingEnabled(bool value) ;

static bool __get_s_LoggingEnabled() ;

static bool __declspec(property(get=__get_s_PerfCountersEnabled, put=__set_s_PerfCountersEnabled))  s_PerfCountersEnabled;

static void __set_s_PerfCountersEnabled(bool value) ;

static bool __get_s_PerfCountersEnabled() ;

/// @brief Field DefaultCloseTimeout offset 0
static constexpr int32_t  DefaultCloseTimeout{-1};

/// @brief Field SOCKET_CLOSED_CODE offset 0
static constexpr int32_t  SOCKET_CLOSED_CODE{10004};

/// @brief Field TIMEOUT_EXCEPTION_MSG offset 0
static constexpr ::ConstString  TIMEOUT_EXCEPTION_MSG{u"A connection attempt failed because the connected party did not properly respondafter a period of time, or established connection failed because connected host has failed to respond"};

 bool __declspec(property(get=__get_is_closed, put=__set_is_closed))  is_closed;

constexpr void __set_is_closed(bool value) ;

constexpr bool __get_is_closed() const;

 bool __declspec(property(get=__get_is_listening, put=__set_is_listening))  is_listening;

constexpr void __set_is_listening(bool value) ;

constexpr bool __get_is_listening() const;

 bool __declspec(property(get=__get_useOverlappedIO, put=__set_useOverlappedIO))  useOverlappedIO;

constexpr void __set_useOverlappedIO(bool value) ;

constexpr bool __get_useOverlappedIO() const;

 int32_t __declspec(property(get=__get_linger_timeout, put=__set_linger_timeout))  linger_timeout;

constexpr void __set_linger_timeout(int32_t value) ;

constexpr int32_t __get_linger_timeout() const;

 ::System::Net::Sockets::AddressFamily __declspec(property(get=__get_addressFamily, put=__set_addressFamily))  addressFamily;

constexpr void __set_addressFamily(::System::Net::Sockets::AddressFamily value) ;

constexpr ::System::Net::Sockets::AddressFamily __get_addressFamily() const;

 ::System::Net::Sockets::SocketType __declspec(property(get=__get_socketType, put=__set_socketType))  socketType;

constexpr void __set_socketType(::System::Net::Sockets::SocketType value) ;

constexpr ::System::Net::Sockets::SocketType __get_socketType() const;

 ::System::Net::Sockets::ProtocolType __declspec(property(get=__get_protocolType, put=__set_protocolType))  protocolType;

constexpr void __set_protocolType(::System::Net::Sockets::ProtocolType value) ;

constexpr ::System::Net::Sockets::ProtocolType __get_protocolType() const;

 ::System::Net::Sockets::SafeSocketHandle __declspec(property(get=__get_m_Handle, put=__set_m_Handle))  m_Handle;

constexpr void __set_m_Handle(::System::Net::Sockets::SafeSocketHandle value) ;

constexpr ::System::Net::Sockets::SafeSocketHandle __get_m_Handle() const;

 ::System::Net::EndPoint __declspec(property(get=__get_seed_endpoint, put=__set_seed_endpoint))  seed_endpoint;

constexpr void __set_seed_endpoint(::System::Net::EndPoint value) ;

constexpr ::System::Net::EndPoint __get_seed_endpoint() const;

 ::System::Threading::SemaphoreSlim __declspec(property(get=__get_ReadSem, put=__set_ReadSem))  ReadSem;

constexpr void __set_ReadSem(::System::Threading::SemaphoreSlim value) ;

constexpr ::System::Threading::SemaphoreSlim __get_ReadSem() const;

 ::System::Threading::SemaphoreSlim __declspec(property(get=__get_WriteSem, put=__set_WriteSem))  WriteSem;

constexpr void __set_WriteSem(::System::Threading::SemaphoreSlim value) ;

constexpr ::System::Threading::SemaphoreSlim __get_WriteSem() const;

 bool __declspec(property(get=__get_is_blocking, put=__set_is_blocking))  is_blocking;

constexpr void __set_is_blocking(bool value) ;

constexpr bool __get_is_blocking() const;

 bool __declspec(property(get=__get_is_bound, put=__set_is_bound))  is_bound;

constexpr void __set_is_bound(bool value) ;

constexpr bool __get_is_bound() const;

 bool __declspec(property(get=__get_is_connected, put=__set_is_connected))  is_connected;

constexpr void __set_is_connected(bool value) ;

constexpr bool __get_is_connected() const;

 int32_t __declspec(property(get=__get_m_IntCleanedUp, put=__set_m_IntCleanedUp))  m_IntCleanedUp;

constexpr void __set_m_IntCleanedUp(int32_t value) ;

constexpr int32_t __get_m_IntCleanedUp() const;

 bool __declspec(property(get=__get_connect_in_progress, put=__set_connect_in_progress))  connect_in_progress;

constexpr void __set_connect_in_progress(bool value) ;

constexpr bool __get_connect_in_progress() const;

 int32_t __declspec(property(get=__get_ID, put=__set_ID))  ID;

constexpr void __set_ID(int32_t value) ;

constexpr int32_t __get_ID() const;

static ::System::AsyncCallback __declspec(property(get=__get_AcceptAsyncCallback, put=__set_AcceptAsyncCallback))  AcceptAsyncCallback;

static void __set_AcceptAsyncCallback(::System::AsyncCallback value) ;

static ::System::AsyncCallback __get_AcceptAsyncCallback() ;

static ::System::IOAsyncCallback __declspec(property(get=__get_BeginAcceptCallback, put=__set_BeginAcceptCallback))  BeginAcceptCallback;

static void __set_BeginAcceptCallback(::System::IOAsyncCallback value) ;

static ::System::IOAsyncCallback __get_BeginAcceptCallback() ;

static ::System::IOAsyncCallback __declspec(property(get=__get_BeginAcceptReceiveCallback, put=__set_BeginAcceptReceiveCallback))  BeginAcceptReceiveCallback;

static void __set_BeginAcceptReceiveCallback(::System::IOAsyncCallback value) ;

static ::System::IOAsyncCallback __get_BeginAcceptReceiveCallback() ;

static ::System::AsyncCallback __declspec(property(get=__get_ConnectAsyncCallback, put=__set_ConnectAsyncCallback))  ConnectAsyncCallback;

static void __set_ConnectAsyncCallback(::System::AsyncCallback value) ;

static ::System::AsyncCallback __get_ConnectAsyncCallback() ;

static ::System::IOAsyncCallback __declspec(property(get=__get_BeginConnectCallback, put=__set_BeginConnectCallback))  BeginConnectCallback;

static void __set_BeginConnectCallback(::System::IOAsyncCallback value) ;

static ::System::IOAsyncCallback __get_BeginConnectCallback() ;

static ::System::AsyncCallback __declspec(property(get=__get_DisconnectAsyncCallback, put=__set_DisconnectAsyncCallback))  DisconnectAsyncCallback;

static void __set_DisconnectAsyncCallback(::System::AsyncCallback value) ;

static ::System::AsyncCallback __get_DisconnectAsyncCallback() ;

static ::System::IOAsyncCallback __declspec(property(get=__get_BeginDisconnectCallback, put=__set_BeginDisconnectCallback))  BeginDisconnectCallback;

static void __set_BeginDisconnectCallback(::System::IOAsyncCallback value) ;

static ::System::IOAsyncCallback __get_BeginDisconnectCallback() ;

static ::System::AsyncCallback __declspec(property(get=__get_ReceiveAsyncCallback, put=__set_ReceiveAsyncCallback))  ReceiveAsyncCallback;

static void __set_ReceiveAsyncCallback(::System::AsyncCallback value) ;

static ::System::AsyncCallback __get_ReceiveAsyncCallback() ;

static ::System::IOAsyncCallback __declspec(property(get=__get_BeginReceiveCallback, put=__set_BeginReceiveCallback))  BeginReceiveCallback;

static void __set_BeginReceiveCallback(::System::IOAsyncCallback value) ;

static ::System::IOAsyncCallback __get_BeginReceiveCallback() ;

static ::System::IOAsyncCallback __declspec(property(get=__get_BeginReceiveGenericCallback, put=__set_BeginReceiveGenericCallback))  BeginReceiveGenericCallback;

static void __set_BeginReceiveGenericCallback(::System::IOAsyncCallback value) ;

static ::System::IOAsyncCallback __get_BeginReceiveGenericCallback() ;

static ::System::AsyncCallback __declspec(property(get=__get_ReceiveFromAsyncCallback, put=__set_ReceiveFromAsyncCallback))  ReceiveFromAsyncCallback;

static void __set_ReceiveFromAsyncCallback(::System::AsyncCallback value) ;

static ::System::AsyncCallback __get_ReceiveFromAsyncCallback() ;

static ::System::IOAsyncCallback __declspec(property(get=__get_BeginReceiveFromCallback, put=__set_BeginReceiveFromCallback))  BeginReceiveFromCallback;

static void __set_BeginReceiveFromCallback(::System::IOAsyncCallback value) ;

static ::System::IOAsyncCallback __get_BeginReceiveFromCallback() ;

static ::System::AsyncCallback __declspec(property(get=__get_SendAsyncCallback, put=__set_SendAsyncCallback))  SendAsyncCallback;

static void __set_SendAsyncCallback(::System::AsyncCallback value) ;

static ::System::AsyncCallback __get_SendAsyncCallback() ;

static ::System::IOAsyncCallback __declspec(property(get=__get_BeginSendGenericCallback, put=__set_BeginSendGenericCallback))  BeginSendGenericCallback;

static void __set_BeginSendGenericCallback(::System::IOAsyncCallback value) ;

static ::System::IOAsyncCallback __get_BeginSendGenericCallback() ;

static ::System::AsyncCallback __declspec(property(get=__get_SendToAsyncCallback, put=__set_SendToAsyncCallback))  SendToAsyncCallback;

static void __set_SendToAsyncCallback(::System::AsyncCallback value) ;

static ::System::AsyncCallback __get_SendToAsyncCallback() ;


// Properties

static bool __declspec(property(get=get_OSSupportsIPv4))  OSSupportsIPv4;

static bool __declspec(property(get=get_OSSupportsIPv6))  OSSupportsIPv6;

 ::cordl_internals::intptr_t __declspec(property(get=get_Handle))  Handle;

 ::System::Net::Sockets::AddressFamily __declspec(property(get=get_AddressFamily))  AddressFamily;

 ::System::Net::Sockets::SocketType __declspec(property(get=get_SocketType))  SocketType;

 ::System::Net::Sockets::ProtocolType __declspec(property(get=get_ProtocolType))  ProtocolType;

 bool __declspec(property(put=set_ExclusiveAddressUse))  ExclusiveAddressUse;

 int32_t __declspec(property(put=set_ReceiveBufferSize))  ReceiveBufferSize;

 int32_t __declspec(property(put=set_SendBufferSize))  SendBufferSize;

 int32_t __declspec(property(put=set_ReceiveTimeout))  ReceiveTimeout;

 int32_t __declspec(property(put=set_SendTimeout))  SendTimeout;

 int16_t __declspec(property(get=get_Ttl, put=set_Ttl))  Ttl;

 bool __declspec(property(put=set_DontFragment))  DontFragment;

 bool __declspec(property(get=get_DualMode, put=set_DualMode))  DualMode;

 bool __declspec(property(get=get_IsDualMode))  IsDualMode;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=get_InternalSyncObject))  InternalSyncObject;

 bool __declspec(property(get=get_CleanedUp))  CleanedUp;

 int32_t __declspec(property(get=get_Available))  Available;

 bool __declspec(property(put=set_EnableBroadcast))  EnableBroadcast;

 bool __declspec(property(get=get_IsBound))  IsBound;

 ::System::Net::EndPoint __declspec(property(get=get_LocalEndPoint))  LocalEndPoint;

 bool __declspec(property(get=get_Blocking, put=set_Blocking))  Blocking;

 bool __declspec(property(get=get_Connected))  Connected;

 bool __declspec(property(put=set_NoDelay))  NoDelay;

 ::System::Net::EndPoint __declspec(property(get=get_RemoteEndPoint))  RemoteEndPoint;

static int32_t __declspec(property(get=get_FamilyHint))  FamilyHint;


// Methods

/// @brief Method ReceiveAsync addr 0x2861914 size 0x2bc virtual false final false
 ::System::Threading::Tasks::ValueTask_1<int32_t> ReceiveAsync(::System::Memory_1<uint8_t> buffer, ::System::Net::Sockets::SocketFlags socketFlags, bool fromNetworkStream, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ReceiveAsyncApm addr 0x2862a94 size 0x3c8 virtual false final false
 ::System::Threading::Tasks::Task_1<int32_t> ReceiveAsyncApm(::System::Memory_1<uint8_t> buffer, ::System::Net::Sockets::SocketFlags socketFlags) ;

/// @brief Method SendAsyncForNetworkStream addr 0x286219c size 0x2bc virtual false final false
 ::System::Threading::Tasks::ValueTask SendAsyncForNetworkStream(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SendAsyncApm addr 0x2862ec8 size 0x420 virtual false final false
 ::System::Threading::Tasks::Task_1<int32_t> SendAsyncApm(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Net::Sockets::SocketFlags socketFlags) ;

/// @brief Method CompleteAccept addr 0x28632e8 size 0x11c virtual false final false
static void CompleteAccept(::System::Net::Sockets::Socket s, ::System::Net::Sockets::____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket> saea) ;

/// @brief Method CompleteSendReceive addr 0x2863530 size 0x144 virtual false final false
static void CompleteSendReceive(::System::Net::Sockets::Socket s, ::System::Net::Sockets::____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs saea, bool isReceive) ;

/// @brief Method GetException addr 0x2863444 size 0xec virtual false final false
static ::System::Exception GetException(::System::Net::Sockets::SocketError error, bool wrapExceptionsInIOExceptions) ;

/// @brief Method ReturnSocketAsyncEventArgs addr 0x2863674 size 0x4c virtual false final false
 void ReturnSocketAsyncEventArgs(::System::Net::Sockets::____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs saea, bool isReceive) ;

/// @brief Method ReturnSocketAsyncEventArgs addr 0x2863404 size 0x40 virtual false final false
 void ReturnSocketAsyncEventArgs(::System::Net::Sockets::____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket> saea) ;

// Ctor Parameters [CppParam { name: "addressFamily", ty: "::System::Net::Sockets::AddressFamily", modifiers: "", def_value: None }, CppParam { name: "socketType", ty: "::System::Net::Sockets::SocketType", modifiers: "", def_value: None }, CppParam { name: "protocolType", ty: "::System::Net::Sockets::ProtocolType", modifiers: "", def_value: None }]
explicit Socket(::System::Net::Sockets::AddressFamily addressFamily, ::System::Net::Sockets::SocketType socketType, ::System::Net::Sockets::ProtocolType protocolType) ;

/// @brief Method .ctor addr 0x28636c0 size 0x254 virtual false final false
 void _ctor(::System::Net::Sockets::AddressFamily addressFamily, ::System::Net::Sockets::SocketType socketType, ::System::Net::Sockets::ProtocolType protocolType) ;

/// @brief Method get_OSSupportsIPv4 addr 0x2863d40 size 0x64 virtual false final false
static bool get_OSSupportsIPv4() ;

/// @brief Method get_OSSupportsIPv6 addr 0x2863da4 size 0x64 virtual false final false
static bool get_OSSupportsIPv6() ;

/// @brief Method get_Handle addr 0x2863e08 size 0x1c virtual false final false
 ::cordl_internals::intptr_t get_Handle() ;

/// @brief Method get_AddressFamily addr 0x2863e24 size 0x8 virtual false final false
 ::System::Net::Sockets::AddressFamily get_AddressFamily() ;

/// @brief Method get_SocketType addr 0x2863e2c size 0x8 virtual false final false
 ::System::Net::Sockets::SocketType get_SocketType() ;

/// @brief Method get_ProtocolType addr 0x2863e34 size 0x8 virtual false final false
 ::System::Net::Sockets::ProtocolType get_ProtocolType() ;

/// @brief Method set_ExclusiveAddressUse addr 0x2863e3c size 0x80 virtual false final false
 void set_ExclusiveAddressUse(bool value) ;

/// @brief Method set_ReceiveBufferSize addr 0x2863fe8 size 0x64 virtual false final false
 void set_ReceiveBufferSize(int32_t value) ;

/// @brief Method set_SendBufferSize addr 0x286404c size 0x64 virtual false final false
 void set_SendBufferSize(int32_t value) ;

/// @brief Method set_ReceiveTimeout addr 0x28640b0 size 0x6c virtual false final false
 void set_ReceiveTimeout(int32_t value) ;

/// @brief Method set_SendTimeout addr 0x286411c size 0x6c virtual false final false
 void set_SendTimeout(int32_t value) ;

/// @brief Method get_Ttl addr 0x2864188 size 0xf8 virtual false final false
 int16_t get_Ttl() ;

/// @brief Method set_Ttl addr 0x2864280 size 0xf0 virtual false final false
 void set_Ttl(int16_t value) ;

/// @brief Method set_DontFragment addr 0x2864370 size 0x84 virtual false final false
 void set_DontFragment(bool value) ;

/// @brief Method get_DualMode addr 0x28643f4 size 0xe8 virtual false final false
 bool get_DualMode() ;

/// @brief Method set_DualMode addr 0x28644dc size 0x88 virtual false final false
 void set_DualMode(bool value) ;

/// @brief Method get_IsDualMode addr 0x2864564 size 0x18 virtual false final false
 bool get_IsDualMode() ;

/// @brief Method CanTryAddressFamily addr 0x286457c size 0x38 virtual false final false
 bool CanTryAddressFamily(::System::Net::Sockets::AddressFamily family) ;

/// @brief Method Send addr 0x28645b4 size 0x68 virtual false final false
 int32_t Send(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>> buffers, ::System::Net::Sockets::SocketFlags socketFlags) ;

/// @brief Method Send addr 0x2860310 size 0x68 virtual false final false
 int32_t Send(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags) ;

/// @brief Method Receive addr 0x285fbb4 size 0x68 virtual false final false
 int32_t Receive(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags) ;

/// @brief Method Receive addr 0x2864da0 size 0x68 virtual false final false
 int32_t Receive(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>> buffers, ::System::Net::Sockets::SocketFlags socketFlags) ;

/// @brief Method IOControl addr 0x28652f0 size 0x4 virtual false final false
 int32_t IOControl(::System::Net::Sockets::IOControlCode ioControlCode, ::ArrayW<uint8_t> optionInValue, ::ArrayW<uint8_t> optionOutValue) ;

/// @brief Method SetIPProtectionLevel addr 0x2863b7c size 0xf0 virtual false final false
 void SetIPProtectionLevel(::System::Net::Sockets::IPProtectionLevel level) ;

/// @brief Method BeginSend addr 0x2861250 size 0x80 virtual false final false
 ::System::IAsyncResult BeginSend(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndSend addr 0x28614ec size 0x68 virtual false final false
 int32_t EndSend(::System::IAsyncResult asyncResult) ;

/// @brief Method BeginReceive addr 0x2860c28 size 0x80 virtual false final false
 ::System::IAsyncResult BeginReceive(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndReceive addr 0x2860ec4 size 0x68 virtual false final false
 int32_t EndReceive(::System::IAsyncResult asyncResult) ;

/// @brief Method get_InternalSyncObject addr 0x2865a10 size 0xd4 virtual false final false
static ::bs_hook::Il2CppWrapperType get_InternalSyncObject() ;

/// @brief Method get_CleanedUp addr 0x2865ae4 size 0x10 virtual false final false
 bool get_CleanedUp() ;

/// @brief Method InitializeSockets addr 0x2863914 size 0x264 virtual false final false
static void InitializeSockets() ;

/// @brief Method Dispose addr 0x2865b48 size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Finalize addr 0x2865bb4 size 0xa0 virtual true final false
 void Finalize() ;

/// @brief Method InternalShutdown addr 0x28607d0 size 0x88 virtual false final false
 void InternalShutdown(::System::Net::Sockets::SocketShutdown how) ;

/// @brief Method SetSocketOption addr 0x2862788 size 0x150 virtual false final false
 void SetSocketOption(::System::Net::Sockets::SocketOptionLevel optionLevel, ::System::Net::Sockets::SocketOptionName optionName, int32_t optionValue, bool silent) ;

// Ctor Parameters [CppParam { name: "family", ty: "::System::Net::Sockets::AddressFamily", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::System::Net::Sockets::SocketType", modifiers: "", def_value: None }, CppParam { name: "proto", ty: "::System::Net::Sockets::ProtocolType", modifiers: "", def_value: None }, CppParam { name: "safe_handle", ty: "::System::Net::Sockets::SafeSocketHandle", modifiers: "", def_value: None }]
explicit Socket(::System::Net::Sockets::AddressFamily family, ::System::Net::Sockets::SocketType type, ::System::Net::Sockets::ProtocolType proto, ::System::Net::Sockets::SafeSocketHandle safe_handle) ;

/// @brief Method .ctor addr 0x2865ec4 size 0xfc virtual false final false
 void _ctor(::System::Net::Sockets::AddressFamily family, ::System::Net::Sockets::SocketType type, ::System::Net::Sockets::ProtocolType proto, ::System::Net::Sockets::SafeSocketHandle safe_handle) ;

/// @brief Method SocketDefaults addr 0x2863c6c size 0xd4 virtual false final false
 void SocketDefaults() ;

/// @brief Method Socket_icall addr 0x2863b78 size 0x4 virtual false final false
static ::cordl_internals::intptr_t Socket_icall(::System::Net::Sockets::AddressFamily family, ::System::Net::Sockets::SocketType type, ::System::Net::Sockets::ProtocolType proto, ByRef<int32_t> error) ;

/// @brief Method get_Available addr 0x285f6ac size 0xbc virtual false final false
 int32_t get_Available() ;

/// @brief Method Available_internal addr 0x286608c size 0x128 virtual false final false
static int32_t Available_internal(::System::Net::Sockets::SafeSocketHandle safeHandle, ByRef<int32_t> error) ;

/// @brief Method Available_icall addr 0x28661b4 size 0x4 virtual false final false
static int32_t Available_icall(::cordl_internals::intptr_t socket, ByRef<int32_t> error) ;

/// @brief Method set_EnableBroadcast addr 0x28661b8 size 0x7c virtual false final false
 void set_EnableBroadcast(bool value) ;

/// @brief Method get_IsBound addr 0x2866234 size 0x8 virtual false final false
 bool get_IsBound() ;

/// @brief Method get_LocalEndPoint addr 0x286623c size 0xf4 virtual false final false
 ::System::Net::EndPoint get_LocalEndPoint() ;

/// @brief Method LocalEndPoint_internal addr 0x2866330 size 0x130 virtual false final false
static ::System::Net::SocketAddress LocalEndPoint_internal(::System::Net::Sockets::SafeSocketHandle safeHandle, int32_t family, ByRef<int32_t> error) ;

/// @brief Method LocalEndPoint_icall addr 0x2866460 size 0x4 virtual false final false
static ::System::Net::SocketAddress LocalEndPoint_icall(::cordl_internals::intptr_t socket, int32_t family, ByRef<int32_t> error) ;

/// @brief Method get_Blocking addr 0x2866464 size 0x8 virtual false final false
 bool get_Blocking() ;

/// @brief Method set_Blocking addr 0x286646c size 0xd0 virtual false final false
 void set_Blocking(bool value) ;

/// @brief Method Blocking_internal addr 0x286653c size 0x120 virtual false final false
static void Blocking_internal(::System::Net::Sockets::SafeSocketHandle safeHandle, bool block, ByRef<int32_t> error) ;

/// @brief Method Blocking_icall addr 0x286665c size 0x8 virtual false final false
static void Blocking_icall(::cordl_internals::intptr_t socket, bool block, ByRef<int32_t> error) ;

/// @brief Method get_Connected addr 0x2866664 size 0x8 virtual false final false
 bool get_Connected() ;

/// @brief Method set_NoDelay addr 0x2865fc0 size 0x40 virtual false final false
 void set_NoDelay(bool value) ;

/// @brief Method get_RemoteEndPoint addr 0x28666c4 size 0xfc virtual false final false
 ::System::Net::EndPoint get_RemoteEndPoint() ;

/// @brief Method RemoteEndPoint_internal addr 0x28667c0 size 0x130 virtual false final false
static ::System::Net::SocketAddress RemoteEndPoint_internal(::System::Net::Sockets::SafeSocketHandle safeHandle, int32_t family, ByRef<int32_t> error) ;

/// @brief Method RemoteEndPoint_icall addr 0x28668f0 size 0x4 virtual false final false
static ::System::Net::SocketAddress RemoteEndPoint_icall(::cordl_internals::intptr_t socket, int32_t family, ByRef<int32_t> error) ;

/// @brief Method Poll addr 0x28668f4 size 0x1a0 virtual false final false
 bool Poll(int32_t microSeconds, ::System::Net::Sockets::SelectMode mode) ;

/// @brief Method Poll_internal addr 0x2866a94 size 0x140 virtual false final false
static bool Poll_internal(::System::Net::Sockets::SafeSocketHandle safeHandle, ::System::Net::Sockets::SelectMode mode, int32_t timeout, ByRef<int32_t> error) ;

/// @brief Method Poll_icall addr 0x2866bd4 size 0x4 virtual false final false
static bool Poll_icall(::cordl_internals::intptr_t socket, ::System::Net::Sockets::SelectMode mode, int32_t timeout, ByRef<int32_t> error) ;

/// @brief Method Accept addr 0x2866bd8 size 0x134 virtual false final false
 ::System::Net::Sockets::Socket Accept() ;

/// @brief Method Accept addr 0x2866e6c size 0x11c virtual false final false
 void Accept(::System::Net::Sockets::Socket acceptSocket) ;

/// @brief Method AcceptAsync addr 0x2866f88 size 0x24c virtual false final false
 bool AcceptAsync(::System::Net::Sockets::SocketAsyncEventArgs e) ;

/// @brief Method BeginAccept addr 0x2867390 size 0x170 virtual false final false
 ::System::IAsyncResult BeginAccept(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndAccept addr 0x2867500 size 0x28 virtual false final false
 ::System::Net::Sockets::Socket EndAccept(::System::IAsyncResult asyncResult) ;

/// @brief Method EndAccept addr 0x2867528 size 0xf4 virtual false final false
 ::System::Net::Sockets::Socket EndAccept(ByRef<::ArrayW<uint8_t>> buffer, ByRef<int32_t> bytesTransferred, ::System::IAsyncResult asyncResult) ;

/// @brief Method Accept_internal addr 0x2866d0c size 0x160 virtual false final false
static ::System::Net::Sockets::SafeSocketHandle Accept_internal(::System::Net::Sockets::SafeSocketHandle safeHandle, ByRef<int32_t> error, bool blocking) ;

/// @brief Method Accept_icall addr 0x2867768 size 0x8 virtual false final false
static ::cordl_internals::intptr_t Accept_icall(::cordl_internals::intptr_t sock, ByRef<int32_t> error, bool blocking) ;

/// @brief Method Bind addr 0x2867770 size 0x17c virtual false final false
 void Bind(::System::Net::EndPoint localEP) ;

/// @brief Method Bind_internal addr 0x28679a8 size 0x120 virtual false final false
static void Bind_internal(::System::Net::Sockets::SafeSocketHandle safeHandle, ::System::Net::SocketAddress sa, ByRef<int32_t> error) ;

/// @brief Method Bind_icall addr 0x2867ac8 size 0x4 virtual false final false
static void Bind_icall(::cordl_internals::intptr_t sock, ::System::Net::SocketAddress sa, ByRef<int32_t> error) ;

/// @brief Method Listen addr 0x2867acc size 0xf8 virtual false final false
 void Listen(int32_t backlog) ;

/// @brief Method Listen_internal addr 0x2867bc4 size 0x120 virtual false final false
static void Listen_internal(::System::Net::Sockets::SafeSocketHandle safeHandle, int32_t backlog, ByRef<int32_t> error) ;

/// @brief Method Listen_icall addr 0x2867ce4 size 0x4 virtual false final false
static void Listen_icall(::cordl_internals::intptr_t sock, int32_t backlog, ByRef<int32_t> error) ;

/// @brief Method Connect addr 0x2867ce8 size 0x7c virtual false final false
 void Connect(::System::Net::IPAddress address, int32_t port) ;

/// @brief Method Connect addr 0x2867d64 size 0x360 virtual false final false
 void Connect(::System::Net::EndPoint remoteEP) ;

/// @brief Method BeginConnect addr 0x28681e8 size 0x2e0 virtual false final false
 ::System::IAsyncResult BeginConnect(::StringW host, int32_t port, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method BeginConnect addr 0x28684c8 size 0x144 virtual false final false
 ::System::IAsyncResult BeginConnect(::System::Net::EndPoint remoteEP, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method BeginMConnect addr 0x2868a68 size 0x208 virtual false final false
static bool BeginMConnect(::System::Net::Sockets::SocketAsyncResult sockares) ;

/// @brief Method BeginSConnect addr 0x286860c size 0x45c virtual false final false
static bool BeginSConnect(::System::Net::Sockets::SocketAsyncResult sockares) ;

/// @brief Method EndConnect addr 0x2868c70 size 0xb0 virtual false final false
 void EndConnect(::System::IAsyncResult asyncResult) ;

/// @brief Method Connect_internal addr 0x28680c4 size 0x124 virtual false final false
static void Connect_internal(::System::Net::Sockets::SafeSocketHandle safeHandle, ::System::Net::SocketAddress sa, ByRef<int32_t> error, bool blocking) ;

/// @brief Method Connect_icall addr 0x2868d20 size 0x8 virtual false final false
static void Connect_icall(::cordl_internals::intptr_t sock, ::System::Net::SocketAddress sa, ByRef<int32_t> error, bool blocking) ;

/// @brief Method Disconnect addr 0x2868d28 size 0xf8 virtual false final false
 void Disconnect(bool reuseSocket) ;

/// @brief Method EndDisconnect addr 0x2868f40 size 0xb0 virtual false final false
 void EndDisconnect(::System::IAsyncResult asyncResult) ;

/// @brief Method Disconnect_internal addr 0x2868e20 size 0x120 virtual false final false
static void Disconnect_internal(::System::Net::Sockets::SafeSocketHandle safeHandle, bool reuse, ByRef<int32_t> error) ;

/// @brief Method Disconnect_icall addr 0x2868ff0 size 0x8 virtual false final false
static void Disconnect_icall(::cordl_internals::intptr_t sock, bool reuse, ByRef<int32_t> error) ;

/// @brief Method Receive addr 0x2864c94 size 0x10c virtual false final false
 int32_t Receive(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags, ByRef<::System::Net::Sockets::SocketError> errorCode) ;

/// @brief Method Receive addr 0x28692c8 size 0x210 virtual false final false
 int32_t Receive(::System::Memory_1<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags, ByRef<::System::Net::Sockets::SocketError> errorCode) ;

/// @brief Method Receive addr 0x2864e08 size 0x4e8 virtual false final false
 int32_t Receive(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>> buffers, ::System::Net::Sockets::SocketFlags socketFlags, ByRef<::System::Net::Sockets::SocketError> errorCode) ;

/// @brief Method Receive addr 0x285fe90 size 0xf0 virtual false final false
 int32_t Receive(::System::Span_1<uint8_t> buffer, ::System::Net::Sockets::SocketFlags socketFlags, ByRef<::System::Net::Sockets::SocketError> errorCode) ;

/// @brief Method Send addr 0x28605ec size 0x8c virtual false final false
 int32_t Send(::System::ReadOnlySpan_1<uint8_t> buffer, ::System::Net::Sockets::SocketFlags socketFlags, ByRef<::System::Net::Sockets::SocketError> errorCode) ;

/// @brief Method ReceiveAsync addr 0x286961c size 0x204 virtual false final false
 bool ReceiveAsync(::System::Net::Sockets::SocketAsyncEventArgs e) ;

/// @brief Method BeginReceive addr 0x2865790 size 0x190 virtual false final false
 ::System::IAsyncResult BeginReceive(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags, ByRef<::System::Net::Sockets::SocketError> errorCode, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndReceive addr 0x2865920 size 0xf0 virtual false final false
 int32_t EndReceive(::System::IAsyncResult asyncResult, ByRef<::System::Net::Sockets::SocketError> errorCode) ;

/// @brief Method Receive_internal addr 0x28694d8 size 0x144 virtual false final false
static int32_t Receive_internal(::System::Net::Sockets::SafeSocketHandle safeHandle, void* bufarray, int32_t count, ::System::Net::Sockets::SocketFlags flags, ByRef<int32_t> error, bool blocking) ;

/// @brief Method Receive_array_icall addr 0x2869820 size 0x8 virtual false final false
static int32_t Receive_array_icall(::cordl_internals::intptr_t sock, void* bufarray, int32_t count, ::System::Net::Sockets::SocketFlags flags, ByRef<int32_t> error, bool blocking) ;

/// @brief Method Receive_internal addr 0x2869184 size 0x144 virtual false final false
static int32_t Receive_internal(::System::Net::Sockets::SafeSocketHandle safeHandle, void* buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags, ByRef<int32_t> error, bool blocking) ;

/// @brief Method Receive_icall addr 0x2869828 size 0x8 virtual false final false
static int32_t Receive_icall(::cordl_internals::intptr_t sock, void* buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags, ByRef<int32_t> error, bool blocking) ;

/// @brief Method ReceiveFrom addr 0x2869830 size 0x118 virtual false final false
 int32_t ReceiveFrom(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags, ByRef<::System::Net::EndPoint> remoteEP) ;

/// @brief Method ReceiveFrom addr 0x2869948 size 0x17c virtual false final false
 int32_t ReceiveFrom(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags, ByRef<::System::Net::EndPoint> remoteEP, ByRef<::System::Net::Sockets::SocketError> errorCode) ;

/// @brief Method ReceiveFrom addr 0x2869c18 size 0x288 virtual false final false
 int32_t ReceiveFrom(::System::Memory_1<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags, ByRef<::System::Net::EndPoint> remoteEP, ByRef<::System::Net::Sockets::SocketError> errorCode) ;

/// @brief Method EndReceiveFrom_internal addr 0x2869ea0 size 0xd0 virtual false final false
 int32_t EndReceiveFrom_internal(::System::Net::Sockets::SocketAsyncResult sockares, ::System::Net::Sockets::SocketAsyncEventArgs ares) ;

/// @brief Method ReceiveFrom_internal addr 0x2869ac4 size 0x154 virtual false final false
static int32_t ReceiveFrom_internal(::System::Net::Sockets::SafeSocketHandle safeHandle, void* buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags, ByRef<::System::Net::SocketAddress> sockaddr, ByRef<int32_t> error, bool blocking) ;

/// @brief Method ReceiveFrom_icall addr 0x2869f70 size 0x8 virtual false final false
static int32_t ReceiveFrom_icall(::cordl_internals::intptr_t sock, void* buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags, ByRef<::System::Net::SocketAddress> sockaddr, ByRef<int32_t> error, bool blocking) ;

/// @brief Method Send addr 0x2864b50 size 0x144 virtual false final false
 int32_t Send(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags, ByRef<::System::Net::Sockets::SocketError> errorCode) ;

/// @brief Method Send addr 0x286461c size 0x534 virtual false final false
 int32_t Send(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>> buffers, ::System::Net::Sockets::SocketFlags socketFlags, ByRef<::System::Net::Sockets::SocketError> errorCode) ;

/// @brief Method SendAsync addr 0x286a200 size 0x2e0 virtual false final false
 bool SendAsync(::System::Net::Sockets::SocketAsyncEventArgs e) ;

/// @brief Method BeginSend addr 0x2865484 size 0x21c virtual false final false
 ::System::IAsyncResult BeginSend(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags, ByRef<::System::Net::Sockets::SocketError> errorCode, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method BeginSendCallback addr 0x286a4e0 size 0x39c virtual false final false
static void BeginSendCallback(::System::Net::Sockets::SocketAsyncResult sockares, int32_t sent_so_far) ;

/// @brief Method EndSend addr 0x28656a0 size 0xf0 virtual false final false
 int32_t EndSend(::System::IAsyncResult asyncResult, ByRef<::System::Net::Sockets::SocketError> errorCode) ;

/// @brief Method Send_internal addr 0x286a0bc size 0x144 virtual false final false
static int32_t Send_internal(::System::Net::Sockets::SafeSocketHandle safeHandle, void* bufarray, int32_t count, ::System::Net::Sockets::SocketFlags flags, ByRef<int32_t> error, bool blocking) ;

/// @brief Method Send_array_icall addr 0x286a87c size 0x8 virtual false final false
static int32_t Send_array_icall(::cordl_internals::intptr_t sock, void* bufarray, int32_t count, ::System::Net::Sockets::SocketFlags flags, ByRef<int32_t> error, bool blocking) ;

/// @brief Method Send_internal addr 0x2869f78 size 0x144 virtual false final false
static int32_t Send_internal(::System::Net::Sockets::SafeSocketHandle safeHandle, void* buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags, ByRef<int32_t> error, bool blocking) ;

/// @brief Method Send_icall addr 0x286a884 size 0x8 virtual false final false
static int32_t Send_icall(::cordl_internals::intptr_t sock, void* buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags, ByRef<int32_t> error, bool blocking) ;

/// @brief Method SendTo addr 0x286a88c size 0x1a8 virtual false final false
 int32_t SendTo(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::EndPoint remoteEP) ;

/// @brief Method EndSendTo addr 0x286ab88 size 0xb8 virtual false final false
 int32_t EndSendTo(::System::IAsyncResult asyncResult) ;

/// @brief Method SendTo_internal addr 0x286aa34 size 0x154 virtual false final false
static int32_t SendTo_internal(::System::Net::Sockets::SafeSocketHandle safeHandle, void* buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags, ::System::Net::SocketAddress sa, ByRef<int32_t> error, bool blocking) ;

/// @brief Method SendTo_icall addr 0x286ac40 size 0x8 virtual false final false
static int32_t SendTo_icall(::cordl_internals::intptr_t sock, void* buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags, ::System::Net::SocketAddress sa, ByRef<int32_t> error, bool blocking) ;

/// @brief Method GetSocketOption addr 0x285f0fc size 0x1a4 virtual false final false
 ::bs_hook::Il2CppWrapperType GetSocketOption(::System::Net::Sockets::SocketOptionLevel optionLevel, ::System::Net::Sockets::SocketOptionName optionName) ;

/// @brief Method GetSocketOption_obj_internal addr 0x286ac48 size 0x138 virtual false final false
static void GetSocketOption_obj_internal(::System::Net::Sockets::SafeSocketHandle safeHandle, ::System::Net::Sockets::SocketOptionLevel level, ::System::Net::Sockets::SocketOptionName name, ByRef<::bs_hook::Il2CppWrapperType> obj_val, ByRef<int32_t> error) ;

/// @brief Method GetSocketOption_obj_icall addr 0x286ad80 size 0x4 virtual false final false
static void GetSocketOption_obj_icall(::cordl_internals::intptr_t socket, ::System::Net::Sockets::SocketOptionLevel level, ::System::Net::Sockets::SocketOptionName name, ByRef<::bs_hook::Il2CppWrapperType> obj_val, ByRef<int32_t> error) ;

/// @brief Method SetSocketOption addr 0x286ad84 size 0x8 virtual false final false
 void SetSocketOption(::System::Net::Sockets::SocketOptionLevel optionLevel, ::System::Net::Sockets::SocketOptionName optionName, bool optionValue) ;

/// @brief Method SetSocketOption addr 0x2863ebc size 0x12c virtual false final false
 void SetSocketOption(::System::Net::Sockets::SocketOptionLevel optionLevel, ::System::Net::Sockets::SocketOptionName optionName, int32_t optionValue) ;

/// @brief Method SetSocketOption_internal addr 0x2865d74 size 0x150 virtual false final false
static void SetSocketOption_internal(::System::Net::Sockets::SafeSocketHandle safeHandle, ::System::Net::Sockets::SocketOptionLevel level, ::System::Net::Sockets::SocketOptionName name, ::bs_hook::Il2CppWrapperType obj_val, ::ArrayW<uint8_t> byte_val, int32_t int_val, ByRef<int32_t> error) ;

/// @brief Method SetSocketOption_icall addr 0x286ad8c size 0x4 virtual false final false
static void SetSocketOption_icall(::cordl_internals::intptr_t socket, ::System::Net::Sockets::SocketOptionLevel level, ::System::Net::Sockets::SocketOptionName name, ::bs_hook::Il2CppWrapperType obj_val, ::ArrayW<uint8_t> byte_val, int32_t int_val, ByRef<int32_t> error) ;

/// @brief Method IOControl addr 0x28652f4 size 0x190 virtual false final false
 int32_t IOControl(int32_t ioControlCode, ::ArrayW<uint8_t> optionInValue, ::ArrayW<uint8_t> optionOutValue) ;

/// @brief Method IOControl_internal addr 0x286ad90 size 0x148 virtual false final false
static int32_t IOControl_internal(::System::Net::Sockets::SafeSocketHandle safeHandle, int32_t ioctl_code, ::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output, ByRef<int32_t> error) ;

/// @brief Method IOControl_icall addr 0x286aed8 size 0x4 virtual false final false
static int32_t IOControl_icall(::cordl_internals::intptr_t sock, int32_t ioctl_code, ::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output, ByRef<int32_t> error) ;

/// @brief Method Close addr 0x286aedc size 0x8 virtual false final false
 void Close() ;

/// @brief Method Close addr 0x2860858 size 0x8 virtual false final false
 void Close(int32_t timeout) ;

/// @brief Method Close_icall addr 0x286aee4 size 0x4 virtual false final false
static void Close_icall(::cordl_internals::intptr_t socket, ByRef<int32_t> error) ;

/// @brief Method Shutdown addr 0x286aee8 size 0x118 virtual false final false
 void Shutdown(::System::Net::Sockets::SocketShutdown how) ;

/// @brief Method Shutdown_internal addr 0x2865c54 size 0x120 virtual false final false
static void Shutdown_internal(::System::Net::Sockets::SafeSocketHandle safeHandle, ::System::Net::Sockets::SocketShutdown how, ByRef<int32_t> error) ;

/// @brief Method Shutdown_icall addr 0x286b000 size 0x4 virtual false final false
static void Shutdown_icall(::cordl_internals::intptr_t socket, ::System::Net::Sockets::SocketShutdown how, ByRef<int32_t> error) ;

/// @brief Method Dispose addr 0x286b004 size 0x60 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Linger addr 0x286b064 size 0x16c virtual false final false
 void Linger(::cordl_internals::intptr_t handle) ;

/// @brief Method ThrowIfDisposedAndClosed addr 0x2866000 size 0x8c virtual false final false
 void ThrowIfDisposedAndClosed() ;

/// @brief Method ThrowIfBufferNull addr 0x2868ff8 size 0x58 virtual false final false
 void ThrowIfBufferNull(::ArrayW<uint8_t> buffer) ;

/// @brief Method ThrowIfBufferOutOfRange addr 0x2869050 size 0x134 virtual false final false
 void ThrowIfBufferOutOfRange(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

/// @brief Method ThrowIfUdp addr 0x286666c size 0x58 virtual false final false
 void ThrowIfUdp() ;

/// @brief Method ValidateEndIAsyncResult addr 0x286761c size 0x14c virtual false final false
 ::System::Net::Sockets::SocketAsyncResult ValidateEndIAsyncResult(::System::IAsyncResult ares, ::StringW methodName, ::StringW argName) ;

/// @brief Method QueueIOSelectorJob addr 0x2867250 size 0x140 virtual false final false
 void QueueIOSelectorJob(::System::Threading::SemaphoreSlim sem, ::cordl_internals::intptr_t handle, ::System::IOSelectorJob job) ;

/// @brief Method InitSocketAsyncEventArgs addr 0x28671d4 size 0x7c virtual false final false
 void InitSocketAsyncEventArgs(::System::Net::Sockets::SocketAsyncEventArgs e, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state, ::System::Net::Sockets::SocketOperation operation) ;

/// @brief Method SocketOperationToSocketAsyncOperation addr 0x286b1d0 size 0xac virtual false final false
 ::System::Net::Sockets::SocketAsyncOperation SocketOperationToSocketAsyncOperation(::System::Net::Sockets::SocketOperation op) ;

/// @brief Method RemapIPEndPoint addr 0x28678ec size 0xbc virtual false final false
 ::System::Net::IPEndPoint RemapIPEndPoint(::System::Net::IPEndPoint input) ;

/// @brief Method cancel_blocking_socket_operation addr 0x286b27c size 0x4 virtual false final false
static void cancel_blocking_socket_operation(::System::Threading::Thread thread) ;

/// @brief Method get_FamilyHint addr 0x286b280 size 0x88 virtual false final false
static int32_t get_FamilyHint() ;

/// @brief Method IsProtocolSupported_internal addr 0x286b308 size 0x4 virtual false final false
static bool IsProtocolSupported_internal(::System::Net::NetworkInformation::NetworkInterfaceComponent networkInterface) ;

/// @brief Method IsProtocolSupported addr 0x2865af4 size 0x54 virtual false final false
static bool IsProtocolSupported(::System::Net::NetworkInformation::NetworkInterfaceComponent networkInterface) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
// Type: ::TaskSocketAsyncEventArgs`1
namespace System::Net::Sockets {
// cpp template
template<::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8208)), TypeDefinitionIndex(TypeDefinitionIndex(8177))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8177), inst: 2 })
// CS Name: System.Net.Sockets.Socket::TaskSocketAsyncEventArgs`1
class CORDL_TYPE ____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<TResult> : public ::System::Net::Sockets::SocketAsyncEventArgs {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe0};

virtual ~____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1", modifiers: " const&", def_value: None }]
constexpr ____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1(____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1", modifiers: "&&", def_value: None }]
constexpr ____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1(____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1(void* ptr) noexcept : ::System::Net::Sockets::SocketAsyncEventArgs(ptr) {
}


  constexpr ____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1& operator=(____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1&& o) noexcept = default;
  constexpr ____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1& operator=(____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1 const& o) noexcept = default;
                


// Fields

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> __declspec(property(get=__get__builder, put=__set__builder))  _builder;

constexpr void __set__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> __get__builder() const;

 bool __declspec(property(get=__get__accessed, put=__set__accessed))  _accessed;

constexpr void __set__accessed(bool value) ;

constexpr bool __get__accessed() const;


// Methods

// Ctor Parameters []
explicit ____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method GetCompletionResponsibility addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> GetCompletionResponsibility(ByRef<bool> responsibleForReturningToPool) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Net::Sockets::____System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1, "System.Net.Sockets", "Socket/TaskSocketAsyncEventArgs`1");
NEED_NO_BOX(::GlobalNamespace::______System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::______System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c, "System.Net.Sockets", "Socket/AwaitableSocketAsyncEventArgs/<>c");
NEED_NO_BOX(::System::Net::Sockets::Socket);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::Socket, "System.Net.Sockets", "Socket");
NEED_NO_BOX(::System::Net::Sockets::____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::____System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs, "System.Net.Sockets", "Socket/AwaitableSocketAsyncEventArgs");
NEED_NO_BOX(::System::Net::Sockets::____System__Net__Sockets__Socket__CachedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::____System__Net__Sockets__Socket__CachedEventArgs, "System.Net.Sockets", "Socket/CachedEventArgs");
NEED_NO_BOX(::System::Net::Sockets::____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::____System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs, "System.Net.Sockets", "Socket/Int32TaskSocketAsyncEventArgs");
NEED_NO_BOX(::System::Net::Sockets::____System__Net__Sockets__Socket____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::____System__Net__Sockets__Socket____c, "System.Net.Sockets", "Socket/<>c");
NEED_NO_BOX(::System::Net::Sockets::____System__Net__Sockets__Socket____c__DisplayClass240_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::____System__Net__Sockets__Socket____c__DisplayClass240_0, "System.Net.Sockets", "Socket/<>c__DisplayClass240_0");
NEED_NO_BOX(::System::Net::Sockets::____System__Net__Sockets__Socket____c__DisplayClass298_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::____System__Net__Sockets__Socket____c__DisplayClass298_0, "System.Net.Sockets", "Socket/<>c__DisplayClass298_0");
NEED_NO_BOX(::System::Net::Sockets::____System__Net__Sockets__Socket____c__DisplayClass355_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::____System__Net__Sockets__Socket____c__DisplayClass355_0, "System.Net.Sockets", "Socket/<>c__DisplayClass355_0");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::____System__Net__Sockets__Socket__WSABUF, "System.Net.Sockets", "Socket/WSABUF");
