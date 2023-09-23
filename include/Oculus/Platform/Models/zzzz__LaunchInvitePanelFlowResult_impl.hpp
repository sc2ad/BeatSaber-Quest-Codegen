#pragma once
#include "Oculus/Platform/Models/zzzz__LaunchInvitePanelFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
//  Writing Method size for method: Oculus::Platform::Models::LaunchInvitePanelFlowResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Models::LaunchInvitePanelFlowResult::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::Models::LaunchInvitePanelFlowResult::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x259f3d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::LaunchInvitePanelFlowResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::LaunchInvitePanelFlowResult::__set_InvitedUsers(Oculus::Platform::Models::UserList value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Models::UserList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Models::UserList>(value));
}
constexpr Oculus::Platform::Models::UserList Oculus::Platform::Models::LaunchInvitePanelFlowResult::__get_InvitedUsers() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Models::UserList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 Oculus::Platform::Models::LaunchInvitePanelFlowResult::LaunchInvitePanelFlowResult(::cordl_internals::intptr_t o)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LaunchInvitePanelFlowResult>(o))) {}
 void Oculus::Platform::Models::LaunchInvitePanelFlowResult::_ctor(::cordl_internals::intptr_t o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::LaunchInvitePanelFlowResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
