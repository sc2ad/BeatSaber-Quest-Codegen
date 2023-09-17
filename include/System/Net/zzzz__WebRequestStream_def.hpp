#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Net/zzzz__WebConnectionStream_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Threading {
struct CancellationToken;
}
namespace System::Net {
class WebOperation;
}
namespace System::Net {
class BufferOffsetSize;
}
namespace System::IO {
class Stream;
}
namespace System::IO {
class MemoryStream;
}
namespace System::Net {
class WebConnectionTunnel;
}
namespace System::Net {
class WebCompletionSource;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Net {
class WebConnection;
}
namespace System::Runtime::CompilerServices {
struct ____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct ____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
// Forward declare root types
namespace System::Net {
class WebRequestStream;
}
namespace System::Net {
struct ____System__Net__WebRequestStream___FinishWriting_d__31;
}
namespace System::Net {
struct ____System__Net__WebRequestStream___Initialize_d__36;
}
namespace System::Net {
struct ____System__Net__WebRequestStream___ProcessWrite_d__34;
}
namespace System::Net {
struct ____System__Net__WebRequestStream___SetHeadersAsync_d__37;
}
namespace System::Net {
struct ____System__Net__WebRequestStream___WriteAsyncInner_d__33;
}
namespace System::Net {
struct ____System__Net__WebRequestStream___WriteChunkTrailer_d__40;
}
namespace System::Net {
struct ____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39;
}
namespace System::Net {
struct ____System__Net__WebRequestStream___WriteRequestAsync_d__38;
}
// Type: ::<FinishWriting>d__31
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8081))
// CS Name: System.Net.WebRequestStream::<FinishWriting>d__31
struct CORDL_TYPE ____System__Net__WebRequestStream___FinishWriting_d__31 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr ____System__Net__WebRequestStream___FinishWriting_d__31(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;


                    constexpr ____System__Net__WebRequestStream___FinishWriting_d__31(____System__Net__WebRequestStream___FinishWriting_d__31 const&) = default;
                    constexpr ____System__Net__WebRequestStream___FinishWriting_d__31(____System__Net__WebRequestStream___FinishWriting_d__31&&) = default;
                    constexpr ____System__Net__WebRequestStream___FinishWriting_d__31& operator=(____System__Net__WebRequestStream___FinishWriting_d__31 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Net__WebRequestStream___FinishWriting_d__31& operator=(____System__Net__WebRequestStream___FinishWriting_d__31&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__WebRequestStream___FinishWriting_d__31(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::System::Net::WebRequestStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Net::WebRequestStream value) ;

constexpr ::System::Net::WebRequestStream __get___4__this() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2852b14 size 0x2e0 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2852df4 size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<WriteAsyncInner>d__33
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8082))
// CS Name: System.Net.WebRequestStream::<WriteAsyncInner>d__33
struct CORDL_TYPE ____System__Net__WebRequestStream___WriteAsyncInner_d__33 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "completion", ty: "::System::Net::WebCompletionSource", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr ____System__Net__WebRequestStream___WriteAsyncInner_d__33(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream __4__this, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Threading::CancellationToken cancellationToken, ::System::Net::WebCompletionSource completion, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;


                    constexpr ____System__Net__WebRequestStream___WriteAsyncInner_d__33(____System__Net__WebRequestStream___WriteAsyncInner_d__33 const&) = default;
                    constexpr ____System__Net__WebRequestStream___WriteAsyncInner_d__33(____System__Net__WebRequestStream___WriteAsyncInner_d__33&&) = default;
                    constexpr ____System__Net__WebRequestStream___WriteAsyncInner_d__33& operator=(____System__Net__WebRequestStream___WriteAsyncInner_d__33 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Net__WebRequestStream___WriteAsyncInner_d__33& operator=(____System__Net__WebRequestStream___WriteAsyncInner_d__33&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x60};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__WebRequestStream___WriteAsyncInner_d__33(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::System::Net::WebRequestStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Net::WebRequestStream value) ;

constexpr ::System::Net::WebRequestStream __get___4__this() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buffer() const;

 int32_t __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(int32_t value) ;

constexpr int32_t __get_offset() const;

 int32_t __declspec(property(get=__get_size, put=__set_size))  size;

constexpr void __set_size(int32_t value) ;

constexpr int32_t __get_size() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::System::Net::WebCompletionSource __declspec(property(get=__get_completion, put=__set_completion))  completion;

constexpr void __set_completion(::System::Net::WebCompletionSource value) ;

constexpr ::System::Net::WebCompletionSource __get_completion() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__1() const;

 ::System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x2852e00 size 0x4ac virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x28532ac size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<ProcessWrite>d__34
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8083))
// CS Name: System.Net.WebRequestStream::<ProcessWrite>d__34
struct CORDL_TYPE ____System__Net__WebRequestStream___ProcessWrite_d__34 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr ____System__Net__WebRequestStream___ProcessWrite_d__34(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream __4__this, ::System::Threading::CancellationToken cancellationToken, int32_t size, ::ArrayW<uint8_t> buffer, int32_t offset, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;


                    constexpr ____System__Net__WebRequestStream___ProcessWrite_d__34(____System__Net__WebRequestStream___ProcessWrite_d__34 const&) = default;
                    constexpr ____System__Net__WebRequestStream___ProcessWrite_d__34(____System__Net__WebRequestStream___ProcessWrite_d__34&&) = default;
                    constexpr ____System__Net__WebRequestStream___ProcessWrite_d__34& operator=(____System__Net__WebRequestStream___ProcessWrite_d__34 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Net__WebRequestStream___ProcessWrite_d__34& operator=(____System__Net__WebRequestStream___ProcessWrite_d__34&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__WebRequestStream___ProcessWrite_d__34(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::System::Net::WebRequestStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Net::WebRequestStream value) ;

constexpr ::System::Net::WebRequestStream __get___4__this() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 int32_t __declspec(property(get=__get_size, put=__set_size))  size;

constexpr void __set_size(int32_t value) ;

constexpr int32_t __get_size() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buffer() const;

 int32_t __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(int32_t value) ;

constexpr int32_t __get_offset() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x28532b8 size 0x534 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x28537ec size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<Initialize>d__36
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8084))
// CS Name: System.Net.WebRequestStream::<Initialize>d__36
struct CORDL_TYPE ____System__Net__WebRequestStream___Initialize_d__36 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr ____System__Net__WebRequestStream___Initialize_d__36(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;


                    constexpr ____System__Net__WebRequestStream___Initialize_d__36(____System__Net__WebRequestStream___Initialize_d__36 const&) = default;
                    constexpr ____System__Net__WebRequestStream___Initialize_d__36(____System__Net__WebRequestStream___Initialize_d__36&&) = default;
                    constexpr ____System__Net__WebRequestStream___Initialize_d__36& operator=(____System__Net__WebRequestStream___Initialize_d__36 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Net__WebRequestStream___Initialize_d__36& operator=(____System__Net__WebRequestStream___Initialize_d__36&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__WebRequestStream___Initialize_d__36(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::System::Net::WebRequestStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Net::WebRequestStream value) ;

constexpr ::System::Net::WebRequestStream __get___4__this() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__1() const;

 ::System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x28537f8 size 0x308 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2853b00 size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<SetHeadersAsync>d__37
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8085))
// CS Name: System.Net.WebRequestStream::<SetHeadersAsync>d__37
struct CORDL_TYPE ____System__Net__WebRequestStream___SetHeadersAsync_d__37 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "setInternalLength", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr ____System__Net__WebRequestStream___SetHeadersAsync_d__37(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream __4__this, ::System::Threading::CancellationToken cancellationToken, bool setInternalLength, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;


                    constexpr ____System__Net__WebRequestStream___SetHeadersAsync_d__37(____System__Net__WebRequestStream___SetHeadersAsync_d__37 const&) = default;
                    constexpr ____System__Net__WebRequestStream___SetHeadersAsync_d__37(____System__Net__WebRequestStream___SetHeadersAsync_d__37&&) = default;
                    constexpr ____System__Net__WebRequestStream___SetHeadersAsync_d__37& operator=(____System__Net__WebRequestStream___SetHeadersAsync_d__37 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Net__WebRequestStream___SetHeadersAsync_d__37& operator=(____System__Net__WebRequestStream___SetHeadersAsync_d__37&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__WebRequestStream___SetHeadersAsync_d__37(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::System::Net::WebRequestStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Net::WebRequestStream value) ;

constexpr ::System::Net::WebRequestStream __get___4__this() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 bool __declspec(property(get=__get_setInternalLength, put=__set_setInternalLength))  setInternalLength;

constexpr void __set_setInternalLength(bool value) ;

constexpr bool __get_setInternalLength() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2853b0c size 0x69c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x28541a8 size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<WriteRequestAsync>d__38
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8086))
// CS Name: System.Net.WebRequestStream::<WriteRequestAsync>d__38
struct CORDL_TYPE ____System__Net__WebRequestStream___WriteRequestAsync_d__38 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_buffer_5__2", ty: "::System::Net::BufferOffsetSize", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr ____System__Net__WebRequestStream___WriteRequestAsync_d__38(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Net::BufferOffsetSize _buffer_5__2, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;


                    constexpr ____System__Net__WebRequestStream___WriteRequestAsync_d__38(____System__Net__WebRequestStream___WriteRequestAsync_d__38 const&) = default;
                    constexpr ____System__Net__WebRequestStream___WriteRequestAsync_d__38(____System__Net__WebRequestStream___WriteRequestAsync_d__38&&) = default;
                    constexpr ____System__Net__WebRequestStream___WriteRequestAsync_d__38& operator=(____System__Net__WebRequestStream___WriteRequestAsync_d__38 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Net__WebRequestStream___WriteRequestAsync_d__38& operator=(____System__Net__WebRequestStream___WriteRequestAsync_d__38&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__WebRequestStream___WriteRequestAsync_d__38(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::System::Net::WebRequestStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Net::WebRequestStream value) ;

constexpr ::System::Net::WebRequestStream __get___4__this() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::System::Net::BufferOffsetSize __declspec(property(get=__get__buffer_5__2, put=__set__buffer_5__2))  _buffer_5__2;

constexpr void __set__buffer_5__2(::System::Net::BufferOffsetSize value) ;

constexpr ::System::Net::BufferOffsetSize __get__buffer_5__2() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__1() const;

 ::System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x28541b4 size 0x4b8 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x285466c size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<WriteChunkTrailer_inner>d__39
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8087))
// CS Name: System.Net.WebRequestStream::<WriteChunkTrailer_inner>d__39
struct CORDL_TYPE ____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr ____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;


                    constexpr ____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39(____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39 const&) = default;
                    constexpr ____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39(____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39&&) = default;
                    constexpr ____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39& operator=(____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39& operator=(____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::System::Net::WebRequestStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Net::WebRequestStream value) ;

constexpr ::System::Net::WebRequestStream __get___4__this() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2854678 size 0x234 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x28548ac size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<WriteChunkTrailer>d__40
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8088))
// CS Name: System.Net.WebRequestStream::<WriteChunkTrailer>d__40
struct CORDL_TYPE ____System__Net__WebRequestStream___WriteChunkTrailer_d__40 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream", modifiers: "", def_value: None }, CppParam { name: "_cts_5__2", ty: "::System::Threading::CancellationTokenSource", modifiers: "", def_value: None }, CppParam { name: "_timeoutTask_5__3", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr ____System__Net__WebRequestStream___WriteChunkTrailer_d__40(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream __4__this, ::System::Threading::CancellationTokenSource _cts_5__2, ::System::Threading::Tasks::Task _timeoutTask_5__3, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task> __u__1, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2) noexcept;


                    constexpr ____System__Net__WebRequestStream___WriteChunkTrailer_d__40(____System__Net__WebRequestStream___WriteChunkTrailer_d__40 const&) = default;
                    constexpr ____System__Net__WebRequestStream___WriteChunkTrailer_d__40(____System__Net__WebRequestStream___WriteChunkTrailer_d__40&&) = default;
                    constexpr ____System__Net__WebRequestStream___WriteChunkTrailer_d__40& operator=(____System__Net__WebRequestStream___WriteChunkTrailer_d__40 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Net__WebRequestStream___WriteChunkTrailer_d__40& operator=(____System__Net__WebRequestStream___WriteChunkTrailer_d__40&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__WebRequestStream___WriteChunkTrailer_d__40(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::System::Net::WebRequestStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Net::WebRequestStream value) ;

constexpr ::System::Net::WebRequestStream __get___4__this() const;

 ::System::Threading::CancellationTokenSource __declspec(property(get=__get__cts_5__2, put=__set__cts_5__2))  _cts_5__2;

constexpr void __set__cts_5__2(::System::Threading::CancellationTokenSource value) ;

constexpr ::System::Threading::CancellationTokenSource __get__cts_5__2() const;

 ::System::Threading::Tasks::Task __declspec(property(get=__get__timeoutTask_5__3, put=__set__timeoutTask_5__3))  _timeoutTask_5__3;

constexpr void __set__timeoutTask_5__3(::System::Threading::Tasks::Task value) ;

constexpr ::System::Threading::Tasks::Task __get__timeoutTask_5__3() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task> value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task> __get___u__1() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x28548b8 size 0x6c0 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2854f78 size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::WebRequestStream
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8071))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8089))
// CS Name: System.Net.WebRequestStream
class CORDL_TYPE WebRequestStream : public ::System::Net::WebConnectionStream {
public:
// Declarations
using _WriteChunkTrailer_d__40 = ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40;

using _WriteChunkTrailer_inner_d__39 = ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39;

using _WriteRequestAsync_d__38 = ::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38;

using _SetHeadersAsync_d__37 = ::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37;

using _Initialize_d__36 = ::System::Net::____System__Net__WebRequestStream___Initialize_d__36;

using _ProcessWrite_d__34 = ::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34;

using _WriteAsyncInner_d__33 = ::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33;

using _FinishWriting_d__31 = ::System::Net::____System__Net__WebRequestStream___FinishWriting_d__31;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~WebRequestStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestStream", modifiers: " const&", def_value: None }]
constexpr WebRequestStream(WebRequestStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestStream", modifiers: "&&", def_value: None }]
constexpr WebRequestStream(WebRequestStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WebRequestStream(void* ptr) noexcept : ::System::Net::WebConnectionStream(ptr) {
}


  constexpr WebRequestStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WebRequestStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WebRequestStream& operator=(WebRequestStream&& o) noexcept = default;
  constexpr WebRequestStream& operator=(WebRequestStream const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_crlf, put=__set_crlf))  crlf;

static void __set_crlf(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_crlf() ;

 ::System::IO::MemoryStream __declspec(property(get=__get_writeBuffer, put=__set_writeBuffer))  writeBuffer;

constexpr void __set_writeBuffer(::System::IO::MemoryStream value) ;

constexpr ::System::IO::MemoryStream __get_writeBuffer() const;

 bool __declspec(property(get=__get_requestWritten, put=__set_requestWritten))  requestWritten;

constexpr void __set_requestWritten(bool value) ;

constexpr bool __get_requestWritten() const;

 bool __declspec(property(get=__get_allowBuffering, put=__set_allowBuffering))  allowBuffering;

constexpr void __set_allowBuffering(bool value) ;

constexpr bool __get_allowBuffering() const;

 bool __declspec(property(get=__get_sendChunked, put=__set_sendChunked))  sendChunked;

constexpr void __set_sendChunked(bool value) ;

constexpr bool __get_sendChunked() const;

 ::System::Net::WebCompletionSource __declspec(property(get=__get_pendingWrite, put=__set_pendingWrite))  pendingWrite;

constexpr void __set_pendingWrite(::System::Net::WebCompletionSource value) ;

constexpr ::System::Net::WebCompletionSource __get_pendingWrite() const;

 int64_t __declspec(property(get=__get_totalWritten, put=__set_totalWritten))  totalWritten;

constexpr void __set_totalWritten(int64_t value) ;

constexpr int64_t __get_totalWritten() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_headers, put=__set_headers))  headers;

constexpr void __set_headers(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_headers() const;

 bool __declspec(property(get=__get_headersSent, put=__set_headersSent))  headersSent;

constexpr void __set_headersSent(bool value) ;

constexpr bool __get_headersSent() const;

 int32_t __declspec(property(get=__get_completeRequestWritten, put=__set_completeRequestWritten))  completeRequestWritten;

constexpr void __set_completeRequestWritten(int32_t value) ;

constexpr int32_t __get_completeRequestWritten() const;

 int32_t __declspec(property(get=__get_chunkTrailerWritten, put=__set_chunkTrailerWritten))  chunkTrailerWritten;

constexpr void __set_chunkTrailerWritten(int32_t value) ;

constexpr int32_t __get_chunkTrailerWritten() const;

 ::System::IO::Stream __declspec(property(get=__get__InnerStream_k__BackingField, put=__set__InnerStream_k__BackingField))  _InnerStream_k__BackingField;

constexpr void __set__InnerStream_k__BackingField(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get__InnerStream_k__BackingField() const;

 bool __declspec(property(get=__get__KeepAlive_k__BackingField, put=__set__KeepAlive_k__BackingField))  _KeepAlive_k__BackingField;

constexpr void __set__KeepAlive_k__BackingField(bool value) ;

constexpr bool __get__KeepAlive_k__BackingField() const;


// Properties

 ::System::IO::Stream __declspec(property(get=get_InnerStream))  InnerStream;

 bool __declspec(property(get=get_KeepAlive))  KeepAlive;

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 bool __declspec(property(get=get_HasWriteBuffer))  HasWriteBuffer;

 int32_t __declspec(property(get=get_WriteBufferLength))  WriteBufferLength;


// Methods

// Ctor Parameters [CppParam { name: "connection", ty: "::System::Net::WebConnection", modifiers: "", def_value: None }, CppParam { name: "operation", ty: "::System::Net::WebOperation", modifiers: "", def_value: None }, CppParam { name: "stream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "tunnel", ty: "::System::Net::WebConnectionTunnel", modifiers: "", def_value: None }]
explicit WebRequestStream(::System::Net::WebConnection connection, ::System::Net::WebOperation operation, ::System::IO::Stream stream, ::System::Net::WebConnectionTunnel tunnel) ;

/// @brief Method .ctor addr 0x284ce14 size 0x160 virtual false final false
 void _ctor(::System::Net::WebConnection connection, ::System::Net::WebOperation operation, ::System::IO::Stream stream, ::System::Net::WebConnectionTunnel tunnel) ;

/// @brief Method get_InnerStream addr 0x2851d60 size 0x8 virtual false final false
 ::System::IO::Stream get_InnerStream() ;

/// @brief Method get_KeepAlive addr 0x2851d68 size 0x8 virtual false final false
 bool get_KeepAlive() ;

/// @brief Method get_CanRead addr 0x2851d70 size 0x8 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanWrite addr 0x2851d78 size 0x8 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_HasWriteBuffer addr 0x2851d80 size 0x34 virtual false final false
 bool get_HasWriteBuffer() ;

/// @brief Method get_WriteBufferLength addr 0x2851db4 size 0x44 virtual false final false
 int32_t get_WriteBufferLength() ;

/// @brief Method GetWriteBuffer addr 0x2851df8 size 0xdc virtual false final false
 ::System::Net::BufferOffsetSize GetWriteBuffer() ;

/// @brief Method FinishWriting addr 0x2851ed4 size 0xd8 virtual false final false
 ::System::Threading::Tasks::Task FinishWriting(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WriteAsync addr 0x2851fac size 0x258 virtual true final false
 ::System::Threading::Tasks::Task WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WriteAsyncInner addr 0x2852204 size 0x104 virtual false final false
 ::System::Threading::Tasks::Task WriteAsyncInner(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::WebCompletionSource completion, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ProcessWrite addr 0x2852308 size 0x100 virtual false final false
 ::System::Threading::Tasks::Task ProcessWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method CheckWriteOverflow addr 0x2852408 size 0x9c virtual false final false
 void CheckWriteOverflow(int64_t contentLength, int64_t totalWritten, int64_t size) ;

/// @brief Method Initialize addr 0x2850c84 size 0xdc virtual false final false
 ::System::Threading::Tasks::Task Initialize(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SetHeadersAsync addr 0x28524a4 size 0xe4 virtual false final false
 ::System::Threading::Tasks::Task SetHeadersAsync(bool setInternalLength, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WriteRequestAsync addr 0x2852588 size 0xdc virtual false final false
 ::System::Threading::Tasks::Task WriteRequestAsync(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WriteChunkTrailer_inner addr 0x2852664 size 0xd8 virtual false final false
 ::System::Threading::Tasks::Task WriteChunkTrailer_inner(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WriteChunkTrailer addr 0x285273c size 0xd4 virtual false final false
 ::System::Threading::Tasks::Task WriteChunkTrailer() ;

/// @brief Method KillBuffer addr 0x283f138 size 0x8 virtual false final false
 void KillBuffer() ;

/// @brief Method ReadAsync addr 0x2852810 size 0xb0 virtual true final false
 ::System::Threading::Tasks::Task_1<int32_t> ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method TryReadFromBufferedContent addr 0x28528c0 size 0x40 virtual true final false
 bool TryReadFromBufferedContent(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ByRef<int32_t> result) ;

/// @brief Method Close_internal addr 0x2852900 size 0x180 virtual true final false
 void Close_internal(ByRef<bool> disposed) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::WebRequestStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebRequestStream, "System.Net", "WebRequestStream");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::____System__Net__WebRequestStream___FinishWriting_d__31, "System.Net", "WebRequestStream/<FinishWriting>d__31");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::____System__Net__WebRequestStream___Initialize_d__36, "System.Net", "WebRequestStream/<Initialize>d__36");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34, "System.Net", "WebRequestStream/<ProcessWrite>d__34");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37, "System.Net", "WebRequestStream/<SetHeadersAsync>d__37");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33, "System.Net", "WebRequestStream/<WriteAsyncInner>d__33");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40, "System.Net", "WebRequestStream/<WriteChunkTrailer>d__40");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39, "System.Net", "WebRequestStream/<WriteChunkTrailer_inner>d__39");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38, "System.Net", "WebRequestStream/<WriteRequestAsync>d__38");
