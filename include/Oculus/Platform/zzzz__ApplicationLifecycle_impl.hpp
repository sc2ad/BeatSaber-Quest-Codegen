#pragma once
#include "Oculus/Platform/zzzz__ApplicationLifecycle_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchDetails_def.hpp"
#include "Oculus/Platform/zzzz__LaunchResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
//  Writing Method size for method: Oculus::Platform::ApplicationLifecycle.GetLaunchDetails
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::LaunchDetails (*)()>(&Oculus::Platform::ApplicationLifecycle::GetLaunchDetails)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2585e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::ApplicationLifecycle>::get(),
                            "GetLaunchDetails",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::ApplicationLifecycle.LogDeeplinkResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, Oculus::Platform::LaunchResult)>(&Oculus::Platform::ApplicationLifecycle::LogDeeplinkResult)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2585f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::ApplicationLifecycle>::get(),
                            "LogDeeplinkResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::LaunchResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::ApplicationLifecycle.SetLaunchIntentChangedNotificationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Oculus::Platform::Oculus__Platform__Message_1__Callback<::StringW>)>(&Oculus::Platform::ApplicationLifecycle::SetLaunchIntentChangedNotificationCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2585f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::ApplicationLifecycle>::get(),
                            "SetLaunchIntentChangedNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message_1__Callback<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
 Oculus::Platform::Models::LaunchDetails Oculus::Platform::ApplicationLifecycle::GetLaunchDetails()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::ApplicationLifecycle>::get(),
                            "GetLaunchDetails",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::LaunchDetails, false>(nullptr, ___internal_method);
}
 void Oculus::Platform::ApplicationLifecycle::LogDeeplinkResult(::StringW trackingID, Oculus::Platform::LaunchResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::ApplicationLifecycle>::get(),
                            "LogDeeplinkResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::LaunchResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, trackingID, result);
}
 void Oculus::Platform::ApplicationLifecycle::SetLaunchIntentChangedNotificationCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<::StringW> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::ApplicationLifecycle>::get(),
                            "SetLaunchIntentChangedNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message_1__Callback<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
