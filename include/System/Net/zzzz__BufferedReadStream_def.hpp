#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Net/zzzz__WebReadStream_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Net {
class WebOperation;
}
namespace System::IO {
class Stream;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Net {
class BufferOffsetSize;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace System::Net {
class BufferedReadStream;
}
namespace System::Net {
struct System__Net__BufferedReadStream___ProcessReadAsync_d__2;
}
// Type: ::<ProcessReadAsync>d__2
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8002))
// CS Name: System.Net.BufferedReadStream::<ProcessReadAsync>d__2
struct CORDL_TYPE System__Net__BufferedReadStream___ProcessReadAsync_d__2 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::Net::BufferedReadStream", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
constexpr System__Net__BufferedReadStream___ProcessReadAsync_d__2(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, System::Threading::CancellationToken cancellationToken, System::Net::BufferedReadStream __4__this, int32_t size, ::ArrayW<uint8_t> buffer, int32_t offset, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;


                    constexpr System__Net__BufferedReadStream___ProcessReadAsync_d__2(System__Net__BufferedReadStream___ProcessReadAsync_d__2 const&) = default;
                    constexpr System__Net__BufferedReadStream___ProcessReadAsync_d__2(System__Net__BufferedReadStream___ProcessReadAsync_d__2&&) = default;
                    constexpr System__Net__BufferedReadStream___ProcessReadAsync_d__2& operator=(System__Net__BufferedReadStream___ProcessReadAsync_d__2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__BufferedReadStream___ProcessReadAsync_d__2& operator=(System__Net__BufferedReadStream___ProcessReadAsync_d__2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__BufferedReadStream___ProcessReadAsync_d__2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Net::BufferedReadStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Net::BufferedReadStream value) ;

constexpr System::Net::BufferedReadStream __get___4__this() const;

 int32_t __declspec(property(get=__get_size, put=__set_size))  size;

constexpr void __set_size(int32_t value) ;

constexpr int32_t __get_size() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buffer() const;

 int32_t __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(int32_t value) ;

constexpr int32_t __get_offset() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2829b14 size 0x2b0 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2829dc4 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::BufferedReadStream
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8003))
// CS Name: System.Net.BufferedReadStream
class CORDL_TYPE BufferedReadStream : public System::Net::WebReadStream {
public:
// Declarations
using _ProcessReadAsync_d__2 = System::Net::System__Net__BufferedReadStream___ProcessReadAsync_d__2;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~BufferedReadStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedReadStream", modifiers: " const&", def_value: None }]
constexpr BufferedReadStream(BufferedReadStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedReadStream", modifiers: "&&", def_value: None }]
constexpr BufferedReadStream(BufferedReadStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BufferedReadStream(void* ptr) noexcept : System::Net::WebReadStream(ptr) {
}


  constexpr BufferedReadStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BufferedReadStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BufferedReadStream& operator=(BufferedReadStream&& o) noexcept = default;
  constexpr BufferedReadStream& operator=(BufferedReadStream const& o) noexcept = default;
                


// Fields

 System::Net::BufferOffsetSize __declspec(property(get=__get_readBuffer, put=__set_readBuffer))  readBuffer;

constexpr void __set_readBuffer(System::Net::BufferOffsetSize value) ;

constexpr System::Net::BufferOffsetSize __get_readBuffer() const;


// Methods

// Ctor Parameters [CppParam { name: "operation", ty: "System::Net::WebOperation", modifiers: "", def_value: None }, CppParam { name: "innerStream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "readBuffer", ty: "System::Net::BufferOffsetSize", modifiers: "", def_value: None }]
explicit BufferedReadStream(System::Net::WebOperation operation, System::IO::Stream innerStream, System::Net::BufferOffsetSize readBuffer) ;

/// @brief Method .ctor addr 0x2829934 size 0x28 virtual false final false
 void _ctor(System::Net::WebOperation operation, System::IO::Stream innerStream, System::Net::BufferOffsetSize readBuffer) ;

/// @brief Method ProcessReadAsync addr 0x282995c size 0x128 virtual true final false
 System::Threading::Tasks::Task_1<int32_t> ProcessReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method TryReadFromBuffer addr 0x2829a84 size 0x90 virtual false final false
 bool TryReadFromBuffer(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ByRef<int32_t> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::BufferedReadStream);
DEFINE_IL2CPP_ARG_TYPE(System::Net::BufferedReadStream, "System.Net", "BufferedReadStream");
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__BufferedReadStream___ProcessReadAsync_d__2, "System.Net", "BufferedReadStream/<ProcessReadAsync>d__2");
