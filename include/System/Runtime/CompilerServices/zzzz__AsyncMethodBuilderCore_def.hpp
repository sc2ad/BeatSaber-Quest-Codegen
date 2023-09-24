#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
namespace System {
class Action;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class ContextCallback;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Threading {
class WaitCallback;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System::Runtime::CompilerServices {
class System__Runtime__CompilerServices__AsyncMethodBuilderCore____c;
}
namespace System::Runtime::CompilerServices {
class System__Runtime__CompilerServices__AsyncMethodBuilderCore__ContinuationWrapper;
}
namespace System::Runtime::CompilerServices {
class System__Runtime__CompilerServices__AsyncMethodBuilderCore__MoveNextRunner;
}
namespace System::Runtime::CompilerServices {
class System__Runtime__CompilerServices__AsyncMethodBuilderCore____c__DisplayClass5_0;
}
namespace System {
class Exception;
}
namespace System::Threading {
class SynchronizationContext;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class System__Runtime__CompilerServices__AsyncMethodBuilderCore__ContinuationWrapper;
}
namespace System::Runtime::CompilerServices {
class System__Runtime__CompilerServices__AsyncMethodBuilderCore__MoveNextRunner;
}
namespace System::Runtime::CompilerServices {
class System__Runtime__CompilerServices__AsyncMethodBuilderCore____c;
}
namespace System::Runtime::CompilerServices {
class System__Runtime__CompilerServices__AsyncMethodBuilderCore____c__DisplayClass5_0;
}
namespace System::Runtime::CompilerServices {
struct AsyncMethodBuilderCore;
}
// Type: ::MoveNextRunner
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3396))
// CS Name: System.Runtime.CompilerServices.AsyncMethodBuilderCore::MoveNextRunner
class CORDL_TYPE System__Runtime__CompilerServices__AsyncMethodBuilderCore__MoveNextRunner : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Runtime__CompilerServices__AsyncMethodBuilderCore__MoveNextRunner() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__CompilerServices__AsyncMethodBuilderCore__MoveNextRunner", modifiers: " const&", def_value: None }]
constexpr System__Runtime__CompilerServices__AsyncMethodBuilderCore__MoveNextRunner(System__Runtime__CompilerServices__AsyncMethodBuilderCore__MoveNextRunner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__CompilerServices__AsyncMethodBuilderCore__MoveNextRunner", modifiers: "&&", def_value: None }]
constexpr System__Runtime__CompilerServices__AsyncMethodBuilderCore__MoveNextRunner(System__Runtime__CompilerServices__AsyncMethodBuilderCore__MoveNextRunner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Runtime__CompilerServices__AsyncMethodBuilderCore__MoveNextRunner(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Runtime__CompilerServices__AsyncMethodBuilderCore__MoveNextRunner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Runtime__CompilerServices__AsyncMethodBuilderCore__MoveNextRunner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Runtime__CompilerServices__AsyncMethodBuilderCore__MoveNextRunner& operator=(System__Runtime__CompilerServices__AsyncMethodBuilderCore__MoveNextRunner&& o) noexcept = default;
  constexpr System__Runtime__CompilerServices__AsyncMethodBuilderCore__MoveNextRunner& operator=(System__Runtime__CompilerServices__AsyncMethodBuilderCore__MoveNextRunner const& o) noexcept = default;
                


// Fields

 System::Threading::ExecutionContext __declspec(property(get=__get_m_context, put=__set_m_context))  m_context;

constexpr void __set_m_context(System::Threading::ExecutionContext value) ;

constexpr System::Threading::ExecutionContext __get_m_context() const;

 System::Runtime::CompilerServices::IAsyncStateMachine __declspec(property(get=__get_m_stateMachine, put=__set_m_stateMachine))  m_stateMachine;

constexpr void __set_m_stateMachine(System::Runtime::CompilerServices::IAsyncStateMachine value) ;

constexpr System::Runtime::CompilerServices::IAsyncStateMachine __get_m_stateMachine() const;

static System::Threading::ContextCallback __declspec(property(get=__get_s_invokeMoveNext, put=__set_s_invokeMoveNext))  s_invokeMoveNext;

static void __set_s_invokeMoveNext(System::Threading::ContextCallback value) ;

static System::Threading::ContextCallback __get_s_invokeMoveNext() ;


// Methods

static System::Runtime::CompilerServices::System__Runtime__CompilerServices__AsyncMethodBuilderCore__MoveNextRunner New_ctor(System::Threading::ExecutionContext context, System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

/// @brief Method .ctor addr 0x236fcd4 size 0x2c virtual false final false
 void _ctor(System::Threading::ExecutionContext context, System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

/// @brief Method Run addr 0x2370108 size 0x20c virtual false final false
 void Run() ;

/// @brief Method InvokeMoveNext addr 0x2370314 size 0xe0 virtual false final false
static void InvokeMoveNext(::bs_hook::Il2CppWrapperType stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::ContinuationWrapper
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3397))
// CS Name: System.Runtime.CompilerServices.AsyncMethodBuilderCore::ContinuationWrapper
class CORDL_TYPE System__Runtime__CompilerServices__AsyncMethodBuilderCore__ContinuationWrapper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~System__Runtime__CompilerServices__AsyncMethodBuilderCore__ContinuationWrapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__CompilerServices__AsyncMethodBuilderCore__ContinuationWrapper", modifiers: " const&", def_value: None }]
constexpr System__Runtime__CompilerServices__AsyncMethodBuilderCore__ContinuationWrapper(System__Runtime__CompilerServices__AsyncMethodBuilderCore__ContinuationWrapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__CompilerServices__AsyncMethodBuilderCore__ContinuationWrapper", modifiers: "&&", def_value: None }]
constexpr System__Runtime__CompilerServices__AsyncMethodBuilderCore__ContinuationWrapper(System__Runtime__CompilerServices__AsyncMethodBuilderCore__ContinuationWrapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Runtime__CompilerServices__AsyncMethodBuilderCore__ContinuationWrapper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Runtime__CompilerServices__AsyncMethodBuilderCore__ContinuationWrapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Runtime__CompilerServices__AsyncMethodBuilderCore__ContinuationWrapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Runtime__CompilerServices__AsyncMethodBuilderCore__ContinuationWrapper& operator=(System__Runtime__CompilerServices__AsyncMethodBuilderCore__ContinuationWrapper&& o) noexcept = default;
  constexpr System__Runtime__CompilerServices__AsyncMethodBuilderCore__ContinuationWrapper& operator=(System__Runtime__CompilerServices__AsyncMethodBuilderCore__ContinuationWrapper const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_m_continuation, put=__set_m_continuation))  m_continuation;

constexpr void __set_m_continuation(System::Action value) ;

constexpr System::Action __get_m_continuation() const;

 System::Action __declspec(property(get=__get_m_invokeAction, put=__set_m_invokeAction))  m_invokeAction;

constexpr void __set_m_invokeAction(System::Action value) ;

constexpr System::Action __get_m_invokeAction() const;

 System::Threading::Tasks::Task __declspec(property(get=__get_m_innerTask, put=__set_m_innerTask))  m_innerTask;

constexpr void __set_m_innerTask(System::Threading::Tasks::Task value) ;

constexpr System::Threading::Tasks::Task __get_m_innerTask() const;


// Methods

static System::Runtime::CompilerServices::System__Runtime__CompilerServices__AsyncMethodBuilderCore__ContinuationWrapper New_ctor(System::Action continuation, System::Action invokeAction, System::Threading::Tasks::Task innerTask) ;

/// @brief Method .ctor addr 0x2370028 size 0x4c virtual false final false
 void _ctor(System::Action continuation, System::Action invokeAction, System::Threading::Tasks::Task innerTask) ;

/// @brief Method Invoke addr 0x23703f4 size 0x24 virtual false final false
 void Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::<>c__DisplayClass5_0
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3398))
// CS Name: System.Runtime.CompilerServices.AsyncMethodBuilderCore::<>c__DisplayClass5_0
class CORDL_TYPE System__Runtime__CompilerServices__AsyncMethodBuilderCore____c__DisplayClass5_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Runtime__CompilerServices__AsyncMethodBuilderCore____c__DisplayClass5_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__CompilerServices__AsyncMethodBuilderCore____c__DisplayClass5_0", modifiers: " const&", def_value: None }]
constexpr System__Runtime__CompilerServices__AsyncMethodBuilderCore____c__DisplayClass5_0(System__Runtime__CompilerServices__AsyncMethodBuilderCore____c__DisplayClass5_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__CompilerServices__AsyncMethodBuilderCore____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
constexpr System__Runtime__CompilerServices__AsyncMethodBuilderCore____c__DisplayClass5_0(System__Runtime__CompilerServices__AsyncMethodBuilderCore____c__DisplayClass5_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Runtime__CompilerServices__AsyncMethodBuilderCore____c__DisplayClass5_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Runtime__CompilerServices__AsyncMethodBuilderCore____c__DisplayClass5_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Runtime__CompilerServices__AsyncMethodBuilderCore____c__DisplayClass5_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Runtime__CompilerServices__AsyncMethodBuilderCore____c__DisplayClass5_0& operator=(System__Runtime__CompilerServices__AsyncMethodBuilderCore____c__DisplayClass5_0&& o) noexcept = default;
  constexpr System__Runtime__CompilerServices__AsyncMethodBuilderCore____c__DisplayClass5_0& operator=(System__Runtime__CompilerServices__AsyncMethodBuilderCore____c__DisplayClass5_0 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::Task __declspec(property(get=__get_innerTask, put=__set_innerTask))  innerTask;

constexpr void __set_innerTask(System::Threading::Tasks::Task value) ;

constexpr System::Threading::Tasks::Task __get_innerTask() const;

 System::Action __declspec(property(get=__get_continuation, put=__set_continuation))  continuation;

constexpr void __set_continuation(System::Action value) ;

constexpr System::Action __get_continuation() const;


// Methods

static System::Runtime::CompilerServices::System__Runtime__CompilerServices__AsyncMethodBuilderCore____c__DisplayClass5_0 New_ctor() ;

/// @brief Method .ctor addr 0x236fdc0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <OutputAsyncCausalityEvents>b__0 addr 0x2370418 size 0x5c virtual false final false
 void _OutputAsyncCausalityEvents_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::<>c
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3399))
// CS Name: System.Runtime.CompilerServices.AsyncMethodBuilderCore::<>c
class CORDL_TYPE System__Runtime__CompilerServices__AsyncMethodBuilderCore____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Runtime__CompilerServices__AsyncMethodBuilderCore____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__CompilerServices__AsyncMethodBuilderCore____c", modifiers: " const&", def_value: None }]
constexpr System__Runtime__CompilerServices__AsyncMethodBuilderCore____c(System__Runtime__CompilerServices__AsyncMethodBuilderCore____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__CompilerServices__AsyncMethodBuilderCore____c", modifiers: "&&", def_value: None }]
constexpr System__Runtime__CompilerServices__AsyncMethodBuilderCore____c(System__Runtime__CompilerServices__AsyncMethodBuilderCore____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Runtime__CompilerServices__AsyncMethodBuilderCore____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Runtime__CompilerServices__AsyncMethodBuilderCore____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Runtime__CompilerServices__AsyncMethodBuilderCore____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Runtime__CompilerServices__AsyncMethodBuilderCore____c& operator=(System__Runtime__CompilerServices__AsyncMethodBuilderCore____c&& o) noexcept = default;
  constexpr System__Runtime__CompilerServices__AsyncMethodBuilderCore____c& operator=(System__Runtime__CompilerServices__AsyncMethodBuilderCore____c const& o) noexcept = default;
                


// Fields

static System::Runtime::CompilerServices::System__Runtime__CompilerServices__AsyncMethodBuilderCore____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(System::Runtime::CompilerServices::System__Runtime__CompilerServices__AsyncMethodBuilderCore____c value) ;

static System::Runtime::CompilerServices::System__Runtime__CompilerServices__AsyncMethodBuilderCore____c __get___9() ;

static System::Threading::SendOrPostCallback __declspec(property(get=__get___9__7_0, put=__set___9__7_0))  __9__7_0;

static void __set___9__7_0(System::Threading::SendOrPostCallback value) ;

static System::Threading::SendOrPostCallback __get___9__7_0() ;

static System::Threading::WaitCallback __declspec(property(get=__get___9__7_1, put=__set___9__7_1))  __9__7_1;

static void __set___9__7_1(System::Threading::WaitCallback value) ;

static System::Threading::WaitCallback __get___9__7_1() ;


// Methods

static System::Runtime::CompilerServices::System__Runtime__CompilerServices__AsyncMethodBuilderCore____c New_ctor() ;

/// @brief Method .ctor addr 0x23704d8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ThrowAsync>b__7_0 addr 0x23704e0 size 0x54 virtual false final false
 void _ThrowAsync_b__7_0(::bs_hook::Il2CppWrapperType state) ;

/// @brief Method <ThrowAsync>b__7_1 addr 0x2370534 size 0x54 virtual false final false
 void _ThrowAsync_b__7_1(::bs_hook::Il2CppWrapperType state) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncMethodBuilderCore
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3400))
// CS Name: System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct CORDL_TYPE AsyncMethodBuilderCore : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using __c = System::Runtime::CompilerServices::System__Runtime__CompilerServices__AsyncMethodBuilderCore____c;

using __c__DisplayClass5_0 = System::Runtime::CompilerServices::System__Runtime__CompilerServices__AsyncMethodBuilderCore____c__DisplayClass5_0;

using ContinuationWrapper = System::Runtime::CompilerServices::System__Runtime__CompilerServices__AsyncMethodBuilderCore__ContinuationWrapper;

using MoveNextRunner = System::Runtime::CompilerServices::System__Runtime__CompilerServices__AsyncMethodBuilderCore__MoveNextRunner;

// Ctor Parameters [CppParam { name: "m_stateMachine", ty: "System::Runtime::CompilerServices::IAsyncStateMachine", modifiers: "", def_value: None }, CppParam { name: "m_defaultContextAction", ty: "System::Action", modifiers: "", def_value: None }]
constexpr AsyncMethodBuilderCore(System::Runtime::CompilerServices::IAsyncStateMachine m_stateMachine, System::Action m_defaultContextAction) noexcept;


                    constexpr AsyncMethodBuilderCore(AsyncMethodBuilderCore const&) = default;
                    constexpr AsyncMethodBuilderCore(AsyncMethodBuilderCore&&) = default;
                    constexpr AsyncMethodBuilderCore& operator=(AsyncMethodBuilderCore const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncMethodBuilderCore& operator=(AsyncMethodBuilderCore&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncMethodBuilderCore(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Runtime::CompilerServices::IAsyncStateMachine __declspec(property(get=__get_m_stateMachine, put=__set_m_stateMachine))  m_stateMachine;

constexpr void __set_m_stateMachine(System::Runtime::CompilerServices::IAsyncStateMachine value) ;

constexpr System::Runtime::CompilerServices::IAsyncStateMachine __get_m_stateMachine() const;

 System::Action __declspec(property(get=__get_m_defaultContextAction, put=__set_m_defaultContextAction))  m_defaultContextAction;

constexpr void __set_m_defaultContextAction(System::Action value) ;

constexpr System::Action __get_m_defaultContextAction() const;


// Methods

/// @brief Method SetStateMachine addr 0x236f128 size 0xc8 virtual false final false
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

/// @brief Method GetCompletionAction addr 0x236fb08 size 0x1cc virtual false final false
 System::Action GetCompletionAction(System::Threading::Tasks::Task taskForTracing, ByRef<System::Runtime::CompilerServices::System__Runtime__CompilerServices__AsyncMethodBuilderCore__MoveNextRunner> runnerToInitialize) ;

/// @brief Method OutputAsyncCausalityEvents addr 0x236fd00 size 0xc0 virtual false final false
 System::Action OutputAsyncCausalityEvents(System::Threading::Tasks::Task innerTask, System::Action continuation) ;

/// @brief Method PostBoxInitialization addr 0x236fe88 size 0x1a0 virtual false final false
 void PostBoxInitialization(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine, System::Runtime::CompilerServices::System__Runtime__CompilerServices__AsyncMethodBuilderCore__MoveNextRunner runner, System::Threading::Tasks::Task builtTask) ;

/// @brief Method ThrowAsync addr 0x236f490 size 0x2ec virtual false final false
static void ThrowAsync(System::Exception exception, System::Threading::SynchronizationContext targetContext) ;

/// @brief Method CreateContinuationWrapper addr 0x236fdc8 size 0xc0 virtual false final false
static System::Action CreateContinuationWrapper(System::Action continuation, System::Action invokeAction, System::Threading::Tasks::Task innerTask) ;

/// @brief Method TryGetContinuationTask addr 0x2370074 size 0x94 virtual false final false
static System::Threading::Tasks::Task TryGetContinuationTask(System::Action action) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(System::Runtime::CompilerServices::System__Runtime__CompilerServices__AsyncMethodBuilderCore__ContinuationWrapper);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::System__Runtime__CompilerServices__AsyncMethodBuilderCore__ContinuationWrapper, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore/ContinuationWrapper");
NEED_NO_BOX(System::Runtime::CompilerServices::System__Runtime__CompilerServices__AsyncMethodBuilderCore__MoveNextRunner);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::System__Runtime__CompilerServices__AsyncMethodBuilderCore__MoveNextRunner, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore/MoveNextRunner");
NEED_NO_BOX(System::Runtime::CompilerServices::System__Runtime__CompilerServices__AsyncMethodBuilderCore____c);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::System__Runtime__CompilerServices__AsyncMethodBuilderCore____c, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore/<>c");
NEED_NO_BOX(System::Runtime::CompilerServices::System__Runtime__CompilerServices__AsyncMethodBuilderCore____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::System__Runtime__CompilerServices__AsyncMethodBuilderCore____c__DisplayClass5_0, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore/<>c__DisplayClass5_0");
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::AsyncMethodBuilderCore, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore");
