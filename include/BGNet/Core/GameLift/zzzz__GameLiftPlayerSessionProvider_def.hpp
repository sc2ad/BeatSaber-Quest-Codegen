#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace GlobalNamespace {
class RollingAverage;
}
namespace BGNet::Core::GameLift {
class IGameLiftPlayerSessionProvider;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class INetworkConfig;
}
namespace BGNet::Core::GameLift {
struct BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15;
}
namespace BGNet::Core::GameLift {
struct BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17;
}
namespace GlobalNamespace {
class XPlatformAuthFeatureFlag;
}
namespace BGNet::Core::GameLift {
struct BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14;
}
namespace BGNet::Core::GameLift {
class PlayerSessionInfo;
}
namespace BGNet::Core::GameLift {
class BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
class XPlatformAccessTokenData;
}
namespace GlobalNamespace {
class IAuthenticationTokenProvider;
}
namespace GlobalNamespace {
class GraphAPIClient;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class IPollable;
}
namespace GlobalNamespace {
struct GlobalNamespace__AuthenticationToken__Platform;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace BGNet::Core::GameLift {
struct GetMultiplayerInstanceResponse;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace GlobalNamespace {
struct AuthenticationToken;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace BGNet::Core::GameLift {
class BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c;
}
namespace BGNet::Core::GameLift {
class GameLiftPlayerSessionProvider;
}
namespace BGNet::Core::GameLift {
struct BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14;
}
namespace BGNet::Core::GameLift {
struct BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15;
}
namespace BGNet::Core::GameLift {
struct BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17;
}
// Type: ::<GetGameLiftPlayerSessionInfo>d__14
namespace BGNet::Core::GameLift {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12944))
// CS Name: BGNet.Core.GameLift.GameLiftPlayerSessionProvider::<GetGameLiftPlayerSessionInfo>d__14
struct CORDL_TYPE BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BGNet::Core::GameLift::PlayerSessionInfo>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "BGNet::Core::GameLift::GameLiftPlayerSessionProvider", modifiers: "", def_value: None }, CppParam { name: "authenticationTokenProvider", ty: "GlobalNamespace::IAuthenticationTokenProvider", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelSelectionMask", ty: "GlobalNamespace::BeatmapLevelSelectionMask", modifiers: "", def_value: None }, CppParam { name: "gameplayServerConfiguration", ty: "GlobalNamespace::GameplayServerConfiguration", modifiers: "", def_value: None }, CppParam { name: "secret", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "code", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_stopwatch_5__2", ty: "System::Diagnostics::Stopwatch", modifiers: "", def_value: None }, CppParam { name: "_ticketId_5__3", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_placementId_5__4", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_xPlatformAccessToken_5__5", ty: "GlobalNamespace::XPlatformAccessTokenData", modifiers: "", def_value: None }, CppParam { name: "_graphAPIAccessToken_5__6", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_userPlatform_5__7", ty: "System::Nullable_1<GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform>", modifiers: "", def_value: None }, CppParam { name: "_singleUsePlatformAuthToken_5__8", ty: "System::Nullable_1<GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: None }, CppParam { name: "_numAttempts_5__9", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: None }, CppParam { name: "_getMatchmakingInstanceResponse_5__10", ty: "BGNet::Core::GameLift::GetMultiplayerInstanceResponse", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap10", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>", modifiers: "", def_value: None }, CppParam { name: "__u__4", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BGNet::Core::GameLift::PlayerSessionInfo> __t__builder, BGNet::Core::GameLift::GameLiftPlayerSessionProvider __4__this, GlobalNamespace::IAuthenticationTokenProvider authenticationTokenProvider, System::Threading::CancellationToken cancellationToken, ::StringW userId, GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration, ::StringW secret, ::StringW code, System::Diagnostics::Stopwatch _stopwatch_5__2, ::StringW _ticketId_5__3, ::StringW _placementId_5__4, GlobalNamespace::XPlatformAccessTokenData _xPlatformAccessToken_5__5, ::StringW _graphAPIAccessToken_5__6, System::Nullable_1<GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform> _userPlatform_5__7, System::Nullable_1<GlobalNamespace::AuthenticationToken> _singleUsePlatformAuthToken_5__8, int32_t _numAttempts_5__9, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::XPlatformAccessTokenData> __u__1, BGNet::Core::GameLift::GetMultiplayerInstanceResponse _getMatchmakingInstanceResponse_5__10, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken> __u__2, int32_t __7__wrap10, System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __u__3, System::Runtime::CompilerServices::TaskAwaiter __u__4) noexcept;


