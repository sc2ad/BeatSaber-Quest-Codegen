#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Threading::Tasks {
template<typename TResult>
struct ValueTask_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct ReadOnlyMemory_1;
}
namespace System {
class Exception;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class AsyncCallback;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class IAsyncResult;
}
namespace System::IO {
class Stream;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T>
struct Memory_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct ____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct ____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncValueTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct ____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter;
}
// Forward declare root types
namespace System::IO {
class BufferedStream;
}
namespace System::IO {
class ____System__IO__BufferedStream____c;
}
namespace System::IO {
struct ____System__IO__BufferedStream___CopyToAsyncCore_d__71;
}
namespace System::IO {
struct ____System__IO__BufferedStream___FlushAsyncInternal_d__38;
}
namespace System::IO {
struct ____System__IO__BufferedStream___FlushWriteAsync_d__42;
}
namespace System::IO {
struct ____System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51;
}
namespace System::IO {
struct ____System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63;
}
// Type: ::<>c
namespace System::IO {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3587))
// CS Name: System.IO.BufferedStream::<>c
class CORDL_TYPE ____System__IO__BufferedStream____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____System__IO__BufferedStream____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__IO__BufferedStream____c", modifiers: " const&", def_value: None }]
constexpr ____System__IO__BufferedStream____c(____System__IO__BufferedStream____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__IO__BufferedStream____c", modifiers: "&&", def_value: None }]
constexpr ____System__IO__BufferedStream____c(____System__IO__BufferedStream____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__IO__BufferedStream____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__IO__BufferedStream____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__IO__BufferedStream____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__IO__BufferedStream____c& operator=(____System__IO__BufferedStream____c&& o) noexcept = default;
  constexpr ____System__IO__BufferedStream____c& operator=(____System__IO__BufferedStream____c const& o) noexcept = default;
                


// Fields

static ::System::IO::____System__IO__BufferedStream____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::System::IO::____System__IO__BufferedStream____c value) ;

static ::System::IO::____System__IO__BufferedStream____c __get___9() ;

static ::System::Func_1<::System::Threading::SemaphoreSlim> __declspec(property(get=__get___9__10_0, put=__set___9__10_0))  __9__10_0;

static void __set___9__10_0(::System::Func_1<::System::Threading::SemaphoreSlim> value) ;

static ::System::Func_1<::System::Threading::SemaphoreSlim> __get___9__10_0() ;


// Methods

// Ctor Parameters []
explicit ____System__IO__BufferedStream____c() ;

/// @brief Method .ctor addr 0x23a2f58 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <LazyEnsureAsyncActiveSemaphoreInitialized>b__10_0 addr 0x23a2f60 size 0x64 virtual false final false
 ::System::Threading::SemaphoreSlim _LazyEnsureAsyncActiveSemaphoreInitialized_b__10_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
// Type: ::<FlushAsyncInternal>d__38
namespace System::IO {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3588))
// CS Name: System.IO.BufferedStream::<FlushAsyncInternal>d__38
struct CORDL_TYPE ____System__IO__BufferedStream___FlushAsyncInternal_d__38 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_sem_5__2", ty: "::System::Threading::SemaphoreSlim", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr ____System__IO__BufferedStream___FlushAsyncInternal_d__38(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::IO::BufferedStream __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::SemaphoreSlim _sem_5__2, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;


                    constexpr ____System__IO__BufferedStream___FlushAsyncInternal_d__38(____System__IO__BufferedStream___FlushAsyncInternal_d__38 const&) = default;
                    constexpr ____System__IO__BufferedStream___FlushAsyncInternal_d__38(____System__IO__BufferedStream___FlushAsyncInternal_d__38&&) = default;
                    constexpr ____System__IO__BufferedStream___FlushAsyncInternal_d__38& operator=(____System__IO__BufferedStream___FlushAsyncInternal_d__38 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__IO__BufferedStream___FlushAsyncInternal_d__38& operator=(____System__IO__BufferedStream___FlushAsyncInternal_d__38&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__IO__BufferedStream___FlushAsyncInternal_d__38(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::System::IO::BufferedStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::IO::BufferedStream value) ;

constexpr ::System::IO::BufferedStream __get___4__this() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::System::Threading::SemaphoreSlim __declspec(property(get=__get__sem_5__2, put=__set__sem_5__2))  _sem_5__2;

constexpr void __set__sem_5__2(::System::Threading::SemaphoreSlim value) ;

constexpr ::System::Threading::SemaphoreSlim __get__sem_5__2() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x23a2fc4 size 0x53c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x23a3500 size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::IO
// Type: ::<FlushWriteAsync>d__42
namespace System::IO {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3589))
// CS Name: System.IO.BufferedStream::<FlushWriteAsync>d__42
struct CORDL_TYPE ____System__IO__BufferedStream___FlushWriteAsync_d__42 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr ____System__IO__BufferedStream___FlushWriteAsync_d__42(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::IO::BufferedStream __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__1, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2) noexcept;


                    constexpr ____System__IO__BufferedStream___FlushWriteAsync_d__42(____System__IO__BufferedStream___FlushWriteAsync_d__42 const&) = default;
                    constexpr ____System__IO__BufferedStream___FlushWriteAsync_d__42(____System__IO__BufferedStream___FlushWriteAsync_d__42&&) = default;
                    constexpr ____System__IO__BufferedStream___FlushWriteAsync_d__42& operator=(____System__IO__BufferedStream___FlushWriteAsync_d__42 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__IO__BufferedStream___FlushWriteAsync_d__42& operator=(____System__IO__BufferedStream___FlushWriteAsync_d__42&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__IO__BufferedStream___FlushWriteAsync_d__42(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::System::IO::BufferedStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::IO::BufferedStream value) ;

constexpr ::System::IO::BufferedStream __get___4__this() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __get___u__1() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x23a350c size 0x47c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x23a3988 size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::IO
// Type: ::<ReadFromUnderlyingStreamAsync>d__51
namespace System::IO {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3590))
// CS Name: System.IO.BufferedStream::<ReadFromUnderlyingStreamAsync>d__51
struct CORDL_TYPE ____System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "semaphoreLockTask", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::System::Memory_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "bytesAlreadySatisfied", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
constexpr ____System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> __t__builder, ::System::Threading::Tasks::Task semaphoreLockTask, ::System::IO::BufferedStream __4__this, ::System::Memory_1<uint8_t> buffer, int32_t bytesAlreadySatisfied, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, int32_t __7__wrap1, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __u__2) noexcept;


                    constexpr ____System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51(____System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51 const&) = default;
                    constexpr ____System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51(____System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51&&) = default;
                    constexpr ____System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51& operator=(____System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51& operator=(____System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x80};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> __get___t__builder() const;

 ::System::Threading::Tasks::Task __declspec(property(get=__get_semaphoreLockTask, put=__set_semaphoreLockTask))  semaphoreLockTask;

constexpr void __set_semaphoreLockTask(::System::Threading::Tasks::Task value) ;

constexpr ::System::Threading::Tasks::Task __get_semaphoreLockTask() const;

 ::System::IO::BufferedStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::IO::BufferedStream value) ;

constexpr ::System::IO::BufferedStream __get___4__this() const;

 ::System::Memory_1<uint8_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::System::Memory_1<uint8_t> value) ;

