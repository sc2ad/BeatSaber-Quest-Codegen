#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Threading {
class SemaphoreSlim;
}
namespace System::IO {
class Stream;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System {
class AsyncCallback;
}
namespace System::Security::Cryptography {
struct CryptoStreamMode;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class IAsyncResult;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct ValueTaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
struct ForceAsyncAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct ValueTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
// Forward declare root types
namespace System::Security::Cryptography {
class CryptoStream;
}
namespace System::Security::Cryptography {
class System__Security__Cryptography__CryptoStream____c;
}
namespace System::Security::Cryptography {
struct System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42;
}
namespace System::Security::Cryptography {
struct System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37;
}
namespace System::Security::Cryptography {
struct System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49;
}
namespace System::Security::Cryptography {
struct System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46;
}
// Type: ::<ReadAsyncInternal>d__37
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2904))
// CS Name: System.Security.Cryptography.CryptoStream::<ReadAsyncInternal>d__37
struct CORDL_TYPE System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::Security::Cryptography::CryptoStream", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_semaphore_5__2", ty: "System::Threading::SemaphoreSlim", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Threading::Tasks::ForceAsyncAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>", modifiers: "", def_value: None }]
constexpr System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, System::Security::Cryptography::CryptoStream __4__this, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken, System::Threading::SemaphoreSlim _semaphore_5__2, System::Threading::Tasks::ForceAsyncAwaiter __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<int32_t> __u__2) noexcept;


                    constexpr System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37(System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37 const&) = default;
                    constexpr System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37(System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37&&) = default;
                    constexpr System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37& operator=(System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37& operator=(System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 System::Security::Cryptography::CryptoStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Security::Cryptography::CryptoStream value) ;

constexpr System::Security::Cryptography::CryptoStream __get___4__this() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buffer() const;

 int32_t __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(int32_t value) ;

constexpr int32_t __get_offset() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Threading::SemaphoreSlim __declspec(property(get=__get__semaphore_5__2, put=__set__semaphore_5__2))  _semaphore_5__2;

constexpr void __set__semaphore_5__2(System::Threading::SemaphoreSlim value) ;

constexpr System::Threading::SemaphoreSlim __get__semaphore_5__2() const;

 System::Threading::Tasks::ForceAsyncAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Threading::Tasks::ForceAsyncAwaiter value) ;

constexpr System::Threading::Tasks::ForceAsyncAwaiter __get___u__1() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<int32_t> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<int32_t> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<int32_t> __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x22ec500 size 0x3c4 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22ec8c4 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
// Type: ::<ReadAsyncCore>d__42
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2905))
// CS Name: System.Security.Cryptography.CryptoStream::<ReadAsyncCore>d__42
struct CORDL_TYPE System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::Security::Cryptography::CryptoStream", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "useAsync", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_bytesToDeliver_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentOutputIndex_5__3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_numWholeBlocksInBytes_5__4", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_tempInputBuffer_5__5", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "_tempOutputBuffer_5__6", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>", modifiers: "", def_value: None }]
constexpr System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, int32_t count, int32_t offset, System::Security::Cryptography::CryptoStream __4__this, ::ArrayW<uint8_t> buffer, bool useAsync, System::Threading::CancellationToken cancellationToken, int32_t _bytesToDeliver_5__2, int32_t _currentOutputIndex_5__3, int32_t _numWholeBlocksInBytes_5__4, ::ArrayW<uint8_t> _tempInputBuffer_5__5, ::ArrayW<uint8_t> _tempOutputBuffer_5__6, System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t> __u__1) noexcept;


                    constexpr System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42(System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42 const&) = default;
                    constexpr System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42(System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42&&) = default;
                    constexpr System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42& operator=(System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42& operator=(System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x78};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 int32_t __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(int32_t value) ;

constexpr int32_t __get_offset() const;

 System::Security::Cryptography::CryptoStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Security::Cryptography::CryptoStream value) ;

constexpr System::Security::Cryptography::CryptoStream __get___4__this() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buffer() const;

 bool __declspec(property(get=__get_useAsync, put=__set_useAsync))  useAsync;

constexpr void __set_useAsync(bool value) ;

constexpr bool __get_useAsync() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 int32_t __declspec(property(get=__get__bytesToDeliver_5__2, put=__set__bytesToDeliver_5__2))  _bytesToDeliver_5__2;

constexpr void __set__bytesToDeliver_5__2(int32_t value) ;

