#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
template<typename TResult>
class Func_1;
}
namespace GlobalNamespace {
class IStandaloneMonobehavior;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class MultiplayerSessionManager;
}
namespace GlobalNamespace {
class IStandaloneThreadRunner;
}
namespace GlobalNamespace {
class IMockBeatmapDataProvider;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace GlobalNamespace {
class IConnectionManager;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
class MockPlayerFiniteStateMachine;
}
namespace GlobalNamespace {
template<typename T>
class IConnectionInitParams_1;
}
namespace System {
class IDisposable;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace GlobalNamespace {
class ConnectedPlayerManager;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ____GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1;
}
namespace GlobalNamespace {
class MockPlayerInstance;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class ____GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1<T>;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__MockPlayerInstance___RunAsync_d__18;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__MockPlayerInstance___Stop_d__21;
}
// Type: ::<>c__DisplayClass17_0`1
// Type: ::<RunAsync>d__18
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15494))
// CS Name: MockPlayerInstance::<RunAsync>d__18
struct CORDL_TYPE ____GlobalNamespace__MockPlayerInstance___RunAsync_d__18 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockPlayerInstance", modifiers: "", def_value: None }, CppParam { name: "runner", ty: "::GlobalNamespace::IStandaloneThreadRunner", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__MockPlayerInstance___RunAsync_d__18(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::CancellationToken token, ::GlobalNamespace::MockPlayerInstance __4__this, ::GlobalNamespace::IStandaloneThreadRunner runner, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr ____GlobalNamespace__MockPlayerInstance___RunAsync_d__18(____GlobalNamespace__MockPlayerInstance___RunAsync_d__18 const&) = default;
                    constexpr ____GlobalNamespace__MockPlayerInstance___RunAsync_d__18(____GlobalNamespace__MockPlayerInstance___RunAsync_d__18&&) = default;
                    constexpr ____GlobalNamespace__MockPlayerInstance___RunAsync_d__18& operator=(____GlobalNamespace__MockPlayerInstance___RunAsync_d__18 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__MockPlayerInstance___RunAsync_d__18& operator=(____GlobalNamespace__MockPlayerInstance___RunAsync_d__18&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MockPlayerInstance___RunAsync_d__18(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::System::Threading::CancellationToken __declspec(property(get=__get_token, put=__set_token))  token;

constexpr void __set_token(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_token() const;

 ::GlobalNamespace::MockPlayerInstance __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::MockPlayerInstance value) ;

constexpr ::GlobalNamespace::MockPlayerInstance __get___4__this() const;

 ::GlobalNamespace::IStandaloneThreadRunner __declspec(property(get=__get_runner, put=__set_runner))  runner;

constexpr void __set_runner(::GlobalNamespace::IStandaloneThreadRunner value) ;

constexpr ::GlobalNamespace::IStandaloneThreadRunner __get_runner() const;

 ::System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x227e20c size 0x218 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x227e424 size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<Stop>d__21
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15495))
// CS Name: MockPlayerInstance::<Stop>d__21
struct CORDL_TYPE ____GlobalNamespace__MockPlayerInstance___Stop_d__21 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockPlayerInstance", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__MockPlayerInstance___Stop_d__21(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::MockPlayerInstance __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr ____GlobalNamespace__MockPlayerInstance___Stop_d__21(____GlobalNamespace__MockPlayerInstance___Stop_d__21 const&) = default;
                    constexpr ____GlobalNamespace__MockPlayerInstance___Stop_d__21(____GlobalNamespace__MockPlayerInstance___Stop_d__21&&) = default;
                    constexpr ____GlobalNamespace__MockPlayerInstance___Stop_d__21& operator=(____GlobalNamespace__MockPlayerInstance___Stop_d__21 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__MockPlayerInstance___Stop_d__21& operator=(____GlobalNamespace__MockPlayerInstance___Stop_d__21&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MockPlayerInstance___Stop_d__21(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::GlobalNamespace::MockPlayerInstance __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::MockPlayerInstance value) ;

constexpr ::GlobalNamespace::MockPlayerInstance __get___4__this() const;

 ::System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x227e430 size 0x178 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x227e5a8 size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<DisposeAsync>d__22
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15496))
// CS Name: MockPlayerInstance::<DisposeAsync>d__22
struct CORDL_TYPE ____GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockPlayerInstance", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::MockPlayerInstance __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr ____GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22(____GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22 const&) = default;
                    constexpr ____GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22(____GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22&&) = default;
                    constexpr ____GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22& operator=(____GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22& operator=(____GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::GlobalNamespace::MockPlayerInstance __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::MockPlayerInstance value) ;

constexpr ::GlobalNamespace::MockPlayerInstance __get___4__this() const;

 ::System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x227e5b4 size 0x20c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x227e7c0 size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MockPlayerInstance
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15497))
// CS Name: MockPlayerInstance
class CORDL_TYPE MockPlayerInstance : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _DisposeAsync_d__22 = ::GlobalNamespace::____GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22;

