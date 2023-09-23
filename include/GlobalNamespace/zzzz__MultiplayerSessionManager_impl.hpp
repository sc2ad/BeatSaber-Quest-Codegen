#pragma once
#include "GlobalNamespace/zzzz__StandaloneMonobehavior_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionManager_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPacketSubSerializer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__UpdateConnectionStateReason_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPacketSerializer_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType::GlobalNamespace__MultiplayerSessionManager__MessageType(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType  GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType::MenuRpc{0u};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType  GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType::GameplayRpc{1u};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType  GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType::NodePoseSyncState{2u};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType  GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType::ScoreSyncState{3u};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType  GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType::NodePoseSyncStateDelta{4u};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType  GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType::ScoreSyncStateDelta{5u};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__SessionType::GlobalNamespace__MultiplayerSessionManager__SessionType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__SessionType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__SessionType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__SessionType  GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__SessionType::Player{0};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__SessionType  GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__SessionType::Spectator{1};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__SessionType  GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__SessionType::DedicatedServer{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__ConnectionState::GlobalNamespace__MultiplayerSessionManager__ConnectionState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__ConnectionState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__ConnectionState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__ConnectionState  GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__ConnectionState::Disconnected{0};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__ConnectionState  GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__ConnectionState::Connecting{1};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__ConnectionState  GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__ConnectionState::Connected{2};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__ConnectionState  GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__ConnectionState::Disconnecting{3};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0::*)()>(&GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdbf7dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0._GetPlayerByUserId_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0::*)(GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0::_GetPlayerByUserId_b__0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdbfbd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0>::get(),
                            "<GetPlayerByUserId>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0::__set_userId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0::__get_userId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0::GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0>())) {}
 void GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0::_GetPlayerByUserId_b__0(GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0>::get(),
                            "<GetPlayerByUserId>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, player);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c::*)()>(&GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdbfce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c._TryUpdateConnectedPlayer_b__102_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c::*)(GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c::_TryUpdateConnectedPlayer_b__102_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xdbfcec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c>::get(),
                            "<TryUpdateConnectedPlayer>b__102_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c::__set___9(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c value)  {
::cordl_internals::setStaticField<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c>::get>(std::forward<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c>(value));
}
 GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c::__get___9()  {
return ::cordl_internals::getStaticField<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c::__set___9__102_0(System::Func_2<GlobalNamespace::IConnectedPlayer,int32_t> value)  {
::cordl_internals::setStaticField<System::Func_2<GlobalNamespace::IConnectedPlayer,int32_t>, "<>9__102_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c>::get>(std::forward<System::Func_2<GlobalNamespace::IConnectedPlayer,int32_t>>(value));
}
 System::Func_2<GlobalNamespace::IConnectedPlayer,int32_t> GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c::__get___9__102_0()  {
return ::cordl_internals::getStaticField<System::Func_2<GlobalNamespace::IConnectedPlayer,int32_t>, "<>9__102_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c>::get>();
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c::GlobalNamespace__MultiplayerSessionManager____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__MultiplayerSessionManager____c>())) {}
 void GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c::_TryUpdateConnectedPlayer_b__102_0(GlobalNamespace::IConnectedPlayer p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c>::get(),
                            "<TryUpdateConnectedPlayer>b__102_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, p);
}
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.add_connectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(System::Action)>(&GlobalNamespace::MultiplayerSessionManager::add_connectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xdbccdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "add_connectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.remove_connectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(System::Action)>(&GlobalNamespace::MultiplayerSessionManager::remove_connectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xdbcd78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "remove_connectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.add_connectionFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(System::Action_1<GlobalNamespace::ConnectionFailedReason>)>(&GlobalNamespace::MultiplayerSessionManager::add_connectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdbce14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "add_connectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ConnectionFailedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.remove_connectionFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(System::Action_1<GlobalNamespace::ConnectionFailedReason>)>(&GlobalNamespace::MultiplayerSessionManager::remove_connectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdbcec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "remove_connectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ConnectionFailedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.add_playerConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(System::Action_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::MultiplayerSessionManager::add_playerConnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdbcf74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "add_playerConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.remove_playerConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(System::Action_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::MultiplayerSessionManager::remove_playerConnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdbd024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "remove_playerConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.add_playerDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(System::Action_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::MultiplayerSessionManager::add_playerDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdbd0d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "add_playerDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.remove_playerDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(System::Action_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::MultiplayerSessionManager::remove_playerDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdbd184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "remove_playerDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.add_playerAvatarChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(System::Action_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::MultiplayerSessionManager::add_playerAvatarChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdbd234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "add_playerAvatarChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.remove_playerAvatarChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(System::Action_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::MultiplayerSessionManager::remove_playerAvatarChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdbd2e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "remove_playerAvatarChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.add_playerStateChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(System::Action_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::MultiplayerSessionManager::add_playerStateChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdbd394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "add_playerStateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.remove_playerStateChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(System::Action_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::MultiplayerSessionManager::remove_playerStateChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdbd444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "remove_playerStateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.add_connectionOwnerStateChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(System::Action_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::MultiplayerSessionManager::add_connectionOwnerStateChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdbd4f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "add_connectionOwnerStateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.remove_connectionOwnerStateChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(System::Action_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::MultiplayerSessionManager::remove_connectionOwnerStateChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdbd5a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "remove_connectionOwnerStateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.add_disconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(System::Action_1<GlobalNamespace::DisconnectedReason>)>(&GlobalNamespace::MultiplayerSessionManager::add_disconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdbd654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "add_disconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::DisconnectedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.remove_disconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(System::Action_1<GlobalNamespace::DisconnectedReason>)>(&GlobalNamespace::MultiplayerSessionManager::remove_disconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdbd704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "remove_disconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::DisconnectedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.add_pollUpdateEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(System::Action)>(&GlobalNamespace::MultiplayerSessionManager::add_pollUpdateEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xdbd7b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "add_pollUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.remove_pollUpdateEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(System::Action)>(&GlobalNamespace::MultiplayerSessionManager::remove_pollUpdateEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xdbd850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "remove_pollUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.get_isConnectionOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerSessionManager::*)()>(&GlobalNamespace::MultiplayerSessionManager::get_isConnectionOwner)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xdbd8ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.get_connectionOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IConnectedPlayer (GlobalNamespace::MultiplayerSessionManager::*)()>(&GlobalNamespace::MultiplayerSessionManager::get_connectionOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdbd904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_connectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.set_connectionOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::MultiplayerSessionManager::set_connectionOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdbd90c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "set_connectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.get_isSpectating
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerSessionManager::*)()>(&GlobalNamespace::MultiplayerSessionManager::get_isSpectating)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xdbd914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_isSpectating",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.get_isConnectingOrConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerSessionManager::*)()>(&GlobalNamespace::MultiplayerSessionManager::get_isConnectingOrConnected)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xdbda2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_isConnectingOrConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.get_isConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerSessionManager::*)()>(&GlobalNamespace::MultiplayerSessionManager::get_isConnected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdbda50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_isConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.get_isConnecting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerSessionManager::*)()>(&GlobalNamespace::MultiplayerSessionManager::get_isConnecting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdbda40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_isConnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.get_isDisconnecting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerSessionManager::*)()>(&GlobalNamespace::MultiplayerSessionManager::get_isDisconnecting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdbda60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_isDisconnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.get_connectedPlayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer> (GlobalNamespace::MultiplayerSessionManager::*)()>(&GlobalNamespace::MultiplayerSessionManager::get_connectedPlayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdbda70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_connectedPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.get_connectedPlayerCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::MultiplayerSessionManager::*)()>(&GlobalNamespace::MultiplayerSessionManager::get_connectedPlayerCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xdbda78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_connectedPlayerCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.get_syncTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::MultiplayerSessionManager::*)()>(&GlobalNamespace::MultiplayerSessionManager::get_syncTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xdbdac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_syncTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.get_isSyncTimeInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerSessionManager::*)()>(&GlobalNamespace::MultiplayerSessionManager::get_isSyncTimeInitialized)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xdbdad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_isSyncTimeInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.get_localPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IConnectedPlayer (GlobalNamespace::MultiplayerSessionManager::*)()>(&GlobalNamespace::MultiplayerSessionManager::get_localPlayer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xdbdaec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_localPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.get_connectedPlayerManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ConnectedPlayerManager (GlobalNamespace::MultiplayerSessionManager::*)()>(&GlobalNamespace::MultiplayerSessionManager::get_connectedPlayerManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdbdb04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_connectedPlayerManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.get_maxPlayerCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::MultiplayerSessionManager::*)()>(&GlobalNamespace::MultiplayerSessionManager::get_maxPlayerCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdbdb0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_maxPlayerCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)()>(&GlobalNamespace::MultiplayerSessionManager::Start)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xdbdb14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MultiplayerSessionManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)()>(&GlobalNamespace::MultiplayerSessionManager::Update)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xdbdc14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MultiplayerSessionManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)()>(&GlobalNamespace::MultiplayerSessionManager::LateUpdate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xdbdc74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)()>(&GlobalNamespace::MultiplayerSessionManager::OnDestroy)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xdbdc88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MultiplayerSessionManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.OnApplicationPause
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(bool)>(&GlobalNamespace::MultiplayerSessionManager::OnApplicationPause)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xdbe530;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MultiplayerSessionManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.RegisterSerializer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType, GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::MultiplayerSessionManager::RegisterSerializer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xdbe588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "RegisterSerializer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.UnregisterSerializer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType, GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::MultiplayerSessionManager::UnregisterSerializer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xdbe5f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "UnregisterSerializer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.StartSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__SessionType, GlobalNamespace::ConnectedPlayerManager)>(&GlobalNamespace::MultiplayerSessionManager::StartSession)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0xdbe658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "StartSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__SessionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectedPlayerManager>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.SetMaxPlayerCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(int32_t)>(&GlobalNamespace::MultiplayerSessionManager::SetMaxPlayerCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdbec40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "SetMaxPlayerCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.EndSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)()>(&GlobalNamespace::MultiplayerSessionManager::EndSession)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0xdbe06c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "EndSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.Disconnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)()>(&GlobalNamespace::MultiplayerSessionManager::Disconnect)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdbec48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.HandleInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)()>(&GlobalNamespace::MultiplayerSessionManager::HandleInitialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdbec58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "HandleInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.HandleConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)()>(&GlobalNamespace::MultiplayerSessionManager::HandleConnected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdbec68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "HandleConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.HandleDisconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::MultiplayerSessionManager::HandleDisconnected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdbec78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "HandleDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.HandleConnectionFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(GlobalNamespace::ConnectionFailedReason)>(&GlobalNamespace::MultiplayerSessionManager::HandleConnectionFailed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdbec88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "HandleConnectionFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.HandleSyncTimeInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)()>(&GlobalNamespace::MultiplayerSessionManager::HandleSyncTimeInitialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdbec98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "HandleSyncTimeInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.HandlePlayerConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::MultiplayerSessionManager::HandlePlayerConnected)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xdbeca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "HandlePlayerConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.HandlePlayerDisconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::MultiplayerSessionManager::HandlePlayerDisconnected)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xdbf314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "HandlePlayerDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.HandlePlayerStateChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::MultiplayerSessionManager::HandlePlayerStateChanged)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xdbf3d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "HandlePlayerStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.HandlePlayerAvatarChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::MultiplayerSessionManager::HandlePlayerAvatarChanged)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xdbf578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "HandlePlayerAvatarChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.HandlePlayerOrderChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::MultiplayerSessionManager::HandlePlayerOrderChanged)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xdbf5fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "HandlePlayerOrderChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.HandlePlayerLatencyInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::MultiplayerSessionManager::HandlePlayerLatencyInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdbf638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "HandlePlayerLatencyInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.GetPlayerByUserId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IConnectedPlayer (GlobalNamespace::MultiplayerSessionManager::*)(::StringW)>(&GlobalNamespace::MultiplayerSessionManager::GetPlayerByUserId)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xdbf640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "GetPlayerByUserId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.GetConnectedPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IConnectedPlayer (GlobalNamespace::MultiplayerSessionManager::*)(int32_t)>(&GlobalNamespace::MultiplayerSessionManager::GetConnectedPlayer)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xdbf7e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "GetConnectedPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.SetLocalPlayerState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(::StringW, bool)>(&GlobalNamespace::MultiplayerSessionManager::SetLocalPlayerState)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xdbdb60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "SetLocalPlayerState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.KickPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(::StringW)>(&GlobalNamespace::MultiplayerSessionManager::KickPlayer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xdbf83c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "KickPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.LocalPlayerHasState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerSessionManager::*)(::StringW)>(&GlobalNamespace::MultiplayerSessionManager::LocalPlayerHasState)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xdbf854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "LocalPlayerHasState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.UpdateConnectionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)(GlobalNamespace::UpdateConnectionStateReason, GlobalNamespace::DisconnectedReason, GlobalNamespace::ConnectionFailedReason)>(&GlobalNamespace::MultiplayerSessionManager::UpdateConnectionState)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0xdbdcac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "UpdateConnectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::UpdateConnectionStateReason>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.TryUpdateConnectedPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerSessionManager::*)(GlobalNamespace::IConnectedPlayer, bool)>(&GlobalNamespace::MultiplayerSessionManager::TryUpdateConnectedPlayer)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0xdbed64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "TryUpdateConnectedPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager.GetNextAvailableSortIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::MultiplayerSessionManager::*)()>(&GlobalNamespace::MultiplayerSessionManager::GetNextAvailableSortIndex)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xdbf938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "GetNextAvailableSortIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerSessionManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSessionManager::*)()>(&GlobalNamespace::MultiplayerSessionManager::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xdbf9ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IMultiplayerSessionManager
constexpr  GlobalNamespace::MultiplayerSessionManager::operator GlobalNamespace::IMultiplayerSessionManager() const noexcept {
return GlobalNamespace::IMultiplayerSessionManager(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__set__packetSerializer(GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType,GlobalNamespace::IConnectedPlayer> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType,GlobalNamespace::IConnectedPlayer>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType,GlobalNamespace::IConnectedPlayer>>(value));
}
constexpr GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType,GlobalNamespace::IConnectedPlayer> GlobalNamespace::MultiplayerSessionManager::__get__packetSerializer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType,GlobalNamespace::IConnectedPlayer>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__set__connectedPlayers(System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> GlobalNamespace::MultiplayerSessionManager::__get__connectedPlayers() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__set__localPlayerState(System::Collections::Generic::HashSet_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<::StringW>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<::StringW>>(value));
}
constexpr System::Collections::Generic::HashSet_1<::StringW> GlobalNamespace::MultiplayerSessionManager::__get__localPlayerState() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<::StringW>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__set__maxPlayerCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::MultiplayerSessionManager::__get__maxPlayerCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__set__connectionState(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__ConnectionState value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__ConnectionState, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__ConnectionState>(value));
}
constexpr GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__ConnectionState GlobalNamespace::MultiplayerSessionManager::__get__connectionState() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__ConnectionState, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__set__freeSortIndices(System::Collections::Generic::Queue_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Queue_1<int32_t>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Queue_1<int32_t>>(value));
}
constexpr System::Collections::Generic::Queue_1<int32_t> GlobalNamespace::MultiplayerSessionManager::__get__freeSortIndices() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Queue_1<int32_t>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__set_connectedEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::MultiplayerSessionManager::__get_connectedEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__set_connectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::ConnectionFailedReason>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::ConnectionFailedReason>>(value));
}
constexpr System::Action_1<GlobalNamespace::ConnectionFailedReason> GlobalNamespace::MultiplayerSessionManager::__get_connectionFailedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::ConnectionFailedReason>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__set_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::IConnectedPlayer>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::IConnectedPlayer>>(value));
}
constexpr System::Action_1<GlobalNamespace::IConnectedPlayer> GlobalNamespace::MultiplayerSessionManager::__get_playerConnectedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::IConnectedPlayer>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__set_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::IConnectedPlayer>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::IConnectedPlayer>>(value));
}
constexpr System::Action_1<GlobalNamespace::IConnectedPlayer> GlobalNamespace::MultiplayerSessionManager::__get_playerDisconnectedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::IConnectedPlayer>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__set_playerAvatarChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::IConnectedPlayer>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::IConnectedPlayer>>(value));
}
constexpr System::Action_1<GlobalNamespace::IConnectedPlayer> GlobalNamespace::MultiplayerSessionManager::__get_playerAvatarChangedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::IConnectedPlayer>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__set_playerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::IConnectedPlayer>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::IConnectedPlayer>>(value));
}
constexpr System::Action_1<GlobalNamespace::IConnectedPlayer> GlobalNamespace::MultiplayerSessionManager::__get_playerStateChangedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::IConnectedPlayer>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__set_connectionOwnerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::IConnectedPlayer>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::IConnectedPlayer>>(value));
}
constexpr System::Action_1<GlobalNamespace::IConnectedPlayer> GlobalNamespace::MultiplayerSessionManager::__get_connectionOwnerStateChangedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::IConnectedPlayer>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__set_disconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::DisconnectedReason>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::DisconnectedReason>>(value));
}
constexpr System::Action_1<GlobalNamespace::DisconnectedReason> GlobalNamespace::MultiplayerSessionManager::__get_disconnectedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::DisconnectedReason>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__set_pollUpdateEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::MultiplayerSessionManager::__get_pollUpdateEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__set__connectionOwner_k__BackingField(GlobalNamespace::IConnectedPlayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IConnectedPlayer, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IConnectedPlayer>(value));
}
constexpr GlobalNamespace::IConnectedPlayer GlobalNamespace::MultiplayerSessionManager::__get__connectionOwner_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IConnectedPlayer, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__set__connectedPlayerManager(GlobalNamespace::ConnectedPlayerManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ConnectedPlayerManager, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ConnectedPlayerManager>(value));
}
constexpr GlobalNamespace::ConnectedPlayerManager GlobalNamespace::MultiplayerSessionManager::__get__connectedPlayerManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ConnectedPlayerManager, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MultiplayerSessionManager::add_connectedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "add_connectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerSessionManager::remove_connectedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "remove_connectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerSessionManager::add_connectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "add_connectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ConnectionFailedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerSessionManager::remove_connectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "remove_connectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ConnectionFailedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerSessionManager::add_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "add_playerConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerSessionManager::remove_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "remove_playerConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerSessionManager::add_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "add_playerDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerSessionManager::remove_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "remove_playerDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerSessionManager::add_playerAvatarChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "add_playerAvatarChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerSessionManager::remove_playerAvatarChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "remove_playerAvatarChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerSessionManager::add_playerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "add_playerStateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerSessionManager::remove_playerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "remove_playerStateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerSessionManager::add_connectionOwnerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "add_connectionOwnerStateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerSessionManager::remove_connectionOwnerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "remove_connectionOwnerStateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerSessionManager::add_disconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "add_disconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::DisconnectedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerSessionManager::remove_disconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "remove_disconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::DisconnectedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerSessionManager::add_pollUpdateEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "add_pollUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerSessionManager::remove_pollUpdateEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "remove_pollUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::MultiplayerSessionManager::get_isConnectionOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::IConnectedPlayer GlobalNamespace::MultiplayerSessionManager::get_connectionOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_connectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IConnectedPlayer, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerSessionManager::set_connectionOwner(GlobalNamespace::IConnectedPlayer value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "set_connectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::MultiplayerSessionManager::get_isSpectating()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_isSpectating",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::MultiplayerSessionManager::get_isConnectingOrConnected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_isConnectingOrConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::MultiplayerSessionManager::get_isConnected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_isConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::MultiplayerSessionManager::get_isConnecting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_isConnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::MultiplayerSessionManager::get_isDisconnecting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_isDisconnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer> GlobalNamespace::MultiplayerSessionManager::get_connectedPlayers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_connectedPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::MultiplayerSessionManager::get_connectedPlayerCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_connectedPlayerCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::MultiplayerSessionManager::get_syncTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_syncTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::MultiplayerSessionManager::get_isSyncTimeInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_isSyncTimeInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::IConnectedPlayer GlobalNamespace::MultiplayerSessionManager::get_localPlayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_localPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IConnectedPlayer, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::ConnectedPlayerManager GlobalNamespace::MultiplayerSessionManager::get_connectedPlayerManager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_connectedPlayerManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::ConnectedPlayerManager, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::MultiplayerSessionManager::get_maxPlayerCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "get_maxPlayerCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerSessionManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerSessionManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerSessionManager::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerSessionManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerSessionManager::OnApplicationPause(bool pauseStatus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "OnApplicationPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pauseStatus);
}
 void GlobalNamespace::MultiplayerSessionManager::RegisterSerializer(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType serializerType, GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer> subSerializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "RegisterSerializer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializerType, subSerializer);
}
 void GlobalNamespace::MultiplayerSessionManager::UnregisterSerializer(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType serializerType, GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer> subSerializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "UnregisterSerializer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializerType, subSerializer);
}
template<typename T>
 void GlobalNamespace::MultiplayerSessionManager::RegisterCallback(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType serializerType, System::Action_2<T,GlobalNamespace::IConnectedPlayer> callback, System::Func_1<T> constructor)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                        "RegisterCallback",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<T,GlobalNamespace::IConnectedPlayer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializerType, callback, constructor);
}
template<typename T>
 void GlobalNamespace::MultiplayerSessionManager::UnregisterCallback(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType serializerType)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                        "UnregisterCallback",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializerType);
}
 void GlobalNamespace::MultiplayerSessionManager::StartSession(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__SessionType sessionType, GlobalNamespace::ConnectedPlayerManager connectedPlayerManager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "StartSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__SessionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectedPlayerManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sessionType, connectedPlayerManager);
}
 void GlobalNamespace::MultiplayerSessionManager::SetMaxPlayerCount(int32_t maxPlayerCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "SetMaxPlayerCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, maxPlayerCount);
}
 void GlobalNamespace::MultiplayerSessionManager::EndSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "EndSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerSessionManager::Disconnect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T>
 void GlobalNamespace::MultiplayerSessionManager::Send(T message)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                        "Send",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