                    constexpr BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14(BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14 const&) = default;
                    constexpr BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14(BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14&&) = default;
                    constexpr BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14& operator=(BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14& operator=(BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x140};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BGNet::Core::GameLift::PlayerSessionInfo> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BGNet::Core::GameLift::PlayerSessionInfo> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BGNet::Core::GameLift::PlayerSessionInfo> __get___t__builder() const;

 BGNet::Core::GameLift::GameLiftPlayerSessionProvider __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::GameLift::GameLiftPlayerSessionProvider value) ;

constexpr BGNet::Core::GameLift::GameLiftPlayerSessionProvider __get___4__this() const;

 GlobalNamespace::IAuthenticationTokenProvider __declspec(property(get=__get_authenticationTokenProvider, put=__set_authenticationTokenProvider))  authenticationTokenProvider;

constexpr void __set_authenticationTokenProvider(GlobalNamespace::IAuthenticationTokenProvider value) ;

constexpr GlobalNamespace::IAuthenticationTokenProvider __get_authenticationTokenProvider() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 ::StringW __declspec(property(get=__get_userId, put=__set_userId))  userId;

constexpr void __set_userId(::StringW value) ;

constexpr ::StringW __get_userId() const;

 GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=__get_beatmapLevelSelectionMask, put=__set_beatmapLevelSelectionMask))  beatmapLevelSelectionMask;

constexpr void __set_beatmapLevelSelectionMask(GlobalNamespace::BeatmapLevelSelectionMask value) ;

constexpr GlobalNamespace::BeatmapLevelSelectionMask __get_beatmapLevelSelectionMask() const;

 GlobalNamespace::GameplayServerConfiguration __declspec(property(get=__get_gameplayServerConfiguration, put=__set_gameplayServerConfiguration))  gameplayServerConfiguration;

constexpr void __set_gameplayServerConfiguration(GlobalNamespace::GameplayServerConfiguration value) ;

constexpr GlobalNamespace::GameplayServerConfiguration __get_gameplayServerConfiguration() const;

 ::StringW __declspec(property(get=__get_secret, put=__set_secret))  secret;

constexpr void __set_secret(::StringW value) ;

constexpr ::StringW __get_secret() const;

 ::StringW __declspec(property(get=__get_code, put=__set_code))  code;

constexpr void __set_code(::StringW value) ;

constexpr ::StringW __get_code() const;

 System::Diagnostics::Stopwatch __declspec(property(get=__get__stopwatch_5__2, put=__set__stopwatch_5__2))  _stopwatch_5__2;

constexpr void __set__stopwatch_5__2(System::Diagnostics::Stopwatch value) ;

constexpr System::Diagnostics::Stopwatch __get__stopwatch_5__2() const;

 ::StringW __declspec(property(get=__get__ticketId_5__3, put=__set__ticketId_5__3))  _ticketId_5__3;

constexpr void __set__ticketId_5__3(::StringW value) ;

constexpr ::StringW __get__ticketId_5__3() const;

 ::StringW __declspec(property(get=__get__placementId_5__4, put=__set__placementId_5__4))  _placementId_5__4;

constexpr void __set__placementId_5__4(::StringW value) ;

