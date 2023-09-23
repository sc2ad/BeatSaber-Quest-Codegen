#pragma once
#include "Oculus/Platform/zzzz__NetSync_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncConnection_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSessionsChangedNotification_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
//  Writing Method size for method: Oculus::Platform::NetSync.SetConnectionStatusChangedNotificationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::NetSyncConnection>)>(&Oculus::Platform::NetSync::SetConnectionStatusChangedNotificationCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2596498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::NetSync>::get(),
                            "SetConnectionStatusChangedNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::NetSyncConnection>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::NetSync.SetSessionsChangedNotificationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::NetSyncSessionsChangedNotification>)>(&Oculus::Platform::NetSync::SetSessionsChangedNotificationCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x259650c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::NetSync>::get(),
                            "SetSessionsChangedNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::NetSyncSessionsChangedNotification>>::get()}
                        )));
    return ___internal_method;
  }
};
 void Oculus::Platform::NetSync::SetConnectionStatusChangedNotificationCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::NetSyncConnection> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::NetSync>::get(),
                            "SetConnectionStatusChangedNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::NetSyncConnection>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
 void Oculus::Platform::NetSync::SetSessionsChangedNotificationCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::NetSyncSessionsChangedNotification> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::NetSync>::get(),
                            "SetSessionsChangedNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::NetSyncSessionsChangedNotification>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
