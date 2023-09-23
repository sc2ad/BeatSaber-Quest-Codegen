#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename TResult>
class Func_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1;
}
namespace GlobalNamespace {
class AsyncHelper;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1<T>;
}
namespace GlobalNamespace {
class GlobalNamespace__AsyncHelper____c__DisplayClass1_0;
}
namespace GlobalNamespace {
template<typename T>
struct GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
struct GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d<T>;
}
namespace GlobalNamespace {
struct GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d;
}
// Type: ::<<RunSync>b__0>d
// Type: ::<>c__DisplayClass0_0`1
// Type: ::<<RunSync>b__0>d
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13771))
// CS Name: AsyncHelper::<>c__DisplayClass1_0::<<RunSync>b__0>d
struct CORDL_TYPE GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::GlobalNamespace__AsyncHelper____c__DisplayClass1_0", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, GlobalNamespace::GlobalNamespace__AsyncHelper____c__DisplayClass1_0 __4__this, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d(GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d const&) = default;
                    constexpr GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d(GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d&&) = default;
                    constexpr GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d& operator=(GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d& operator=(GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::GlobalNamespace__AsyncHelper____c__DisplayClass1_0 __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GlobalNamespace__AsyncHelper____c__DisplayClass1_0 value) ;

constexpr GlobalNamespace::GlobalNamespace__AsyncHelper____c__DisplayClass1_0 __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x1f74f28 size 0x194 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x1f750bc size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass1_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13772))
// CS Name: AsyncHelper::<>c__DisplayClass1_0
class CORDL_TYPE GlobalNamespace__AsyncHelper____c__DisplayClass1_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __RunSync_b__0_d = GlobalNamespace::GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__AsyncHelper____c__DisplayClass1_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AsyncHelper____c__DisplayClass1_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__AsyncHelper____c__DisplayClass1_0(GlobalNamespace__AsyncHelper____c__DisplayClass1_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AsyncHelper____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__AsyncHelper____c__DisplayClass1_0(GlobalNamespace__AsyncHelper____c__DisplayClass1_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__AsyncHelper____c__DisplayClass1_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__AsyncHelper____c__DisplayClass1_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__AsyncHelper____c__DisplayClass1_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__AsyncHelper____c__DisplayClass1_0& operator=(GlobalNamespace__AsyncHelper____c__DisplayClass1_0&& o) noexcept = default;
  constexpr GlobalNamespace__AsyncHelper____c__DisplayClass1_0& operator=(GlobalNamespace__AsyncHelper____c__DisplayClass1_0 const& o) noexcept = default;
                


// Fields

 System::Func_1<System::Threading::Tasks::Task> __declspec(property(get=__get_asyncTask, put=__set_asyncTask))  asyncTask;

constexpr void __set_asyncTask(System::Func_1<System::Threading::Tasks::Task> value) ;

constexpr System::Func_1<System::Threading::Tasks::Task> __get_asyncTask() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__AsyncHelper____c__DisplayClass1_0() ;

/// @brief Method .ctor addr 0x1f74e58 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <RunSync>b__0 addr 0x1f74e60 size 0xc8 virtual false final false
 System::Threading::Tasks::Task _RunSync_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AsyncHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13773))
// CS Name: AsyncHelper
class CORDL_TYPE AsyncHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass1_0 = GlobalNamespace::GlobalNamespace__AsyncHelper____c__DisplayClass1_0;

template<typename T>
using __c__DisplayClass0_0_1 = GlobalNamespace::GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AsyncHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncHelper", modifiers: " const&", def_value: None }]
constexpr AsyncHelper(AsyncHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncHelper", modifiers: "&&", def_value: None }]
constexpr AsyncHelper(AsyncHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsyncHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AsyncHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsyncHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsyncHelper& operator=(AsyncHelper&& o) noexcept = default;
  constexpr AsyncHelper& operator=(AsyncHelper const& o) noexcept = default;
                


// Methods

/// @brief Method RunSync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T RunSync(System::Func_1<System::Threading::Tasks::Task_1<T>> asyncTask) ;

/// @brief Method RunSync addr 0x1f74d58 size 0x100 virtual false final false
static void RunSync(System::Func_1<System::Threading::Tasks::Task> asyncTask) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<<RunSync>b__0>d
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(13769))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13769), inst: 2 })
// CS Name: AsyncHelper::<>c__DisplayClass0_0`1::<<RunSync>b__0>d
struct CORDL_TYPE GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1<T>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, GlobalNamespace::GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1<T> __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__1) noexcept;


                    constexpr GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d(GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d const&) = default;
                    constexpr GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d(GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d&&) = default;
                    constexpr GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d& operator=(GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d& operator=(GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1<T> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1<T> value) ;

constexpr GlobalNamespace::GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1<T> __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<T> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<T> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<T> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass0_0`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13770))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13770), inst: 2 })
// CS Name: AsyncHelper::<>c__DisplayClass0_0`1
class CORDL_TYPE GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __RunSync_b__0_d = GlobalNamespace::GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1(GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1(GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1& operator=(GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1&& o) noexcept = default;
  constexpr GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1& operator=(GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1 const& o) noexcept = default;
                


// Fields

 System::Func_1<System::Threading::Tasks::Task_1<T>> __declspec(property(get=__get_asyncTask, put=__set_asyncTask))  asyncTask;

constexpr void __set_asyncTask(System::Func_1<System::Threading::Tasks::Task_1<T>> value) ;

constexpr System::Func_1<System::Threading::Tasks::Task_1<T>> __get_asyncTask() const;

 T __declspec(property(get=__get_result, put=__set_result))  result;

constexpr void __set_result(T value) ;

constexpr T __get_result() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <RunSync>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Threading::Tasks::Task _RunSync_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1, "", "AsyncHelper/<>c__DisplayClass0_0`1");
NEED_NO_BOX(GlobalNamespace::AsyncHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AsyncHelper, "", "AsyncHelper");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__AsyncHelper____c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__AsyncHelper____c__DisplayClass1_0, "", "AsyncHelper/<>c__DisplayClass1_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(GlobalNamespace::GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d, "", "AsyncHelper/<>c__DisplayClass0_0`1/<<RunSync>b__0>d");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d, "", "AsyncHelper/<>c__DisplayClass1_0/<<RunSync>b__0>d");
