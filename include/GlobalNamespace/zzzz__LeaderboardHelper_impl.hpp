#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__LeaderboardHelper_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelCollectionSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Net/Http/zzzz__HttpClient_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2::*)()>(&GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2::MoveNext)> {
  constexpr static std::size_t size = 0xb48;
  constexpr static std::size_t addrs = 0x219965c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x219a1a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "leaderboardID", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "appToken", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_httpClient_5__2", ty: "System::Net::Http::HttpClient", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_request_5__3", ty: "System::Net::Http::HttpRequestMessage", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_contentList_5__4", ty: "System::Collections::Generic::List_1<::StringW>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::StringW leaderboardID, ::StringW appToken, System::Net::Http::HttpClient _httpClient_5__2, System::Net::Http::HttpRequestMessage _request_5__3, System::Collections::Generic::List_1<::StringW> _contentList_5__4, System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->leaderboardID = leaderboardID;
this->appToken = appToken;
this->_httpClient_5__2 = _httpClient_5__2;
this->_request_5__3 = _request_5__3;
this->_contentList_5__4 = _contentList_5__4;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2::__set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2::__set_leaderboardID(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2::__get_leaderboardID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2::__set_appToken(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2::__get_appToken() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2::__set__httpClient_5__2(System::Net::Http::HttpClient value)  {
::cordl_internals::setInstanceField<System::Net::Http::HttpClient, 0x38>(this->__instance, std::forward<System::Net::Http::HttpClient>(value));
}
constexpr System::Net::Http::HttpClient GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2::__get__httpClient_5__2() const {
return ::cordl_internals::getInstanceField<System::Net::Http::HttpClient, 0x38>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2::__set__request_5__3(System::Net::Http::HttpRequestMessage value)  {
::cordl_internals::setInstanceField<System::Net::Http::HttpRequestMessage, 0x40>(this->__instance, std::forward<System::Net::Http::HttpRequestMessage>(value));
}
constexpr System::Net::Http::HttpRequestMessage GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2::__get__request_5__3() const {
return ::cordl_internals::getInstanceField<System::Net::Http::HttpRequestMessage, 0x40>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2::__set__contentList_5__4(System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<::StringW>, 0x48>(this->__instance, std::forward<System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr System::Collections::Generic::List_1<::StringW> GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2::__get__contentList_5__4() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<::StringW>, 0x48>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage>, 0x50>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage> GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage>, 0x50>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::LeaderboardHelper.CreateOculusLeaderboards
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardHelper::*)(GlobalNamespace::LeaderboardIdsModelSO, GlobalNamespace::BeatmapLevelCollectionSO, bool, ::StringW)>(&GlobalNamespace::LeaderboardHelper::CreateOculusLeaderboards)> {
  constexpr static std::size_t size = 0xe7c;
  constexpr static std::size_t addrs = 0x21986bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardHelper>::get(),
                            "CreateOculusLeaderboards",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LeaderboardIdsModelSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelCollectionSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LeaderboardHelper.CreateOculusLeaderboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardHelper::*)(::StringW, ::StringW)>(&GlobalNamespace::LeaderboardHelper::CreateOculusLeaderboard)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2199538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardHelper>::get(),
                            "CreateOculusLeaderboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LeaderboardHelper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardHelper::*)()>(&GlobalNamespace::LeaderboardHelper::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x21995dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LeaderboardHelper::__set__leaderboardIds(System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<::StringW>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr System::Collections::Generic::List_1<::StringW> GlobalNamespace::LeaderboardHelper::__get__leaderboardIds() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<::StringW>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::LeaderboardHelper::CreateOculusLeaderboards(GlobalNamespace::LeaderboardIdsModelSO leaderboardIdsModel, GlobalNamespace::BeatmapLevelCollectionSO _levelCollection, bool debug, ::StringW appToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardHelper>::get(),
                            "CreateOculusLeaderboards",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LeaderboardIdsModelSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelCollectionSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, leaderboardIdsModel, _levelCollection, debug, appToken);
}
 void GlobalNamespace::LeaderboardHelper::CreateOculusLeaderboard(::StringW leaderboardID, ::StringW appToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardHelper>::get(),
                            "CreateOculusLeaderboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, leaderboardID, appToken);
}
// Ctor Parameters []
 GlobalNamespace::LeaderboardHelper::LeaderboardHelper()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LeaderboardHelper>())) {}
 void GlobalNamespace::LeaderboardHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
