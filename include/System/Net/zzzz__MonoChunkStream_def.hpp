#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Net/zzzz__WebReadStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Net {
class MonoChunkParser;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Net {
class WebOperation;
}
namespace System::IO {
class Stream;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct ____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct ____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace System::Net {
class MonoChunkStream;
}
namespace System::Net {
struct ____System__Net__MonoChunkStream___FinishReading_d__8;
}
namespace System::Net {
struct ____System__Net__MonoChunkStream___ProcessReadAsync_d__7;
}
// Type: ::<ProcessReadAsync>d__7
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8045))
// CS Name: System.Net.MonoChunkStream::<ProcessReadAsync>d__7
struct CORDL_TYPE ____System__Net__MonoChunkStream___ProcessReadAsync_d__7 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::MonoChunkStream", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_moreBytes_5__2", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
constexpr ____System__Net__MonoChunkStream___ProcessReadAsync_d__7(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, ::System::Threading::CancellationToken cancellationToken, ::System::Net::MonoChunkStream __4__this, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::ArrayW<uint8_t> _moreBytes_5__2, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;


                    constexpr ____System__Net__MonoChunkStream___ProcessReadAsync_d__7(____System__Net__MonoChunkStream___ProcessReadAsync_d__7 const&) = default;
                    constexpr ____System__Net__MonoChunkStream___ProcessReadAsync_d__7(____System__Net__MonoChunkStream___ProcessReadAsync_d__7&&) = default;
                    constexpr ____System__Net__MonoChunkStream___ProcessReadAsync_d__7& operator=(____System__Net__MonoChunkStream___ProcessReadAsync_d__7 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Net__MonoChunkStream___ProcessReadAsync_d__7& operator=(____System__Net__MonoChunkStream___ProcessReadAsync_d__7&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__MonoChunkStream___ProcessReadAsync_d__7(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __get___t__builder() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::System::Net::MonoChunkStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Net::MonoChunkStream value) ;

constexpr ::System::Net::MonoChunkStream __get___4__this() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buffer() const;

 int32_t __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(int32_t value) ;

constexpr int32_t __get_offset() const;

 int32_t __declspec(property(get=__get_size, put=__set_size))  size;

constexpr void __set_size(int32_t value) ;

constexpr int32_t __get_size() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__moreBytes_5__2, put=__set__moreBytes_5__2))  _moreBytes_5__2;

constexpr void __set__moreBytes_5__2(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__moreBytes_5__2() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x284272c size 0x36c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2842a98 size 0x58 virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<FinishReading>d__8
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8046))
// CS Name: System.Net.MonoChunkStream::<FinishReading>d__8
struct CORDL_TYPE ____System__Net__MonoChunkStream___FinishReading_d__8 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::MonoChunkStream", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "_buffer_5__2", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
constexpr ____System__Net__MonoChunkStream___FinishReading_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::MonoChunkStream __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, ::ArrayW<uint8_t> _buffer_5__2, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__2) noexcept;


                    constexpr ____System__Net__MonoChunkStream___FinishReading_d__8(____System__Net__MonoChunkStream___FinishReading_d__8 const&) = default;
                    constexpr ____System__Net__MonoChunkStream___FinishReading_d__8(____System__Net__MonoChunkStream___FinishReading_d__8&&) = default;
                    constexpr ____System__Net__MonoChunkStream___FinishReading_d__8& operator=(____System__Net__MonoChunkStream___FinishReading_d__8 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Net__MonoChunkStream___FinishReading_d__8& operator=(____System__Net__MonoChunkStream___FinishReading_d__8&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__MonoChunkStream___FinishReading_d__8(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __get___t__builder() const;

 ::System::Net::MonoChunkStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Net::MonoChunkStream value) ;

constexpr ::System::Net::MonoChunkStream __get___4__this() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__1() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__buffer_5__2, put=__set__buffer_5__2))  _buffer_5__2;

constexpr void __set__buffer_5__2(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__buffer_5__2() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x2842af0 size 0x3d0 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2842ec0 size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::MonoChunkStream
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8047))
// CS Name: System.Net.MonoChunkStream
class CORDL_TYPE MonoChunkStream : public ::System::Net::WebReadStream {
public:
// Declarations
using _FinishReading_d__8 = ::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8;

using _ProcessReadAsync_d__7 = ::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MonoChunkStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoChunkStream", modifiers: " const&", def_value: None }]
constexpr MonoChunkStream(MonoChunkStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoChunkStream", modifiers: "&&", def_value: None }]
constexpr MonoChunkStream(MonoChunkStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoChunkStream(void* ptr) noexcept : ::System::Net::WebReadStream(ptr) {
}


  constexpr MonoChunkStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoChunkStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoChunkStream& operator=(MonoChunkStream&& o) noexcept = default;
  constexpr MonoChunkStream& operator=(MonoChunkStream const& o) noexcept = default;
                


// Fields

 ::System::Net::WebHeaderCollection __declspec(property(get=__get__Headers_k__BackingField, put=__set__Headers_k__BackingField))  _Headers_k__BackingField;

constexpr void __set__Headers_k__BackingField(::System::Net::WebHeaderCollection value) ;

constexpr ::System::Net::WebHeaderCollection __get__Headers_k__BackingField() const;

 ::System::Net::MonoChunkParser __declspec(property(get=__get__Decoder_k__BackingField, put=__set__Decoder_k__BackingField))  _Decoder_k__BackingField;

constexpr void __set__Decoder_k__BackingField(::System::Net::MonoChunkParser value) ;

constexpr ::System::Net::MonoChunkParser __get__Decoder_k__BackingField() const;


// Properties

 ::System::Net::MonoChunkParser __declspec(property(get=get_Decoder))  Decoder;


// Methods

/// @brief Method get_Decoder addr 0x28422bc size 0x8 virtual false final false
 ::System::Net::MonoChunkParser get_Decoder() ;

// Ctor Parameters [CppParam { name: "operation", ty: "::System::Net::WebOperation", modifiers: "", def_value: None }, CppParam { name: "innerStream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "headers", ty: "::System::Net::WebHeaderCollection", modifiers: "", def_value: None }]
explicit MonoChunkStream(::System::Net::WebOperation operation, ::System::IO::Stream innerStream, ::System::Net::WebHeaderCollection headers) ;

/// @brief Method .ctor addr 0x28422c4 size 0x90 virtual false final false
 void _ctor(::System::Net::WebOperation operation, ::System::IO::Stream innerStream, ::System::Net::WebHeaderCollection headers) ;

/// @brief Method ProcessReadAsync addr 0x28423c4 size 0x124 virtual true final false
 ::System::Threading::Tasks::Task_1<int32_t> ProcessReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method FinishReading addr 0x28424e8 size 0xe0 virtual true final false
 ::System::Threading::Tasks::Task FinishReading(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ThrowExpectingChunkTrailer addr 0x28425c8 size 0x5c virtual false final false
static void ThrowExpectingChunkTrailer() ;

/// @brief Method <>n__0 addr 0x2842624 size 0x4 virtual false final false
 ::System::Threading::Tasks::Task __n__0(::System::Threading::CancellationToken cancellationToken) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::MonoChunkStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::MonoChunkStream, "System.Net", "MonoChunkStream");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8, "System.Net", "MonoChunkStream/<FinishReading>d__8");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7, "System.Net", "MonoChunkStream/<ProcessReadAsync>d__7");
