#pragma once
#include "GlobalNamespace/zzzz__AvatarDataMultiplayerAvatarDataConverter_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarData_def.hpp"
#include "GlobalNamespace/zzzz__AvatarData_def.hpp"
//  Writing Method size for method: GlobalNamespace::AvatarDataMultiplayerAvatarDataConverter.CreateMultiplayerAvatarData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerAvatarData (*)(GlobalNamespace::AvatarData)>(&GlobalNamespace::AvatarDataMultiplayerAvatarDataConverter::CreateMultiplayerAvatarData)> {
  constexpr static std::size_t size = 0x1710;
  constexpr static std::size_t addrs = 0x2227b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AvatarDataMultiplayerAvatarDataConverter>::get(),
                            "CreateMultiplayerAvatarData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::AvatarData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AvatarDataMultiplayerAvatarDataConverter.CreateAvatarData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AvatarData (*)(GlobalNamespace::MultiplayerAvatarData)>(&GlobalNamespace::AvatarDataMultiplayerAvatarDataConverter::CreateAvatarData)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x2229258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AvatarDataMultiplayerAvatarDataConverter>::get(),
                            "CreateAvatarData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerAvatarData>::get()}
                        )));
    return ___internal_method;
  }
};
 GlobalNamespace::MultiplayerAvatarData GlobalNamespace::AvatarDataMultiplayerAvatarDataConverter::CreateMultiplayerAvatarData(GlobalNamespace::AvatarData avatarData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AvatarDataMultiplayerAvatarDataConverter>::get(),
                            "CreateMultiplayerAvatarData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::AvatarData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::MultiplayerAvatarData, false>(nullptr, ___internal_method, avatarData);
}
 GlobalNamespace::AvatarData GlobalNamespace::AvatarDataMultiplayerAvatarDataConverter::CreateAvatarData(GlobalNamespace::MultiplayerAvatarData multiplayerAvatarData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AvatarDataMultiplayerAvatarDataConverter>::get(),
                            "CreateAvatarData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerAvatarData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::AvatarData, false>(nullptr, ___internal_method, multiplayerAvatarData);
}
