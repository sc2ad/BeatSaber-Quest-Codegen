#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncMethodBuilderCore;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Exception;
}
namespace BGNet::Core::GameLift {
struct GetMultiplayerInstanceResponse;
}
namespace GlobalNamespace {
struct AuthenticationToken;
}
namespace GlobalNamespace {
struct GetAssetBundleFileResult;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult;
}
namespace System {
struct Int32Enum;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Threading::Tasks {
struct VoidTaskResult;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
struct ValueTuple_5;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template<::cordl_internals::il2cpp_reference_type TResult>
struct AsyncTaskMethodBuilder_1<TResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<::System::Int32Enum>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<::System::Nullable_1<int32_t>>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<::System::Threading::Tasks::VoidTaskResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<bool>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<int32_t>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncTaskMethodBuilder_1<int64_t>;
}
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<::cordl_internals::il2cpp_reference_type TResult>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 2 })
// CS Name: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
struct CORDL_TYPE AsyncTaskMethodBuilder_1<TResult> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<TResult>", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState, ::System::Threading::Tasks::Task_1<TResult> m_task) noexcept;


                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1 const&) = default;
                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1&&) = default;
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::System::Threading::Tasks::Task_1<TResult> __declspec(property(get=__get_s_defaultResultTask, put=__set_s_defaultResultTask))  s_defaultResultTask;

static void __set_s_defaultResultTask(::System::Threading::Tasks::Task_1<TResult> value) ;

static ::System::Threading::Tasks::Task_1<TResult> __get_s_defaultResultTask() ;

 ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __declspec(property(get=__get_m_coreState, put=__set_m_coreState))  m_coreState;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __get_m_coreState() const;

 ::System::Threading::Tasks::Task_1<TResult> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<TResult> value) ;

constexpr ::System::Threading::Tasks::Task_1<TResult> __get_m_task() const;


// Properties

 ::System::Threading::Tasks::Task_1<TResult> __declspec(property(get=get_Task))  Task;


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
 void Start(ByRef<TStateMachine> stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
 void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<TResult> get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(TResult result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::System::Threading::Tasks::Task_1<TResult> completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetException(::System::Exception exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<TResult> GetTaskForResult(TResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(3394))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 89 })
// CS Name: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState, ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> m_task) noexcept;


                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1 const&) = default;
                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1&&) = default;
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __declspec(property(get=__get_s_defaultResultTask, put=__set_s_defaultResultTask))  s_defaultResultTask;

static void __set_s_defaultResultTask(::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> value) ;

static ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __get_s_defaultResultTask() ;

 ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __declspec(property(get=__get_m_coreState, put=__set_m_coreState))  m_coreState;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __get_m_coreState() const;

 ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> value) ;

constexpr ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __get_m_task() const;


// Properties

 ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __declspec(property(get=get_Task))  Task;


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
 void Start(ByRef<TStateMachine> stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
 void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetException(::System::Exception exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> GetTaskForResult(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(3394))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 92 })
// CS Name: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
struct CORDL_TYPE AsyncTaskMethodBuilder_1<int32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<int32_t>", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState, ::System::Threading::Tasks::Task_1<int32_t> m_task) noexcept;


                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1 const&) = default;
                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1&&) = default;
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::System::Threading::Tasks::Task_1<int32_t> __declspec(property(get=__get_s_defaultResultTask, put=__set_s_defaultResultTask))  s_defaultResultTask;

static void __set_s_defaultResultTask(::System::Threading::Tasks::Task_1<int32_t> value) ;

static ::System::Threading::Tasks::Task_1<int32_t> __get_s_defaultResultTask() ;

 ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __declspec(property(get=__get_m_coreState, put=__set_m_coreState))  m_coreState;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __get_m_coreState() const;

 ::System::Threading::Tasks::Task_1<int32_t> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<int32_t> value) ;

constexpr ::System::Threading::Tasks::Task_1<int32_t> __get_m_task() const;


// Properties

 ::System::Threading::Tasks::Task_1<int32_t> __declspec(property(get=get_Task))  Task;


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
 void Start(ByRef<TStateMachine> stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
 void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<int32_t> get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(int32_t result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::System::Threading::Tasks::Task_1<int32_t> completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetException(::System::Exception exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<int32_t> GetTaskForResult(int32_t result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 96 })
// CS Name: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState, ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> m_task) noexcept;


                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1 const&) = default;
                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1&&) = default;
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_s_defaultResultTask, put=__set_s_defaultResultTask))  s_defaultResultTask;

