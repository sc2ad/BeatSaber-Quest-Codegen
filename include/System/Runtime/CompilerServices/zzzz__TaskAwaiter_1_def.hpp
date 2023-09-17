#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System {
class Action;
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
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
template<::cordl_internals::il2cpp_reference_type TResult>
struct TaskAwaiter_1<TResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>;
}
namespace System::Runtime::CompilerServices {
template<>
struct TaskAwaiter_1<::GlobalNamespace::AuthenticationToken>;
}
namespace System::Runtime::CompilerServices {
template<>
struct TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct TaskAwaiter_1<::System::Int32Enum>;
}
namespace System::Runtime::CompilerServices {
template<>
struct TaskAwaiter_1<::System::Nullable_1<int32_t>>;
}
namespace System::Runtime::CompilerServices {
template<>
struct TaskAwaiter_1<::System::Threading::Tasks::VoidTaskResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct TaskAwaiter_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>;
}
namespace System::Runtime::CompilerServices {
template<>
struct TaskAwaiter_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>;
}
namespace System::Runtime::CompilerServices {
template<>
struct TaskAwaiter_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>;
}
namespace System::Runtime::CompilerServices {
template<>
struct TaskAwaiter_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>;
}
namespace System::Runtime::CompilerServices {
template<>
struct TaskAwaiter_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>;
}
namespace System::Runtime::CompilerServices {
template<>
struct TaskAwaiter_1<bool>;
}
namespace System::Runtime::CompilerServices {
template<>
struct TaskAwaiter_1<int32_t>;
}
namespace System::Runtime::CompilerServices {
template<>
struct TaskAwaiter_1<int64_t>;
}
// Type: System.Runtime.CompilerServices::TaskAwaiter`1
// Type: System.Runtime.CompilerServices::TaskAwaiter`1
namespace System::Runtime::CompilerServices {
// cpp template
template<::cordl_internals::il2cpp_reference_type TResult>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3386)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3386), inst: 2 })
// CS Name: System.Runtime.CompilerServices.TaskAwaiter`1
struct CORDL_TYPE TaskAwaiter_1<TResult> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion() const;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<TResult>", modifiers: "", def_value: None }]
constexpr TaskAwaiter_1(::System::Threading::Tasks::Task_1<TResult> m_task) noexcept;


                    constexpr TaskAwaiter_1(TaskAwaiter_1 const&) = default;
                    constexpr TaskAwaiter_1(TaskAwaiter_1&&) = default;
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TaskAwaiter_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Threading::Tasks::Task_1<TResult> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<TResult> value) ;

constexpr ::System::Threading::Tasks::Task_1<TResult> __get_m_task() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::Task_1<TResult> task) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCompleted() ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnsafeOnCompleted(::System::Action continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 TResult GetResult() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::TaskAwaiter`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3386)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3386), inst: 89 })
// CS Name: System.Runtime.CompilerServices.TaskAwaiter`1
struct CORDL_TYPE TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion() const;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>", modifiers: "", def_value: None }]
constexpr TaskAwaiter_1(::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> m_task) noexcept;


                    constexpr TaskAwaiter_1(TaskAwaiter_1 const&) = default;
                    constexpr TaskAwaiter_1(TaskAwaiter_1&&) = default;
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TaskAwaiter_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> value) ;

constexpr ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __get_m_task() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> task) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCompleted() ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnsafeOnCompleted(::System::Action continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse GetResult() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::TaskAwaiter`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3386)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3386), inst: 92 })
// CS Name: System.Runtime.CompilerServices.TaskAwaiter`1
struct CORDL_TYPE TaskAwaiter_1<int32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion() const;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<int32_t>", modifiers: "", def_value: None }]
constexpr TaskAwaiter_1(::System::Threading::Tasks::Task_1<int32_t> m_task) noexcept;


                    constexpr TaskAwaiter_1(TaskAwaiter_1 const&) = default;
                    constexpr TaskAwaiter_1(TaskAwaiter_1&&) = default;
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TaskAwaiter_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Threading::Tasks::Task_1<int32_t> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<int32_t> value) ;

