#pragma once
#include "GlobalNamespace/zzzz__GetXPlatformAccessTokenResponse_def.hpp"
//  Writing Method size for method: GlobalNamespace::GetXPlatformAccessTokenResponse._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GetXPlatformAccessTokenResponse::*)(::StringW)>(&GlobalNamespace::GetXPlatformAccessTokenResponse::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x221fa28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GetXPlatformAccessTokenResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GetXPlatformAccessTokenResponse::__set_accessToken(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GetXPlatformAccessTokenResponse::__get_accessToken() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GetXPlatformAccessTokenResponse GlobalNamespace::GetXPlatformAccessTokenResponse::New_ctor(::StringW accessToken)  {
GlobalNamespace::GetXPlatformAccessTokenResponse o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GetXPlatformAccessTokenResponse>(accessToken))};
return o;
}
 void GlobalNamespace::GetXPlatformAccessTokenResponse::_ctor(::StringW accessToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GetXPlatformAccessTokenResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, accessToken);
}
