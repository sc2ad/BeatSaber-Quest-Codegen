#pragma once
namespace {
#include "Oculus/Platform/Models/zzzz__GroupPresenceLeaveIntent_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::GroupPresenceLeaveIntent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::GroupPresenceLeaveIntent::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::GroupPresenceLeaveIntent::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x259ec04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::GroupPresenceLeaveIntent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Oculus::Platform::Models::GroupPresenceLeaveIntent::__set_DestinationApiName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Oculus::Platform::Models::GroupPresenceLeaveIntent::__get_DestinationApiName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::GroupPresenceLeaveIntent::__set_LobbySessionId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Oculus::Platform::Models::GroupPresenceLeaveIntent::__get_LobbySessionId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::GroupPresenceLeaveIntent::__set_MatchSessionId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Oculus::Platform::Models::GroupPresenceLeaveIntent::__get_MatchSessionId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::Oculus::Platform::Models::GroupPresenceLeaveIntent::GroupPresenceLeaveIntent(::cordl_internals::intptr_t o)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GroupPresenceLeaveIntent>(o))) {}
 void ::Oculus::Platform::Models::GroupPresenceLeaveIntent::_ctor(::cordl_internals::intptr_t o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::GroupPresenceLeaveIntent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
} // end anonymous namespace
