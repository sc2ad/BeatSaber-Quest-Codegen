#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class AsyncCallback;
}
namespace System::IO {
class Stream;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System {
class IAsyncResult;
}
namespace System::Net {
class WebOperation;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Exception;
}
namespace System::Runtime::CompilerServices {
struct System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace System::Net {
class WebReadStream;
}
namespace System::Net {
struct System__Net__WebReadStream___ReadAsync_d__28;
}
// Type: ::<ReadAsync>d__28
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8079))
// CS Name: System.Net.WebReadStream::<ReadAsync>d__28
struct CORDL_TYPE System__Net__WebReadStream___ReadAsync_d__28 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::Net::WebReadStream", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr System__Net__WebReadStream___ReadAsync_d__28(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, System::Net::WebReadStream __4__this, System::Threading::CancellationToken cancellationToken, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2) noexcept;


                    constexpr System__Net__WebReadStream___ReadAsync_d__28(System__Net__WebReadStream___ReadAsync_d__28 const&) = default;
                    constexpr System__Net__WebReadStream___ReadAsync_d__28(System__Net__WebReadStream___ReadAsync_d__28&&) = default;
                    constexpr System__Net__WebReadStream___ReadAsync_d__28& operator=(System__Net__WebReadStream___ReadAsync_d__28 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__WebReadStream___ReadAsync_d__28& operator=(System__Net__WebReadStream___ReadAsync_d__28&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x60};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__WebReadStream___ReadAsync_d__28(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __get___t__builder() const;

 System::Net::WebReadStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Net::WebReadStream value) ;

constexpr System::Net::WebReadStream __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buffer() const;

 int32_t __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(int32_t value) ;

constexpr int32_t __get_offset() const;

 int32_t __declspec(property(get=__get_size, put=__set_size))  size;

constexpr void __set_size(int32_t value) ;

constexpr int32_t __get_size() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __get___u__1() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x2851784 size 0x584 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2851d08 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::WebReadStream
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8080))
// CS Name: System.Net.WebReadStream
class CORDL_TYPE WebReadStream : public System::IO::Stream {
public:
// Declarations
using _ReadAsync_d__28 = System::Net::System__Net__WebReadStream___ReadAsync_d__28;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~WebReadStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "WebReadStream", modifiers: " const&", def_value: None }]
constexpr WebReadStream(WebReadStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WebReadStream", modifiers: "&&", def_value: None }]
constexpr WebReadStream(WebReadStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WebReadStream(void* ptr) noexcept : System::IO::Stream(ptr) {
}


  constexpr WebReadStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WebReadStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WebReadStream& operator=(WebReadStream&& o) noexcept = default;
  constexpr WebReadStream& operator=(WebReadStream const& o) noexcept = default;
                


// Fields

 System::Net::WebOperation __declspec(property(get=__get__Operation_k__BackingField, put=__set__Operation_k__BackingField))  _Operation_k__BackingField;

constexpr void __set__Operation_k__BackingField(System::Net::WebOperation value) ;

constexpr System::Net::WebOperation __get__Operation_k__BackingField() const;

 System::IO::Stream __declspec(property(get=__get__InnerStream_k__BackingField, put=__set__InnerStream_k__BackingField))  _InnerStream_k__BackingField;

constexpr void __set__InnerStream_k__BackingField(System::IO::Stream value) ;

constexpr System::IO::Stream __get__InnerStream_k__BackingField() const;

 bool __declspec(property(get=__get_disposed, put=__set_disposed))  disposed;

constexpr void __set_disposed(bool value) ;

constexpr bool __get_disposed() const;


// Properties

 System::Net::WebOperation __declspec(property(get=get_Operation))  Operation;

 System::IO::Stream __declspec(property(get=get_InnerStream))  InnerStream;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanWrite))  CanWrite;


// Methods

/// @brief Method get_Operation addr 0x2850d6c size 0x8 virtual false final false
 System::Net::WebOperation get_Operation() ;

/// @brief Method get_InnerStream addr 0x2850d74 size 0x8 virtual false final false
 System::IO::Stream get_InnerStream() ;

// Ctor Parameters [CppParam { name: "operation", ty: "System::Net::WebOperation", modifiers: "", def_value: None }, CppParam { name: "innerStream", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit WebReadStream(System::Net::WebOperation operation, System::IO::Stream innerStream) ;

/// @brief Method .ctor addr 0x2842354 size 0x70 virtual false final false
 void _ctor(System::Net::WebOperation operation, System::IO::Stream innerStream) ;

/// @brief Method get_Length addr 0x2850d7c size 0x40 virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x2850dbc size 0x40 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x2850dfc size 0x40 virtual true final false
 void set_Position(int64_t value) ;

/// @brief Method get_CanSeek addr 0x2850e3c size 0x8 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_CanRead addr 0x2850e44 size 0x8 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanWrite addr 0x2850e4c size 0x8 virtual true final false
 bool get_CanWrite() ;

/// @brief Method SetLength addr 0x2850e54 size 0x40 virtual true final false
 void SetLength(int64_t value) ;

/// @brief Method Seek addr 0x2850e94 size 0x40 virtual true final false
 int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) ;

/// @brief Method Write addr 0x2850ed4 size 0x40 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Flush addr 0x2850f14 size 0x40 virtual true final false
 void Flush() ;

/// @brief Method GetException addr 0x2850f54 size 0x168 virtual false final false
 System::Exception GetException(System::Exception e) ;

/// @brief Method Read addr 0x28510bc size 0x268 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

/// @brief Method BeginRead addr 0x2851324 size 0x1d0 virtual true final false
 System::IAsyncResult BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, System::AsyncCallback cb, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndRead addr 0x28514f4 size 0x124 virtual true final false
 int32_t EndRead(System::IAsyncResult r) ;

/// @brief Method ReadAsync addr 0x2851618 size 0x120 virtual true final true
 System::Threading::Tasks::Task_1<int32_t> ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ProcessReadAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Threading::Tasks::Task_1<int32_t> ProcessReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method FinishReading addr 0x2842628 size 0x104 virtual true final false
 System::Threading::Tasks::Task FinishReading(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Dispose addr 0x2851738 size 0x4c virtual true final false
 void Dispose(bool disposing) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::WebReadStream);
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebReadStream, "System.Net", "WebReadStream");
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__WebReadStream___ReadAsync_d__28, "System.Net", "WebReadStream/<ReadAsync>d__28");
