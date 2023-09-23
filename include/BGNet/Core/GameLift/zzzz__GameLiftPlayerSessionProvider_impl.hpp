#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "BGNet/Core/GameLift/zzzz__GameLiftPlayerSessionProvider_def.hpp"
#include "GlobalNamespace/zzzz__RollingAverage_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "GlobalNamespace/zzzz__INetworkConfig_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "GlobalNamespace/zzzz__IAuthenticationTokenProvider_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "BGNet/Core/GameLift/zzzz__IGameLiftPlayerSessionProvider_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__GraphAPIClient_def.hpp"
#include "BGNet/Core/GameLift/zzzz__PlayerSessionInfo_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAuthFeatureFlag_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "BGNet/Core/GameLift/zzzz__GetMultiplayerInstanceResponse_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
//  Writing Method size for method: BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::*)()>(&BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x16f0;
  constexpr static std::size_t addrs = 0xdd1df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xdd3540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BGNet::Core::GameLift::PlayerSessionInfo>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "BGNet::Core::GameLift::GameLiftPlayerSessionProvider", modifiers: "", def_value: Some("csnull") }, CppParam { name: "authenticationTokenProvider", ty: "GlobalNamespace::IAuthenticationTokenProvider", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "beatmapLevelSelectionMask", ty: "GlobalNamespace::BeatmapLevelSelectionMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "gameplayServerConfiguration", ty: "GlobalNamespace::GameplayServerConfiguration", modifiers: "", def_value: Some("{}") }, CppParam { name: "secret", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "code", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_stopwatch_5__2", ty: "System::Diagnostics::Stopwatch", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_ticketId_5__3", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_placementId_5__4", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_xPlatformAccessToken_5__5", ty: "GlobalNamespace::XPlatformAccessTokenData", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_graphAPIAccessToken_5__6", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_userPlatform_5__7", ty: "System::Nullable_1<GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_singleUsePlatformAuthToken_5__8", ty: "System::Nullable_1<GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_numAttempts_5__9", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_getMatchmakingInstanceResponse_5__10", ty: "BGNet::Core::GameLift::GetMultiplayerInstanceResponse", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap10", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__4", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BGNet::Core::GameLift::PlayerSessionInfo> __t__builder, BGNet::Core::GameLift::GameLiftPlayerSessionProvider __4__this, GlobalNamespace::IAuthenticationTokenProvider authenticationTokenProvider, System::Threading::CancellationToken cancellationToken, ::StringW userId, GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration, ::StringW secret, ::StringW code, System::Diagnostics::Stopwatch _stopwatch_5__2, ::StringW _ticketId_5__3, ::StringW _placementId_5__4, GlobalNamespace::XPlatformAccessTokenData _xPlatformAccessToken_5__5, ::StringW _graphAPIAccessToken_5__6, System::Nullable_1<GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform> _userPlatform_5__7, System::Nullable_1<GlobalNamespace::AuthenticationToken> _singleUsePlatformAuthToken_5__8, int32_t _numAttempts_5__9, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::XPlatformAccessTokenData> __u__1, BGNet::Core::GameLift::GetMultiplayerInstanceResponse _getMatchmakingInstanceResponse_5__10, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken> __u__2, int32_t __7__wrap10, System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __u__3, System::Runtime::CompilerServices::TaskAwaiter __u__4) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->authenticationTokenProvider = authenticationTokenProvider;
