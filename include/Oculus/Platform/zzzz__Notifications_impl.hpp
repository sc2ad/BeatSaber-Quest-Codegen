#pragma once
#include "Oculus/Platform/zzzz__Notifications_def.hpp"
#include "Oculus/Platform/Models/zzzz__RoomInviteNotificationList_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
//  Writing Method size for method: Oculus::Platform::Notifications.GetRoomInviteNotifications
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::RoomInviteNotificationList> (*)()>(&Oculus::Platform::Notifications::GetRoomInviteNotifications)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2596580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Notifications>::get(),
                            "GetRoomInviteNotifications",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Notifications.MarkAsRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request (*)(uint64_t)>(&Oculus::Platform::Notifications::MarkAsRead)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x25966dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Notifications>::get(),
                            "MarkAsRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Notifications.GetNextRoomInviteNotificationListPage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::RoomInviteNotificationList> (*)(Oculus::Platform::Models::RoomInviteNotificationList)>(&Oculus::Platform::Notifications::GetNextRoomInviteNotificationListPage)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x259682c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Notifications>::get(),
                            "GetNextRoomInviteNotificationListPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::RoomInviteNotificationList>::get()}
                        )));
    return ___internal_method;
  }
};
 Oculus::Platform::Request_1<Oculus::Platform::Models::RoomInviteNotificationList> Oculus::Platform::Notifications::GetRoomInviteNotifications()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Notifications>::get(),
                            "GetRoomInviteNotifications",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::RoomInviteNotificationList>, false>(nullptr, ___internal_method);
}
 Oculus::Platform::Request Oculus::Platform::Notifications::MarkAsRead(uint64_t notificationID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Notifications>::get(),
                            "MarkAsRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request, false>(nullptr, ___internal_method, notificationID);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::RoomInviteNotificationList> Oculus::Platform::Notifications::GetNextRoomInviteNotificationListPage(Oculus::Platform::Models::RoomInviteNotificationList list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Notifications>::get(),
                            "GetNextRoomInviteNotificationListPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::RoomInviteNotificationList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::RoomInviteNotificationList>, false>(nullptr, ___internal_method, list);
}