constexpr ::System::Memory_1<uint8_t> __get_buffer() const;

 int32_t __declspec(property(get=__get_bytesAlreadySatisfied, put=__set_bytesAlreadySatisfied))  bytesAlreadySatisfied;

constexpr void __set_bytesAlreadySatisfied(int32_t value) ;

constexpr int32_t __get_bytesAlreadySatisfied() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__1() const;

 int32_t __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(int32_t value) ;

constexpr int32_t __get___7__wrap1() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x23a3994 size 0x844 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x23a41d8 size 0x58 virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::IO
// Type: ::<WriteToUnderlyingStreamAsync>d__63
namespace System::IO {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3591))
// CS Name: System.IO.BufferedStream::<WriteToUnderlyingStreamAsync>d__63
struct CORDL_TYPE ____System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "semaphoreLockTask", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::System::ReadOnlyMemory_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: None }]
constexpr ____System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::Tasks::Task semaphoreLockTask, ::System::IO::BufferedStream __4__this, ::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__2) noexcept;


                    constexpr ____System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63(____System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63 const&) = default;
                    constexpr ____System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63(____System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63&&) = default;
                    constexpr ____System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63& operator=(____System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63& operator=(____System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x68};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::System::Threading::Tasks::Task __declspec(property(get=__get_semaphoreLockTask, put=__set_semaphoreLockTask))  semaphoreLockTask;

constexpr void __set_semaphoreLockTask(::System::Threading::Tasks::Task value) ;

constexpr ::System::Threading::Tasks::Task __get_semaphoreLockTask() const;

 ::System::IO::BufferedStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::IO::BufferedStream value) ;

