#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Net/zzzz__WebConnectionStream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Net {
struct System__Net__WebResponseStream___ReadAllAsyncInner_d__47;
}
namespace System {
class Exception;
}
namespace System::Net {
struct ReadState;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Net {
class BufferOffsetSize;
}
namespace System {
class Version;
}
namespace System::Net {
struct System__Net__WebResponseStream___ReadAsync_d__40;
}
namespace System::Net {
class System__Net__WebResponseStream____c__DisplayClass41_0;
}
namespace System::Net {
struct System__Net__WebResponseStream___ReadAllAsync_d__48;
}
namespace System::Net {
struct WebExceptionStatus;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Net {
class WebRequestStream;
}
namespace System::Net {
class WebException;
}
namespace System::Net {
struct HttpStatusCode;
}
namespace System::Net {
class WebCompletionSource;
}
namespace System::Net {
class WebReadStream;
}
namespace System::Net {
struct System__Net__WebResponseStream___InitReadAsync_d__52;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::IO {
class MemoryStream;
}
namespace System::Threading {
class CancellationTokenSource;
}
// Forward declare root types
namespace System::Net {
class System__Net__WebResponseStream____c__DisplayClass41_0;
}
namespace System::Net {
class WebResponseStream;
}
namespace System::Net {
struct System__Net__WebResponseStream___InitReadAsync_d__52;
}
namespace System::Net {
struct System__Net__WebResponseStream___ReadAllAsyncInner_d__47;
}
namespace System::Net {
struct System__Net__WebResponseStream___ReadAllAsync_d__48;
}
namespace System::Net {
struct System__Net__WebResponseStream___ReadAsync_d__40;
}
// Type: ::<ReadAsync>d__40
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8090))
// CS Name: System.Net.WebResponseStream::<ReadAsync>d__40
struct CORDL_TYPE System__Net__WebResponseStream___ReadAsync_d__40 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::Net::WebResponseStream", modifiers: "", def_value: None }, CppParam { name: "_completion_5__2", ty: "System::Net::WebCompletionSource", modifiers: "", def_value: None }, CppParam { name: "_nbytes_5__3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_throwMe_5__4", ty: "System::Exception", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
constexpr System__Net__WebResponseStream___ReadAsync_d__40(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, System::Threading::CancellationToken cancellationToken, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Net::WebResponseStream __4__this, System::Net::WebCompletionSource _completion_5__2, int32_t _nbytes_5__3, System::Exception _throwMe_5__4, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::bs_hook::Il2CppWrapperType> __u__1, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__2) noexcept;


