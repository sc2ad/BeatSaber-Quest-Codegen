#pragma once
#include "GlobalNamespace/zzzz__LobbyStateDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__IUnifiedNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyStateDataModel_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: GlobalNamespace::LobbyStateDataModel.add_playerConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyStateDataModel::*)(System::Action_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::LobbyStateDataModel::add_playerConnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21fd684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "add_playerConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyStateDataModel.remove_playerConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyStateDataModel::*)(System::Action_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::LobbyStateDataModel::remove_playerConnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21fd734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "remove_playerConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyStateDataModel.add_playerDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyStateDataModel::*)(System::Action_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::LobbyStateDataModel::add_playerDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21fd7e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "add_playerDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyStateDataModel.remove_playerDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyStateDataModel::*)(System::Action_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::LobbyStateDataModel::remove_playerDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21fd894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "remove_playerDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyStateDataModel.get_isConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LobbyStateDataModel::*)()>(&GlobalNamespace::LobbyStateDataModel::get_isConnected)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21fd944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "get_isConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyStateDataModel.get_localPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IConnectedPlayer (GlobalNamespace::LobbyStateDataModel::*)()>(&GlobalNamespace::LobbyStateDataModel::get_localPlayer)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x21fd9e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "get_localPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyStateDataModel.get_connectedPlayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> (GlobalNamespace::LobbyStateDataModel::*)()>(&GlobalNamespace::LobbyStateDataModel::get_connectedPlayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fda88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "get_connectedPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyStateDataModel.get_rawConnectedPlayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer> (GlobalNamespace::LobbyStateDataModel::*)()>(&GlobalNamespace::LobbyStateDataModel::get_rawConnectedPlayers)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21fda90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "get_rawConnectedPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyStateDataModel.get_configuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayServerConfiguration (GlobalNamespace::LobbyStateDataModel::*)()>(&GlobalNamespace::LobbyStateDataModel::get_configuration)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21fdb34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "get_configuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyStateDataModel.Activate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyStateDataModel::*)()>(&GlobalNamespace::LobbyStateDataModel::Activate)> {
  constexpr static std::size_t size = 0x7f0;
  constexpr static std::size_t addrs = 0x21fdb48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyStateDataModel.Deactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyStateDataModel::*)()>(&GlobalNamespace::LobbyStateDataModel::Deactivate)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x21fe338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "Deactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyStateDataModel.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyStateDataModel::*)()>(&GlobalNamespace::LobbyStateDataModel::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21fe4cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyStateDataModel.GetPlayerById
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IConnectedPlayer (GlobalNamespace::LobbyStateDataModel::*)(::StringW)>(&GlobalNamespace::LobbyStateDataModel::GetPlayerById)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x21fe4d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "GetPlayerById",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyStateDataModel.HandleMultiplayerSessionManagerPlayerConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyStateDataModel::*)(GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::LobbyStateDataModel::HandleMultiplayerSessionManagerPlayerConnected)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x21fe564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "HandleMultiplayerSessionManagerPlayerConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyStateDataModel.HandleMultiplayerSessionManagerPlayerDisconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyStateDataModel::*)(GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::LobbyStateDataModel::HandleMultiplayerSessionManagerPlayerDisconnected)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x21fe6d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "HandleMultiplayerSessionManagerPlayerDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyStateDataModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyStateDataModel::*)()>(&GlobalNamespace::LobbyStateDataModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fe7f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::ILobbyStateDataModel
constexpr  GlobalNamespace::LobbyStateDataModel::operator GlobalNamespace::ILobbyStateDataModel() const noexcept {
return GlobalNamespace::ILobbyStateDataModel(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::LobbyStateDataModel::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyStateDataModel::__set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IMultiplayerSessionManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IMultiplayerSessionManager>(value));
}
constexpr GlobalNamespace::IMultiplayerSessionManager GlobalNamespace::LobbyStateDataModel::__get__multiplayerSessionManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IMultiplayerSessionManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyStateDataModel::__set__unifiedNetworkPlayerModel(GlobalNamespace::IUnifiedNetworkPlayerModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IUnifiedNetworkPlayerModel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IUnifiedNetworkPlayerModel>(value));
}
constexpr GlobalNamespace::IUnifiedNetworkPlayerModel GlobalNamespace::LobbyStateDataModel::__get__unifiedNetworkPlayerModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IUnifiedNetworkPlayerModel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyStateDataModel::__set__connectedPlayers(System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> GlobalNamespace::LobbyStateDataModel::__get__connectedPlayers() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyStateDataModel::__set__connectedPlayersById(System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::IConnectedPlayer> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::IConnectedPlayer>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::IConnectedPlayer>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::IConnectedPlayer> GlobalNamespace::LobbyStateDataModel::__get__connectedPlayersById() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::IConnectedPlayer>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyStateDataModel::__set__configuration(GlobalNamespace::GameplayServerConfiguration value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayServerConfiguration>(value));
}
constexpr GlobalNamespace::GameplayServerConfiguration GlobalNamespace::LobbyStateDataModel::__get__configuration() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyStateDataModel::__set_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::IConnectedPlayer>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::IConnectedPlayer>>(value));
}
constexpr System::Action_1<GlobalNamespace::IConnectedPlayer> GlobalNamespace::LobbyStateDataModel::__get_playerConnectedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::IConnectedPlayer>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyStateDataModel::__set_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::IConnectedPlayer>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::IConnectedPlayer>>(value));
}
constexpr System::Action_1<GlobalNamespace::IConnectedPlayer> GlobalNamespace::LobbyStateDataModel::__get_playerDisconnectedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::IConnectedPlayer>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::LobbyStateDataModel::add_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "add_playerConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyStateDataModel::remove_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "remove_playerConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyStateDataModel::add_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "add_playerDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyStateDataModel::remove_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "remove_playerDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::LobbyStateDataModel::get_isConnected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "get_isConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::IConnectedPlayer GlobalNamespace::LobbyStateDataModel::get_localPlayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "get_localPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IConnectedPlayer, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> GlobalNamespace::LobbyStateDataModel::get_connectedPlayers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "get_connectedPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer> GlobalNamespace::LobbyStateDataModel::get_rawConnectedPlayers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "get_rawConnectedPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GameplayServerConfiguration GlobalNamespace::LobbyStateDataModel::get_configuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "get_configuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GameplayServerConfiguration, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LobbyStateDataModel::Activate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LobbyStateDataModel::Deactivate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "Deactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LobbyStateDataModel::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::IConnectedPlayer GlobalNamespace::LobbyStateDataModel::GetPlayerById(::StringW userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "GetPlayerById",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IConnectedPlayer, false>(const_cast<void*>(instance), ___internal_method, userId);
}
 void GlobalNamespace::LobbyStateDataModel::HandleMultiplayerSessionManagerPlayerConnected(GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "HandleMultiplayerSessionManagerPlayerConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player);
}
 void GlobalNamespace::LobbyStateDataModel::HandleMultiplayerSessionManagerPlayerDisconnected(GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            "HandleMultiplayerSessionManagerPlayerDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player);
}
// Ctor Parameters []
 GlobalNamespace::LobbyStateDataModel::LobbyStateDataModel()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LobbyStateDataModel>())) {}
 void GlobalNamespace::LobbyStateDataModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyStateDataModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
