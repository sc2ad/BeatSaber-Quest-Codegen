#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1;
}
namespace GlobalNamespace {
class TaskExtensions;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class ____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1<T>;
}
namespace GlobalNamespace {
template<>
class ____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1<bool>;
}
namespace GlobalNamespace {
template<typename T>
struct ____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
struct ____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<T>;
}
namespace GlobalNamespace {
template<>
struct ____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool>;
}
// Type: ::<>c__DisplayClass0_0`1
// Type: ::<WaitForTask>d__1`1
// Type: ::TaskExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12930))
// CS Name: TaskExtensions
class CORDL_TYPE TaskExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using _WaitForTask_d__1_1 = ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<T>;

template<typename T>
using __c__DisplayClass0_0_1 = ::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TaskExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskExtensions", modifiers: " const&", def_value: None }]
constexpr TaskExtensions(TaskExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskExtensions", modifiers: "&&", def_value: None }]
constexpr TaskExtensions(TaskExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TaskExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TaskExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TaskExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TaskExtensions& operator=(TaskExtensions&& o) noexcept = default;
  constexpr TaskExtensions& operator=(TaskExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method WithCancellation addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::System::Threading::Tasks::Task_1<T> WithCancellation(::System::Threading::Tasks::Task_1<T> task, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WaitForTask addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void WaitForTask(::System::Threading::Tasks::Task_1<T> task, ::System::Threading::Tasks::TaskCompletionSource_1<T> tcs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass0_0`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12928))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12928), inst: 2 })
// CS Name: TaskExtensions::<>c__DisplayClass0_0`1
class CORDL_TYPE ____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1(____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1(____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1& operator=(____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1&& o) noexcept = default;
  constexpr ____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1& operator=(____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1 const& o) noexcept = default;
                


// Fields

 ::System::Threading::Tasks::TaskCompletionSource_1<T> __declspec(property(get=__get_tcs, put=__set_tcs))  tcs;

constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<T> value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T> __get_tcs() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <WithCancellation>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _WithCancellation_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass0_0`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12928))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12928), inst: 99 })
// CS Name: TaskExtensions::<>c__DisplayClass0_0`1
class CORDL_TYPE ____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1<bool> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1(____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1(____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1& operator=(____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1&& o) noexcept = default;
  constexpr ____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1& operator=(____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1 const& o) noexcept = default;
                


// Fields

 ::System::Threading::Tasks::TaskCompletionSource_1<bool> __declspec(property(get=__get_tcs, put=__set_tcs))  tcs;

constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool> value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool> __get_tcs() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <WithCancellation>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _WithCancellation_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<WaitForTask>d__1`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(12929))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12929), inst: 2 })
// CS Name: TaskExtensions::<WaitForTask>d__1`1
struct CORDL_TYPE ____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "tcs", ty: "::System::Threading::Tasks::TaskCompletionSource_1<T>", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task_1<T>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty: "::System::Threading::Tasks::TaskCompletionSource_1<T>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::System::Threading::Tasks::TaskCompletionSource_1<T> tcs, ::System::Threading::Tasks::Task_1<T> task, ::System::Threading::Tasks::TaskCompletionSource_1<T> __7__wrap1, ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__1) noexcept;


                    constexpr ____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1(____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1 const&) = default;
                    constexpr ____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1(____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1&&) = default;
                    constexpr ____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1& operator=(____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1& operator=(____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::System::Threading::Tasks::TaskCompletionSource_1<T> __declspec(property(get=__get_tcs, put=__set_tcs))  tcs;

constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<T> value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T> __get_tcs() const;

 ::System::Threading::Tasks::Task_1<T> __declspec(property(get=__get_task, put=__set_task))  task;

constexpr void __set_task(::System::Threading::Tasks::Task_1<T> value) ;

constexpr ::System::Threading::Tasks::Task_1<T> __get_task() const;

 ::System::Threading::Tasks::TaskCompletionSource_1<T> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(::System::Threading::Tasks::TaskCompletionSource_1<T> value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T> __get___7__wrap1() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<T> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<WaitForTask>d__1`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12929)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12929), inst: 99 })
// CS Name: TaskExtensions::<WaitForTask>d__1`1
struct CORDL_TYPE ____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "tcs", ty: "::System::Threading::Tasks::TaskCompletionSource_1<bool>", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty: "::System::Threading::Tasks::TaskCompletionSource_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::System::Threading::Tasks::TaskCompletionSource_1<bool> tcs, ::System::Threading::Tasks::Task_1<bool> task, ::System::Threading::Tasks::TaskCompletionSource_1<bool> __7__wrap1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;


                    constexpr ____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1(____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1 const&) = default;
                    constexpr ____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1(____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1&&) = default;
                    constexpr ____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1& operator=(____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1& operator=(____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::System::Threading::Tasks::TaskCompletionSource_1<bool> __declspec(property(get=__get_tcs, put=__set_tcs))  tcs;

constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool> value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool> __get_tcs() const;

 ::System::Threading::Tasks::Task_1<bool> __declspec(property(get=__get_task, put=__set_task))  task;

constexpr void __set_task(::System::Threading::Tasks::Task_1<bool> value) ;

constexpr ::System::Threading::Tasks::Task_1<bool> __get_task() const;

 ::System::Threading::Tasks::TaskCompletionSource_1<bool> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(::System::Threading::Tasks::TaskCompletionSource_1<bool> value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool> __get___7__wrap1() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1, "", "TaskExtensions/<>c__DisplayClass0_0`1");
NEED_NO_BOX(::GlobalNamespace::TaskExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TaskExtensions, "", "TaskExtensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1, "", "TaskExtensions/<WaitForTask>d__1`1");