using _Stop_d__21 = ::GlobalNamespace::____GlobalNamespace__MockPlayerInstance___Stop_d__21;

using _RunAsync_d__18 = ::GlobalNamespace::____GlobalNamespace__MockPlayerInstance___RunAsync_d__18;

template<typename T>
using __c__DisplayClass17_0_1 = ::GlobalNamespace::____GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1<T>;

/// @brief Convert operator to ::GlobalNamespace::IStandaloneMonobehavior
constexpr operator  ::GlobalNamespace::IStandaloneMonobehavior() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~MockPlayerInstance() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerInstance", modifiers: " const&", def_value: None }]
constexpr MockPlayerInstance(MockPlayerInstance const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerInstance", modifiers: "&&", def_value: None }]
constexpr MockPlayerInstance(MockPlayerInstance&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockPlayerInstance(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MockPlayerInstance& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockPlayerInstance& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockPlayerInstance& operator=(MockPlayerInstance&& o) noexcept = default;
  constexpr MockPlayerInstance& operator=(MockPlayerInstance const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__id, put=__set__id))  _id;

constexpr void __set__id(::StringW value) ;

constexpr ::StringW __get__id() const;

 ::StringW __declspec(property(get=__get__userId, put=__set__userId))  _userId;

constexpr void __set__userId(::StringW value) ;

constexpr ::StringW __get__userId() const;

 ::StringW __declspec(property(get=__get__userName, put=__set__userName))  _userName;

constexpr void __set__userName(::StringW value) ;

constexpr ::StringW __get__userName() const;

 ::BGNet::Core::ITimeProvider __declspec(property(get=__get__timeProvider, put=__set__timeProvider))  _timeProvider;

constexpr void __set__timeProvider(::BGNet::Core::ITimeProvider value) ;

constexpr ::BGNet::Core::ITimeProvider __get__timeProvider() const;

 ::BGNet::Core::ITaskUtility __declspec(property(get=__get__taskUtility, put=__set__taskUtility))  _taskUtility;

constexpr void __set__taskUtility(::BGNet::Core::ITaskUtility value) ;

constexpr ::BGNet::Core::ITaskUtility __get__taskUtility() const;

 ::System::Threading::CancellationTokenSource __declspec(property(get=__get__cancellationTokenSource, put=__set__cancellationTokenSource))  _cancellationTokenSource;

constexpr void __set__cancellationTokenSource(::System::Threading::CancellationTokenSource value) ;

constexpr ::System::Threading::CancellationTokenSource __get__cancellationTokenSource() const;

 ::GlobalNamespace::MultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::MultiplayerSessionManager value) ;

constexpr ::GlobalNamespace::MultiplayerSessionManager __get__multiplayerSessionManager() const;

 ::GlobalNamespace::ConnectedPlayerManager __declspec(property(get=__get__connectedPlayerManager, put=__set__connectedPlayerManager))  _connectedPlayerManager;

constexpr void __set__connectedPlayerManager(::GlobalNamespace::ConnectedPlayerManager value) ;

constexpr ::GlobalNamespace::ConnectedPlayerManager __get__connectedPlayerManager() const;

 ::GlobalNamespace::MockPlayerFiniteStateMachine __declspec(property(get=__get__fsm, put=__set__fsm))  _fsm;

constexpr void __set__fsm(::GlobalNamespace::MockPlayerFiniteStateMachine value) ;

constexpr ::GlobalNamespace::MockPlayerFiniteStateMachine __get__fsm() const;


// Properties

 ::StringW __declspec(property(get=get_id))  id;

 ::StringW __declspec(property(get=get_userId))  userId;

 ::StringW __declspec(property(get=get_userName))  userName;


// Methods

/// @brief Method get_id addr 0x227da60 size 0x8 virtual false final false
 ::StringW get_id() ;

/// @brief Method get_userId addr 0x227da68 size 0x8 virtual false final false
 ::StringW get_userId() ;

/// @brief Method get_userName addr 0x227da70 size 0x8 virtual false final false
 ::StringW get_userName() ;

// Ctor Parameters [CppParam { name: "timeProvider", ty: "::BGNet::Core::ITimeProvider", modifiers: "", def_value: None }, CppParam { name: "taskUtility", ty: "::BGNet::Core::ITaskUtility", modifiers: "", def_value: None }, CppParam { name: "beatmapDataProvider", ty: "::GlobalNamespace::IMockBeatmapDataProvider", modifiers: "", def_value: None }, CppParam { name: "connectionManager", ty: "::GlobalNamespace::IConnectionManager", modifiers: "", def_value: None }]
explicit MockPlayerInstance(::BGNet::Core::ITimeProvider timeProvider, ::BGNet::Core::ITaskUtility taskUtility, ::GlobalNamespace::IMockBeatmapDataProvider beatmapDataProvider, ::GlobalNamespace::IConnectionManager connectionManager) ;

/// @brief Method .ctor addr 0x227da78 size 0x384 virtual false final false
 void _ctor(::BGNet::Core::ITimeProvider timeProvider, ::BGNet::Core::ITaskUtility taskUtility, ::GlobalNamespace::IMockBeatmapDataProvider beatmapDataProvider, ::GlobalNamespace::IConnectionManager connectionManager) ;

/// @brief Method Tick addr 0x227de00 size 0x18 virtual false final false
 void Tick() ;

/// @brief Method ConnectToServer addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void ConnectToServer(::GlobalNamespace::IConnectionInitParams_1<T> connectionInitParams) ;

/// @brief Method RunAsync addr 0x227de18 size 0xdc virtual true final true
 ::System::Threading::Tasks::Task RunAsync(::GlobalNamespace::IStandaloneThreadRunner runner, ::System::Threading::CancellationToken token) ;

/// @brief Method Dispatch addr 0x227def4 size 0x1c virtual true final true
 void Dispatch(::System::Action action) ;

/// @brief Method DispatchAsync addr 0x227df10 size 0x1c virtual true final true
 ::System::Threading::Tasks::Task DispatchAsync(::System::Func_1<::System::Threading::Tasks::Task> action) ;

/// @brief Method Stop addr 0x227df2c size 0x94 virtual true final true
 void Stop() ;

/// @brief Method DisposeAsync addr 0x227dfc0 size 0xc8 virtual false final false
 ::System::Threading::Tasks::Task DisposeAsync() ;

/// @brief Method Dispose addr 0x227e088 size 0xb4 virtual true final true
 void Dispose() ;

/// @brief Method <.ctor>b__15_0 addr 0x227e13c size 0x4 virtual false final false
 void __ctor_b__15_0(::GlobalNamespace::ConnectionFailedReason r) ;

/// @brief Method <.ctor>b__15_1 addr 0x227e140 size 0x4 virtual false final false
 void __ctor_b__15_1(::GlobalNamespace::DisconnectedReason r) ;

/// @brief Method <DisposeAsync>b__22_0 addr 0x227e144 size 0xc8 virtual false final false
 ::System::Threading::Tasks::Task _DisposeAsync_b__22_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass17_0`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15493))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15493), inst: 2 })
// CS Name: MockPlayerInstance::<>c__DisplayClass17_0`1
class CORDL_TYPE ____GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1(____GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1(____GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1& operator=(____GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1&& o) noexcept = default;
  constexpr ____GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1& operator=(____GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MockPlayerInstance __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::MockPlayerInstance value) ;

constexpr ::GlobalNamespace::MockPlayerInstance __get___4__this() const;

 ::GlobalNamespace::IConnectionInitParams_1<T> __declspec(property(get=__get_connectionInitParams, put=__set_connectionInitParams))  connectionInitParams;

constexpr void __set_connectionInitParams(::GlobalNamespace::IConnectionInitParams_1<T> value) ;

constexpr ::GlobalNamespace::IConnectionInitParams_1<T> __get_connectionInitParams() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <ConnectToServer>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ConnectToServer_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1, "", "MockPlayerInstance/<>c__DisplayClass17_0`1");
NEED_NO_BOX(::GlobalNamespace::MockPlayerInstance);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerInstance, "", "MockPlayerInstance");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22, "", "MockPlayerInstance/<DisposeAsync>d__22");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MockPlayerInstance___RunAsync_d__18, "", "MockPlayerInstance/<RunAsync>d__18");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MockPlayerInstance___Stop_d__21, "", "MockPlayerInstance/<Stop>d__21");