static void __set_s_defaultResultTask(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> value) ;

static ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> __get_s_defaultResultTask() ;

 ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __declspec(property(get=__get_m_coreState, put=__set_m_coreState))  m_coreState;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __get_m_coreState() const;

 ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> __get_m_task() const;


// Properties

 ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> __declspec(property(get=get_Task))  Task;


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
 void Start(ByRef<TStateMachine> stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
 void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetException(::System::Exception exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> GetTaskForResult(::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 99 })
// CS Name: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
struct CORDL_TYPE AsyncTaskMethodBuilder_1<bool> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<bool>", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState, ::System::Threading::Tasks::Task_1<bool> m_task) noexcept;


                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1 const&) = default;
                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1&&) = default;
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::System::Threading::Tasks::Task_1<bool> __declspec(property(get=__get_s_defaultResultTask, put=__set_s_defaultResultTask))  s_defaultResultTask;

static void __set_s_defaultResultTask(::System::Threading::Tasks::Task_1<bool> value) ;

static ::System::Threading::Tasks::Task_1<bool> __get_s_defaultResultTask() ;

 ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __declspec(property(get=__get_m_coreState, put=__set_m_coreState))  m_coreState;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __get_m_coreState() const;

 ::System::Threading::Tasks::Task_1<bool> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<bool> value) ;

constexpr ::System::Threading::Tasks::Task_1<bool> __get_m_task() const;


// Properties

 ::System::Threading::Tasks::Task_1<bool> __declspec(property(get=get_Task))  Task;


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
 void Start(ByRef<TStateMachine> stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
 void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<bool> get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(bool result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::System::Threading::Tasks::Task_1<bool> completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetException(::System::Exception exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<bool> GetTaskForResult(bool result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 830 })
// CS Name: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
struct CORDL_TYPE AsyncTaskMethodBuilder_1<int64_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<int64_t>", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState, ::System::Threading::Tasks::Task_1<int64_t> m_task) noexcept;


                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1 const&) = default;
                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1&&) = default;
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::System::Threading::Tasks::Task_1<int64_t> __declspec(property(get=__get_s_defaultResultTask, put=__set_s_defaultResultTask))  s_defaultResultTask;

static void __set_s_defaultResultTask(::System::Threading::Tasks::Task_1<int64_t> value) ;

static ::System::Threading::Tasks::Task_1<int64_t> __get_s_defaultResultTask() ;

 ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __declspec(property(get=__get_m_coreState, put=__set_m_coreState))  m_coreState;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __get_m_coreState() const;

 ::System::Threading::Tasks::Task_1<int64_t> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<int64_t> value) ;

constexpr ::System::Threading::Tasks::Task_1<int64_t> __get_m_task() const;


// Properties

 ::System::Threading::Tasks::Task_1<int64_t> __declspec(property(get=get_Task))  Task;


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
 void Start(ByRef<TStateMachine> stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
 void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<int64_t> get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(int64_t result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::System::Threading::Tasks::Task_1<int64_t> completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetException(::System::Exception exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<int64_t> GetTaskForResult(int64_t result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(3394))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 841 })
// CS Name: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::System::Nullable_1<int32_t>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState, ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>> m_task) noexcept;


                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1 const&) = default;
                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1&&) = default;
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>> __declspec(property(get=__get_s_defaultResultTask, put=__set_s_defaultResultTask))  s_defaultResultTask;

static void __set_s_defaultResultTask(::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>> value) ;

static ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>> __get_s_defaultResultTask() ;

 ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __declspec(property(get=__get_m_coreState, put=__set_m_coreState))  m_coreState;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __get_m_coreState() const;

 ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>> value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>> __get_m_task() const;


// Properties

 ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>> __declspec(property(get=get_Task))  Task;


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<int32_t>> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
 void Start(ByRef<TStateMachine> stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
 void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>> get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::System::Nullable_1<int32_t> result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>> completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetException(::System::Exception exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>> GetTaskForResult(::System::Nullable_1<int32_t> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 847 })
// CS Name: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState, ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken> m_task) noexcept;


                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1 const&) = default;
                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1&&) = default;
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken> __declspec(property(get=__get_s_defaultResultTask, put=__set_s_defaultResultTask))  s_defaultResultTask;