constexpr ::StringW __get__placementId_5__4() const;

 GlobalNamespace::XPlatformAccessTokenData __declspec(property(get=__get__xPlatformAccessToken_5__5, put=__set__xPlatformAccessToken_5__5))  _xPlatformAccessToken_5__5;

constexpr void __set__xPlatformAccessToken_5__5(GlobalNamespace::XPlatformAccessTokenData value) ;

constexpr GlobalNamespace::XPlatformAccessTokenData __get__xPlatformAccessToken_5__5() const;

 ::StringW __declspec(property(get=__get__graphAPIAccessToken_5__6, put=__set__graphAPIAccessToken_5__6))  _graphAPIAccessToken_5__6;

constexpr void __set__graphAPIAccessToken_5__6(::StringW value) ;

constexpr ::StringW __get__graphAPIAccessToken_5__6() const;

 System::Nullable_1<GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform> __declspec(property(get=__get__userPlatform_5__7, put=__set__userPlatform_5__7))  _userPlatform_5__7;

constexpr void __set__userPlatform_5__7(System::Nullable_1<GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform> value) ;

constexpr System::Nullable_1<GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform> __get__userPlatform_5__7() const;

 System::Nullable_1<GlobalNamespace::AuthenticationToken> __declspec(property(get=__get__singleUsePlatformAuthToken_5__8, put=__set__singleUsePlatformAuthToken_5__8))  _singleUsePlatformAuthToken_5__8;

constexpr void __set__singleUsePlatformAuthToken_5__8(System::Nullable_1<GlobalNamespace::AuthenticationToken> value) ;

constexpr System::Nullable_1<GlobalNamespace::AuthenticationToken> __get__singleUsePlatformAuthToken_5__8() const;

 int32_t __declspec(property(get=__get__numAttempts_5__9, put=__set__numAttempts_5__9))  _numAttempts_5__9;

constexpr void __set__numAttempts_5__9(int32_t value) ;

constexpr int32_t __get__numAttempts_5__9() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::XPlatformAccessTokenData> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::XPlatformAccessTokenData> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::XPlatformAccessTokenData> __get___u__1() const;

 BGNet::Core::GameLift::GetMultiplayerInstanceResponse __declspec(property(get=__get__getMatchmakingInstanceResponse_5__10, put=__set__getMatchmakingInstanceResponse_5__10))  _getMatchmakingInstanceResponse_5__10;

constexpr void __set__getMatchmakingInstanceResponse_5__10(BGNet::Core::GameLift::GetMultiplayerInstanceResponse value) ;

constexpr BGNet::Core::GameLift::GetMultiplayerInstanceResponse __get__getMatchmakingInstanceResponse_5__10() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken> __get___u__2() const;

 int32_t __declspec(property(get=__get___7__wrap10, put=__set___7__wrap10))  __7__wrap10;

constexpr void __set___7__wrap10(int32_t value) ;

constexpr int32_t __get___7__wrap10() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __declspec(property(get=__get___u__3, put=__set___u__3))  __u__3;

constexpr void __set___u__3(System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __get___u__3() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__4, put=__set___u__4))  __u__4;

