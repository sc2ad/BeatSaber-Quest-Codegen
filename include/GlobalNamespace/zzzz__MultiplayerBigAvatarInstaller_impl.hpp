#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBigAvatarInstaller_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__PlayersSpecificSettingsAtGameStartModel_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultiplayerBigAvatarInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerBigAvatarInstaller::*)()>(&GlobalNamespace::MultiplayerBigAvatarInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x20f05e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MultiplayerBigAvatarInstaller),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerBigAvatarInstaller>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerBigAvatarInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerBigAvatarInstaller::*)()>(&GlobalNamespace::MultiplayerBigAvatarInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f0808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerBigAvatarInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerBigAvatarInstaller::__set__connectedPlayer(GlobalNamespace::IConnectedPlayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IConnectedPlayer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IConnectedPlayer>(value));
}
constexpr GlobalNamespace::IConnectedPlayer GlobalNamespace::MultiplayerBigAvatarInstaller::__get__connectedPlayer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IConnectedPlayer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerBigAvatarInstaller::__set__saberManagerInitData(GlobalNamespace::GlobalNamespace__SaberManager__InitData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__SaberManager__InitData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__SaberManager__InitData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__SaberManager__InitData GlobalNamespace::MultiplayerBigAvatarInstaller::__get__saberManagerInitData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__SaberManager__InitData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerBigAvatarInstaller::__set__playerSpecificSettings(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayersSpecificSettingsAtGameStartModel, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayersSpecificSettingsAtGameStartModel>(value));
}
constexpr GlobalNamespace::PlayersSpecificSettingsAtGameStartModel GlobalNamespace::MultiplayerBigAvatarInstaller::__get__playerSpecificSettings() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayersSpecificSettingsAtGameStartModel, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MultiplayerBigAvatarInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerBigAvatarInstaller>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::MultiplayerBigAvatarInstaller GlobalNamespace::MultiplayerBigAvatarInstaller::New_ctor()  {
GlobalNamespace::MultiplayerBigAvatarInstaller o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MultiplayerBigAvatarInstaller>())};
return o;
}
 void GlobalNamespace::MultiplayerBigAvatarInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerBigAvatarInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