static void __set_s_defaultResultTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken> value) ;

static ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken> __get_s_defaultResultTask() ;

 ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __declspec(property(get=__get_m_coreState, put=__set_m_coreState))  m_coreState;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __get_m_coreState() const;

 ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken> value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken> __get_m_task() const;


// Properties

 ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken> __declspec(property(get=get_Task))  Task;


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
 void Start(ByRef<TStateMachine> stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
 void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken> get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::GlobalNamespace::AuthenticationToken result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken> completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetException(::System::Exception exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken> GetTaskForResult(::GlobalNamespace::AuthenticationToken result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 852 })
// CS Name: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState, ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult> m_task) noexcept;


                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1 const&) = default;
                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1&&) = default;
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult> __declspec(property(get=__get_s_defaultResultTask, put=__set_s_defaultResultTask))  s_defaultResultTask;

static void __set_s_defaultResultTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult> value) ;

static ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult> __get_s_defaultResultTask() ;

 ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __declspec(property(get=__get_m_coreState, put=__set_m_coreState))  m_coreState;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __get_m_coreState() const;

 ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult> value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult> __get_m_task() const;


// Properties

 ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult> __declspec(property(get=get_Task))  Task;


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
 void Start(ByRef<TStateMachine> stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
 void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult> get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::GlobalNamespace::GetAssetBundleFileResult result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult> completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetException(::System::Exception exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult> GetTaskForResult(::GlobalNamespace::GetAssetBundleFileResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(3394))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 867 })
// CS Name: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::System::Threading::Tasks::VoidTaskResult> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState, ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> m_task) noexcept;


                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1 const&) = default;
                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1&&) = default;
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> __declspec(property(get=__get_s_defaultResultTask, put=__set_s_defaultResultTask))  s_defaultResultTask;

static void __set_s_defaultResultTask(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> value) ;

static ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> __get_s_defaultResultTask() ;

 ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __declspec(property(get=__get_m_coreState, put=__set_m_coreState))  m_coreState;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __get_m_coreState() const;

 ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> __get_m_task() const;


// Properties

 ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> __declspec(property(get=get_Task))  Task;


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Threading::Tasks::VoidTaskResult> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
 void Start(ByRef<TStateMachine> stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
 void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::System::Threading::Tasks::VoidTaskResult result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetException(::System::Exception exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> GetTaskForResult(::System::Threading::Tasks::VoidTaskResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(3394))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 874 })
// CS Name: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState, ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> m_task) noexcept;


                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1 const&) = default;
                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1&&) = default;
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> __declspec(property(get=__get_s_defaultResultTask, put=__set_s_defaultResultTask))  s_defaultResultTask;

static void __set_s_defaultResultTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> value) ;

static ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> __get_s_defaultResultTask() ;

 ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __declspec(property(get=__get_m_coreState, put=__set_m_coreState))  m_coreState;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __get_m_coreState() const;

 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> __get_m_task() const;


// Properties

 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> __declspec(property(get=get_Task))  Task;


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
 void Start(ByRef<TStateMachine> stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
 void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetException(::System::Exception exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> GetTaskForResult(::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 875 })
// CS Name: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState, ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> m_task) noexcept;


                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1 const&) = default;
                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1&&) = default;
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> __declspec(property(get=__get_s_defaultResultTask, put=__set_s_defaultResultTask))  s_defaultResultTask;

static void __set_s_defaultResultTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> value) ;

static ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> __get_s_defaultResultTask() ;

 ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __declspec(property(get=__get_m_coreState, put=__set_m_coreState))  m_coreState;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __get_m_coreState() const;

 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> __get_m_task() const;


// Properties

 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> __declspec(property(get=get_Task))  Task;


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
 void Start(ByRef<TStateMachine> stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
 void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetException(::System::Exception exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> GetTaskForResult(::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(3394))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 876 })
// CS Name: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState, ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> m_task) noexcept;


                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1 const&) = default;
                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1&&) = default;
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> __declspec(property(get=__get_s_defaultResultTask, put=__set_s_defaultResultTask))  s_defaultResultTask;

static void __set_s_defaultResultTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> value) ;

static ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> __get_s_defaultResultTask() ;

 ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __declspec(property(get=__get_m_coreState, put=__set_m_coreState))  m_coreState;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __get_m_coreState() const;

 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> __get_m_task() const;


// Properties

 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> __declspec(property(get=get_Task))  Task;


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
 void Start(ByRef<TStateMachine> stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
 void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetException(::System::Exception exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> GetTaskForResult(::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 1088 })
// CS Name: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState, ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> m_task) noexcept;


                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1 const&) = default;
                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1&&) = default;
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> __declspec(property(get=__get_s_defaultResultTask, put=__set_s_defaultResultTask))  s_defaultResultTask;

static void __set_s_defaultResultTask(::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> value) ;

static ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> __get_s_defaultResultTask() ;

 ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __declspec(property(get=__get_m_coreState, put=__set_m_coreState))  m_coreState;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __get_m_coreState() const;

 ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> __get_m_task() const;


// Properties

 ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> __declspec(property(get=get_Task))  Task;


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
 void Start(ByRef<TStateMachine> stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
 void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t> result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetException(::System::Exception exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> GetTaskForResult(::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(3394))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 1089 })
// CS Name: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState, ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> m_task) noexcept;


                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1 const&) = default;
                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1&&) = default;
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_s_defaultResultTask, put=__set_s_defaultResultTask))  s_defaultResultTask;

static void __set_s_defaultResultTask(::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> value) ;

static ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __get_s_defaultResultTask() ;

 ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __declspec(property(get=__get_m_coreState, put=__set_m_coreState))  m_coreState;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __get_m_coreState() const;

 ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __get_m_task() const;


// Properties

 ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=get_Task))  Task;


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
 void Start(ByRef<TStateMachine> stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
 void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetException(::System::Exception exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> GetTaskForResult(::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 4825 })
// CS Name: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::System::Int32Enum> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::Int32Enum>", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState, ::System::Threading::Tasks::Task_1<::System::Int32Enum> m_task) noexcept;


                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1 const&) = default;
                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1&&) = default;
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::System::Threading::Tasks::Task_1<::System::Int32Enum> __declspec(property(get=__get_s_defaultResultTask, put=__set_s_defaultResultTask))  s_defaultResultTask;

static void __set_s_defaultResultTask(::System::Threading::Tasks::Task_1<::System::Int32Enum> value) ;

static ::System::Threading::Tasks::Task_1<::System::Int32Enum> __get_s_defaultResultTask() ;

 ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __declspec(property(get=__get_m_coreState, put=__set_m_coreState))  m_coreState;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __get_m_coreState() const;

 ::System::Threading::Tasks::Task_1<::System::Int32Enum> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::Int32Enum> value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::Int32Enum> __get_m_task() const;


// Properties

 ::System::Threading::Tasks::Task_1<::System::Int32Enum> __declspec(property(get=get_Task))  Task;


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Int32Enum> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
 void Start(ByRef<TStateMachine> stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
 void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<::System::Int32Enum> get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::System::Int32Enum result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::System::Threading::Tasks::Task_1<::System::Int32Enum> completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetException(::System::Exception exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::System::Int32Enum> GetTaskForResult(::System::Int32Enum result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 5957 })
// CS Name: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
struct CORDL_TYPE AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>", modifiers: "", def_value: None }]
constexpr AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState, ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> m_task) noexcept;


                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1 const&) = default;
                    constexpr AsyncTaskMethodBuilder_1(AsyncTaskMethodBuilder_1&&) = default;
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncTaskMethodBuilder_1& operator=(AsyncTaskMethodBuilder_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncTaskMethodBuilder_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> __declspec(property(get=__get_s_defaultResultTask, put=__set_s_defaultResultTask))  s_defaultResultTask;

static void __set_s_defaultResultTask(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> value) ;

static ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> __get_s_defaultResultTask() ;

 ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __declspec(property(get=__get_m_coreState, put=__set_m_coreState))  m_coreState;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore __get_m_coreState() const;

 ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> __get_m_task() const;


// Properties

 ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> __declspec(property(get=get_Task))  Task;


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
 void Start(ByRef<TStateMachine> stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
 void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> get_Task() ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t> result) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> completedTask) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetException(::System::Exception exception) ;

/// @brief Method GetTaskForResult addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> GetTaskForResult(::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1, "System.Runtime.CompilerServices", "AsyncTaskMethodBuilder`1");
