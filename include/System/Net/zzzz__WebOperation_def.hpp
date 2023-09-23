#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Net {
template<typename T>
class WebCompletionSource_1;
}
namespace System {
class Exception;
}
namespace System::Net {
class ServicePoint;
}
namespace System::Net {
class WebRequestStream;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net {
class BufferOffsetSize;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
class WebConnection;
}
namespace System::Net {
class WebResponseStream;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace System::Net {
class WebOperation;
}
namespace System::Net {
struct System__Net__WebOperation___GetRequestStream_d__50;
}
namespace System::Net {
struct System__Net__WebOperation___Run_d__58;
}
// Type: ::<GetRequestStream>d__50
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8076))
// CS Name: System.Net.WebOperation::<GetRequestStream>d__50
struct CORDL_TYPE System__Net__WebOperation___GetRequestStream_d__50 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::IO::Stream>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::Net::WebOperation", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::WebRequestStream>", modifiers: "", def_value: None }]
constexpr System__Net__WebOperation___GetRequestStream_d__50(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::IO::Stream> __t__builder, System::Net::WebOperation __4__this, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::WebRequestStream> __u__1) noexcept;


                    constexpr System__Net__WebOperation___GetRequestStream_d__50(System__Net__WebOperation___GetRequestStream_d__50 const&) = default;
                    constexpr System__Net__WebOperation___GetRequestStream_d__50(System__Net__WebOperation___GetRequestStream_d__50&&) = default;
                    constexpr System__Net__WebOperation___GetRequestStream_d__50& operator=(System__Net__WebOperation___GetRequestStream_d__50 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__WebOperation___GetRequestStream_d__50& operator=(System__Net__WebOperation___GetRequestStream_d__50&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__WebOperation___GetRequestStream_d__50(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::IO::Stream> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::IO::Stream> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::IO::Stream> __get___t__builder() const;

 System::Net::WebOperation __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Net::WebOperation value) ;

constexpr System::Net::WebOperation __get___4__this() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::WebRequestStream> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::WebRequestStream> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::WebRequestStream> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2850484 size 0x21c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x28506a0 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<Run>d__58
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8077))
// CS Name: System.Net.WebOperation::<Run>d__58
struct CORDL_TYPE System__Net__WebOperation___Run_d__58 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::Net::WebOperation", modifiers: "", def_value: None }, CppParam { name: "_requestStream_5__2", ty: "System::Net::WebRequestStream", modifiers: "", def_value: None }, CppParam { name: "_stream_5__3", ty: "System::Net::WebResponseStream", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::WebRequestStream>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr System__Net__WebOperation___Run_d__58(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, System::Net::WebOperation __4__this, System::Net::WebRequestStream _requestStream_5__2, System::Net::WebResponseStream _stream_5__3, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::WebRequestStream> __u__1, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2) noexcept;


                    constexpr System__Net__WebOperation___Run_d__58(System__Net__WebOperation___Run_d__58 const&) = default;
                    constexpr System__Net__WebOperation___Run_d__58(System__Net__WebOperation___Run_d__58&&) = default;
                    constexpr System__Net__WebOperation___Run_d__58& operator=(System__Net__WebOperation___Run_d__58 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__WebOperation___Run_d__58& operator=(System__Net__WebOperation___Run_d__58&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x60};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__WebOperation___Run_d__58(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncVoidMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder __get___t__builder() const;

 System::Net::WebOperation __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Net::WebOperation value) ;

constexpr System::Net::WebOperation __get___4__this() const;

 System::Net::WebRequestStream __declspec(property(get=__get__requestStream_5__2, put=__set__requestStream_5__2))  _requestStream_5__2;

constexpr void __set__requestStream_5__2(System::Net::WebRequestStream value) ;

constexpr System::Net::WebRequestStream __get__requestStream_5__2() const;

 System::Net::WebResponseStream __declspec(property(get=__get__stream_5__3, put=__set__stream_5__3))  _stream_5__3;

constexpr void __set__stream_5__3(System::Net::WebResponseStream value) ;

constexpr System::Net::WebResponseStream __get__stream_5__3() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::WebRequestStream> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::WebRequestStream> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::WebRequestStream> __get___u__1() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x28506f8 size 0x58c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2850d60 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::WebOperation
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8078))
// CS Name: System.Net.WebOperation
class CORDL_TYPE WebOperation : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _Run_d__58 = System::Net::System__Net__WebOperation___Run_d__58;

