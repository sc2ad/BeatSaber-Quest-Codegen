#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
class Action;
}
namespace GlobalNamespace {
class AlwaysOwnedContentContainerSO;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__AdditionalContentModel__EntitlementStatus;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult;
}
namespace GlobalNamespace {
class AdditionalContentModel;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11;
}
// Type: ::EntitlementStatus
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4119))
// CS Name: AdditionalContentModel::EntitlementStatus
struct CORDL_TYPE ____GlobalNamespace__AdditionalContentModel__EntitlementStatus : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__AdditionalContentModel__EntitlementStatus(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__AdditionalContentModel__EntitlementStatus(____GlobalNamespace__AdditionalContentModel__EntitlementStatus const&) = default;
                    constexpr ____GlobalNamespace__AdditionalContentModel__EntitlementStatus(____GlobalNamespace__AdditionalContentModel__EntitlementStatus&&) = default;
                    constexpr ____GlobalNamespace__AdditionalContentModel__EntitlementStatus& operator=(____GlobalNamespace__AdditionalContentModel__EntitlementStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__AdditionalContentModel__EntitlementStatus& operator=(____GlobalNamespace__AdditionalContentModel__EntitlementStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__AdditionalContentModel__EntitlementStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__AdditionalContentModel__EntitlementStatus_Unwrapped : int32_t {
__Failed = 0,
__Owned = 1,
__NotOwned = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__AdditionalContentModel__EntitlementStatus_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__AdditionalContentModel__EntitlementStatus_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Failed offset 0
static ::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus const Failed;

/// @brief Field Owned offset 0
static ::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus const Owned;

/// @brief Field NotOwned offset 0
static ::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus const NotOwned;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OpenProductStoreResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4120))
// CS Name: AdditionalContentModel::OpenProductStoreResult
struct CORDL_TYPE ____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult(____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult const&) = default;
                    constexpr ____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult(____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult&&) = default;
                    constexpr ____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult& operator=(____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult& operator=(____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__AdditionalContentModel__OpenProductStoreResult_Unwrapped : int32_t {
__OK = 0,
__Failed = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__AdditionalContentModel__OpenProductStoreResult_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__AdditionalContentModel__OpenProductStoreResult_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OK offset 0
static ::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult const OK;

/// @brief Field Failed offset 0
static ::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult const Failed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::UpdateEntitlementsResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4121))
// CS Name: AdditionalContentModel::UpdateEntitlementsResult
struct CORDL_TYPE ____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult(____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult const&) = default;
                    constexpr ____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult(____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult&&) = default;
                    constexpr ____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult& operator=(____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult& operator=(____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult_Unwrapped : int32_t {
__OK = 0,
__Failed = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OK offset 0
static ::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult const OK;

/// @brief Field Failed offset 0
static ::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult const Failed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::IsPackBetterBuyThanLevelResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4122))
// CS Name: AdditionalContentModel::IsPackBetterBuyThanLevelResult
struct CORDL_TYPE ____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult(____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult const&) = default;
                    constexpr ____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult(____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult&&) = default;
                    constexpr ____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult& operator=(____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult& operator=(____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult_Unwrapped : int32_t {
__PackIsBetter = 0,
__LevelIsBetter = 1,
__Failed = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field PackIsBetter offset 0
static ::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult const PackIsBetter;

/// @brief Field LevelIsBetter offset 0
static ::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult const LevelIsBetter;

/// @brief Field Failed offset 0
static ::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult const Failed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetLevelEntitlementStatusAsync>d__10
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4123))
// CS Name: AdditionalContentModel::<GetLevelEntitlementStatusAsync>d__10
struct CORDL_TYPE ____GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::AdditionalContentModel", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> __t__builder, ::GlobalNamespace::AdditionalContentModel __4__this, ::StringW levelId, ::System::Threading::CancellationToken token, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> __u__1) noexcept;


                    constexpr ____GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10(____GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10 const&) = default;
                    constexpr ____GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10(____GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10&&) = default;
                    constexpr ____GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10& operator=(____GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10& operator=(____GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::GlobalNamespace::AdditionalContentModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::AdditionalContentModel value) ;

constexpr ::GlobalNamespace::AdditionalContentModel __get___4__this() const;

 ::StringW __declspec(property(get=__get_levelId, put=__set_levelId))  levelId;

constexpr void __set_levelId(::StringW value) ;

constexpr ::StringW __get_levelId() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_token, put=__set_token))  token;

constexpr void __set_token(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_token() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x20c76d0 size 0x258 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x20c794c size 0x58 virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetPackEntitlementStatusAsync>d__11
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4124))
// CS Name: AdditionalContentModel::<GetPackEntitlementStatusAsync>d__11
struct CORDL_TYPE ____GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::AdditionalContentModel", modifiers: "", def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> __t__builder, ::GlobalNamespace::AdditionalContentModel __4__this, ::StringW levelPackId, ::System::Threading::CancellationToken token, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> __u__1) noexcept;


                    constexpr ____GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11(____GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11 const&) = default;
                    constexpr ____GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11(____GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11&&) = default;
                    constexpr ____GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11& operator=(____GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11& operator=(____GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::GlobalNamespace::AdditionalContentModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::AdditionalContentModel value) ;

constexpr ::GlobalNamespace::AdditionalContentModel __get___4__this() const;

 ::StringW __declspec(property(get=__get_levelPackId, put=__set_levelPackId))  levelPackId;

constexpr void __set_levelPackId(::StringW value) ;

constexpr ::StringW __get_levelPackId() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_token, put=__set_token))  token;

constexpr void __set_token(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_token() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x20c79a4 size 0x258 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x20c7c20 size 0x58 virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AdditionalContentModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4125))
// CS Name: AdditionalContentModel
class CORDL_TYPE AdditionalContentModel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _GetPackEntitlementStatusAsync_d__11 = ::GlobalNamespace::____GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11;

using _GetLevelEntitlementStatusAsync_d__10 = ::GlobalNamespace::____GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10;

using IsPackBetterBuyThanLevelResult = ::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult;

using UpdateEntitlementsResult = ::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult;

using OpenProductStoreResult = ::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult;

using EntitlementStatus = ::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~AdditionalContentModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "AdditionalContentModel", modifiers: " const&", def_value: None }]
constexpr AdditionalContentModel(AdditionalContentModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AdditionalContentModel", modifiers: "&&", def_value: None }]
constexpr AdditionalContentModel(AdditionalContentModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AdditionalContentModel(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AdditionalContentModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AdditionalContentModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AdditionalContentModel& operator=(AdditionalContentModel&& o) noexcept = default;
  constexpr AdditionalContentModel& operator=(AdditionalContentModel const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::AlwaysOwnedContentContainerSO __declspec(property(get=__get__alwaysOwnedContentContainer, put=__set__alwaysOwnedContentContainer))  _alwaysOwnedContentContainer;

constexpr void __set__alwaysOwnedContentContainer(::GlobalNamespace::AlwaysOwnedContentContainerSO value) ;

constexpr ::GlobalNamespace::AlwaysOwnedContentContainerSO __get__alwaysOwnedContentContainer() const;

 ::System::Action __declspec(property(get=__get_didInvalidateDataEvent, put=__set_didInvalidateDataEvent))  didInvalidateDataEvent;

constexpr void __set_didInvalidateDataEvent(::System::Action value) ;

constexpr ::System::Action __get_didInvalidateDataEvent() const;


// Methods

/// @brief Method add_didInvalidateDataEvent addr 0x20c7314 size 0x9c virtual false final false
 void add_didInvalidateDataEvent(::System::Action value) ;

/// @brief Method remove_didInvalidateDataEvent addr 0x20c73b0 size 0x9c virtual false final false
 void remove_didInvalidateDataEvent(::System::Action value) ;

/// @brief Method OnApplicationFocus addr 0x20c744c size 0x3c virtual false final false
 void OnApplicationFocus(bool hasFocus) ;

/// @brief Method InvalidateData addr 0x20c7488 size 0x38 virtual false final false
 void InvalidateData() ;

/// @brief Method GetLevelEntitlementStatusAsync addr 0x20c74c0 size 0x104 virtual false final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> GetLevelEntitlementStatusAsync(::StringW levelId, ::System::Threading::CancellationToken token) ;

/// @brief Method GetPackEntitlementStatusAsync addr 0x20c75c4 size 0x104 virtual false final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> GetPackEntitlementStatusAsync(::StringW levelPackId, ::System::Threading::CancellationToken token) ;

/// @brief Method InvalidateDataInternal addr 0x0 size 0xffffffffffffffff virtual true final false
 void InvalidateDataInternal() ;

/// @brief Method GetLevelEntitlementStatusInternalAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken token) ;

/// @brief Method GetPackEntitlementStatusInternalAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> GetPackEntitlementStatusInternalAsync(::StringW levelPackId, ::System::Threading::CancellationToken token) ;

/// @brief Method IsPackBetterBuyThanLevelAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> IsPackBetterBuyThanLevelAsync(::StringW levelPackId, ::System::Threading::CancellationToken token) ;

/// @brief Method OpenLevelProductStoreAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken token) ;

/// @brief Method OpenLevelPackProductStoreAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken token) ;

// Ctor Parameters []
explicit AdditionalContentModel() ;

/// @brief Method .ctor addr 0x20c76c8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus, "", "AdditionalContentModel/EntitlementStatus");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult, "", "AdditionalContentModel/IsPackBetterBuyThanLevelResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__OpenProductStoreResult, "", "AdditionalContentModel/OpenProductStoreResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult, "", "AdditionalContentModel/UpdateEntitlementsResult");
NEED_NO_BOX(::GlobalNamespace::AdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AdditionalContentModel, "", "AdditionalContentModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10, "", "AdditionalContentModel/<GetLevelEntitlementStatusAsync>d__10");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11, "", "AdditionalContentModel/<GetPackEntitlementStatusAsync>d__11");
