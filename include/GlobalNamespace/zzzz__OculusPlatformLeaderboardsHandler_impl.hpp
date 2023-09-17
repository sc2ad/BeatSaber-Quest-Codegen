#pragma once
#include "GlobalNamespace/zzzz__PlatformLeaderboardsHandler_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__OculusPlatformLeaderboardsHandler_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardScoreUploader_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardIdsModelSO_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__LeaderboardEntryList_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c71e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c.__ctor_b__3_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList>)>(&::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c::__ctor_b__3_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21c71ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c>::get(),
                            "<.ctor>b__3_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList>>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c::__set___9(::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c value)  {
::cordl_internals::setStaticField<::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c>::get>(std::forward<::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c>(value));
}
 ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c::__get___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c>::get>();
}
 void ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c::__set___9__3_0(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::LeaderboardEntryList> value)  {
::cordl_internals::setStaticField<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::LeaderboardEntryList>, "<>9__3_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c>::get>(std::forward<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::LeaderboardEntryList>>(value));
}
 ::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::LeaderboardEntryList> ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c::__get___9__3_0()  {
return ::cordl_internals::getStaticField<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::LeaderboardEntryList>, "<>9__3_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c>::get>();
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__OculusPlatformLeaderboardsHandler____c>())) {}
 void ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c::__ctor_b__3_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList> message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c>::get(),
                            "<.ctor>b__3_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c6c5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0._AddOculusRequest_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0::*)(::GlobalNamespace::HMAsyncRequest)>(&::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0::_AddOculusRequest_b__0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21c71f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0>::get(),
                            "<AddOculusRequest>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HMAsyncRequest>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0::__set___4__this(::GlobalNamespace::OculusPlatformLeaderboardsHandler value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OculusPlatformLeaderboardsHandler, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::OculusPlatformLeaderboardsHandler>(value));
}
constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusPlatformLeaderboardsHandler, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0::__set_oculusRequest(::Oculus::Platform::Request value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Request, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Request>(value));
}
constexpr ::Oculus::Platform::Request ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0::__get_oculusRequest() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Request, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0>())) {}
 void ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0::_AddOculusRequest_b__0(::GlobalNamespace::HMAsyncRequest request)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0>::get(),
                            "<AddOculusRequest>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HMAsyncRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, request);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c6f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0._GetScores_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList>)>(&::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::_GetScores_b__0)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x21c7254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0>::get(),
                            "<GetScores>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::__set___4__this(::GlobalNamespace::OculusPlatformLeaderboardsHandler value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OculusPlatformLeaderboardsHandler, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::OculusPlatformLeaderboardsHandler>(value));
}
constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusPlatformLeaderboardsHandler, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::__set_completionHandler(::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::__get_completionHandler() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::__set_referencePlayerId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::__get_referencePlayerId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0>())) {}
 void ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::_GetScores_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList> message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0>::get(),
                            "<GetScores>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0::*)()>(&::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c7178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0._UploadScore_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0::*)(::Oculus::Platform::Message_1<bool>)>(&::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0::_UploadScore_b__0)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x21c758c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0>::get(),
                            "<UploadScore>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0::__set___4__this(::GlobalNamespace::OculusPlatformLeaderboardsHandler value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OculusPlatformLeaderboardsHandler, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::OculusPlatformLeaderboardsHandler>(value));
}
constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusPlatformLeaderboardsHandler, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0::__set_completionHandler(::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0::__get_completionHandler() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0>())) {}
 void ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0::_UploadScore_b__0(::Oculus::Platform::Message_1<bool> messsage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0>::get(),
                            "<UploadScore>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, messsage);
}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformLeaderboardsHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformLeaderboardsHandler::*)()>(&::GlobalNamespace::OculusPlatformLeaderboardsHandler::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x21c6a48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformLeaderboardsHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformLeaderboardsHandler.AddOculusRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformLeaderboardsHandler::*)(::Oculus::Platform::Request, ::GlobalNamespace::HMAsyncRequest)>(&::GlobalNamespace::OculusPlatformLeaderboardsHandler::AddOculusRequest)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x21c6b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformLeaderboardsHandler>::get(),
                            "AddOculusRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Request>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HMAsyncRequest>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformLeaderboardsHandler.CheckMessageForValidRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OculusPlatformLeaderboardsHandler::*)(::Oculus::Platform::Message)>(&::GlobalNamespace::OculusPlatformLeaderboardsHandler::CheckMessageForValidRequest)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x21c6c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformLeaderboardsHandler>::get(),
                            "CheckMessageForValidRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformLeaderboardsHandler.GetScores
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest (::GlobalNamespace::OculusPlatformLeaderboardsHandler::*)(::GlobalNamespace::IDifficultyBeatmap, int32_t, int32_t, ::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__ScoresScope, ::StringW, ::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler)>(&::GlobalNamespace::OculusPlatformLeaderboardsHandler::GetScores)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x21c6cfc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::OculusPlatformLeaderboardsHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformLeaderboardsHandler>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformLeaderboardsHandler.UploadScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest (::GlobalNamespace::OculusPlatformLeaderboardsHandler::*)(::GlobalNamespace::____GlobalNamespace__LeaderboardScoreUploader__ScoreData, ::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler)>(&::GlobalNamespace::OculusPlatformLeaderboardsHandler::UploadScore)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x21c6f6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::OculusPlatformLeaderboardsHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformLeaderboardsHandler>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::OculusPlatformLeaderboardsHandler::__set__oculusRequestIds(::System::Collections::Generic::HashSet_1<uint64_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<uint64_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::HashSet_1<uint64_t>>(value));
}
constexpr ::System::Collections::Generic::HashSet_1<uint64_t> ::GlobalNamespace::OculusPlatformLeaderboardsHandler::__get__oculusRequestIds() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<uint64_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OculusPlatformLeaderboardsHandler::__set__gameplayModifiersModel(::GlobalNamespace::GameplayModifiersModelSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayModifiersModelSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GameplayModifiersModelSO>(value));
}
constexpr ::GlobalNamespace::GameplayModifiersModelSO ::GlobalNamespace::OculusPlatformLeaderboardsHandler::__get__gameplayModifiersModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiersModelSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OculusPlatformLeaderboardsHandler::__set__leaderboardIdsModel(::GlobalNamespace::LeaderboardIdsModelSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LeaderboardIdsModelSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::LeaderboardIdsModelSO>(value));
}
constexpr ::GlobalNamespace::LeaderboardIdsModelSO ::GlobalNamespace::OculusPlatformLeaderboardsHandler::__get__leaderboardIdsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LeaderboardIdsModelSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::OculusPlatformLeaderboardsHandler::OculusPlatformLeaderboardsHandler()  : ::GlobalNamespace::PlatformLeaderboardsHandler(THROW_UNLESS(::il2cpp_utils::New<OculusPlatformLeaderboardsHandler>())) {}
 void ::GlobalNamespace::OculusPlatformLeaderboardsHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformLeaderboardsHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OculusPlatformLeaderboardsHandler::AddOculusRequest(::Oculus::Platform::Request oculusRequest, ::GlobalNamespace::HMAsyncRequest asyncRequest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformLeaderboardsHandler>::get(),
                            "AddOculusRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Request>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HMAsyncRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, oculusRequest, asyncRequest);
}
 bool ::GlobalNamespace::OculusPlatformLeaderboardsHandler::CheckMessageForValidRequest(::Oculus::Platform::Message message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformLeaderboardsHandler>::get(),
                            "CheckMessageForValidRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, message);
}
 ::GlobalNamespace::HMAsyncRequest ::GlobalNamespace::OculusPlatformLeaderboardsHandler::GetScores(::GlobalNamespace::IDifficultyBeatmap beatmap, int32_t count, int32_t fromRank, ::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__ScoresScope scope, ::StringW referencePlayerId, ::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler completionHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformLeaderboardsHandler>::get(),
                            "GetScores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__ScoresScope>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest, false>(const_cast<void*>(instance), ___internal_method, beatmap, count, fromRank, scope, referencePlayerId, completionHandler);
}
 ::GlobalNamespace::HMAsyncRequest ::GlobalNamespace::OculusPlatformLeaderboardsHandler::UploadScore(::GlobalNamespace::____GlobalNamespace__LeaderboardScoreUploader__ScoreData scoreData, ::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler completionHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformLeaderboardsHandler>::get(),
                            "UploadScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest, false>(const_cast<void*>(instance), ___internal_method, scoreData, completionHandler);
}
} // end anonymous namespace