constexpr ::System::Threading::Tasks::Task_1<int32_t> __get_m_task() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::Task_1<int32_t> task) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCompleted() ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnsafeOnCompleted(::System::Action continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t GetResult() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::TaskAwaiter`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(3386))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3386), inst: 96 })
// CS Name: System.Runtime.CompilerServices.TaskAwaiter`1
struct CORDL_TYPE TaskAwaiter_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion() const;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }]
constexpr TaskAwaiter_1(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> m_task) noexcept;


                    constexpr TaskAwaiter_1(TaskAwaiter_1 const&) = default;
                    constexpr TaskAwaiter_1(TaskAwaiter_1&&) = default;
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TaskAwaiter_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> __get_m_task() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> task) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCompleted() ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnsafeOnCompleted(::System::Action continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> GetResult() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::TaskAwaiter`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3386)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3386), inst: 99 })
// CS Name: System.Runtime.CompilerServices.TaskAwaiter`1
struct CORDL_TYPE TaskAwaiter_1<bool> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion() const;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<bool>", modifiers: "", def_value: None }]
constexpr TaskAwaiter_1(::System::Threading::Tasks::Task_1<bool> m_task) noexcept;


                    constexpr TaskAwaiter_1(TaskAwaiter_1 const&) = default;
                    constexpr TaskAwaiter_1(TaskAwaiter_1&&) = default;
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TaskAwaiter_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Threading::Tasks::Task_1<bool> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<bool> value) ;

constexpr ::System::Threading::Tasks::Task_1<bool> __get_m_task() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::Task_1<bool> task) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCompleted() ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnsafeOnCompleted(::System::Action continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 bool GetResult() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::TaskAwaiter`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3386)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3386), inst: 772 })
// CS Name: System.Runtime.CompilerServices.TaskAwaiter`1
struct CORDL_TYPE TaskAwaiter_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion() const;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>", modifiers: "", def_value: None }]
constexpr TaskAwaiter_1(::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> m_task) noexcept;


                    constexpr TaskAwaiter_1(TaskAwaiter_1 const&) = default;
                    constexpr TaskAwaiter_1(TaskAwaiter_1&&) = default;
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TaskAwaiter_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> value) ;

constexpr ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> __get_m_task() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> task) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCompleted() ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnsafeOnCompleted(::System::Action continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance GetResult() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::TaskAwaiter`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(3386))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3386), inst: 830 })
// CS Name: System.Runtime.CompilerServices.TaskAwaiter`1
struct CORDL_TYPE TaskAwaiter_1<int64_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion() const;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<int64_t>", modifiers: "", def_value: None }]
constexpr TaskAwaiter_1(::System::Threading::Tasks::Task_1<int64_t> m_task) noexcept;


                    constexpr TaskAwaiter_1(TaskAwaiter_1 const&) = default;
                    constexpr TaskAwaiter_1(TaskAwaiter_1&&) = default;
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TaskAwaiter_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Threading::Tasks::Task_1<int64_t> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<int64_t> value) ;

