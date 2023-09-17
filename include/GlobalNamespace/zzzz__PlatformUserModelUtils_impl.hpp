#pragma once
namespace {
#include "GlobalNamespace/zzzz__PlatformUserModelUtils_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlatformUserModelUtils.ValidateXPlatformAccessToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::PlatformUserModelUtils::ValidateXPlatformAccessToken)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2211370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUserModelUtils>::get(),
                            "ValidateXPlatformAccessToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 bool ::GlobalNamespace::PlatformUserModelUtils::ValidateXPlatformAccessToken(::StringW token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUserModelUtils>::get(),
                            "ValidateXPlatformAccessToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, token);
}
} // end anonymous namespace
