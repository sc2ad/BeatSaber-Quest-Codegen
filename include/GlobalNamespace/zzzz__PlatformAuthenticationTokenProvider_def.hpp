#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class UserInfo;
}
namespace GlobalNamespace {
class IPlatformUserModel;
}
namespace GlobalNamespace {
class XPlatformAccessTokenData;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__AuthenticationToken__Platform;
}
namespace GlobalNamespace {
struct PlatformEnvironment;
}
namespace GlobalNamespace {
struct AuthenticationToken;
}
namespace GlobalNamespace {
class IAuthenticationTokenProvider;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace GlobalNamespace {
class PlatformUserAuthTokenData;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformAuthenticationTokenProvider;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19;
}
// Type: ::<GetAuthenticationToken>d__16
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4592))
// CS Name: PlatformAuthenticationTokenProvider::<GetAuthenticationToken>d__16
struct CORDL_TYPE ____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PlatformAuthenticationTokenProvider", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken> __t__builder, ::GlobalNamespace::PlatformAuthenticationTokenProvider __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData> __u__1) noexcept;


                    constexpr ____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16(____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16 const&) = default;
                    constexpr ____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16(____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16&&) = default;
                    constexpr ____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16& operator=(____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16& operator=(____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken> __get___t__builder() const;

 ::GlobalNamespace::PlatformAuthenticationTokenProvider __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::PlatformAuthenticationTokenProvider value) ;

constexpr ::GlobalNamespace::PlatformAuthenticationTokenProvider __get___4__this() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2210cf0 size 0x3ac virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x221109c size 0x58 virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetXPlatformAccessToken>d__18
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4593))
// CS Name: PlatformAuthenticationTokenProvider::<GetXPlatformAccessToken>d__18
struct CORDL_TYPE ____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: None }, CppParam { name: "skipCache", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PlatformAuthenticationTokenProvider", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData> __t__builder, bool skipCache, ::GlobalNamespace::PlatformAuthenticationTokenProvider __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData> __u__1) noexcept;


                    constexpr ____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18(____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18 const&) = default;
                    constexpr ____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18(____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18&&) = default;
                    constexpr ____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18& operator=(____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18& operator=(____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData> __get___t__builder() const;

 bool __declspec(property(get=__get_skipCache, put=__set_skipCache))  skipCache;

constexpr void __set_skipCache(bool value) ;

constexpr bool __get_skipCache() const;

 ::GlobalNamespace::PlatformAuthenticationTokenProvider __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::PlatformAuthenticationTokenProvider value) ;

constexpr ::GlobalNamespace::PlatformAuthenticationTokenProvider __get___4__this() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x22110f4 size 0x27c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2211384 size 0x58 virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<RequestXPlatformAccessToken>d__19
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4594))
// CS Name: PlatformAuthenticationTokenProvider::<RequestXPlatformAccessToken>d__19
struct CORDL_TYPE ____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PlatformAuthenticationTokenProvider", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData> __t__builder, ::GlobalNamespace::PlatformAuthenticationTokenProvider __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData> __u__1) noexcept;


                    constexpr ____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19(____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19 const&) = default;
                    constexpr ____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19(____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19&&) = default;
                    constexpr ____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19& operator=(____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19& operator=(____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData> __get___t__builder() const;

 ::GlobalNamespace::PlatformAuthenticationTokenProvider __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::PlatformAuthenticationTokenProvider value) ;

constexpr ::GlobalNamespace::PlatformAuthenticationTokenProvider __get___4__this() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x22113dc size 0x324 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2211700 size 0x58 virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlatformAuthenticationTokenProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4595))
// CS Name: PlatformAuthenticationTokenProvider
class CORDL_TYPE PlatformAuthenticationTokenProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _RequestXPlatformAccessToken_d__19 = ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19;

using _GetXPlatformAccessToken_d__18 = ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18;

using _GetAuthenticationToken_d__16 = ::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16;