                    constexpr System__Net__WebResponseStream___ReadAsync_d__40(System__Net__WebResponseStream___ReadAsync_d__40 const&) = default;
                    constexpr System__Net__WebResponseStream___ReadAsync_d__40(System__Net__WebResponseStream___ReadAsync_d__40&&) = default;
                    constexpr System__Net__WebResponseStream___ReadAsync_d__40& operator=(System__Net__WebResponseStream___ReadAsync_d__40 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__WebResponseStream___ReadAsync_d__40& operator=(System__Net__WebResponseStream___ReadAsync_d__40&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x78};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__WebResponseStream___ReadAsync_d__40(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::ArrayW<uint8_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buffer() const;

 int32_t __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(int32_t value) ;

constexpr int32_t __get_offset() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Net::WebResponseStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Net::WebResponseStream value) ;

constexpr System::Net::WebResponseStream __get___4__this() const;

 System::Net::WebCompletionSource __declspec(property(get=__get__completion_5__2, put=__set__completion_5__2))  _completion_5__2;

constexpr void __set__completion_5__2(System::Net::WebCompletionSource value) ;

constexpr System::Net::WebCompletionSource __get__completion_5__2() const;

 int32_t __declspec(property(get=__get__nbytes_5__3, put=__set__nbytes_5__3))  _nbytes_5__3;

constexpr void __set__nbytes_5__3(int32_t value) ;

constexpr int32_t __get__nbytes_5__3() const;

 System::Exception __declspec(property(get=__get__throwMe_5__4, put=__set__throwMe_5__4))  _throwMe_5__4;

constexpr void __set__throwMe_5__4(System::Exception value) ;

constexpr System::Exception __get__throwMe_5__4() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::bs_hook::Il2CppWrapperType> __get___u__1() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x2856918 size 0x8e4 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x28571fc size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<>c__DisplayClass41_0
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8091))
// CS Name: System.Net.WebResponseStream::<>c__DisplayClass41_0
class CORDL_TYPE System__Net__WebResponseStream____c__DisplayClass41_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~System__Net__WebResponseStream____c__DisplayClass41_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__WebResponseStream____c__DisplayClass41_0", modifiers: " const&", def_value: None }]
constexpr System__Net__WebResponseStream____c__DisplayClass41_0(System__Net__WebResponseStream____c__DisplayClass41_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__WebResponseStream____c__DisplayClass41_0", modifiers: "&&", def_value: None }]
constexpr System__Net__WebResponseStream____c__DisplayClass41_0(System__Net__WebResponseStream____c__DisplayClass41_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__WebResponseStream____c__DisplayClass41_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__WebResponseStream____c__DisplayClass41_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__WebResponseStream____c__DisplayClass41_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__WebResponseStream____c__DisplayClass41_0& operator=(System__Net__WebResponseStream____c__DisplayClass41_0&& o) noexcept = default;
  constexpr System__Net__WebResponseStream____c__DisplayClass41_0& operator=(System__Net__WebResponseStream____c__DisplayClass41_0 const& o) noexcept = default;
                


// Fields

 System::Net::WebResponseStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Net::WebResponseStream value) ;

constexpr System::Net::WebResponseStream __get___4__this() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buffer() const;

 int32_t __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(int32_t value) ;

constexpr int32_t __get_offset() const;

 int32_t __declspec(property(get=__get_size, put=__set_size))  size;

constexpr void __set_size(int32_t value) ;

constexpr int32_t __get_size() const;


// Methods

static System::Net::System__Net__WebResponseStream____c__DisplayClass41_0 New_ctor() ;

/// @brief Method .ctor addr 0x285543c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ProcessRead>b__0 addr 0x2857254 size 0x3c virtual false final false
 System::Threading::Tasks::Task_1<int32_t> _ProcessRead_b__0(System::Threading::CancellationToken ct) ;

/// @brief Method <ProcessRead>b__1 addr 0x2857290 size 0x40 virtual false final false
 void _ProcessRead_b__1() ;

/// @brief Method <ProcessRead>b__2 addr 0x28572d0 size 0x24 virtual false final false
 bool _ProcessRead_b__2() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<ReadAllAsyncInner>d__47
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8092))
// CS Name: System.Net.WebResponseStream::<ReadAllAsyncInner>d__47
struct CORDL_TYPE System__Net__WebResponseStream___ReadAllAsyncInner_d__47 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::Net::WebResponseStream", modifiers: "", def_value: None }, CppParam { name: "_maximumSize_5__2", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "_ms_5__3", ty: "System::IO::MemoryStream", modifiers: "", def_value: None }, CppParam { name: "_buffer_5__4", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
constexpr System__Net__WebResponseStream___ReadAllAsyncInner_d__47(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>> __t__builder, System::Threading::CancellationToken cancellationToken, System::Net::WebResponseStream __4__this, int64_t _maximumSize_5__2, System::IO::MemoryStream _ms_5__3, ::ArrayW<uint8_t> _buffer_5__4, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;


                    constexpr System__Net__WebResponseStream___ReadAllAsyncInner_d__47(System__Net__WebResponseStream___ReadAllAsyncInner_d__47 const&) = default;
                    constexpr System__Net__WebResponseStream___ReadAllAsyncInner_d__47(System__Net__WebResponseStream___ReadAllAsyncInner_d__47&&) = default;
                    constexpr System__Net__WebResponseStream___ReadAllAsyncInner_d__47& operator=(System__Net__WebResponseStream___ReadAllAsyncInner_d__47 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__WebResponseStream___ReadAllAsyncInner_d__47& operator=(System__Net__WebResponseStream___ReadAllAsyncInner_d__47&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__WebResponseStream___ReadAllAsyncInner_d__47(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>> __get___t__builder() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Net::WebResponseStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Net::WebResponseStream value) ;

constexpr System::Net::WebResponseStream __get___4__this() const;

 int64_t __declspec(property(get=__get__maximumSize_5__2, put=__set__maximumSize_5__2))  _maximumSize_5__2;

constexpr void __set__maximumSize_5__2(int64_t value) ;

constexpr int64_t __get__maximumSize_5__2() const;

 System::IO::MemoryStream __declspec(property(get=__get__ms_5__3, put=__set__ms_5__3))  _ms_5__3;

constexpr void __set__ms_5__3(System::IO::MemoryStream value) ;

constexpr System::IO::MemoryStream __get__ms_5__3() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__buffer_5__4, put=__set__buffer_5__4))  _buffer_5__4;

constexpr void __set__buffer_5__4(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__buffer_5__4() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x28572f4 size 0x568 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x285785c size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<ReadAllAsync>d__48
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8093))
// CS Name: System.Net.WebResponseStream::<ReadAllAsync>d__48
struct CORDL_TYPE System__Net__WebResponseStream___ReadAllAsync_d__48 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::Net::WebResponseStream", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "resending", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_completion_5__2", ty: "System::Net::WebCompletionSource", modifiers: "", def_value: None }, CppParam { name: "_timeoutCts_5__3", ty: "System::Threading::CancellationTokenSource", modifiers: "", def_value: None }, CppParam { name: "_timeoutTask_5__4", ty: "System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Threading::Tasks::Task>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<uint8_t>>", modifiers: "", def_value: None }]
constexpr System__Net__WebResponseStream___ReadAllAsync_d__48(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, System::Net::WebResponseStream __4__this, System::Threading::CancellationToken cancellationToken, bool resending, System::Net::WebCompletionSource _completion_5__2, System::Threading::CancellationTokenSource _timeoutCts_5__3, System::Threading::Tasks::Task _timeoutTask_5__4, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Threading::Tasks::Task> __u__1, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<uint8_t>> __u__2) noexcept;


                    constexpr System__Net__WebResponseStream___ReadAllAsync_d__48(System__Net__WebResponseStream___ReadAllAsync_d__48 const&) = default;
                    constexpr System__Net__WebResponseStream___ReadAllAsync_d__48(System__Net__WebResponseStream___ReadAllAsync_d__48&&) = default;
                    constexpr System__Net__WebResponseStream___ReadAllAsync_d__48& operator=(System__Net__WebResponseStream___ReadAllAsync_d__48 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__WebResponseStream___ReadAllAsync_d__48& operator=(System__Net__WebResponseStream___ReadAllAsync_d__48&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x70};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__WebResponseStream___ReadAllAsync_d__48(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 System::Net::WebResponseStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Net::WebResponseStream value) ;

constexpr System::Net::WebResponseStream __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 bool __declspec(property(get=__get_resending, put=__set_resending))  resending;

constexpr void __set_resending(bool value) ;

constexpr bool __get_resending() const;

 System::Net::WebCompletionSource __declspec(property(get=__get__completion_5__2, put=__set__completion_5__2))  _completion_5__2;

constexpr void __set__completion_5__2(System::Net::WebCompletionSource value) ;

constexpr System::Net::WebCompletionSource __get__completion_5__2() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get__timeoutCts_5__3, put=__set__timeoutCts_5__3))  _timeoutCts_5__3;

