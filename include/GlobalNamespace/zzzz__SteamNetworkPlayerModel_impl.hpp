#pragma once
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_impl.hpp"
#include "GlobalNamespace/zzzz__SteamNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModel_def.hpp"
//  Writing Method size for method: GlobalNamespace::SteamNetworkPlayerModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamNetworkPlayerModel::*)()>(&GlobalNamespace::SteamNetworkPlayerModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22126dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SteamNetworkPlayerModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::INetworkPlayerModel
constexpr  GlobalNamespace::SteamNetworkPlayerModel::operator GlobalNamespace::INetworkPlayerModel() const noexcept {
return GlobalNamespace::INetworkPlayerModel(::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::SteamNetworkPlayerModel GlobalNamespace::SteamNetworkPlayerModel::New_ctor()  {
GlobalNamespace::SteamNetworkPlayerModel o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::SteamNetworkPlayerModel>())};
return o;
}
 void GlobalNamespace::SteamNetworkPlayerModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SteamNetworkPlayerModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
