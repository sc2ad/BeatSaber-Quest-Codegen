#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Threading {
class SemaphoreSlim;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__AdditionalContentModel__EntitlementStatus;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class ISonyCommerceHelper;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult;
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
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class SonyPlatformAdditionalContentModel_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class SonyPlatformAdditionalContentModel_1<T>;
}
namespace GlobalNamespace {
template<typename T>
struct ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12;
}
namespace GlobalNamespace {
template<typename T>
struct ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5;
}
namespace GlobalNamespace {
template<typename T>
struct ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6;
}
namespace GlobalNamespace {
template<typename T>
struct ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9;
}
namespace GlobalNamespace {
template<typename T>
struct ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8;
}
namespace GlobalNamespace {
template<typename T>
struct ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7;
}
namespace GlobalNamespace {
template<typename T>
struct ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
struct ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
struct ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
struct ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
struct ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
struct ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
struct ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
struct ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13<T>;
}
// Type: ::<GetLevelEntitlementStatusInternalAsync>d__5
// Type: ::<GetPackEntitlementStatusInternalAsync>d__6
// Type: ::<OpenLevelProductStoreAsync>d__7
// Type: ::<OpenLevelPackProductStoreAsync>d__8
// Type: ::<IsPackBetterBuyThanLevelAsync>d__9
// Type: ::<EnsureDataValidity>d__12
// Type: ::<UpdateEntitlementsAsync>d__13
// Type: ::SonyPlatformAdditionalContentModel`1
// Type: ::<GetLevelEntitlementStatusInternalAsync>d__5
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(4681))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4681), inst: 2 })
// CS Name: SonyPlatformAdditionalContentModel`1::<GetLevelEntitlementStatusInternalAsync>d__5
struct CORDL_TYPE ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelId, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;


                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5 const&) = default;
                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5&&) = default;
                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5& operator=(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5& operator=(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> __get___t__builder() const;

 ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> value) ;

constexpr ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __get___4__this() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::StringW __declspec(property(get=__get_levelId, put=__set_levelId))  levelId;

constexpr void __set_levelId(::StringW value) ;

constexpr ::StringW __get_levelId() const;

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
// Type: ::<GetPackEntitlementStatusInternalAsync>d__6
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4682)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4682), inst: 2 })
// CS Name: SonyPlatformAdditionalContentModel`1::<GetPackEntitlementStatusInternalAsync>d__6
struct CORDL_TYPE ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelPackId, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;


                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6 const&) = default;
                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6&&) = default;
                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6& operator=(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6& operator=(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> __get___t__builder() const;

 ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> value) ;

constexpr ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __get___4__this() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::StringW __declspec(property(get=__get_levelPackId, put=__set_levelPackId))  levelPackId;

constexpr void __set_levelPackId(::StringW value) ;

constexpr ::StringW __get_levelPackId() const;

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
// Type: ::<OpenLevelProductStoreAsync>d__7
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(4683))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4683), inst: 2 })
// CS Name: SonyPlatformAdditionalContentModel`1::<OpenLevelProductStoreAsync>d__7
struct CORDL_TYPE ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __4__this, ::StringW levelId, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult> __u__1) noexcept;


                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7 const&) = default;
                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7&&) = default;
                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7& operator=(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7& operator=(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __get___t__builder() const;

 ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> value) ;

constexpr ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __get___4__this() const;

 ::StringW __declspec(property(get=__get_levelId, put=__set_levelId))  levelId;

constexpr void __set_levelId(::StringW value) ;

constexpr ::StringW __get_levelId() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<OpenLevelPackProductStoreAsync>d__8
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4684)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4684), inst: 2 })
// CS Name: SonyPlatformAdditionalContentModel`1::<OpenLevelPackProductStoreAsync>d__8
struct CORDL_TYPE ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>", modifiers: "", def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __4__this, ::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult> __u__1) noexcept;


                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8 const&) = default;
                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8&&) = default;
                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8& operator=(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8& operator=(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __get___t__builder() const;

 ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> value) ;

constexpr ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __get___4__this() const;

 ::StringW __declspec(property(get=__get_levelPackId, put=__set_levelPackId))  levelPackId;

constexpr void __set_levelPackId(::StringW value) ;

constexpr ::StringW __get_levelPackId() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<IsPackBetterBuyThanLevelAsync>d__9
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(4685))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4685), inst: 2 })
// CS Name: SonyPlatformAdditionalContentModel`1::<IsPackBetterBuyThanLevelAsync>d__9
struct CORDL_TYPE ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelPackId, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;


                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9 const&) = default;
                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9&&) = default;
                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9& operator=(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9& operator=(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __get___t__builder() const;

 ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> value) ;

constexpr ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __get___4__this() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::StringW __declspec(property(get=__get_levelPackId, put=__set_levelPackId))  levelPackId;

constexpr void __set_levelPackId(::StringW value) ;

constexpr ::StringW __get_levelPackId() const;

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
// Type: ::<EnsureDataValidity>d__12
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4686)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4686), inst: 2 })
// CS Name: SonyPlatformAdditionalContentModel`1::<EnsureDataValidity>d__12
struct CORDL_TYPE ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __u__2) noexcept;


                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12 const&) = default;
                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12&&) = default;
                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12& operator=(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12& operator=(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __get___t__builder() const;

 ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> value) ;

constexpr ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __get___4__this() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<UpdateEntitlementsAsync>d__13
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4687)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4687), inst: 2 })
// CS Name: SonyPlatformAdditionalContentModel`1::<UpdateEntitlementsAsync>d__13
struct CORDL_TYPE ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> __u__1) noexcept;


                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13 const&) = default;
                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13&&) = default;
                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13& operator=(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13& operator=(____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __get___t__builder() const;

 ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> value) ;

constexpr ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __get___4__this() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SonyPlatformAdditionalContentModel`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4688)), TypeDefinitionIndex(TypeDefinitionIndex(4125))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4688), inst: 2 })
// CS Name: SonyPlatformAdditionalContentModel`1
class CORDL_TYPE SonyPlatformAdditionalContentModel_1<T> : public ::GlobalNamespace::AdditionalContentModel {
public:
// Declarations
using _UpdateEntitlementsAsync_d__13 = ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13<T>;

using _EnsureDataValidity_d__12 = ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>;

using _IsPackBetterBuyThanLevelAsync_d__9 = ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>;

using _OpenLevelPackProductStoreAsync_d__8 = ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>;

using _OpenLevelProductStoreAsync_d__7 = ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>;

using _GetPackEntitlementStatusInternalAsync_d__6 = ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T>;

using _GetLevelEntitlementStatusInternalAsync_d__5 = ::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~SonyPlatformAdditionalContentModel_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "SonyPlatformAdditionalContentModel_1", modifiers: " const&", def_value: None }]
constexpr SonyPlatformAdditionalContentModel_1(SonyPlatformAdditionalContentModel_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SonyPlatformAdditionalContentModel_1", modifiers: "&&", def_value: None }]
constexpr SonyPlatformAdditionalContentModel_1(SonyPlatformAdditionalContentModel_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SonyPlatformAdditionalContentModel_1(void* ptr) noexcept : ::GlobalNamespace::AdditionalContentModel(ptr) {
}


  constexpr SonyPlatformAdditionalContentModel_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SonyPlatformAdditionalContentModel_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SonyPlatformAdditionalContentModel_1& operator=(SonyPlatformAdditionalContentModel_1&& o) noexcept = default;
  constexpr SonyPlatformAdditionalContentModel_1& operator=(SonyPlatformAdditionalContentModel_1 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=__get__entitlementsLabels, put=__set__entitlementsLabels))  _entitlementsLabels;

constexpr void __set__entitlementsLabels(::System::Collections::Generic::HashSet_1<::StringW> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW> __get__entitlementsLabels() const;

 ::System::Threading::SemaphoreSlim __declspec(property(get=__get__semaphoreSlim, put=__set__semaphoreSlim))  _semaphoreSlim;

constexpr void __set__semaphoreSlim(::System::Threading::SemaphoreSlim value) ;

constexpr ::System::Threading::SemaphoreSlim __get__semaphoreSlim() const;

 bool __declspec(property(get=__get__isDataValid, put=__set__isDataValid))  _isDataValid;

constexpr void __set__isDataValid(bool value) ;

constexpr bool __get__isDataValid() const;

 ::GlobalNamespace::ISonyCommerceHelper __declspec(property(get=__get__sonyCommerceHelper, put=__set__sonyCommerceHelper))  _sonyCommerceHelper;

constexpr void __set__sonyCommerceHelper(::GlobalNamespace::ISonyCommerceHelper value) ;

constexpr ::GlobalNamespace::ISonyCommerceHelper __get__sonyCommerceHelper() const;


// Methods

/// @brief Method InvalidateDataInternal addr 0x0 size 0xffffffffffffffff virtual true final false
 void InvalidateDataInternal() ;

/// @brief Method GetLevelEntitlementStatusInternalAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method GetPackEntitlementStatusInternalAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> GetPackEntitlementStatusInternalAsync(::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method OpenLevelProductStoreAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method OpenLevelPackProductStoreAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method IsPackBetterBuyThanLevelAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> IsPackBetterBuyThanLevelAsync(::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method HasLevelEntitlement addr 0x0 size 0xffffffffffffffff virtual false final false
 bool HasLevelEntitlement(::StringW levelId) ;

/// @brief Method HasLevelPackEntitlement addr 0x0 size 0xffffffffffffffff virtual false final false
 bool HasLevelPackEntitlement(::StringW levelPackId) ;

/// @brief Method EnsureDataValidity addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<bool> EnsureDataValidity(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method UpdateEntitlementsAsync addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> UpdateEntitlementsAsync(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method GetLevelProductsModel addr 0x0 size 0xffffffffffffffff virtual true final false
 T GetLevelProductsModel() ;

// Ctor Parameters []
explicit SonyPlatformAdditionalContentModel_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::SonyPlatformAdditionalContentModel_1, "", "SonyPlatformAdditionalContentModel`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12, "", "SonyPlatformAdditionalContentModel`1/<EnsureDataValidity>d__12");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5, "", "SonyPlatformAdditionalContentModel`1/<GetLevelEntitlementStatusInternalAsync>d__5");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6, "", "SonyPlatformAdditionalContentModel`1/<GetPackEntitlementStatusInternalAsync>d__6");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9, "", "SonyPlatformAdditionalContentModel`1/<IsPackBetterBuyThanLevelAsync>d__9");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8, "", "SonyPlatformAdditionalContentModel`1/<OpenLevelPackProductStoreAsync>d__8");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7, "", "SonyPlatformAdditionalContentModel`1/<OpenLevelProductStoreAsync>d__7");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::____GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13, "", "SonyPlatformAdditionalContentModel`1/<UpdateEntitlementsAsync>d__13");
