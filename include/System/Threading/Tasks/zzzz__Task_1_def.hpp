#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct ConfiguredTaskAwaitable_1;
}
namespace System::Threading::Tasks {
struct InternalTaskOptions;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
struct TaskCreationOptions;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskFactory_1;
}
namespace System {
class Delegate;
}
namespace System::Threading::Tasks {
struct TaskContinuationOptions;
}
namespace System::Threading::Tasks {
class TaskScheduler;
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
namespace GlobalNamespace {
struct ____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult;
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
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
// Forward declare root types
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
template<::cordl_internals::il2cpp_reference_type TResult>
class Task_1<TResult>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::GlobalNamespace::AuthenticationToken>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::GlobalNamespace::GetAssetBundleFileResult>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::System::Int32Enum>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::System::Nullable_1<int32_t>>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::System::Threading::Tasks::VoidTaskResult>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<bool>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<int32_t>;
}
namespace System::Threading::Tasks {
template<>
class Task_1<int64_t>;
}
// Type: System.Threading.Tasks::Task`1
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2770)), TypeDefinitionIndex(TypeDefinitionIndex(2783))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 2 })
// CS Name: System.Threading.Tasks.Task`1
class CORDL_TYPE Task_1<TResult> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~Task_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: " const&", def_value: None }]
constexpr Task_1(Task_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
constexpr Task_1(Task_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Task_1(void* ptr) noexcept : ::System::Threading::Tasks::Task(ptr) {
}


  constexpr Task_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Task_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Task_1& operator=(Task_1&& o) noexcept = default;
  constexpr Task_1& operator=(Task_1 const& o) noexcept = default;
                


// Fields

 TResult __declspec(property(get=__get_m_result, put=__set_m_result))  m_result;

constexpr void __set_m_result(TResult value) ;

constexpr TResult __get_m_result() const;

static ::System::Threading::Tasks::TaskFactory_1<TResult> __declspec(property(get=__get_s_defaultFactory, put=__set_s_defaultFactory))  s_defaultFactory;

static void __set_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<TResult> value) ;

static ::System::Threading::Tasks::TaskFactory_1<TResult> __get_s_defaultFactory() ;


// Properties

 TResult __declspec(property(get=get_Result))  Result;

 TResult __declspec(property(get=get_ResultOnSuccess))  ResultOnSuccess;

static ::System::Threading::Tasks::TaskFactory_1<TResult> __declspec(property(get=get_Factory))  Factory;


// Methods

// Ctor Parameters []
explicit Task_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

// Ctor Parameters [CppParam { name: "result", ty: "TResult", modifiers: "", def_value: None }]
explicit Task_1(TResult result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(TResult result) ;

// Ctor Parameters [CppParam { name: "canceled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "result", ty: "TResult", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "ct", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
explicit Task_1(bool canceled, TResult result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(bool canceled, TResult result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

// Ctor Parameters [CppParam { name: "function", ty: "::System::Func_2<::bs_hook::Il2CppWrapperType,TResult>", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_2<::bs_hook::Il2CppWrapperType,TResult> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_2<::bs_hook::Il2CppWrapperType,TResult> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Func_1<TResult>", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_1<TResult> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_1<TResult> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<TResult> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_1<TResult> function, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<TResult> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_2<::bs_hook::Il2CppWrapperType,TResult> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetResult(TResult result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void DangerousSetResult(TResult result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
 TResult get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
 TResult get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
 TResult GetResultCore(bool waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::TaskFactory_1<TResult> get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::TaskAwaiter_1<TResult> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult> ConfigureAwait(bool continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<TResult>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<TResult>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<TResult>,TNewResult> continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<TResult>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<TResult>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2770)), TypeDefinitionIndex(TypeDefinitionIndex(2783))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 89 })
// CS Name: System.Threading.Tasks.Task`1
class CORDL_TYPE Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~Task_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: " const&", def_value: None }]
constexpr Task_1(Task_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
constexpr Task_1(Task_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Task_1(void* ptr) noexcept : ::System::Threading::Tasks::Task(ptr) {
}


  constexpr Task_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Task_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Task_1& operator=(Task_1&& o) noexcept = default;
  constexpr Task_1& operator=(Task_1 const& o) noexcept = default;
                


// Fields

 ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse __declspec(property(get=__get_m_result, put=__set_m_result))  m_result;

constexpr void __set_m_result(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse value) ;

constexpr ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse __get_m_result() const;

static ::System::Threading::Tasks::TaskFactory_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __declspec(property(get=__get_s_defaultFactory, put=__set_s_defaultFactory))  s_defaultFactory;

static void __set_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> value) ;

static ::System::Threading::Tasks::TaskFactory_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __get_s_defaultFactory() ;


// Properties

 ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse __declspec(property(get=get_Result))  Result;

 ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse __declspec(property(get=get_ResultOnSuccess))  ResultOnSuccess;

static ::System::Threading::Tasks::TaskFactory_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __declspec(property(get=get_Factory))  Factory;


// Methods

// Ctor Parameters []
explicit Task_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

// Ctor Parameters [CppParam { name: "result", ty: "::BGNet::Core::GameLift::GetMultiplayerInstanceResponse", modifiers: "", def_value: None }]
explicit Task_1(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse result) ;

// Ctor Parameters [CppParam { name: "canceled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "result", ty: "::BGNet::Core::GameLift::GetMultiplayerInstanceResponse", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "ct", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
explicit Task_1(bool canceled, ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(bool canceled, ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

// Ctor Parameters [CppParam { name: "function", ty: "::System::Func_2<::bs_hook::Il2CppWrapperType,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_2<::bs_hook::Il2CppWrapperType,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_2<::bs_hook::Il2CppWrapperType,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Func_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> function, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_2<::bs_hook::Il2CppWrapperType,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetResult(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void DangerousSetResult(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
 ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
 ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
 ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse GetResultCore(bool waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::TaskFactory_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> ConfigureAwait(bool continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>,TNewResult> continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2783)), TypeDefinitionIndex(TypeDefinitionIndex(2770))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 92 })
// CS Name: System.Threading.Tasks.Task`1
class CORDL_TYPE Task_1<int32_t> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~Task_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: " const&", def_value: None }]
constexpr Task_1(Task_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
constexpr Task_1(Task_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Task_1(void* ptr) noexcept : ::System::Threading::Tasks::Task(ptr) {
}


  constexpr Task_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Task_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Task_1& operator=(Task_1&& o) noexcept = default;
  constexpr Task_1& operator=(Task_1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_result, put=__set_m_result))  m_result;

constexpr void __set_m_result(int32_t value) ;

constexpr int32_t __get_m_result() const;

static ::System::Threading::Tasks::TaskFactory_1<int32_t> __declspec(property(get=__get_s_defaultFactory, put=__set_s_defaultFactory))  s_defaultFactory;

static void __set_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<int32_t> value) ;