template<typename T>
 void GlobalNamespace::MultiplayerSessionManager::SendToPlayer(T message, GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                        "SendToPlayer",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message, player);
}
template<typename T>
 void GlobalNamespace::MultiplayerSessionManager::SendUnreliable(T message)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                        "SendUnreliable",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
template<typename T>
 void GlobalNamespace::MultiplayerSessionManager::SendUnreliableEncryptedToPlayer(T message, GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                        "SendUnreliableEncryptedToPlayer",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message, player);
}
 void GlobalNamespace::MultiplayerSessionManager::HandleInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "HandleInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerSessionManager::HandleConnected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "HandleConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerSessionManager::HandleDisconnected(GlobalNamespace::DisconnectedReason disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "HandleDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disconnectedReason);
}
 void GlobalNamespace::MultiplayerSessionManager::HandleConnectionFailed(GlobalNamespace::ConnectionFailedReason reason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "HandleConnectionFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reason);
}
 void GlobalNamespace::MultiplayerSessionManager::HandleSyncTimeInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "HandleSyncTimeInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerSessionManager::HandlePlayerConnected(GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "HandlePlayerConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player);
}
 void GlobalNamespace::MultiplayerSessionManager::HandlePlayerDisconnected(GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "HandlePlayerDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player);
}
 void GlobalNamespace::MultiplayerSessionManager::HandlePlayerStateChanged(GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "HandlePlayerStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player);
}
 void GlobalNamespace::MultiplayerSessionManager::HandlePlayerAvatarChanged(GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "HandlePlayerAvatarChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player);
}
 void GlobalNamespace::MultiplayerSessionManager::HandlePlayerOrderChanged(GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "HandlePlayerOrderChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player);
}
 void GlobalNamespace::MultiplayerSessionManager::HandlePlayerLatencyInitialized(GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "HandlePlayerLatencyInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player);
}
 GlobalNamespace::IConnectedPlayer GlobalNamespace::MultiplayerSessionManager::GetPlayerByUserId(::StringW userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "GetPlayerByUserId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IConnectedPlayer, false>(const_cast<void*>(instance), ___internal_method, userId);
}
 GlobalNamespace::IConnectedPlayer GlobalNamespace::MultiplayerSessionManager::GetConnectedPlayer(int32_t i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "GetConnectedPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IConnectedPlayer, false>(const_cast<void*>(instance), ___internal_method, i);
}
 void GlobalNamespace::MultiplayerSessionManager::SetLocalPlayerState(::StringW state, bool hasState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "SetLocalPlayerState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, hasState);
}
 void GlobalNamespace::MultiplayerSessionManager::KickPlayer(::StringW userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "KickPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId);
}
 bool GlobalNamespace::MultiplayerSessionManager::LocalPlayerHasState(::StringW state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "LocalPlayerHasState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, state);
}
/// @param disconnectedReason: GlobalNamespace::DisconnectedReason (default: 1)
/// @param connectionFailedReason: GlobalNamespace::ConnectionFailedReason (default: 1)
 void GlobalNamespace::MultiplayerSessionManager::UpdateConnectionState(GlobalNamespace::UpdateConnectionStateReason updateReason, GlobalNamespace::DisconnectedReason disconnectedReason, GlobalNamespace::ConnectionFailedReason connectionFailedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "UpdateConnectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::UpdateConnectionStateReason>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, updateReason, disconnectedReason, connectionFailedReason);
}
/// @param isPlayerConnected: bool (default: true)
 bool GlobalNamespace::MultiplayerSessionManager::TryUpdateConnectedPlayer(GlobalNamespace::IConnectedPlayer player, bool isPlayerConnected)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "TryUpdateConnectedPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, player, isPlayerConnected);
}
 int32_t GlobalNamespace::MultiplayerSessionManager::GetNextAvailableSortIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            "GetNextAvailableSortIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::MultiplayerSessionManager::MultiplayerSessionManager()  : GlobalNamespace::StandaloneMonobehavior(THROW_UNLESS(::il2cpp_utils::New<MultiplayerSessionManager>())) {}
 void GlobalNamespace::MultiplayerSessionManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerSessionManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
