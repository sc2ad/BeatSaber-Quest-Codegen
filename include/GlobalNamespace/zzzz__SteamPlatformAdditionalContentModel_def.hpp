#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
struct GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult;
}
namespace GlobalNamespace {
struct GlobalNamespace__AdditionalContentModel__OpenProductStoreResult;
}
namespace GlobalNamespace {
class SteamLevelProductsModelSO;
}
namespace GlobalNamespace {
struct GlobalNamespace__SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8;
}
namespace GlobalNamespace {
struct GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10;
}
namespace GlobalNamespace {
struct GlobalNamespace__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7;
}
namespace GlobalNamespace {
struct GlobalNamespace__SteamPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__14;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult;
}
namespace GlobalNamespace {
struct GlobalNamespace__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace GlobalNamespace {
struct GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9;
}
namespace GlobalNamespace {
struct GlobalNamespace__AdditionalContentModel__EntitlementStatus;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
// Forward declare root types
namespace GlobalNamespace {
class SteamPlatformAdditionalContentModel;
}
namespace GlobalNamespace {
struct GlobalNamespace__SteamPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__14;
}
namespace GlobalNamespace {
struct GlobalNamespace__SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8;
}
namespace GlobalNamespace {
struct GlobalNamespace__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6;
}
namespace GlobalNamespace {
struct GlobalNamespace__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7;
}
namespace GlobalNamespace {
struct GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10;
}
namespace GlobalNamespace {
struct GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9;
}
// Type: ::<GetLevelEntitlementStatusInternalAsync>d__6
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4139))
// CS Name: SteamPlatformAdditionalContentModel::<GetLevelEntitlementStatusInternalAsync>d__6
struct CORDL_TYPE GlobalNamespace__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::SteamPlatformAdditionalContentModel", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __t__builder, GlobalNamespace::SteamPlatformAdditionalContentModel __4__this, System::Threading::CancellationToken cancellationToken, ::StringW levelId, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;


                    constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6(GlobalNamespace__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6 const&) = default;
                    constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6(GlobalNamespace__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6&&) = default;
                    constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6& operator=(GlobalNamespace__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6& operator=(GlobalNamespace__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __get___t__builder() const;

 GlobalNamespace::SteamPlatformAdditionalContentModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::SteamPlatformAdditionalContentModel value) ;

constexpr GlobalNamespace::SteamPlatformAdditionalContentModel __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 ::StringW __declspec(property(get=__get_levelId, put=__set_levelId))  levelId;

constexpr void __set_levelId(::StringW value) ;

constexpr ::StringW __get_levelId() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<bool> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<bool> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x20cb9a8 size 0x210 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x20cbbb8 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetPackEntitlementStatusInternalAsync>d__7
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4140))
// CS Name: SteamPlatformAdditionalContentModel::<GetPackEntitlementStatusInternalAsync>d__7
struct CORDL_TYPE GlobalNamespace__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::SteamPlatformAdditionalContentModel", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __t__builder, GlobalNamespace::SteamPlatformAdditionalContentModel __4__this, System::Threading::CancellationToken cancellationToken, ::StringW packId, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;


                    constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7(GlobalNamespace__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7 const&) = default;
                    constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7(GlobalNamespace__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7&&) = default;
                    constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7& operator=(GlobalNamespace__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7& operator=(GlobalNamespace__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __get___t__builder() const;

 GlobalNamespace::SteamPlatformAdditionalContentModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::SteamPlatformAdditionalContentModel value) ;

constexpr GlobalNamespace::SteamPlatformAdditionalContentModel __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 ::StringW __declspec(property(get=__get_packId, put=__set_packId))  packId;

constexpr void __set_packId(::StringW value) ;

constexpr ::StringW __get_packId() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<bool> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<bool> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x20cbc10 size 0x210 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x20cbe20 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<DataIsValidAsync>d__8
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4141))
// CS Name: SteamPlatformAdditionalContentModel::<DataIsValidAsync>d__8
struct CORDL_TYPE GlobalNamespace__SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::SteamPlatformAdditionalContentModel", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, GlobalNamespace::SteamPlatformAdditionalContentModel __4__this, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __u__2) noexcept;


                    constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8(GlobalNamespace__SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8 const&) = default;
                    constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8(GlobalNamespace__SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8&&) = default;
                    constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8& operator=(GlobalNamespace__SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8& operator=(GlobalNamespace__SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __get___t__builder() const;

 GlobalNamespace::SteamPlatformAdditionalContentModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::SteamPlatformAdditionalContentModel value) ;

constexpr GlobalNamespace::SteamPlatformAdditionalContentModel __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x20cbe78 size 0x3b0 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x20cc228 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<OpenLevelProductStoreAsync>d__9
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4142))
// CS Name: SteamPlatformAdditionalContentModel::<OpenLevelProductStoreAsync>d__9
struct CORDL_TYPE GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::SteamPlatformAdditionalContentModel", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __t__builder, GlobalNamespace::SteamPlatformAdditionalContentModel __4__this, ::StringW levelId, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __u__1) noexcept;


                    constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9(GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9 const&) = default;
                    constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9(GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9&&) = default;
                    constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9& operator=(GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9& operator=(GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __get___t__builder() const;

 GlobalNamespace::SteamPlatformAdditionalContentModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::SteamPlatformAdditionalContentModel value) ;

constexpr GlobalNamespace::SteamPlatformAdditionalContentModel __get___4__this() const;

 ::StringW __declspec(property(get=__get_levelId, put=__set_levelId))  levelId;

constexpr void __set_levelId(::StringW value) ;

constexpr ::StringW __get_levelId() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x20cc280 size 0x334 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x20cc5b4 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<OpenLevelPackProductStoreAsync>d__10
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4143))
// CS Name: SteamPlatformAdditionalContentModel::<OpenLevelPackProductStoreAsync>d__10
struct CORDL_TYPE GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::SteamPlatformAdditionalContentModel", modifiers: "", def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __t__builder, GlobalNamespace::SteamPlatformAdditionalContentModel __4__this, ::StringW levelPackId, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __u__1) noexcept;


                    constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10(GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10 const&) = default;
                    constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10(GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10&&) = default;
                    constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10& operator=(GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10& operator=(GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __get___t__builder() const;

 GlobalNamespace::SteamPlatformAdditionalContentModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::SteamPlatformAdditionalContentModel value) ;

constexpr GlobalNamespace::SteamPlatformAdditionalContentModel __get___4__this() const;

 ::StringW __declspec(property(get=__get_levelPackId, put=__set_levelPackId))  levelPackId;

constexpr void __set_levelPackId(::StringW value) ;

constexpr ::StringW __get_levelPackId() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x20cc60c size 0x334 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x20cc940 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<CheckForNewEntitlementsAsync>d__14
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4144))
// CS Name: SteamPlatformAdditionalContentModel::<CheckForNewEntitlementsAsync>d__14
struct CORDL_TYPE GlobalNamespace__SteamPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__14 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__14(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __t__builder, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __u__1) noexcept;


                    constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__14(GlobalNamespace__SteamPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__14 const&) = default;
                    constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__14(GlobalNamespace__SteamPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__14&&) = default;
                    constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__14& operator=(GlobalNamespace__SteamPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__14 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__SteamPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__14& operator=(GlobalNamespace__SteamPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__14&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SteamPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__14(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __get___t__builder() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x20cc998 size 0x20c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x20ccba4 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SteamPlatformAdditionalContentModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4125))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4145))
