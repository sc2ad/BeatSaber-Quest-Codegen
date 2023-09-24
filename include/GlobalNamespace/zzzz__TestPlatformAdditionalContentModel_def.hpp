#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__AdditionalContentModel__EntitlementStatus;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
struct GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8;
}
namespace GlobalNamespace {
struct GlobalNamespace__AdditionalContentModel__OpenProductStoreResult;
}
namespace GlobalNamespace {
struct GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10;
}
namespace GlobalNamespace {
struct GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult;
}
namespace GlobalNamespace {
class GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement;
}
namespace GlobalNamespace {
struct GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5;
}
namespace GlobalNamespace {
struct GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement;
}
namespace GlobalNamespace {
class TestPlatformAdditionalContentModel;
}
namespace GlobalNamespace {
struct GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5;
}
namespace GlobalNamespace {
struct GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6;
}
namespace GlobalNamespace {
struct GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7;
}
namespace GlobalNamespace {
struct GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10;
}
namespace GlobalNamespace {
struct GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8;
}
// Type: ::Entitlement
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4146))
// CS Name: TestPlatformAdditionalContentModel::Entitlement
class CORDL_TYPE GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement(GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement(GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement& operator=(GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement&& o) noexcept = default;
  constexpr GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement& operator=(GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(::StringW value) ;

constexpr ::StringW __get_id() const;

 GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus __declspec(property(get=__get_status, put=__set_status))  status;

constexpr void __set_status(GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus value) ;

constexpr GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus __get_status() const;


// Methods

static GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement New_ctor() ;

/// @brief Method .ctor addr 0x21b8378 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetLevelEntitlementStatusInternalAsync>d__5
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4147))
// CS Name: TestPlatformAdditionalContentModel::<GetLevelEntitlementStatusInternalAsync>d__5
struct CORDL_TYPE GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "token", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::TestPlatformAdditionalContentModel", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter", modifiers: "", def_value: None }]
constexpr GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __t__builder, System::Threading::CancellationToken token, GlobalNamespace::TestPlatformAdditionalContentModel __4__this, ::StringW levelId, System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter __u__1) noexcept;


                    constexpr GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5(GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5 const&) = default;
                    constexpr GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5(GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5&&) = default;
                    constexpr GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5& operator=(GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5& operator=(GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 System::Threading::CancellationToken __declspec(property(get=__get_token, put=__set_token))  token;

constexpr void __set_token(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_token() const;

 GlobalNamespace::TestPlatformAdditionalContentModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::TestPlatformAdditionalContentModel value) ;

constexpr GlobalNamespace::TestPlatformAdditionalContentModel __get___4__this() const;

 ::StringW __declspec(property(get=__get_levelId, put=__set_levelId))  levelId;

constexpr void __set_levelId(::StringW value) ;

constexpr ::StringW __get_levelId() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21b8380 size 0x260 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21b85e0 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetPackEntitlementStatusInternalAsync>d__6
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4148))
// CS Name: TestPlatformAdditionalContentModel::<GetPackEntitlementStatusInternalAsync>d__6
struct CORDL_TYPE GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "token", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::TestPlatformAdditionalContentModel", modifiers: "", def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter", modifiers: "", def_value: None }]
constexpr GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __t__builder, System::Threading::CancellationToken token, GlobalNamespace::TestPlatformAdditionalContentModel __4__this, ::StringW levelPackId, System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter __u__1) noexcept;


                    constexpr GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6(GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6 const&) = default;
                    constexpr GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6(GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6&&) = default;
                    constexpr GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6& operator=(GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6& operator=(GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 System::Threading::CancellationToken __declspec(property(get=__get_token, put=__set_token))  token;

constexpr void __set_token(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_token() const;

 GlobalNamespace::TestPlatformAdditionalContentModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::TestPlatformAdditionalContentModel value) ;

constexpr GlobalNamespace::TestPlatformAdditionalContentModel __get___4__this() const;

 ::StringW __declspec(property(get=__get_levelPackId, put=__set_levelPackId))  levelPackId;

constexpr void __set_levelPackId(::StringW value) ;

constexpr ::StringW __get_levelPackId() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21b8638 size 0x260 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21b8898 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<IsPackBetterBuyThanLevelAsync>d__7
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4149))
// CS Name: TestPlatformAdditionalContentModel::<IsPackBetterBuyThanLevelAsync>d__7
struct CORDL_TYPE GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: None }, CppParam { name: "token", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::TestPlatformAdditionalContentModel", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter", modifiers: "", def_value: None }]
constexpr GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __t__builder, System::Threading::CancellationToken token, GlobalNamespace::TestPlatformAdditionalContentModel __4__this, System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter __u__1) noexcept;


                    constexpr GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7(GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7 const&) = default;
                    constexpr GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7(GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7&&) = default;
                    constexpr GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7& operator=(GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7& operator=(GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 System::Threading::CancellationToken __declspec(property(get=__get_token, put=__set_token))  token;

constexpr void __set_token(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_token() const;

 GlobalNamespace::TestPlatformAdditionalContentModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::TestPlatformAdditionalContentModel value) ;

constexpr GlobalNamespace::TestPlatformAdditionalContentModel __get___4__this() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21b88f0 size 0x1e4 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21b8ad4 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<OpenLevelProductStoreAsync>d__8
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4150))
// CS Name: TestPlatformAdditionalContentModel::<OpenLevelProductStoreAsync>d__8
struct CORDL_TYPE GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "token", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::TestPlatformAdditionalContentModel", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter", modifiers: "", def_value: None }]
constexpr GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __t__builder, System::Threading::CancellationToken token, ::StringW levelId, GlobalNamespace::TestPlatformAdditionalContentModel __4__this, System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter __u__1) noexcept;


                    constexpr GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8(GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8 const&) = default;
                    constexpr GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8(GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8&&) = default;
                    constexpr GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8& operator=(GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8& operator=(GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 System::Threading::CancellationToken __declspec(property(get=__get_token, put=__set_token))  token;

constexpr void __set_token(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_token() const;

 ::StringW __declspec(property(get=__get_levelId, put=__set_levelId))  levelId;

constexpr void __set_levelId(::StringW value) ;

constexpr ::StringW __get_levelId() const;

 GlobalNamespace::TestPlatformAdditionalContentModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::TestPlatformAdditionalContentModel value) ;

constexpr GlobalNamespace::TestPlatformAdditionalContentModel __get___4__this() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21b8b2c size 0x25c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21b8d88 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<OpenLevelPackProductStoreAsync>d__10
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4151))
// CS Name: TestPlatformAdditionalContentModel::<OpenLevelPackProductStoreAsync>d__10
struct CORDL_TYPE GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "token", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter", modifiers: "", def_value: None }]
constexpr GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __t__builder, System::Threading::CancellationToken token, ::StringW levelPackId, System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter __u__1) noexcept;


                    constexpr GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10(GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10 const&) = default;
                    constexpr GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10(GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10&&) = default;
                    constexpr GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10& operator=(GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10& operator=(GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 System::Threading::CancellationToken __declspec(property(get=__get_token, put=__set_token))  token;

constexpr void __set_token(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_token() const;

 ::StringW __declspec(property(get=__get_levelPackId, put=__set_levelPackId))  levelPackId;

constexpr void __set_levelPackId(::StringW value) ;

constexpr ::StringW __get_levelPackId() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21b8de0 size 0x22c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21b900c size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TestPlatformAdditionalContentModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4125))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4152))
// CS Name: TestPlatformAdditionalContentModel
class CORDL_TYPE TestPlatformAdditionalContentModel : public GlobalNamespace::AdditionalContentModel {
public:
// Declarations
using _OpenLevelPackProductStoreAsync_d__10 = GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10;

using _OpenLevelProductStoreAsync_d__8 = GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8;

using _IsPackBetterBuyThanLevelAsync_d__7 = GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7;

using _GetPackEntitlementStatusInternalAsync_d__6 = GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6;

using _GetLevelEntitlementStatusInternalAsync_d__5 = GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5;

using Entitlement = GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~TestPlatformAdditionalContentModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "TestPlatformAdditionalContentModel", modifiers: " const&", def_value: None }]
constexpr TestPlatformAdditionalContentModel(TestPlatformAdditionalContentModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TestPlatformAdditionalContentModel", modifiers: "&&", def_value: None }]
constexpr TestPlatformAdditionalContentModel(TestPlatformAdditionalContentModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TestPlatformAdditionalContentModel(void* ptr) noexcept : GlobalNamespace::AdditionalContentModel(ptr) {
}


  constexpr TestPlatformAdditionalContentModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TestPlatformAdditionalContentModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TestPlatformAdditionalContentModel& operator=(TestPlatformAdditionalContentModel&& o) noexcept = default;
  constexpr TestPlatformAdditionalContentModel& operator=(TestPlatformAdditionalContentModel const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement> __declspec(property(get=__get__levelsEntitlements, put=__set__levelsEntitlements))  _levelsEntitlements;

constexpr void __set__levelsEntitlements(::ArrayW<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement> __get__levelsEntitlements() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement> __declspec(property(get=__get__levelPacksEntitlements, put=__set__levelPacksEntitlements))  _levelPacksEntitlements;

constexpr void __set__levelPacksEntitlements(::ArrayW<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement> __get__levelPacksEntitlements() const;

 bool __declspec(property(get=__get__packBetterBuyThanLevel, put=__set__packBetterBuyThanLevel))  _packBetterBuyThanLevel;

constexpr void __set__packBetterBuyThanLevel(bool value) ;

constexpr bool __get__packBetterBuyThanLevel() const;


// Methods

/// @brief Method InvalidateDataInternal addr 0x20ccbfc size 0x4 virtual true final false
 void InvalidateDataInternal() ;

/// @brief Method GetLevelEntitlementStatusInternalAsync addr 0x20ccc00 size 0x104 virtual true final false
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GetLevelEntitlementStatusInternalAsync(::StringW levelId, System::Threading::CancellationToken token) ;

/// @brief Method GetPackEntitlementStatusInternalAsync addr 0x20ccd04 size 0x104 virtual true final false
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GetPackEntitlementStatusInternalAsync(::StringW levelPackId, System::Threading::CancellationToken token) ;

/// @brief Method IsPackBetterBuyThanLevelAsync addr 0x20cce08 size 0xfc virtual true final false
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> IsPackBetterBuyThanLevelAsync(::StringW levelPackId, System::Threading::CancellationToken token) ;

/// @brief Method OpenLevelProductStoreAsync addr 0x20ccf04 size 0x104 virtual true final false
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> OpenLevelProductStoreAsync(::StringW levelId, System::Threading::CancellationToken token) ;

/// @brief Method BuyLevel addr 0x20cd008 size 0x1a0 virtual false final false
 void BuyLevel(::StringW levelId) ;

/// @brief Method OpenLevelPackProductStoreAsync addr 0x20cd1a8 size 0xfc virtual true final false
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> OpenLevelPackProductStoreAsync(::StringW levelPackId, System::Threading::CancellationToken token) ;

static GlobalNamespace::TestPlatformAdditionalContentModel New_ctor() ;

/// @brief Method .ctor addr 0x20cd2a4 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel__Entitlement, "", "TestPlatformAdditionalContentModel/Entitlement");
NEED_NO_BOX(GlobalNamespace::TestPlatformAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestPlatformAdditionalContentModel, "", "TestPlatformAdditionalContentModel");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5, "", "TestPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__5");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6, "", "TestPlatformAdditionalContentModel/<GetPackEntitlementStatusInternalAsync>d__6");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7, "", "TestPlatformAdditionalContentModel/<IsPackBetterBuyThanLevelAsync>d__7");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10, "", "TestPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__10");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, "", "TestPlatformAdditionalContentModel/<OpenLevelProductStoreAsync>d__8");
