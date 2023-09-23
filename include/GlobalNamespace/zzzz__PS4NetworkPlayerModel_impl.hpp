#pragma once
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_impl.hpp"
#include "GlobalNamespace/zzzz__PS4NetworkPlayerModel_def.hpp"
//  Writing Method size for method: GlobalNamespace::PS4NetworkPlayerModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PS4NetworkPlayerModel::*)()>(&GlobalNamespace::PS4NetworkPlayerModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2211770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS4NetworkPlayerModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::PS4NetworkPlayerModel::PS4NetworkPlayerModel()  : GlobalNamespace::PlatformNetworkPlayerModel(THROW_UNLESS(::il2cpp_utils::New<PS4NetworkPlayerModel>())) {}
 void GlobalNamespace::PS4NetworkPlayerModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS4NetworkPlayerModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
