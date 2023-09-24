#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyConnectionController_def.hpp"
#include "GlobalNamespace/zzzz__UnifiedNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "GlobalNamespace/zzzz__CreateServerFormData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyConnectionController_def.hpp"
#include "GlobalNamespace/zzzz__SelectMultiplayerLobbyDestination_def.hpp"
#include "GlobalNamespace/zzzz__IUnifiedNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState  GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState::None{0};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState  GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState::Connecting{1};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState  GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState::Connected{2};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState  GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState::ConnectionFailed{3};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType  GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType::None{0};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType  GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType::PartyHost{1};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType  GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType::PartyClient{2};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType  GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType::QuickPlay{3};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyConnectionController.add_connectionSuccessEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(System::Action)>(&GlobalNamespace::MultiplayerLobbyConnectionController::add_connectionSuccessEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21fe7fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "add_connectionSuccessEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyConnectionController.remove_connectionSuccessEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(System::Action)>(&GlobalNamespace::MultiplayerLobbyConnectionController::remove_connectionSuccessEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21fe898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "remove_connectionSuccessEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyConnectionController.add_connectionFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(System::Action_2<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType,GlobalNamespace::ConnectionFailedReason>)>(&GlobalNamespace::MultiplayerLobbyConnectionController::add_connectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21fe934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "add_connectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType,GlobalNamespace::ConnectionFailedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyConnectionController.remove_connectionFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(System::Action_2<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType,GlobalNamespace::ConnectionFailedReason>)>(&GlobalNamespace::MultiplayerLobbyConnectionController::remove_connectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21fe9e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "remove_connectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType,GlobalNamespace::ConnectionFailedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyConnectionController.get_connectionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState (GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(&GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fea94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "get_connectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyConnectionController.set_connectionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState)>(&GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fea9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "set_connectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyConnectionController.get_connectionType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType (GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(&GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21feaa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "get_connectionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyConnectionController.set_connectionType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType)>(&GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21feaac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "set_connectionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyConnectionController.get_connectionFailedReason
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ConnectionFailedReason (GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(&GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionFailedReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21feab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "get_connectionFailedReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyConnectionController.set_connectionFailedReason
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(GlobalNamespace::ConnectionFailedReason)>(&GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionFailedReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21feabc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "set_connectionFailedReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyConnectionController.CreateParty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(GlobalNamespace::CreateServerFormData)>(&GlobalNamespace::MultiplayerLobbyConnectionController::CreateParty)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x21feac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "CreateParty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::CreateServerFormData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyConnectionController.ConnectToParty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(::StringW)>(&GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToParty)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x21ff180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "ConnectToParty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyConnectionController.CreateOrConnectToDestinationParty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(GlobalNamespace::SelectMultiplayerLobbyDestination)>(&GlobalNamespace::MultiplayerLobbyConnectionController::CreateOrConnectToDestinationParty)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x21ff498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "CreateOrConnectToDestinationParty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SelectMultiplayerLobbyDestination>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyConnectionController.ConnectToServer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(GlobalNamespace::INetworkPlayer, ::StringW)>(&GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToServer)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x21ff8a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "ConnectToServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyConnectionController.ConnectToMatchmaking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(GlobalNamespace::BeatmapDifficultyMask, GlobalNamespace::SongPackMask, bool)>(&GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToMatchmaking)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x21ffadc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "ConnectToMatchmaking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDifficultyMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SongPackMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyConnectionController.LeaveLobby
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(&GlobalNamespace::MultiplayerLobbyConnectionController::LeaveLobby)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x21ffe0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "LeaveLobby",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyConnectionController.ClearCurrentConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(&GlobalNamespace::MultiplayerLobbyConnectionController::ClearCurrentConnection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ffeb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "ClearCurrentConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyConnectionController.HandleMultiplayerSessionManagerConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(&GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnected)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x21ffebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "HandleMultiplayerSessionManagerConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyConnectionController.HandleMultiplayerSessionManagerConnectionFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(GlobalNamespace::ConnectionFailedReason)>(&GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnectionFailed)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x21feef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "HandleMultiplayerSessionManagerConnectionFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyConnectionController.HandleMultiplayerSessionManagerConnectionFailedWithRetry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(GlobalNamespace::ConnectionFailedReason)>(&GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnectionFailedWithRetry)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2200130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "HandleMultiplayerSessionManagerConnectionFailedWithRetry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyConnectionController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(&GlobalNamespace::MultiplayerLobbyConnectionController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220025c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IMultiplayerSessionManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IMultiplayerSessionManager>(value));
}
constexpr GlobalNamespace::IMultiplayerSessionManager GlobalNamespace::MultiplayerLobbyConnectionController::__get__multiplayerSessionManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IMultiplayerSessionManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__set__unifiedNetworkPlayerModel(GlobalNamespace::IUnifiedNetworkPlayerModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IUnifiedNetworkPlayerModel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IUnifiedNetworkPlayerModel>(value));
}
constexpr GlobalNamespace::IUnifiedNetworkPlayerModel GlobalNamespace::MultiplayerLobbyConnectionController::__get__unifiedNetworkPlayerModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IUnifiedNetworkPlayerModel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__set_connectionSuccessEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::MultiplayerLobbyConnectionController::__get_connectionSuccessEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__set_connectionFailedEvent(System::Action_2<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType,GlobalNamespace::ConnectionFailedReason> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType,GlobalNamespace::ConnectionFailedReason>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType,GlobalNamespace::ConnectionFailedReason>>(value));
}
constexpr System::Action_2<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType,GlobalNamespace::ConnectionFailedReason> GlobalNamespace::MultiplayerLobbyConnectionController::__get_connectionFailedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType,GlobalNamespace::ConnectionFailedReason>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__set__connectionState_k__BackingField(GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState>(value));
}
constexpr GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState GlobalNamespace::MultiplayerLobbyConnectionController::__get__connectionState_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__set__connectionType_k__BackingField(GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType GlobalNamespace::MultiplayerLobbyConnectionController::__get__connectionType_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__set__connectionFailedReason_k__BackingField(GlobalNamespace::ConnectionFailedReason value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ConnectionFailedReason, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ConnectionFailedReason>(value));
}
constexpr GlobalNamespace::ConnectionFailedReason GlobalNamespace::MultiplayerLobbyConnectionController::__get__connectionFailedReason_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ConnectionFailedReason, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__set__partyConfig(GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig>(value));
}
constexpr GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig GlobalNamespace::MultiplayerLobbyConnectionController::__get__partyConfig() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__set__retryAttemptsLeft(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::MultiplayerLobbyConnectionController::__get__retryAttemptsLeft() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MultiplayerLobbyConnectionController::add_connectionSuccessEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "add_connectionSuccessEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerLobbyConnectionController::remove_connectionSuccessEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "remove_connectionSuccessEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerLobbyConnectionController::add_connectionFailedEvent(System::Action_2<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType,GlobalNamespace::ConnectionFailedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "add_connectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType,GlobalNamespace::ConnectionFailedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerLobbyConnectionController::remove_connectionFailedEvent(System::Action_2<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType,GlobalNamespace::ConnectionFailedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "remove_connectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType,GlobalNamespace::ConnectionFailedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "get_connectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionState(GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "set_connectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "get_connectionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionType(GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "set_connectionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::ConnectionFailedReason GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionFailedReason()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "get_connectionFailedReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::ConnectionFailedReason, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionFailedReason(GlobalNamespace::ConnectionFailedReason value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "set_connectionFailedReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerLobbyConnectionController::CreateParty(GlobalNamespace::CreateServerFormData data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "CreateParty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::CreateServerFormData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data);
}
 void GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToParty(::StringW serverCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "ConnectToParty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serverCode);
}
 void GlobalNamespace::MultiplayerLobbyConnectionController::CreateOrConnectToDestinationParty(GlobalNamespace::SelectMultiplayerLobbyDestination lobbyDestination)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "CreateOrConnectToDestinationParty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SelectMultiplayerLobbyDestination>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lobbyDestination);
}
/// @param password: ::StringW (default: csnull)
 void GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToServer(GlobalNamespace::INetworkPlayer server, ::StringW password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "ConnectToServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, server, password);
}
 void GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToMatchmaking(GlobalNamespace::BeatmapDifficultyMask beatmapDifficultyMask, GlobalNamespace::SongPackMask songPackMask, bool allowSongSelection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "ConnectToMatchmaking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDifficultyMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SongPackMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapDifficultyMask, songPackMask, allowSongSelection);
}
 void GlobalNamespace::MultiplayerLobbyConnectionController::LeaveLobby()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "LeaveLobby",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerLobbyConnectionController::ClearCurrentConnection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "ClearCurrentConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "HandleMultiplayerSessionManagerConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnectionFailed(GlobalNamespace::ConnectionFailedReason reason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "HandleMultiplayerSessionManagerConnectionFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reason);
}
 void GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnectionFailedWithRetry(GlobalNamespace::ConnectionFailedReason reason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            "HandleMultiplayerSessionManagerConnectionFailedWithRetry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reason);
}
 GlobalNamespace::MultiplayerLobbyConnectionController GlobalNamespace::MultiplayerLobbyConnectionController::New_ctor()  {
GlobalNamespace::MultiplayerLobbyConnectionController o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MultiplayerLobbyConnectionController>())};
return o;
}
 void GlobalNamespace::MultiplayerLobbyConnectionController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyConnectionController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
