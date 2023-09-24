#pragma once
#include "GlobalNamespace/zzzz__GetXPlatformAccessTokenRequestSony_def.hpp"
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
//  Writing Method size for method: GlobalNamespace::GetXPlatformAccessTokenRequestSony._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GetXPlatformAccessTokenRequestSony::*)(::StringW, GlobalNamespace::PlatformEnvironment)>(&GlobalNamespace::GetXPlatformAccessTokenRequestSony::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x221f9cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GetXPlatformAccessTokenRequestSony>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlatformEnvironment>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GetXPlatformAccessTokenRequestSony::__set_platformToken(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GetXPlatformAccessTokenRequestSony::__get_platformToken() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GetXPlatformAccessTokenRequestSony::__set_platformEnvironment(GlobalNamespace::PlatformEnvironment value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlatformEnvironment, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlatformEnvironment>(value));
}
constexpr GlobalNamespace::PlatformEnvironment GlobalNamespace::GetXPlatformAccessTokenRequestSony::__get_platformEnvironment() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlatformEnvironment, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GetXPlatformAccessTokenRequestSony GlobalNamespace::GetXPlatformAccessTokenRequestSony::New_ctor(::StringW platformToken, GlobalNamespace::PlatformEnvironment platformEnvironment)  {
GlobalNamespace::GetXPlatformAccessTokenRequestSony o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GetXPlatformAccessTokenRequestSony>(platformToken, platformEnvironment))};
return o;
}
 void GlobalNamespace::GetXPlatformAccessTokenRequestSony::_ctor(::StringW platformToken, GlobalNamespace::PlatformEnvironment platformEnvironment)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GetXPlatformAccessTokenRequestSony>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlatformEnvironment>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, platformToken, platformEnvironment);
}
