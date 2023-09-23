#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Threading {
class ManualResetEvent;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System {
template<typename T>
struct Memory_1;
}
namespace System {
class IAsyncResult;
}
namespace System {
template<typename T>
struct ReadOnlyMemory_1;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace System {
class AsyncCallback;
}
namespace System::Threading::Tasks {
template<typename TResult>
struct ValueTask_1;
}
namespace System {
class IDisposable;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System::Threading::Tasks {
class ITaskCompletionAction;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Threading {
class ContextCallback;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Threading {
class WaitHandle;
}
namespace System {
class Exception;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename TResult>
class Func_5;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System::Threading::Tasks {
struct VoidTaskResult;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncValueTaskMethodBuilder_1;
}
// Forward declare root types
namespace GlobalNamespace {
class System__IO__Stream__SynchronousAsyncResult____c;
}
namespace System::IO {
class Stream;
}
namespace System::IO {
class System__IO__Stream__NullStream;
}
namespace System::IO {
class System__IO__Stream__ReadWriteTask;
}
namespace System::IO {
class System__IO__Stream__SynchronousAsyncResult;
}
namespace System::IO {
class System__IO__Stream____c;
}
namespace System::IO {
struct System__IO__Stream__ReadWriteParameters;
}
namespace System::IO {
struct System__IO__Stream___CopyToAsyncInternal_d__28;
}
namespace System::IO {
struct System__IO__Stream___FinishWriteAsync_d__57;
}
namespace System::IO {
struct System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d;
}
// Type: ::ReadWriteParameters
namespace System::IO {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3595))
// CS Name: System.IO.Stream::ReadWriteParameters
struct CORDL_TYPE System__IO__Stream__ReadWriteParameters : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "Offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__IO__Stream__ReadWriteParameters(::ArrayW<uint8_t> Buffer, int32_t Offset, int32_t Count) noexcept;


                    constexpr System__IO__Stream__ReadWriteParameters(System__IO__Stream__ReadWriteParameters const&) = default;
                    constexpr System__IO__Stream__ReadWriteParameters(System__IO__Stream__ReadWriteParameters&&) = default;
                    constexpr System__IO__Stream__ReadWriteParameters& operator=(System__IO__Stream__ReadWriteParameters const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__IO__Stream__ReadWriteParameters& operator=(System__IO__Stream__ReadWriteParameters&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__IO__Stream__ReadWriteParameters(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_Buffer, put=__set_Buffer))  Buffer;

constexpr void __set_Buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_Buffer() const;

 int32_t __declspec(property(get=__get_Offset, put=__set_Offset))  Offset;

constexpr void __set_Offset(int32_t value) ;

constexpr int32_t __get_Offset() const;

 int32_t __declspec(property(get=__get_Count, put=__set_Count))  Count;

constexpr void __set_Count(int32_t value) ;

constexpr int32_t __get_Count() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::IO
// Type: ::ReadWriteTask
namespace System::IO {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 92 }), TypeDefinitionIndex(TypeDefinitionIndex(2770))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3596))
// CS Name: System.IO.Stream::ReadWriteTask
class CORDL_TYPE System__IO__Stream__ReadWriteTask : public System::Threading::Tasks::Task_1<int32_t> {
public:
// Declarations
/// @brief Convert operator to System::Threading::Tasks::ITaskCompletionAction
constexpr operator  System::Threading::Tasks::ITaskCompletionAction() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~System__IO__Stream__ReadWriteTask() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Stream__ReadWriteTask", modifiers: " const&", def_value: None }]
constexpr System__IO__Stream__ReadWriteTask(System__IO__Stream__ReadWriteTask const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Stream__ReadWriteTask", modifiers: "&&", def_value: None }]
constexpr System__IO__Stream__ReadWriteTask(System__IO__Stream__ReadWriteTask&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__IO__Stream__ReadWriteTask(void* ptr) noexcept : System::Threading::Tasks::Task_1<int32_t>(ptr) {
}


  constexpr System__IO__Stream__ReadWriteTask& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__IO__Stream__ReadWriteTask& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__IO__Stream__ReadWriteTask& operator=(System__IO__Stream__ReadWriteTask&& o) noexcept = default;
  constexpr System__IO__Stream__ReadWriteTask& operator=(System__IO__Stream__ReadWriteTask const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__isRead, put=__set__isRead))  _isRead;

constexpr void __set__isRead(bool value) ;

constexpr bool __get__isRead() const;

 bool __declspec(property(get=__get__apm, put=__set__apm))  _apm;

constexpr void __set__apm(bool value) ;

constexpr bool __get__apm() const;

 System::IO::Stream __declspec(property(get=__get__stream, put=__set__stream))  _stream;

constexpr void __set__stream(System::IO::Stream value) ;

constexpr System::IO::Stream __get__stream() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__buffer, put=__set__buffer))  _buffer;

constexpr void __set__buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__buffer() const;

 int32_t __declspec(property(get=__get__offset, put=__set__offset))  _offset;

constexpr void __set__offset(int32_t value) ;

constexpr int32_t __get__offset() const;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;

 System::AsyncCallback __declspec(property(get=__get__callback, put=__set__callback))  _callback;

constexpr void __set__callback(System::AsyncCallback value) ;

constexpr System::AsyncCallback __get__callback() const;

