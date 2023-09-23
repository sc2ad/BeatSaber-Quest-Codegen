#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace Oculus::Platform {
template<typename T>
class Message_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace Oculus::Platform::Models {
class Purchase;
}
namespace Oculus::Platform {
template<typename T>
class Oculus__Platform__Message_1__Callback;
}
namespace System::Threading {
struct CancellationToken;
}
namespace Oculus::Platform::Models {
class PurchaseList;
}
namespace GlobalNamespace {
struct GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult;
}
namespace Oculus::Platform::Models {
class AssetDetailsList;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__AdditionalContentModel__EntitlementStatus;
}
namespace GlobalNamespace {
struct GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult;
}
namespace GlobalNamespace {
struct GlobalNamespace__AdditionalContentModel__OpenProductStoreResult;
}
namespace GlobalNamespace {
class OculusLevelProductsModelSO;
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
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0;
}
namespace GlobalNamespace {
class GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0;
}
namespace GlobalNamespace {
class OculusPlatformAdditionalContentModel;
}
namespace GlobalNamespace {
struct GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12;
}
namespace GlobalNamespace {
struct GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7;
}
namespace GlobalNamespace {
struct GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5;
}
namespace GlobalNamespace {
struct GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6;
}
namespace GlobalNamespace {
struct GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11;
}
namespace GlobalNamespace {
struct GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10;
}
namespace GlobalNamespace {
struct GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9;
}
namespace GlobalNamespace {
struct GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8;
}
// Type: ::<GetLevelEntitlementStatusInternalAsync>d__5
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4128))
// CS Name: OculusPlatformAdditionalContentModel::<GetLevelEntitlementStatusInternalAsync>d__5
struct CORDL_TYPE GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::OculusPlatformAdditionalContentModel", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __t__builder, GlobalNamespace::OculusPlatformAdditionalContentModel __4__this, System::Threading::CancellationToken cancellationToken, ::StringW levelId, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;


                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5(GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5 const&) = default;
                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5(GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5&&) = default;
                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5& operator=(GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5& operator=(GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::OculusPlatformAdditionalContentModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OculusPlatformAdditionalContentModel value) ;

constexpr GlobalNamespace::OculusPlatformAdditionalContentModel __get___4__this() const;

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

/// @brief Method MoveNext addr 0x20c8be0 size 0x210 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x20c8df0 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetPackEntitlementStatusInternalAsync>d__6
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4129))
// CS Name: OculusPlatformAdditionalContentModel::<GetPackEntitlementStatusInternalAsync>d__6
struct CORDL_TYPE GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::OculusPlatformAdditionalContentModel", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __t__builder, GlobalNamespace::OculusPlatformAdditionalContentModel __4__this, System::Threading::CancellationToken cancellationToken, ::StringW packId, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;


                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6(GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6 const&) = default;
                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6(GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6&&) = default;
                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6& operator=(GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6& operator=(GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::OculusPlatformAdditionalContentModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OculusPlatformAdditionalContentModel value) ;

constexpr GlobalNamespace::OculusPlatformAdditionalContentModel __get___4__this() const;

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

/// @brief Method MoveNext addr 0x20c8e48 size 0x210 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x20c9058 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<DataIsValidAsync>d__7
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4130))
// CS Name: OculusPlatformAdditionalContentModel::<DataIsValidAsync>d__7
struct CORDL_TYPE GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::OculusPlatformAdditionalContentModel", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, GlobalNamespace::OculusPlatformAdditionalContentModel __4__this, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __u__2) noexcept;


                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7(GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7 const&) = default;
                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7(GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7&&) = default;
                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7& operator=(GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7& operator=(GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::OculusPlatformAdditionalContentModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OculusPlatformAdditionalContentModel value) ;

constexpr GlobalNamespace::OculusPlatformAdditionalContentModel __get___4__this() const;

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

/// @brief Method MoveNext addr 0x20c90b0 size 0x3b8 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x20c9468 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<OpenLevelProductStoreAsync>d__8
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4131))
// CS Name: OculusPlatformAdditionalContentModel::<OpenLevelProductStoreAsync>d__8
struct CORDL_TYPE GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::OculusPlatformAdditionalContentModel", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __t__builder, GlobalNamespace::OculusPlatformAdditionalContentModel __4__this, ::StringW levelId, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> __u__1, System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;


                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8(GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8 const&) = default;
                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8(GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8&&) = default;
                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8& operator=(GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8& operator=(GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::OculusPlatformAdditionalContentModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OculusPlatformAdditionalContentModel value) ;

constexpr GlobalNamespace::OculusPlatformAdditionalContentModel __get___4__this() const;

 ::StringW __declspec(property(get=__get_levelId, put=__set_levelId))  levelId;

constexpr void __set_levelId(::StringW value) ;

constexpr ::StringW __get_levelId() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> __get___u__1() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x20c94c0 size 0x458 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x20c9918 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<OpenLevelPackProductStoreAsync>d__9
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4132))
// CS Name: OculusPlatformAdditionalContentModel::<OpenLevelPackProductStoreAsync>d__9
struct CORDL_TYPE GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::OculusPlatformAdditionalContentModel", modifiers: "", def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __t__builder, GlobalNamespace::OculusPlatformAdditionalContentModel __4__this, ::StringW levelPackId, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> __u__1, System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;


                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9(GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9 const&) = default;
                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9(GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9&&) = default;
                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9& operator=(GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9& operator=(GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::OculusPlatformAdditionalContentModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OculusPlatformAdditionalContentModel value) ;

constexpr GlobalNamespace::OculusPlatformAdditionalContentModel __get___4__this() const;

 ::StringW __declspec(property(get=__get_levelPackId, put=__set_levelPackId))  levelPackId;

constexpr void __set_levelPackId(::StringW value) ;

constexpr ::StringW __get_levelPackId() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> __get___u__1() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x20c9970 size 0x4c8 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x20c9e38 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass10_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4133))
// CS Name: OculusPlatformAdditionalContentModel::<>c__DisplayClass10_0
class CORDL_TYPE GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0(GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0(GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0& operator=(GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0&& o) noexcept = default;
  constexpr GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0& operator=(GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::TaskCompletionSource_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> __declspec(property(get=__get_launchCheckoutFlowTaskSource, put=__set_launchCheckoutFlowTaskSource))  launchCheckoutFlowTaskSource;

constexpr void __set_launchCheckoutFlowTaskSource(System::Threading::Tasks::TaskCompletionSource_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> value) ;

constexpr System::Threading::Tasks::TaskCompletionSource_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> __get_launchCheckoutFlowTaskSource() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0() ;

/// @brief Method .ctor addr 0x20c9e90 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <LaunchCheckoutFlow>b__0 addr 0x20c9e98 size 0x58 virtual false final false
 void _LaunchCheckoutFlow_b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase> msg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<LaunchCheckoutFlow>d__10
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4134))
// CS Name: OculusPlatformAdditionalContentModel::<LaunchCheckoutFlow>d__10
struct CORDL_TYPE GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>>", modifiers: "", def_value: None }, CppParam { name: "sku", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> __t__builder, ::StringW sku, System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> __u__1) noexcept;


                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10(GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10 const&) = default;
                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10(GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10&&) = default;
                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10& operator=(GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10& operator=(GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> __get___t__builder() const;

 ::StringW __declspec(property(get=__get_sku, put=__set_sku))  sku;

constexpr void __set_sku(::StringW value) ;

constexpr ::StringW __get_sku() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x20c9ef0 size 0x30c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x20ca1fc size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<IsPackBetterBuyThanLevelAsync>d__11
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4135))
// CS Name: OculusPlatformAdditionalContentModel::<IsPackBetterBuyThanLevelAsync>d__11
struct CORDL_TYPE GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __t__builder, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __u__1) noexcept;


                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11(GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11 const&) = default;
                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11(GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11&&) = default;
                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11& operator=(GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11& operator=(GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __get___t__builder() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x20ca254 size 0x20c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x20ca460 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass12_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4136))
