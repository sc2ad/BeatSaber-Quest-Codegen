#pragma once
namespace {
#include "Oculus/Platform/Models/zzzz__Challenge_def.hpp"
#include "Oculus/Platform/Models/zzzz__Leaderboard_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "Oculus/Platform/zzzz__ChallengeVisibility_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "Oculus/Platform/zzzz__ChallengeCreationType_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::Challenge._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::Challenge::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::Challenge::_ctor)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x259d79c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Challenge>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Oculus::Platform::Models::Challenge::__set_CreationType(::Oculus::Platform::ChallengeCreationType value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::ChallengeCreationType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::ChallengeCreationType>(value));
}
constexpr ::Oculus::Platform::ChallengeCreationType ::Oculus::Platform::Models::Challenge::__get_CreationType() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::ChallengeCreationType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::Challenge::__set_Description(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Oculus::Platform::Models::Challenge::__get_Description() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::Challenge::__set_EndDate(::System::DateTime value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime ::Oculus::Platform::Models::Challenge::__get_EndDate() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::Challenge::__set_ID(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::Oculus::Platform::Models::Challenge::__get_ID() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::Challenge::__set_InvitedUsersOptional(::Oculus::Platform::Models::UserList value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::UserList, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::UserList>(value));
}
constexpr ::Oculus::Platform::Models::UserList ::Oculus::Platform::Models::Challenge::__get_InvitedUsersOptional() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::Challenge::__set_InvitedUsers(::Oculus::Platform::Models::UserList value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::UserList, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::UserList>(value));
}
constexpr ::Oculus::Platform::Models::UserList ::Oculus::Platform::Models::Challenge::__get_InvitedUsers() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::Challenge::__set_Leaderboard(::Oculus::Platform::Models::Leaderboard value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::Leaderboard, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::Leaderboard>(value));
}
constexpr ::Oculus::Platform::Models::Leaderboard ::Oculus::Platform::Models::Challenge::__get_Leaderboard() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::Leaderboard, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::Challenge::__set_ParticipantsOptional(::Oculus::Platform::Models::UserList value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::UserList, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::UserList>(value));
}
constexpr ::Oculus::Platform::Models::UserList ::Oculus::Platform::Models::Challenge::__get_ParticipantsOptional() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::Challenge::__set_Participants(::Oculus::Platform::Models::UserList value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::UserList, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::UserList>(value));
}
constexpr ::Oculus::Platform::Models::UserList ::Oculus::Platform::Models::Challenge::__get_Participants() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::Challenge::__set_StartDate(::System::DateTime value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime ::Oculus::Platform::Models::Challenge::__get_StartDate() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::Challenge::__set_Title(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Oculus::Platform::Models::Challenge::__get_Title() const {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::Challenge::__set_Visibility(::Oculus::Platform::ChallengeVisibility value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::ChallengeVisibility, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::ChallengeVisibility>(value));
}
constexpr ::Oculus::Platform::ChallengeVisibility ::Oculus::Platform::Models::Challenge::__get_Visibility() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::ChallengeVisibility, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::Oculus::Platform::Models::Challenge::Challenge(::cordl_internals::intptr_t o)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Challenge>(o))) {}
 void ::Oculus::Platform::Models::Challenge::_ctor(::cordl_internals::intptr_t o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Challenge>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
} // end anonymous namespace
