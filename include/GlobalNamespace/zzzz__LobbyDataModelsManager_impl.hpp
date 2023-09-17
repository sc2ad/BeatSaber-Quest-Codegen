#pragma once
namespace {
#include "GlobalNamespace/zzzz__LobbyDataModelsManager_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyPlayersDataModel_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyStateDataModel_def.hpp"
#include "GlobalNamespace/zzzz__LobbyPlayerPermissionsModel_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyGameStateController_def.hpp"
#include "GlobalNamespace/zzzz__INodePoseSyncStateManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LobbyDataModelsManager.Activate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyDataModelsManager::*)()>(&::GlobalNamespace::LobbyDataModelsManager::Activate)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x21f3358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyDataModelsManager>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyDataModelsManager.Deactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyDataModelsManager::*)()>(&::GlobalNamespace::LobbyDataModelsManager::Deactivate)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x21f3660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyDataModelsManager>::get(),
                            "Deactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyDataModelsManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyDataModelsManager::*)()>(&::GlobalNamespace::LobbyDataModelsManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f38f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyDataModelsManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::LobbyDataModelsManager::__set__lobbyStateDataModel(::GlobalNamespace::ILobbyStateDataModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ILobbyStateDataModel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ILobbyStateDataModel>(value));
}
constexpr ::GlobalNamespace::ILobbyStateDataModel ::GlobalNamespace::LobbyDataModelsManager::__get__lobbyStateDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ILobbyStateDataModel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LobbyDataModelsManager::__set__lobbyPlayersDataModel(::GlobalNamespace::ILobbyPlayersDataModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ILobbyPlayersDataModel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ILobbyPlayersDataModel>(value));
}
constexpr ::GlobalNamespace::ILobbyPlayersDataModel ::GlobalNamespace::LobbyDataModelsManager::__get__lobbyPlayersDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ILobbyPlayersDataModel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LobbyDataModelsManager::__set__lobbyGameStateController(::GlobalNamespace::ILobbyGameStateController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ILobbyGameStateController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ILobbyGameStateController>(value));
}
constexpr ::GlobalNamespace::ILobbyGameStateController ::GlobalNamespace::LobbyDataModelsManager::__get__lobbyGameStateController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ILobbyGameStateController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LobbyDataModelsManager::__set__nodePoseSyncStateManager(::GlobalNamespace::INodePoseSyncStateManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::INodePoseSyncStateManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::INodePoseSyncStateManager>(value));
}
constexpr ::GlobalNamespace::INodePoseSyncStateManager ::GlobalNamespace::LobbyDataModelsManager::__get__nodePoseSyncStateManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::INodePoseSyncStateManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LobbyDataModelsManager::__set__lobbyPlayerPermissionsModel(::GlobalNamespace::LobbyPlayerPermissionsModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LobbyPlayerPermissionsModel, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::LobbyPlayerPermissionsModel>(value));
}
constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel ::GlobalNamespace::LobbyDataModelsManager::__get__lobbyPlayerPermissionsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LobbyPlayerPermissionsModel, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::LobbyDataModelsManager::Activate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyDataModelsManager>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::LobbyDataModelsManager::Deactivate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyDataModelsManager>::get(),
                            "Deactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::LobbyDataModelsManager::LobbyDataModelsManager()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LobbyDataModelsManager>())) {}
 void ::GlobalNamespace::LobbyDataModelsManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyDataModelsManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