constexpr ::System::Threading::Tasks::Task_1<int64_t> __get_m_task() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::Task_1<int64_t> task) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCompleted() ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnsafeOnCompleted(::System::Action continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 int64_t GetResult() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::TaskAwaiter`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3386)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3386), inst: 841 })
// CS Name: System.Runtime.CompilerServices.TaskAwaiter`1
struct CORDL_TYPE TaskAwaiter_1<::System::Nullable_1<int32_t>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion() const;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>", modifiers: "", def_value: None }]
constexpr TaskAwaiter_1(::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>> m_task) noexcept;


                    constexpr TaskAwaiter_1(TaskAwaiter_1 const&) = default;
                    constexpr TaskAwaiter_1(TaskAwaiter_1&&) = default;
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TaskAwaiter_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>> value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>> __get_m_task() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>> task) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCompleted() ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnsafeOnCompleted(::System::Action continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Nullable_1<int32_t> GetResult() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::TaskAwaiter`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(3386))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3386), inst: 847 })
// CS Name: System.Runtime.CompilerServices.TaskAwaiter`1
struct CORDL_TYPE TaskAwaiter_1<::GlobalNamespace::AuthenticationToken> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion() const;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: None }]
constexpr TaskAwaiter_1(::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken> m_task) noexcept;


                    constexpr TaskAwaiter_1(TaskAwaiter_1 const&) = default;
                    constexpr TaskAwaiter_1(TaskAwaiter_1&&) = default;
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TaskAwaiter_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken> value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken> __get_m_task() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken> task) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCompleted() ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnsafeOnCompleted(::System::Action continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::AuthenticationToken GetResult() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::TaskAwaiter`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3386)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3386), inst: 852 })
// CS Name: System.Runtime.CompilerServices.TaskAwaiter`1
struct CORDL_TYPE TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion() const;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }]
constexpr TaskAwaiter_1(::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult> m_task) noexcept;


                    constexpr TaskAwaiter_1(TaskAwaiter_1 const&) = default;
                    constexpr TaskAwaiter_1(TaskAwaiter_1&&) = default;
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TaskAwaiter_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult> value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult> __get_m_task() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult> task) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCompleted() ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnsafeOnCompleted(::System::Action continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::GetAssetBundleFileResult GetResult() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::TaskAwaiter`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(3386))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3386), inst: 867 })
// CS Name: System.Runtime.CompilerServices.TaskAwaiter`1
struct CORDL_TYPE TaskAwaiter_1<::System::Threading::Tasks::VoidTaskResult> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion() const;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>", modifiers: "", def_value: None }]
constexpr TaskAwaiter_1(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> m_task) noexcept;


                    constexpr TaskAwaiter_1(TaskAwaiter_1 const&) = default;
                    constexpr TaskAwaiter_1(TaskAwaiter_1&&) = default;
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TaskAwaiter_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> __get_m_task() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> task) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCompleted() ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnsafeOnCompleted(::System::Action continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::VoidTaskResult GetResult() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::TaskAwaiter`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3386)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3386), inst: 874 })
// CS Name: System.Runtime.CompilerServices.TaskAwaiter`1
struct CORDL_TYPE TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion() const;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>", modifiers: "", def_value: None }]
constexpr TaskAwaiter_1(::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> m_task) noexcept;


                    constexpr TaskAwaiter_1(TaskAwaiter_1 const&) = default;
                    constexpr TaskAwaiter_1(TaskAwaiter_1&&) = default;
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TaskAwaiter_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> __get_m_task() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> task) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCompleted() ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnsafeOnCompleted(::System::Action continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult GetResult() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::TaskAwaiter`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3386)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3386), inst: 875 })
// CS Name: System.Runtime.CompilerServices.TaskAwaiter`1
struct CORDL_TYPE TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion() const;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>", modifiers: "", def_value: None }]
constexpr TaskAwaiter_1(::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> m_task) noexcept;


                    constexpr TaskAwaiter_1(TaskAwaiter_1 const&) = default;
                    constexpr TaskAwaiter_1(TaskAwaiter_1&&) = default;
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TaskAwaiter_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> __get_m_task() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> task) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCompleted() ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnsafeOnCompleted(::System::Action continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult GetResult() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::TaskAwaiter`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3386)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3386), inst: 876 })
// CS Name: System.Runtime.CompilerServices.TaskAwaiter`1
struct CORDL_TYPE TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion() const;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>", modifiers: "", def_value: None }]
constexpr TaskAwaiter_1(::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> m_task) noexcept;


                    constexpr TaskAwaiter_1(TaskAwaiter_1 const&) = default;
                    constexpr TaskAwaiter_1(TaskAwaiter_1&&) = default;
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TaskAwaiter_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> __get_m_task() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> task) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCompleted() ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnsafeOnCompleted(::System::Action continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult GetResult() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::TaskAwaiter`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3386)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3386), inst: 1088 })
// CS Name: System.Runtime.CompilerServices.TaskAwaiter`1
struct CORDL_TYPE TaskAwaiter_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion() const;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>", modifiers: "", def_value: None }]
constexpr TaskAwaiter_1(::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> m_task) noexcept;


                    constexpr TaskAwaiter_1(TaskAwaiter_1 const&) = default;
                    constexpr TaskAwaiter_1(TaskAwaiter_1&&) = default;
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TaskAwaiter_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> __get_m_task() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> task) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCompleted() ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnsafeOnCompleted(::System::Action continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t> GetResult() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::TaskAwaiter`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3386)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3386), inst: 1089 })
// CS Name: System.Runtime.CompilerServices.TaskAwaiter`1
struct CORDL_TYPE TaskAwaiter_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion() const;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }]
constexpr TaskAwaiter_1(::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> m_task) noexcept;


                    constexpr TaskAwaiter_1(TaskAwaiter_1 const&) = default;
                    constexpr TaskAwaiter_1(TaskAwaiter_1&&) = default;
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TaskAwaiter_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __get_m_task() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> task) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCompleted() ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnsafeOnCompleted(::System::Action continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> GetResult() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::TaskAwaiter`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3386)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3386), inst: 4825 })
// CS Name: System.Runtime.CompilerServices.TaskAwaiter`1
struct CORDL_TYPE TaskAwaiter_1<::System::Int32Enum> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion() const;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::Int32Enum>", modifiers: "", def_value: None }]
constexpr TaskAwaiter_1(::System::Threading::Tasks::Task_1<::System::Int32Enum> m_task) noexcept;


                    constexpr TaskAwaiter_1(TaskAwaiter_1 const&) = default;
                    constexpr TaskAwaiter_1(TaskAwaiter_1&&) = default;
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TaskAwaiter_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Threading::Tasks::Task_1<::System::Int32Enum> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::Int32Enum> value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::Int32Enum> __get_m_task() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::Task_1<::System::Int32Enum> task) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCompleted() ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnsafeOnCompleted(::System::Action continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Int32Enum GetResult() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::TaskAwaiter`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3386)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3386), inst: 4905 })
// CS Name: System.Runtime.CompilerServices.TaskAwaiter`1
struct CORDL_TYPE TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion() const;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>", modifiers: "", def_value: None }]
constexpr TaskAwaiter_1(::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> m_task) noexcept;


                    constexpr TaskAwaiter_1(TaskAwaiter_1 const&) = default;
                    constexpr TaskAwaiter_1(TaskAwaiter_1&&) = default;
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TaskAwaiter_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> __get_m_task() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> task) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCompleted() ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnsafeOnCompleted(::System::Action continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult GetResult() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::TaskAwaiter`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(3386))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3386), inst: 5957 })
// CS Name: System.Runtime.CompilerServices.TaskAwaiter`1
struct CORDL_TYPE TaskAwaiter_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion() const;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>", modifiers: "", def_value: None }]
constexpr TaskAwaiter_1(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> m_task) noexcept;


                    constexpr TaskAwaiter_1(TaskAwaiter_1 const&) = default;
                    constexpr TaskAwaiter_1(TaskAwaiter_1&&) = default;
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TaskAwaiter_1& operator=(TaskAwaiter_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TaskAwaiter_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> __get_m_task() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> task) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCompleted() ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnsafeOnCompleted(::System::Action continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t> GetResult() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Runtime::CompilerServices::TaskAwaiter_1, "System.Runtime.CompilerServices", "TaskAwaiter`1");