static ::System::Threading::Tasks::TaskFactory_1<int32_t> __get_s_defaultFactory() ;


// Properties

 int32_t __declspec(property(get=get_Result))  Result;

 int32_t __declspec(property(get=get_ResultOnSuccess))  ResultOnSuccess;

static ::System::Threading::Tasks::TaskFactory_1<int32_t> __declspec(property(get=get_Factory))  Factory;


// Methods

// Ctor Parameters []
explicit Task_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

// Ctor Parameters [CppParam { name: "result", ty: "int32_t", modifiers: "", def_value: None }]
explicit Task_1(int32_t result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t result) ;

// Ctor Parameters [CppParam { name: "canceled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "result", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "ct", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
explicit Task_1(bool canceled, int32_t result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(bool canceled, int32_t result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

// Ctor Parameters [CppParam { name: "function", ty: "::System::Func_2<::bs_hook::Il2CppWrapperType,int32_t>", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_2<::bs_hook::Il2CppWrapperType,int32_t> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_2<::bs_hook::Il2CppWrapperType,int32_t> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Func_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_1<int32_t> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_1<int32_t> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<int32_t> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_1<int32_t> function, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<int32_t> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_2<::bs_hook::Il2CppWrapperType,int32_t> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetResult(int32_t result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void DangerousSetResult(int32_t result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t GetResultCore(bool waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::TaskFactory_1<int32_t> get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<int32_t> ConfigureAwait(bool continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<int32_t>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<int32_t>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<int32_t>,TNewResult> continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<int32_t>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<int32_t>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2770)), TypeDefinitionIndex(TypeDefinitionIndex(2783))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 96 })
// CS Name: System.Threading.Tasks.Task`1
class CORDL_TYPE Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~Task_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: " const&", def_value: None }]
constexpr Task_1(Task_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
constexpr Task_1(Task_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Task_1(void* ptr) noexcept : ::System::Threading::Tasks::Task(ptr) {
}


  constexpr Task_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Task_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Task_1& operator=(Task_1&& o) noexcept = default;
  constexpr Task_1& operator=(Task_1 const& o) noexcept = default;
                


// Fields

 ::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_m_result, put=__set_m_result))  m_result;

constexpr void __set_m_result(::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> value) ;

constexpr ::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> __get_m_result() const;

static ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_s_defaultFactory, put=__set_s_defaultFactory))  s_defaultFactory;

static void __set_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> value) ;

static ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> __get_s_defaultFactory() ;


// Properties

 ::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> __declspec(property(get=get_Result))  Result;

 ::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> __declspec(property(get=get_ResultOnSuccess))  ResultOnSuccess;

static ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> __declspec(property(get=get_Factory))  Factory;


// Methods

// Ctor Parameters []
explicit Task_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

// Ctor Parameters [CppParam { name: "result", ty: "::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
explicit Task_1(::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> result) ;

// Ctor Parameters [CppParam { name: "canceled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "result", ty: "::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "ct", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
explicit Task_1(bool canceled, ::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(bool canceled, ::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

// Ctor Parameters [CppParam { name: "function", ty: "::System::Func_2<::bs_hook::Il2CppWrapperType,::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_2<::bs_hook::Il2CppWrapperType,::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_2<::bs_hook::Il2CppWrapperType,::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Func_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> function, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_2<::bs_hook::Il2CppWrapperType,::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetResult(::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void DangerousSetResult(::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> GetResultCore(bool waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> ConfigureAwait(bool continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>,TNewResult> continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2770)), TypeDefinitionIndex(TypeDefinitionIndex(2783))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 99 })
// CS Name: System.Threading.Tasks.Task`1
class CORDL_TYPE Task_1<bool> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~Task_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: " const&", def_value: None }]
constexpr Task_1(Task_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
constexpr Task_1(Task_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Task_1(void* ptr) noexcept : ::System::Threading::Tasks::Task(ptr) {
}


  constexpr Task_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Task_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Task_1& operator=(Task_1&& o) noexcept = default;
  constexpr Task_1& operator=(Task_1 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_result, put=__set_m_result))  m_result;

constexpr void __set_m_result(bool value) ;

constexpr bool __get_m_result() const;

static ::System::Threading::Tasks::TaskFactory_1<bool> __declspec(property(get=__get_s_defaultFactory, put=__set_s_defaultFactory))  s_defaultFactory;

static void __set_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<bool> value) ;

static ::System::Threading::Tasks::TaskFactory_1<bool> __get_s_defaultFactory() ;


// Properties

 bool __declspec(property(get=get_Result))  Result;

 bool __declspec(property(get=get_ResultOnSuccess))  ResultOnSuccess;

static ::System::Threading::Tasks::TaskFactory_1<bool> __declspec(property(get=get_Factory))  Factory;


// Methods

// Ctor Parameters []
explicit Task_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

