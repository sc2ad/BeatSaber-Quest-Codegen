#pragma once
#include "Oculus/Platform/zzzz__Rooms_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
#include "Oculus/Platform/zzzz__RoomOptions_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__Room_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "Oculus/Platform/Models/zzzz__RoomList_def.hpp"
#include "Oculus/Platform/zzzz__RoomMembershipLockStatus_def.hpp"
#include "Oculus/Platform/zzzz__RoomJoinPolicy_def.hpp"
#include "Oculus/Platform/Models/zzzz__RoomInviteNotification_def.hpp"
//  Writing Method size for method: Oculus::Platform::Rooms.UpdateDataStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::Room> (*)(uint64_t, System::Collections::Generic::Dictionary_2<::StringW,::StringW>)>(&Oculus::Platform::Rooms::UpdateDataStore)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x2585fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "UpdateDataStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<::StringW,::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Rooms.SetRoomInviteNotificationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Oculus::Platform::Oculus__Platform__Message_1__Callback<::StringW>)>(&Oculus::Platform::Rooms::SetRoomInviteNotificationCallback)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25862f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "SetRoomInviteNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message_1__Callback<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Rooms.CreateAndJoinPrivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::Room> (*)(Oculus::Platform::RoomJoinPolicy, uint32_t, bool)>(&Oculus::Platform::Rooms::CreateAndJoinPrivate)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2586370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "CreateAndJoinPrivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::RoomJoinPolicy>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Rooms.CreateAndJoinPrivate2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::Room> (*)(Oculus::Platform::RoomJoinPolicy, uint32_t, Oculus::Platform::RoomOptions)>(&Oculus::Platform::Rooms::CreateAndJoinPrivate2)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x25864e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "CreateAndJoinPrivate2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::RoomJoinPolicy>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::RoomOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Rooms.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::Room> (*)(uint64_t)>(&Oculus::Platform::Rooms::Get)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2586674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Rooms.GetCurrent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::Room> (*)()>(&Oculus::Platform::Rooms::GetCurrent)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x25867d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "GetCurrent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Rooms.GetCurrentForUser
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::Room> (*)(uint64_t)>(&Oculus::Platform::Rooms::GetCurrentForUser)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x258692c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "GetCurrentForUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Rooms.GetInvitableUsers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::UserList> (*)()>(&Oculus::Platform::Rooms::GetInvitableUsers)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2586a8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "GetInvitableUsers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Rooms.GetInvitableUsers2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::UserList> (*)(Oculus::Platform::RoomOptions)>(&Oculus::Platform::Rooms::GetInvitableUsers2)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2586be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "GetInvitableUsers2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::RoomOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Rooms.GetModeratedRooms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::RoomList> (*)()>(&Oculus::Platform::Rooms::GetModeratedRooms)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2586d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "GetModeratedRooms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Rooms.InviteUser
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::Room> (*)(uint64_t, ::StringW)>(&Oculus::Platform::Rooms::InviteUser)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2586eb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "InviteUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Rooms.Join
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::Room> (*)(uint64_t, bool)>(&Oculus::Platform::Rooms::Join)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2587020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "Join",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Rooms.Join2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::Room> (*)(uint64_t, Oculus::Platform::RoomOptions)>(&Oculus::Platform::Rooms::Join2)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2587190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "Join2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::RoomOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Rooms.KickUser
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::Room> (*)(uint64_t, uint64_t, int32_t)>(&Oculus::Platform::Rooms::KickUser)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2587314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "KickUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Rooms.LaunchInvitableUserFlow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request (*)(uint64_t)>(&Oculus::Platform::Rooms::LaunchInvitableUserFlow)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x258748c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "LaunchInvitableUserFlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Rooms.Leave
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::Room> (*)(uint64_t)>(&Oculus::Platform::Rooms::Leave)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x25875d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "Leave",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Rooms.SetDescription
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::Room> (*)(uint64_t, ::StringW)>(&Oculus::Platform::Rooms::SetDescription)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2587738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "SetDescription",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Rooms.UpdateMembershipLockStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::Room> (*)(uint64_t, Oculus::Platform::RoomMembershipLockStatus)>(&Oculus::Platform::Rooms::UpdateMembershipLockStatus)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x25878a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "UpdateMembershipLockStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::RoomMembershipLockStatus>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Rooms.UpdateOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request (*)(uint64_t, uint64_t)>(&Oculus::Platform::Rooms::UpdateOwner)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2587a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "UpdateOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Rooms.UpdatePrivateRoomJoinPolicy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::Room> (*)(uint64_t, Oculus::Platform::RoomJoinPolicy)>(&Oculus::Platform::Rooms::UpdatePrivateRoomJoinPolicy)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2587b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "UpdatePrivateRoomJoinPolicy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::RoomJoinPolicy>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Rooms.SetRoomInviteAcceptedNotificationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Oculus::Platform::Oculus__Platform__Message_1__Callback<::StringW>)>(&Oculus::Platform::Rooms::SetRoomInviteAcceptedNotificationCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x25862fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "SetRoomInviteAcceptedNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message_1__Callback<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Rooms.SetRoomInviteReceivedNotificationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::RoomInviteNotification>)>(&Oculus::Platform::Rooms::SetRoomInviteReceivedNotificationCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2587ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "SetRoomInviteReceivedNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::RoomInviteNotification>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Rooms.SetUpdateNotificationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::Room>)>(&Oculus::Platform::Rooms::SetUpdateNotificationCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2587d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "SetUpdateNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::Room>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Rooms.GetNextRoomListPage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::RoomList> (*)(Oculus::Platform::Models::RoomList)>(&Oculus::Platform::Rooms::GetNextRoomListPage)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2587dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "GetNextRoomListPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::RoomList>::get()}
                        )));
    return ___internal_method;
  }
};
 Oculus::Platform::Request_1<Oculus::Platform::Models::Room> Oculus::Platform::Rooms::UpdateDataStore(uint64_t roomID, System::Collections::Generic::Dictionary_2<::StringW,::StringW> data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "UpdateDataStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<::StringW,::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::Room>, false>(nullptr, ___internal_method, roomID, data);
}
 void Oculus::Platform::Rooms::SetRoomInviteNotificationCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<::StringW> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "SetRoomInviteNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message_1__Callback<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
