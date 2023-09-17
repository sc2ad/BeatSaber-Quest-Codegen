#pragma once
#include "GlobalNamespace/zzzz__LiteNetLibConnectionManager_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__LiteNetLibConnectionManager_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "LiteNetLib/zzzz__NetPacketReader_def.hpp"
#include "LiteNetLib/zzzz__DisconnectReason_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionRequestHandler_def.hpp"
#include "GlobalNamespace/zzzz__NetworkStatisticsState_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionInitParams_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "GlobalNamespace/zzzz__IConnection_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "LiteNetLib/zzzz__DisconnectInfo_def.hpp"
#include "LiteNetLib/zzzz__DeliveryMethod_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionManager_def.hpp"
#include "LiteNetLib/zzzz__ConnectionRequest_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__PacketEncryptionLayer_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "LiteNetLib/zzzz__UnconnectedMessageType_def.hpp"
#include "LiteNetLib/zzzz__INetEventListener_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "LiteNetLib/zzzz__NetManager_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "BGNet/Core/zzzz__DeliveryMethod_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetworkMode::____GlobalNamespace__LiteNetLibConnectionManager__NetworkMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetworkMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetworkMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetworkMode  ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetworkMode::None{0};
constexpr ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetworkMode  ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetworkMode::Client{1};
constexpr ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetworkMode  ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetworkMode::Server{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectionState::____GlobalNamespace__LiteNetLibConnectionManager__ConnectionState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectionState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectionState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectionState  ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectionState::Unconnected{0};
constexpr ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectionState  ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectionState::Connecting{1};
constexpr ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectionState  ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectionState::Connected{2};
constexpr ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectionState  ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectionState::Disconnecting{3};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::*)()>(&::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdb56b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LiteNetLibConnectionManager>
constexpr  ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::operator ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LiteNetLibConnectionManager>() const noexcept {
return ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LiteNetLibConnectionManager>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__set_connectionRequestHandler(::GlobalNamespace::IConnectionRequestHandler value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IConnectionRequestHandler, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IConnectionRequestHandler>(value));
}
constexpr ::GlobalNamespace::IConnectionRequestHandler ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__get_connectionRequestHandler() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectionRequestHandler, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__set_port(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__get_port() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__set_filterUnencryptedTraffic(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__get_filterUnencryptedTraffic() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__set_enableUnconnectedMessages(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1d>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__get_enableUnconnectedMessages() const {
return ::cordl_internals::getInstanceField<bool, 0x1d>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__set_enableBackgroundSentry(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1e>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__get_enableBackgroundSentry() const {
return ::cordl_internals::getInstanceField<bool, 0x1e>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__set_enableStatistics(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1f>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__get_enableStatistics() const {
return ::cordl_internals::getInstanceField<bool, 0x1f>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__set_disconnectTimeoutMs(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::__get_disconnectTimeoutMs() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::____GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase>())) {}
 void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__StartServerParams._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__StartServerParams::*)()>(&::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__StartServerParams::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdb56c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__StartServerParams>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__StartServerParams::__set_userId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__StartServerParams::__get_userId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__StartServerParams::__set_userName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__StartServerParams::__get_userName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__StartServerParams::____GlobalNamespace__LiteNetLibConnectionManager__StartServerParams()  : ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__LiteNetLibConnectionManager__StartServerParams>())) {}
 void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__StartServerParams::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__StartServerParams>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__StartClientParams._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__StartClientParams::*)()>(&::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__StartClientParams::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdb56d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__StartClientParams>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__StartClientParams::____GlobalNamespace__LiteNetLibConnectionManager__StartClientParams()  : ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__LiteNetLibConnectionManager__StartClientParams>())) {}
 void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__StartClientParams::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__StartClientParams>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams::*)()>(&::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xdb56e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams::__set_userId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams::__get_userId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams::__set_userName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams::__get_userName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams::__set_endPoint(::System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<::System::Net::IPEndPoint, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::IPEndPoint>(value));
}
constexpr ::System::Net::IPEndPoint ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams::__get_endPoint() const {
return ::cordl_internals::getInstanceField<::System::Net::IPEndPoint, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams::__set_serverUserId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams::__get_serverUserId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams::__set_serverUserName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams::__get_serverUserName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams::__set_serverIsConnectionOwner(bool value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams::__get_serverIsConnectionOwner() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams::____GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams()  : ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams>())) {}
 void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest.get_userId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest::*)()>(&::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest::get_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb5700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest.get_userName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest::*)()>(&::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb5708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest.get_isConnectionOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest::*)()>(&::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest::get_isConnectionOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb5710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest>::get(),
                            "get_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest.get_endPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPEndPoint (::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest::*)()>(&::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest::get_endPoint)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdb5718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest>::get(),
                            "get_endPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest::*)(::LiteNetLib::ConnectionRequest, ::StringW, ::StringW, bool)>(&::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xdb5734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest.Accept
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::NetPeer (::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest::*)()>(&::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest::Accept)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdb5778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest>::get(),
                            "Accept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest::__set__userId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest::__get__userId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest::__set__userName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest::__get__userName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest::__set__isConnectionOwner(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest::__get__isConnectionOwner() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest::__set__request(::LiteNetLib::ConnectionRequest value)  {
::cordl_internals::setInstanceField<::LiteNetLib::ConnectionRequest, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::LiteNetLib::ConnectionRequest>(value));
}
constexpr ::LiteNetLib::ConnectionRequest ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest::__get__request() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::ConnectionRequest, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest::get_userId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest::get_userName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest::get_isConnectionOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest>::get(),
                            "get_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Net::IPEndPoint ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest::get_endPoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest>::get(),
                            "get_endPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "request", ty: "::LiteNetLib::ConnectionRequest", modifiers: "", def_value: None }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "userName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isConnectionOwner", ty: "bool", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest(::LiteNetLib::ConnectionRequest request, ::StringW userId, ::StringW userName, bool isConnectionOwner)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest>(request, userId, userName, isConnectionOwner))) {}
 void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest::_ctor(::LiteNetLib::ConnectionRequest request, ::StringW userId, ::StringW userName, bool isConnectionOwner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, request, userId, userName, isConnectionOwner);
}
 ::LiteNetLib::NetPeer ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest::Accept()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest>::get(),
                            "Accept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPeer, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection.get_userId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::*)()>(&::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::get_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb5794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection.get_userName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::*)()>(&::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb579c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection.get_isConnectionOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::*)()>(&::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::get_isConnectionOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb57a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>::get(),
                            "get_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::*)(::LiteNetLib::NetPeer, ::StringW, ::StringW, bool)>(&::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xdb57ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection.Send
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::*)(::LiteNetLib::Utils::NetDataWriter, ::BGNet::Core::DeliveryMethod)>(&::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::Send)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xdb57f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::*)(::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection)>(&::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::Equals)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xdb5878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::*)(::bs_hook::Il2CppWrapperType)>(&::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::Equals)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xdb58a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::*)()>(&::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xdb59bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection.Disconnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::*)()>(&::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::Disconnect)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdb59dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IConnection
constexpr  ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::operator ::GlobalNamespace::IConnection() const noexcept {
return ::GlobalNamespace::IConnection(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IEquatable_1<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>
constexpr  ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::operator ::System::IEquatable_1<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>() const noexcept {
return ::System::IEquatable_1<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::__set__userId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::__get__userId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::__set__userName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::__get__userName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::__set__isConnectionOwner(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::__get__isConnectionOwner() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::__set_netPeer(::LiteNetLib::NetPeer value)  {
::cordl_internals::setInstanceField<::LiteNetLib::NetPeer, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::LiteNetLib::NetPeer>(value));
}
constexpr ::LiteNetLib::NetPeer ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::__get_netPeer() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::NetPeer, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::get_userId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::get_userName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::get_isConnectionOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>::get(),
                            "get_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "netPeer", ty: "::LiteNetLib::NetPeer", modifiers: "", def_value: None }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "userName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isConnectionOwner", ty: "bool", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection(::LiteNetLib::NetPeer netPeer, ::StringW userId, ::StringW userName, bool isConnectionOwner)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>(netPeer, userId, userName, isConnectionOwner))) {}
 void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::_ctor(::LiteNetLib::NetPeer netPeer, ::StringW userId, ::StringW userName, bool isConnectionOwner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, netPeer, userId, userName, isConnectionOwner);
}
 void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::Send(::LiteNetLib::Utils::NetDataWriter writer, ::BGNet::Core::DeliveryMethod deliveryMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, deliveryMethod);
}
 bool ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::Equals(::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
 bool ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection::Disconnect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager____c::*)()>(&::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb5a5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager____c._get_hasConnectionOwner_b__70_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager____c::*)(::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection)>(&::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager____c::_get_hasConnectionOwner_b__70_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xdb5a64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager____c>::get(),
                            "<get_hasConnectionOwner>b__70_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager____c::__set___9(::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager____c value)  {
::cordl_internals::setStaticField<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager____c>::get>(std::forward<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager____c>(value));
}
 ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager____c ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager____c::__get___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager____c>::get>();
}
 void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager____c::__set___9__70_0(::System::Predicate_1<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection> value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>, "<>9__70_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager____c>::get>(std::forward<::System::Predicate_1<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>>(value));
}
 ::System::Predicate_1<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection> ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager____c::__get___9__70_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>, "<>9__70_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager____c>::get>();
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager____c::____GlobalNamespace__LiteNetLibConnectionManager____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__LiteNetLibConnectionManager____c>())) {}
 void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager____c::_get_hasConnectionOwner_b__70_0(::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager____c>::get(),
                            "<get_hasConnectionOwner>b__70_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, c);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::*)()>(&::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::MoveNext)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0xdb5a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdb5e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LiteNetLibConnectionManager", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::LiteNetLibConnectionManager __4__this, ::System::Threading::CancellationToken _cancellationToken_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_cancellationToken_5__2 = _cancellationToken_5__2;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::__set___4__this(::GlobalNamespace::LiteNetLibConnectionManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LiteNetLibConnectionManager, 0x20>(this->__instance, std::forward<::GlobalNamespace::LiteNetLibConnectionManager>(value));
}
constexpr ::GlobalNamespace::LiteNetLibConnectionManager ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LiteNetLibConnectionManager, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::__set__cancellationToken_5__2(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::__get__cancellationToken_5__2() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::*)()>(&::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::MoveNext)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0xdb5e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdb61cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LiteNetLibConnectionManager", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::LiteNetLibConnectionManager __4__this, ::System::Threading::CancellationToken _cancellationToken_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_cancellationToken_5__2 = _cancellationToken_5__2;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::__set___4__this(::GlobalNamespace::LiteNetLibConnectionManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LiteNetLibConnectionManager, 0x20>(this->__instance, std::forward<::GlobalNamespace::LiteNetLibConnectionManager>(value));
}
constexpr ::GlobalNamespace::LiteNetLibConnectionManager ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LiteNetLibConnectionManager, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::__set__cancellationToken_5__2(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::__get__cancellationToken_5__2() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.add_onInitializedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action)>(&::GlobalNamespace::LiteNetLibConnectionManager::add_onInitializedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xdb26dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "add_onInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.remove_onInitializedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action)>(&::GlobalNamespace::LiteNetLibConnectionManager::remove_onInitializedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xdb2778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "remove_onInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.add_onConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action)>(&::GlobalNamespace::LiteNetLibConnectionManager::add_onConnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xdb2814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "add_onConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.remove_onConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action)>(&::GlobalNamespace::LiteNetLibConnectionManager::remove_onConnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xdb28b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "remove_onConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.add_onDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_1<::GlobalNamespace::DisconnectedReason>)>(&::GlobalNamespace::LiteNetLibConnectionManager::add_onDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdb294c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "add_onDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.remove_onDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_1<::GlobalNamespace::DisconnectedReason>)>(&::GlobalNamespace::LiteNetLibConnectionManager::remove_onDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdb29fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "remove_onDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.add_onConnectionFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>)>(&::GlobalNamespace::LiteNetLibConnectionManager::add_onConnectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdb2aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "add_onConnectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.remove_onConnectionFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>)>(&::GlobalNamespace::LiteNetLibConnectionManager::remove_onConnectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdb2b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "remove_onConnectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.add_onConnectionConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_1<::GlobalNamespace::IConnection>)>(&::GlobalNamespace::LiteNetLibConnectionManager::add_onConnectionConnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdb2c0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "add_onConnectionConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnection>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.remove_onConnectionConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_1<::GlobalNamespace::IConnection>)>(&::GlobalNamespace::LiteNetLibConnectionManager::remove_onConnectionConnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdb2cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "remove_onConnectionConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnection>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.add_onConnectionDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_2<::GlobalNamespace::IConnection,::GlobalNamespace::DisconnectedReason>)>(&::GlobalNamespace::LiteNetLibConnectionManager::add_onConnectionDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdb2d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "add_onConnectionDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IConnection,::GlobalNamespace::DisconnectedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.remove_onConnectionDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_2<::GlobalNamespace::IConnection,::GlobalNamespace::DisconnectedReason>)>(&::GlobalNamespace::LiteNetLibConnectionManager::remove_onConnectionDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdb2e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "remove_onConnectionDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IConnection,::GlobalNamespace::DisconnectedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.add_onReceivedDataEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_3<::GlobalNamespace::IConnection,::LiteNetLib::Utils::NetDataReader,::BGNet::Core::DeliveryMethod>)>(&::GlobalNamespace::LiteNetLibConnectionManager::add_onReceivedDataEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdb2ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "add_onReceivedDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::GlobalNamespace::IConnection,::LiteNetLib::Utils::NetDataReader,::BGNet::Core::DeliveryMethod>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.remove_onReceivedDataEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_3<::GlobalNamespace::IConnection,::LiteNetLib::Utils::NetDataReader,::BGNet::Core::DeliveryMethod>)>(&::GlobalNamespace::LiteNetLibConnectionManager::remove_onReceivedDataEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdb2f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "remove_onReceivedDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::GlobalNamespace::IConnection,::LiteNetLib::Utils::NetDataReader,::BGNet::Core::DeliveryMethod>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.add_onReceiveUnconnectedDataEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_2<::System::Net::IPEndPoint,::LiteNetLib::Utils::NetDataReader>)>(&::GlobalNamespace::LiteNetLibConnectionManager::add_onReceiveUnconnectedDataEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdb302c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "add_onReceiveUnconnectedDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::System::Net::IPEndPoint,::LiteNetLib::Utils::NetDataReader>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.remove_onReceiveUnconnectedDataEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Action_2<::System::Net::IPEndPoint,::LiteNetLib::Utils::NetDataReader>)>(&::GlobalNamespace::LiteNetLibConnectionManager::remove_onReceiveUnconnectedDataEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdb30dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "remove_onReceiveUnconnectedDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::System::Net::IPEndPoint,::LiteNetLib::Utils::NetDataReader>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.add_onStatisticsUpdatedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::GlobalNamespace::____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate)>(&::GlobalNamespace::LiteNetLibConnectionManager::add_onStatisticsUpdatedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xdb318c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "add_onStatisticsUpdatedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.remove_onStatisticsUpdatedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::GlobalNamespace::____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate)>(&::GlobalNamespace::LiteNetLibConnectionManager::remove_onStatisticsUpdatedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xdb3228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "remove_onStatisticsUpdatedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_userId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb32c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_userName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb32cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_isConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_isConnected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdb32d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_isConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_isConnecting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_isConnecting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdb32e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_isConnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_isDisconnecting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_isDisconnecting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdb32f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_isDisconnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_isConnectionOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_isConnectionOwner)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdb3304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_hasConnectionOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_hasConnectionOwner)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xdb3314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_hasConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_isServer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_isServer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdb3420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_isServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_isClient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_isClient)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdb3430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_isClient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_isDisposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_isDisposed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdb3440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_isDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_connectionCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_connectionCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xdb3450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_connectionCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_connectionRequestHandler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnectionRequestHandler (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_connectionRequestHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb3498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_connectionRequestHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_port
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_port)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdb34a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_port",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_unconnectedPacketHeader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_unconnectedPacketHeader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb34bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_unconnectedPacketHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.get_encryptionLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketEncryptionLayer (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::get_encryptionLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb34c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_encryptionLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.NoDomainReloadInit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xdb34cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "NoDomainReloadInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xdb35dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::BGNet::Core::ITimeProvider, ::BGNet::Core::ITaskUtility)>(&::GlobalNamespace::LiteNetLibConnectionManager::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xdb3688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITimeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.SendToAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::Utils::NetDataWriter, ::BGNet::Core::DeliveryMethod)>(&::GlobalNamespace::LiteNetLibConnectionManager::SendToAll)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xdb3888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "SendToAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.SendToAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::Utils::NetDataWriter, ::BGNet::Core::DeliveryMethod, ::GlobalNamespace::IConnection)>(&::GlobalNamespace::LiteNetLibConnectionManager::SendToAll)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xdb392c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "SendToAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.SendUnconnectedMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Net::IPEndPoint, ::LiteNetLib::Utils::NetDataWriter)>(&::GlobalNamespace::LiteNetLibConnectionManager::SendUnconnectedMessage)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xdb3a14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "SendUnconnectedMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.PollUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::PollUpdate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xdb3a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.ConnectToEndPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::StringW, ::StringW, ::System::Net::IPEndPoint, ::StringW, ::StringW, bool)>(&::GlobalNamespace::LiteNetLibConnectionManager::ConnectToEndPoint)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xdb3de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "ConnectToEndPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::Dispose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xdb40f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.DisposeAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::DisposeAsync)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xdb415c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "DisposeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.DisposeInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::DisposeInternal)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xdb411c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "DisposeInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.Disconnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::LiteNetLibConnectionManager::Disconnect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb42d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.DisconnectInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::GlobalNamespace::DisconnectedReason, ::GlobalNamespace::ConnectionFailedReason)>(&::GlobalNamespace::LiteNetLibConnectionManager::DisconnectInternal)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xdb42e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "DisconnectInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.TryStartNetManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)(int32_t, bool)>(&::GlobalNamespace::LiteNetLibConnectionManager::TryStartNetManager)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xdb43a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "TryStartNetManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.StartBackgroundSentry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::StartBackgroundSentry)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xdb443c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "StartBackgroundSentry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.CheckSentryState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::CheckSentryState)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xdb3adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "CheckSentryState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.UpdateStatistics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::UpdateStatistics)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0xdb3b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "UpdateStatistics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.GetConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnection (::GlobalNamespace::LiteNetLibConnectionManager::*)(int32_t)>(&::GlobalNamespace::LiteNetLibConnectionManager::GetConnection)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xdb469c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "GetConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.IsConnectedToUser
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)(::StringW)>(&::GlobalNamespace::LiteNetLibConnectionManager::IsConnectedToUser)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdb46f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "IsConnectedToUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.HasConnectionToEndPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Net::IPEndPoint)>(&::GlobalNamespace::LiteNetLibConnectionManager::HasConnectionToEndPoint)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xdb47a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "HasConnectionToEndPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.HasPendingConnectionToEndPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Net::IPEndPoint)>(&::GlobalNamespace::LiteNetLibConnectionManager::HasPendingConnectionToEndPoint)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xdb485c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "HasPendingConnectionToEndPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.LiteNetLib_INetEventListener_OnPeerConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::NetPeer)>(&::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnPeerConnected)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0xdb4914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "LiteNetLib.INetEventListener.OnPeerConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.LiteNetLib_INetEventListener_OnNetworkError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Net::IPEndPoint, ::System::Net::Sockets::SocketError)>(&::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnNetworkError)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdb4b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "LiteNetLib.INetEventListener.OnNetworkError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.LiteNetLib_INetEventListener_OnNetworkLatencyUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::NetPeer, int32_t)>(&::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnNetworkLatencyUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xdb4b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "LiteNetLib.INetEventListener.OnNetworkLatencyUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.LiteNetLib_INetEventListener_OnConnectionRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::ConnectionRequest)>(&::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnConnectionRequest)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xdb4b68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "LiteNetLib.INetEventListener.OnConnectionRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequest>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.LiteNetLib_INetEventListener_OnPeerDisconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::NetPeer, ::LiteNetLib::DisconnectInfo)>(&::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnPeerDisconnected)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xdb4dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "LiteNetLib.INetEventListener.OnPeerDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.LiteNetLib_INetEventListener_OnNetworkReceive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::NetPeer, ::LiteNetLib::NetPacketReader, ::LiteNetLib::DeliveryMethod)>(&::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnNetworkReceive)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xdb5014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "LiteNetLib.INetEventListener.OnNetworkReceive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacketReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::System::Net::IPEndPoint, ::LiteNetLib::NetPacketReader, ::LiteNetLib::UnconnectedMessageType)>(&::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xdb51b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacketReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::UnconnectedMessageType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.GetConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::NetPeer)>(&::GlobalNamespace::LiteNetLibConnectionManager::GetConnection)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xdb50dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "GetConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.AcceptAllPendingRequests
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::AcceptAllPendingRequests)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xdb51ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "AcceptAllPendingRequests",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.TryAccept
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::ConnectionRequest, ::StringW, ::StringW, bool)>(&::GlobalNamespace::LiteNetLibConnectionManager::TryAccept)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xdb4cc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "TryAccept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.CreatePendingConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::NetPeer, ::StringW, ::StringW, bool)>(&::GlobalNamespace::LiteNetLibConnectionManager::CreatePendingConnection)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xdb3fc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "CreatePendingConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.RemoveConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::NetPeer, ::LiteNetLib::DisconnectReason)>(&::GlobalNamespace::LiteNetLibConnectionManager::RemoveConnection)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xdb4e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "RemoveConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.TryDisconnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::DisconnectReason)>(&::GlobalNamespace::LiteNetLibConnectionManager::TryDisconnect)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xdb4d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "TryDisconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.ToDisconnectedReason
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DisconnectedReason (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::DisconnectReason)>(&::GlobalNamespace::LiteNetLibConnectionManager::ToDisconnectedReason)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xdb52d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "ToDisconnectedReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.ToConnectionFailedReason
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectionFailedReason (::GlobalNamespace::LiteNetLibConnectionManager::*)(::LiteNetLib::DisconnectReason)>(&::GlobalNamespace::LiteNetLibConnectionManager::ToConnectionFailedReason)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xdb530c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "ToConnectionFailedReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.GetConnectionMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::Utils::NetDataWriter (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::GetConnectionMessage)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xdb3ed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "GetConnectionMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.BackgroundDisconnectSentry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::BackgroundDisconnectSentry)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xdb5320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "BackgroundDisconnectSentry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.BackgroundShutdownSentry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::BackgroundShutdownSentry)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xdb53ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "BackgroundShutdownSentry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.ToLiteNetDeliveryMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::DeliveryMethod (*)(::BGNet::Core::DeliveryMethod)>(&::GlobalNamespace::LiteNetLibConnectionManager::ToLiteNetDeliveryMethod)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xdb3914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "ToLiteNetDeliveryMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.FromLiteNetDeliveryMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::DeliveryMethod (*)(::LiteNetLib::DeliveryMethod)>(&::GlobalNamespace::LiteNetLibConnectionManager::FromLiteNetDeliveryMethod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdb51a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "FromLiteNetDeliveryMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.Log
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::StringW)>(&::GlobalNamespace::LiteNetLibConnectionManager::Log)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xdb54b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.LogError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)(::StringW)>(&::GlobalNamespace::LiteNetLibConnectionManager::LogError)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xdb5544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.GetLogFormatConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection)>(&::GlobalNamespace::LiteNetLibConnectionManager::GetLogFormatConnection)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xdb55d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "GetLogFormatConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager.GetLogFormatUserInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW, ::System::Net::IPEndPoint)>(&::GlobalNamespace::LiteNetLibConnectionManager::GetLogFormatUserInfo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xdb5640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "GetLogFormatUserInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiteNetLibConnectionManager._DisposeAsync_b__98_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LiteNetLibConnectionManager::*)()>(&::GlobalNamespace::LiteNetLibConnectionManager::_DisposeAsync_b__98_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdb569c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "<DisposeAsync>b__98_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IConnectionManager
constexpr  ::GlobalNamespace::LiteNetLibConnectionManager::operator ::GlobalNamespace::IConnectionManager() const noexcept {
return ::GlobalNamespace::IConnectionManager(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::GlobalNamespace::IPollable
constexpr  ::GlobalNamespace::LiteNetLibConnectionManager::operator ::GlobalNamespace::IPollable() const noexcept {
return ::GlobalNamespace::IPollable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::LiteNetLibConnectionManager::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::LiteNetLib::INetEventListener
constexpr  ::GlobalNamespace::LiteNetLibConnectionManager::operator ::LiteNetLib::INetEventListener() const noexcept {
return ::LiteNetLib::INetEventListener(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set__unconnectedPacketHeader(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::GlobalNamespace::LiteNetLibConnectionManager::__get__unconnectedPacketHeader() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set__netManager(::LiteNetLib::NetManager value)  {
::cordl_internals::setInstanceField<::LiteNetLib::NetManager, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::LiteNetLib::NetManager>(value));
}
constexpr ::LiteNetLib::NetManager ::GlobalNamespace::LiteNetLibConnectionManager::__get__netManager() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::NetManager, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set__encryptionLayer(::GlobalNamespace::PacketEncryptionLayer value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PacketEncryptionLayer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::PacketEncryptionLayer>(value));
}
constexpr ::GlobalNamespace::PacketEncryptionLayer ::GlobalNamespace::LiteNetLibConnectionManager::__get__encryptionLayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PacketEncryptionLayer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set__taskUtility(::BGNet::Core::ITaskUtility value)  {
::cordl_internals::setInstanceField<::BGNet::Core::ITaskUtility, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::BGNet::Core::ITaskUtility>(value));
}
constexpr ::BGNet::Core::ITaskUtility ::GlobalNamespace::LiteNetLibConnectionManager::__get__taskUtility() const {
return ::cordl_internals::getInstanceField<::BGNet::Core::ITaskUtility, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set__connections(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection> ::GlobalNamespace::LiteNetLibConnectionManager::__get__connections() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set__pendingConnections(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection> ::GlobalNamespace::LiteNetLibConnectionManager::__get__pendingConnections() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set__pendingRequests(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest>>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest> ::GlobalNamespace::LiteNetLibConnectionManager::__get__pendingRequests() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set__pendingReconnections(::System::Collections::Generic::HashSet_1<::System::Net::IPEndPoint> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<::System::Net::IPEndPoint>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::HashSet_1<::System::Net::IPEndPoint>>(value));
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Net::IPEndPoint> ::GlobalNamespace::LiteNetLibConnectionManager::__get__pendingReconnections() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::System::Net::IPEndPoint>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set__userId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::LiteNetLibConnectionManager::__get__userId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set__userName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::LiteNetLibConnectionManager::__get__userName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set__connectionRequestHandler(::GlobalNamespace::IConnectionRequestHandler value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IConnectionRequestHandler, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IConnectionRequestHandler>(value));
}
constexpr ::GlobalNamespace::IConnectionRequestHandler ::GlobalNamespace::LiteNetLibConnectionManager::__get__connectionRequestHandler() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectionRequestHandler, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set__mode(::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetworkMode value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetworkMode, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetworkMode>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetworkMode ::GlobalNamespace::LiteNetLibConnectionManager::__get__mode() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetworkMode, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set__connectionState(::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectionState value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectionState, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectionState>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectionState ::GlobalNamespace::LiteNetLibConnectionManager::__get__connectionState() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__ConnectionState, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set__backgroundSentryDisconnectCts(::System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenSource, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::CancellationTokenSource>(value));
}
constexpr ::System::Threading::CancellationTokenSource ::GlobalNamespace::LiteNetLibConnectionManager::__get__backgroundSentryDisconnectCts() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set__backgroundSentryShutdownCts(::System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenSource, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::CancellationTokenSource>(value));
}
constexpr ::System::Threading::CancellationTokenSource ::GlobalNamespace::LiteNetLibConnectionManager::__get__backgroundSentryShutdownCts() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set__sentryDisconnected(bool value)  {
::cordl_internals::setInstanceField<bool, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::LiteNetLibConnectionManager::__get__sentryDisconnected() const {
return ::cordl_internals::getInstanceField<bool, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set__sentryShutdown(bool value)  {
::cordl_internals::setInstanceField<bool, 0x81>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::LiteNetLibConnectionManager::__get__sentryShutdown() const {
return ::cordl_internals::getInstanceField<bool, 0x81>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set__lastPollUpdateTime(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::GlobalNamespace::LiteNetLibConnectionManager::__get__lastPollUpdateTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set__lastStatisticsUpdateTime(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::GlobalNamespace::LiteNetLibConnectionManager::__get__lastStatisticsUpdateTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set_onInitializedEvent(::System::Action value)  {
::cordl_internals::setInstanceField<::System::Action, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action>(value));
}
constexpr ::System::Action ::GlobalNamespace::LiteNetLibConnectionManager::__get_onInitializedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set_onConnectedEvent(::System::Action value)  {
::cordl_internals::setInstanceField<::System::Action, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action>(value));
}
constexpr ::System::Action ::GlobalNamespace::LiteNetLibConnectionManager::__get_onConnectedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::DisconnectedReason>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::GlobalNamespace::DisconnectedReason>>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason> ::GlobalNamespace::LiteNetLibConnectionManager::__get_onDisconnectedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::DisconnectedReason>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason> ::GlobalNamespace::LiteNetLibConnectionManager::__get_onConnectionFailedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::IConnection>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::GlobalNamespace::IConnection>>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::IConnection> ::GlobalNamespace::LiteNetLibConnectionManager::__get_onConnectionConnectedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::IConnection>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection,::GlobalNamespace::DisconnectedReason> value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::IConnection,::GlobalNamespace::DisconnectedReason>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_2<::GlobalNamespace::IConnection,::GlobalNamespace::DisconnectedReason>>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::IConnection,::GlobalNamespace::DisconnectedReason> ::GlobalNamespace::LiteNetLibConnectionManager::__get_onConnectionDisconnectedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::IConnection,::GlobalNamespace::DisconnectedReason>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection,::LiteNetLib::Utils::NetDataReader,::BGNet::Core::DeliveryMethod> value)  {
::cordl_internals::setInstanceField<::System::Action_3<::GlobalNamespace::IConnection,::LiteNetLib::Utils::NetDataReader,::BGNet::Core::DeliveryMethod>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_3<::GlobalNamespace::IConnection,::LiteNetLib::Utils::NetDataReader,::BGNet::Core::DeliveryMethod>>(value));
}
constexpr ::System::Action_3<::GlobalNamespace::IConnection,::LiteNetLib::Utils::NetDataReader,::BGNet::Core::DeliveryMethod> ::GlobalNamespace::LiteNetLibConnectionManager::__get_onReceivedDataEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_3<::GlobalNamespace::IConnection,::LiteNetLib::Utils::NetDataReader,::BGNet::Core::DeliveryMethod>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set_onReceiveUnconnectedDataEvent(::System::Action_2<::System::Net::IPEndPoint,::LiteNetLib::Utils::NetDataReader> value)  {
::cordl_internals::setInstanceField<::System::Action_2<::System::Net::IPEndPoint,::LiteNetLib::Utils::NetDataReader>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_2<::System::Net::IPEndPoint,::LiteNetLib::Utils::NetDataReader>>(value));
}
constexpr ::System::Action_2<::System::Net::IPEndPoint,::LiteNetLib::Utils::NetDataReader> ::GlobalNamespace::LiteNetLibConnectionManager::__get_onReceiveUnconnectedDataEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::System::Net::IPEndPoint,::LiteNetLib::Utils::NetDataReader>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LiteNetLibConnectionManager::__set_onStatisticsUpdatedEvent(::GlobalNamespace::____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate ::GlobalNamespace::LiteNetLibConnectionManager::__get_onStatisticsUpdatedEvent() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::add_onInitializedEvent(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "add_onInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::remove_onInitializedEvent(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "remove_onInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::add_onConnectedEvent(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "add_onConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::remove_onConnectedEvent(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "remove_onConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::add_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "add_onDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::remove_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "remove_onDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::add_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "add_onConnectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::remove_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "remove_onConnectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::add_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "add_onConnectionConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnection>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::remove_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "remove_onConnectionConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnection>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::add_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection,::GlobalNamespace::DisconnectedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "add_onConnectionDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IConnection,::GlobalNamespace::DisconnectedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::remove_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection,::GlobalNamespace::DisconnectedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "remove_onConnectionDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IConnection,::GlobalNamespace::DisconnectedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::add_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection,::LiteNetLib::Utils::NetDataReader,::BGNet::Core::DeliveryMethod> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "add_onReceivedDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::GlobalNamespace::IConnection,::LiteNetLib::Utils::NetDataReader,::BGNet::Core::DeliveryMethod>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::remove_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection,::LiteNetLib::Utils::NetDataReader,::BGNet::Core::DeliveryMethod> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "remove_onReceivedDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::GlobalNamespace::IConnection,::LiteNetLib::Utils::NetDataReader,::BGNet::Core::DeliveryMethod>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::add_onReceiveUnconnectedDataEvent(::System::Action_2<::System::Net::IPEndPoint,::LiteNetLib::Utils::NetDataReader> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "add_onReceiveUnconnectedDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::System::Net::IPEndPoint,::LiteNetLib::Utils::NetDataReader>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::remove_onReceiveUnconnectedDataEvent(::System::Action_2<::System::Net::IPEndPoint,::LiteNetLib::Utils::NetDataReader> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "remove_onReceiveUnconnectedDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::System::Net::IPEndPoint,::LiteNetLib::Utils::NetDataReader>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::add_onStatisticsUpdatedEvent(::GlobalNamespace::____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "add_onStatisticsUpdatedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::remove_onStatisticsUpdatedEvent(::GlobalNamespace::____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "remove_onStatisticsUpdatedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW ::GlobalNamespace::LiteNetLibConnectionManager::get_userId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::GlobalNamespace::LiteNetLibConnectionManager::get_userName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::LiteNetLibConnectionManager::get_isConnected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_isConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::LiteNetLibConnectionManager::get_isConnecting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_isConnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::LiteNetLibConnectionManager::get_isDisconnecting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_isDisconnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::LiteNetLibConnectionManager::get_isConnectionOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::LiteNetLibConnectionManager::get_hasConnectionOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_hasConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::LiteNetLibConnectionManager::get_isServer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_isServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::LiteNetLibConnectionManager::get_isClient()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_isClient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::LiteNetLibConnectionManager::get_isDisposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_isDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::GlobalNamespace::LiteNetLibConnectionManager::get_connectionCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_connectionCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::IConnectionRequestHandler ::GlobalNamespace::LiteNetLibConnectionManager::get_connectionRequestHandler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_connectionRequestHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectionRequestHandler, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::GlobalNamespace::LiteNetLibConnectionManager::get_port()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_port",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> ::GlobalNamespace::LiteNetLibConnectionManager::get_unconnectedPacketHeader()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_unconnectedPacketHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::PacketEncryptionLayer ::GlobalNamespace::LiteNetLibConnectionManager::get_encryptionLayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "get_encryptionLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketEncryptionLayer, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::NoDomainReloadInit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "NoDomainReloadInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLibConnectionManager()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LiteNetLibConnectionManager>())) {}
 void ::GlobalNamespace::LiteNetLibConnectionManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "timeProvider", ty: "::BGNet::Core::ITimeProvider", modifiers: "", def_value: None }, CppParam { name: "taskUtility", ty: "::BGNet::Core::ITaskUtility", modifiers: "", def_value: None }]
 ::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLibConnectionManager(::BGNet::Core::ITimeProvider timeProvider, ::BGNet::Core::ITaskUtility taskUtility)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LiteNetLibConnectionManager>(timeProvider, taskUtility))) {}
 void ::GlobalNamespace::LiteNetLibConnectionManager::_ctor(::BGNet::Core::ITimeProvider timeProvider, ::BGNet::Core::ITaskUtility taskUtility)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITimeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, timeProvider, taskUtility);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::SendToAll(::LiteNetLib::Utils::NetDataWriter writer, ::BGNet::Core::DeliveryMethod deliveryMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "SendToAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, deliveryMethod);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::SendToAll(::LiteNetLib::Utils::NetDataWriter writer, ::BGNet::Core::DeliveryMethod deliveryMethod, ::GlobalNamespace::IConnection excludingConnection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "SendToAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, deliveryMethod, excludingConnection);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::SendUnconnectedMessage(::System::Net::IPEndPoint remoteEndPoint, ::LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "SendUnconnectedMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, remoteEndPoint, writer);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::PollUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T>
 bool ::GlobalNamespace::LiteNetLibConnectionManager::Init(::GlobalNamespace::IConnectionInitParams_1<T> initParams)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                        "Init",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectionInitParams_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, initParams);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::ConnectToEndPoint(::StringW userId, ::StringW userName, ::System::Net::IPEndPoint remoteEndPoint, ::StringW remoteUserId, ::StringW remoteUserName, bool remoteUserIsConnectionOwner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "ConnectToEndPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, userName, remoteEndPoint, remoteUserId, remoteUserName, remoteUserIsConnectionOwner);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task ::GlobalNamespace::LiteNetLibConnectionManager::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "DisposeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::DisposeInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "DisposeInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param disconnectedReason: ::GlobalNamespace::DisconnectedReason (default: 2)
 void ::GlobalNamespace::LiteNetLibConnectionManager::Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disconnectedReason);
}
/// @param disconnectedReason: ::GlobalNamespace::DisconnectedReason (default: 2)
/// @param connectionFailedReason: ::GlobalNamespace::ConnectionFailedReason (default: 1)
 void ::GlobalNamespace::LiteNetLibConnectionManager::DisconnectInternal(::GlobalNamespace::DisconnectedReason disconnectedReason, ::GlobalNamespace::ConnectionFailedReason connectionFailedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "DisconnectInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disconnectedReason, connectionFailedReason);
}
 bool ::GlobalNamespace::LiteNetLibConnectionManager::TryStartNetManager(int32_t port, bool enableBackgroundSentry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "TryStartNetManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, port, enableBackgroundSentry);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::StartBackgroundSentry()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "StartBackgroundSentry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::CheckSentryState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "CheckSentryState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::UpdateStatistics()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "UpdateStatistics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::IConnection ::GlobalNamespace::LiteNetLibConnectionManager::GetConnection(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "GetConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnection, false>(const_cast<void*>(instance), ___internal_method, index);
}
 bool ::GlobalNamespace::LiteNetLibConnectionManager::IsConnectedToUser(::StringW userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "IsConnectedToUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, userId);
}
 bool ::GlobalNamespace::LiteNetLibConnectionManager::HasConnectionToEndPoint(::System::Net::IPEndPoint endPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "HasConnectionToEndPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, endPoint);
}
 bool ::GlobalNamespace::LiteNetLibConnectionManager::HasPendingConnectionToEndPoint(::System::Net::IPEndPoint endPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "HasPendingConnectionToEndPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, endPoint);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnPeerConnected(::LiteNetLib::NetPeer peer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "LiteNetLib.INetEventListener.OnPeerConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peer);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnNetworkError(::System::Net::IPEndPoint endPoint, ::System::Net::Sockets::SocketError socketError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "LiteNetLib.INetEventListener.OnNetworkError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, endPoint, socketError);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnNetworkLatencyUpdate(::LiteNetLib::NetPeer peer, int32_t latencyMs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "LiteNetLib.INetEventListener.OnNetworkLatencyUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peer, latencyMs);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnConnectionRequest(::LiteNetLib::ConnectionRequest request)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "LiteNetLib.INetEventListener.OnConnectionRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, request);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnPeerDisconnected(::LiteNetLib::NetPeer peer, ::LiteNetLib::DisconnectInfo disconnectInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "LiteNetLib.INetEventListener.OnPeerDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peer, disconnectInfo);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnNetworkReceive(::LiteNetLib::NetPeer peer, ::LiteNetLib::NetPacketReader reader, ::LiteNetLib::DeliveryMethod deliveryMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "LiteNetLib.INetEventListener.OnNetworkReceive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacketReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peer, reader, deliveryMethod);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected(::System::Net::IPEndPoint remoteEndPoint, ::LiteNetLib::NetPacketReader reader, ::LiteNetLib::UnconnectedMessageType messageType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacketReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::UnconnectedMessageType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, remoteEndPoint, reader, messageType);
}
 ::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection ::GlobalNamespace::LiteNetLibConnectionManager::GetConnection(::LiteNetLib::NetPeer peer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "GetConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection, false>(const_cast<void*>(instance), ___internal_method, peer);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::AcceptAllPendingRequests()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "AcceptAllPendingRequests",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::TryAccept(::LiteNetLib::ConnectionRequest request, ::StringW userId, ::StringW userName, bool isConnectionOwner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "TryAccept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, request, userId, userName, isConnectionOwner);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::CreatePendingConnection(::LiteNetLib::NetPeer peer, ::StringW userId, ::StringW userName, bool isConnectionOwner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "CreatePendingConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peer, userId, userName, isConnectionOwner);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::RemoveConnection(::LiteNetLib::NetPeer netPeer, ::LiteNetLib::DisconnectReason reason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "RemoveConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, netPeer, reason);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::TryDisconnect(::LiteNetLib::DisconnectReason reason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "TryDisconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reason);
}
 ::GlobalNamespace::DisconnectedReason ::GlobalNamespace::LiteNetLibConnectionManager::ToDisconnectedReason(::LiteNetLib::DisconnectReason disconnectReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "ToDisconnectedReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DisconnectedReason, false>(const_cast<void*>(instance), ___internal_method, disconnectReason);
}
 ::GlobalNamespace::ConnectionFailedReason ::GlobalNamespace::LiteNetLibConnectionManager::ToConnectionFailedReason(::LiteNetLib::DisconnectReason disconnectReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "ToConnectionFailedReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectionFailedReason, false>(const_cast<void*>(instance), ___internal_method, disconnectReason);
}
 ::LiteNetLib::Utils::NetDataWriter ::GlobalNamespace::LiteNetLibConnectionManager::GetConnectionMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "GetConnectionMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NetDataWriter, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task ::GlobalNamespace::LiteNetLibConnectionManager::BackgroundDisconnectSentry()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "BackgroundDisconnectSentry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task ::GlobalNamespace::LiteNetLibConnectionManager::BackgroundShutdownSentry()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "BackgroundShutdownSentry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
 ::LiteNetLib::DeliveryMethod ::GlobalNamespace::LiteNetLibConnectionManager::ToLiteNetDeliveryMethod(::BGNet::Core::DeliveryMethod deliveryMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "ToLiteNetDeliveryMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::LiteNetLib::DeliveryMethod, false>(nullptr, ___internal_method, deliveryMethod);
}
 ::BGNet::Core::DeliveryMethod ::GlobalNamespace::LiteNetLibConnectionManager::FromLiteNetDeliveryMethod(::LiteNetLib::DeliveryMethod deliveryMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "FromLiteNetDeliveryMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::BGNet::Core::DeliveryMethod, false>(nullptr, ___internal_method, deliveryMethod);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::Log(::StringW msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::LogError(::StringW msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg);
}
 ::StringW ::GlobalNamespace::LiteNetLibConnectionManager::GetLogFormatConnection(::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection netPeerConnection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "GetLogFormatConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, netPeerConnection);
}
 ::StringW ::GlobalNamespace::LiteNetLibConnectionManager::GetLogFormatUserInfo(::StringW userName, ::StringW userId, ::System::Net::IPEndPoint ipEndPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "GetLogFormatUserInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, userName, userId, ipEndPoint);
}
 void ::GlobalNamespace::LiteNetLibConnectionManager::_DisposeAsync_b__98_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LiteNetLibConnectionManager>::get(),
                            "<DisposeAsync>b__98_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
