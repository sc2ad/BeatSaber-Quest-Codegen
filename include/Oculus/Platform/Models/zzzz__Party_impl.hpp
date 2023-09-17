#pragma once
namespace {
#include "Oculus/Platform/Models/zzzz__Party_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "Oculus/Platform/Models/zzzz__Room_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::Party._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::Party::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::Party::_ctor)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x25a1c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Party>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Oculus::Platform::Models::Party::__set_ID(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::Oculus::Platform::Models::Party::__get_ID() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::Party::__set_InvitedUsersOptional(::Oculus::Platform::Models::UserList value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::UserList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::UserList>(value));
}
constexpr ::Oculus::Platform::Models::UserList ::Oculus::Platform::Models::Party::__get_InvitedUsersOptional() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::Party::__set_InvitedUsers(::Oculus::Platform::Models::UserList value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::UserList, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::UserList>(value));
}
constexpr ::Oculus::Platform::Models::UserList ::Oculus::Platform::Models::Party::__get_InvitedUsers() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::Party::__set_LeaderOptional(::Oculus::Platform::Models::User value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::User, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::User>(value));
}
constexpr ::Oculus::Platform::Models::User ::Oculus::Platform::Models::Party::__get_LeaderOptional() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::User, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::Party::__set_Leader(::Oculus::Platform::Models::User value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::User, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::User>(value));
}
constexpr ::Oculus::Platform::Models::User ::Oculus::Platform::Models::Party::__get_Leader() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::User, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::Party::__set_RoomOptional(::Oculus::Platform::Models::Room value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::Room, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::Room>(value));
}
constexpr ::Oculus::Platform::Models::Room ::Oculus::Platform::Models::Party::__get_RoomOptional() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::Room, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::Party::__set_Room(::Oculus::Platform::Models::Room value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::Room, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::Room>(value));
}
constexpr ::Oculus::Platform::Models::Room ::Oculus::Platform::Models::Party::__get_Room() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::Room, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::Party::__set_UsersOptional(::Oculus::Platform::Models::UserList value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::UserList, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::UserList>(value));
}
constexpr ::Oculus::Platform::Models::UserList ::Oculus::Platform::Models::Party::__get_UsersOptional() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::Party::__set_Users(::Oculus::Platform::Models::UserList value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::UserList, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::UserList>(value));
}
constexpr ::Oculus::Platform::Models::UserList ::Oculus::Platform::Models::Party::__get_Users() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::Oculus::Platform::Models::Party::Party(::cordl_internals::intptr_t o)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Party>(o))) {}
 void ::Oculus::Platform::Models::Party::_ctor(::cordl_internals::intptr_t o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Party>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
} // end anonymous namespace
