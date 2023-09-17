#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class IStandaloneMonobehavior;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace GlobalNamespace {
class IStandaloneThreadRunner;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct FrameTiming;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class StandaloneMonobehavior;
}
namespace GlobalNamespace {
class ____GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20;
}
// Type: ::<Dispatch>d__20
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12902))
// CS Name: StandaloneMonobehavior::<Dispatch>d__20
struct CORDL_TYPE ____GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandaloneMonobehavior", modifiers: "", def_value: None }, CppParam { name: "action", ty: "::System::Action", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::StandaloneMonobehavior __4__this, ::System::Action action, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;


                    constexpr ____GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20(____GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20 const&) = default;
                    constexpr ____GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20(____GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20&&) = default;
                    constexpr ____GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20& operator=(____GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20& operator=(____GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::GlobalNamespace::StandaloneMonobehavior __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::StandaloneMonobehavior value) ;

constexpr ::GlobalNamespace::StandaloneMonobehavior __get___4__this() const;

 ::System::Action __declspec(property(get=__get_action, put=__set_action))  action;

constexpr void __set_action(::System::Action value) ;

constexpr ::System::Action __get_action() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0xdcbc34 size 0x200 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xdcbe34 size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<DispatchAsync>d__21
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12903))
// CS Name: StandaloneMonobehavior::<DispatchAsync>d__21
struct CORDL_TYPE ____GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandaloneMonobehavior", modifiers: "", def_value: None }, CppParam { name: "action", ty: "::System::Func_1<::System::Threading::Tasks::Task>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::StandaloneMonobehavior __4__this, ::System::Func_1<::System::Threading::Tasks::Task> action, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;


                    constexpr ____GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21(____GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21 const&) = default;
                    constexpr ____GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21(____GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21&&) = default;
                    constexpr ____GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21& operator=(____GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21& operator=(____GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::GlobalNamespace::StandaloneMonobehavior __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::StandaloneMonobehavior value) ;

constexpr ::GlobalNamespace::StandaloneMonobehavior __get___4__this() const;

 ::System::Func_1<::System::Threading::Tasks::Task> __declspec(property(get=__get_action, put=__set_action))  action;

constexpr void __set_action(::System::Func_1<::System::Threading::Tasks::Task> value) ;

constexpr ::System::Func_1<::System::Threading::Tasks::Task> __get_action() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __get___u__1() const;

 ::System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0xdcbe40 size 0x2b0 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xdcc0f0 size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<RunAsyncCoroutine>d__25
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12904))
// CS Name: StandaloneMonobehavior::<RunAsyncCoroutine>d__25
class CORDL_TYPE ____GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~____GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25(____GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25(____GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25& operator=(____GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25&& o) noexcept = default;
  constexpr ____GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25& operator=(____GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 ::GlobalNamespace::StandaloneMonobehavior __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::StandaloneMonobehavior value) ;

constexpr ::GlobalNamespace::StandaloneMonobehavior __get___4__this() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::System::Threading::Tasks::TaskCompletionSource_1<bool> __declspec(property(get=__get_tcs, put=__set_tcs))  tcs;

constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool> value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool> __get_tcs() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25(int32_t __1__state) ;

/// @brief Method .ctor addr 0xdcbc0c size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0xdcc0fc size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0xdcc100 size 0x174 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0xdcc274 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0xdcc27c size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0xdcc2bc size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::StandaloneMonobehavior
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12905))
// CS Name: StandaloneMonobehavior
class CORDL_TYPE StandaloneMonobehavior : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _RunAsyncCoroutine_d__25 = ::GlobalNamespace::____GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25;

using _DispatchAsync_d__21 = ::GlobalNamespace::____GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21;

using _Dispatch_d__20 = ::GlobalNamespace::____GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20;

/// @brief Convert operator to ::GlobalNamespace::IStandaloneMonobehavior
constexpr operator  ::GlobalNamespace::IStandaloneMonobehavior() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~StandaloneMonobehavior() = default;