// CS Name: OculusPlatformAdditionalContentModel::<>c__DisplayClass12_0
class CORDL_TYPE GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0(GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0(GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0& operator=(GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0&& o) noexcept = default;
  constexpr GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0& operator=(GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0 const& o) noexcept = default;
                


// Fields

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __declspec(property(get=__get_getViewerPurchasesTaskSource, put=__set_getViewerPurchasesTaskSource))  getViewerPurchasesTaskSource;

constexpr void __set_getViewerPurchasesTaskSource(System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> value) ;

constexpr System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __get_getViewerPurchasesTaskSource() const;

 GlobalNamespace::OculusPlatformAdditionalContentModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OculusPlatformAdditionalContentModel value) ;

constexpr GlobalNamespace::OculusPlatformAdditionalContentModel __get___4__this() const;

 Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::PurchaseList> __declspec(property(get=__get___9__1, put=__set___9__1))  __9__1;

constexpr void __set___9__1(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::PurchaseList> value) ;

constexpr Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::PurchaseList> __get___9__1() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0() ;

/// @brief Method .ctor addr 0x20ca4b8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CheckForNewEntitlementsAsync>b__0 addr 0x20ca4c0 size 0x528 virtual false final false
 void _CheckForNewEntitlementsAsync_b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetDetailsList> getListMsg) ;