constexpr int32_t __get__bytesToDeliver_5__2() const;

 int32_t __declspec(property(get=__get__currentOutputIndex_5__3, put=__set__currentOutputIndex_5__3))  _currentOutputIndex_5__3;

constexpr void __set__currentOutputIndex_5__3(int32_t value) ;

constexpr int32_t __get__currentOutputIndex_5__3() const;

 int32_t __declspec(property(get=__get__numWholeBlocksInBytes_5__4, put=__set__numWholeBlocksInBytes_5__4))  _numWholeBlocksInBytes_5__4;

constexpr void __set__numWholeBlocksInBytes_5__4(int32_t value) ;

constexpr int32_t __get__numWholeBlocksInBytes_5__4() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__tempInputBuffer_5__5, put=__set__tempInputBuffer_5__5))  _tempInputBuffer_5__5;

constexpr void __set__tempInputBuffer_5__5(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__tempInputBuffer_5__5() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__tempOutputBuffer_5__6, put=__set__tempOutputBuffer_5__6))  _tempOutputBuffer_5__6;

constexpr void __set__tempOutputBuffer_5__6(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__tempOutputBuffer_5__6() const;

 System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t> value) ;

constexpr System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x22ec91c size 0x1100 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22eda84 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
// Type: ::<WriteAsyncInternal>d__46
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2906))
// CS Name: System.Security.Cryptography.CryptoStream::<WriteAsyncInternal>d__46
struct CORDL_TYPE System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::Security::Cryptography::CryptoStream", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_semaphore_5__2", ty: "System::Threading::SemaphoreSlim", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Threading::Tasks::ForceAsyncAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, System::Security::Cryptography::CryptoStream __4__this, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken, System::Threading::SemaphoreSlim _semaphore_5__2, System::Threading::Tasks::ForceAsyncAwaiter __u__1, System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;


                    constexpr System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46(System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46 const&) = default;
                    constexpr System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46(System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46&&) = default;
                    constexpr System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46& operator=(System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46& operator=(System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 System::Security::Cryptography::CryptoStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Security::Cryptography::CryptoStream value) ;

constexpr System::Security::Cryptography::CryptoStream __get___4__this() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buffer() const;

 int32_t __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(int32_t value) ;

constexpr int32_t __get_offset() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Threading::SemaphoreSlim __declspec(property(get=__get__semaphore_5__2, put=__set__semaphore_5__2))  _semaphore_5__2;

constexpr void __set__semaphore_5__2(System::Threading::SemaphoreSlim value) ;

constexpr System::Threading::SemaphoreSlim __get__semaphore_5__2() const;

 System::Threading::Tasks::ForceAsyncAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Threading::Tasks::ForceAsyncAwaiter value) ;

constexpr System::Threading::Tasks::ForceAsyncAwaiter __get___u__1() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x22edadc size 0x320 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22eddfc size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
// Type: ::<WriteAsyncCore>d__49
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2907))
// CS Name: System.Security.Cryptography.CryptoStream::<WriteAsyncCore>d__49
struct CORDL_TYPE System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::Security::Cryptography::CryptoStream", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "useAsync", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_bytesToWrite_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentInputIndex_5__3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_numOutputBytes_5__4", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "_numWholeBlocksInBytes_5__5", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_tempOutputBuffer_5__6", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, int32_t count, int32_t offset, System::Security::Cryptography::CryptoStream __4__this, ::ArrayW<uint8_t> buffer, bool useAsync, System::Threading::CancellationToken cancellationToken, int32_t _bytesToWrite_5__2, int32_t _currentInputIndex_5__3, int32_t _numOutputBytes_5__4, System::Runtime::CompilerServices::ValueTaskAwaiter __u__1, int32_t _numWholeBlocksInBytes_5__5, ::ArrayW<uint8_t> _tempOutputBuffer_5__6) noexcept;


                    constexpr System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49(System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49 const&) = default;
                    constexpr System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49(System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49&&) = default;
                    constexpr System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49& operator=(System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49& operator=(System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x78};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 int32_t __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(int32_t value) ;

constexpr int32_t __get_offset() const;

 System::Security::Cryptography::CryptoStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Security::Cryptography::CryptoStream value) ;

constexpr System::Security::Cryptography::CryptoStream __get___4__this() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buffer() const;

 bool __declspec(property(get=__get_useAsync, put=__set_useAsync))  useAsync;

constexpr void __set_useAsync(bool value) ;

constexpr bool __get_useAsync() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 int32_t __declspec(property(get=__get__bytesToWrite_5__2, put=__set__bytesToWrite_5__2))  _bytesToWrite_5__2;