// Ctor Parameters [CppParam { name: "result", ty: "bool", modifiers: "", def_value: None }]
explicit Task_1(bool result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(bool result) ;

// Ctor Parameters [CppParam { name: "canceled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "result", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "ct", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
explicit Task_1(bool canceled, bool result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(bool canceled, bool result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

// Ctor Parameters [CppParam { name: "function", ty: "::System::Func_2<::bs_hook::Il2CppWrapperType,bool>", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_2<::bs_hook::Il2CppWrapperType,bool> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_2<::bs_hook::Il2CppWrapperType,bool> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Func_1<bool>", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_1<bool> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_1<bool> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<bool> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_1<bool> function, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<bool> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_2<::bs_hook::Il2CppWrapperType,bool> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetResult(bool result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void DangerousSetResult(bool result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
 bool GetResultCore(bool waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::TaskFactory_1<bool> get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<bool> ConfigureAwait(bool continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<bool>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<bool>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<bool>,TNewResult> continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<bool>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<bool>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2783)), TypeDefinitionIndex(TypeDefinitionIndex(2770))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 772 })
// CS Name: System.Threading.Tasks.Task`1
class CORDL_TYPE Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~Task_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: " const&", def_value: None }]
constexpr Task_1(Task_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
constexpr Task_1(Task_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Task_1(void* ptr) noexcept : ::System::Threading::Tasks::Task(ptr) {
}


  constexpr Task_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Task_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Task_1& operator=(Task_1&& o) noexcept = default;
  constexpr Task_1& operator=(Task_1 const& o) noexcept = default;
                


// Fields

 ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance __declspec(property(get=__get_m_result, put=__set_m_result))  m_result;

constexpr void __set_m_result(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance __get_m_result() const;

static ::System::Threading::Tasks::TaskFactory_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> __declspec(property(get=__get_s_defaultFactory, put=__set_s_defaultFactory))  s_defaultFactory;

static void __set_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> value) ;

static ::System::Threading::Tasks::TaskFactory_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> __get_s_defaultFactory() ;


// Properties

 ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance __declspec(property(get=get_Result))  Result;

 ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance __declspec(property(get=get_ResultOnSuccess))  ResultOnSuccess;

static ::System::Threading::Tasks::TaskFactory_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> __declspec(property(get=get_Factory))  Factory;


// Methods

// Ctor Parameters []
explicit Task_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

// Ctor Parameters [CppParam { name: "result", ty: "::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance", modifiers: "", def_value: None }]
explicit Task_1(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance result) ;

// Ctor Parameters [CppParam { name: "canceled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "result", ty: "::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "ct", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
explicit Task_1(bool canceled, ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(bool canceled, ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

// Ctor Parameters [CppParam { name: "function", ty: "::System::Func_2<::bs_hook::Il2CppWrapperType,::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_2<::bs_hook::Il2CppWrapperType,::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_2<::bs_hook::Il2CppWrapperType,::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Func_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> function, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_2<::bs_hook::Il2CppWrapperType,::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetResult(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void DangerousSetResult(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance GetResultCore(bool waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::TaskFactory_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> ConfigureAwait(bool continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>,TNewResult> continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2770)), TypeDefinitionIndex(TypeDefinitionIndex(2783))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 830 })
// CS Name: System.Threading.Tasks.Task`1
class CORDL_TYPE Task_1<int64_t> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~Task_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: " const&", def_value: None }]
constexpr Task_1(Task_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
constexpr Task_1(Task_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Task_1(void* ptr) noexcept : ::System::Threading::Tasks::Task(ptr) {
}


  constexpr Task_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Task_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Task_1& operator=(Task_1&& o) noexcept = default;
  constexpr Task_1& operator=(Task_1 const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_m_result, put=__set_m_result))  m_result;

constexpr void __set_m_result(int64_t value) ;

constexpr int64_t __get_m_result() const;

static ::System::Threading::Tasks::TaskFactory_1<int64_t> __declspec(property(get=__get_s_defaultFactory, put=__set_s_defaultFactory))  s_defaultFactory;

static void __set_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<int64_t> value) ;

static ::System::Threading::Tasks::TaskFactory_1<int64_t> __get_s_defaultFactory() ;


// Properties

 int64_t __declspec(property(get=get_Result))  Result;

 int64_t __declspec(property(get=get_ResultOnSuccess))  ResultOnSuccess;

static ::System::Threading::Tasks::TaskFactory_1<int64_t> __declspec(property(get=get_Factory))  Factory;


// Methods

// Ctor Parameters []
explicit Task_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

// Ctor Parameters [CppParam { name: "result", ty: "int64_t", modifiers: "", def_value: None }]
explicit Task_1(int64_t result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int64_t result) ;

// Ctor Parameters [CppParam { name: "canceled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "result", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "ct", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
explicit Task_1(bool canceled, int64_t result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(bool canceled, int64_t result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

// Ctor Parameters [CppParam { name: "function", ty: "::System::Func_2<::bs_hook::Il2CppWrapperType,int64_t>", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_2<::bs_hook::Il2CppWrapperType,int64_t> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_2<::bs_hook::Il2CppWrapperType,int64_t> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Func_1<int64_t>", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_1<int64_t> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_1<int64_t> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<int64_t> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_1<int64_t> function, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<int64_t> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_2<::bs_hook::Il2CppWrapperType,int64_t> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetResult(int64_t result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void DangerousSetResult(int64_t result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
 int64_t get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
 int64_t get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
 int64_t GetResultCore(bool waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::TaskFactory_1<int64_t> get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<int64_t> ConfigureAwait(bool continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<int64_t>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<int64_t>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<int64_t>,TNewResult> continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<int64_t>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<int64_t>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2770)), TypeDefinitionIndex(TypeDefinitionIndex(2783))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 841 })
// CS Name: System.Threading.Tasks.Task`1
class CORDL_TYPE Task_1<::System::Nullable_1<int32_t>> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~Task_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: " const&", def_value: None }]
constexpr Task_1(Task_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
constexpr Task_1(Task_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Task_1(void* ptr) noexcept : ::System::Threading::Tasks::Task(ptr) {
}


  constexpr Task_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Task_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Task_1& operator=(Task_1&& o) noexcept = default;
  constexpr Task_1& operator=(Task_1 const& o) noexcept = default;
                


// Fields

 ::System::Nullable_1<int32_t> __declspec(property(get=__get_m_result, put=__set_m_result))  m_result;

constexpr void __set_m_result(::System::Nullable_1<int32_t> value) ;

constexpr ::System::Nullable_1<int32_t> __get_m_result() const;

static ::System::Threading::Tasks::TaskFactory_1<::System::Nullable_1<int32_t>> __declspec(property(get=__get_s_defaultFactory, put=__set_s_defaultFactory))  s_defaultFactory;

static void __set_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::System::Nullable_1<int32_t>> value) ;

static ::System::Threading::Tasks::TaskFactory_1<::System::Nullable_1<int32_t>> __get_s_defaultFactory() ;


// Properties

 ::System::Nullable_1<int32_t> __declspec(property(get=get_Result))  Result;

 ::System::Nullable_1<int32_t> __declspec(property(get=get_ResultOnSuccess))  ResultOnSuccess;

static ::System::Threading::Tasks::TaskFactory_1<::System::Nullable_1<int32_t>> __declspec(property(get=get_Factory))  Factory;


// Methods

// Ctor Parameters []
explicit Task_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

// Ctor Parameters [CppParam { name: "result", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }]
explicit Task_1(::System::Nullable_1<int32_t> result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Nullable_1<int32_t> result) ;

// Ctor Parameters [CppParam { name: "canceled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "result", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "ct", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
explicit Task_1(bool canceled, ::System::Nullable_1<int32_t> result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(bool canceled, ::System::Nullable_1<int32_t> result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

// Ctor Parameters [CppParam { name: "function", ty: "::System::Func_2<::bs_hook::Il2CppWrapperType,::System::Nullable_1<int32_t>>", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_2<::bs_hook::Il2CppWrapperType,::System::Nullable_1<int32_t>> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_2<::bs_hook::Il2CppWrapperType,::System::Nullable_1<int32_t>> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Func_1<::System::Nullable_1<int32_t>>", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_1<::System::Nullable_1<int32_t>> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_1<::System::Nullable_1<int32_t>> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_1<::System::Nullable_1<int32_t>> function, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_2<::bs_hook::Il2CppWrapperType,::System::Nullable_1<int32_t>> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetResult(::System::Nullable_1<int32_t> result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void DangerousSetResult(::System::Nullable_1<int32_t> result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Nullable_1<int32_t> get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Nullable_1<int32_t> get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Nullable_1<int32_t> GetResultCore(bool waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::TaskFactory_1<::System::Nullable_1<int32_t>> get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Nullable_1<int32_t>> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::Nullable_1<int32_t>> ConfigureAwait(bool continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>,TNewResult> continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2783)), TypeDefinitionIndex(TypeDefinitionIndex(2770))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 847 })
// CS Name: System.Threading.Tasks.Task`1
class CORDL_TYPE Task_1<::GlobalNamespace::AuthenticationToken> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~Task_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: " const&", def_value: None }]
constexpr Task_1(Task_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
constexpr Task_1(Task_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Task_1(void* ptr) noexcept : ::System::Threading::Tasks::Task(ptr) {
}


  constexpr Task_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Task_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Task_1& operator=(Task_1&& o) noexcept = default;
  constexpr Task_1& operator=(Task_1 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::AuthenticationToken __declspec(property(get=__get_m_result, put=__set_m_result))  m_result;

constexpr void __set_m_result(::GlobalNamespace::AuthenticationToken value) ;

constexpr ::GlobalNamespace::AuthenticationToken __get_m_result() const;

static ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::AuthenticationToken> __declspec(property(get=__get_s_defaultFactory, put=__set_s_defaultFactory))  s_defaultFactory;

static void __set_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::AuthenticationToken> value) ;

static ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::AuthenticationToken> __get_s_defaultFactory() ;


// Properties

 ::GlobalNamespace::AuthenticationToken __declspec(property(get=get_Result))  Result;

 ::GlobalNamespace::AuthenticationToken __declspec(property(get=get_ResultOnSuccess))  ResultOnSuccess;

static ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::AuthenticationToken> __declspec(property(get=get_Factory))  Factory;


// Methods

// Ctor Parameters []
explicit Task_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

// Ctor Parameters [CppParam { name: "result", ty: "::GlobalNamespace::AuthenticationToken", modifiers: "", def_value: None }]
explicit Task_1(::GlobalNamespace::AuthenticationToken result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::GlobalNamespace::AuthenticationToken result) ;

// Ctor Parameters [CppParam { name: "canceled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "result", ty: "::GlobalNamespace::AuthenticationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "ct", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
explicit Task_1(bool canceled, ::GlobalNamespace::AuthenticationToken result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(bool canceled, ::GlobalNamespace::AuthenticationToken result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

// Ctor Parameters [CppParam { name: "function", ty: "::System::Func_2<::bs_hook::Il2CppWrapperType,::GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_2<::bs_hook::Il2CppWrapperType,::GlobalNamespace::AuthenticationToken> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_2<::bs_hook::Il2CppWrapperType,::GlobalNamespace::AuthenticationToken> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Func_1<::GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_1<::GlobalNamespace::AuthenticationToken> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_1<::GlobalNamespace::AuthenticationToken> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_1<::GlobalNamespace::AuthenticationToken> function, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_2<::bs_hook::Il2CppWrapperType,::GlobalNamespace::AuthenticationToken> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetResult(::GlobalNamespace::AuthenticationToken result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void DangerousSetResult(::GlobalNamespace::AuthenticationToken result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::AuthenticationToken get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::AuthenticationToken get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::AuthenticationToken GetResultCore(bool waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::AuthenticationToken> get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::GlobalNamespace::AuthenticationToken> ConfigureAwait(bool continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>,TNewResult> continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2783)), TypeDefinitionIndex(TypeDefinitionIndex(2770))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 852 })
// CS Name: System.Threading.Tasks.Task`1
class CORDL_TYPE Task_1<::GlobalNamespace::GetAssetBundleFileResult> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~Task_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: " const&", def_value: None }]
constexpr Task_1(Task_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
constexpr Task_1(Task_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Task_1(void* ptr) noexcept : ::System::Threading::Tasks::Task(ptr) {
}


  constexpr Task_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Task_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Task_1& operator=(Task_1&& o) noexcept = default;
  constexpr Task_1& operator=(Task_1 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::GetAssetBundleFileResult __declspec(property(get=__get_m_result, put=__set_m_result))  m_result;

constexpr void __set_m_result(::GlobalNamespace::GetAssetBundleFileResult value) ;

constexpr ::GlobalNamespace::GetAssetBundleFileResult __get_m_result() const;

static ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::GetAssetBundleFileResult> __declspec(property(get=__get_s_defaultFactory, put=__set_s_defaultFactory))  s_defaultFactory;

static void __set_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::GetAssetBundleFileResult> value) ;

static ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::GetAssetBundleFileResult> __get_s_defaultFactory() ;


// Properties

 ::GlobalNamespace::GetAssetBundleFileResult __declspec(property(get=get_Result))  Result;

 ::GlobalNamespace::GetAssetBundleFileResult __declspec(property(get=get_ResultOnSuccess))  ResultOnSuccess;

static ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::GetAssetBundleFileResult> __declspec(property(get=get_Factory))  Factory;


// Methods

// Ctor Parameters []
explicit Task_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

// Ctor Parameters [CppParam { name: "result", ty: "::GlobalNamespace::GetAssetBundleFileResult", modifiers: "", def_value: None }]
explicit Task_1(::GlobalNamespace::GetAssetBundleFileResult result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::GlobalNamespace::GetAssetBundleFileResult result) ;

// Ctor Parameters [CppParam { name: "canceled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "result", ty: "::GlobalNamespace::GetAssetBundleFileResult", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "ct", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
explicit Task_1(bool canceled, ::GlobalNamespace::GetAssetBundleFileResult result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(bool canceled, ::GlobalNamespace::GetAssetBundleFileResult result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

// Ctor Parameters [CppParam { name: "function", ty: "::System::Func_2<::bs_hook::Il2CppWrapperType,::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_2<::bs_hook::Il2CppWrapperType,::GlobalNamespace::GetAssetBundleFileResult> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_2<::bs_hook::Il2CppWrapperType,::GlobalNamespace::GetAssetBundleFileResult> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Func_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_1<::GlobalNamespace::GetAssetBundleFileResult> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_1<::GlobalNamespace::GetAssetBundleFileResult> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_1<::GlobalNamespace::GetAssetBundleFileResult> function, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_2<::bs_hook::Il2CppWrapperType,::GlobalNamespace::GetAssetBundleFileResult> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetResult(::GlobalNamespace::GetAssetBundleFileResult result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void DangerousSetResult(::GlobalNamespace::GetAssetBundleFileResult result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::GetAssetBundleFileResult get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::GetAssetBundleFileResult get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::GetAssetBundleFileResult GetResultCore(bool waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::GetAssetBundleFileResult> get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::GlobalNamespace::GetAssetBundleFileResult> ConfigureAwait(bool continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>,TNewResult> continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2783)), TypeDefinitionIndex(TypeDefinitionIndex(2770))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 867 })
// CS Name: System.Threading.Tasks.Task`1
class CORDL_TYPE Task_1<::System::Threading::Tasks::VoidTaskResult> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~Task_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: " const&", def_value: None }]
constexpr Task_1(Task_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
constexpr Task_1(Task_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Task_1(void* ptr) noexcept : ::System::Threading::Tasks::Task(ptr) {
}


  constexpr Task_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Task_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Task_1& operator=(Task_1&& o) noexcept = default;
  constexpr Task_1& operator=(Task_1 const& o) noexcept = default;
                


// Fields

 ::System::Threading::Tasks::VoidTaskResult __declspec(property(get=__get_m_result, put=__set_m_result))  m_result;

constexpr void __set_m_result(::System::Threading::Tasks::VoidTaskResult value) ;

constexpr ::System::Threading::Tasks::VoidTaskResult __get_m_result() const;

static ::System::Threading::Tasks::TaskFactory_1<::System::Threading::Tasks::VoidTaskResult> __declspec(property(get=__get_s_defaultFactory, put=__set_s_defaultFactory))  s_defaultFactory;

static void __set_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::System::Threading::Tasks::VoidTaskResult> value) ;

static ::System::Threading::Tasks::TaskFactory_1<::System::Threading::Tasks::VoidTaskResult> __get_s_defaultFactory() ;


// Properties

 ::System::Threading::Tasks::VoidTaskResult __declspec(property(get=get_Result))  Result;

 ::System::Threading::Tasks::VoidTaskResult __declspec(property(get=get_ResultOnSuccess))  ResultOnSuccess;

static ::System::Threading::Tasks::TaskFactory_1<::System::Threading::Tasks::VoidTaskResult> __declspec(property(get=get_Factory))  Factory;


// Methods

// Ctor Parameters []
explicit Task_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

// Ctor Parameters [CppParam { name: "result", ty: "::System::Threading::Tasks::VoidTaskResult", modifiers: "", def_value: None }]
explicit Task_1(::System::Threading::Tasks::VoidTaskResult result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::VoidTaskResult result) ;

// Ctor Parameters [CppParam { name: "canceled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "result", ty: "::System::Threading::Tasks::VoidTaskResult", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "ct", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
explicit Task_1(bool canceled, ::System::Threading::Tasks::VoidTaskResult result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(bool canceled, ::System::Threading::Tasks::VoidTaskResult result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

// Ctor Parameters [CppParam { name: "function", ty: "::System::Func_2<::bs_hook::Il2CppWrapperType,::System::Threading::Tasks::VoidTaskResult>", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_2<::bs_hook::Il2CppWrapperType,::System::Threading::Tasks::VoidTaskResult> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_2<::bs_hook::Il2CppWrapperType,::System::Threading::Tasks::VoidTaskResult> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Func_1<::System::Threading::Tasks::VoidTaskResult>", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_1<::System::Threading::Tasks::VoidTaskResult> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_1<::System::Threading::Tasks::VoidTaskResult> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_1<::System::Threading::Tasks::VoidTaskResult> function, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_2<::bs_hook::Il2CppWrapperType,::System::Threading::Tasks::VoidTaskResult> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetResult(::System::Threading::Tasks::VoidTaskResult result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void DangerousSetResult(::System::Threading::Tasks::VoidTaskResult result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::VoidTaskResult get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::VoidTaskResult get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::VoidTaskResult GetResultCore(bool waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::TaskFactory_1<::System::Threading::Tasks::VoidTaskResult> get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::VoidTaskResult> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::Threading::Tasks::VoidTaskResult> ConfigureAwait(bool continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>,TNewResult> continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2770)), TypeDefinitionIndex(TypeDefinitionIndex(2783))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 874 })
// CS Name: System.Threading.Tasks.Task`1
class CORDL_TYPE Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~Task_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: " const&", def_value: None }]
constexpr Task_1(Task_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
constexpr Task_1(Task_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Task_1(void* ptr) noexcept : ::System::Threading::Tasks::Task(ptr) {
}


  constexpr Task_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Task_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Task_1& operator=(Task_1&& o) noexcept = default;
  constexpr Task_1& operator=(Task_1 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult __declspec(property(get=__get_m_result, put=__set_m_result))  m_result;

constexpr void __set_m_result(::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult __get_m_result() const;

static ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> __declspec(property(get=__get_s_defaultFactory, put=__set_s_defaultFactory))  s_defaultFactory;

static void __set_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> value) ;

static ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> __get_s_defaultFactory() ;


// Properties

 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult __declspec(property(get=get_Result))  Result;

 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult __declspec(property(get=get_ResultOnSuccess))  ResultOnSuccess;

static ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> __declspec(property(get=get_Factory))  Factory;


// Methods

// Ctor Parameters []
explicit Task_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

// Ctor Parameters [CppParam { name: "result", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult", modifiers: "", def_value: None }]
explicit Task_1(::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult result) ;

// Ctor Parameters [CppParam { name: "canceled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "result", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "ct", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
explicit Task_1(bool canceled, ::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(bool canceled, ::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

// Ctor Parameters [CppParam { name: "function", ty: "::System::Func_2<::bs_hook::Il2CppWrapperType,::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_2<::bs_hook::Il2CppWrapperType,::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_2<::bs_hook::Il2CppWrapperType,::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Func_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> function, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_2<::bs_hook::Il2CppWrapperType,::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetResult(::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void DangerousSetResult(::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult GetResultCore(bool waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> ConfigureAwait(bool continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>,TNewResult> continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2770)), TypeDefinitionIndex(TypeDefinitionIndex(2783))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 875 })
// CS Name: System.Threading.Tasks.Task`1
class CORDL_TYPE Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~Task_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: " const&", def_value: None }]
constexpr Task_1(Task_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
constexpr Task_1(Task_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Task_1(void* ptr) noexcept : ::System::Threading::Tasks::Task(ptr) {
}


  constexpr Task_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Task_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Task_1& operator=(Task_1&& o) noexcept = default;
  constexpr Task_1& operator=(Task_1 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult __declspec(property(get=__get_m_result, put=__set_m_result))  m_result;

constexpr void __set_m_result(::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult __get_m_result() const;

static ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> __declspec(property(get=__get_s_defaultFactory, put=__set_s_defaultFactory))  s_defaultFactory;

static void __set_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> value) ;

static ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> __get_s_defaultFactory() ;


// Properties

 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult __declspec(property(get=get_Result))  Result;

 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult __declspec(property(get=get_ResultOnSuccess))  ResultOnSuccess;

static ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> __declspec(property(get=get_Factory))  Factory;


// Methods

// Ctor Parameters []
explicit Task_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

// Ctor Parameters [CppParam { name: "result", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult", modifiers: "", def_value: None }]
explicit Task_1(::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult result) ;

// Ctor Parameters [CppParam { name: "canceled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "result", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "ct", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
explicit Task_1(bool canceled, ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(bool canceled, ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

// Ctor Parameters [CppParam { name: "function", ty: "::System::Func_2<::bs_hook::Il2CppWrapperType,::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_2<::bs_hook::Il2CppWrapperType,::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_2<::bs_hook::Il2CppWrapperType,::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Func_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> function, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_2<::bs_hook::Il2CppWrapperType,::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetResult(::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void DangerousSetResult(::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult GetResultCore(bool waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> ConfigureAwait(bool continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>,TNewResult> continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2770)), TypeDefinitionIndex(TypeDefinitionIndex(2783))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 876 })
// CS Name: System.Threading.Tasks.Task`1
class CORDL_TYPE Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~Task_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: " const&", def_value: None }]
constexpr Task_1(Task_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
constexpr Task_1(Task_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Task_1(void* ptr) noexcept : ::System::Threading::Tasks::Task(ptr) {
}


  constexpr Task_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Task_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Task_1& operator=(Task_1&& o) noexcept = default;
  constexpr Task_1& operator=(Task_1 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult __declspec(property(get=__get_m_result, put=__set_m_result))  m_result;

constexpr void __set_m_result(::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult __get_m_result() const;

static ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> __declspec(property(get=__get_s_defaultFactory, put=__set_s_defaultFactory))  s_defaultFactory;

static void __set_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> value) ;

static ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> __get_s_defaultFactory() ;


// Properties

 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult __declspec(property(get=get_Result))  Result;

 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult __declspec(property(get=get_ResultOnSuccess))  ResultOnSuccess;

static ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> __declspec(property(get=get_Factory))  Factory;


// Methods

// Ctor Parameters []
explicit Task_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

// Ctor Parameters [CppParam { name: "result", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult", modifiers: "", def_value: None }]
explicit Task_1(::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult result) ;

// Ctor Parameters [CppParam { name: "canceled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "result", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "ct", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
explicit Task_1(bool canceled, ::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(bool canceled, ::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

// Ctor Parameters [CppParam { name: "function", ty: "::System::Func_2<::bs_hook::Il2CppWrapperType,::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_2<::bs_hook::Il2CppWrapperType,::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_2<::bs_hook::Il2CppWrapperType,::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Func_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> function, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_2<::bs_hook::Il2CppWrapperType,::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetResult(::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void DangerousSetResult(::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult GetResultCore(bool waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> ConfigureAwait(bool continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>,TNewResult> continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2770)), TypeDefinitionIndex(TypeDefinitionIndex(2783))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 1088 })
// CS Name: System.Threading.Tasks.Task`1
class CORDL_TYPE Task_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~Task_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: " const&", def_value: None }]
constexpr Task_1(Task_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
constexpr Task_1(Task_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Task_1(void* ptr) noexcept : ::System::Threading::Tasks::Task(ptr) {
}


  constexpr Task_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Task_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Task_1& operator=(Task_1&& o) noexcept = default;
  constexpr Task_1& operator=(Task_1 const& o) noexcept = default;
                


// Fields

 ::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t> __declspec(property(get=__get_m_result, put=__set_m_result))  m_result;

constexpr void __set_m_result(::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t> value) ;

constexpr ::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t> __get_m_result() const;

static ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> __declspec(property(get=__get_s_defaultFactory, put=__set_s_defaultFactory))  s_defaultFactory;

static void __set_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> value) ;

static ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> __get_s_defaultFactory() ;


// Properties

 ::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t> __declspec(property(get=get_Result))  Result;

 ::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t> __declspec(property(get=get_ResultOnSuccess))  ResultOnSuccess;

static ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> __declspec(property(get=get_Factory))  Factory;


// Methods

// Ctor Parameters []
explicit Task_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

// Ctor Parameters [CppParam { name: "result", ty: "::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>", modifiers: "", def_value: None }]
explicit Task_1(::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t> result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t> result) ;

// Ctor Parameters [CppParam { name: "canceled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "result", ty: "::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "ct", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
explicit Task_1(bool canceled, ::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t> result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(bool canceled, ::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t> result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

// Ctor Parameters [CppParam { name: "function", ty: "::System::Func_2<::bs_hook::Il2CppWrapperType,::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_2<::bs_hook::Il2CppWrapperType,::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_2<::bs_hook::Il2CppWrapperType,::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Func_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> function, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_2<::bs_hook::Il2CppWrapperType,::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetResult(::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t> result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void DangerousSetResult(::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t> result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t> get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t> get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t> GetResultCore(bool waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> ConfigureAwait(bool continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>,TNewResult> continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2770)), TypeDefinitionIndex(TypeDefinitionIndex(2783))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 1089 })
// CS Name: System.Threading.Tasks.Task`1
class CORDL_TYPE Task_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~Task_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: " const&", def_value: None }]
constexpr Task_1(Task_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
constexpr Task_1(Task_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Task_1(void* ptr) noexcept : ::System::Threading::Tasks::Task(ptr) {
}


  constexpr Task_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Task_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Task_1& operator=(Task_1&& o) noexcept = default;
  constexpr Task_1& operator=(Task_1 const& o) noexcept = default;
                


// Fields

 ::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_m_result, put=__set_m_result))  m_result;

constexpr void __set_m_result(::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

constexpr ::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __get_m_result() const;

static ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_s_defaultFactory, put=__set_s_defaultFactory))  s_defaultFactory;

static void __set_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> value) ;

static ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __get_s_defaultFactory() ;


// Properties

 ::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __declspec(property(get=get_Result))  Result;

 ::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __declspec(property(get=get_ResultOnSuccess))  ResultOnSuccess;

static ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=get_Factory))  Factory;


// Methods

// Ctor Parameters []
explicit Task_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

// Ctor Parameters [CppParam { name: "result", ty: "::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
explicit Task_1(::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> result) ;

// Ctor Parameters [CppParam { name: "canceled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "result", ty: "::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "ct", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
explicit Task_1(bool canceled, ::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(bool canceled, ::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

// Ctor Parameters [CppParam { name: "function", ty: "::System::Func_2<::bs_hook::Il2CppWrapperType,::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_2<::bs_hook::Il2CppWrapperType,::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_2<::bs_hook::Il2CppWrapperType,::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Func_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> function, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_2<::bs_hook::Il2CppWrapperType,::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetResult(::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void DangerousSetResult(::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> GetResultCore(bool waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> ConfigureAwait(bool continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>,TNewResult> continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2770)), TypeDefinitionIndex(TypeDefinitionIndex(2783))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 4825 })
// CS Name: System.Threading.Tasks.Task`1
class CORDL_TYPE Task_1<::System::Int32Enum> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~Task_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: " const&", def_value: None }]
constexpr Task_1(Task_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
constexpr Task_1(Task_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Task_1(void* ptr) noexcept : ::System::Threading::Tasks::Task(ptr) {
}


  constexpr Task_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Task_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Task_1& operator=(Task_1&& o) noexcept = default;
  constexpr Task_1& operator=(Task_1 const& o) noexcept = default;
                


// Fields

 ::System::Int32Enum __declspec(property(get=__get_m_result, put=__set_m_result))  m_result;

constexpr void __set_m_result(::System::Int32Enum value) ;

constexpr ::System::Int32Enum __get_m_result() const;

static ::System::Threading::Tasks::TaskFactory_1<::System::Int32Enum> __declspec(property(get=__get_s_defaultFactory, put=__set_s_defaultFactory))  s_defaultFactory;

static void __set_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::System::Int32Enum> value) ;

static ::System::Threading::Tasks::TaskFactory_1<::System::Int32Enum> __get_s_defaultFactory() ;


// Properties

 ::System::Int32Enum __declspec(property(get=get_Result))  Result;

 ::System::Int32Enum __declspec(property(get=get_ResultOnSuccess))  ResultOnSuccess;

static ::System::Threading::Tasks::TaskFactory_1<::System::Int32Enum> __declspec(property(get=get_Factory))  Factory;


// Methods

// Ctor Parameters []
explicit Task_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

// Ctor Parameters [CppParam { name: "result", ty: "::System::Int32Enum", modifiers: "", def_value: None }]
explicit Task_1(::System::Int32Enum result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Int32Enum result) ;

// Ctor Parameters [CppParam { name: "canceled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "result", ty: "::System::Int32Enum", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "ct", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
explicit Task_1(bool canceled, ::System::Int32Enum result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(bool canceled, ::System::Int32Enum result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

// Ctor Parameters [CppParam { name: "function", ty: "::System::Func_2<::bs_hook::Il2CppWrapperType,::System::Int32Enum>", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_2<::bs_hook::Il2CppWrapperType,::System::Int32Enum> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_2<::bs_hook::Il2CppWrapperType,::System::Int32Enum> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Func_1<::System::Int32Enum>", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_1<::System::Int32Enum> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_1<::System::Int32Enum> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::System::Int32Enum> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_1<::System::Int32Enum> function, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::System::Int32Enum> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_2<::bs_hook::Il2CppWrapperType,::System::Int32Enum> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetResult(::System::Int32Enum result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void DangerousSetResult(::System::Int32Enum result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Int32Enum get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Int32Enum get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Int32Enum GetResultCore(bool waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::TaskFactory_1<::System::Int32Enum> get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Int32Enum> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::Int32Enum> ConfigureAwait(bool continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::Int32Enum>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::Int32Enum>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::Int32Enum>,TNewResult> continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::Int32Enum>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::Int32Enum>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2783)), TypeDefinitionIndex(TypeDefinitionIndex(2770))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 4905 })
// CS Name: System.Threading.Tasks.Task`1
class CORDL_TYPE Task_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~Task_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: " const&", def_value: None }]
constexpr Task_1(Task_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
constexpr Task_1(Task_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Task_1(void* ptr) noexcept : ::System::Threading::Tasks::Task(ptr) {
}


  constexpr Task_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Task_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Task_1& operator=(Task_1&& o) noexcept = default;
  constexpr Task_1& operator=(Task_1 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult __declspec(property(get=__get_m_result, put=__set_m_result))  m_result;

constexpr void __set_m_result(::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult __get_m_result() const;

static ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> __declspec(property(get=__get_s_defaultFactory, put=__set_s_defaultFactory))  s_defaultFactory;

static void __set_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> value) ;

static ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> __get_s_defaultFactory() ;


// Properties

 ::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult __declspec(property(get=get_Result))  Result;

 ::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult __declspec(property(get=get_ResultOnSuccess))  ResultOnSuccess;

static ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> __declspec(property(get=get_Factory))  Factory;


// Methods

// Ctor Parameters []
explicit Task_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

// Ctor Parameters [CppParam { name: "result", ty: "::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult", modifiers: "", def_value: None }]
explicit Task_1(::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult result) ;

// Ctor Parameters [CppParam { name: "canceled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "result", ty: "::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "ct", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
explicit Task_1(bool canceled, ::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(bool canceled, ::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

// Ctor Parameters [CppParam { name: "function", ty: "::System::Func_2<::bs_hook::Il2CppWrapperType,::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_2<::bs_hook::Il2CppWrapperType,::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_2<::bs_hook::Il2CppWrapperType,::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Func_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> function, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_2<::bs_hook::Il2CppWrapperType,::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetResult(::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void DangerousSetResult(::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult GetResultCore(bool waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::TaskFactory_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> ConfigureAwait(bool continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>,TNewResult> continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2770)), TypeDefinitionIndex(TypeDefinitionIndex(2783))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 5957 })
// CS Name: System.Threading.Tasks.Task`1
class CORDL_TYPE Task_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~Task_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: " const&", def_value: None }]
constexpr Task_1(Task_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Task_1", modifiers: "&&", def_value: None }]
constexpr Task_1(Task_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Task_1(void* ptr) noexcept : ::System::Threading::Tasks::Task(ptr) {
}


  constexpr Task_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Task_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Task_1& operator=(Task_1&& o) noexcept = default;
  constexpr Task_1& operator=(Task_1 const& o) noexcept = default;
                


// Fields

 ::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t> __declspec(property(get=__get_m_result, put=__set_m_result))  m_result;

constexpr void __set_m_result(::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t> value) ;

constexpr ::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t> __get_m_result() const;

static ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> __declspec(property(get=__get_s_defaultFactory, put=__set_s_defaultFactory))  s_defaultFactory;

static void __set_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> value) ;

static ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> __get_s_defaultFactory() ;


// Properties

 ::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t> __declspec(property(get=get_Result))  Result;

 ::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t> __declspec(property(get=get_ResultOnSuccess))  ResultOnSuccess;

static ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> __declspec(property(get=get_Factory))  Factory;


// Methods

// Ctor Parameters []
explicit Task_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions options) ;

// Ctor Parameters [CppParam { name: "result", ty: "::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>", modifiers: "", def_value: None }]
explicit Task_1(::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t> result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t> result) ;

// Ctor Parameters [CppParam { name: "canceled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "result", ty: "::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "ct", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
explicit Task_1(bool canceled, ::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t> result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(bool canceled, ::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t> result, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) ;

// Ctor Parameters [CppParam { name: "function", ty: "::System::Func_2<::bs_hook::Il2CppWrapperType,::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_2<::bs_hook::Il2CppWrapperType,::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_2<::bs_hook::Il2CppWrapperType,::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Func_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Func_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> valueSelector, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

// Ctor Parameters [CppParam { name: "valueSelector", ty: "::System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "::System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit Task_1(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Delegate valueSelector, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::Task parent, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> function, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> StartNew(::System::Threading::Tasks::Task parent, ::System::Func_2<::bs_hook::Il2CppWrapperType,::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method TrySetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetResult(::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t> result) ;

/// @brief Method DangerousSetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void DangerousSetResult(::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t> result) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t> get_Result() ;

/// @brief Method get_ResultOnSuccess addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t> get_ResultOnSuccess() ;

/// @brief Method GetResultCore addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t> GetResultCore(bool waitCompletionNotification) ;

/// @brief Method get_Factory addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Threading::Tasks::TaskFactory_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> get_Factory() ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> ConfigureAwait(bool continueOnCapturedContext) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>> continuationAction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>,TNewResult> continuationFunction) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TNewResult>
 ::System::Threading::Tasks::Task_1<TNewResult> ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>,TNewResult> continuationFunction, ::System::Threading::Tasks::TaskScheduler scheduler, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::Task_1, "System.Threading.Tasks", "Task`1");
