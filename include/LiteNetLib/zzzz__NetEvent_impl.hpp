#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "LiteNetLib/zzzz__NetEvent_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "LiteNetLib/zzzz__DisconnectReason_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "LiteNetLib/zzzz__DeliveryMethod_def.hpp"
#include "LiteNetLib/zzzz__NetEvent_def.hpp"
#include "LiteNetLib/zzzz__ConnectionRequest_def.hpp"
#include "LiteNetLib/zzzz__NetManager_def.hpp"
#include "LiteNetLib/zzzz__NetPacketReader_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr LiteNetLib::LiteNetLib__NetEvent__EType::LiteNetLib__NetEvent__EType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void LiteNetLib::LiteNetLib__NetEvent__EType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::LiteNetLib__NetEvent__EType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr LiteNetLib::LiteNetLib__NetEvent__EType  LiteNetLib::LiteNetLib__NetEvent__EType::Connect{0};
constexpr LiteNetLib::LiteNetLib__NetEvent__EType  LiteNetLib::LiteNetLib__NetEvent__EType::Disconnect{1};
constexpr LiteNetLib::LiteNetLib__NetEvent__EType  LiteNetLib::LiteNetLib__NetEvent__EType::Receive{2};
constexpr LiteNetLib::LiteNetLib__NetEvent__EType  LiteNetLib::LiteNetLib__NetEvent__EType::ReceiveUnconnected{3};
constexpr LiteNetLib::LiteNetLib__NetEvent__EType  LiteNetLib::LiteNetLib__NetEvent__EType::Error{4};
constexpr LiteNetLib::LiteNetLib__NetEvent__EType  LiteNetLib::LiteNetLib__NetEvent__EType::ConnectionLatencyUpdated{5};
constexpr LiteNetLib::LiteNetLib__NetEvent__EType  LiteNetLib::LiteNetLib__NetEvent__EType::Broadcast{6};
constexpr LiteNetLib::LiteNetLib__NetEvent__EType  LiteNetLib::LiteNetLib__NetEvent__EType::ConnectionRequest{7};
constexpr LiteNetLib::LiteNetLib__NetEvent__EType  LiteNetLib::LiteNetLib__NetEvent__EType::MessageDelivered{8};
//  Writing Method size for method: LiteNetLib::NetEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetEvent::*)(LiteNetLib::NetManager)>(&LiteNetLib::NetEvent::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2088fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetManager>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void LiteNetLib::NetEvent::__set_Type(LiteNetLib::LiteNetLib__NetEvent__EType value)  {
::cordl_internals::setInstanceField<LiteNetLib::LiteNetLib__NetEvent__EType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::LiteNetLib__NetEvent__EType>(value));
}
constexpr LiteNetLib::LiteNetLib__NetEvent__EType LiteNetLib::NetEvent::__get_Type() const {
return ::cordl_internals::getInstanceField<LiteNetLib::LiteNetLib__NetEvent__EType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetEvent::__set_Peer(LiteNetLib::NetPeer value)  {
::cordl_internals::setInstanceField<LiteNetLib::NetPeer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::NetPeer>(value));
}
constexpr LiteNetLib::NetPeer LiteNetLib::NetEvent::__get_Peer() const {
return ::cordl_internals::getInstanceField<LiteNetLib::NetPeer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetEvent::__set_RemoteEndPoint(System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<System::Net::IPEndPoint, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::IPEndPoint>(value));
}
constexpr System::Net::IPEndPoint LiteNetLib::NetEvent::__get_RemoteEndPoint() const {
return ::cordl_internals::getInstanceField<System::Net::IPEndPoint, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetEvent::__set_UserData(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType LiteNetLib::NetEvent::__get_UserData() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetEvent::__set_Latency(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::NetEvent::__get_Latency() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetEvent::__set_ErrorCode(System::Net::Sockets::SocketError value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::SocketError, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Sockets::SocketError>(value));
}
constexpr System::Net::Sockets::SocketError LiteNetLib::NetEvent::__get_ErrorCode() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::SocketError, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetEvent::__set_DisconnectReason(LiteNetLib::DisconnectReason value)  {
::cordl_internals::setInstanceField<LiteNetLib::DisconnectReason, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::DisconnectReason>(value));
}
constexpr LiteNetLib::DisconnectReason LiteNetLib::NetEvent::__get_DisconnectReason() const {
return ::cordl_internals::getInstanceField<LiteNetLib::DisconnectReason, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetEvent::__set_ConnectionRequest(LiteNetLib::ConnectionRequest value)  {
::cordl_internals::setInstanceField<LiteNetLib::ConnectionRequest, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::ConnectionRequest>(value));
}
constexpr LiteNetLib::ConnectionRequest LiteNetLib::NetEvent::__get_ConnectionRequest() const {
return ::cordl_internals::getInstanceField<LiteNetLib::ConnectionRequest, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetEvent::__set_DeliveryMethod(LiteNetLib::DeliveryMethod value)  {
::cordl_internals::setInstanceField<LiteNetLib::DeliveryMethod, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::DeliveryMethod>(value));
}
constexpr LiteNetLib::DeliveryMethod LiteNetLib::NetEvent::__get_DeliveryMethod() const {
return ::cordl_internals::getInstanceField<LiteNetLib::DeliveryMethod, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetEvent::__set_DataReader(LiteNetLib::NetPacketReader value)  {
::cordl_internals::setInstanceField<LiteNetLib::NetPacketReader, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::NetPacketReader>(value));
}
constexpr LiteNetLib::NetPacketReader LiteNetLib::NetEvent::__get_DataReader() const {
return ::cordl_internals::getInstanceField<LiteNetLib::NetPacketReader, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 LiteNetLib::NetEvent LiteNetLib::NetEvent::New_ctor(LiteNetLib::NetManager manager)  {
LiteNetLib::NetEvent o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::NetEvent>(manager))};
return o;
}
 void LiteNetLib::NetEvent::_ctor(LiteNetLib::NetManager manager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, manager);
}
