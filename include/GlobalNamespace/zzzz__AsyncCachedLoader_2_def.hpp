#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
template<typename K,typename V>
class HMCache_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class AsyncCachedLoader_2;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class AsyncCachedLoader_2<TKey,TValue>;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct ____GlobalNamespace__AsyncCachedLoader_2__ScheduledTask;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct ____GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct ____GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
struct ____GlobalNamespace__AsyncCachedLoader_2__ScheduledTask<TKey,TValue>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
struct ____GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8<TKey,TValue>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
struct ____GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7<TKey,TValue>;
}
// Type: ::ScheduledTask
// Type: ::<LoadAsync>d__7
// Type: ::<LoadAllAsync>d__8
// Type: ::AsyncCachedLoader`2
// Type: ::ScheduledTask
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(5995))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5995), inst: 80 })
// CS Name: AsyncCachedLoader`2::ScheduledTask
struct CORDL_TYPE ____GlobalNamespace__AsyncCachedLoader_2__ScheduledTask<TKey,TValue> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "keyId", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "taskCompletionSource", ty: "::System::Threading::Tasks::TaskCompletionSource_1<TValue>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__AsyncCachedLoader_2__ScheduledTask(TKey keyId, ::System::Threading::Tasks::TaskCompletionSource_1<TValue> taskCompletionSource, ::System::Threading::CancellationToken cancellationToken) noexcept;


                    constexpr ____GlobalNamespace__AsyncCachedLoader_2__ScheduledTask(____GlobalNamespace__AsyncCachedLoader_2__ScheduledTask const&) = default;
                    constexpr ____GlobalNamespace__AsyncCachedLoader_2__ScheduledTask(____GlobalNamespace__AsyncCachedLoader_2__ScheduledTask&&) = default;
                    constexpr ____GlobalNamespace__AsyncCachedLoader_2__ScheduledTask& operator=(____GlobalNamespace__AsyncCachedLoader_2__ScheduledTask const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__AsyncCachedLoader_2__ScheduledTask& operator=(____GlobalNamespace__AsyncCachedLoader_2__ScheduledTask&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__AsyncCachedLoader_2__ScheduledTask(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 TKey __declspec(property(get=__get_keyId, put=__set_keyId))  keyId;

constexpr void __set_keyId(TKey value) ;

constexpr TKey __get_keyId() const;

 ::System::Threading::Tasks::TaskCompletionSource_1<TValue> __declspec(property(get=__get_taskCompletionSource, put=__set_taskCompletionSource))  taskCompletionSource;

constexpr void __set_taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<TValue> value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<TValue> __get_taskCompletionSource() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(TKey keyId, ::System::Threading::Tasks::TaskCompletionSource_1<TValue> taskCompletionSource, ::System::Threading::CancellationToken cancellationToken) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<LoadAsync>d__7
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5996)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5996), inst: 80 })
// CS Name: AsyncCachedLoader`2::<LoadAsync>d__7
struct CORDL_TYPE ____GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7<TKey,TValue> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TValue>", modifiers: "", def_value: None }, CppParam { name: "keyId", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::AsyncCachedLoader_2<TKey,TValue>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<TValue>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TValue> __t__builder, TKey keyId, ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::AsyncCachedLoader_2<TKey,TValue> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<TValue> __u__1) noexcept;


                    constexpr ____GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7(____GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7 const&) = default;
                    constexpr ____GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7(____GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7&&) = default;
                    constexpr ____GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7& operator=(____GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7& operator=(____GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TValue> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TValue> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TValue> __get___t__builder() const;

 TKey __declspec(property(get=__get_keyId, put=__set_keyId))  keyId;

constexpr void __set_keyId(TKey value) ;

constexpr TKey __get_keyId() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::GlobalNamespace::AsyncCachedLoader_2<TKey,TValue> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::AsyncCachedLoader_2<TKey,TValue> value) ;

constexpr ::GlobalNamespace::AsyncCachedLoader_2<TKey,TValue> __get___4__this() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<TValue> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<TValue> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<TValue> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<LoadAllAsync>d__8
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(5997))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5997), inst: 80 })
// CS Name: AsyncCachedLoader`2::<LoadAllAsync>d__8
struct CORDL_TYPE ____GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8<TKey,TValue> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::AsyncCachedLoader_2<TKey,TValue>", modifiers: "", def_value: None }, CppParam { name: "_scheduledTask_5__2", ty: "::GlobalNamespace::____GlobalNamespace__AsyncCachedLoader_2__ScheduledTask<TKey,TValue>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<TValue>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::AsyncCachedLoader_2<TKey,TValue> __4__this, ::GlobalNamespace::____GlobalNamespace__AsyncCachedLoader_2__ScheduledTask<TKey,TValue> _scheduledTask_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<TValue> __u__1) noexcept;


                    constexpr ____GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8(____GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8 const&) = default;
                    constexpr ____GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8(____GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8&&) = default;
                    constexpr ____GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8& operator=(____GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8& operator=(____GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __get___t__builder() const;

 ::GlobalNamespace::AsyncCachedLoader_2<TKey,TValue> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::AsyncCachedLoader_2<TKey,TValue> value) ;

constexpr ::GlobalNamespace::AsyncCachedLoader_2<TKey,TValue> __get___4__this() const;

 ::GlobalNamespace::____GlobalNamespace__AsyncCachedLoader_2__ScheduledTask<TKey,TValue> __declspec(property(get=__get__scheduledTask_5__2, put=__set__scheduledTask_5__2))  _scheduledTask_5__2;

constexpr void __set__scheduledTask_5__2(::GlobalNamespace::____GlobalNamespace__AsyncCachedLoader_2__ScheduledTask<TKey,TValue> value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__AsyncCachedLoader_2__ScheduledTask<TKey,TValue> __get__scheduledTask_5__2() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<TValue> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<TValue> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<TValue> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AsyncCachedLoader`2
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5998), inst: 80 })
// CS Name: AsyncCachedLoader`2
class CORDL_TYPE AsyncCachedLoader_2<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _LoadAllAsync_d__8 = ::GlobalNamespace::____GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8<TKey, TValue>;

using _LoadAsync_d__7 = ::GlobalNamespace::____GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7<TKey, TValue>;

using ScheduledTask = ::GlobalNamespace::____GlobalNamespace__AsyncCachedLoader_2__ScheduledTask<TKey, TValue>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AsyncCachedLoader_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncCachedLoader_2", modifiers: " const&", def_value: None }]
constexpr AsyncCachedLoader_2(AsyncCachedLoader_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncCachedLoader_2", modifiers: "&&", def_value: None }]
constexpr AsyncCachedLoader_2(AsyncCachedLoader_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsyncCachedLoader_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AsyncCachedLoader_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsyncCachedLoader_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsyncCachedLoader_2& operator=(AsyncCachedLoader_2&& o) noexcept = default;
  constexpr AsyncCachedLoader_2& operator=(AsyncCachedLoader_2 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__AsyncCachedLoader_2__ScheduledTask<TKey,TValue>> __declspec(property(get=__get__scheduledTaskList, put=__set__scheduledTaskList))  _scheduledTaskList;

constexpr void __set__scheduledTaskList(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__AsyncCachedLoader_2__ScheduledTask<TKey,TValue>> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__AsyncCachedLoader_2__ScheduledTask<TKey,TValue>> __get__scheduledTaskList() const;

 ::GlobalNamespace::HMCache_2<TKey,TValue> __declspec(property(get=__get__cache, put=__set__cache))  _cache;

constexpr void __set__cache(::GlobalNamespace::HMCache_2<TKey,TValue> value) ;

constexpr ::GlobalNamespace::HMCache_2<TKey,TValue> __get__cache() const;

 ::System::Func_3<TKey,::System::Threading::CancellationToken,::System::Threading::Tasks::Task_1<TValue>> __declspec(property(get=__get__resultValueFunc, put=__set__resultValueFunc))  _resultValueFunc;

constexpr void __set__resultValueFunc(::System::Func_3<TKey,::System::Threading::CancellationToken,::System::Threading::Tasks::Task_1<TValue>> value) ;

constexpr ::System::Func_3<TKey,::System::Threading::CancellationToken,::System::Threading::Tasks::Task_1<TValue>> __get__resultValueFunc() const;

 bool __declspec(property(get=__get__isLoading, put=__set__isLoading))  _isLoading;

constexpr void __set__isLoading(bool value) ;

constexpr bool __get__isLoading() const;


// Methods

/// @brief Method ClearCache addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearCache() ;

// Ctor Parameters [CppParam { name: "maxNumberCachedElements", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "resultValueFunc", ty: "::System::Func_3<TKey,::System::Threading::CancellationToken,::System::Threading::Tasks::Task_1<TValue>>", modifiers: "", def_value: None }]
explicit AsyncCachedLoader_2(int32_t maxNumberCachedElements, ::System::Func_3<TKey,::System::Threading::CancellationToken,::System::Threading::Tasks::Task_1<TValue>> resultValueFunc) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t maxNumberCachedElements, ::System::Func_3<TKey,::System::Threading::CancellationToken,::System::Threading::Tasks::Task_1<TValue>> resultValueFunc) ;

/// @brief Method LoadAsync addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<TValue> LoadAsync(TKey keyId, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method LoadAllAsync addr 0x0 size 0xffffffffffffffff virtual false final false
 void LoadAllAsync() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::AsyncCachedLoader_2, "", "AsyncCachedLoader`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::____GlobalNamespace__AsyncCachedLoader_2__ScheduledTask, "", "AsyncCachedLoader`2/ScheduledTask");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::____GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8, "", "AsyncCachedLoader`2/<LoadAllAsync>d__8");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::____GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7, "", "AsyncCachedLoader`2/<LoadAsync>d__7");
