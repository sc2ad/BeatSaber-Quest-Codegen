#pragma once
#include "Oculus/Platform/zzzz__Livestreaming_def.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingStatus_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
//  Writing Method size for method: Oculus::Platform::Livestreaming.SetStatusUpdateNotificationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::LivestreamingStatus>)>(&Oculus::Platform::Livestreaming::SetStatusUpdateNotificationCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x25962a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Livestreaming>::get(),
                            "SetStatusUpdateNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::LivestreamingStatus>>::get()}
                        )));
    return ___internal_method;
  }
};
 void Oculus::Platform::Livestreaming::SetStatusUpdateNotificationCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::LivestreamingStatus> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Livestreaming>::get(),
                            "SetStatusUpdateNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::LivestreamingStatus>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
