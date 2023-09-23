#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyInstaller_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyAvatarController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyAvatarPlace_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyInstaller::*)()>(&GlobalNamespace::MultiplayerLobbyInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x211abe4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MultiplayerLobbyInstaller),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyInstaller>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyInstaller::*)()>(&GlobalNamespace::MultiplayerLobbyInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211acd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerLobbyInstaller::__set__multiplayerLobbyAvatarControllerPrefab(GlobalNamespace::MultiplayerLobbyAvatarController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerLobbyAvatarController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerLobbyAvatarController>(value));
}
constexpr GlobalNamespace::MultiplayerLobbyAvatarController GlobalNamespace::MultiplayerLobbyInstaller::__get__multiplayerLobbyAvatarControllerPrefab() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerLobbyAvatarController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLobbyInstaller::__set__multiplayerAvatarPlacePrefab(GlobalNamespace::MultiplayerLobbyAvatarPlace value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerLobbyAvatarPlace, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerLobbyAvatarPlace>(value));
}
constexpr GlobalNamespace::MultiplayerLobbyAvatarPlace GlobalNamespace::MultiplayerLobbyInstaller::__get__multiplayerAvatarPlacePrefab() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerLobbyAvatarPlace, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MultiplayerLobbyInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyInstaller>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::MultiplayerLobbyInstaller::MultiplayerLobbyInstaller()  : Zenject::MonoInstaller(THROW_UNLESS(::il2cpp_utils::New<MultiplayerLobbyInstaller>())) {}
 void GlobalNamespace::MultiplayerLobbyInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
