#pragma once
#include "GlobalNamespace/zzzz__MultiplayerLocalPlayerDisconnectHelper_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__IGameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerLevelEndActionsListener_def.hpp"
#include "GlobalNamespace/zzzz__LobbyPlayerPermissionsModel_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper.Disconnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::*)(GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState, GlobalNamespace::LevelCompletionResults)>(&GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::Disconnect)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x20e7b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelCompletionResults>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper.ResolveDisconnectButtonString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::*)()>(&GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::ResolveDisconnectButtonString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x20e9b00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper>::get(),
                            "ResolveDisconnectButtonString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::*)()>(&GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20e9b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::__set__gameplayRpcManager(GlobalNamespace::IGameplayRpcManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IGameplayRpcManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IGameplayRpcManager>(value));
}
constexpr GlobalNamespace::IGameplayRpcManager GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::__get__gameplayRpcManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IGameplayRpcManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::__set__multiplayerLevelEndActions(GlobalNamespace::IMultiplayerLevelEndActionsListener value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IMultiplayerLevelEndActionsListener, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IMultiplayerLevelEndActionsListener>(value));
}
constexpr GlobalNamespace::IMultiplayerLevelEndActionsListener GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::__get__multiplayerLevelEndActions() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IMultiplayerLevelEndActionsListener, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::__set__lobbyPlayerPermissionsModel(GlobalNamespace::LobbyPlayerPermissionsModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LobbyPlayerPermissionsModel, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LobbyPlayerPermissionsModel>(value));
}
constexpr GlobalNamespace::LobbyPlayerPermissionsModel GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::__get__lobbyPlayerPermissionsModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LobbyPlayerPermissionsModel, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::Disconnect(GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState playerLevelEndState, GlobalNamespace::LevelCompletionResults levelCompletionResults)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelCompletionResults>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playerLevelEndState, levelCompletionResults);
}
 ::StringW GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::ResolveDisconnectButtonString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper>::get(),
                            "ResolveDisconnectButtonString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::MultiplayerLocalPlayerDisconnectHelper()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MultiplayerLocalPlayerDisconnectHelper>())) {}
 void GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
