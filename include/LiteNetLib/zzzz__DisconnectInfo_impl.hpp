#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "LiteNetLib/zzzz__DisconnectInfo_def.hpp"
#include "LiteNetLib/zzzz__NetPacketReader_def.hpp"
#include "LiteNetLib/zzzz__DisconnectReason_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
// Ctor Parameters [CppParam { name: "Reason", ty: "LiteNetLib::DisconnectReason", modifiers: "", def_value: Some("{}") }, CppParam { name: "SocketErrorCode", ty: "System::Net::Sockets::SocketError", modifiers: "", def_value: Some("{}") }, CppParam { name: "AdditionalData", ty: "LiteNetLib::NetPacketReader", modifiers: "", def_value: Some("csnull") }]
constexpr LiteNetLib::DisconnectInfo::DisconnectInfo(LiteNetLib::DisconnectReason Reason, System::Net::Sockets::SocketError SocketErrorCode, LiteNetLib::NetPacketReader AdditionalData) noexcept : ::bs_hook::ValueTypeWrapper() {this->Reason = Reason;
this->SocketErrorCode = SocketErrorCode;
this->AdditionalData = AdditionalData;
}
constexpr void LiteNetLib::DisconnectInfo::__set_Reason(LiteNetLib::DisconnectReason value)  {
::cordl_internals::setInstanceField<LiteNetLib::DisconnectReason, 0x0>(this->__instance, std::forward<LiteNetLib::DisconnectReason>(value));
}
constexpr LiteNetLib::DisconnectReason LiteNetLib::DisconnectInfo::__get_Reason() const {
return ::cordl_internals::getInstanceField<LiteNetLib::DisconnectReason, 0x0>(this->__instance);
}
constexpr void LiteNetLib::DisconnectInfo::__set_SocketErrorCode(System::Net::Sockets::SocketError value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::SocketError, 0x4>(this->__instance, std::forward<System::Net::Sockets::SocketError>(value));
}
constexpr System::Net::Sockets::SocketError LiteNetLib::DisconnectInfo::__get_SocketErrorCode() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::SocketError, 0x4>(this->__instance);
}
constexpr void LiteNetLib::DisconnectInfo::__set_AdditionalData(LiteNetLib::NetPacketReader value)  {
::cordl_internals::setInstanceField<LiteNetLib::NetPacketReader, 0x8>(this->__instance, std::forward<LiteNetLib::NetPacketReader>(value));
}
constexpr LiteNetLib::NetPacketReader LiteNetLib::DisconnectInfo::__get_AdditionalData() const {
return ::cordl_internals::getInstanceField<LiteNetLib::NetPacketReader, 0x8>(this->__instance);
}