// CS Name: SteamPlatformAdditionalContentModel
class CORDL_TYPE SteamPlatformAdditionalContentModel : public GlobalNamespace::AdditionalContentModel {
public:
// Declarations
using _CheckForNewEntitlementsAsync_d__14 = GlobalNamespace::GlobalNamespace__SteamPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__14;

using _OpenLevelPackProductStoreAsync_d__10 = GlobalNamespace::GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10;

using _OpenLevelProductStoreAsync_d__9 = GlobalNamespace::GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9;

using _DataIsValidAsync_d__8 = GlobalNamespace::GlobalNamespace__SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8;

using _GetPackEntitlementStatusInternalAsync_d__7 = GlobalNamespace::GlobalNamespace__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7;

using _GetLevelEntitlementStatusInternalAsync_d__6 = GlobalNamespace::GlobalNamespace__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~SteamPlatformAdditionalContentModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "SteamPlatformAdditionalContentModel", modifiers: " const&", def_value: None }]
constexpr SteamPlatformAdditionalContentModel(SteamPlatformAdditionalContentModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SteamPlatformAdditionalContentModel", modifiers: "&&", def_value: None }]
constexpr SteamPlatformAdditionalContentModel(SteamPlatformAdditionalContentModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SteamPlatformAdditionalContentModel(void* ptr) noexcept : GlobalNamespace::AdditionalContentModel(ptr) {
}


  constexpr SteamPlatformAdditionalContentModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SteamPlatformAdditionalContentModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SteamPlatformAdditionalContentModel& operator=(SteamPlatformAdditionalContentModel&& o) noexcept = default;
  constexpr SteamPlatformAdditionalContentModel& operator=(SteamPlatformAdditionalContentModel const& o) noexcept = default;
                


// Fields

 GlobalNamespace::SteamLevelProductsModelSO __declspec(property(get=__get__steamLevelProductsModel, put=__set__steamLevelProductsModel))  _steamLevelProductsModel;

constexpr void __set__steamLevelProductsModel(GlobalNamespace::SteamLevelProductsModelSO value) ;

constexpr GlobalNamespace::SteamLevelProductsModelSO __get__steamLevelProductsModel() const;

 System::Collections::Generic::HashSet_1<uint32_t> __declspec(property(get=__get__entitlementsAppIds, put=__set__entitlementsAppIds))  _entitlementsAppIds;

constexpr void __set__entitlementsAppIds(System::Collections::Generic::HashSet_1<uint32_t> value) ;

constexpr System::Collections::Generic::HashSet_1<uint32_t> __get__entitlementsAppIds() const;

 System::Threading::Tasks::TaskCompletionSource_1<bool> __declspec(property(get=__get__dataIsValidTaskCompletionSource, put=__set__dataIsValidTaskCompletionSource))  _dataIsValidTaskCompletionSource;

constexpr void __set__dataIsValidTaskCompletionSource(System::Threading::Tasks::TaskCompletionSource_1<bool> value) ;

constexpr System::Threading::Tasks::TaskCompletionSource_1<bool> __get__dataIsValidTaskCompletionSource() const;

 System::Threading::SemaphoreSlim __declspec(property(get=__get__semaphoreSlim, put=__set__semaphoreSlim))  _semaphoreSlim;

constexpr void __set__semaphoreSlim(System::Threading::SemaphoreSlim value) ;

constexpr System::Threading::SemaphoreSlim __get__semaphoreSlim() const;

 bool __declspec(property(get=__get__isDataValid, put=__set__isDataValid))  _isDataValid;

constexpr void __set__isDataValid(bool value) ;

constexpr bool __get__isDataValid() const;


// Methods

/// @brief Method InvalidateDataInternal addr 0x20cb0e4 size 0x8 virtual true final false
 void InvalidateDataInternal() ;

/// @brief Method GetLevelEntitlementStatusInternalAsync addr 0x20cb0ec size 0x104 virtual true final false
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GetLevelEntitlementStatusInternalAsync(::StringW levelId, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method GetPackEntitlementStatusInternalAsync addr 0x20cb1f0 size 0x104 virtual true final false
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GetPackEntitlementStatusInternalAsync(::StringW packId, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method DataIsValidAsync addr 0x20cb2f4 size 0x100 virtual false final false
 System::Threading::Tasks::Task_1<bool> DataIsValidAsync(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method OpenLevelProductStoreAsync addr 0x20cb3f4 size 0xfc virtual true final false
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> OpenLevelProductStoreAsync(::StringW levelId, System::Threading::CancellationToken token) ;

/// @brief Method OpenLevelPackProductStoreAsync addr 0x20cb4f0 size 0xfc virtual true final false
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> OpenLevelPackProductStoreAsync(::StringW levelPackId, System::Threading::CancellationToken token) ;

/// @brief Method OpenProductStore addr 0x20cb5ec size 0x38 virtual false final false
 void OpenProductStore(uint32_t appId) ;

/// @brief Method OpenBundleUrl addr 0x20cb624 size 0x38 virtual false final false
 void OpenBundleUrl(uint32_t bundleId) ;

/// @brief Method IsPackBetterBuyThanLevelAsync addr 0x20cb65c size 0x68 virtual true final false
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> IsPackBetterBuyThanLevelAsync(::StringW levelPackId, System::Threading::CancellationToken token) ;

/// @brief Method CheckForNewEntitlementsAsync addr 0x20cb6c4 size 0xe4 virtual false final false
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> CheckForNewEntitlementsAsync(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method HasLevelEntitlement addr 0x20cb7a8 size 0x80 virtual false final false
 bool HasLevelEntitlement(::StringW levelId) ;

/// @brief Method HasLevelPackEntitlement addr 0x20cb828 size 0xcc virtual false final false
 bool HasLevelPackEntitlement(::StringW levelPackId) ;

static GlobalNamespace::SteamPlatformAdditionalContentModel New_ctor() ;

/// @brief Method .ctor addr 0x20cb8f4 size 0xb4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SteamPlatformAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamPlatformAdditionalContentModel, "", "SteamPlatformAdditionalContentModel");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SteamPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__14, "", "SteamPlatformAdditionalContentModel/<CheckForNewEntitlementsAsync>d__14");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8, "", "SteamPlatformAdditionalContentModel/<DataIsValidAsync>d__8");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6, "", "SteamPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__6");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7, "", "SteamPlatformAdditionalContentModel/<GetPackEntitlementStatusInternalAsync>d__7");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10, "", "SteamPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__10");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9, "", "SteamPlatformAdditionalContentModel/<OpenLevelProductStoreAsync>d__9");