// Ctor Parameters [CppParam { name: "", ty: "StandaloneMonobehavior", modifiers: " const&", def_value: None }]
constexpr StandaloneMonobehavior(StandaloneMonobehavior const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StandaloneMonobehavior", modifiers: "&&", def_value: None }]
constexpr StandaloneMonobehavior(StandaloneMonobehavior&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StandaloneMonobehavior(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr StandaloneMonobehavior& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StandaloneMonobehavior& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StandaloneMonobehavior& operator=(StandaloneMonobehavior&& o) noexcept = default;
  constexpr StandaloneMonobehavior& operator=(StandaloneMonobehavior const& o) noexcept = default;
                


// Fields

 ::System::Threading::Tasks::TaskCompletionSource_1<bool> __declspec(property(get=__get__readyTcs, put=__set__readyTcs))  _readyTcs;

constexpr void __set__readyTcs(::System::Threading::Tasks::TaskCompletionSource_1<bool> value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool> __get__readyTcs() const;

 bool __declspec(property(get=__get__isRunning, put=__set__isRunning))  _isRunning;

constexpr void __set__isRunning(bool value) ;

constexpr bool __get__isRunning() const;

 float_t __declspec(property(get=__get__startTime, put=__set__startTime))  _startTime;

constexpr void __set__startTime(float_t value) ;

constexpr float_t __get__startTime() const;

 ::ArrayW<::UnityEngine::FrameTiming> __declspec(property(get=__get__lastFrameTimings, put=__set__lastFrameTimings))  _lastFrameTimings;

constexpr void __set__lastFrameTimings(::ArrayW<::UnityEngine::FrameTiming> value) ;

constexpr ::ArrayW<::UnityEngine::FrameTiming> __get__lastFrameTimings() const;

 int32_t __declspec(property(get=__get__lastFrameTimeCount, put=__set__lastFrameTimeCount))  _lastFrameTimeCount;

constexpr void __set__lastFrameTimeCount(int32_t value) ;

constexpr int32_t __get__lastFrameTimeCount() const;


// Properties

 float_t __declspec(property(get=get_objectLifeTime))  objectLifeTime;

 float_t __declspec(property(get=get_deltaTime))  deltaTime;

 float_t __declspec(property(get=get_lastFrameTime))  lastFrameTime;

 int32_t __declspec(property(get=get_frameCount))  frameCount;

 bool __declspec(property(get=get_isReady))  isReady;


// Methods

/// @brief Method get_objectLifeTime addr 0xdcb7bc size 0x20 virtual false final false
 float_t get_objectLifeTime() ;

/// @brief Method get_deltaTime addr 0xdcb7dc size 0x8 virtual false final false
 float_t get_deltaTime() ;

/// @brief Method get_lastFrameTime addr 0xdcb7e4 size 0x4 virtual false final false
 float_t get_lastFrameTime() ;

/// @brief Method get_frameCount addr 0xdbdc6c size 0x8 virtual false final false
 int32_t get_frameCount() ;

/// @brief Method get_isReady addr 0xdcb858 size 0x50 virtual false final false
 bool get_isReady() ;

/// @brief Method Awake addr 0xdcb8a8 size 0x1c virtual false final false
 void Awake() ;

/// @brief Method Start addr 0xdcb8c4 size 0x4 virtual true final false
 void Start() ;

/// @brief Method Update addr 0xdcb8c8 size 0x4 virtual true final false
 void Update() ;

/// @brief Method OnDestroy addr 0xdcb8cc size 0x4 virtual true final false
 void OnDestroy() ;

/// @brief Method OnApplicationPause addr 0xdcb8d0 size 0x4 virtual true final false
 void OnApplicationPause(bool pauseStatus) ;

/// @brief Method Dispatch addr 0xdcb8d4 size 0x9c virtual true final true
 void Dispatch(::System::Action action) ;

/// @brief Method DispatchAsync addr 0xdcb970 size 0xd8 virtual true final true
 ::System::Threading::Tasks::Task DispatchAsync(::System::Func_1<::System::Threading::Tasks::Task> action) ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T Create() ;

/// @brief Method RunAsync addr 0xdcba48 size 0x140 virtual true final true
 ::System::Threading::Tasks::Task RunAsync(::GlobalNamespace::IStandaloneThreadRunner runner, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Stop addr 0xdcbc04 size 0x8 virtual true final true
 void Stop() ;

/// @brief Method RunAsyncCoroutine addr 0xdcbb88 size 0x7c virtual false final false
 ::System::Collections::IEnumerator RunAsyncCoroutine(::System::Threading::Tasks::TaskCompletionSource_1<bool> tcs, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method GetLastFrameTime addr 0xdcb7e8 size 0x70 virtual false final false
 float_t GetLastFrameTime() ;

// Ctor Parameters []
explicit StandaloneMonobehavior() ;

/// @brief Method .ctor addr 0xdbfb30 size 0xa0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::StandaloneMonobehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandaloneMonobehavior, "", "StandaloneMonobehavior");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25, "", "StandaloneMonobehavior/<RunAsyncCoroutine>d__25");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21, "", "StandaloneMonobehavior/<DispatchAsync>d__21");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20, "", "StandaloneMonobehavior/<Dispatch>d__20");