constexpr ::System::IO::BufferedStream __get___4__this() const;

 ::System::ReadOnlyMemory_1<uint8_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::System::ReadOnlyMemory_1<uint8_t> value) ;

constexpr ::System::ReadOnlyMemory_1<uint8_t> __get_buffer() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__1() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x23a4230 size 0xfd4 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x23a5204 size 0x100c virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::IO
// Type: ::<CopyToAsyncCore>d__71
namespace System::IO {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3592))
// CS Name: System.IO.BufferedStream::<CopyToAsyncCore>d__71
struct CORDL_TYPE ____System__IO__BufferedStream___CopyToAsyncCore_d__71 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream", modifiers: "", def_value: None }, CppParam { name: "destination", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: None }]
constexpr ____System__IO__BufferedStream___CopyToAsyncCore_d__71(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::IO::BufferedStream __4__this, ::System::IO::Stream destination, ::System::Threading::CancellationToken cancellationToken, int32_t bufferSize, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__2) noexcept;


                    constexpr ____System__IO__BufferedStream___CopyToAsyncCore_d__71(____System__IO__BufferedStream___CopyToAsyncCore_d__71 const&) = default;
                    constexpr ____System__IO__BufferedStream___CopyToAsyncCore_d__71(____System__IO__BufferedStream___CopyToAsyncCore_d__71&&) = default;
                    constexpr ____System__IO__BufferedStream___CopyToAsyncCore_d__71& operator=(____System__IO__BufferedStream___CopyToAsyncCore_d__71 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__IO__BufferedStream___CopyToAsyncCore_d__71& operator=(____System__IO__BufferedStream___CopyToAsyncCore_d__71&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x60};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__IO__BufferedStream___CopyToAsyncCore_d__71(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::System::IO::BufferedStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::IO::BufferedStream value) ;

constexpr ::System::IO::BufferedStream __get___4__this() const;

 ::System::IO::Stream __declspec(property(get=__get_destination, put=__set_destination))  destination;

constexpr void __set_destination(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get_destination() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 int32_t __declspec(property(get=__get_bufferSize, put=__set_bufferSize))  bufferSize;

constexpr void __set_bufferSize(int32_t value) ;

constexpr int32_t __get_bufferSize() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__1() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x23c2f54 size 0x6f8 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x23c364c size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::IO
// Type: System.IO::BufferedStream
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3593))
// CS Name: System.IO.BufferedStream
class CORDL_TYPE BufferedStream : public ::System::IO::Stream {
public:
// Declarations
using _CopyToAsyncCore_d__71 = ::System::IO::____System__IO__BufferedStream___CopyToAsyncCore_d__71;

using _WriteToUnderlyingStreamAsync_d__63 = ::System::IO::____System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63;

using _ReadFromUnderlyingStreamAsync_d__51 = ::System::IO::____System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51;

using _FlushWriteAsync_d__42 = ::System::IO::____System__IO__BufferedStream___FlushWriteAsync_d__42;

using _FlushAsyncInternal_d__38 = ::System::IO::____System__IO__BufferedStream___FlushAsyncInternal_d__38;

using __c = ::System::IO::____System__IO__BufferedStream____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~BufferedStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedStream", modifiers: " const&", def_value: None }]
constexpr BufferedStream(BufferedStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedStream", modifiers: "&&", def_value: None }]
constexpr BufferedStream(BufferedStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BufferedStream(void* ptr) noexcept : ::System::IO::Stream(ptr) {
}


  constexpr BufferedStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BufferedStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BufferedStream& operator=(BufferedStream&& o) noexcept = default;
  constexpr BufferedStream& operator=(BufferedStream const& o) noexcept = default;
                


// Fields

 ::System::IO::Stream __declspec(property(get=__get__stream, put=__set__stream))  _stream;

constexpr void __set__stream(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get__stream() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__buffer, put=__set__buffer))  _buffer;

constexpr void __set__buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__buffer() const;

 int32_t __declspec(property(get=__get__bufferSize, put=__set__bufferSize))  _bufferSize;

constexpr void __set__bufferSize(int32_t value) ;

constexpr int32_t __get__bufferSize() const;

 int32_t __declspec(property(get=__get__readPos, put=__set__readPos))  _readPos;

constexpr void __set__readPos(int32_t value) ;

constexpr int32_t __get__readPos() const;

 int32_t __declspec(property(get=__get__readLen, put=__set__readLen))  _readLen;

constexpr void __set__readLen(int32_t value) ;

constexpr int32_t __get__readLen() const;

 int32_t __declspec(property(get=__get__writePos, put=__set__writePos))  _writePos;

constexpr void __set__writePos(int32_t value) ;

constexpr int32_t __get__writePos() const;

 ::System::Threading::Tasks::Task_1<int32_t> __declspec(property(get=__get__lastSyncCompletedReadTask, put=__set__lastSyncCompletedReadTask))  _lastSyncCompletedReadTask;

constexpr void __set__lastSyncCompletedReadTask(::System::Threading::Tasks::Task_1<int32_t> value) ;

constexpr ::System::Threading::Tasks::Task_1<int32_t> __get__lastSyncCompletedReadTask() const;

 ::System::Threading::SemaphoreSlim __declspec(property(get=__get__asyncActiveSemaphore, put=__set__asyncActiveSemaphore))  _asyncActiveSemaphore;

constexpr void __set__asyncActiveSemaphore(::System::Threading::SemaphoreSlim value) ;

constexpr ::System::Threading::SemaphoreSlim __get__asyncActiveSemaphore() const;


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;


// Methods

/// @brief Method LazyEnsureAsyncActiveSemaphoreInitialized addr 0x23a0010 size 0xf8 virtual false final false
 ::System::Threading::SemaphoreSlim LazyEnsureAsyncActiveSemaphoreInitialized() ;

// Ctor Parameters [CppParam { name: "stream", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit BufferedStream(::System::IO::Stream stream) ;

/// @brief Method .ctor addr 0x23a0108 size 0x8 virtual false final false
 void _ctor(::System::IO::Stream stream) ;

// Ctor Parameters [CppParam { name: "stream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit BufferedStream(::System::IO::Stream stream, int32_t bufferSize) ;

/// @brief Method .ctor addr 0x23a0110 size 0x1dc virtual false final false
 void _ctor(::System::IO::Stream stream, int32_t bufferSize) ;

/// @brief Method EnsureNotClosed addr 0x23a02ec size 0x64 virtual false final false
 void EnsureNotClosed() ;

/// @brief Method EnsureCanSeek addr 0x23a0350 size 0x74 virtual false final false
 void EnsureCanSeek() ;

/// @brief Method EnsureCanRead addr 0x23a03c4 size 0x74 virtual false final false
 void EnsureCanRead() ;

/// @brief Method EnsureCanWrite addr 0x23a0438 size 0x74 virtual false final false
 void EnsureCanWrite() ;

/// @brief Method EnsureShadowBufferAllocated addr 0x23a04ac size 0xd4 virtual false final false
 void EnsureShadowBufferAllocated() ;

/// @brief Method EnsureBufferAllocated addr 0x23a0580 size 0x58 virtual false final false
 void EnsureBufferAllocated() ;

/// @brief Method get_CanRead addr 0x23a05d8 size 0x18 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanWrite addr 0x23a05f0 size 0x18 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_CanSeek addr 0x23a0608 size 0x18 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_Length addr 0x23a0620 size 0x3c virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x23a06ac size 0x48 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x23a06f4 size 0xc4 virtual true final false
 void set_Position(int64_t value) ;

/// @brief Method Dispose addr 0x23a07b8 size 0x15c virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Flush addr 0x23a0914 size 0xbc virtual true final false
 void Flush() ;

/// @brief Method FlushAsync addr 0x23a0a14 size 0xa0 virtual true final false
 ::System::Threading::Tasks::Task FlushAsync(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method FlushAsyncInternal addr 0x23a0ab4 size 0xdc virtual false final false
 ::System::Threading::Tasks::Task FlushAsyncInternal(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method FlushRead addr 0x23a09d0 size 0x44 virtual false final false
 void FlushRead() ;

/// @brief Method ClearReadBufferBeforeWrite addr 0x23a0b90 size 0x94 virtual false final false
 void ClearReadBufferBeforeWrite() ;

/// @brief Method FlushWrite addr 0x23a065c size 0x50 virtual false final false
 void FlushWrite() ;

/// @brief Method FlushWriteAsync addr 0x23a0c24 size 0xdc virtual false final false
 ::System::Threading::Tasks::Task FlushWriteAsync(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ReadFromBuffer addr 0x23a0d00 size 0x64 virtual false final false
 int32_t ReadFromBuffer(::ArrayW<uint8_t> array, int32_t offset, int32_t count) ;

/// @brief Method ReadFromBuffer addr 0x23a0d64 size 0x140 virtual false final false
 int32_t ReadFromBuffer(::System::Span_1<uint8_t> destination) ;

/// @brief Method ReadFromBuffer addr 0x23a0ea4 size 0x9c virtual false final false
 int32_t ReadFromBuffer(::ArrayW<uint8_t> array, int32_t offset, int32_t count, ByRef<::System::Exception> error) ;

/// @brief Method Read addr 0x23a0f40 size 0x224 virtual true final false
 int32_t Read(::ArrayW<uint8_t> array, int32_t offset, int32_t count) ;

/// @brief Method Read addr 0x23a1164 size 0x164 virtual true final false
 int32_t Read(::System::Span_1<uint8_t> destination) ;

/// @brief Method LastSyncCompletedReadTask addr 0x23a12c8 size 0xb0 virtual false final false
 ::System::Threading::Tasks::Task_1<int32_t> LastSyncCompletedReadTask(int32_t val) ;

/// @brief Method ReadAsync addr 0x23a1378 size 0x3c8 virtual true final false
 ::System::Threading::Tasks::Task_1<int32_t> ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ReadAsync addr 0x23a185c size 0x29c virtual true final false
 ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsync(::System::Memory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ReadFromUnderlyingStreamAsync addr 0x23a1740 size 0x11c virtual false final false
 ::System::Threading::Tasks::ValueTask_1<int32_t> ReadFromUnderlyingStreamAsync(::System::Memory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken, int32_t bytesAlreadySatisfied, ::System::Threading::Tasks::Task semaphoreLockTask) ;

/// @brief Method BeginRead addr 0x23a1af8 size 0xb4 virtual true final false
 ::System::IAsyncResult BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndRead addr 0x23a1bac size 0x48 virtual true final false
 int32_t EndRead(::System::IAsyncResult asyncResult) ;

/// @brief Method ReadByte addr 0x23a1bf4 size 0x50 virtual true final false
 int32_t ReadByte() ;

/// @brief Method ReadByteSlow addr 0x23a1c44 size 0x90 virtual false final false
 int32_t ReadByteSlow() ;

/// @brief Method WriteToBuffer addr 0x23a1cd4 size 0xdc virtual false final false
 void WriteToBuffer(::ArrayW<uint8_t> array, ByRef<int32_t> offset, ByRef<int32_t> count) ;

/// @brief Method WriteToBuffer addr 0x23a1db0 size 0x19c virtual false final false
 int32_t WriteToBuffer(::System::ReadOnlySpan_1<uint8_t> buffer) ;

/// @brief Method Write addr 0x23a1f4c size 0x30c virtual true final false
 void Write(::ArrayW<uint8_t> array, int32_t offset, int32_t count) ;

/// @brief Method Write addr 0x23a2258 size 0x2d0 virtual true final false
 void Write(::System::ReadOnlySpan_1<uint8_t> buffer) ;

/// @brief Method WriteAsync addr 0x23a2528 size 0x1d4 virtual true final false
 ::System::Threading::Tasks::Task WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WriteAsync addr 0x23a26fc size 0x214 virtual true final false
 ::System::Threading::Tasks::ValueTask WriteAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WriteToUnderlyingStreamAsync addr 0x23a2910 size 0xfc virtual false final false
 ::System::Threading::Tasks::Task WriteToUnderlyingStreamAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::Task semaphoreLockTask) ;

/// @brief Method BeginWrite addr 0x23a2a0c size 0xb4 virtual true final false
 ::System::IAsyncResult BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndWrite addr 0x23a2ac0 size 0xc virtual true final false
 void EndWrite(::System::IAsyncResult asyncResult) ;

/// @brief Method WriteByte addr 0x23a2acc size 0x8c virtual true final false
 void WriteByte(uint8_t value) ;

/// @brief Method Seek addr 0x23a2b58 size 0x124 virtual true final false
 int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0x23a2c7c size 0xc4 virtual true final false
 void SetLength(int64_t value) ;

/// @brief Method CopyToAsync addr 0x23a2d40 size 0xc0 virtual true final false
 ::System::Threading::Tasks::Task CopyToAsync(::System::IO::Stream destination, int32_t bufferSize, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method CopyToAsyncCore addr 0x23a2e00 size 0xf4 virtual false final false
 ::System::Threading::Tasks::Task CopyToAsyncCore(::System::IO::Stream destination, int32_t bufferSize, ::System::Threading::CancellationToken cancellationToken) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
} // end anonymous namespace
NEED_NO_BOX(::System::IO::BufferedStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::BufferedStream, "System.IO", "BufferedStream");
NEED_NO_BOX(::System::IO::____System__IO__BufferedStream____c);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::____System__IO__BufferedStream____c, "System.IO", "BufferedStream/<>c");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::____System__IO__BufferedStream___CopyToAsyncCore_d__71, "System.IO", "BufferedStream/<CopyToAsyncCore>d__71");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::____System__IO__BufferedStream___FlushAsyncInternal_d__38, "System.IO", "BufferedStream/<FlushAsyncInternal>d__38");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::____System__IO__BufferedStream___FlushWriteAsync_d__42, "System.IO", "BufferedStream/<FlushWriteAsync>d__42");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::____System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51, "System.IO", "BufferedStream/<ReadFromUnderlyingStreamAsync>d__51");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::____System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63, "System.IO", "BufferedStream/<WriteToUnderlyingStreamAsync>d__63");
