#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarData_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__RollingAverage_def.hpp"
#include "GlobalNamespace/zzzz__IConnection_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPacketSerializer_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "BGNet/Core/zzzz__DeliveryMethod_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPacketSubSerializer_1_def.hpp"
#include "GlobalNamespace/zzzz__EncryptionUtility_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "GlobalNamespace/zzzz__IDiffieHellmanKeyPair_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__PlayerStateHash_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__ByteArrayNetSerializable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.get_connection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IConnection (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_connection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda3e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_connection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.get_connectionId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_connectionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda3e40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_connectionId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.get_remoteConnectionId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_remoteConnectionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda3e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_remoteConnectionId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.get_isConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_isConnected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda3e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_isConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.get_isConnectionOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_isConnectionOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda3e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.get_isKicked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_isKicked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda3e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_isKicked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.get_disconnectedReason
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::DisconnectedReason (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_disconnectedReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda3e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_disconnectedReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.get_sortIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_sortIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda3e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_sortIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.get_userId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda3e78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.get_userName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda3e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.get_isMe
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_isMe)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda3e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_isMe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.get_hasValidLatency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_hasValidLatency)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xda3e90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_hasValidLatency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.get_currentLatency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_currentLatency)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xda3ec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_currentLatency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.get_offsetSyncTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_offsetSyncTime)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xda3ee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_offsetSyncTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.get_multiplayerAvatarData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerAvatarData (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_multiplayerAvatarData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xda3f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_multiplayerAvatarData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.get_publicEncryptionKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_publicEncryptionKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda3f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_publicEncryptionKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.get_random
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_random)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda3f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_random",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.get_isDirectConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_isDirectConnection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xd9e5bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_isDirectConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.get_encryptionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_encryptionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda3f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_encryptionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)(GlobalNamespace::ConnectedPlayerManager, uint8_t, uint8_t, GlobalNamespace::IConnection, GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer, ::StringW, ::StringW, bool, bool, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xda3f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectedPlayerManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.CreateLocalPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer (*)(GlobalNamespace::ConnectedPlayerManager, ::StringW, ::StringW, bool, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::CreateLocalPlayer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xda2114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "CreateLocalPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectedPlayerManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.CreateDirectlyConnectedPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer (*)(GlobalNamespace::ConnectedPlayerManager, uint8_t, GlobalNamespace::IConnection)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::CreateDirectlyConnectedPlayer)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xda223c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "CreateDirectlyConnectedPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectedPlayerManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.CreateRemoteConnectedPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer (*)(GlobalNamespace::ConnectedPlayerManager, uint8_t, GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket, GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::CreateRemoteConnectedPlayer)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xda2edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "CreateRemoteConnectedPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectedPlayerManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.GetPlayerConnectedPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::GetPlayerConnectedPacket)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xd9e458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "GetPlayerConnectedPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.GetPlayerIdentityPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::GetPlayerIdentityPacket)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xd9e714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "GetPlayerIdentityPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.GetPlayerStatePacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::GetPlayerStatePacket)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xda1e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "GetPlayerStatePacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.GetPlayerAvatarPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::GetPlayerAvatarPacket)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xda1f04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "GetPlayerAvatarPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.GetPlayerSortOrderPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::GetPlayerSortOrderPacket)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xd9e6ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "GetPlayerSortOrderPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.Disconnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)(GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::Disconnect)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xd9dd34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.UpdateLatency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)(float_t)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::UpdateLatency)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xda3d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "UpdateLatency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.UpdateSortIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::UpdateSortIndex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xda2074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "UpdateSortIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.SetKicked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::SetKicked)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xda1d28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "SetKicked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.UpdateIdentity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::UpdateIdentity)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xda3134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "UpdateIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.UpdateState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::UpdateState)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xda32f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "UpdateState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.UpdateAvatar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::UpdateAvatar)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xda33dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "UpdateAvatar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.SetEncryptionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)(GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::SetEncryptionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda4100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "SetEncryptionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.HasState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)(::StringW)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::HasState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xda4108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "HasState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.SetPlayerState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)(GlobalNamespace::PlayerStateHash)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::SetPlayerState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda4114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "SetPlayerState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerStateHash>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.SetPlayerAvatar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)(GlobalNamespace::MultiplayerAvatarData)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::SetPlayerAvatar)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xda411c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "SetPlayerAvatar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerAvatarData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::ToString)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xda4134;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IConnectedPlayer
constexpr  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::operator GlobalNamespace::IConnectedPlayer() const noexcept {
return GlobalNamespace::IConnectedPlayer(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__set__userId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__get__userId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__set__userName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__get__userName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__set__isMe(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__get__isMe() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__set__isConnectionOwner(bool value)  {
::cordl_internals::setInstanceField<bool, 0x21>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__get__isConnectionOwner() const {
return ::cordl_internals::getInstanceField<bool, 0x21>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__set__manager(GlobalNamespace::ConnectedPlayerManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ConnectedPlayerManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ConnectedPlayerManager>(value));
}
constexpr GlobalNamespace::ConnectedPlayerManager GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__get__manager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ConnectedPlayerManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__set__connection(GlobalNamespace::IConnection value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IConnection, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IConnection>(value));
}
constexpr GlobalNamespace::IConnection GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__get__connection() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IConnection, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__set__parent(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>(value));
}
constexpr GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__get__parent() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__set__connectionId(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__get__connectionId() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__set__remoteConnectionId(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x41>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__get__remoteConnectionId() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x41>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__set__sortIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__get__sortIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__set__isConnected(bool value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__get__isConnected() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__set__disconnectedReason(GlobalNamespace::DisconnectedReason value)  {
::cordl_internals::setInstanceField<GlobalNamespace::DisconnectedReason, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::DisconnectedReason>(value));
}
constexpr GlobalNamespace::DisconnectedReason GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__get__disconnectedReason() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::DisconnectedReason, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__set__isKicked(bool value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__get__isKicked() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__set__playerState(GlobalNamespace::PlayerStateHash value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerStateHash, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerStateHash>(value));
}
constexpr GlobalNamespace::PlayerStateHash GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__get__playerState() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerStateHash, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__set__playerAvatar(GlobalNamespace::MultiplayerAvatarData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerAvatarData, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerAvatarData>(value));
}
constexpr GlobalNamespace::MultiplayerAvatarData GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__get__playerAvatar() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerAvatarData, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__set__publicEncryptionKey(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__get__publicEncryptionKey() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__set__random(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__get__random() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__set__encryptionState(GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>(value));
}
constexpr GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__get__encryptionState() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__set__latency(GlobalNamespace::RollingAverage value)  {
::cordl_internals::setInstanceField<GlobalNamespace::RollingAverage, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::RollingAverage>(value));
}
constexpr GlobalNamespace::RollingAverage GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::__get__latency() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::RollingAverage, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::IConnection GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_connection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_connection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IConnection, false>(const_cast<void*>(instance), ___internal_method);
}
 uint8_t GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_connectionId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_connectionId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(instance), ___internal_method);
}
 uint8_t GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_remoteConnectionId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_remoteConnectionId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_isConnected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_isConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_isConnectionOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_isKicked()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_isKicked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::DisconnectedReason GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_disconnectedReason()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_disconnectedReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::DisconnectedReason, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_sortIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_sortIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_userId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_userName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_isMe()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_isMe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_hasValidLatency()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_hasValidLatency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_currentLatency()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_currentLatency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_offsetSyncTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_offsetSyncTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::MultiplayerAvatarData GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_multiplayerAvatarData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_multiplayerAvatarData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::MultiplayerAvatarData, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_publicEncryptionKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_publicEncryptionKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_random()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_random",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_isDirectConnection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_isDirectConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::get_encryptionState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "get_encryptionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "manager", ty: "GlobalNamespace::ConnectedPlayerManager", modifiers: "", def_value: None }, CppParam { name: "connectionId", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "remoteConnectionId", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "connection", ty: "GlobalNamespace::IConnection", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer", modifiers: "", def_value: None }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "userName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isConnectionOwner", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isMe", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "publicEncryptionKey", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "random", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer(GlobalNamespace::ConnectedPlayerManager manager, uint8_t connectionId, uint8_t remoteConnectionId, GlobalNamespace::IConnection connection, GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer parent, ::StringW userId, ::StringW userName, bool isConnectionOwner, bool isMe, ::ArrayW<uint8_t> publicEncryptionKey, ::ArrayW<uint8_t> random)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>(manager, connectionId, remoteConnectionId, connection, parent, userId, userName, isConnectionOwner, isMe, publicEncryptionKey, random))) {}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::_ctor(GlobalNamespace::ConnectedPlayerManager manager, uint8_t connectionId, uint8_t remoteConnectionId, GlobalNamespace::IConnection connection, GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer parent, ::StringW userId, ::StringW userName, bool isConnectionOwner, bool isMe, ::ArrayW<uint8_t> publicEncryptionKey, ::ArrayW<uint8_t> random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectedPlayerManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, manager, connectionId, remoteConnectionId, connection, parent, userId, userName, isConnectionOwner, isMe, publicEncryptionKey, random);
}
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::CreateLocalPlayer(GlobalNamespace::ConnectedPlayerManager manager, ::StringW userId, ::StringW userName, bool isConnectionOwner, ::ArrayW<uint8_t> publicEncryptionKey, ::ArrayW<uint8_t> random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "CreateLocalPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectedPlayerManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer, false>(nullptr, ___internal_method, manager, userId, userName, isConnectionOwner, publicEncryptionKey, random);
}
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::CreateDirectlyConnectedPlayer(GlobalNamespace::ConnectedPlayerManager manager, uint8_t connectionId, GlobalNamespace::IConnection connection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "CreateDirectlyConnectedPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectedPlayerManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer, false>(nullptr, ___internal_method, manager, connectionId, connection);
}
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::CreateRemoteConnectedPlayer(GlobalNamespace::ConnectedPlayerManager manager, uint8_t connectionId, GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket packet, GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer parent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "CreateRemoteConnectedPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectedPlayerManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer, false>(nullptr, ___internal_method, manager, connectionId, packet, parent);
}
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::GetPlayerConnectedPacket()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "GetPlayerConnectedPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::GetPlayerIdentityPacket()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "GetPlayerIdentityPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::GetPlayerStatePacket()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "GetPlayerStatePacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::GetPlayerAvatarPacket()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "GetPlayerAvatarPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::GetPlayerSortOrderPacket()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "GetPlayerSortOrderPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::Disconnect(GlobalNamespace::DisconnectedReason disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disconnectedReason);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::UpdateLatency(float_t latency)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "UpdateLatency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, latency);
}
 bool GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::UpdateSortIndex(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "UpdateSortIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, index);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::SetKicked()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "SetKicked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::UpdateIdentity(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "UpdateIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::UpdateState(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "UpdateState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::UpdateAvatar(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "UpdateAvatar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::SetEncryptionState(GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState encryptionState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "SetEncryptionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, encryptionState);
}
 bool GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::HasState(::StringW state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "HasState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, state);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::SetPlayerState(GlobalNamespace::PlayerStateHash playerState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "SetPlayerState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerStateHash>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playerState);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::SetPlayerAvatar(GlobalNamespace::MultiplayerAvatarData avatarData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "SetPlayerAvatar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerAvatarData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, avatarData);
}
 ::StringW GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType::GlobalNamespace__ConnectedPlayerManager__InternalMessageType(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType::SyncTime{0u};
constexpr GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType::PlayerConnected{1u};
constexpr GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType::PlayerIdentity{2u};
constexpr GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType::PlayerLatencyUpdate{3u};
constexpr GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType::PlayerDisconnected{4u};
constexpr GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType::PlayerSortOrderUpdate{5u};
constexpr GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType::Party{6u};
constexpr GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType::MultiplayerSession{7u};
constexpr GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType::KickPlayer{8u};
constexpr GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType::PlayerStateUpdate{9u};
constexpr GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType::PlayerAvatarUpdate{10u};
constexpr GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType::Ping{11u};
constexpr GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType::Pong{12u};
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__MessageType::GlobalNamespace__ConnectedPlayerManager__MessageType(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__MessageType::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__MessageType::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__MessageType  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__MessageType::Party{6u};
constexpr GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__MessageType  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__MessageType::MultiplayerSession{7u};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket.get_pool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket> (*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xda0d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::Serialize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xda42b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::Deserialize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xda4310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xda2fac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::*)(uint8_t, ::StringW, ::StringW, bool)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::Init)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xda405c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda4378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::__set_remoteConnectionId(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::__get_remoteConnectionId() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::__set_userId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::__get_userId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::__set_userName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::__get_userName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::__set_isConnectionOwner(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::__get_isConnectionOwner() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket> GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::get_pool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket>, false>(nullptr, ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::Init(uint8_t connectionId, ::StringW userId, ::StringW userName, bool isConnectionOwner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket, false>(const_cast<void*>(instance), ___internal_method, connectionId, userId, userName, isConnectionOwner);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket>())) {}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket.get_pool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket> (*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xda0d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::Serialize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xda4380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::Deserialize)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xda43d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::Release)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xda4460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::*)(GlobalNamespace::PlayerStateHash, GlobalNamespace::MultiplayerAvatarData, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::Init)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xda4070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerStateHash>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerAvatarData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xda44cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::__set_playerState(GlobalNamespace::PlayerStateHash value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerStateHash, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerStateHash>(value));
}
constexpr GlobalNamespace::PlayerStateHash GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::__get_playerState() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerStateHash, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::__set_playerAvatar(GlobalNamespace::MultiplayerAvatarData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerAvatarData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerAvatarData>(value));
}
constexpr GlobalNamespace::MultiplayerAvatarData GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::__get_playerAvatar() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerAvatarData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::__set_random(GlobalNamespace::ByteArrayNetSerializable value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ByteArrayNetSerializable, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ByteArrayNetSerializable>(value));
}
constexpr GlobalNamespace::ByteArrayNetSerializable GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::__get_random() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ByteArrayNetSerializable, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::__set_publicEncryptionKey(GlobalNamespace::ByteArrayNetSerializable value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ByteArrayNetSerializable, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ByteArrayNetSerializable>(value));
}
constexpr GlobalNamespace::ByteArrayNetSerializable GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::__get_publicEncryptionKey() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ByteArrayNetSerializable, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket> GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::get_pool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket>, false>(nullptr, ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::Init(GlobalNamespace::PlayerStateHash states, GlobalNamespace::MultiplayerAvatarData avatar, ::ArrayW<uint8_t> random, ::ArrayW<uint8_t> publicEncryptionKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerStateHash>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerAvatarData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket, false>(const_cast<void*>(instance), ___internal_method, states, avatar, random, publicEncryptionKey);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket>())) {}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket.get_pool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket> (*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xda0e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket::Serialize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xda45b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket::Deserialize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xda45c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xda460c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket::*)(GlobalNamespace::MultiplayerAvatarData)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket::Init)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xda40d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerAvatarData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda4660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket::__set_playerAvatar(GlobalNamespace::MultiplayerAvatarData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerAvatarData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerAvatarData>(value));
}
constexpr GlobalNamespace::MultiplayerAvatarData GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket::__get_playerAvatar() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerAvatarData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket> GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket::get_pool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket>, false>(nullptr, ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket::Init(GlobalNamespace::MultiplayerAvatarData avatar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerAvatarData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket, false>(const_cast<void*>(instance), ___internal_method, avatar);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket>())) {}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket.get_pool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket> (*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xda0edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket::Serialize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xda4668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket::Deserialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xda4674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xda4694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket::*)(GlobalNamespace::PlayerStateHash)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda40cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerStateHash>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda46e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket::__set_playerState(GlobalNamespace::PlayerStateHash value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerStateHash, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerStateHash>(value));
}
constexpr GlobalNamespace::PlayerStateHash GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket::__get_playerState() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerStateHash, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket> GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket::get_pool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket>, false>(nullptr, ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket::Init(GlobalNamespace::PlayerStateHash states)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerStateHash>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket, false>(const_cast<void*>(instance), ___internal_method, states);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket>())) {}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket.get_pool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket> (*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xda0ddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket::Serialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xda46f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket::Deserialize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xda4730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xda375c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket::*)(::StringW, int32_t)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xda40f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda4774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket::__set_userId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket::__get_userId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket::__set_sortIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket::__get_sortIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket> GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket::get_pool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket>, false>(nullptr, ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket::Init(::StringW userId, int32_t sortIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket, false>(const_cast<void*>(instance), ___internal_method, userId, sortIndex);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket>())) {}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket.get_pool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket> (*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xda0d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket::*)(GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket::Serialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xda477c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket::Deserialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xda4790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xda34a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xda47b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket::__set_disconnectedReason(GlobalNamespace::DisconnectedReason value)  {
::cordl_internals::setInstanceField<GlobalNamespace::DisconnectedReason, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::DisconnectedReason>(value));
}
constexpr GlobalNamespace::DisconnectedReason GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket::__get_disconnectedReason() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::DisconnectedReason, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket> GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket::get_pool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket>, false>(nullptr, ___internal_method);
}
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket::Init(GlobalNamespace::DisconnectedReason disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket, false>(const_cast<void*>(instance), ___internal_method, disconnectedReason);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket>())) {}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket.get_pool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket> (*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xda0e5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket::*)(GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda1d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket::Serialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xda47c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket::Deserialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xda47d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xda35dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda47f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket::__set_disconnectedReason(GlobalNamespace::DisconnectedReason value)  {
::cordl_internals::setInstanceField<GlobalNamespace::DisconnectedReason, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::DisconnectedReason>(value));
}
constexpr GlobalNamespace::DisconnectedReason GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket::__get_disconnectedReason() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::DisconnectedReason, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket> GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket::get_pool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket>, false>(nullptr, ___internal_method);
}
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket::Init(GlobalNamespace::DisconnectedReason disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket, false>(const_cast<void*>(instance), ___internal_method, disconnectedReason);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket>())) {}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket.get_pool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket> (*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xda0e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket::Serialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xda47fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket::Deserialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xda481c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket::*)(float_t)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda3bb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xda3904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda4844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket::__set_syncTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket::__get_syncTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket> GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket::get_pool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket>, false>(nullptr, ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket::Init(float_t syncTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket, false>(const_cast<void*>(instance), ___internal_method, syncTime);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__ConnectedPlayerManager__SyncTimePacket>())) {}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket.get_pool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket> (*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xd9e268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket::Serialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xda484c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket::Deserialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xda486c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket::*)(float_t)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9e36c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xda3b54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda4894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket::__set_pingTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket::__get_pingTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket> GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket::get_pool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket>, false>(nullptr, ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket::Init(float_t pingTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket, false>(const_cast<void*>(instance), ___internal_method, pingTime);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket::GlobalNamespace__ConnectedPlayerManager__PingPacket()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__ConnectedPlayerManager__PingPacket>())) {}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket.get_pool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket> (*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xda0f1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket::Serialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xda489c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket::Deserialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xda48bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket::*)(float_t)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda3ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xda3d3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda48e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket::__set_pingTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket::__get_pingTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket> GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket::get_pool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket>, false>(nullptr, ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket::Init(float_t pingTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket, false>(const_cast<void*>(instance), ___internal_method, pingTime);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket::GlobalNamespace__ConnectedPlayerManager__PongPacket()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__ConnectedPlayerManager__PongPacket>())) {}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129::*)()>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129::MoveNext)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0xda48ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xda4f40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::ConnectedPlayerManager", modifiers: "", def_value: Some("csnull") }, CppParam { name: "player", ty: "GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_isClient_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::ConnectedPlayerManager __4__this, GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer player, bool _isClient_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->player = player;
this->_isClient_5__2 = _isClient_5__2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129::__set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129::__set___4__this(GlobalNamespace::ConnectedPlayerManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ConnectedPlayerManager, 0x28>(this->__instance, std::forward<GlobalNamespace::ConnectedPlayerManager>(value));
}
constexpr GlobalNamespace::ConnectedPlayerManager GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ConnectedPlayerManager, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129::__set_player(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer, 0x30>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>(value));
}
constexpr GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129::__get_player() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129::__set__isClient_5__2(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129::__get__isClient_5__2() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>, 0x40>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>, 0x40>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129::__set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>, 0x48>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>, 0x48>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager___InitializePlayerEncryption_d__129>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.GetNextConnectionId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (GlobalNamespace::ConnectedPlayerManager::*)()>(&GlobalNamespace::ConnectedPlayerManager::GetNextConnectionId)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xd9dae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "GetNextConnectionId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.RemoveAllPlayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::ConnectedPlayerManager::RemoveAllPlayers)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xd9dbe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "RemoveAllPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.RemovePlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer, GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::ConnectedPlayerManager::RemovePlayer)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xd9dc70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "RemovePlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.AddPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer)>(&GlobalNamespace::ConnectedPlayerManager::AddPlayer)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0xd9dfcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "AddPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.GetPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer (GlobalNamespace::ConnectedPlayerManager::*)(uint8_t)>(&GlobalNamespace::ConnectedPlayerManager::GetPlayer)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xd9db20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "GetPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.GetPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer (GlobalNamespace::ConnectedPlayerManager::*)(GlobalNamespace::IConnection, uint8_t)>(&GlobalNamespace::ConnectedPlayerManager::GetPlayer)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xd9e8ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "GetPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.GetPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer (GlobalNamespace::ConnectedPlayerManager::*)(::StringW)>(&GlobalNamespace::ConnectedPlayerManager::GetPlayer)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xd9e9a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "GetPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.GetConnectedPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IConnectedPlayer (GlobalNamespace::ConnectedPlayerManager::*)(int32_t)>(&GlobalNamespace::ConnectedPlayerManager::GetConnectedPlayer)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xd9ea6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "GetConnectedPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.add_connectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(System::Action)>(&GlobalNamespace::ConnectedPlayerManager::add_connectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xd9eac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "add_connectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.remove_connectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(System::Action)>(&GlobalNamespace::ConnectedPlayerManager::remove_connectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xd9eb60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "remove_connectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.add_initializedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(System::Action)>(&GlobalNamespace::ConnectedPlayerManager::add_initializedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xd9ebfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "add_initializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.remove_initializedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(System::Action)>(&GlobalNamespace::ConnectedPlayerManager::remove_initializedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xd9ec98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "remove_initializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.add_disconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(System::Action_1<GlobalNamespace::DisconnectedReason>)>(&GlobalNamespace::ConnectedPlayerManager::add_disconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xd9ed34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "add_disconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::DisconnectedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.remove_disconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(System::Action_1<GlobalNamespace::DisconnectedReason>)>(&GlobalNamespace::ConnectedPlayerManager::remove_disconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xd9ede4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "remove_disconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::DisconnectedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.add_connectionFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(System::Action_1<GlobalNamespace::ConnectionFailedReason>)>(&GlobalNamespace::ConnectedPlayerManager::add_connectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xd9ee94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "add_connectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ConnectionFailedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.remove_connectionFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(System::Action_1<GlobalNamespace::ConnectionFailedReason>)>(&GlobalNamespace::ConnectedPlayerManager::remove_connectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xd9ef44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "remove_connectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ConnectionFailedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.add_playerConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(System::Action_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::ConnectedPlayerManager::add_playerConnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xd9eff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "add_playerConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.remove_playerConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(System::Action_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::ConnectedPlayerManager::remove_playerConnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xd9f0a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "remove_playerConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.add_playerDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(System::Action_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::ConnectedPlayerManager::add_playerDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xd9f154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "add_playerDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.remove_playerDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(System::Action_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::ConnectedPlayerManager::remove_playerDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xd9f204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "remove_playerDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.add_playerStateChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(System::Action_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::ConnectedPlayerManager::add_playerStateChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xd9f2b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "add_playerStateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.remove_playerStateChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(System::Action_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::ConnectedPlayerManager::remove_playerStateChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xd9f364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "remove_playerStateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.add_playerAvatarChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(System::Action_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::ConnectedPlayerManager::add_playerAvatarChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xd9f414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "add_playerAvatarChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.remove_playerAvatarChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(System::Action_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::ConnectedPlayerManager::remove_playerAvatarChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xd9f4c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "remove_playerAvatarChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.add_playerOrderChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(System::Action_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::ConnectedPlayerManager::add_playerOrderChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xd9f574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "add_playerOrderChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.remove_playerOrderChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(System::Action_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::ConnectedPlayerManager::remove_playerOrderChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xd9f624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "remove_playerOrderChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.add_playerLatencyInitializedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(System::Action_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::ConnectedPlayerManager::add_playerLatencyInitializedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xd9f6d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "add_playerLatencyInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.remove_playerLatencyInitializedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(System::Action_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::ConnectedPlayerManager::remove_playerLatencyInitializedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xd9f784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "remove_playerLatencyInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.add_syncTimeInitializedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(System::Action)>(&GlobalNamespace::ConnectedPlayerManager::add_syncTimeInitializedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xd9f834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "add_syncTimeInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.remove_syncTimeInitializedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(System::Action)>(&GlobalNamespace::ConnectedPlayerManager::remove_syncTimeInitializedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xd9f8d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "remove_syncTimeInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.get_isConnectionOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ConnectedPlayerManager::*)()>(&GlobalNamespace::ConnectedPlayerManager::get_isConnectionOwner)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xd9f96c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "get_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.get_isConnectedOrConnecting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ConnectedPlayerManager::*)()>(&GlobalNamespace::ConnectedPlayerManager::get_isConnectedOrConnecting)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xd9fa10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "get_isConnectedOrConnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.get_isConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ConnectedPlayerManager::*)()>(&GlobalNamespace::ConnectedPlayerManager::get_isConnected)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xd9de7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "get_isConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.get_isConnecting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ConnectedPlayerManager::*)()>(&GlobalNamespace::ConnectedPlayerManager::get_isConnecting)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xd9fa38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "get_isConnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.get_isDisconnecting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ConnectedPlayerManager::*)()>(&GlobalNamespace::ConnectedPlayerManager::get_isDisconnecting)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xd9fadc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "get_isDisconnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.get_localPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IConnectedPlayer (GlobalNamespace::ConnectedPlayerManager::*)()>(&GlobalNamespace::ConnectedPlayerManager::get_localPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9fb80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "get_localPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.get_connectedPlayerCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::ConnectedPlayerManager::*)()>(&GlobalNamespace::ConnectedPlayerManager::get_connectedPlayerCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xd9fb88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "get_connectedPlayerCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.get_syncTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::ConnectedPlayerManager::*)()>(&GlobalNamespace::ConnectedPlayerManager::get_syncTime)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xd9fbd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "get_syncTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.get_syncTimeInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ConnectedPlayerManager::*)()>(&GlobalNamespace::ConnectedPlayerManager::get_syncTimeInitialized)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xd9fbf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "get_syncTimeInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.get_runTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::ConnectedPlayerManager::*)()>(&GlobalNamespace::ConnectedPlayerManager::get_runTime)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xd9e2a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "get_runTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(GlobalNamespace::IConnectionManager)>(&GlobalNamespace::ConnectedPlayerManager::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xd9fc2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectionManager>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(BGNet::Core::ITimeProvider, BGNet::Core::ITaskUtility, GlobalNamespace::IConnectionManager)>(&GlobalNamespace::ConnectedPlayerManager::_ctor)> {
  constexpr static std::size_t size = 0x1034;
  constexpr static std::size_t addrs = 0xd9fce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITimeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITaskUtility>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectionManager>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.PollUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(int32_t)>(&GlobalNamespace::ConnectedPlayerManager::PollUpdate)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xda12a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.PollLateUpdateOptional
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)()>(&GlobalNamespace::ConnectedPlayerManager::PollLateUpdateOptional)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xda15d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "PollLateUpdateOptional",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.RegisterSerializer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__MessageType, GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::ConnectedPlayerManager::RegisterSerializer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xda1600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "RegisterSerializer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.UnregisterSerializer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__MessageType, GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::ConnectedPlayerManager::UnregisterSerializer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xda1668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "UnregisterSerializer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)()>(&GlobalNamespace::ConnectedPlayerManager::Dispose)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0xda16d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.Disconnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::ConnectedPlayerManager::Disconnect)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xd9df20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.KickPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(::StringW, GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::ConnectedPlayerManager::KickPlayer)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xda1c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "KickPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.SetLocalPlayerState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(::StringW, bool)>(&GlobalNamespace::ConnectedPlayerManager::SetLocalPlayerState)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xda1d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "SetLocalPlayerState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.SetLocalPlayerAvatar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(GlobalNamespace::MultiplayerAvatarData)>(&GlobalNamespace::ConnectedPlayerManager::SetLocalPlayerAvatar)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xda1e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "SetLocalPlayerAvatar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerAvatarData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.SetLocalPlayerSortIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(int32_t)>(&GlobalNamespace::ConnectedPlayerManager::SetLocalPlayerSortIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xda1f8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "SetLocalPlayerSortIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.SetPlayerSortIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(GlobalNamespace::IConnectedPlayer, int32_t)>(&GlobalNamespace::ConnectedPlayerManager::SetPlayerSortIndex)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xda1f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "SetPlayerSortIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.ResetLocalState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)()>(&GlobalNamespace::ConnectedPlayerManager::ResetLocalState)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xda0f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "ResetLocalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.HandleInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)()>(&GlobalNamespace::ConnectedPlayerManager::HandleInitialized)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xda2094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandleInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.HandleConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)()>(&GlobalNamespace::ConnectedPlayerManager::HandleConnected)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0xda0f84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandleConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.HandleDisconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::ConnectedPlayerManager::HandleDisconnected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xda21d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandleDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.HandleConnectionFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(GlobalNamespace::ConnectionFailedReason)>(&GlobalNamespace::ConnectedPlayerManager::HandleConnectionFailed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xda2220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandleConnectionFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.HandleConnectionConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(GlobalNamespace::IConnection)>(&GlobalNamespace::ConnectedPlayerManager::HandleConnectionConnected)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xda126c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandleConnectionConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.HandleConnectionDisconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(GlobalNamespace::IConnection, GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::ConnectedPlayerManager::HandleConnectionDisconnected)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xda241c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandleConnectionDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.HandleNetworkReceive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(GlobalNamespace::IConnection, LiteNetLib::Utils::NetDataReader, BGNet::Core::DeliveryMethod)>(&GlobalNamespace::ConnectedPlayerManager::HandleNetworkReceive)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0xda2628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandleNetworkReceive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::DeliveryMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.SendImmediately
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(LiteNetLib::Utils::INetSerializable, bool)>(&GlobalNamespace::ConnectedPlayerManager::SendImmediately)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xd9e374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "SendImmediately",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::INetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.SendImmediatelyExcludingPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(LiteNetLib::Utils::INetSerializable, GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer, bool)>(&GlobalNamespace::ConnectedPlayerManager::SendImmediatelyExcludingPlayer)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xd9e4c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "SendImmediatelyExcludingPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::INetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.SendImmediatelyToPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(LiteNetLib::Utils::INetSerializable, GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer)>(&GlobalNamespace::ConnectedPlayerManager::SendImmediatelyToPlayer)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xd9e5cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "SendImmediatelyToPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::INetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.SendImmediatelyFromPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(LiteNetLib::Utils::INetSerializable, GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer, bool)>(&GlobalNamespace::ConnectedPlayerManager::SendImmediatelyFromPlayer)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xda253c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "SendImmediatelyFromPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::INetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.SendImmediatelyFromPlayerToPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(LiteNetLib::Utils::INetSerializable, GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer, GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer)>(&GlobalNamespace::ConnectedPlayerManager::SendImmediatelyFromPlayerToPlayer)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xd9e7cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "SendImmediatelyFromPlayerToPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::INetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.FlushReliableQueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)()>(&GlobalNamespace::ConnectedPlayerManager::FlushReliableQueue)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xda141c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "FlushReliableQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.FlushUnreliableQueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)()>(&GlobalNamespace::ConnectedPlayerManager::FlushUnreliableQueue)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xda14f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "FlushUnreliableQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.WriteOne
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::Utils::NetDataWriter (GlobalNamespace::ConnectedPlayerManager::*)(uint8_t, uint8_t, LiteNetLib::Utils::INetSerializable)>(&GlobalNamespace::ConnectedPlayerManager::WriteOne)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xda2b24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "WriteOne",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::INetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.WriteOneEncrypted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::Utils::NetDataWriter (GlobalNamespace::ConnectedPlayerManager::*)(GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState, uint8_t, uint8_t, LiteNetLib::Utils::INetSerializable)>(&GlobalNamespace::ConnectedPlayerManager::WriteOneEncrypted)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xda2c98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "WriteOneEncrypted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::INetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(LiteNetLib::Utils::NetDataWriter, LiteNetLib::Utils::INetSerializable)>(&GlobalNamespace::ConnectedPlayerManager::Write)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xda2ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::INetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.HandleServerPlayerConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket, GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::ConnectedPlayerManager::HandleServerPlayerConnected)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xda2e10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandleServerPlayerConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.HandlePlayerIdentityUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket, GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::ConnectedPlayerManager::HandlePlayerIdentityUpdate)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xda3000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandlePlayerIdentityUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.InitializePlayerEncryption
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer)>(&GlobalNamespace::ConnectedPlayerManager::InitializePlayerEncryption)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xda3198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "InitializePlayerEncryption",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.HandlePlayerStateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket, GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::ConnectedPlayerManager::HandlePlayerStateUpdate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xda3238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandlePlayerStateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.HandlePlayerAvatarUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket, GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::ConnectedPlayerManager::HandlePlayerAvatarUpdate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xda3314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandlePlayerAvatarUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.HandleServerPlayerDisconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket, GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::ConnectedPlayerManager::HandleServerPlayerDisconnected)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xda3400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandleServerPlayerDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.HandleKickPlayerPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket, GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::ConnectedPlayerManager::HandleKickPlayerPacket)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xda34fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandleKickPlayerPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.HandlePlayerSortOrderUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket, GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::ConnectedPlayerManager::HandlePlayerSortOrderUpdate)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xda3630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandlePlayerSortOrderUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.HandleSyncTimePacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket, GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::ConnectedPlayerManager::HandleSyncTimePacket)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xda37b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandleSyncTimePacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.HandlePing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket, GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::ConnectedPlayerManager::HandlePing)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xda3958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandlePing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.HandlePong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket, GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::ConnectedPlayerManager::HandlePong)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xda3bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandlePong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerManager.Log
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::*)(::StringW)>(&GlobalNamespace::ConnectedPlayerManager::Log)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xda3dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::ConnectedPlayerManager::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set_connectedEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::ConnectedPlayerManager::__get_connectedEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set_initializedEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::ConnectedPlayerManager::__get_initializedEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set_disconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::DisconnectedReason>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::DisconnectedReason>>(value));
}
constexpr System::Action_1<GlobalNamespace::DisconnectedReason> GlobalNamespace::ConnectedPlayerManager::__get_disconnectedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::DisconnectedReason>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set_connectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::ConnectionFailedReason>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::ConnectionFailedReason>>(value));
}
constexpr System::Action_1<GlobalNamespace::ConnectionFailedReason> GlobalNamespace::ConnectedPlayerManager::__get_connectionFailedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::ConnectionFailedReason>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::IConnectedPlayer>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::IConnectedPlayer>>(value));
}
constexpr System::Action_1<GlobalNamespace::IConnectedPlayer> GlobalNamespace::ConnectedPlayerManager::__get_playerConnectedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::IConnectedPlayer>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::IConnectedPlayer>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::IConnectedPlayer>>(value));
}
constexpr System::Action_1<GlobalNamespace::IConnectedPlayer> GlobalNamespace::ConnectedPlayerManager::__get_playerDisconnectedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::IConnectedPlayer>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set_playerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::IConnectedPlayer>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::IConnectedPlayer>>(value));
}
constexpr System::Action_1<GlobalNamespace::IConnectedPlayer> GlobalNamespace::ConnectedPlayerManager::__get_playerStateChangedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::IConnectedPlayer>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set_playerAvatarChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::IConnectedPlayer>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::IConnectedPlayer>>(value));
}
constexpr System::Action_1<GlobalNamespace::IConnectedPlayer> GlobalNamespace::ConnectedPlayerManager::__get_playerAvatarChangedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::IConnectedPlayer>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set_playerOrderChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::IConnectedPlayer>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::IConnectedPlayer>>(value));
}
constexpr System::Action_1<GlobalNamespace::IConnectedPlayer> GlobalNamespace::ConnectedPlayerManager::__get_playerOrderChangedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::IConnectedPlayer>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set_playerLatencyInitializedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::IConnectedPlayer>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::IConnectedPlayer>>(value));
}
constexpr System::Action_1<GlobalNamespace::IConnectedPlayer> GlobalNamespace::ConnectedPlayerManager::__get_playerLatencyInitializedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::IConnectedPlayer>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set_syncTimeInitializedEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::ConnectedPlayerManager::__get_syncTimeInitializedEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set__startTicks(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::ConnectedPlayerManager::__get__startTicks() const {
return ::cordl_internals::getInstanceField<int64_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set__syncTimeOffset(GlobalNamespace::RollingAverage value)  {
::cordl_internals::setInstanceField<GlobalNamespace::RollingAverage, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::RollingAverage>(value));
}
constexpr GlobalNamespace::RollingAverage GlobalNamespace::ConnectedPlayerManager::__get__syncTimeOffset() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::RollingAverage, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set__timeProvider(BGNet::Core::ITimeProvider value)  {
::cordl_internals::setInstanceField<BGNet::Core::ITimeProvider, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BGNet::Core::ITimeProvider>(value));
}
constexpr BGNet::Core::ITimeProvider GlobalNamespace::ConnectedPlayerManager::__get__timeProvider() const {
return ::cordl_internals::getInstanceField<BGNet::Core::ITimeProvider, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set__taskUtility(BGNet::Core::ITaskUtility value)  {
::cordl_internals::setInstanceField<BGNet::Core::ITaskUtility, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BGNet::Core::ITaskUtility>(value));
}
constexpr BGNet::Core::ITaskUtility GlobalNamespace::ConnectedPlayerManager::__get__taskUtility() const {
return ::cordl_internals::getInstanceField<BGNet::Core::ITaskUtility, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set__connectionManager(GlobalNamespace::IConnectionManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IConnectionManager, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IConnectionManager>(value));
}
constexpr GlobalNamespace::IConnectionManager GlobalNamespace::ConnectedPlayerManager::__get__connectionManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IConnectionManager, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set__temporaryDataWriter(LiteNetLib::Utils::NetDataWriter value)  {
::cordl_internals::setInstanceField<LiteNetLib::Utils::NetDataWriter, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::Utils::NetDataWriter>(value));
}
constexpr LiteNetLib::Utils::NetDataWriter GlobalNamespace::ConnectedPlayerManager::__get__temporaryDataWriter() const {
return ::cordl_internals::getInstanceField<LiteNetLib::Utils::NetDataWriter, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set__temporaryEncryptedDataWriter(LiteNetLib::Utils::NetDataWriter value)  {
::cordl_internals::setInstanceField<LiteNetLib::Utils::NetDataWriter, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::Utils::NetDataWriter>(value));
}
constexpr LiteNetLib::Utils::NetDataWriter GlobalNamespace::ConnectedPlayerManager::__get__temporaryEncryptedDataWriter() const {
return ::cordl_internals::getInstanceField<LiteNetLib::Utils::NetDataWriter, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set__reliableDataWriter(LiteNetLib::Utils::NetDataWriter value)  {
::cordl_internals::setInstanceField<LiteNetLib::Utils::NetDataWriter, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::Utils::NetDataWriter>(value));
}
constexpr LiteNetLib::Utils::NetDataWriter GlobalNamespace::ConnectedPlayerManager::__get__reliableDataWriter() const {
return ::cordl_internals::getInstanceField<LiteNetLib::Utils::NetDataWriter, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set__unreliableDataWriter(LiteNetLib::Utils::NetDataWriter value)  {
::cordl_internals::setInstanceField<LiteNetLib::Utils::NetDataWriter, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::Utils::NetDataWriter>(value));
}
constexpr LiteNetLib::Utils::NetDataWriter GlobalNamespace::ConnectedPlayerManager::__get__unreliableDataWriter() const {
return ::cordl_internals::getInstanceField<LiteNetLib::Utils::NetDataWriter, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set__players(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer> GlobalNamespace::ConnectedPlayerManager::__get__players() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set__localPlayerState(System::Collections::Generic::HashSet_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<::StringW>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<::StringW>>(value));
}
constexpr System::Collections::Generic::HashSet_1<::StringW> GlobalNamespace::ConnectedPlayerManager::__get__localPlayerState() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<::StringW>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set__localPlayerAvatar(GlobalNamespace::MultiplayerAvatarData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerAvatarData, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerAvatarData>(value));
}
constexpr GlobalNamespace::MultiplayerAvatarData GlobalNamespace::ConnectedPlayerManager::__get__localPlayerAvatar() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerAvatarData, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set__encryptionKeys(GlobalNamespace::IDiffieHellmanKeyPair value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IDiffieHellmanKeyPair, 0x130>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IDiffieHellmanKeyPair>(value));
}
constexpr GlobalNamespace::IDiffieHellmanKeyPair GlobalNamespace::ConnectedPlayerManager::__get__encryptionKeys() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IDiffieHellmanKeyPair, 0x130>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set__encryptionRandom(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x138>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> GlobalNamespace::ConnectedPlayerManager::__get__encryptionRandom() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x138>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set__localPlayer(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer, 0x140>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>(value));
}
constexpr GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer GlobalNamespace::ConnectedPlayerManager::__get__localPlayer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer, 0x140>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set__lastConnectionId(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x148>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t GlobalNamespace::ConnectedPlayerManager::__get__lastConnectionId() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x148>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set__lastPollTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::ConnectedPlayerManager::__get__lastPollTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x14c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set__lastPollFrame(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x150>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::ConnectedPlayerManager::__get__lastPollFrame() const {
return ::cordl_internals::getInstanceField<int32_t, 0x150>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set__lastPingTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x154>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::ConnectedPlayerManager::__get__lastPingTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x154>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__set__messageSerializer(GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType,GlobalNamespace::IConnectedPlayer> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType,GlobalNamespace::IConnectedPlayer>, 0x158>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType,GlobalNamespace::IConnectedPlayer>>(value));
}
constexpr GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType,GlobalNamespace::IConnectedPlayer> GlobalNamespace::ConnectedPlayerManager::__get__messageSerializer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__InternalMessageType,GlobalNamespace::IConnectedPlayer>, 0x158>(this->::bs_hook::Il2CppWrapperType::instance);
}
 uint8_t GlobalNamespace::ConnectedPlayerManager::GetNextConnectionId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "GetNextConnectionId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::ConnectedPlayerManager::RemoveAllPlayers(GlobalNamespace::DisconnectedReason reason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "RemoveAllPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reason);
}
 void GlobalNamespace::ConnectedPlayerManager::RemovePlayer(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer player, GlobalNamespace::DisconnectedReason reason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "RemovePlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player, reason);
}
 void GlobalNamespace::ConnectedPlayerManager::AddPlayer(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "AddPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player);
}
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer GlobalNamespace::ConnectedPlayerManager::GetPlayer(uint8_t connectionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "GetPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer, false>(const_cast<void*>(instance), ___internal_method, connectionId);
}
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer GlobalNamespace::ConnectedPlayerManager::GetPlayer(GlobalNamespace::IConnection connection, uint8_t remoteConnectionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "GetPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer, false>(const_cast<void*>(instance), ___internal_method, connection, remoteConnectionId);
}
 GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer GlobalNamespace::ConnectedPlayerManager::GetPlayer(::StringW userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "GetPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer, false>(const_cast<void*>(instance), ___internal_method, userId);
}
 GlobalNamespace::IConnectedPlayer GlobalNamespace::ConnectedPlayerManager::GetConnectedPlayer(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "GetConnectedPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IConnectedPlayer, false>(const_cast<void*>(instance), ___internal_method, index);
}
 void GlobalNamespace::ConnectedPlayerManager::add_connectedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "add_connectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::ConnectedPlayerManager::remove_connectedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "remove_connectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::ConnectedPlayerManager::add_initializedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "add_initializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::ConnectedPlayerManager::remove_initializedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "remove_initializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::ConnectedPlayerManager::add_disconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "add_disconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::DisconnectedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::ConnectedPlayerManager::remove_disconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "remove_disconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::DisconnectedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::ConnectedPlayerManager::add_connectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "add_connectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ConnectionFailedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::ConnectedPlayerManager::remove_connectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "remove_connectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ConnectionFailedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::ConnectedPlayerManager::add_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "add_playerConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::ConnectedPlayerManager::remove_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "remove_playerConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::ConnectedPlayerManager::add_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "add_playerDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::ConnectedPlayerManager::remove_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "remove_playerDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::ConnectedPlayerManager::add_playerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "add_playerStateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::ConnectedPlayerManager::remove_playerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "remove_playerStateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::ConnectedPlayerManager::add_playerAvatarChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "add_playerAvatarChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::ConnectedPlayerManager::remove_playerAvatarChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "remove_playerAvatarChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::ConnectedPlayerManager::add_playerOrderChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "add_playerOrderChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::ConnectedPlayerManager::remove_playerOrderChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "remove_playerOrderChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::ConnectedPlayerManager::add_playerLatencyInitializedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "add_playerLatencyInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::ConnectedPlayerManager::remove_playerLatencyInitializedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "remove_playerLatencyInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::ConnectedPlayerManager::add_syncTimeInitializedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "add_syncTimeInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::ConnectedPlayerManager::remove_syncTimeInitializedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "remove_syncTimeInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::ConnectedPlayerManager::get_isConnectionOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "get_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::ConnectedPlayerManager::get_isConnectedOrConnecting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "get_isConnectedOrConnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::ConnectedPlayerManager::get_isConnected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "get_isConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::ConnectedPlayerManager::get_isConnecting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "get_isConnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::ConnectedPlayerManager::get_isDisconnecting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "get_isDisconnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::IConnectedPlayer GlobalNamespace::ConnectedPlayerManager::get_localPlayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "get_localPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IConnectedPlayer, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::ConnectedPlayerManager::get_connectedPlayerCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "get_connectedPlayerCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::ConnectedPlayerManager::get_syncTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "get_syncTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::ConnectedPlayerManager::get_syncTimeInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "get_syncTimeInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::ConnectedPlayerManager::get_runTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "get_runTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "connectionManager", ty: "GlobalNamespace::IConnectionManager", modifiers: "", def_value: None }]
 GlobalNamespace::ConnectedPlayerManager::ConnectedPlayerManager(GlobalNamespace::IConnectionManager connectionManager)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ConnectedPlayerManager>(connectionManager))) {}
 void GlobalNamespace::ConnectedPlayerManager::_ctor(GlobalNamespace::IConnectionManager connectionManager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectionManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connectionManager);
}
// Ctor Parameters [CppParam { name: "timeProvider", ty: "BGNet::Core::ITimeProvider", modifiers: "", def_value: None }, CppParam { name: "taskUtility", ty: "BGNet::Core::ITaskUtility", modifiers: "", def_value: None }, CppParam { name: "connectionManager", ty: "GlobalNamespace::IConnectionManager", modifiers: "", def_value: None }]
 GlobalNamespace::ConnectedPlayerManager::ConnectedPlayerManager(BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility, GlobalNamespace::IConnectionManager connectionManager)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ConnectedPlayerManager>(timeProvider, taskUtility, connectionManager))) {}
 void GlobalNamespace::ConnectedPlayerManager::_ctor(BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility, GlobalNamespace::IConnectionManager connectionManager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITimeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITaskUtility>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectionManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, timeProvider, taskUtility, connectionManager);
}
 void GlobalNamespace::ConnectedPlayerManager::PollUpdate(int32_t frameCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, frameCount);
}
 void GlobalNamespace::ConnectedPlayerManager::PollLateUpdateOptional()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "PollLateUpdateOptional",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::ConnectedPlayerManager::RegisterSerializer(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__MessageType serializerType, GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer> subSerializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "RegisterSerializer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializerType, subSerializer);
}
 void GlobalNamespace::ConnectedPlayerManager::UnregisterSerializer(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__MessageType serializerType, GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer> subSerializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "UnregisterSerializer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializerType, subSerializer);
}
template<typename T>
 T GlobalNamespace::ConnectedPlayerManager::GetConnectionManager()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                        "GetConnectionManager",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::ConnectedPlayerManager::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param disconnectedReason: GlobalNamespace::DisconnectedReason (default: 2)
 void GlobalNamespace::ConnectedPlayerManager::Disconnect(GlobalNamespace::DisconnectedReason disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disconnectedReason);
}
/// @param disconnectedReason: GlobalNamespace::DisconnectedReason (default: 4)
 void GlobalNamespace::ConnectedPlayerManager::KickPlayer(::StringW userId, GlobalNamespace::DisconnectedReason disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "KickPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, disconnectedReason);
}
 void GlobalNamespace::ConnectedPlayerManager::SetLocalPlayerState(::StringW state, bool setState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "SetLocalPlayerState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, setState);
}
 void GlobalNamespace::ConnectedPlayerManager::SetLocalPlayerAvatar(GlobalNamespace::MultiplayerAvatarData multiplayerAvatarData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "SetLocalPlayerAvatar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerAvatarData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, multiplayerAvatarData);
}
 void GlobalNamespace::ConnectedPlayerManager::SetLocalPlayerSortIndex(int32_t sortIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "SetLocalPlayerSortIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sortIndex);
}
 void GlobalNamespace::ConnectedPlayerManager::SetPlayerSortIndex(GlobalNamespace::IConnectedPlayer player, int32_t sortIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "SetPlayerSortIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player, sortIndex);
}
 void GlobalNamespace::ConnectedPlayerManager::ResetLocalState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "ResetLocalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::ConnectedPlayerManager::HandleInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandleInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::ConnectedPlayerManager::HandleConnected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandleConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::ConnectedPlayerManager::HandleDisconnected(GlobalNamespace::DisconnectedReason disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandleDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disconnectedReason);
}
 void GlobalNamespace::ConnectedPlayerManager::HandleConnectionFailed(GlobalNamespace::ConnectionFailedReason reason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandleConnectionFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reason);
}
 void GlobalNamespace::ConnectedPlayerManager::HandleConnectionConnected(GlobalNamespace::IConnection connection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandleConnectionConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connection);
}
 void GlobalNamespace::ConnectedPlayerManager::HandleConnectionDisconnected(GlobalNamespace::IConnection connection, GlobalNamespace::DisconnectedReason disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandleConnectionDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connection, disconnectedReason);
}
 void GlobalNamespace::ConnectedPlayerManager::HandleNetworkReceive(GlobalNamespace::IConnection connection, LiteNetLib::Utils::NetDataReader reader, BGNet::Core::DeliveryMethod deliveryMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandleNetworkReceive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connection, reader, deliveryMethod);
}
template<typename T>
 void GlobalNamespace::ConnectedPlayerManager::Send(T message)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
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
 void GlobalNamespace::ConnectedPlayerManager::SendUnreliable(T message)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
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
 void GlobalNamespace::ConnectedPlayerManager::SendToPlayer(T message, GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
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
 void GlobalNamespace::ConnectedPlayerManager::SendUnreliableEncryptedToPlayer(T message, GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
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
/// @param onlyFirstDegree: bool (default: false)
 void GlobalNamespace::ConnectedPlayerManager::SendImmediately(LiteNetLib::Utils::INetSerializable message, bool onlyFirstDegree)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "SendImmediately",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::INetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message, onlyFirstDegree);
}
/// @param onlyFirstDegree: bool (default: false)
 void GlobalNamespace::ConnectedPlayerManager::SendImmediatelyExcludingPlayer(LiteNetLib::Utils::INetSerializable message, GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer excludingPlayer, bool onlyFirstDegree)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "SendImmediatelyExcludingPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::INetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message, excludingPlayer, onlyFirstDegree);
}
 void GlobalNamespace::ConnectedPlayerManager::SendImmediatelyToPlayer(LiteNetLib::Utils::INetSerializable message, GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer toPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "SendImmediatelyToPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::INetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message, toPlayer);
}
/// @param onlyFirstDegree: bool (default: false)
 void GlobalNamespace::ConnectedPlayerManager::SendImmediatelyFromPlayer(LiteNetLib::Utils::INetSerializable message, GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer fromPlayer, bool onlyFirstDegree)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "SendImmediatelyFromPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::INetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message, fromPlayer, onlyFirstDegree);
}
 void GlobalNamespace::ConnectedPlayerManager::SendImmediatelyFromPlayerToPlayer(LiteNetLib::Utils::INetSerializable message, GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer fromPlayer, GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer toPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "SendImmediatelyFromPlayerToPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::INetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message, fromPlayer, toPlayer);
}
 void GlobalNamespace::ConnectedPlayerManager::FlushReliableQueue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "FlushReliableQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::ConnectedPlayerManager::FlushUnreliableQueue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "FlushUnreliableQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 LiteNetLib::Utils::NetDataWriter GlobalNamespace::ConnectedPlayerManager::WriteOne(uint8_t senderId, uint8_t receiverId, LiteNetLib::Utils::INetSerializable message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "WriteOne",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::INetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<LiteNetLib::Utils::NetDataWriter, false>(const_cast<void*>(instance), ___internal_method, senderId, receiverId, message);
}
 LiteNetLib::Utils::NetDataWriter GlobalNamespace::ConnectedPlayerManager::WriteOneEncrypted(GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState encryptionState, uint8_t senderId, uint8_t receiverId, LiteNetLib::Utils::INetSerializable message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "WriteOneEncrypted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::INetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<LiteNetLib::Utils::NetDataWriter, false>(const_cast<void*>(instance), ___internal_method, encryptionState, senderId, receiverId, message);
}
 void GlobalNamespace::ConnectedPlayerManager::Write(LiteNetLib::Utils::NetDataWriter writer, LiteNetLib::Utils::INetSerializable packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::INetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, packet);
}
 void GlobalNamespace::ConnectedPlayerManager::HandleServerPlayerConnected(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket packet, GlobalNamespace::IConnectedPlayer iPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandleServerPlayerConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerConnectedPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet, iPlayer);
}
 void GlobalNamespace::ConnectedPlayerManager::HandlePlayerIdentityUpdate(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket packet, GlobalNamespace::IConnectedPlayer iPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandlePlayerIdentityUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerIdentityPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet, iPlayer);
}
 void GlobalNamespace::ConnectedPlayerManager::InitializePlayerEncryption(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "InitializePlayerEncryption",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__ConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player);
}
 void GlobalNamespace::ConnectedPlayerManager::HandlePlayerStateUpdate(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket packet, GlobalNamespace::IConnectedPlayer iPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandlePlayerStateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerStatePacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet, iPlayer);
}
 void GlobalNamespace::ConnectedPlayerManager::HandlePlayerAvatarUpdate(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket packet, GlobalNamespace::IConnectedPlayer iPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandlePlayerAvatarUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerAvatarPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet, iPlayer);
}
 void GlobalNamespace::ConnectedPlayerManager::HandleServerPlayerDisconnected(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket packet, GlobalNamespace::IConnectedPlayer iPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandleServerPlayerDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerDisconnectedPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet, iPlayer);
}
 void GlobalNamespace::ConnectedPlayerManager::HandleKickPlayerPacket(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket packet, GlobalNamespace::IConnectedPlayer iPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandleKickPlayerPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__KickPlayerPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet, iPlayer);
}
 void GlobalNamespace::ConnectedPlayerManager::HandlePlayerSortOrderUpdate(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket packet, GlobalNamespace::IConnectedPlayer iPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandlePlayerSortOrderUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PlayerSortOrderPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet, iPlayer);
}
 void GlobalNamespace::ConnectedPlayerManager::HandleSyncTimePacket(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket packet, GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandleSyncTimePacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__SyncTimePacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet, player);
}
 void GlobalNamespace::ConnectedPlayerManager::HandlePing(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket packet, GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandlePing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PingPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet, player);
}
 void GlobalNamespace::ConnectedPlayerManager::HandlePong(GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket packet, GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "HandlePong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ConnectedPlayerManager__PongPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet, player);
}
 void GlobalNamespace::ConnectedPlayerManager::Log(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerManager>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
