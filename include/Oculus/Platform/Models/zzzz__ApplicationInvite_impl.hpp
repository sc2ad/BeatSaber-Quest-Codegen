#pragma once
namespace {
#include "Oculus/Platform/Models/zzzz__ApplicationInvite_def.hpp"
#include "Oculus/Platform/Models/zzzz__Destination_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::ApplicationInvite._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::ApplicationInvite::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::ApplicationInvite::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x259c320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::ApplicationInvite>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Oculus::Platform::Models::ApplicationInvite::__set_DestinationOptional(::Oculus::Platform::Models::Destination value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::Destination, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::Destination>(value));
}
constexpr ::Oculus::Platform::Models::Destination ::Oculus::Platform::Models::ApplicationInvite::__get_DestinationOptional() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::Destination, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::ApplicationInvite::__set_Destination(::Oculus::Platform::Models::Destination value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::Destination, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::Destination>(value));
}
constexpr ::Oculus::Platform::Models::Destination ::Oculus::Platform::Models::ApplicationInvite::__get_Destination() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::Destination, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::ApplicationInvite::__set_ID(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::Oculus::Platform::Models::ApplicationInvite::__get_ID() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::ApplicationInvite::__set_IsActive(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Oculus::Platform::Models::ApplicationInvite::__get_IsActive() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::ApplicationInvite::__set_LobbySessionId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Oculus::Platform::Models::ApplicationInvite::__get_LobbySessionId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::ApplicationInvite::__set_MatchSessionId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Oculus::Platform::Models::ApplicationInvite::__get_MatchSessionId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::ApplicationInvite::__set_RecipientOptional(::Oculus::Platform::Models::User value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::User, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::User>(value));
}
constexpr ::Oculus::Platform::Models::User ::Oculus::Platform::Models::ApplicationInvite::__get_RecipientOptional() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::User, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::ApplicationInvite::__set_Recipient(::Oculus::Platform::Models::User value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::User, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::User>(value));
}
constexpr ::Oculus::Platform::Models::User ::Oculus::Platform::Models::ApplicationInvite::__get_Recipient() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::User, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::Oculus::Platform::Models::ApplicationInvite::ApplicationInvite(::cordl_internals::intptr_t o)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ApplicationInvite>(o))) {}
 void ::Oculus::Platform::Models::ApplicationInvite::_ctor(::cordl_internals::intptr_t o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::ApplicationInvite>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
} // end anonymous namespace
