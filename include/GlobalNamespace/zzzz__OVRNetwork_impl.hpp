#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRNetwork_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__OVRNetwork_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/Net/Sockets/zzzz__TcpClient_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Net/Sockets/zzzz__TcpListener_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRNetwork__FrameHeader.ToBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (GlobalNamespace::GlobalNamespace__OVRNetwork__FrameHeader::*)()>(&GlobalNamespace::GlobalNamespace__OVRNetwork__FrameHeader::ToBytes)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2629150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__FrameHeader>::get(),
                            "ToBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRNetwork__FrameHeader.FromBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRNetwork__FrameHeader (*)(::ArrayW<uint8_t>)>(&GlobalNamespace::GlobalNamespace__OVRNetwork__FrameHeader::FromBytes)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2629270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__FrameHeader>::get(),
                            "FromBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "protocolIdentifier", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "payloadType", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "payloadLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRNetwork__FrameHeader::GlobalNamespace__OVRNetwork__FrameHeader(uint32_t protocolIdentifier, int32_t payloadType, int32_t payloadLength) noexcept : ::bs_hook::ValueTypeWrapper() {this->protocolIdentifier = protocolIdentifier;
this->payloadType = payloadType;
this->payloadLength = payloadLength;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRNetwork__FrameHeader::__set_protocolIdentifier(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t GlobalNamespace::GlobalNamespace__OVRNetwork__FrameHeader::__get_protocolIdentifier() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRNetwork__FrameHeader::__set_payloadType(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRNetwork__FrameHeader::__get_payloadType() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRNetwork__FrameHeader::__set_payloadLength(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRNetwork__FrameHeader::__get_payloadLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
 ::ArrayW<uint8_t> GlobalNamespace::GlobalNamespace__OVRNetwork__FrameHeader::ToBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__FrameHeader>::get(),
                            "ToBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__OVRNetwork__FrameHeader GlobalNamespace::GlobalNamespace__OVRNetwork__FrameHeader::FromBytes(::ArrayW<uint8_t> arr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__FrameHeader>::get(),
                            "FromBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRNetwork__FrameHeader, false>(nullptr, ___internal_method, arr);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer.StartListening
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::StartListening)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x26293a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer>::get(),
                            "StartListening",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer.StopListening
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::*)()>(&GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::StopListening)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x26298c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer>::get(),
                            "StopListening",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer.DoAcceptTcpClientCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::*)(System::IAsyncResult)>(&GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::DoAcceptTcpClientCallback)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x2629a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer>::get(),
                            "DoAcceptTcpClientCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer.HasConnectedClient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::*)()>(&GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::HasConnectedClient)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2629fd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer>::get(),
                            "HasConnectedClient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer.Broadcast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::*)(int32_t, ::ArrayW<uint8_t>)>(&GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::Broadcast)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x262a228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer>::get(),
                            "Broadcast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer.DoWriteDataCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::*)(System::IAsyncResult)>(&GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::DoWriteDataCallback)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x262a7d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer>::get(),
                            "DoWriteDataCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::*)()>(&GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x262a8cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::__set_tcpListener(System::Net::Sockets::TcpListener value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::TcpListener, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Sockets::TcpListener>(value));
}
constexpr System::Net::Sockets::TcpListener GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::__get_tcpListener() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::TcpListener, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::__set_clientsLock(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::__get_clientsLock() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::__set_clients(System::Collections::Generic::List_1<System::Net::Sockets::TcpClient> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<System::Net::Sockets::TcpClient>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<System::Net::Sockets::TcpClient>>(value));
}
constexpr System::Collections::Generic::List_1<System::Net::Sockets::TcpClient> GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::__get_clients() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<System::Net::Sockets::TcpClient>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::StartListening(int32_t listeningPort)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer>::get(),
                            "StartListening",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, listeningPort);
}
 void GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::StopListening()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer>::get(),
                            "StopListening",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::DoAcceptTcpClientCallback(System::IAsyncResult ar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer>::get(),
                            "DoAcceptTcpClientCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ar);
}
 bool GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::HasConnectedClient()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer>::get(),
                            "HasConnectedClient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::Broadcast(int32_t payloadType, ::ArrayW<uint8_t> payload)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer>::get(),
                            "Broadcast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, payloadType, payload);
}
 void GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::DoWriteDataCallback(System::IAsyncResult ar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer>::get(),
                            "DoWriteDataCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ar);
}
 GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::New_ctor()  {
GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState  GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState::Disconnected{0};
constexpr GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState  GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState::Connected{1};
constexpr GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState  GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState::Connecting{2};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient.get_connectionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState (GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::*)()>(&GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::get_connectionState)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x262a978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient>::get(),
                            "get_connectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient.get_Connected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::*)()>(&GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::get_Connected)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x262a9a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient>::get(),
                            "get_Connected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient.Connect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::Connect)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x262a9b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient.ConnectCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::*)(System::IAsyncResult)>(&GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::ConnectCallback)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x262ab30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient>::get(),
                            "ConnectCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient.Disconnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::*)()>(&GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::Disconnect)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x262ae30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient.Tick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::*)()>(&GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::Tick)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x262b068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient.OnReadDataCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::*)(System::IAsyncResult)>(&GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::OnReadDataCallback)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x262b280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient>::get(),
                            "OnReadDataCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::*)()>(&GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x262b75c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::__set_connectionStateChangedCallback(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::__get_connectionStateChangedCallback() const {
return ::cordl_internals::getInstanceField<System::Action, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::__set_payloadReceivedCallback(System::Action_4<int32_t,::ArrayW<uint8_t>,int32_t,int32_t> value)  {
::cordl_internals::setInstanceField<System::Action_4<int32_t,::ArrayW<uint8_t>,int32_t,int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_4<int32_t,::ArrayW<uint8_t>,int32_t,int32_t>>(value));
}
constexpr System::Action_4<int32_t,::ArrayW<uint8_t>,int32_t,int32_t> GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::__get_payloadReceivedCallback() const {
return ::cordl_internals::getInstanceField<System::Action_4<int32_t,::ArrayW<uint8_t>,int32_t,int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::__set_tcpClient(System::Net::Sockets::TcpClient value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::TcpClient, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Sockets::TcpClient>(value));
}
constexpr System::Net::Sockets::TcpClient GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::__get_tcpClient() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::TcpClient, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::__set_receivedBuffers(::ArrayW<::ArrayW<uint8_t>> value)  {
::cordl_internals::setInstanceField<::ArrayW<::ArrayW<uint8_t>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::ArrayW<uint8_t>>>(value));
}
constexpr ::ArrayW<::ArrayW<uint8_t>> GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::__get_receivedBuffers() const {
return ::cordl_internals::getInstanceField<::ArrayW<::ArrayW<uint8_t>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::__set_receivedBufferIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::__get_receivedBufferIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::__set_receivedBufferDataSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::__get_receivedBufferDataSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::__set_readyReceiveDataEvent(System::Threading::ManualResetEvent value)  {
::cordl_internals::setInstanceField<System::Threading::ManualResetEvent, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::ManualResetEvent>(value));
}
constexpr System::Threading::ManualResetEvent GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::__get_readyReceiveDataEvent() const {
return ::cordl_internals::getInstanceField<System::Threading::ManualResetEvent, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::get_connectionState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient>::get(),
                            "get_connectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::get_Connected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient>::get(),
                            "get_Connected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::Connect(int32_t listeningPort)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, listeningPort);
}
 void GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::ConnectCallback(System::IAsyncResult ar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient>::get(),
                            "ConnectCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ar);
}
 void GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::Disconnect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::OnReadDataCallback(System::IAsyncResult ar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient>::get(),
                            "OnReadDataCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ar);
}
 GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::New_ctor()  {
GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::OVRNetwork._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRNetwork::*)()>(&GlobalNamespace::OVRNetwork::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2629148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRNetwork>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 GlobalNamespace::OVRNetwork GlobalNamespace::OVRNetwork::New_ctor()  {
GlobalNamespace::OVRNetwork o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::OVRNetwork>())};
return o;
}
 void GlobalNamespace::OVRNetwork::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRNetwork>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
