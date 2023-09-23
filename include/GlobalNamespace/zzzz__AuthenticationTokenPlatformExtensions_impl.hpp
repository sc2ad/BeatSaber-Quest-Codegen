#pragma once
#include "GlobalNamespace/zzzz__AuthenticationTokenPlatformExtensions_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
//  Writing Method size for method: GlobalNamespace::AuthenticationTokenPlatformExtensions.ToAuthenticationTokenPlatform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform (*)(GlobalNamespace::GlobalNamespace__UserInfo__Platform)>(&GlobalNamespace::AuthenticationTokenPlatformExtensions::ToAuthenticationTokenPlatform)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x220192c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AuthenticationTokenPlatformExtensions>::get(),
                            "ToAuthenticationTokenPlatform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__UserInfo__Platform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AuthenticationTokenPlatformExtensions.ToUserInfoPlatform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__UserInfo__Platform (*)(GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform)>(&GlobalNamespace::AuthenticationTokenPlatformExtensions::ToUserInfoPlatform)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2201954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AuthenticationTokenPlatformExtensions>::get(),
                            "ToUserInfoPlatform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform>::get()}
                        )));
    return ___internal_method;
  }
};
 GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform GlobalNamespace::AuthenticationTokenPlatformExtensions::ToAuthenticationTokenPlatform(GlobalNamespace::GlobalNamespace__UserInfo__Platform platform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AuthenticationTokenPlatformExtensions>::get(),
                            "ToAuthenticationTokenPlatform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__UserInfo__Platform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform, false>(nullptr, ___internal_method, platform);
}
 GlobalNamespace::GlobalNamespace__UserInfo__Platform GlobalNamespace::AuthenticationTokenPlatformExtensions::ToUserInfoPlatform(GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform platform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AuthenticationTokenPlatformExtensions>::get(),
                            "ToUserInfoPlatform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__UserInfo__Platform, false>(nullptr, ___internal_method, platform);
}