constexpr void __set__bytesToWrite_5__2(int32_t value) ;

constexpr int32_t __get__bytesToWrite_5__2() const;

 int32_t __declspec(property(get=__get__currentInputIndex_5__3, put=__set__currentInputIndex_5__3))  _currentInputIndex_5__3;

constexpr void __set__currentInputIndex_5__3(int32_t value) ;

constexpr int32_t __get__currentInputIndex_5__3() const;

 int32_t __declspec(property(get=__get__numOutputBytes_5__4, put=__set__numOutputBytes_5__4))  _numOutputBytes_5__4;

constexpr void __set__numOutputBytes_5__4(int32_t value) ;

constexpr int32_t __get__numOutputBytes_5__4() const;

 System::Runtime::CompilerServices::ValueTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::ValueTaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::ValueTaskAwaiter __get___u__1() const;

 int32_t __declspec(property(get=__get__numWholeBlocksInBytes_5__5, put=__set__numWholeBlocksInBytes_5__5))  _numWholeBlocksInBytes_5__5;

constexpr void __set__numWholeBlocksInBytes_5__5(int32_t value) ;

constexpr int32_t __get__numWholeBlocksInBytes_5__5() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__tempOutputBuffer_5__6, put=__set__tempOutputBuffer_5__6))  _tempOutputBuffer_5__6;

constexpr void __set__tempOutputBuffer_5__6(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__tempOutputBuffer_5__6() const;


// Methods

/// @brief Method MoveNext addr 0x22ede08 size 0x11cc virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22eefd4 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
// Type: ::<>c
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2908))
// CS Name: System.Security.Cryptography.CryptoStream::<>c
class CORDL_TYPE System__Security__Cryptography__CryptoStream____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Security__Cryptography__CryptoStream____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Security__Cryptography__CryptoStream____c", modifiers: " const&", def_value: None }]
constexpr System__Security__Cryptography__CryptoStream____c(System__Security__Cryptography__CryptoStream____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Security__Cryptography__CryptoStream____c", modifiers: "&&", def_value: None }]
constexpr System__Security__Cryptography__CryptoStream____c(System__Security__Cryptography__CryptoStream____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Security__Cryptography__CryptoStream____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Security__Cryptography__CryptoStream____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Security__Cryptography__CryptoStream____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Security__Cryptography__CryptoStream____c& operator=(System__Security__Cryptography__CryptoStream____c&& o) noexcept = default;
  constexpr System__Security__Cryptography__CryptoStream____c& operator=(System__Security__Cryptography__CryptoStream____c const& o) noexcept = default;
                


// Fields

static System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c value) ;

static System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c __get___9() ;

static System::Func_1<System::Threading::SemaphoreSlim> __declspec(property(get=__get___9__54_0, put=__set___9__54_0))  __9__54_0;

static void __set___9__54_0(System::Func_1<System::Threading::SemaphoreSlim> value) ;

static System::Func_1<System::Threading::SemaphoreSlim> __get___9__54_0() ;


// Methods

// Ctor Parameters []
explicit System__Security__Cryptography__CryptoStream____c() ;

/// @brief Method .ctor addr 0x22ef044 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <get_AsyncActiveSemaphore>b__54_0 addr 0x22ef04c size 0x64 virtual false final false
 System::Threading::SemaphoreSlim _get_AsyncActiveSemaphore_b__54_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
// Type: System.Security.Cryptography::CryptoStream
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2909))
// CS Name: System.Security.Cryptography.CryptoStream
class CORDL_TYPE CryptoStream : public System::IO::Stream {
public:
// Declarations
using __c = System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c;

using _WriteAsyncCore_d__49 = System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49;

using _WriteAsyncInternal_d__46 = System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46;

using _ReadAsyncCore_d__42 = System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42;

using _ReadAsyncInternal_d__37 = System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~CryptoStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "CryptoStream", modifiers: " const&", def_value: None }]
constexpr CryptoStream(CryptoStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CryptoStream", modifiers: "&&", def_value: None }]
constexpr CryptoStream(CryptoStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CryptoStream(void* ptr) noexcept : System::IO::Stream(ptr) {
}


  constexpr CryptoStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CryptoStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CryptoStream& operator=(CryptoStream&& o) noexcept = default;
  constexpr CryptoStream& operator=(CryptoStream const& o) noexcept = default;
                


// Fields

 System::IO::Stream __declspec(property(get=__get__stream, put=__set__stream))  _stream;

constexpr void __set__stream(System::IO::Stream value) ;

constexpr System::IO::Stream __get__stream() const;

 System::Security::Cryptography::ICryptoTransform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(System::Security::Cryptography::ICryptoTransform value) ;

constexpr System::Security::Cryptography::ICryptoTransform __get__transform() const;

 System::Security::Cryptography::CryptoStreamMode __declspec(property(get=__get__transformMode, put=__set__transformMode))  _transformMode;

constexpr void __set__transformMode(System::Security::Cryptography::CryptoStreamMode value) ;

constexpr System::Security::Cryptography::CryptoStreamMode __get__transformMode() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__inputBuffer, put=__set__inputBuffer))  _inputBuffer;