/// @brief Method <CheckForNewEntitlementsAsync>b__1 addr 0x20ca9e8 size 0x38c virtual false final false
 void _CheckForNewEntitlementsAsync_b__1(Oculus::Platform::Message_1<Oculus::Platform::Models::PurchaseList> getPurchasesMsg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<CheckForNewEntitlementsAsync>d__12
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4137))
// CS Name: OculusPlatformAdditionalContentModel::<CheckForNewEntitlementsAsync>d__12
struct CORDL_TYPE GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::OculusPlatformAdditionalContentModel", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __t__builder, System::Threading::CancellationToken cancellationToken, GlobalNamespace::OculusPlatformAdditionalContentModel __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __u__1) noexcept;


                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12(GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12 const&) = default;
                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12(GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12&&) = default;
                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12& operator=(GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12& operator=(GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 GlobalNamespace::OculusPlatformAdditionalContentModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OculusPlatformAdditionalContentModel value) ;

constexpr GlobalNamespace::OculusPlatformAdditionalContentModel __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x20cad74 size 0x318 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x20cb08c size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OculusPlatformAdditionalContentModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4125))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4138))
// CS Name: OculusPlatformAdditionalContentModel
class CORDL_TYPE OculusPlatformAdditionalContentModel : public GlobalNamespace::AdditionalContentModel {
public:
// Declarations
using _CheckForNewEntitlementsAsync_d__12 = GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12;

using __c__DisplayClass12_0 = GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0;

using _IsPackBetterBuyThanLevelAsync_d__11 = GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11;

using _LaunchCheckoutFlow_d__10 = GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10;

using __c__DisplayClass10_0 = GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0;

using _OpenLevelPackProductStoreAsync_d__9 = GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9;

using _OpenLevelProductStoreAsync_d__8 = GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8;

using _DataIsValidAsync_d__7 = GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7;

using _GetPackEntitlementStatusInternalAsync_d__6 = GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6;

using _GetLevelEntitlementStatusInternalAsync_d__5 = GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~OculusPlatformAdditionalContentModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusPlatformAdditionalContentModel", modifiers: " const&", def_value: None }]
constexpr OculusPlatformAdditionalContentModel(OculusPlatformAdditionalContentModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusPlatformAdditionalContentModel", modifiers: "&&", def_value: None }]
constexpr OculusPlatformAdditionalContentModel(OculusPlatformAdditionalContentModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusPlatformAdditionalContentModel(void* ptr) noexcept : GlobalNamespace::AdditionalContentModel(ptr) {
}


  constexpr OculusPlatformAdditionalContentModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusPlatformAdditionalContentModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusPlatformAdditionalContentModel& operator=(OculusPlatformAdditionalContentModel&& o) noexcept = default;
  constexpr OculusPlatformAdditionalContentModel& operator=(OculusPlatformAdditionalContentModel const& o) noexcept = default;
                


// Fields

 GlobalNamespace::OculusLevelProductsModelSO __declspec(property(get=__get__oculusLevelProductsModel, put=__set__oculusLevelProductsModel))  _oculusLevelProductsModel;

constexpr void __set__oculusLevelProductsModel(GlobalNamespace::OculusLevelProductsModelSO value) ;

constexpr GlobalNamespace::OculusLevelProductsModelSO __get__oculusLevelProductsModel() const;

 System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=__get__entitlementsSKU, put=__set__entitlementsSKU))  _entitlementsSKU;

constexpr void __set__entitlementsSKU(System::Collections::Generic::HashSet_1<::StringW> value) ;

constexpr System::Collections::Generic::HashSet_1<::StringW> __get__entitlementsSKU() const;