using _GetRequestStream_d__50 = System::Net::System__Net__WebOperation___GetRequestStream_d__50;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~WebOperation() = default;

// Ctor Parameters [CppParam { name: "", ty: "WebOperation", modifiers: " const&", def_value: None }]
constexpr WebOperation(WebOperation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WebOperation", modifiers: "&&", def_value: None }]
constexpr WebOperation(WebOperation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WebOperation(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WebOperation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WebOperation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WebOperation& operator=(WebOperation&& o) noexcept = default;
  constexpr WebOperation& operator=(WebOperation const& o) noexcept = default;
                


// Fields

 System::Net::HttpWebRequest __declspec(property(get=__get__Request_k__BackingField, put=__set__Request_k__BackingField))  _Request_k__BackingField;

constexpr void __set__Request_k__BackingField(System::Net::HttpWebRequest value) ;

constexpr System::Net::HttpWebRequest __get__Request_k__BackingField() const;

 System::Net::WebConnection __declspec(property(get=__get__Connection_k__BackingField, put=__set__Connection_k__BackingField))  _Connection_k__BackingField;

constexpr void __set__Connection_k__BackingField(System::Net::WebConnection value) ;

constexpr System::Net::WebConnection __get__Connection_k__BackingField() const;

 System::Net::ServicePoint __declspec(property(get=__get__ServicePoint_k__BackingField, put=__set__ServicePoint_k__BackingField))  _ServicePoint_k__BackingField;

constexpr void __set__ServicePoint_k__BackingField(System::Net::ServicePoint value) ;

constexpr System::Net::ServicePoint __get__ServicePoint_k__BackingField() const;

 System::Net::BufferOffsetSize __declspec(property(get=__get__WriteBuffer_k__BackingField, put=__set__WriteBuffer_k__BackingField))  _WriteBuffer_k__BackingField;

constexpr void __set__WriteBuffer_k__BackingField(System::Net::BufferOffsetSize value) ;

constexpr System::Net::BufferOffsetSize __get__WriteBuffer_k__BackingField() const;

 bool __declspec(property(get=__get__IsNtlmChallenge_k__BackingField, put=__set__IsNtlmChallenge_k__BackingField))  _IsNtlmChallenge_k__BackingField;

constexpr void __set__IsNtlmChallenge_k__BackingField(bool value) ;

constexpr bool __get__IsNtlmChallenge_k__BackingField() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get_cts, put=__set_cts))  cts;

constexpr void __set_cts(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get_cts() const;

 System::Net::WebCompletionSource_1<System::Net::WebRequestStream> __declspec(property(get=__get_requestTask, put=__set_requestTask))  requestTask;

constexpr void __set_requestTask(System::Net::WebCompletionSource_1<System::Net::WebRequestStream> value) ;

constexpr System::Net::WebCompletionSource_1<System::Net::WebRequestStream> __get_requestTask() const;

 System::Net::WebCompletionSource_1<System::Net::WebRequestStream> __declspec(property(get=__get_requestWrittenTask, put=__set_requestWrittenTask))  requestWrittenTask;

constexpr void __set_requestWrittenTask(System::Net::WebCompletionSource_1<System::Net::WebRequestStream> value) ;

constexpr System::Net::WebCompletionSource_1<System::Net::WebRequestStream> __get_requestWrittenTask() const;

 System::Net::WebCompletionSource_1<System::Net::WebResponseStream> __declspec(property(get=__get_responseTask, put=__set_responseTask))  responseTask;

constexpr void __set_responseTask(System::Net::WebCompletionSource_1<System::Net::WebResponseStream> value) ;

constexpr System::Net::WebCompletionSource_1<System::Net::WebResponseStream> __get_responseTask() const;

 System::Net::WebCompletionSource_1<System::ValueTuple_2<bool,System::Net::WebOperation>> __declspec(property(get=__get_finishedTask, put=__set_finishedTask))  finishedTask;

constexpr void __set_finishedTask(System::Net::WebCompletionSource_1<System::ValueTuple_2<bool,System::Net::WebOperation>> value) ;

constexpr System::Net::WebCompletionSource_1<System::ValueTuple_2<bool,System::Net::WebOperation>> __get_finishedTask() const;

 System::Net::WebRequestStream __declspec(property(get=__get_writeStream, put=__set_writeStream))  writeStream;

constexpr void __set_writeStream(System::Net::WebRequestStream value) ;

constexpr System::Net::WebRequestStream __get_writeStream() const;

 System::Net::WebResponseStream __declspec(property(get=__get_responseStream, put=__set_responseStream))  responseStream;

constexpr void __set_responseStream(System::Net::WebResponseStream value) ;

constexpr System::Net::WebResponseStream __get_responseStream() const;

 System::Runtime::ExceptionServices::ExceptionDispatchInfo __declspec(property(get=__get_disposedInfo, put=__set_disposedInfo))  disposedInfo;

constexpr void __set_disposedInfo(System::Runtime::ExceptionServices::ExceptionDispatchInfo value) ;

constexpr System::Runtime::ExceptionServices::ExceptionDispatchInfo __get_disposedInfo() const;

 System::Runtime::ExceptionServices::ExceptionDispatchInfo __declspec(property(get=__get_closedInfo, put=__set_closedInfo))  closedInfo;

constexpr void __set_closedInfo(System::Runtime::ExceptionServices::ExceptionDispatchInfo value) ;

constexpr System::Runtime::ExceptionServices::ExceptionDispatchInfo __get_closedInfo() const;

 System::Net::WebOperation __declspec(property(get=__get_priorityRequest, put=__set_priorityRequest))  priorityRequest;

constexpr void __set_priorityRequest(System::Net::WebOperation value) ;

constexpr System::Net::WebOperation __get_priorityRequest() const;

 int32_t __declspec(property(get=__get_requestSent, put=__set_requestSent))  requestSent;

constexpr void __set_requestSent(int32_t value) ;

constexpr int32_t __get_requestSent() const;

 int32_t __declspec(property(get=__get_finished, put=__set_finished))  finished;

constexpr void __set_finished(int32_t value) ;

constexpr int32_t __get_finished() const;


// Properties

 System::Net::HttpWebRequest __declspec(property(get=get_Request))  Request;

 System::Net::WebConnection __declspec(property(get=get_Connection, put=set_Connection))  Connection;

 System::Net::ServicePoint __declspec(property(get=get_ServicePoint, put=set_ServicePoint))  ServicePoint;

 System::Net::BufferOffsetSize __declspec(property(get=get_WriteBuffer))  WriteBuffer;

 bool __declspec(property(get=get_IsNtlmChallenge))  IsNtlmChallenge;

 bool __declspec(property(get=get_Aborted))  Aborted;

 bool __declspec(property(get=get_Closed))  Closed;

 System::Net::WebRequestStream __declspec(property(get=get_WriteStream))  WriteStream;

 System::Net::WebCompletionSource_1<System::ValueTuple_2<bool,System::Net::WebOperation>> __declspec(property(get=get_Finished))  Finished;


// Methods

/// @brief Method get_Request addr 0x284f858 size 0x8 virtual false final false
 System::Net::HttpWebRequest get_Request() ;

/// @brief Method get_Connection addr 0x284f860 size 0x8 virtual false final false
 System::Net::WebConnection get_Connection() ;

/// @brief Method set_Connection addr 0x284f868 size 0x8 virtual false final false
 void set_Connection(System::Net::WebConnection value) ;

/// @brief Method get_ServicePoint addr 0x284f870 size 0x8 virtual false final false
 System::Net::ServicePoint get_ServicePoint() ;

/// @brief Method set_ServicePoint addr 0x284f878 size 0x8 virtual false final false
 void set_ServicePoint(System::Net::ServicePoint value) ;

/// @brief Method get_WriteBuffer addr 0x284f880 size 0x8 virtual false final false
 System::Net::BufferOffsetSize get_WriteBuffer() ;

/// @brief Method get_IsNtlmChallenge addr 0x284f888 size 0x8 virtual false final false
 bool get_IsNtlmChallenge() ;

// Ctor Parameters [CppParam { name: "request", ty: "System::Net::HttpWebRequest", modifiers: "", def_value: None }, CppParam { name: "writeBuffer", ty: "System::Net::BufferOffsetSize", modifiers: "", def_value: None }, CppParam { name: "isNtlmChallenge", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }]
explicit WebOperation(System::Net::HttpWebRequest request, System::Net::BufferOffsetSize writeBuffer, bool isNtlmChallenge, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method .ctor addr 0x284f890 size 0x194 virtual false final false
 void _ctor(System::Net::HttpWebRequest request, System::Net::BufferOffsetSize writeBuffer, bool isNtlmChallenge, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method get_Aborted addr 0x2848960 size 0x50 virtual false final false
 bool get_Aborted() ;

/// @brief Method get_Closed addr 0x284fa24 size 0x2c virtual false final false
 bool get_Closed() ;

/// @brief Method Abort addr 0x2848920 size 0x40 virtual false final false
 void Abort() ;

/// @brief Method Close addr 0x284fc0c size 0xac virtual false final false
 void Close() ;

/// @brief Method SetCanceled addr 0x284fb40 size 0xcc virtual false final false
 void SetCanceled() ;

/// @brief Method SetError addr 0x284fefc size 0xa4 virtual false final false
 void SetError(System::Exception error) ;

/// @brief Method SetDisposed addr 0x284fa50 size 0xf0 virtual false final false
 System::ValueTuple_2<System::Runtime::ExceptionServices::ExceptionDispatchInfo,bool> SetDisposed(ByRef<System::Runtime::ExceptionServices::ExceptionDispatchInfo> field) ;

/// @brief Method CheckDisposed addr 0x284ffa0 size 0x4c virtual false final false
 System::Runtime::ExceptionServices::ExceptionDispatchInfo CheckDisposed(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ThrowIfDisposed addr 0x2850044 size 0x60 virtual false final false
 void ThrowIfDisposed() ;

/// @brief Method ThrowIfDisposed addr 0x284c0d8 size 0x44 virtual false final false
 void ThrowIfDisposed(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ThrowIfClosedOrDisposed addr 0x284d5a8 size 0x60 virtual false final false
 void ThrowIfClosedOrDisposed() ;

/// @brief Method ThrowIfClosedOrDisposed addr 0x284cdc8 size 0x4c virtual false final false
 void ThrowIfClosedOrDisposed(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method CheckThrowDisposed addr 0x284ffec size 0x58 virtual false final false
 System::Runtime::ExceptionServices::ExceptionDispatchInfo CheckThrowDisposed(bool throwIt, ByRef<System::Runtime::ExceptionServices::ExceptionDispatchInfo> field) ;

/// @brief Method RegisterRequest addr 0x284b2c0 size 0x254 virtual false final false
 void RegisterRequest(System::Net::ServicePoint servicePoint, System::Net::WebConnection connection) ;

/// @brief Method SetPriorityRequest addr 0x28500a4 size 0x18c virtual false final false
 void SetPriorityRequest(System::Net::WebOperation operation) ;

/// @brief Method GetRequestStream addr 0x2850230 size 0xf0 virtual false final false
 System::Threading::Tasks::Task_1<System::IO::Stream> GetRequestStream() ;

/// @brief Method GetRequestStreamInternal addr 0x2850320 size 0x50 virtual false final false
 System::Threading::Tasks::Task_1<System::Net::WebRequestStream> GetRequestStreamInternal() ;

/// @brief Method get_WriteStream addr 0x2850370 size 0x18 virtual false final false
 System::Net::WebRequestStream get_WriteStream() ;

/// @brief Method GetResponseStream addr 0x2850388 size 0x50 virtual false final false
 System::Threading::Tasks::Task_1<System::Net::WebResponseStream> GetResponseStream() ;

/// @brief Method get_Finished addr 0x28503d8 size 0x8 virtual false final false
 System::Net::WebCompletionSource_1<System::ValueTuple_2<bool,System::Net::WebOperation>> get_Finished() ;

/// @brief Method Run addr 0x284b514 size 0x94 virtual false final false
 void Run() ;

/// @brief Method CompleteRequestWritten addr 0x28503e0 size 0x80 virtual false final false
 void CompleteRequestWritten(System::Net::WebRequestStream stream, System::Exception error) ;

/// @brief Method Finish addr 0x284fcb8 size 0x244 virtual false final false
 void Finish(bool ok, System::Exception error) ;

/// @brief Method <RegisterRequest>b__48_0 addr 0x2850460 size 0x24 virtual false final false
 void _RegisterRequest_b__48_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::WebOperation);
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebOperation, "System.Net", "WebOperation");
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__WebOperation___GetRequestStream_d__50, "System.Net", "WebOperation/<GetRequestStream>d__50");
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__WebOperation___Run_d__58, "System.Net", "WebOperation/<Run>d__58");