this->cancellationToken = cancellationToken;
this->userId = userId;
this->beatmapLevelSelectionMask = beatmapLevelSelectionMask;
this->gameplayServerConfiguration = gameplayServerConfiguration;
this->secret = secret;
this->code = code;
this->_stopwatch_5__2 = _stopwatch_5__2;
this->_ticketId_5__3 = _ticketId_5__3;
this->_placementId_5__4 = _placementId_5__4;
this->_xPlatformAccessToken_5__5 = _xPlatformAccessToken_5__5;
this->_graphAPIAccessToken_5__6 = _graphAPIAccessToken_5__6;
this->_userPlatform_5__7 = _userPlatform_5__7;
this->_singleUsePlatformAuthToken_5__8 = _singleUsePlatformAuthToken_5__8;
this->_numAttempts_5__9 = _numAttempts_5__9;
this->__u__1 = __u__1;
this->_getMatchmakingInstanceResponse_5__10 = _getMatchmakingInstanceResponse_5__10;
this->__u__2 = __u__2;
this->__7__wrap10 = __7__wrap10;
this->__u__3 = __u__3;
this->__u__4 = __u__4;
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BGNet::Core::GameLift::PlayerSessionInfo> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BGNet::Core::GameLift::PlayerSessionInfo>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BGNet::Core::GameLift::PlayerSessionInfo>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BGNet::Core::GameLift::PlayerSessionInfo> BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BGNet::Core::GameLift::PlayerSessionInfo>, 0x8>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set___4__this(BGNet::Core::GameLift::GameLiftPlayerSessionProvider value)  {
::cordl_internals::setInstanceField<BGNet::Core::GameLift::GameLiftPlayerSessionProvider, 0x20>(this->__instance, std::forward<BGNet::Core::GameLift::GameLiftPlayerSessionProvider>(value));
}
constexpr BGNet::Core::GameLift::GameLiftPlayerSessionProvider BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::GameLift::GameLiftPlayerSessionProvider, 0x20>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set_authenticationTokenProvider(GlobalNamespace::IAuthenticationTokenProvider value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IAuthenticationTokenProvider, 0x28>(this->__instance, std::forward<GlobalNamespace::IAuthenticationTokenProvider>(value));
}
constexpr GlobalNamespace::IAuthenticationTokenProvider BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get_authenticationTokenProvider() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IAuthenticationTokenProvider, 0x28>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set_userId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get_userId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set_beatmapLevelSelectionMask(GlobalNamespace::BeatmapLevelSelectionMask value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelSelectionMask, 0x40>(this->__instance, std::forward<GlobalNamespace::BeatmapLevelSelectionMask>(value));
}
constexpr GlobalNamespace::BeatmapLevelSelectionMask BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get_beatmapLevelSelectionMask() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelSelectionMask, 0x40>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set_gameplayServerConfiguration(GlobalNamespace::GameplayServerConfiguration value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x58>(this->__instance, std::forward<GlobalNamespace::GameplayServerConfiguration>(value));
}
constexpr GlobalNamespace::GameplayServerConfiguration BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get_gameplayServerConfiguration() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x58>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set_secret(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x70>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get_secret() const {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set_code(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x78>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get_code() const {
return ::cordl_internals::getInstanceField<::StringW, 0x78>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set__stopwatch_5__2(System::Diagnostics::Stopwatch value)  {
::cordl_internals::setInstanceField<System::Diagnostics::Stopwatch, 0x80>(this->__instance, std::forward<System::Diagnostics::Stopwatch>(value));
}
constexpr System::Diagnostics::Stopwatch BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get__stopwatch_5__2() const {
return ::cordl_internals::getInstanceField<System::Diagnostics::Stopwatch, 0x80>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set__ticketId_5__3(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x88>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get__ticketId_5__3() const {
return ::cordl_internals::getInstanceField<::StringW, 0x88>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set__placementId_5__4(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x90>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get__placementId_5__4() const {
return ::cordl_internals::getInstanceField<::StringW, 0x90>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set__xPlatformAccessToken_5__5(GlobalNamespace::XPlatformAccessTokenData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::XPlatformAccessTokenData, 0x98>(this->__instance, std::forward<GlobalNamespace::XPlatformAccessTokenData>(value));
}
constexpr GlobalNamespace::XPlatformAccessTokenData BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get__xPlatformAccessToken_5__5() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::XPlatformAccessTokenData, 0x98>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set__graphAPIAccessToken_5__6(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xa0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get__graphAPIAccessToken_5__6() const {
return ::cordl_internals::getInstanceField<::StringW, 0xa0>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set__userPlatform_5__7(System::Nullable_1<GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform>, 0xa8>(this->__instance, std::forward<System::Nullable_1<GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform>>(value));
}
constexpr System::Nullable_1<GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform> BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get__userPlatform_5__7() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform>, 0xa8>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set__singleUsePlatformAuthToken_5__8(System::Nullable_1<GlobalNamespace::AuthenticationToken> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<GlobalNamespace::AuthenticationToken>, 0xb0>(this->__instance, std::forward<System::Nullable_1<GlobalNamespace::AuthenticationToken>>(value));
}
constexpr System::Nullable_1<GlobalNamespace::AuthenticationToken> BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get__singleUsePlatformAuthToken_5__8() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<GlobalNamespace::AuthenticationToken>, 0xb0>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set__numAttempts_5__9(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xd8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get__numAttempts_5__9() const {
return ::cordl_internals::getInstanceField<int32_t, 0xd8>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::XPlatformAccessTokenData> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::XPlatformAccessTokenData>, 0xe0>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::XPlatformAccessTokenData>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::XPlatformAccessTokenData> BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::XPlatformAccessTokenData>, 0xe0>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set__getMatchmakingInstanceResponse_5__10(BGNet::Core::GameLift::GetMultiplayerInstanceResponse value)  {
::cordl_internals::setInstanceField<BGNet::Core::GameLift::GetMultiplayerInstanceResponse, 0xe8>(this->__instance, std::forward<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>(value));
}
constexpr BGNet::Core::GameLift::GetMultiplayerInstanceResponse BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get__getMatchmakingInstanceResponse_5__10() const {
return ::cordl_internals::getInstanceField<BGNet::Core::GameLift::GetMultiplayerInstanceResponse, 0xe8>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>, 0x120>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken> BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>, 0x120>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set___7__wrap10(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x128>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get___7__wrap10() const {
return ::cordl_internals::getInstanceField<int32_t, 0x128>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set___u__3(System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, 0x130>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get___u__3() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, 0x130>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set___u__4(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x138>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get___u__4() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x138>(this->__instance);
}
 void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::*)()>(&BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0xdd3598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdd3900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "BGNet::Core::GameLift::GameLiftPlayerSessionProvider", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<System::ValueTuple_2<::StringW,int64_t>>>", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, BGNet::Core::GameLift::GameLiftPlayerSessionProvider __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<System::ValueTuple_2<::StringW,int64_t>>> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::__set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::__set___4__this(BGNet::Core::GameLift::GameLiftPlayerSessionProvider value)  {
::cordl_internals::setInstanceField<BGNet::Core::GameLift::GameLiftPlayerSessionProvider, 0x28>(this->__instance, std::forward<BGNet::Core::GameLift::GameLiftPlayerSessionProvider>(value));
}
constexpr BGNet::Core::GameLift::GameLiftPlayerSessionProvider BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::GameLift::GameLiftPlayerSessionProvider, 0x28>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<System::ValueTuple_2<::StringW,int64_t>>> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<System::ValueTuple_2<::StringW,int64_t>>>, 0x30>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<System::ValueTuple_2<::StringW,int64_t>>>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<System::ValueTuple_2<::StringW,int64_t>>> BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<System::ValueTuple_2<::StringW,int64_t>>>, 0x30>(this->__instance);
}
 void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c::*)()>(&BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdd3970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c._GetAverageLatencies_b__16_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c::*)(System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>)>(&BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c::_GetAverageLatencies_b__16_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xdd3978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c>::get(),
                            "<GetAverageLatencies>b__16_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c._GetAverageLatencies_b__16_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c::*)(System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>)>(&BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c::_GetAverageLatencies_b__16_1)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xdd39c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c>::get(),
                            "<GetAverageLatencies>b__16_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c._GetAverageLatencies_b__16_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c::*)(System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>)>(&BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c::_GetAverageLatencies_b__16_2)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xdd39fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c>::get(),
                            "<GetAverageLatencies>b__16_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>>::get()}
                        )));
    return ___internal_method;
  }
};
 void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c::__set___9(BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c value)  {
::cordl_internals::setStaticField<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c>::get>(std::forward<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c>(value));
}
 BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c::__get___9()  {
return ::cordl_internals::getStaticField<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c>::get>();
}
 void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c::__set___9__16_0(System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>,bool> value)  {
::cordl_internals::setStaticField<System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>,bool>, "<>9__16_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c>::get>(std::forward<System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>,bool>>(value));
}
 System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>,bool> BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c::__get___9__16_0()  {
return ::cordl_internals::getStaticField<System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>,bool>, "<>9__16_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c>::get>();
}
 void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c::__set___9__16_1(System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>,::StringW> value)  {
::cordl_internals::setStaticField<System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>,::StringW>, "<>9__16_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c>::get>(std::forward<System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>,::StringW>>(value));
}
 System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>,::StringW> BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c::__get___9__16_1()  {
return ::cordl_internals::getStaticField<System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>,::StringW>, "<>9__16_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c>::get>();
}
 void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c::__set___9__16_2(System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>,int64_t> value)  {
::cordl_internals::setStaticField<System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>,int64_t>, "<>9__16_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c>::get>(std::forward<System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>,int64_t>>(value));
}
 System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>,int64_t> BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c::__get___9__16_2()  {
return ::cordl_internals::getStaticField<System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>,int64_t>, "<>9__16_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c>::get>();
}
// Ctor Parameters []
 BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c>())) {}
 void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c::_GetAverageLatencies_b__16_0(System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage> kvp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c>::get(),
                            "<GetAverageLatencies>b__16_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, kvp);
}
 ::StringW BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c::_GetAverageLatencies_b__16_1(System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage> kvp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c>::get(),
                            "<GetAverageLatencies>b__16_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, kvp);
}
 int64_t BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c::_GetAverageLatencies_b__16_2(System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage> kvp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider____c>::get(),
                            "<GetAverageLatencies>b__16_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::RollingAverage>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method, kvp);
}
//  Writing Method size for method: BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::*)()>(&BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0xdd3a58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xdd3d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_2<::StringW,int64_t>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "awsRegion", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_2<::StringW,int64_t>> __t__builder, ::StringW awsRegion, System::Runtime::CompilerServices::TaskAwaiter_1<int64_t> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->awsRegion = awsRegion;
this->__u__1 = __u__1;
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_2<::StringW,int64_t>> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_2<::StringW,int64_t>>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_2<::StringW,int64_t>>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_2<::StringW,int64_t>> BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_2<::StringW,int64_t>>, 0x8>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::__set_awsRegion(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::__get_awsRegion() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<int64_t> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>, 0x28>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<int64_t> BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>, 0x28>(this->__instance);
}
 void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::BGNet__Core__GameLift__GameLiftPlayerSessionProvider___PingRegionAsync_d__17>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(GlobalNamespace::INetworkConfig, GlobalNamespace::XPlatformAuthFeatureFlag)>(&BGNet::Core::GameLift::GameLiftPlayerSessionProvider::_ctor)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xdd1090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::GameLiftPlayerSessionProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkConfig>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::XPlatformAuthFeatureFlag>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider.PollUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)()>(&BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PollUpdate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xdd1234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::GameLiftPlayerSessionProvider>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider.GetGameLiftPlayerSessionInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<BGNet::Core::GameLift::PlayerSessionInfo> (BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(GlobalNamespace::IAuthenticationTokenProvider, ::StringW, GlobalNamespace::BeatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration, ::StringW, ::StringW, System::Threading::CancellationToken)>(&BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetGameLiftPlayerSessionInfo)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xdd1388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::GameLiftPlayerSessionProvider>::get(),
                            "GetGameLiftPlayerSessionInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IAuthenticationTokenProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayServerConfiguration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider.PingAllAwsGameLiftRegions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)()>(&BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingAllAwsGameLiftRegions)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xdd12f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::GameLiftPlayerSessionProvider>::get(),
                            "PingAllAwsGameLiftRegions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider.GetAverageLatencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<::StringW,int64_t> (BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)()>(&BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetAverageLatencies)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xdd14e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::GameLiftPlayerSessionProvider>::get(),
                            "GetAverageLatencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider.PingRegionAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::ValueTuple_2<::StringW,int64_t>> (BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(::StringW)>(&BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingRegionAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xdd172c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::GameLiftPlayerSessionProvider>::get(),
                            "PingRegionAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider.GetAwsGameLiftRegionEndpoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetAwsGameLiftRegionEndpoint)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xdd181c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::GameLiftPlayerSessionProvider>::get(),
                            "GetAwsGameLiftRegionEndpoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider.GetXPlatformAccessToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::XPlatformAccessTokenData> (BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(GlobalNamespace::IAuthenticationTokenProvider, System::Threading::CancellationToken, bool)>(&BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetXPlatformAccessToken)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xdd1888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::GameLiftPlayerSessionProvider>::get(),
                            "GetXPlatformAccessToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IAuthenticationTokenProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider._PingAllAwsGameLiftRegions_b__15_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::ValueTuple_2<::StringW,int64_t>> (BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(::StringW)>(&BGNet::Core::GameLift::GameLiftPlayerSessionProvider::_PingAllAwsGameLiftRegions_b__15_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xdd1df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::GameLiftPlayerSessionProvider>::get(),
                            "<PingAllAwsGameLiftRegions>b__15_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to BGNet::Core::GameLift::IGameLiftPlayerSessionProvider
constexpr  BGNet::Core::GameLift::GameLiftPlayerSessionProvider::operator BGNet::Core::GameLift::IGameLiftPlayerSessionProvider() const noexcept {
return BGNet::Core::GameLift::IGameLiftPlayerSessionProvider(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPollable
constexpr  BGNet::Core::GameLift::GameLiftPlayerSessionProvider::operator GlobalNamespace::IPollable() const noexcept {
return GlobalNamespace::IPollable(::bs_hook::Il2CppWrapperType::instance);
}
 void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__set__awsGameLiftRegions(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "_awsGameLiftRegions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::GameLiftPlayerSessionProvider>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__get__awsGameLiftRegions()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "_awsGameLiftRegions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::GameLiftPlayerSessionProvider>::get>();
}
constexpr void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__set__networkConfig(GlobalNamespace::INetworkConfig value)  {
::cordl_internals::setInstanceField<GlobalNamespace::INetworkConfig, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::INetworkConfig>(value));
}
constexpr GlobalNamespace::INetworkConfig BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__get__networkConfig() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::INetworkConfig, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__set__graphAPIClient(GlobalNamespace::GraphAPIClient value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GraphAPIClient, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GraphAPIClient>(value));
}
constexpr GlobalNamespace::GraphAPIClient BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__get__graphAPIClient() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GraphAPIClient, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__set__xPlatformAuthFeatureFlag(GlobalNamespace::XPlatformAuthFeatureFlag value)  {
::cordl_internals::setInstanceField<GlobalNamespace::XPlatformAuthFeatureFlag, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::XPlatformAuthFeatureFlag>(value));
}
constexpr GlobalNamespace::XPlatformAuthFeatureFlag BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__get__xPlatformAuthFeatureFlag() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::XPlatformAuthFeatureFlag, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__set__pingAverages(System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::RollingAverage> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::RollingAverage>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::RollingAverage>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::RollingAverage> BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__get__pingAverages() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::RollingAverage>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__set__pingCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__get__pingCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__set__lastPingTime(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__get__lastPingTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "networkConfig", ty: "GlobalNamespace::INetworkConfig", modifiers: "", def_value: None }, CppParam { name: "xPlatformAuthFeatureFlag", ty: "GlobalNamespace::XPlatformAuthFeatureFlag", modifiers: "", def_value: None }]
 BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GameLiftPlayerSessionProvider(GlobalNamespace::INetworkConfig networkConfig, GlobalNamespace::XPlatformAuthFeatureFlag xPlatformAuthFeatureFlag)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GameLiftPlayerSessionProvider>(networkConfig, xPlatformAuthFeatureFlag))) {}
 void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::_ctor(GlobalNamespace::INetworkConfig networkConfig, GlobalNamespace::XPlatformAuthFeatureFlag xPlatformAuthFeatureFlag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::GameLiftPlayerSessionProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkConfig>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::XPlatformAuthFeatureFlag>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, networkConfig, xPlatformAuthFeatureFlag);
}
 void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PollUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::GameLiftPlayerSessionProvider>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<BGNet::Core::GameLift::PlayerSessionInfo> BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetGameLiftPlayerSessionInfo(GlobalNamespace::IAuthenticationTokenProvider authenticationTokenProvider, ::StringW userId, GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration, ::StringW secret, ::StringW code, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::GameLiftPlayerSessionProvider>::get(),
                            "GetGameLiftPlayerSessionInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IAuthenticationTokenProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayServerConfiguration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<BGNet::Core::GameLift::PlayerSessionInfo>, false>(const_cast<void*>(instance), ___internal_method, authenticationTokenProvider, userId, beatmapLevelSelectionMask, gameplayServerConfiguration, secret, code, cancellationToken);
}
 void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingAllAwsGameLiftRegions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::GameLiftPlayerSessionProvider>::get(),
                            "PingAllAwsGameLiftRegions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::Dictionary_2<::StringW,int64_t> BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetAverageLatencies()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::GameLiftPlayerSessionProvider>::get(),
                            "GetAverageLatencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::Dictionary_2<::StringW,int64_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<System::ValueTuple_2<::StringW,int64_t>> BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingRegionAsync(::StringW awsRegion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::GameLiftPlayerSessionProvider>::get(),
                            "PingRegionAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::ValueTuple_2<::StringW,int64_t>>, false>(const_cast<void*>(instance), ___internal_method, awsRegion);
}
 ::StringW BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetAwsGameLiftRegionEndpoint(::StringW awsRegion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::GameLiftPlayerSessionProvider>::get(),
                            "GetAwsGameLiftRegionEndpoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, awsRegion);
}
/// @param skipCache: bool (default: false)
 System::Threading::Tasks::Task_1<GlobalNamespace::XPlatformAccessTokenData> BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetXPlatformAccessToken(GlobalNamespace::IAuthenticationTokenProvider authenticationTokenProvider, System::Threading::CancellationToken cancellationToken, bool skipCache)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::GameLiftPlayerSessionProvider>::get(),
                            "GetXPlatformAccessToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IAuthenticationTokenProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::XPlatformAccessTokenData>, false>(const_cast<void*>(instance), ___internal_method, authenticationTokenProvider, cancellationToken, skipCache);
}
 System::Threading::Tasks::Task_1<System::ValueTuple_2<::StringW,int64_t>> BGNet::Core::GameLift::GameLiftPlayerSessionProvider::_PingAllAwsGameLiftRegions_b__15_0(::StringW region)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::GameLiftPlayerSessionProvider>::get(),
                            "<PingAllAwsGameLiftRegions>b__15_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::ValueTuple_2<::StringW,int64_t>>, false>(const_cast<void*>(instance), ___internal_method, region);
}
