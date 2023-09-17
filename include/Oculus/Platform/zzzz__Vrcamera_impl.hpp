#pragma once
namespace {
#include "Oculus/Platform/zzzz__Vrcamera_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Vrcamera.SetGetDataChannelMessageUpdateNotificationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::StringW>)>(&::Oculus::Platform::Vrcamera::SetGetDataChannelMessageUpdateNotificationCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2597dd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Vrcamera>::get(),
                            "SetGetDataChannelMessageUpdateNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Vrcamera.SetGetSurfaceUpdateNotificationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::StringW>)>(&::Oculus::Platform::Vrcamera::SetGetSurfaceUpdateNotificationCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2597e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Vrcamera>::get(),
                            "SetGetSurfaceUpdateNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::Oculus::Platform::Vrcamera::SetGetDataChannelMessageUpdateNotificationCallback(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::StringW> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Vrcamera>::get(),
                            "SetGetDataChannelMessageUpdateNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
 void ::Oculus::Platform::Vrcamera::SetGetSurfaceUpdateNotificationCallback(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::StringW> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Vrcamera>::get(),
                            "SetGetSurfaceUpdateNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
} // end anonymous namespace