/// @param subscribeToUpdates: bool (default: false)
 Oculus::Platform::Request_1<Oculus::Platform::Models::Room> Oculus::Platform::Rooms::CreateAndJoinPrivate(Oculus::Platform::RoomJoinPolicy joinPolicy, uint32_t maxUsers, bool subscribeToUpdates)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "CreateAndJoinPrivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::RoomJoinPolicy>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::Room>, false>(nullptr, ___internal_method, joinPolicy, maxUsers, subscribeToUpdates);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::Room> Oculus::Platform::Rooms::CreateAndJoinPrivate2(Oculus::Platform::RoomJoinPolicy joinPolicy, uint32_t maxUsers, Oculus::Platform::RoomOptions roomOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "CreateAndJoinPrivate2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::RoomJoinPolicy>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::RoomOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::Room>, false>(nullptr, ___internal_method, joinPolicy, maxUsers, roomOptions);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::Room> Oculus::Platform::Rooms::Get(uint64_t roomID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::Room>, false>(nullptr, ___internal_method, roomID);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::Room> Oculus::Platform::Rooms::GetCurrent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "GetCurrent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::Room>, false>(nullptr, ___internal_method);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::Room> Oculus::Platform::Rooms::GetCurrentForUser(uint64_t userID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "GetCurrentForUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::Room>, false>(nullptr, ___internal_method, userID);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::UserList> Oculus::Platform::Rooms::GetInvitableUsers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "GetInvitableUsers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::UserList>, false>(nullptr, ___internal_method);
}
/// @param roomOptions: Oculus::Platform::RoomOptions (default: csnull)
 Oculus::Platform::Request_1<Oculus::Platform::Models::UserList> Oculus::Platform::Rooms::GetInvitableUsers2(Oculus::Platform::RoomOptions roomOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "GetInvitableUsers2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::RoomOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::UserList>, false>(nullptr, ___internal_method, roomOptions);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::RoomList> Oculus::Platform::Rooms::GetModeratedRooms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "GetModeratedRooms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::RoomList>, false>(nullptr, ___internal_method);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::Room> Oculus::Platform::Rooms::InviteUser(uint64_t roomID, ::StringW inviteToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "InviteUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::Room>, false>(nullptr, ___internal_method, roomID, inviteToken);
}
/// @param subscribeToUpdates: bool (default: false)
 Oculus::Platform::Request_1<Oculus::Platform::Models::Room> Oculus::Platform::Rooms::Join(uint64_t roomID, bool subscribeToUpdates)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "Join",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::Room>, false>(nullptr, ___internal_method, roomID, subscribeToUpdates);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::Room> Oculus::Platform::Rooms::Join2(uint64_t roomID, Oculus::Platform::RoomOptions roomOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "Join2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::RoomOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::Room>, false>(nullptr, ___internal_method, roomID, roomOptions);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::Room> Oculus::Platform::Rooms::KickUser(uint64_t roomID, uint64_t userID, int32_t kickDurationSeconds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "KickUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::Room>, false>(nullptr, ___internal_method, roomID, userID, kickDurationSeconds);
}
 Oculus::Platform::Request Oculus::Platform::Rooms::LaunchInvitableUserFlow(uint64_t roomID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "LaunchInvitableUserFlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request, false>(nullptr, ___internal_method, roomID);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::Room> Oculus::Platform::Rooms::Leave(uint64_t roomID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "Leave",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::Room>, false>(nullptr, ___internal_method, roomID);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::Room> Oculus::Platform::Rooms::SetDescription(uint64_t roomID, ::StringW description)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "SetDescription",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::Room>, false>(nullptr, ___internal_method, roomID, description);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::Room> Oculus::Platform::Rooms::UpdateMembershipLockStatus(uint64_t roomID, Oculus::Platform::RoomMembershipLockStatus membershipLockStatus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "UpdateMembershipLockStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::RoomMembershipLockStatus>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::Room>, false>(nullptr, ___internal_method, roomID, membershipLockStatus);
}
 Oculus::Platform::Request Oculus::Platform::Rooms::UpdateOwner(uint64_t roomID, uint64_t userID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "UpdateOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request, false>(nullptr, ___internal_method, roomID, userID);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::Room> Oculus::Platform::Rooms::UpdatePrivateRoomJoinPolicy(uint64_t roomID, Oculus::Platform::RoomJoinPolicy newJoinPolicy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "UpdatePrivateRoomJoinPolicy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::RoomJoinPolicy>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::Room>, false>(nullptr, ___internal_method, roomID, newJoinPolicy);
}
 void Oculus::Platform::Rooms::SetRoomInviteAcceptedNotificationCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<::StringW> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "SetRoomInviteAcceptedNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message_1__Callback<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
 void Oculus::Platform::Rooms::SetRoomInviteReceivedNotificationCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::RoomInviteNotification> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "SetRoomInviteReceivedNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::RoomInviteNotification>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
 void Oculus::Platform::Rooms::SetUpdateNotificationCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::Room> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "SetUpdateNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::Room>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::RoomList> Oculus::Platform::Rooms::GetNextRoomListPage(Oculus::Platform::Models::RoomList list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Rooms>::get(),
                            "GetNextRoomListPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::RoomList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::RoomList>, false>(nullptr, ___internal_method, list);
}