constexpr void __set__timeoutCts_5__3(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get__timeoutCts_5__3() const;

 System::Threading::Tasks::Task __declspec(property(get=__get__timeoutTask_5__4, put=__set__timeoutTask_5__4))  _timeoutTask_5__4;

constexpr void __set__timeoutTask_5__4(System::Threading::Tasks::Task value) ;

constexpr System::Threading::Tasks::Task __get__timeoutTask_5__4() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Threading::Tasks::Task> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Threading::Tasks::Task> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Threading::Tasks::Task> __get___u__1() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<uint8_t>> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<uint8_t>> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<uint8_t>> __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x28578b4 size 0x95c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2858210 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<InitReadAsync>d__52
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8094))
// CS Name: System.Net.WebResponseStream::<InitReadAsync>d__52
struct CORDL_TYPE System__Net__WebResponseStream___InitReadAsync_d__52 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::Net::WebResponseStream", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_buffer_5__2", ty: "System::Net::BufferOffsetSize", modifiers: "", def_value: None }, CppParam { name: "_state_5__3", ty: "System::Net::ReadState", modifiers: "", def_value: None }, CppParam { name: "_position_5__4", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
constexpr System__Net__WebResponseStream___InitReadAsync_d__52(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, System::Net::WebResponseStream __4__this, System::Threading::CancellationToken cancellationToken, System::Net::BufferOffsetSize _buffer_5__2, System::Net::ReadState _state_5__3, int32_t _position_5__4, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;


                    constexpr System__Net__WebResponseStream___InitReadAsync_d__52(System__Net__WebResponseStream___InitReadAsync_d__52 const&) = default;
                    constexpr System__Net__WebResponseStream___InitReadAsync_d__52(System__Net__WebResponseStream___InitReadAsync_d__52&&) = default;
                    constexpr System__Net__WebResponseStream___InitReadAsync_d__52& operator=(System__Net__WebResponseStream___InitReadAsync_d__52 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__WebResponseStream___InitReadAsync_d__52& operator=(System__Net__WebResponseStream___InitReadAsync_d__52&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__WebResponseStream___InitReadAsync_d__52(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 System::Net::WebResponseStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Net::WebResponseStream value) ;

constexpr System::Net::WebResponseStream __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Net::BufferOffsetSize __declspec(property(get=__get__buffer_5__2, put=__set__buffer_5__2))  _buffer_5__2;

constexpr void __set__buffer_5__2(System::Net::BufferOffsetSize value) ;

constexpr System::Net::BufferOffsetSize __get__buffer_5__2() const;

 System::Net::ReadState __declspec(property(get=__get__state_5__3, put=__set__state_5__3))  _state_5__3;

constexpr void __set__state_5__3(System::Net::ReadState value) ;

constexpr System::Net::ReadState __get__state_5__3() const;

 int32_t __declspec(property(get=__get__position_5__4, put=__set__position_5__4))  _position_5__4;

constexpr void __set__position_5__4(int32_t value) ;

constexpr int32_t __get__position_5__4() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x285821c size 0x6bc virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x28588d8 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::WebResponseStream
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8071))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8095))
// CS Name: System.Net.WebResponseStream
class CORDL_TYPE WebResponseStream : public System::Net::WebConnectionStream {
public:
// Declarations
using _InitReadAsync_d__52 = System::Net::System__Net__WebResponseStream___InitReadAsync_d__52;

using _ReadAllAsync_d__48 = System::Net::System__Net__WebResponseStream___ReadAllAsync_d__48;

using _ReadAllAsyncInner_d__47 = System::Net::System__Net__WebResponseStream___ReadAllAsyncInner_d__47;

using __c__DisplayClass41_0 = System::Net::System__Net__WebResponseStream____c__DisplayClass41_0;

using _ReadAsync_d__40 = System::Net::System__Net__WebResponseStream___ReadAsync_d__40;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~WebResponseStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "WebResponseStream", modifiers: " const&", def_value: None }]
constexpr WebResponseStream(WebResponseStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WebResponseStream", modifiers: "&&", def_value: None }]
constexpr WebResponseStream(WebResponseStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WebResponseStream(void* ptr) noexcept : System::Net::WebConnectionStream(ptr) {
}


  constexpr WebResponseStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WebResponseStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WebResponseStream& operator=(WebResponseStream&& o) noexcept = default;
  constexpr WebResponseStream& operator=(WebResponseStream const& o) noexcept = default;
                


// Fields

 System::Net::WebReadStream __declspec(property(get=__get_innerStream, put=__set_innerStream))  innerStream;

constexpr void __set_innerStream(System::Net::WebReadStream value) ;

constexpr System::Net::WebReadStream __get_innerStream() const;

 bool __declspec(property(get=__get_nextReadCalled, put=__set_nextReadCalled))  nextReadCalled;

constexpr void __set_nextReadCalled(bool value) ;

constexpr bool __get_nextReadCalled() const;

 bool __declspec(property(get=__get_bufferedEntireContent, put=__set_bufferedEntireContent))  bufferedEntireContent;

constexpr void __set_bufferedEntireContent(bool value) ;

constexpr bool __get_bufferedEntireContent() const;

 System::Net::WebCompletionSource __declspec(property(get=__get_pendingRead, put=__set_pendingRead))  pendingRead;

constexpr void __set_pendingRead(System::Net::WebCompletionSource value) ;

constexpr System::Net::WebCompletionSource __get_pendingRead() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_locker, put=__set_locker))  locker;

