#pragma once
#include "Oculus/Platform/zzzz__Users_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserCapabilityList_def.hpp"
#include "Oculus/Platform/zzzz__UserOptions_def.hpp"
#include "Oculus/Platform/Models/zzzz__OrgScopedID_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserAndRoomList_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "Oculus/Platform/Models/zzzz__SdkAccountList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchBlockFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchFriendRequestFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__BlockedUserList_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserProof_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchUnblockFlowResult_def.hpp"
//  Writing Method size for method: Oculus::Platform::Users.GetLoggedInUserLocale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Oculus::Platform::Users::GetLoggedInUserLocale)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x258dbe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetLoggedInUserLocale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Users.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::User> (*)(uint64_t)>(&Oculus::Platform::Users::Get)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x258dcbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Users.GetAccessToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<::StringW> (*)()>(&Oculus::Platform::Users::GetAccessToken)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x258de1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetAccessToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Users.GetBlockedUsers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::BlockedUserList> (*)()>(&Oculus::Platform::Users::GetBlockedUsers)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x258df74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetBlockedUsers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Users.GetLoggedInUser
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::User> (*)()>(&Oculus::Platform::Users::GetLoggedInUser)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x258e0cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetLoggedInUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Users.GetLoggedInUserFriends
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::UserList> (*)()>(&Oculus::Platform::Users::GetLoggedInUserFriends)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x258e224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetLoggedInUserFriends",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Users.GetLoggedInUserFriendsAndRooms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::UserAndRoomList> (*)()>(&Oculus::Platform::Users::GetLoggedInUserFriendsAndRooms)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x258e37c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetLoggedInUserFriendsAndRooms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Users.GetLoggedInUserRecentlyMetUsersAndRooms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::UserAndRoomList> (*)(Oculus::Platform::UserOptions)>(&Oculus::Platform::Users::GetLoggedInUserRecentlyMetUsersAndRooms)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x258e4d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetLoggedInUserRecentlyMetUsersAndRooms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::UserOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Users.GetOrgScopedID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::OrgScopedID> (*)(uint64_t)>(&Oculus::Platform::Users::GetOrgScopedID)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x258e648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetOrgScopedID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Users.GetSdkAccounts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::SdkAccountList> (*)()>(&Oculus::Platform::Users::GetSdkAccounts)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x258e7a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetSdkAccounts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Users.GetUserProof
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::UserProof> (*)()>(&Oculus::Platform::Users::GetUserProof)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x258e900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetUserProof",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Users.LaunchBlockFlow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::LaunchBlockFlowResult> (*)(uint64_t)>(&Oculus::Platform::Users::LaunchBlockFlow)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x258ea58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "LaunchBlockFlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Users.LaunchFriendRequestFlow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::LaunchFriendRequestFlowResult> (*)(uint64_t)>(&Oculus::Platform::Users::LaunchFriendRequestFlow)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x258ebb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "LaunchFriendRequestFlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Users.LaunchUnblockFlow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::LaunchUnblockFlowResult> (*)(uint64_t)>(&Oculus::Platform::Users::LaunchUnblockFlow)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x258ed18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "LaunchUnblockFlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Users.GetNextBlockedUserListPage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::BlockedUserList> (*)(Oculus::Platform::Models::BlockedUserList)>(&Oculus::Platform::Users::GetNextBlockedUserListPage)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x258ee78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetNextBlockedUserListPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::BlockedUserList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Users.GetNextUserAndRoomListPage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::UserAndRoomList> (*)(Oculus::Platform::Models::UserAndRoomList)>(&Oculus::Platform::Users::GetNextUserAndRoomListPage)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x258f054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetNextUserAndRoomListPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::UserAndRoomList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Users.GetNextUserListPage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::UserList> (*)(Oculus::Platform::Models::UserList)>(&Oculus::Platform::Users::GetNextUserListPage)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x258f230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetNextUserListPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::UserList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Users.GetNextUserCapabilityListPage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::UserCapabilityList> (*)(Oculus::Platform::Models::UserCapabilityList)>(&Oculus::Platform::Users::GetNextUserCapabilityListPage)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x258f40c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetNextUserCapabilityListPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::UserCapabilityList>::get()}
                        )));
    return ___internal_method;
  }
};
 ::StringW Oculus::Platform::Users::GetLoggedInUserLocale()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetLoggedInUserLocale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::User> Oculus::Platform::Users::Get(uint64_t userID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::User>, false>(nullptr, ___internal_method, userID);
}
 Oculus::Platform::Request_1<::StringW> Oculus::Platform::Users::GetAccessToken()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetAccessToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<::StringW>, false>(nullptr, ___internal_method);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::BlockedUserList> Oculus::Platform::Users::GetBlockedUsers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetBlockedUsers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::BlockedUserList>, false>(nullptr, ___internal_method);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::User> Oculus::Platform::Users::GetLoggedInUser()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetLoggedInUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::User>, false>(nullptr, ___internal_method);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::UserList> Oculus::Platform::Users::GetLoggedInUserFriends()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetLoggedInUserFriends",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::UserList>, false>(nullptr, ___internal_method);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::UserAndRoomList> Oculus::Platform::Users::GetLoggedInUserFriendsAndRooms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetLoggedInUserFriendsAndRooms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::UserAndRoomList>, false>(nullptr, ___internal_method);
}
/// @param userOptions: Oculus::Platform::UserOptions (default: csnull)
 Oculus::Platform::Request_1<Oculus::Platform::Models::UserAndRoomList> Oculus::Platform::Users::GetLoggedInUserRecentlyMetUsersAndRooms(Oculus::Platform::UserOptions userOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetLoggedInUserRecentlyMetUsersAndRooms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::UserOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::UserAndRoomList>, false>(nullptr, ___internal_method, userOptions);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::OrgScopedID> Oculus::Platform::Users::GetOrgScopedID(uint64_t userID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetOrgScopedID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::OrgScopedID>, false>(nullptr, ___internal_method, userID);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::SdkAccountList> Oculus::Platform::Users::GetSdkAccounts()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetSdkAccounts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::SdkAccountList>, false>(nullptr, ___internal_method);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::UserProof> Oculus::Platform::Users::GetUserProof()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetUserProof",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::UserProof>, false>(nullptr, ___internal_method);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::LaunchBlockFlowResult> Oculus::Platform::Users::LaunchBlockFlow(uint64_t userID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "LaunchBlockFlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::LaunchBlockFlowResult>, false>(nullptr, ___internal_method, userID);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::LaunchFriendRequestFlowResult> Oculus::Platform::Users::LaunchFriendRequestFlow(uint64_t userID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "LaunchFriendRequestFlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::LaunchFriendRequestFlowResult>, false>(nullptr, ___internal_method, userID);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::LaunchUnblockFlowResult> Oculus::Platform::Users::LaunchUnblockFlow(uint64_t userID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "LaunchUnblockFlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::LaunchUnblockFlowResult>, false>(nullptr, ___internal_method, userID);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::BlockedUserList> Oculus::Platform::Users::GetNextBlockedUserListPage(Oculus::Platform::Models::BlockedUserList list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetNextBlockedUserListPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::BlockedUserList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::BlockedUserList>, false>(nullptr, ___internal_method, list);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::UserAndRoomList> Oculus::Platform::Users::GetNextUserAndRoomListPage(Oculus::Platform::Models::UserAndRoomList list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetNextUserAndRoomListPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::UserAndRoomList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::UserAndRoomList>, false>(nullptr, ___internal_method, list);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::UserList> Oculus::Platform::Users::GetNextUserListPage(Oculus::Platform::Models::UserList list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetNextUserListPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::UserList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::UserList>, false>(nullptr, ___internal_method, list);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::UserCapabilityList> Oculus::Platform::Users::GetNextUserCapabilityListPage(Oculus::Platform::Models::UserCapabilityList list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Users>::get(),
                            "GetNextUserCapabilityListPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::UserCapabilityList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::UserCapabilityList>, false>(nullptr, ___internal_method, list);
}