/// @brief Convert operator to ::GlobalNamespace::IAuthenticationTokenProvider
constexpr operator  ::GlobalNamespace::IAuthenticationTokenProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~PlatformAuthenticationTokenProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformAuthenticationTokenProvider", modifiers: " const&", def_value: None }]
constexpr PlatformAuthenticationTokenProvider(PlatformAuthenticationTokenProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformAuthenticationTokenProvider", modifiers: "&&", def_value: None }]
constexpr PlatformAuthenticationTokenProvider(PlatformAuthenticationTokenProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlatformAuthenticationTokenProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlatformAuthenticationTokenProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlatformAuthenticationTokenProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlatformAuthenticationTokenProvider& operator=(PlatformAuthenticationTokenProvider&& o) noexcept = default;
  constexpr PlatformAuthenticationTokenProvider& operator=(PlatformAuthenticationTokenProvider const& o) noexcept = default;
                


// Fields

/// @brief Field kXPlatformTokenRetryDelayLengthSeconds offset 0
static constexpr int32_t  kXPlatformTokenRetryDelayLengthSeconds{30};

 ::GlobalNamespace::IPlatformUserModel __declspec(property(get=__get__platformUserModel, put=__set__platformUserModel))  _platformUserModel;

constexpr void __set__platformUserModel(::GlobalNamespace::IPlatformUserModel value) ;

constexpr ::GlobalNamespace::IPlatformUserModel __get__platformUserModel() const;

 ::StringW __declspec(property(get=__get__userId, put=__set__userId))  _userId;

constexpr void __set__userId(::StringW value) ;

constexpr ::StringW __get__userId() const;

 ::StringW __declspec(property(get=__get__userName, put=__set__userName))  _userName;

constexpr void __set__userName(::StringW value) ;

constexpr ::StringW __get__userName() const;

 ::StringW __declspec(property(get=__get__hashedUserId, put=__set__hashedUserId))  _hashedUserId;

constexpr void __set__hashedUserId(::StringW value) ;

constexpr ::StringW __get__hashedUserId() const;

 ::GlobalNamespace::____GlobalNamespace__AuthenticationToken__Platform __declspec(property(get=__get__platform, put=__set__platform))  _platform;

constexpr void __set__platform(::GlobalNamespace::____GlobalNamespace__AuthenticationToken__Platform value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__AuthenticationToken__Platform __get__platform() const;

 ::GlobalNamespace::XPlatformAccessTokenData __declspec(property(get=__get__cachedXPlatformAccessToken, put=__set__cachedXPlatformAccessToken))  _cachedXPlatformAccessToken;

constexpr void __set__cachedXPlatformAccessToken(::GlobalNamespace::XPlatformAccessTokenData value) ;

constexpr ::GlobalNamespace::XPlatformAccessTokenData __get__cachedXPlatformAccessToken() const;

 ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData> __declspec(property(get=__get__xPlatformAccessTokenTask, put=__set__xPlatformAccessTokenTask))  _xPlatformAccessTokenTask;

constexpr void __set__xPlatformAccessTokenTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData> value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData> __get__xPlatformAccessTokenTask() const;

 float_t __declspec(property(get=__get__xPlatformTokenRetryDelayExpiration, put=__set__xPlatformTokenRetryDelayExpiration))  _xPlatformTokenRetryDelayExpiration;

constexpr void __set__xPlatformTokenRetryDelayExpiration(float_t value) ;

constexpr float_t __get__xPlatformTokenRetryDelayExpiration() const;


// Properties

 ::StringW __declspec(property(get=get_hashedUserId))  hashedUserId;

 ::StringW __declspec(property(get=get_userName))  userName;

 ::GlobalNamespace::____GlobalNamespace__AuthenticationToken__Platform __declspec(property(get=get_platform))  platform;


// Methods

/// @brief Method get_hashedUserId addr 0x22108d0 size 0x8 virtual true final true
 ::StringW get_hashedUserId() ;

/// @brief Method get_userName addr 0x22108d8 size 0x8 virtual true final true
 ::StringW get_userName() ;

/// @brief Method get_platform addr 0x22108e0 size 0x8 virtual true final true
 ::GlobalNamespace::____GlobalNamespace__AuthenticationToken__Platform get_platform() ;

// Ctor Parameters [CppParam { name: "platformUserModel", ty: "::GlobalNamespace::IPlatformUserModel", modifiers: "", def_value: None }, CppParam { name: "userInfo", ty: "::GlobalNamespace::UserInfo", modifiers: "", def_value: None }]
explicit PlatformAuthenticationTokenProvider(::GlobalNamespace::IPlatformUserModel platformUserModel, ::GlobalNamespace::UserInfo userInfo) ;

/// @brief Method .ctor addr 0x22108e8 size 0xac virtual false final false
 void _ctor(::GlobalNamespace::IPlatformUserModel platformUserModel, ::GlobalNamespace::UserInfo userInfo) ;

/// @brief Method GetAuthenticationToken addr 0x2210994 size 0xf8 virtual true final true
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken> GetAuthenticationToken() ;

/// @brief Method GetTokenPlatform addr 0x2210a8c size 0x60 virtual true final true
 ::GlobalNamespace::____GlobalNamespace__AuthenticationToken__Platform GetTokenPlatform(::GlobalNamespace::PlatformEnvironment tokenPlatformEnvironment) ;

/// @brief Method GetXPlatformAccessToken addr 0x2210aec size 0x108 virtual true final true
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData> GetXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken, bool skipCache) ;

/// @brief Method RequestXPlatformAccessToken addr 0x2210bf4 size 0xfc virtual false final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData> RequestXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PlatformAuthenticationTokenProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformAuthenticationTokenProvider, "", "PlatformAuthenticationTokenProvider");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16, "", "PlatformAuthenticationTokenProvider/<GetAuthenticationToken>d__16");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18, "", "PlatformAuthenticationTokenProvider/<GetXPlatformAccessToken>d__18");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19, "", "PlatformAuthenticationTokenProvider/<RequestXPlatformAccessToken>d__19");