 System::Threading::ExecutionContext __declspec(property(get=__get__context, put=__set__context))  _context;

constexpr void __set__context(System::Threading::ExecutionContext value) ;

constexpr System::Threading::ExecutionContext __get__context() const;

static System::Threading::ContextCallback __declspec(property(get=__get_s_invokeAsyncCallback, put=__set_s_invokeAsyncCallback))  s_invokeAsyncCallback;

static void __set_s_invokeAsyncCallback(System::Threading::ContextCallback value) ;

static System::Threading::ContextCallback __get_s_invokeAsyncCallback() ;


// Properties

 bool __declspec(property(get=System_Threading_Tasks_ITaskCompletionAction_get_InvokeMayRunArbitraryCode))  System_Threading_Tasks_ITaskCompletionAction_InvokeMayRunArbitraryCode;


// Methods

/// @brief Method ClearBeginState addr 0x23c6154 size 0x8 virtual false final false
 void ClearBeginState() ;

// Ctor Parameters [CppParam { name: "isRead", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "apm", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "function", ty: "System::Func_2<::bs_hook::Il2CppWrapperType,int32_t>", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "callback", ty: "System::AsyncCallback", modifiers: "", def_value: None }]
explicit System__IO__Stream__ReadWriteTask(bool isRead, bool apm, System::Func_2<::bs_hook::Il2CppWrapperType,int32_t> function, ::bs_hook::Il2CppWrapperType state, System::IO::Stream stream, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback) ;

/// @brief Method .ctor addr 0x23c3f94 size 0x144 virtual false final false
 void _ctor(bool isRead, bool apm, System::Func_2<::bs_hook::Il2CppWrapperType,int32_t> function, ::bs_hook::Il2CppWrapperType state, System::IO::Stream stream, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback) ;

/// @brief Method InvokeAsyncCallback addr 0x23c615c size 0x7c virtual false final false
static void InvokeAsyncCallback(::bs_hook::Il2CppWrapperType completedTask) ;

/// @brief Method System.Threading.Tasks.ITaskCompletionAction.Invoke addr 0x23c61d8 size 0x120 virtual true final true
 void System_Threading_Tasks_ITaskCompletionAction_Invoke(System::Threading::Tasks::Task completingTask) ;

/// @brief Method System.Threading.Tasks.ITaskCompletionAction.get_InvokeMayRunArbitraryCode addr 0x23c62f8 size 0x8 virtual true final true
 bool System_Threading_Tasks_ITaskCompletionAction_get_InvokeMayRunArbitraryCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
// Type: System.IO::Stream
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3604))
// CS Name: System.IO.Stream
class CORDL_TYPE Stream : public System::MarshalByRefObject {
public:
// Declarations
using __ReadAsync_g__FinishReadAsync_44_0_d = System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d;

using _FinishWriteAsync_d__57 = System::IO::System__IO__Stream___FinishWriteAsync_d__57;

using _CopyToAsyncInternal_d__28 = System::IO::System__IO__Stream___CopyToAsyncInternal_d__28;

using __c = System::IO::System__IO__Stream____c;

using SynchronousAsyncResult = System::IO::System__IO__Stream__SynchronousAsyncResult;

using NullStream = System::IO::System__IO__Stream__NullStream;

using ReadWriteTask = System::IO::System__IO__Stream__ReadWriteTask;

using ReadWriteParameters = System::IO::System__IO__Stream__ReadWriteParameters;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Stream() = default;

// Ctor Parameters [CppParam { name: "", ty: "Stream", modifiers: " const&", def_value: None }]
constexpr Stream(Stream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Stream", modifiers: "&&", def_value: None }]
constexpr Stream(Stream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Stream(void* ptr) noexcept : System::MarshalByRefObject(ptr) {
}


  constexpr Stream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Stream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Stream& operator=(Stream&& o) noexcept = default;
  constexpr Stream& operator=(Stream const& o) noexcept = default;
                


// Fields

static System::IO::Stream __declspec(property(get=__get_Null, put=__set_Null))  Null;

static void __set_Null(System::IO::Stream value) ;

static System::IO::Stream __get_Null() ;

/// @brief Field DefaultCopyBufferSize offset 0
static constexpr int32_t  DefaultCopyBufferSize{81920};

 System::IO::System__IO__Stream__ReadWriteTask __declspec(property(get=__get__activeReadWriteTask, put=__set__activeReadWriteTask))  _activeReadWriteTask;

constexpr void __set__activeReadWriteTask(System::IO::System__IO__Stream__ReadWriteTask value) ;

constexpr System::IO::System__IO__Stream__ReadWriteTask __get__activeReadWriteTask() const;

 System::Threading::SemaphoreSlim __declspec(property(get=__get__asyncActiveSemaphore, put=__set__asyncActiveSemaphore))  _asyncActiveSemaphore;

constexpr void __set__asyncActiveSemaphore(System::Threading::SemaphoreSlim value) ;

constexpr System::Threading::SemaphoreSlim __get__asyncActiveSemaphore() const;


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 bool __declspec(property(get=get_CanTimeout))  CanTimeout;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;

 int32_t __declspec(property(get=get_ReadTimeout, put=set_ReadTimeout))  ReadTimeout;

 int32_t __declspec(property(get=get_WriteTimeout, put=set_WriteTimeout))  WriteTimeout;


// Methods

/// @brief Method EnsureAsyncActiveSemaphoreInitialized addr 0x23c3658 size 0xf8 virtual false final false
 System::Threading::SemaphoreSlim EnsureAsyncActiveSemaphoreInitialized() ;

/// @brief Method get_CanRead addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanSeek addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_CanTimeout addr 0x23c3750 size 0x8 virtual true final false
 bool get_CanTimeout() ;

/// @brief Method get_CanWrite addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x0 size 0xffffffffffffffff virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_Position(int64_t value) ;

/// @brief Method get_ReadTimeout addr 0x23c3758 size 0x50 virtual true final false
 int32_t get_ReadTimeout() ;

/// @brief Method set_ReadTimeout addr 0x23c37a8 size 0x50 virtual true final false
 void set_ReadTimeout(int32_t value) ;

/// @brief Method get_WriteTimeout addr 0x23c37f8 size 0x50 virtual true final false
 int32_t get_WriteTimeout() ;

/// @brief Method set_WriteTimeout addr 0x23c3848 size 0x50 virtual true final false
 void set_WriteTimeout(int32_t value) ;

/// @brief Method CopyToAsync addr 0x23c3898 size 0x2c virtual false final false
 System::Threading::Tasks::Task CopyToAsync(System::IO::Stream destination) ;

/// @brief Method CopyToAsync addr 0x23c3988 size 0x84 virtual false final false
 System::Threading::Tasks::Task CopyToAsync(System::IO::Stream destination, int32_t bufferSize) ;

/// @brief Method CopyToAsync addr 0x23c3a0c size 0x44 virtual true final false
 System::Threading::Tasks::Task CopyToAsync(System::IO::Stream destination, int32_t bufferSize, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method CopyToAsyncInternal addr 0x23c3a50 size 0xf8 virtual false final false
 System::Threading::Tasks::Task CopyToAsyncInternal(System::IO::Stream destination, int32_t bufferSize, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method GetCopyBufferSize addr 0x23c38c4 size 0xc4 virtual false final false
 int32_t GetCopyBufferSize() ;

/// @brief Method Close addr 0x23c3b48 size 0x70 virtual true final false
 void Close() ;

/// @brief Method Dispose addr 0x23c3bb8 size 0x10 virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x23c3bc8 size 0x4 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Flush addr 0x0 size 0xffffffffffffffff virtual true final false
 void Flush() ;

/// @brief Method FlushAsync addr 0x23c3bcc size 0x1c4 virtual true final false
 System::Threading::Tasks::Task FlushAsync(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method BeginRead addr 0x23c3d90 size 0x20 virtual true final false
 System::IAsyncResult BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method BeginReadInternal addr 0x23c3db0 size 0x1e4 virtual false final false
 System::IAsyncResult BeginReadInternal(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state, bool serializeAsynchronously, bool apm) ;

/// @brief Method EndRead addr 0x23c4310 size 0x1cc virtual true final false
 int32_t EndRead(System::IAsyncResult asyncResult) ;

/// @brief Method ReadAsync addr 0x23c44dc size 0x94 virtual false final false
 System::Threading::Tasks::Task_1<int32_t> ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method ReadAsync addr 0x23c4570 size 0xbc virtual true final false
 System::Threading::Tasks::Task_1<int32_t> ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ReadAsync addr 0x23c47e4 size 0x260 virtual true final false
 System::Threading::Tasks::ValueTask_1<int32_t> ReadAsync(System::Memory_1<uint8_t> buffer, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method BeginEndReadAsync addr 0x23c462c size 0x1b8 virtual false final false
 System::Threading::Tasks::Task_1<int32_t> BeginEndReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method BeginWrite addr 0x23c4b4c size 0x20 virtual true final false
 System::IAsyncResult BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method BeginWriteInternal addr 0x23c4b6c size 0x1e4 virtual false final false
 System::IAsyncResult BeginWriteInternal(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state, bool serializeAsynchronously, bool apm) ;

/// @brief Method RunReadWriteTaskWhenReady addr 0x23c40d8 size 0x184 virtual false final false
 void RunReadWriteTaskWhenReady(System::Threading::Tasks::Task asyncWaiter, System::IO::System__IO__Stream__ReadWriteTask readWriteTask) ;

/// @brief Method RunReadWriteTask addr 0x23c425c size 0xb4 virtual false final false
 void RunReadWriteTask(System::IO::System__IO__Stream__ReadWriteTask readWriteTask) ;

/// @brief Method FinishTrackingAsyncOperation addr 0x23c4d50 size 0x24 virtual false final false
 void FinishTrackingAsyncOperation() ;

/// @brief Method EndWrite addr 0x23c4d74 size 0x1bc virtual true final false
 void EndWrite(System::IAsyncResult asyncResult) ;

/// @brief Method WriteAsync addr 0x23c4f30 size 0x94 virtual false final false
 System::Threading::Tasks::Task WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method WriteAsync addr 0x23c4fc4 size 0xa8 virtual true final false
 System::Threading::Tasks::Task WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WriteAsync addr 0x23c5224 size 0x278 virtual true final false
 System::Threading::Tasks::ValueTask WriteAsync(System::ReadOnlyMemory_1<uint8_t> buffer, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method FinishWriteAsync addr 0x23c549c size 0xd8 virtual false final false
 System::Threading::Tasks::Task FinishWriteAsync(System::Threading::Tasks::Task writeTask, ::ArrayW<uint8_t> localBuffer) ;

/// @brief Method BeginEndWriteAsync addr 0x23c506c size 0x1b8 virtual false final false
 System::Threading::Tasks::Task BeginEndWriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Seek addr 0x0 size 0xffffffffffffffff virtual true final false
 int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetLength(int64_t value) ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Read addr 0x23c557c size 0x288 virtual true final false
 int32_t Read(System::Span_1<uint8_t> buffer) ;

/// @brief Method ReadByte addr 0x23c5804 size 0x94 virtual true final false
 int32_t ReadByte() ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Write addr 0x23c5898 size 0x1c8 virtual true final false
 void Write(System::ReadOnlySpan_1<uint8_t> buffer) ;

/// @brief Method WriteByte addr 0x23c5a60 size 0x8c virtual true final false
 void WriteByte(uint8_t value) ;

/// @brief Method BlockingBeginRead addr 0x23c5aec size 0x184 virtual false final false
 System::IAsyncResult BlockingBeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method BlockingEndRead addr 0x23c5cec size 0x4 virtual false final false
static int32_t BlockingEndRead(System::IAsyncResult asyncResult) ;

/// @brief Method BlockingBeginWrite addr 0x23c5de0 size 0x178 virtual false final false
 System::IAsyncResult BlockingBeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method BlockingEndWrite addr 0x23c5f88 size 0x4 virtual false final false
static void BlockingEndWrite(System::IAsyncResult asyncResult) ;

/// @brief Method HasOverriddenBeginEndRead addr 0x23c4b44 size 0x8 virtual false final false
 bool HasOverriddenBeginEndRead() ;

/// @brief Method HasOverriddenBeginEndWrite addr 0x23c5574 size 0x8 virtual false final false
 bool HasOverriddenBeginEndWrite() ;

// Ctor Parameters []
explicit Stream() ;

/// @brief Method .ctor addr 0x23c6080 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ReadAsync>g__FinishReadAsync|44_0 addr 0x23c4a44 size 0x100 virtual false final false
static System::Threading::Tasks::ValueTask_1<int32_t> _ReadAsync_g__FinishReadAsync_44_0(System::Threading::Tasks::Task_1<int32_t> readTask, ::ArrayW<uint8_t> localBuffer, System::Memory_1<uint8_t> localDestination) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
// Type: ::NullStream
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3597))
// CS Name: System.IO.Stream::NullStream
class CORDL_TYPE System__IO__Stream__NullStream : public System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~System__IO__Stream__NullStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Stream__NullStream", modifiers: " const&", def_value: None }]
constexpr System__IO__Stream__NullStream(System__IO__Stream__NullStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Stream__NullStream", modifiers: "&&", def_value: None }]
constexpr System__IO__Stream__NullStream(System__IO__Stream__NullStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__IO__Stream__NullStream(void* ptr) noexcept : System::IO::Stream(ptr) {
}


  constexpr System__IO__Stream__NullStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__IO__Stream__NullStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__IO__Stream__NullStream& operator=(System__IO__Stream__NullStream&& o) noexcept = default;
  constexpr System__IO__Stream__NullStream& operator=(System__IO__Stream__NullStream const& o) noexcept = default;
                


// Fields

static System::Threading::Tasks::Task_1<int32_t> __declspec(property(get=__get_s_zeroTask, put=__set_s_zeroTask))  s_zeroTask;

static void __set_s_zeroTask(System::Threading::Tasks::Task_1<int32_t> value) ;

static System::Threading::Tasks::Task_1<int32_t> __get_s_zeroTask() ;


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;


// Methods

// Ctor Parameters []
explicit System__IO__Stream__NullStream() ;

/// @brief Method .ctor addr 0x23c60fc size 0x58 virtual false final false
 void _ctor() ;

/// @brief Method get_CanRead addr 0x23c6300 size 0x8 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanWrite addr 0x23c6308 size 0x8 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_CanSeek addr 0x23c6310 size 0x8 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_Length addr 0x23c6318 size 0x8 virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x23c6320 size 0x8 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x23c6328 size 0x4 virtual true final false
 void set_Position(int64_t value) ;

/// @brief Method CopyToAsync addr 0x23c632c size 0xe8 virtual true final false
 System::Threading::Tasks::Task CopyToAsync(System::IO::Stream destination, int32_t bufferSize, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Dispose addr 0x23c6414 size 0x4 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Flush addr 0x23c6418 size 0x4 virtual true final false
 void Flush() ;

/// @brief Method FlushAsync addr 0x23c641c size 0xc0 virtual true final false
 System::Threading::Tasks::Task FlushAsync(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method BeginRead addr 0x23c64dc size 0x8c virtual true final false
 System::IAsyncResult BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndRead addr 0x23c6568 size 0xa4 virtual true final false
 int32_t EndRead(System::IAsyncResult asyncResult) ;

/// @brief Method BeginWrite addr 0x23c660c size 0x8c virtual true final false
 System::IAsyncResult BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndWrite addr 0x23c6698 size 0xa4 virtual true final false
 void EndWrite(System::IAsyncResult asyncResult) ;

/// @brief Method Read addr 0x23c673c size 0x8 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Read addr 0x23c6744 size 0x8 virtual true final false
 int32_t Read(System::Span_1<uint8_t> buffer) ;

/// @brief Method ReadAsync addr 0x23c674c size 0x58 virtual true final false
 System::Threading::Tasks::Task_1<int32_t> ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ReadAsync addr 0x23c67a4 size 0x34 virtual true final false
 System::Threading::Tasks::ValueTask_1<int32_t> ReadAsync(System::Memory_1<uint8_t> buffer, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ReadByte addr 0x23c67d8 size 0x8 virtual true final false
 int32_t ReadByte() ;

/// @brief Method Write addr 0x23c67e0 size 0x4 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Write addr 0x23c67e4 size 0x4 virtual true final false
 void Write(System::ReadOnlySpan_1<uint8_t> buffer) ;

/// @brief Method WriteAsync addr 0x23c67e8 size 0xc0 virtual true final false
 System::Threading::Tasks::Task WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WriteAsync addr 0x23c68a8 size 0x94 virtual true final false
 System::Threading::Tasks::ValueTask WriteAsync(System::ReadOnlyMemory_1<uint8_t> buffer, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WriteByte addr 0x23c693c size 0x4 virtual true final false
 void WriteByte(uint8_t value) ;

/// @brief Method Seek addr 0x23c6940 size 0x8 virtual true final false
 int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0x23c6948 size 0x4 virtual true final false
 void SetLength(int64_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3598))
// CS Name: System.IO.Stream::SynchronousAsyncResult::<>c
class CORDL_TYPE System__IO__Stream__SynchronousAsyncResult____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__IO__Stream__SynchronousAsyncResult____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Stream__SynchronousAsyncResult____c", modifiers: " const&", def_value: None }]
constexpr System__IO__Stream__SynchronousAsyncResult____c(System__IO__Stream__SynchronousAsyncResult____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Stream__SynchronousAsyncResult____c", modifiers: "&&", def_value: None }]
constexpr System__IO__Stream__SynchronousAsyncResult____c(System__IO__Stream__SynchronousAsyncResult____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__IO__Stream__SynchronousAsyncResult____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__IO__Stream__SynchronousAsyncResult____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__IO__Stream__SynchronousAsyncResult____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__IO__Stream__SynchronousAsyncResult____c& operator=(System__IO__Stream__SynchronousAsyncResult____c&& o) noexcept = default;
  constexpr System__IO__Stream__SynchronousAsyncResult____c& operator=(System__IO__Stream__SynchronousAsyncResult____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c value) ;

static GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c __get___9() ;

static System::Func_1<System::Threading::ManualResetEvent> __declspec(property(get=__get___9__12_0, put=__set___9__12_0))  __9__12_0;

static void __set___9__12_0(System::Func_1<System::Threading::ManualResetEvent> value) ;

static System::Func_1<System::Threading::ManualResetEvent> __get___9__12_0() ;


// Methods

// Ctor Parameters []
explicit System__IO__Stream__SynchronousAsyncResult____c() ;

/// @brief Method .ctor addr 0x23c6b60 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <get_AsyncWaitHandle>b__12_0 addr 0x23c6b68 size 0x60 virtual false final false
 System::Threading::ManualResetEvent _get_AsyncWaitHandle_b__12_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SynchronousAsyncResult
namespace System::IO {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3599))
// CS Name: System.IO.Stream::SynchronousAsyncResult
class CORDL_TYPE System__IO__Stream__SynchronousAsyncResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c;

/// @brief Convert operator to System::IAsyncResult
constexpr operator  System::IAsyncResult() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~System__IO__Stream__SynchronousAsyncResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Stream__SynchronousAsyncResult", modifiers: " const&", def_value: None }]
constexpr System__IO__Stream__SynchronousAsyncResult(System__IO__Stream__SynchronousAsyncResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Stream__SynchronousAsyncResult", modifiers: "&&", def_value: None }]
constexpr System__IO__Stream__SynchronousAsyncResult(System__IO__Stream__SynchronousAsyncResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__IO__Stream__SynchronousAsyncResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__IO__Stream__SynchronousAsyncResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__IO__Stream__SynchronousAsyncResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__IO__Stream__SynchronousAsyncResult& operator=(System__IO__Stream__SynchronousAsyncResult&& o) noexcept = default;
  constexpr System__IO__Stream__SynchronousAsyncResult& operator=(System__IO__Stream__SynchronousAsyncResult const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__stateObject, put=__set__stateObject))  _stateObject;

constexpr void __set__stateObject(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__stateObject() const;

 bool __declspec(property(get=__get__isWrite, put=__set__isWrite))  _isWrite;

constexpr void __set__isWrite(bool value) ;

constexpr bool __get__isWrite() const;

 System::Threading::ManualResetEvent __declspec(property(get=__get__waitHandle, put=__set__waitHandle))  _waitHandle;

constexpr void __set__waitHandle(System::Threading::ManualResetEvent value) ;

constexpr System::Threading::ManualResetEvent __get__waitHandle() const;

 System::Runtime::ExceptionServices::ExceptionDispatchInfo __declspec(property(get=__get__exceptionInfo, put=__set__exceptionInfo))  _exceptionInfo;

constexpr void __set__exceptionInfo(System::Runtime::ExceptionServices::ExceptionDispatchInfo value) ;

constexpr System::Runtime::ExceptionServices::ExceptionDispatchInfo __get__exceptionInfo() const;

 bool __declspec(property(get=__get__endXxxCalled, put=__set__endXxxCalled))  _endXxxCalled;

constexpr void __set__endXxxCalled(bool value) ;

constexpr bool __get__endXxxCalled() const;

 int32_t __declspec(property(get=__get__bytesRead, put=__set__bytesRead))  _bytesRead;

constexpr void __set__bytesRead(int32_t value) ;

constexpr int32_t __get__bytesRead() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;

 System::Threading::WaitHandle __declspec(property(get=get_AsyncWaitHandle))  AsyncWaitHandle;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_AsyncState))  AsyncState;

 bool __declspec(property(get=get_CompletedSynchronously))  CompletedSynchronously;


// Methods

// Ctor Parameters [CppParam { name: "bytesRead", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "asyncStateObject", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit System__IO__Stream__SynchronousAsyncResult(int32_t bytesRead, ::bs_hook::Il2CppWrapperType asyncStateObject) ;

/// @brief Method .ctor addr 0x23c5c70 size 0x30 virtual false final false
 void _ctor(int32_t bytesRead, ::bs_hook::Il2CppWrapperType asyncStateObject) ;

// Ctor Parameters [CppParam { name: "asyncStateObject", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit System__IO__Stream__SynchronousAsyncResult(::bs_hook::Il2CppWrapperType asyncStateObject) ;

/// @brief Method .ctor addr 0x23c5f58 size 0x30 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType asyncStateObject) ;

// Ctor Parameters [CppParam { name: "ex", ty: "System::Exception", modifiers: "", def_value: None }, CppParam { name: "asyncStateObject", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "isWrite", ty: "bool", modifiers: "", def_value: None }]
explicit System__IO__Stream__SynchronousAsyncResult(System::Exception ex, ::bs_hook::Il2CppWrapperType asyncStateObject, bool isWrite) ;

/// @brief Method .ctor addr 0x23c5ca0 size 0x4c virtual false final false
 void _ctor(System::Exception ex, ::bs_hook::Il2CppWrapperType asyncStateObject, bool isWrite) ;

/// @brief Method get_IsCompleted addr 0x23c69d8 size 0x8 virtual true final true
 bool get_IsCompleted() ;

/// @brief Method get_AsyncWaitHandle addr 0x23c69e0 size 0xf8 virtual true final true
 System::Threading::WaitHandle get_AsyncWaitHandle() ;

/// @brief Method get_AsyncState addr 0x23c6ad8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType get_AsyncState() ;

/// @brief Method get_CompletedSynchronously addr 0x23c6ae0 size 0x8 virtual true final true
 bool get_CompletedSynchronously() ;

/// @brief Method ThrowIfError addr 0x23c6ae8 size 0x14 virtual false final false
 void ThrowIfError() ;

/// @brief Method EndRead addr 0x23c5cf0 size 0xf0 virtual false final false
static int32_t EndRead(System::IAsyncResult asyncResult) ;

/// @brief Method EndWrite addr 0x23c5f8c size 0xf4 virtual false final false
static void EndWrite(System::IAsyncResult asyncResult) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
// Type: ::<>c
namespace System::IO {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3600))
// CS Name: System.IO.Stream::<>c
class CORDL_TYPE System__IO__Stream____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__IO__Stream____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Stream____c", modifiers: " const&", def_value: None }]
constexpr System__IO__Stream____c(System__IO__Stream____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Stream____c", modifiers: "&&", def_value: None }]
constexpr System__IO__Stream____c(System__IO__Stream____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__IO__Stream____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__IO__Stream____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__IO__Stream____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__IO__Stream____c& operator=(System__IO__Stream____c&& o) noexcept = default;
  constexpr System__IO__Stream____c& operator=(System__IO__Stream____c const& o) noexcept = default;
                


// Fields

static System::IO::System__IO__Stream____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(System::IO::System__IO__Stream____c value) ;

static System::IO::System__IO__Stream____c __get___9() ;

static System::Func_1<System::Threading::SemaphoreSlim> __declspec(property(get=__get___9__4_0, put=__set___9__4_0))  __9__4_0;

static void __set___9__4_0(System::Func_1<System::Threading::SemaphoreSlim> value) ;

static System::Func_1<System::Threading::SemaphoreSlim> __get___9__4_0() ;

static System::Action_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get___9__37_0, put=__set___9__37_0))  __9__37_0;

static void __set___9__37_0(System::Action_1<::bs_hook::Il2CppWrapperType> value) ;

static System::Action_1<::bs_hook::Il2CppWrapperType> __get___9__37_0() ;

static System::Func_2<::bs_hook::Il2CppWrapperType,int32_t> __declspec(property(get=__get___9__40_0, put=__set___9__40_0))  __9__40_0;

static void __set___9__40_0(System::Func_2<::bs_hook::Il2CppWrapperType,int32_t> value) ;

static System::Func_2<::bs_hook::Il2CppWrapperType,int32_t> __get___9__40_0() ;

static System::Func_5<System::IO::Stream,System::IO::System__IO__Stream__ReadWriteParameters,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> __declspec(property(get=__get___9__45_0, put=__set___9__45_0))  __9__45_0;

static void __set___9__45_0(System::Func_5<System::IO::Stream,System::IO::System__IO__Stream__ReadWriteParameters,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> value) ;

static System::Func_5<System::IO::Stream,System::IO::System__IO__Stream__ReadWriteParameters,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> __get___9__45_0() ;

static System::Func_3<System::IO::Stream,System::IAsyncResult,int32_t> __declspec(property(get=__get___9__45_1, put=__set___9__45_1))  __9__45_1;

static void __set___9__45_1(System::Func_3<System::IO::Stream,System::IAsyncResult,int32_t> value) ;

static System::Func_3<System::IO::Stream,System::IAsyncResult,int32_t> __get___9__45_1() ;

static System::Func_2<::bs_hook::Il2CppWrapperType,int32_t> __declspec(property(get=__get___9__48_0, put=__set___9__48_0))  __9__48_0;

static void __set___9__48_0(System::Func_2<::bs_hook::Il2CppWrapperType,int32_t> value) ;

static System::Func_2<::bs_hook::Il2CppWrapperType,int32_t> __get___9__48_0() ;

static System::Action_2<System::Threading::Tasks::Task,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get___9__49_0, put=__set___9__49_0))  __9__49_0;

static void __set___9__49_0(System::Action_2<System::Threading::Tasks::Task,::bs_hook::Il2CppWrapperType> value) ;

static System::Action_2<System::Threading::Tasks::Task,::bs_hook::Il2CppWrapperType> __get___9__49_0() ;

static System::Func_5<System::IO::Stream,System::IO::System__IO__Stream__ReadWriteParameters,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> __declspec(property(get=__get___9__58_0, put=__set___9__58_0))  __9__58_0;

static void __set___9__58_0(System::Func_5<System::IO::Stream,System::IO::System__IO__Stream__ReadWriteParameters,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> value) ;

static System::Func_5<System::IO::Stream,System::IO::System__IO__Stream__ReadWriteParameters,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> __get___9__58_0() ;

static System::Func_3<System::IO::Stream,System::IAsyncResult,System::Threading::Tasks::VoidTaskResult> __declspec(property(get=__get___9__58_1, put=__set___9__58_1))  __9__58_1;

static void __set___9__58_1(System::Func_3<System::IO::Stream,System::IAsyncResult,System::Threading::Tasks::VoidTaskResult> value) ;

static System::Func_3<System::IO::Stream,System::IAsyncResult,System::Threading::Tasks::VoidTaskResult> __get___9__58_1() ;


// Methods

// Ctor Parameters []
explicit System__IO__Stream____c() ;

/// @brief Method .ctor addr 0x23c6c2c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <EnsureAsyncActiveSemaphoreInitialized>b__4_0 addr 0x23c6c34 size 0x64 virtual false final false
 System::Threading::SemaphoreSlim _EnsureAsyncActiveSemaphoreInitialized_b__4_0() ;

/// @brief Method <FlushAsync>b__37_0 addr 0x23c6c98 size 0xb0 virtual false final false
 void _FlushAsync_b__37_0(::bs_hook::Il2CppWrapperType state) ;

/// @brief Method <BeginReadInternal>b__40_0 addr 0x23c6d48 size 0x190 virtual false final false
 int32_t _BeginReadInternal_b__40_0(::bs_hook::Il2CppWrapperType _p0_) ;

/// @brief Method <BeginEndReadAsync>b__45_0 addr 0x23c6ed8 size 0x34 virtual false final false
 System::IAsyncResult _BeginEndReadAsync_b__45_0(System::IO::Stream stream, System::IO::System__IO__Stream__ReadWriteParameters args, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method <BeginEndReadAsync>b__45_1 addr 0x23c6f0c size 0x2c virtual false final false
 int32_t _BeginEndReadAsync_b__45_1(System::IO::Stream stream, System::IAsyncResult asyncResult) ;

/// @brief Method <BeginWriteInternal>b__48_0 addr 0x23c6f38 size 0x180 virtual false final false
 int32_t _BeginWriteInternal_b__48_0(::bs_hook::Il2CppWrapperType _p0_) ;

/// @brief Method <RunReadWriteTaskWhenReady>b__49_0 addr 0x23c70b8 size 0x6c virtual false final false
 void _RunReadWriteTaskWhenReady_b__49_0(System::Threading::Tasks::Task t, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method <BeginEndWriteAsync>b__58_0 addr 0x23c7124 size 0x34 virtual false final false
 System::IAsyncResult _BeginEndWriteAsync_b__58_0(System::IO::Stream stream, System::IO::System__IO__Stream__ReadWriteParameters args, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method <BeginEndWriteAsync>b__58_1 addr 0x23c7158 size 0x34 virtual false final false
 System::Threading::Tasks::VoidTaskResult _BeginEndWriteAsync_b__58_1(System::IO::Stream stream, System::IAsyncResult asyncResult) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
// Type: ::<CopyToAsyncInternal>d__28
namespace System::IO {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3601))
// CS Name: System.IO.Stream::<CopyToAsyncInternal>d__28
struct CORDL_TYPE System__IO__Stream___CopyToAsyncInternal_d__28 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "destination", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "_buffer_5__2", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: None }]
constexpr System__IO__Stream___CopyToAsyncInternal_d__28(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, int32_t bufferSize, System::IO::Stream __4__this, System::Threading::CancellationToken cancellationToken, System::IO::Stream destination, ::ArrayW<uint8_t> _buffer_5__2, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __u__1, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__2) noexcept;


                    constexpr System__IO__Stream___CopyToAsyncInternal_d__28(System__IO__Stream___CopyToAsyncInternal_d__28 const&) = default;
                    constexpr System__IO__Stream___CopyToAsyncInternal_d__28(System__IO__Stream___CopyToAsyncInternal_d__28&&) = default;
                    constexpr System__IO__Stream___CopyToAsyncInternal_d__28& operator=(System__IO__Stream___CopyToAsyncInternal_d__28 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__IO__Stream___CopyToAsyncInternal_d__28& operator=(System__IO__Stream___CopyToAsyncInternal_d__28&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x68};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__IO__Stream___CopyToAsyncInternal_d__28(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder __get___t__builder() const;

 int32_t __declspec(property(get=__get_bufferSize, put=__set_bufferSize))  bufferSize;

constexpr void __set_bufferSize(int32_t value) ;

constexpr int32_t __get_bufferSize() const;

 System::IO::Stream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::IO::Stream value) ;

constexpr System::IO::Stream __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::IO::Stream __declspec(property(get=__get_destination, put=__set_destination))  destination;

constexpr void __set_destination(System::IO::Stream value) ;

constexpr System::IO::Stream __get_destination() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__buffer_5__2, put=__set__buffer_5__2))  _buffer_5__2;

constexpr void __set__buffer_5__2(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__buffer_5__2() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __get___u__1() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x23c718c size 0x6dc virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x23c7868 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::IO
// Type: ::<FinishWriteAsync>d__57
namespace System::IO {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3602))
// CS Name: System.IO.Stream::<FinishWriteAsync>d__57
struct CORDL_TYPE System__IO__Stream___FinishWriteAsync_d__57 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "writeTask", ty: "System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "localBuffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr System__IO__Stream___FinishWriteAsync_d__57(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, System::Threading::Tasks::Task writeTask, ::ArrayW<uint8_t> localBuffer, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;


                    constexpr System__IO__Stream___FinishWriteAsync_d__57(System__IO__Stream___FinishWriteAsync_d__57 const&) = default;
                    constexpr System__IO__Stream___FinishWriteAsync_d__57(System__IO__Stream___FinishWriteAsync_d__57&&) = default;
                    constexpr System__IO__Stream___FinishWriteAsync_d__57& operator=(System__IO__Stream___FinishWriteAsync_d__57 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__IO__Stream___FinishWriteAsync_d__57& operator=(System__IO__Stream___FinishWriteAsync_d__57&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__IO__Stream___FinishWriteAsync_d__57(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder __get___t__builder() const;

 System::Threading::Tasks::Task __declspec(property(get=__get_writeTask, put=__set_writeTask))  writeTask;

constexpr void __set_writeTask(System::Threading::Tasks::Task value) ;

constexpr System::Threading::Tasks::Task __get_writeTask() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_localBuffer, put=__set_localBuffer))  localBuffer;

constexpr void __set_localBuffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_localBuffer() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x23c7874 size 0x20c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x23c7a80 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::IO
// Type: ::<<ReadAsync>g__FinishReadAsync|44_0>d
namespace System::IO {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3603))
// CS Name: System.IO.Stream::<<ReadAsync>g__FinishReadAsync|44_0>d
struct CORDL_TYPE System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "readTask", ty: "System::Threading::Tasks::Task_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "localBuffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "localDestination", ty: "System::Memory_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
constexpr System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d(int32_t __1__state, System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> __t__builder, System::Threading::Tasks::Task_1<int32_t> readTask, ::ArrayW<uint8_t> localBuffer, System::Memory_1<uint8_t> localDestination, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;


                    constexpr System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d(System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d const&) = default;
                    constexpr System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d(System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d&&) = default;
                    constexpr System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d& operator=(System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d& operator=(System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> value) ;

constexpr System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> __get___t__builder() const;

 System::Threading::Tasks::Task_1<int32_t> __declspec(property(get=__get_readTask, put=__set_readTask))  readTask;

constexpr void __set_readTask(System::Threading::Tasks::Task_1<int32_t> value) ;

constexpr System::Threading::Tasks::Task_1<int32_t> __get_readTask() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_localBuffer, put=__set_localBuffer))  localBuffer;

constexpr void __set_localBuffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_localBuffer() const;

 System::Memory_1<uint8_t> __declspec(property(get=__get_localDestination, put=__set_localDestination))  localDestination;

constexpr void __set_localDestination(System::Memory_1<uint8_t> value) ;

constexpr System::Memory_1<uint8_t> __get_localDestination() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x23c7a8c size 0x394 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x23c7e20 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c, "System.IO", "Stream/SynchronousAsyncResult/<>c");
NEED_NO_BOX(System::IO::Stream);
DEFINE_IL2CPP_ARG_TYPE(System::IO::Stream, "System.IO", "Stream");
NEED_NO_BOX(System::IO::System__IO__Stream__NullStream);
DEFINE_IL2CPP_ARG_TYPE(System::IO::System__IO__Stream__NullStream, "System.IO", "Stream/NullStream");
NEED_NO_BOX(System::IO::System__IO__Stream__ReadWriteTask);
DEFINE_IL2CPP_ARG_TYPE(System::IO::System__IO__Stream__ReadWriteTask, "System.IO", "Stream/ReadWriteTask");
NEED_NO_BOX(System::IO::System__IO__Stream__SynchronousAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(System::IO::System__IO__Stream__SynchronousAsyncResult, "System.IO", "Stream/SynchronousAsyncResult");
NEED_NO_BOX(System::IO::System__IO__Stream____c);
DEFINE_IL2CPP_ARG_TYPE(System::IO::System__IO__Stream____c, "System.IO", "Stream/<>c");
DEFINE_IL2CPP_ARG_TYPE(System::IO::System__IO__Stream__ReadWriteParameters, "System.IO", "Stream/ReadWriteParameters");
DEFINE_IL2CPP_ARG_TYPE(System::IO::System__IO__Stream___CopyToAsyncInternal_d__28, "System.IO", "Stream/<CopyToAsyncInternal>d__28");
DEFINE_IL2CPP_ARG_TYPE(System::IO::System__IO__Stream___FinishWriteAsync_d__57, "System.IO", "Stream/<FinishWriteAsync>d__57");
DEFINE_IL2CPP_ARG_TYPE(System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d, "System.IO", "Stream/<<ReadAsync>g__FinishReadAsync|44_0>d");
