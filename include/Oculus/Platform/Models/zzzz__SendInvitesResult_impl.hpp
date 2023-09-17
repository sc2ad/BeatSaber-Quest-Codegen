#pragma once
namespace {
#include "Oculus/Platform/Models/zzzz__SendInvitesResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationInviteList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::SendInvitesResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::SendInvitesResult::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::SendInvitesResult::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x25a32b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::SendInvitesResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Oculus::Platform::Models::SendInvitesResult::__set_Invites(::Oculus::Platform::Models::ApplicationInviteList value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::ApplicationInviteList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::ApplicationInviteList>(value));
}
constexpr ::Oculus::Platform::Models::ApplicationInviteList ::Oculus::Platform::Models::SendInvitesResult::__get_Invites() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::ApplicationInviteList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::Oculus::Platform::Models::SendInvitesResult::SendInvitesResult(::cordl_internals::intptr_t o)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SendInvitesResult>(o))) {}
 void ::Oculus::Platform::Models::SendInvitesResult::_ctor(::cordl_internals::intptr_t o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::SendInvitesResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
} // end anonymous namespace
