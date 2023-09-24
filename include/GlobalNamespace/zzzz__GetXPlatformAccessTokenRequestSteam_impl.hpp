#pragma once
#include "GlobalNamespace/zzzz__GetXPlatformAccessTokenRequestSteam_def.hpp"
//  Writing Method size for method: GlobalNamespace::GetXPlatformAccessTokenRequestSteam._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GetXPlatformAccessTokenRequestSteam::*)(::StringW, int64_t)>(&GlobalNamespace::GetXPlatformAccessTokenRequestSteam::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x221f9fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GetXPlatformAccessTokenRequestSteam>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GetXPlatformAccessTokenRequestSteam::__set_platformToken(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GetXPlatformAccessTokenRequestSteam::__get_platformToken() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GetXPlatformAccessTokenRequestSteam::__set_platformUserId(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::GetXPlatformAccessTokenRequestSteam::__get_platformUserId() const {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GetXPlatformAccessTokenRequestSteam GlobalNamespace::GetXPlatformAccessTokenRequestSteam::New_ctor(::StringW platformToken, int64_t platformUserId)  {
GlobalNamespace::GetXPlatformAccessTokenRequestSteam o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GetXPlatformAccessTokenRequestSteam>(platformToken, platformUserId))};
return o;
}
 void GlobalNamespace::GetXPlatformAccessTokenRequestSteam::_ctor(::StringW platformToken, int64_t platformUserId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GetXPlatformAccessTokenRequestSteam>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, platformToken, platformUserId);
}