 System::Threading::SemaphoreSlim __declspec(property(get=__get__semaphoreSlim, put=__set__semaphoreSlim))  _semaphoreSlim;

constexpr void __set__semaphoreSlim(System::Threading::SemaphoreSlim value) ;

constexpr System::Threading::SemaphoreSlim __get__semaphoreSlim() const;

 bool __declspec(property(get=__get__isDataValid, put=__set__isDataValid))  _isDataValid;

constexpr void __set__isDataValid(bool value) ;

constexpr bool __get__isDataValid() const;


// Methods

/// @brief Method InvalidateDataInternal addr 0x20c81fc size 0x8 virtual true final false
 void InvalidateDataInternal() ;

/// @brief Method GetLevelEntitlementStatusInternalAsync addr 0x20c8204 size 0x104 virtual true final false
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GetLevelEntitlementStatusInternalAsync(::StringW levelId, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method GetPackEntitlementStatusInternalAsync addr 0x20c8308 size 0x104 virtual true final false
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GetPackEntitlementStatusInternalAsync(::StringW packId, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method DataIsValidAsync addr 0x20c840c size 0x100 virtual false final false
 System::Threading::Tasks::Task_1<bool> DataIsValidAsync(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method OpenLevelProductStoreAsync addr 0x20c850c size 0x108 virtual true final false
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> OpenLevelProductStoreAsync(::StringW levelId, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method OpenLevelPackProductStoreAsync addr 0x20c8614 size 0x108 virtual true final false
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> OpenLevelPackProductStoreAsync(::StringW levelPackId, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method LaunchCheckoutFlow addr 0x20c871c size 0xf0 virtual false final false
 System::Threading::Tasks::Task_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>> LaunchCheckoutFlow(::StringW sku) ;

/// @brief Method IsPackBetterBuyThanLevelAsync addr 0x20c880c size 0xe4 virtual true final false
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> IsPackBetterBuyThanLevelAsync(::StringW levelPackId, System::Threading::CancellationToken token) ;

/// @brief Method CheckForNewEntitlementsAsync addr 0x20c88f0 size 0xfc virtual false final false
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> CheckForNewEntitlementsAsync(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method HasLevelEntitlement addr 0x20c89ec size 0x74 virtual false final false
 bool HasLevelEntitlement(::StringW levelId) ;

/// @brief Method HasLevelPackEntitlement addr 0x20c8a60 size 0xcc virtual false final false
 bool HasLevelPackEntitlement(::StringW levelPackId) ;

// Ctor Parameters []
explicit OculusPlatformAdditionalContentModel() ;

/// @brief Method .ctor addr 0x20c8b2c size 0xb4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass10_0, "", "OculusPlatformAdditionalContentModel/<>c__DisplayClass10_0");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel____c__DisplayClass12_0, "", "OculusPlatformAdditionalContentModel/<>c__DisplayClass12_0");
NEED_NO_BOX(GlobalNamespace::OculusPlatformAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformAdditionalContentModel, "", "OculusPlatformAdditionalContentModel");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12, "", "OculusPlatformAdditionalContentModel/<CheckForNewEntitlementsAsync>d__12");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7, "", "OculusPlatformAdditionalContentModel/<DataIsValidAsync>d__7");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5, "", "OculusPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__5");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6, "", "OculusPlatformAdditionalContentModel/<GetPackEntitlementStatusInternalAsync>d__6");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11, "", "OculusPlatformAdditionalContentModel/<IsPackBetterBuyThanLevelAsync>d__11");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10, "", "OculusPlatformAdditionalContentModel/<LaunchCheckoutFlow>d__10");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9, "", "OculusPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__9");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, "", "OculusPlatformAdditionalContentModel/<OpenLevelProductStoreAsync>d__8");