constexpr void __set__inputBuffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__inputBuffer() const;

 int32_t __declspec(property(get=__get__inputBufferIndex, put=__set__inputBufferIndex))  _inputBufferIndex;

constexpr void __set__inputBufferIndex(int32_t value) ;

constexpr int32_t __get__inputBufferIndex() const;

 int32_t __declspec(property(get=__get__inputBlockSize, put=__set__inputBlockSize))  _inputBlockSize;

constexpr void __set__inputBlockSize(int32_t value) ;

constexpr int32_t __get__inputBlockSize() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__outputBuffer, put=__set__outputBuffer))  _outputBuffer;

constexpr void __set__outputBuffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__outputBuffer() const;

 int32_t __declspec(property(get=__get__outputBufferIndex, put=__set__outputBufferIndex))  _outputBufferIndex;

constexpr void __set__outputBufferIndex(int32_t value) ;

constexpr int32_t __get__outputBufferIndex() const;

 int32_t __declspec(property(get=__get__outputBlockSize, put=__set__outputBlockSize))  _outputBlockSize;

constexpr void __set__outputBlockSize(int32_t value) ;

constexpr int32_t __get__outputBlockSize() const;

 bool __declspec(property(get=__get__canRead, put=__set__canRead))  _canRead;

constexpr void __set__canRead(bool value) ;

constexpr bool __get__canRead() const;

 bool __declspec(property(get=__get__canWrite, put=__set__canWrite))  _canWrite;

constexpr void __set__canWrite(bool value) ;

constexpr bool __get__canWrite() const;

 bool __declspec(property(get=__get__finalBlockTransformed, put=__set__finalBlockTransformed))  _finalBlockTransformed;

constexpr void __set__finalBlockTransformed(bool value) ;

constexpr bool __get__finalBlockTransformed() const;

 System::Threading::SemaphoreSlim __declspec(property(get=__get__lazyAsyncActiveSemaphore, put=__set__lazyAsyncActiveSemaphore))  _lazyAsyncActiveSemaphore;

constexpr void __set__lazyAsyncActiveSemaphore(System::Threading::SemaphoreSlim value) ;

constexpr System::Threading::SemaphoreSlim __get__lazyAsyncActiveSemaphore() const;

 bool __declspec(property(get=__get__leaveOpen, put=__set__leaveOpen))  _leaveOpen;

constexpr void __set__leaveOpen(bool value) ;

constexpr bool __get__leaveOpen() const;


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;

 bool __declspec(property(get=get_HasFlushedFinalBlock))  HasFlushedFinalBlock;

 System::Threading::SemaphoreSlim __declspec(property(get=get_AsyncActiveSemaphore))  AsyncActiveSemaphore;


// Methods

// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "transform", ty: "System::Security::Cryptography::ICryptoTransform", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "System::Security::Cryptography::CryptoStreamMode", modifiers: "", def_value: None }]
explicit CryptoStream(System::IO::Stream stream, System::Security::Cryptography::ICryptoTransform transform, System::Security::Cryptography::CryptoStreamMode mode) ;

/// @brief Method .ctor addr 0x22eaf80 size 0x8 virtual false final false
 void _ctor(System::IO::Stream stream, System::Security::Cryptography::ICryptoTransform transform, System::Security::Cryptography::CryptoStreamMode mode) ;

// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "transform", ty: "System::Security::Cryptography::ICryptoTransform", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "System::Security::Cryptography::CryptoStreamMode", modifiers: "", def_value: None }, CppParam { name: "leaveOpen", ty: "bool", modifiers: "", def_value: None }]
explicit CryptoStream(System::IO::Stream stream, System::Security::Cryptography::ICryptoTransform transform, System::Security::Cryptography::CryptoStreamMode mode, bool leaveOpen) ;