constexpr void __set___u__4(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__4() const;


// Methods

/// @brief Method MoveNext addr 0xdd1df8 size 0x16f0 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xdd3540 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::GameLift
// Type: ::<PingAllAwsGameLiftRegions>d__15
namespace BGNet::Core::GameLift {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12945))
// CS Name: BGNet.Core.GameLift.GameLiftPlayerSessionProvider::<PingAllAwsGameLiftRegions>d__15
struct CORDL_TYPE BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "BGNet::Core::GameLift::GameLiftPlayerSessionProvider", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<System::ValueTuple_2<::StringW,int64_t>>>", modifiers: "", def_value: None }]
constexpr BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, BGNet::Core::GameLift::GameLiftPlayerSessionProvider __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<System::ValueTuple_2<::StringW,int64_t>>> __u__1) noexcept;


                    constexpr BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15(BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15 const&) = default;
                    constexpr BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15(BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15&&) = default;
                    constexpr BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15& operator=(BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15& operator=(BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncVoidMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder __get___t__builder() const;

 BGNet::Core::GameLift::GameLiftPlayerSessionProvider __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::GameLift::GameLiftPlayerSessionProvider value) ;

constexpr BGNet::Core::GameLift::GameLiftPlayerSessionProvider __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<System::ValueTuple_2<::StringW,int64_t>>> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<System::ValueTuple_2<::StringW,int64_t>>> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<System::ValueTuple_2<::StringW,int64_t>>> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0xdd3598 size 0x368 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xdd3900 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::GameLift
// Type: ::<>c
namespace BGNet::Core::GameLift {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12946))
// CS Name: BGNet.Core.GameLift.GameLiftPlayerSessionProvider::<>c
class CORDL_TYPE BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c", modifiers: " const&", def_value: None }]
constexpr BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c(BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c", modifiers: "&&", def_value: None }]
constexpr BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c(BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c& operator=(BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c&& o) noexcept = default;
  constexpr BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c& operator=(BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c const& o) noexcept = default;
                


// Fields

static BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c value) ;

static BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c __get___9() ;

static System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>,bool> __declspec(property(get=__get___9__16_0, put=__set___9__16_0))  __9__16_0;

static void __set___9__16_0(System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>,bool> value) ;

static System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>,bool> __get___9__16_0() ;

static System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>,::StringW> __declspec(property(get=__get___9__16_1, put=__set___9__16_1))  __9__16_1;

static void __set___9__16_1(System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>,::StringW> value) ;

static System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>,::StringW> __get___9__16_1() ;

static System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>,int64_t> __declspec(property(get=__get___9__16_2, put=__set___9__16_2))  __9__16_2;

static void __set___9__16_2(System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>,int64_t> value) ;

static System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>,int64_t> __get___9__16_2() ;


// Methods

static BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c New_ctor() ;

/// @brief Method .ctor addr 0xdd3970 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetAverageLatencies>b__16_0 addr 0xdd3978 size 0x48 virtual false final false
 bool _GetAverageLatencies_b__16_0(System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage> kvp) ;

/// @brief Method <GetAverageLatencies>b__16_1 addr 0xdd39c0 size 0x3c virtual false final false
 ::StringW _GetAverageLatencies_b__16_1(System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage> kvp) ;

/// @brief Method <GetAverageLatencies>b__16_2 addr 0xdd39fc size 0x5c virtual false final false
 int64_t _GetAverageLatencies_b__16_2(System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage> kvp) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::GameLift
// Type: ::<PingRegionAsync>d__17
namespace BGNet::Core::GameLift {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12947))
// CS Name: BGNet.Core.GameLift.GameLiftPlayerSessionProvider::<PingRegionAsync>d__17
struct CORDL_TYPE BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_2<::StringW,int64_t>>", modifiers: "", def_value: None }, CppParam { name: "awsRegion", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>", modifiers: "", def_value: None }]
constexpr BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_2<::StringW,int64_t>> __t__builder, ::StringW awsRegion, System::Runtime::CompilerServices::TaskAwaiter_1<int64_t> __u__1) noexcept;


                    constexpr BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17(BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17 const&) = default;
                    constexpr BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17(BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17&&) = default;
                    constexpr BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17& operator=(BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17& operator=(BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_2<::StringW,int64_t>> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_2<::StringW,int64_t>> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_2<::StringW,int64_t>> __get___t__builder() const;

 ::StringW __declspec(property(get=__get_awsRegion, put=__set_awsRegion))  awsRegion;

constexpr void __set_awsRegion(::StringW value) ;

constexpr ::StringW __get_awsRegion() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<int64_t> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<int64_t> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<int64_t> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0xdd3a58 size 0x2ec virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xdd3d44 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::GameLift
// Type: BGNet.Core.GameLift::GameLiftPlayerSessionProvider
namespace BGNet::Core::GameLift {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12948))
// CS Name: BGNet.Core.GameLift.GameLiftPlayerSessionProvider
class CORDL_TYPE GameLiftPlayerSessionProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _PingRegionAsync_d__17 = BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17;

using __c = BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c;

using _PingAllAwsGameLiftRegions_d__15 = BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15;

using _GetGameLiftPlayerSessionInfo_d__14 = BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14;

/// @brief Convert operator to BGNet::Core::GameLift::IGameLiftPlayerSessionProvider
constexpr operator  BGNet::Core::GameLift::IGameLiftPlayerSessionProvider() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPollable
constexpr operator  GlobalNamespace::IPollable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GameLiftPlayerSessionProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameLiftPlayerSessionProvider", modifiers: " const&", def_value: None }]
constexpr GameLiftPlayerSessionProvider(GameLiftPlayerSessionProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameLiftPlayerSessionProvider", modifiers: "&&", def_value: None }]
constexpr GameLiftPlayerSessionProvider(GameLiftPlayerSessionProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameLiftPlayerSessionProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GameLiftPlayerSessionProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameLiftPlayerSessionProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameLiftPlayerSessionProvider& operator=(GameLiftPlayerSessionProvider&& o) noexcept = default;
  constexpr GameLiftPlayerSessionProvider& operator=(GameLiftPlayerSessionProvider const& o) noexcept = default;
                


// Fields

/// @brief Field kMatchmakingTimeoutMs offset 0
static constexpr int32_t  kMatchmakingTimeoutMs{120000};

/// @brief Field kPingFrequencyMs offset 0
static constexpr int32_t  kPingFrequencyMs{3000};

/// @brief Field kMaxPingCount offset 0
static constexpr int32_t  kMaxPingCount{10};

/// @brief Field kGetMatchmakingInstancePath offset 0
static constexpr ::ConstString  kGetMatchmakingInstancePath{u"beat_saber_get_multiplayer_instance"};

/// @brief Field kCancelMatchmakingTicketPath offset 0
static constexpr ::ConstString  kCancelMatchmakingTicketPath{u"beat_saber_multiplayer_cancel_matchmaking_ticket"};

static ::ArrayW<::StringW> __declspec(property(get=__get__awsGameLiftRegions, put=__set__awsGameLiftRegions))  _awsGameLiftRegions;

static void __set__awsGameLiftRegions(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get__awsGameLiftRegions() ;

 GlobalNamespace::INetworkConfig __declspec(property(get=__get__networkConfig, put=__set__networkConfig))  _networkConfig;

constexpr void __set__networkConfig(GlobalNamespace::INetworkConfig value) ;

constexpr GlobalNamespace::INetworkConfig __get__networkConfig() const;

 GlobalNamespace::GraphAPIClient __declspec(property(get=__get__graphAPIClient, put=__set__graphAPIClient))  _graphAPIClient;

constexpr void __set__graphAPIClient(GlobalNamespace::GraphAPIClient value) ;

constexpr GlobalNamespace::GraphAPIClient __get__graphAPIClient() const;

 GlobalNamespace::XPlatformAuthFeatureFlag __declspec(property(get=__get__xPlatformAuthFeatureFlag, put=__set__xPlatformAuthFeatureFlag))  _xPlatformAuthFeatureFlag;

constexpr void __set__xPlatformAuthFeatureFlag(GlobalNamespace::XPlatformAuthFeatureFlag value) ;

constexpr GlobalNamespace::XPlatformAuthFeatureFlag __get__xPlatformAuthFeatureFlag() const;

 System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::RollingAverage> __declspec(property(get=__get__pingAverages, put=__set__pingAverages))  _pingAverages;

constexpr void __set__pingAverages(System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::RollingAverage> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::RollingAverage> __get__pingAverages() const;

 int32_t __declspec(property(get=__get__pingCount, put=__set__pingCount))  _pingCount;

constexpr void __set__pingCount(int32_t value) ;

constexpr int32_t __get__pingCount() const;

 int64_t __declspec(property(get=__get__lastPingTime, put=__set__lastPingTime))  _lastPingTime;

constexpr void __set__lastPingTime(int64_t value) ;

constexpr int64_t __get__lastPingTime() const;


// Methods

static BGNet::Core::GameLift::GameLiftPlayerSessionProvider New_ctor(GlobalNamespace::INetworkConfig networkConfig, GlobalNamespace::XPlatformAuthFeatureFlag xPlatformAuthFeatureFlag) ;

/// @brief Method .ctor addr 0xdd1090 size 0x1a4 virtual false final false
 void _ctor(GlobalNamespace::INetworkConfig networkConfig, GlobalNamespace::XPlatformAuthFeatureFlag xPlatformAuthFeatureFlag) ;

/// @brief Method PollUpdate addr 0xdd1234 size 0xc0 virtual true final true
 void PollUpdate() ;

/// @brief Method GetGameLiftPlayerSessionInfo addr 0xdd1388 size 0x158 virtual true final true
 System::Threading::Tasks::Task_1<BGNet::Core::GameLift::PlayerSessionInfo> GetGameLiftPlayerSessionInfo(GlobalNamespace::IAuthenticationTokenProvider authenticationTokenProvider, ::StringW userId, GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration, ::StringW secret, ::StringW code, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method PingAllAwsGameLiftRegions addr 0xdd12f4 size 0x94 virtual false final false
 void PingAllAwsGameLiftRegions() ;

/// @brief Method GetAverageLatencies addr 0xdd14e0 size 0x24c virtual false final false
 System::Collections::Generic::Dictionary_2<::StringW,int64_t> GetAverageLatencies() ;

/// @brief Method PingRegionAsync addr 0xdd172c size 0xf0 virtual false final false
 System::Threading::Tasks::Task_1<System::ValueTuple_2<::StringW,int64_t>> PingRegionAsync(::StringW awsRegion) ;

/// @brief Method GetAwsGameLiftRegionEndpoint addr 0xdd181c size 0x6c virtual false final false
static ::StringW GetAwsGameLiftRegionEndpoint(::StringW awsRegion) ;

/// @brief Method GetXPlatformAccessToken addr 0xdd1888 size 0x16c virtual false final false
 System::Threading::Tasks::Task_1<GlobalNamespace::XPlatformAccessTokenData> GetXPlatformAccessToken(GlobalNamespace::IAuthenticationTokenProvider authenticationTokenProvider, System::Threading::CancellationToken cancellationToken, bool skipCache) ;

/// @brief Method <PingAllAwsGameLiftRegions>b__15_0 addr 0xdd1df4 size 0x4 virtual false final false
 System::Threading::Tasks::Task_1<System::ValueTuple_2<::StringW,int64_t>> _PingAllAwsGameLiftRegions_b__15_0(::StringW region) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::GameLift
NEED_NO_BOX(BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c);
DEFINE_IL2CPP_ARG_TYPE(BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c, "BGNet.Core.GameLift", "GameLiftPlayerSessionProvider/<>c");
NEED_NO_BOX(BGNet::Core::GameLift::GameLiftPlayerSessionProvider);
DEFINE_IL2CPP_ARG_TYPE(BGNet::Core::GameLift::GameLiftPlayerSessionProvider, "BGNet.Core.GameLift", "GameLiftPlayerSessionProvider");
DEFINE_IL2CPP_ARG_TYPE(BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, "BGNet.Core.GameLift", "GameLiftPlayerSessionProvider/<GetGameLiftPlayerSessionInfo>d__14");
DEFINE_IL2CPP_ARG_TYPE(BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15, "BGNet.Core.GameLift", "GameLiftPlayerSessionProvider/<PingAllAwsGameLiftRegions>d__15");
DEFINE_IL2CPP_ARG_TYPE(BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17, "BGNet.Core.GameLift", "GameLiftPlayerSessionProvider/<PingRegionAsync>d__17");
