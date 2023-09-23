#pragma once
#include "Oculus/Platform/Models/zzzz__Room_def.hpp"
#include "Oculus/Platform/zzzz__RoomJoinPolicy_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueuedUserList_def.hpp"
#include "Oculus/Platform/zzzz__RoomJoinability_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "Oculus/Platform/zzzz__RoomType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "Oculus/Platform/Models/zzzz__TeamList_def.hpp"
//  Writing Method size for method: Oculus::Platform::Models::Room._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Models::Room::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::Models::Room::_ctor)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x25a0e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::Room>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::Room::__set_ApplicationID(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t Oculus::Platform::Models::Room::__get_ApplicationID() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::Room::__set_DataStore(System::Collections::Generic::Dictionary_2<::StringW,::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,::StringW>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,::StringW>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,::StringW> Oculus::Platform::Models::Room::__get_DataStore() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,::StringW>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::Room::__set_Description(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Oculus::Platform::Models::Room::__get_Description() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::Room::__set_ID(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t Oculus::Platform::Models::Room::__get_ID() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::Room::__set_InvitedUsersOptional(Oculus::Platform::Models::UserList value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Models::UserList, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Models::UserList>(value));
}
constexpr Oculus::Platform::Models::UserList Oculus::Platform::Models::Room::__get_InvitedUsersOptional() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Models::UserList, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::Room::__set_InvitedUsers(Oculus::Platform::Models::UserList value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Models::UserList, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Models::UserList>(value));
}
constexpr Oculus::Platform::Models::UserList Oculus::Platform::Models::Room::__get_InvitedUsers() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Models::UserList, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::Room::__set_IsMembershipLocked(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Oculus::Platform::Models::Room::__get_IsMembershipLocked() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::Room::__set_JoinPolicy(Oculus::Platform::RoomJoinPolicy value)  {
::cordl_internals::setInstanceField<Oculus::Platform::RoomJoinPolicy, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::RoomJoinPolicy>(value));
}
constexpr Oculus::Platform::RoomJoinPolicy Oculus::Platform::Models::Room::__get_JoinPolicy() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::RoomJoinPolicy, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::Room::__set_Joinability(Oculus::Platform::RoomJoinability value)  {
::cordl_internals::setInstanceField<Oculus::Platform::RoomJoinability, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::RoomJoinability>(value));
}
constexpr Oculus::Platform::RoomJoinability Oculus::Platform::Models::Room::__get_Joinability() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::RoomJoinability, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::Room::__set_MatchedUsersOptional(Oculus::Platform::Models::MatchmakingEnqueuedUserList value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Models::MatchmakingEnqueuedUserList, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Models::MatchmakingEnqueuedUserList>(value));
}
constexpr Oculus::Platform::Models::MatchmakingEnqueuedUserList Oculus::Platform::Models::Room::__get_MatchedUsersOptional() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Models::MatchmakingEnqueuedUserList, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::Room::__set_MatchedUsers(Oculus::Platform::Models::MatchmakingEnqueuedUserList value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Models::MatchmakingEnqueuedUserList, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Models::MatchmakingEnqueuedUserList>(value));
}
constexpr Oculus::Platform::Models::MatchmakingEnqueuedUserList Oculus::Platform::Models::Room::__get_MatchedUsers() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Models::MatchmakingEnqueuedUserList, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::Room::__set_MaxUsers(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t Oculus::Platform::Models::Room::__get_MaxUsers() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::Room::__set_Name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Oculus::Platform::Models::Room::__get_Name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::Room::__set_OwnerOptional(Oculus::Platform::Models::User value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Models::User, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Models::User>(value));
}
constexpr Oculus::Platform::Models::User Oculus::Platform::Models::Room::__get_OwnerOptional() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Models::User, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::Room::__set_Owner(Oculus::Platform::Models::User value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Models::User, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Models::User>(value));
}
constexpr Oculus::Platform::Models::User Oculus::Platform::Models::Room::__get_Owner() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Models::User, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::Room::__set_TeamsOptional(Oculus::Platform::Models::TeamList value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Models::TeamList, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Models::TeamList>(value));
}
constexpr Oculus::Platform::Models::TeamList Oculus::Platform::Models::Room::__get_TeamsOptional() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Models::TeamList, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::Room::__set_Teams(Oculus::Platform::Models::TeamList value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Models::TeamList, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Models::TeamList>(value));
}
constexpr Oculus::Platform::Models::TeamList Oculus::Platform::Models::Room::__get_Teams() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Models::TeamList, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::Room::__set_Type(Oculus::Platform::RoomType value)  {
::cordl_internals::setInstanceField<Oculus::Platform::RoomType, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::RoomType>(value));
}
constexpr Oculus::Platform::RoomType Oculus::Platform::Models::Room::__get_Type() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::RoomType, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::Room::__set_UsersOptional(Oculus::Platform::Models::UserList value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Models::UserList, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Models::UserList>(value));
}
constexpr Oculus::Platform::Models::UserList Oculus::Platform::Models::Room::__get_UsersOptional() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Models::UserList, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::Room::__set_Users(Oculus::Platform::Models::UserList value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Models::UserList, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Models::UserList>(value));
}
constexpr Oculus::Platform::Models::UserList Oculus::Platform::Models::Room::__get_Users() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Models::UserList, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::Room::__set_Version(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t Oculus::Platform::Models::Room::__get_Version() const {
return ::cordl_internals::getInstanceField<uint32_t, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 Oculus::Platform::Models::Room::Room(::cordl_internals::intptr_t o)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Room>(o))) {}
 void Oculus::Platform::Models::Room::_ctor(::cordl_internals::intptr_t o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::Room>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