/// @brief Method .ctor addr 0x22eaf88 size 0x1c8 virtual false final false
 void _ctor(System::IO::Stream stream, System::Security::Cryptography::ICryptoTransform transform, System::Security::Cryptography::CryptoStreamMode mode, bool leaveOpen) ;

/// @brief Method get_CanRead addr 0x22eb29c size 0x8 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanSeek addr 0x22eb2a4 size 0x8 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_CanWrite addr 0x22eb2ac size 0x8 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_Length addr 0x22eb2b4 size 0x50 virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x22eb304 size 0x50 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x22eb354 size 0x50 virtual true final false
 void set_Position(int64_t value) ;

/// @brief Method get_HasFlushedFinalBlock addr 0x22eb3a4 size 0x8 virtual false final false
 bool get_HasFlushedFinalBlock() ;

/// @brief Method FlushFinalBlock addr 0x22eb3ac size 0x230 virtual false final false
 void FlushFinalBlock() ;

/// @brief Method Flush addr 0x22eb5dc size 0x4 virtual true final false
 void Flush() ;

/// @brief Method FlushAsync addr 0x22eb5e0 size 0x168 virtual true final false
 System::Threading::Tasks::Task FlushAsync(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Seek addr 0x22eb748 size 0x50 virtual true final false
 int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0x22eb798 size 0x50 virtual true final false
 void SetLength(int64_t value) ;

/// @brief Method ReadAsync addr 0x22eb7e8 size 0x48 virtual true final false
 System::Threading::Tasks::Task_1<int32_t> ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method BeginRead addr 0x22eba9c size 0xb4 virtual true final false
 System::IAsyncResult BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndRead addr 0x22ebb50 size 0x48 virtual true final false
 int32_t EndRead(System::IAsyncResult asyncResult) ;

/// @brief Method ReadAsyncInternal addr 0x22eb978 size 0x124 virtual false final false
 System::Threading::Tasks::Task_1<int32_t> ReadAsyncInternal(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ReadByte addr 0x22ebb98 size 0x7c virtual true final false
 int32_t ReadByte() ;

/// @brief Method WriteByte addr 0x22ebc14 size 0x54 virtual true final false
 void WriteByte(uint8_t value) ;

/// @brief Method Read addr 0x22ebc68 size 0xc4 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method CheckReadArguments addr 0x22eb830 size 0x148 virtual false final false
 void CheckReadArguments(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method ReadAsyncCore addr 0x22ebd2c size 0x144 virtual false final false
 System::Threading::Tasks::Task_1<int32_t> ReadAsyncCore(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken, bool useAsync) ;

/// @brief Method WriteAsync addr 0x22ebe70 size 0x48 virtual true final false
 System::Threading::Tasks::Task WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method BeginWrite addr 0x22ec0fc size 0xb4 virtual true final false
 System::IAsyncResult BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndWrite addr 0x22ec1b0 size 0xc virtual true final false
 void EndWrite(System::IAsyncResult asyncResult) ;

/// @brief Method WriteAsyncInternal addr 0x22ec000 size 0xfc virtual false final false
 System::Threading::Tasks::Task WriteAsyncInternal(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Write addr 0x22ec1bc size 0x70 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method CheckWriteArguments addr 0x22ebeb8 size 0x148 virtual false final false
 void CheckWriteArguments(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method WriteAsyncCore addr 0x22ec22c size 0x11c virtual false final false
 System::Threading::Tasks::Task WriteAsyncCore(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken, bool useAsync) ;

/// @brief Method Clear addr 0x22ec348 size 0x10 virtual false final false
 void Clear() ;

/// @brief Method Dispose addr 0x22ec358 size 0xb0 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method InitializeBuffer addr 0x22eb150 size 0x14c virtual false final false
 void InitializeBuffer() ;

/// @brief Method get_AsyncActiveSemaphore addr 0x22ec408 size 0xf8 virtual false final false
 System::Threading::SemaphoreSlim get_AsyncActiveSemaphore() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::CryptoStream);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::CryptoStream, "System.Security.Cryptography", "CryptoStream");
NEED_NO_BOX(System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c, "System.Security.Cryptography", "CryptoStream/<>c");
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42, "System.Security.Cryptography", "CryptoStream/<ReadAsyncCore>d__42");
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37, "System.Security.Cryptography", "CryptoStream/<ReadAsyncInternal>d__37");
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49, "System.Security.Cryptography", "CryptoStream/<WriteAsyncCore>d__49");
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46, "System.Security.Cryptography", "CryptoStream/<WriteAsyncInternal>d__46");