constexpr void __set_locker(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_locker() const;

 int32_t __declspec(property(get=__get_nestedRead, put=__set_nestedRead))  nestedRead;

constexpr void __set_nestedRead(int32_t value) ;

constexpr int32_t __get_nestedRead() const;

 bool __declspec(property(get=__get_read_eof, put=__set_read_eof))  read_eof;

constexpr void __set_read_eof(bool value) ;

constexpr bool __get_read_eof() const;

 System::Net::WebRequestStream __declspec(property(get=__get__RequestStream_k__BackingField, put=__set__RequestStream_k__BackingField))  _RequestStream_k__BackingField;

constexpr void __set__RequestStream_k__BackingField(System::Net::WebRequestStream value) ;

constexpr System::Net::WebRequestStream __get__RequestStream_k__BackingField() const;

 System::Net::WebHeaderCollection __declspec(property(get=__get__Headers_k__BackingField, put=__set__Headers_k__BackingField))  _Headers_k__BackingField;

constexpr void __set__Headers_k__BackingField(System::Net::WebHeaderCollection value) ;

constexpr System::Net::WebHeaderCollection __get__Headers_k__BackingField() const;

 System::Net::HttpStatusCode __declspec(property(get=__get__StatusCode_k__BackingField, put=__set__StatusCode_k__BackingField))  _StatusCode_k__BackingField;

constexpr void __set__StatusCode_k__BackingField(System::Net::HttpStatusCode value) ;

constexpr System::Net::HttpStatusCode __get__StatusCode_k__BackingField() const;

 ::StringW __declspec(property(get=__get__StatusDescription_k__BackingField, put=__set__StatusDescription_k__BackingField))  _StatusDescription_k__BackingField;

constexpr void __set__StatusDescription_k__BackingField(::StringW value) ;

constexpr ::StringW __get__StatusDescription_k__BackingField() const;

 System::Version __declspec(property(get=__get__Version_k__BackingField, put=__set__Version_k__BackingField))  _Version_k__BackingField;

constexpr void __set__Version_k__BackingField(System::Version value) ;

constexpr System::Version __get__Version_k__BackingField() const;

 bool __declspec(property(get=__get__KeepAlive_k__BackingField, put=__set__KeepAlive_k__BackingField))  _KeepAlive_k__BackingField;

constexpr void __set__KeepAlive_k__BackingField(bool value) ;

constexpr bool __get__KeepAlive_k__BackingField() const;

 bool __declspec(property(get=__get__ChunkedRead_k__BackingField, put=__set__ChunkedRead_k__BackingField))  _ChunkedRead_k__BackingField;

constexpr void __set__ChunkedRead_k__BackingField(bool value) ;

constexpr bool __get__ChunkedRead_k__BackingField() const;


// Properties

 System::Net::WebRequestStream __declspec(property(get=get_RequestStream))  RequestStream;

 System::Net::WebHeaderCollection __declspec(property(get=get_Headers, put=set_Headers))  Headers;

 System::Net::HttpStatusCode __declspec(property(get=get_StatusCode, put=set_StatusCode))  StatusCode;

 ::StringW __declspec(property(get=get_StatusDescription, put=set_StatusDescription))  StatusDescription;

 System::Version __declspec(property(get=get_Version, put=set_Version))  Version;

 bool __declspec(property(get=get_KeepAlive, put=set_KeepAlive))  KeepAlive;

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 bool __declspec(property(get=get_ChunkedRead, put=set_ChunkedRead))  ChunkedRead;

 bool __declspec(property(get=get_ExpectContent))  ExpectContent;


// Methods

/// @brief Method get_RequestStream addr 0x2854f84 size 0x8 virtual false final false
 System::Net::WebRequestStream get_RequestStream() ;

/// @brief Method get_Headers addr 0x2854f8c size 0x8 virtual false final false
 System::Net::WebHeaderCollection get_Headers() ;

/// @brief Method set_Headers addr 0x2854f94 size 0x8 virtual false final false
 void set_Headers(System::Net::WebHeaderCollection value) ;

/// @brief Method get_StatusCode addr 0x2854f9c size 0x8 virtual false final false
 System::Net::HttpStatusCode get_StatusCode() ;

/// @brief Method set_StatusCode addr 0x2854fa4 size 0x8 virtual false final false
 void set_StatusCode(System::Net::HttpStatusCode value) ;

/// @brief Method get_StatusDescription addr 0x2854fac size 0x8 virtual false final false
 ::StringW get_StatusDescription() ;

/// @brief Method set_StatusDescription addr 0x2854fb4 size 0x8 virtual false final false
 void set_StatusDescription(::StringW value) ;

/// @brief Method get_Version addr 0x2854fbc size 0x8 virtual false final false
 System::Version get_Version() ;

/// @brief Method set_Version addr 0x2854fc4 size 0x8 virtual false final false
 void set_Version(System::Version value) ;

/// @brief Method get_KeepAlive addr 0x2854fcc size 0x8 virtual false final false
 bool get_KeepAlive() ;

/// @brief Method set_KeepAlive addr 0x2854fd4 size 0xc virtual false final false
 void set_KeepAlive(bool value) ;

static System::Net::WebResponseStream New_ctor(System::Net::WebRequestStream request) ;

/// @brief Method .ctor addr 0x2854fe0 size 0x84 virtual false final false
 void _ctor(System::Net::WebRequestStream request) ;

/// @brief Method get_CanRead addr 0x2855064 size 0x8 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanWrite addr 0x285506c size 0x8 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_ChunkedRead addr 0x2855074 size 0x8 virtual false final false
 bool get_ChunkedRead() ;

/// @brief Method set_ChunkedRead addr 0x285507c size 0xc virtual false final false
 void set_ChunkedRead(bool value) ;

/// @brief Method ReadAsync addr 0x2855088 size 0x134 virtual true final false
 System::Threading::Tasks::Task_1<int32_t> ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ProcessRead addr 0x28551bc size 0x280 virtual false final false
 System::Threading::Tasks::Task_1<int32_t> ProcessRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method TryReadFromBufferedContent addr 0x2855444 size 0xcc virtual true final false
 bool TryReadFromBufferedContent(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ByRef<int32_t> result) ;

/// @brief Method get_ExpectContent addr 0x2855510 size 0x90 virtual false final false
 bool get_ExpectContent() ;

/// @brief Method Initialize addr 0x28555a0 size 0x52c virtual false final false
 void Initialize(System::Net::BufferOffsetSize buffer) ;

/// @brief Method ReadAllAsyncInner addr 0x2855acc size 0x100 virtual false final false
 System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> ReadAllAsyncInner(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ReadAllAsync addr 0x2855bcc size 0xf4 virtual false final false
 System::Threading::Tasks::Task ReadAllAsync(bool resending, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WriteAsync addr 0x2855cc0 size 0x9c virtual true final false
 System::Threading::Tasks::Task WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Close_internal addr 0x2855d5c size 0x8c virtual true final false
 void Close_internal(ByRef<bool> disposed) ;

/// @brief Method GetReadException addr 0x2855de8 size 0x29c virtual false final false
 System::Net::WebException GetReadException(System::Net::WebExceptionStatus status, System::Exception error, ::StringW where) ;

/// @brief Method InitReadAsync addr 0x2856084 size 0xdc virtual false final false
 System::Threading::Tasks::Task InitReadAsync(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method GetResponse addr 0x2856160 size 0x7b8 virtual false final false
 bool GetResponse(System::Net::BufferOffsetSize buffer, ByRef<int32_t> pos, ByRef<System::Net::ReadState> state) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::System__Net__WebResponseStream____c__DisplayClass41_0);
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__WebResponseStream____c__DisplayClass41_0, "System.Net", "WebResponseStream/<>c__DisplayClass41_0");
NEED_NO_BOX(System::Net::WebResponseStream);
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebResponseStream, "System.Net", "WebResponseStream");
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__WebResponseStream___InitReadAsync_d__52, "System.Net", "WebResponseStream/<InitReadAsync>d__52");
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__WebResponseStream___ReadAllAsyncInner_d__47, "System.Net", "WebResponseStream/<ReadAllAsyncInner>d__47");
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__WebResponseStream___ReadAllAsync_d__48, "System.Net", "WebResponseStream/<ReadAllAsync>d__48");
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__WebResponseStream___ReadAsync_d__40, "System.Net", "WebResponseStream/<ReadAsync>d__40");
