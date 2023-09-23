#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LocalNetworkDiscoveryManager_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "LiteNetLib/zzzz__NetPacketReader_def.hpp"
#include "LiteNetLib/zzzz__NetManager_def.hpp"
#include "LiteNetLib/zzzz__UnconnectedMessageType_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPacketSerializer_2_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "LiteNetLib/zzzz__INetEventListener_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "LiteNetLib/zzzz__DeliveryMethod_def.hpp"
#include "LiteNetLib/zzzz__ConnectionRequest_def.hpp"
#include "LiteNetLib/zzzz__DisconnectInfo_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PacketType::GlobalNamespace__LocalNetworkDiscoveryManager__PacketType(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PacketType::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PacketType::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PacketType  GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PacketType::Broadcast{0u};
constexpr GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PacketType  GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PacketType::JoinRequest{1u};
constexpr GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PacketType  GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PacketType::JoinResponse{2u};
constexpr GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PacketType  GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PacketType::InviteRequest{3u};
constexpr GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PacketType  GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PacketType::InviteResponse{4u};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket::Serialize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x22041e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket::Deserialize)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2204278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket::*)()>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2203f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket::__set_version(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket::__get_version() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket::__set_userId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket::__get_userId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket::__set_userName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket::__get_userName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket::__set_currentPartySize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket::__get_currentPartySize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket::__set_isPartyOwner(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket::__get_isPartyOwner() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket::__set_selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelSelectionMask, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelSelectionMask>(value));
}
constexpr GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket::__get_selectionMask() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelSelectionMask, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket::__set_configuration(GlobalNamespace::GameplayServerConfiguration value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayServerConfiguration>(value));
}
constexpr GlobalNamespace::GameplayServerConfiguration GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket::__get_configuration() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket>())) {}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket::Serialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x220434c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket::Deserialize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x220438c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket::*)()>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2203924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket::__set_userId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket::__get_userId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket::__set_userName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket::__get_userName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket>())) {}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket::Serialize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x22043d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket::Deserialize)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2204464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket::*)()>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2203a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket::__set_userId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket::__get_userId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket::__set_secret(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket::__get_secret() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket::__set_multiplayerPort(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket::__get_multiplayerPort() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket::__set_blocked(bool value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket::__get_blocked() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket::__set_isPartyOwner(bool value)  {
::cordl_internals::setInstanceField<bool, 0x25>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket::__get_isPartyOwner() const {
return ::cordl_internals::getInstanceField<bool, 0x25>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket::__set_selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelSelectionMask, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelSelectionMask>(value));
}
constexpr GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket::__get_selectionMask() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelSelectionMask, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket::__set_configuration(GlobalNamespace::GameplayServerConfiguration value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayServerConfiguration>(value));
}
constexpr GlobalNamespace::GameplayServerConfiguration GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket::__get_configuration() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket>())) {}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket::Serialize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x220453c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket::Deserialize)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x22045d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket::*)()>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2203bcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket::__set_userId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket::__get_userId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket::__set_userName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket::__get_userName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket::__set_secret(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket::__get_secret() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket::__set_multiplayerPort(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket::__get_multiplayerPort() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket::__set_isPartyOwner(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket::__get_isPartyOwner() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket::__set_selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelSelectionMask, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelSelectionMask>(value));
}
constexpr GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket::__get_selectionMask() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelSelectionMask, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket::__set_configuration(GlobalNamespace::GameplayServerConfiguration value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayServerConfiguration>(value));
}
constexpr GlobalNamespace::GameplayServerConfiguration GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket::__get_configuration() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket>())) {}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket::Serialize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22046a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket::Deserialize)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x22046f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket::*)()>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2203ce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket::__set_userId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket::__get_userId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket::__set_accepted(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket::__get_accepted() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket::__set_blocked(bool value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket::__get_blocked() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket>())) {}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2204750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate::*)(::StringW, System::Net::IPAddress, ::StringW, int32_t, bool, GlobalNamespace::BeatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate::Invoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2204828;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate::*)(::StringW, System::Net::IPAddress, ::StringW, int32_t, bool, GlobalNamespace::BeatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2204880;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate::*)(System::IAsyncResult)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22049b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate>(object, method))) {}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate::Invoke(::StringW userId, System::Net::IPAddress remoteEndPoint, ::StringW userName, int32_t currentPartySize, bool isPartyOwner, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayServerConfiguration>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, remoteEndPoint, userName, currentPartySize, isPartyOwner, selectionMask, configuration);
}
 System::IAsyncResult GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate::BeginInvoke(::StringW userId, System::Net::IPAddress remoteEndPoint, ::StringW userName, int32_t currentPartySize, bool isPartyOwner, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayServerConfiguration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, userId, remoteEndPoint, userName, currentPartySize, isPartyOwner, selectionMask, configuration, callback, object);
}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x22049c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate::*)(::StringW, System::Net::IPAddress, ::StringW)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2204a98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate::*)(::StringW, System::Net::IPAddress, ::StringW, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2204aac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate::*)(System::IAsyncResult)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2204ad8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate>(object, method))) {}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate::Invoke(::StringW userId, System::Net::IPAddress remoteEndPoint, ::StringW userName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, remoteEndPoint, userName);
}
 System::IAsyncResult GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate::BeginInvoke(::StringW userId, System::Net::IPAddress remoteEndPoint, ::StringW userName, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, userId, remoteEndPoint, userName, callback, object);
}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2204ae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate::*)(::StringW, ::StringW, int32_t, bool, bool, GlobalNamespace::BeatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate::Invoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2204bbc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate::*)(::StringW, ::StringW, int32_t, bool, bool, GlobalNamespace::BeatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2204c18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate::*)(System::IAsyncResult)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2204d60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate>(object, method))) {}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate::Invoke(::StringW userId, ::StringW secret, int32_t multiplayerPort, bool blocked, bool isPartyOwner, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayServerConfiguration>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, secret, multiplayerPort, blocked, isPartyOwner, selectionMask, configuration);
}
 System::IAsyncResult GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate::BeginInvoke(::StringW userId, ::StringW secret, int32_t multiplayerPort, bool blocked, bool isPartyOwner, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayServerConfiguration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, userId, secret, multiplayerPort, blocked, isPartyOwner, selectionMask, configuration, callback, object);
}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2204d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate::*)(::StringW, System::Net::IPAddress, ::StringW, ::StringW, int32_t, bool, GlobalNamespace::BeatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate::Invoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2204e44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate::*)(::StringW, System::Net::IPAddress, ::StringW, ::StringW, int32_t, bool, GlobalNamespace::BeatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2204ea0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate::*)(System::IAsyncResult)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2204fd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate>(object, method))) {}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate::Invoke(::StringW userId, System::Net::IPAddress remoteEndPoint, ::StringW userName, ::StringW secret, int32_t multiplayerPort, bool isPartyOwner, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayServerConfiguration>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, remoteEndPoint, userName, secret, multiplayerPort, isPartyOwner, selectionMask, configuration);
}
 System::IAsyncResult GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate::BeginInvoke(::StringW userId, System::Net::IPAddress remoteEndPoint, ::StringW userName, ::StringW secret, int32_t multiplayerPort, bool isPartyOwner, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayServerConfiguration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, userId, remoteEndPoint, userName, secret, multiplayerPort, isPartyOwner, selectionMask, configuration, callback, object);
}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2204fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate::*)(::StringW, bool, bool)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate::Invoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22050bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate::*)(::StringW, bool, bool, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x22050d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate::*)(System::IAsyncResult)>(&GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x220518c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate>(object, method))) {}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate::Invoke(::StringW userId, bool accepted, bool blocked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, accepted, blocked);
}
 System::IAsyncResult GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate::BeginInvoke(::StringW userId, bool accepted, bool blocked, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, userId, accepted, blocked, callback, object);
}
 void GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.add_peerUpdatedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate)>(&GlobalNamespace::LocalNetworkDiscoveryManager::add_peerUpdatedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2202bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "add_peerUpdatedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.remove_peerUpdatedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate)>(&GlobalNamespace::LocalNetworkDiscoveryManager::remove_peerUpdatedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2202c48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "remove_peerUpdatedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.add_joinRequestedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate)>(&GlobalNamespace::LocalNetworkDiscoveryManager::add_joinRequestedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2202ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "add_joinRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.remove_joinRequestedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate)>(&GlobalNamespace::LocalNetworkDiscoveryManager::remove_joinRequestedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2202d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "remove_joinRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.add_joinRespondedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate)>(&GlobalNamespace::LocalNetworkDiscoveryManager::add_joinRespondedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2202e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "add_joinRespondedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.remove_joinRespondedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate)>(&GlobalNamespace::LocalNetworkDiscoveryManager::remove_joinRespondedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2202eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "remove_joinRespondedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.add_inviteRequestedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate)>(&GlobalNamespace::LocalNetworkDiscoveryManager::add_inviteRequestedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2202f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "add_inviteRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.remove_inviteRequestedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate)>(&GlobalNamespace::LocalNetworkDiscoveryManager::remove_inviteRequestedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2202ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "remove_inviteRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.add_inviteRespondedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate)>(&GlobalNamespace::LocalNetworkDiscoveryManager::add_inviteRespondedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x220308c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "add_inviteRespondedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.remove_inviteRespondedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate)>(&GlobalNamespace::LocalNetworkDiscoveryManager::remove_inviteRespondedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2203128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "remove_inviteRespondedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.get_userId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::LocalNetworkDiscoveryManager::*)()>(&GlobalNamespace::LocalNetworkDiscoveryManager::get_userId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22031c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.get_userName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::LocalNetworkDiscoveryManager::*)()>(&GlobalNamespace::LocalNetworkDiscoveryManager::get_userName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22031e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.get_isPartyOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LocalNetworkDiscoveryManager::*)()>(&GlobalNamespace::LocalNetworkDiscoveryManager::get_isPartyOwner)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22031fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "get_isPartyOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.set_isPartyOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(bool)>(&GlobalNamespace::LocalNetworkDiscoveryManager::set_isPartyOwner)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2203218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "set_isPartyOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.get_currentPartySize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::LocalNetworkDiscoveryManager::*)()>(&GlobalNamespace::LocalNetworkDiscoveryManager::get_currentPartySize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x220324c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "get_currentPartySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.set_currentPartySize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(int32_t)>(&GlobalNamespace::LocalNetworkDiscoveryManager::set_currentPartySize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2203268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "set_currentPartySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.get_configuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayServerConfiguration (GlobalNamespace::LocalNetworkDiscoveryManager::*)()>(&GlobalNamespace::LocalNetworkDiscoveryManager::get_configuration)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2203298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "get_configuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.set_configuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(GlobalNamespace::GameplayServerConfiguration)>(&GlobalNamespace::LocalNetworkDiscoveryManager::set_configuration)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x22032c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "set_configuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayServerConfiguration>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.get_selectionMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapLevelSelectionMask (GlobalNamespace::LocalNetworkDiscoveryManager::*)()>(&GlobalNamespace::LocalNetworkDiscoveryManager::get_selectionMask)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2203330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "get_selectionMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.set_selectionMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(GlobalNamespace::BeatmapLevelSelectionMask)>(&GlobalNamespace::LocalNetworkDiscoveryManager::set_selectionMask)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2203358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "set_selectionMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.get_enableBroadcasting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LocalNetworkDiscoveryManager::*)()>(&GlobalNamespace::LocalNetworkDiscoveryManager::get_enableBroadcasting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22033ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "get_enableBroadcasting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.set_enableBroadcasting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(bool)>(&GlobalNamespace::LocalNetworkDiscoveryManager::set_enableBroadcasting)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22033f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "set_enableBroadcasting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(int32_t, ::StringW, ::StringW)>(&GlobalNamespace::LocalNetworkDiscoveryManager::Init)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x2203400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)()>(&GlobalNamespace::LocalNetworkDiscoveryManager::OnEnable)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2203758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)()>(&GlobalNamespace::LocalNetworkDiscoveryManager::OnDisable)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x220376c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)()>(&GlobalNamespace::LocalNetworkDiscoveryManager::Update)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2203780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.SendJoinRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(System::Net::IPAddress)>(&GlobalNamespace::LocalNetworkDiscoveryManager::SendJoinRequest)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2203838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "SendJoinRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.SendJoinResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(System::Net::IPAddress, ::StringW, int32_t, bool, bool, GlobalNamespace::BeatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration)>(&GlobalNamespace::LocalNetworkDiscoveryManager::SendJoinResponse)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x220392c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "SendJoinResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayServerConfiguration>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.SendInviteRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(System::Net::IPAddress, ::StringW, int32_t, bool, GlobalNamespace::BeatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration)>(&GlobalNamespace::LocalNetworkDiscoveryManager::SendInviteRequest)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2203a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "SendInviteRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayServerConfiguration>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.SendInviteResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(System::Net::IPAddress, bool, bool)>(&GlobalNamespace::LocalNetworkDiscoveryManager::SendInviteResponse)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2203bd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "SendInviteResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(System::Net::IPEndPoint, LiteNetLib::NetPacketReader, LiteNetLib::UnconnectedMessageType)>(&GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2203ce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacketReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::UnconnectedMessageType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.LiteNetLib_INetEventListener_OnConnectionRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(LiteNetLib::ConnectionRequest)>(&GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnConnectionRequest)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2203d84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "LiteNetLib.INetEventListener.OnConnectionRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::ConnectionRequest>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.LiteNetLib_INetEventListener_OnNetworkError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(System::Net::IPEndPoint, System::Net::Sockets::SocketError)>(&GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnNetworkError)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2203d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "LiteNetLib.INetEventListener.OnNetworkError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketError>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.LiteNetLib_INetEventListener_OnNetworkLatencyUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(LiteNetLib::NetPeer, int32_t)>(&GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnNetworkLatencyUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2203e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "LiteNetLib.INetEventListener.OnNetworkLatencyUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.LiteNetLib_INetEventListener_OnPeerConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(LiteNetLib::NetPeer)>(&GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnPeerConnected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2203e6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "LiteNetLib.INetEventListener.OnPeerConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.LiteNetLib_INetEventListener_OnPeerDisconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(LiteNetLib::NetPeer, LiteNetLib::DisconnectInfo)>(&GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnPeerDisconnected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2203e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "LiteNetLib.INetEventListener.OnPeerDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DisconnectInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager.LiteNetLib_INetEventListener_OnNetworkReceive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(LiteNetLib::NetPeer, LiteNetLib::NetPacketReader, LiteNetLib::DeliveryMethod)>(&GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnNetworkReceive)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2203e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "LiteNetLib.INetEventListener.OnNetworkReceive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacketReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)()>(&GlobalNamespace::LocalNetworkDiscoveryManager::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2203e78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager._Init_b__55_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket, System::Net::IPEndPoint)>(&GlobalNamespace::LocalNetworkDiscoveryManager::_Init_b__55_0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2203f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "<Init>b__55_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager._Init_b__55_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket, System::Net::IPEndPoint)>(&GlobalNamespace::LocalNetworkDiscoveryManager::_Init_b__55_1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2204034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "<Init>b__55_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager._Init_b__55_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket, System::Net::IPEndPoint)>(&GlobalNamespace::LocalNetworkDiscoveryManager::_Init_b__55_2)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2204074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "<Init>b__55_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager._Init_b__55_3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket, System::Net::IPEndPoint)>(&GlobalNamespace::LocalNetworkDiscoveryManager::_Init_b__55_3)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2204108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "<Init>b__55_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalNetworkDiscoveryManager._Init_b__55_4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::*)(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket, System::Net::IPEndPoint)>(&GlobalNamespace::LocalNetworkDiscoveryManager::_Init_b__55_4)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x22041a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "<Init>b__55_4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to LiteNetLib::INetEventListener
constexpr  GlobalNamespace::LocalNetworkDiscoveryManager::operator LiteNetLib::INetEventListener() const noexcept {
return LiteNetLib::INetEventListener(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LocalNetworkDiscoveryManager::__set_peerUpdatedEvent(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate>(value));
}
constexpr GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate GlobalNamespace::LocalNetworkDiscoveryManager::__get_peerUpdatedEvent() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LocalNetworkDiscoveryManager::__set_joinRequestedEvent(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate>(value));
}
constexpr GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate GlobalNamespace::LocalNetworkDiscoveryManager::__get_joinRequestedEvent() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LocalNetworkDiscoveryManager::__set_joinRespondedEvent(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate>(value));
}
constexpr GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate GlobalNamespace::LocalNetworkDiscoveryManager::__get_joinRespondedEvent() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LocalNetworkDiscoveryManager::__set_inviteRequestedEvent(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate>(value));
}
constexpr GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate GlobalNamespace::LocalNetworkDiscoveryManager::__get_inviteRequestedEvent() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LocalNetworkDiscoveryManager::__set_inviteRespondedEvent(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate>(value));
}
constexpr GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate GlobalNamespace::LocalNetworkDiscoveryManager::__get_inviteRespondedEvent() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LocalNetworkDiscoveryManager::__set__netManager(LiteNetLib::NetManager value)  {
::cordl_internals::setInstanceField<LiteNetLib::NetManager, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::NetManager>(value));
}
constexpr LiteNetLib::NetManager GlobalNamespace::LocalNetworkDiscoveryManager::__get__netManager() const {
return ::cordl_internals::getInstanceField<LiteNetLib::NetManager, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LocalNetworkDiscoveryManager::__set__packetSerializer(GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PacketType,System::Net::IPEndPoint> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PacketType,System::Net::IPEndPoint>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PacketType,System::Net::IPEndPoint>>(value));
}
constexpr GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PacketType,System::Net::IPEndPoint> GlobalNamespace::LocalNetworkDiscoveryManager::__get__packetSerializer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PacketType,System::Net::IPEndPoint>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LocalNetworkDiscoveryManager::__set__netDataWriter(LiteNetLib::Utils::NetDataWriter value)  {
::cordl_internals::setInstanceField<LiteNetLib::Utils::NetDataWriter, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::Utils::NetDataWriter>(value));
}
constexpr LiteNetLib::Utils::NetDataWriter GlobalNamespace::LocalNetworkDiscoveryManager::__get__netDataWriter() const {
return ::cordl_internals::getInstanceField<LiteNetLib::Utils::NetDataWriter, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LocalNetworkDiscoveryManager::__set__broadcastPacket(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket>(value));
}
constexpr GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket GlobalNamespace::LocalNetworkDiscoveryManager::__get__broadcastPacket() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LocalNetworkDiscoveryManager::__set__discoveryPort(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::LocalNetworkDiscoveryManager::__get__discoveryPort() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LocalNetworkDiscoveryManager::__set__initialized(bool value)  {
::cordl_internals::setInstanceField<bool, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::LocalNetworkDiscoveryManager::__get__initialized() const {
return ::cordl_internals::getInstanceField<bool, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LocalNetworkDiscoveryManager::__set__enableBroadcasting(bool value)  {
::cordl_internals::setInstanceField<bool, 0x65>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::LocalNetworkDiscoveryManager::__get__enableBroadcasting() const {
return ::cordl_internals::getInstanceField<bool, 0x65>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LocalNetworkDiscoveryManager::__set__lastBroadcastTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::LocalNetworkDiscoveryManager::__get__lastBroadcastTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::add_peerUpdatedEvent(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "add_peerUpdatedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::remove_peerUpdatedEvent(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "remove_peerUpdatedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::add_joinRequestedEvent(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "add_joinRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::remove_joinRequestedEvent(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "remove_joinRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::add_joinRespondedEvent(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "add_joinRespondedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::remove_joinRespondedEvent(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "remove_joinRespondedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::add_inviteRequestedEvent(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "add_inviteRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::remove_inviteRequestedEvent(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "remove_inviteRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::add_inviteRespondedEvent(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "add_inviteRespondedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::remove_inviteRespondedEvent(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "remove_inviteRespondedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW GlobalNamespace::LocalNetworkDiscoveryManager::get_userId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::LocalNetworkDiscoveryManager::get_userName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::LocalNetworkDiscoveryManager::get_isPartyOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "get_isPartyOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::set_isPartyOwner(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "set_isPartyOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t GlobalNamespace::LocalNetworkDiscoveryManager::get_currentPartySize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "get_currentPartySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::set_currentPartySize(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "set_currentPartySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::GameplayServerConfiguration GlobalNamespace::LocalNetworkDiscoveryManager::get_configuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "get_configuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GameplayServerConfiguration, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::set_configuration(GlobalNamespace::GameplayServerConfiguration value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "set_configuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayServerConfiguration>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::LocalNetworkDiscoveryManager::get_selectionMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "get_selectionMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapLevelSelectionMask, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::set_selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "set_selectionMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::LocalNetworkDiscoveryManager::get_enableBroadcasting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "get_enableBroadcasting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::set_enableBroadcasting(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "set_enableBroadcasting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::Init(int32_t discoveryPort, ::StringW initUserId, ::StringW initUserName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, discoveryPort, initUserId, initUserName);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::SendJoinRequest(System::Net::IPAddress ip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "SendJoinRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ip);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::SendJoinResponse(System::Net::IPAddress ip, ::StringW secret, int32_t multiplayerPort, bool blocked, bool isPartyOwner, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "SendJoinResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayServerConfiguration>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ip, secret, multiplayerPort, blocked, isPartyOwner, selectionMask, configuration);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::SendInviteRequest(System::Net::IPAddress ip, ::StringW secret, int32_t multiplayerPort, bool isPartyOwner, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "SendInviteRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayServerConfiguration>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ip, secret, multiplayerPort, isPartyOwner, selectionMask, configuration);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::SendInviteResponse(System::Net::IPAddress ip, bool accepted, bool blocked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "SendInviteResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ip, accepted, blocked);
}
template<typename T>
 LiteNetLib::Utils::NetDataWriter GlobalNamespace::LocalNetworkDiscoveryManager::WritePacket(T packet)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                        "WritePacket",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<LiteNetLib::Utils::NetDataWriter, false>(const_cast<void*>(instance), ___internal_method, packet);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected(System::Net::IPEndPoint remoteEndPoint, LiteNetLib::NetPacketReader reader, LiteNetLib::UnconnectedMessageType messageType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacketReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::UnconnectedMessageType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, remoteEndPoint, reader, messageType);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnConnectionRequest(LiteNetLib::ConnectionRequest request)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "LiteNetLib.INetEventListener.OnConnectionRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::ConnectionRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, request);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnNetworkError(System::Net::IPEndPoint endPoint, System::Net::Sockets::SocketError socketErrorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "LiteNetLib.INetEventListener.OnNetworkError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketError>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, endPoint, socketErrorCode);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnNetworkLatencyUpdate(LiteNetLib::NetPeer peer, int32_t latency)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "LiteNetLib.INetEventListener.OnNetworkLatencyUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peer, latency);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnPeerConnected(LiteNetLib::NetPeer peer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "LiteNetLib.INetEventListener.OnPeerConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peer);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnPeerDisconnected(LiteNetLib::NetPeer peer, LiteNetLib::DisconnectInfo disconnectInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "LiteNetLib.INetEventListener.OnPeerDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DisconnectInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peer, disconnectInfo);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnNetworkReceive(LiteNetLib::NetPeer peer, LiteNetLib::NetPacketReader reader, LiteNetLib::DeliveryMethod deliveryMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "LiteNetLib.INetEventListener.OnNetworkReceive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacketReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peer, reader, deliveryMethod);
}
// Ctor Parameters []
 GlobalNamespace::LocalNetworkDiscoveryManager::LocalNetworkDiscoveryManager()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<LocalNetworkDiscoveryManager>())) {}
 void GlobalNamespace::LocalNetworkDiscoveryManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::_Init_b__55_0(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket packet, System::Net::IPEndPoint endPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "<Init>b__55_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet, endPoint);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::_Init_b__55_1(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket packet, System::Net::IPEndPoint endPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "<Init>b__55_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet, endPoint);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::_Init_b__55_2(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket packet, System::Net::IPEndPoint endPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "<Init>b__55_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet, endPoint);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::_Init_b__55_3(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket packet, System::Net::IPEndPoint endPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "<Init>b__55_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet, endPoint);
}
 void GlobalNamespace::LocalNetworkDiscoveryManager::_Init_b__55_4(GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket packet, System::Net::IPEndPoint endPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalNetworkDiscoveryManager>::get(),
                            "<Init>b__55_4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet, endPoint);
}
