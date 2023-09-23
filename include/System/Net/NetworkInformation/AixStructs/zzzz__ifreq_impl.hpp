#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Net/NetworkInformation/AixStructs/zzzz__ifreq_def.hpp"
#include "System/Net/NetworkInformation/AixStructs/zzzz__sockaddr_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::NetworkInformation::AixStructs::System__Net__NetworkInformation__AixStructs__ifreq___ifr_name_e__FixedBuffer::System__Net__NetworkInformation__AixStructs__ifreq___ifr_name_e__FixedBuffer(uint8_t FixedElementField) noexcept : ::bs_hook::ValueTypeWrapper() {this->FixedElementField = FixedElementField;
}
constexpr void System::Net::NetworkInformation::AixStructs::System__Net__NetworkInformation__AixStructs__ifreq___ifr_name_e__FixedBuffer::__set_FixedElementField(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Net::NetworkInformation::AixStructs::System__Net__NetworkInformation__AixStructs__ifreq___ifr_name_e__FixedBuffer::__get_FixedElementField() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
// Ctor Parameters [CppParam { name: "ifr_name", ty: "System::Net::NetworkInformation::AixStructs::System__Net__NetworkInformation__AixStructs__ifreq___ifr_name_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "ifru_addr", ty: "System::Net::NetworkInformation::AixStructs::sockaddr", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::NetworkInformation::AixStructs::ifreq::ifreq(System::Net::NetworkInformation::AixStructs::System__Net__NetworkInformation__AixStructs__ifreq___ifr_name_e__FixedBuffer ifr_name, System::Net::NetworkInformation::AixStructs::sockaddr ifru_addr) noexcept : ::bs_hook::ValueTypeWrapper() {this->ifr_name = ifr_name;
this->ifru_addr = ifru_addr;
}
constexpr void System::Net::NetworkInformation::AixStructs::ifreq::__set_ifr_name(System::Net::NetworkInformation::AixStructs::System__Net__NetworkInformation__AixStructs__ifreq___ifr_name_e__FixedBuffer value)  {
::cordl_internals::setInstanceField<System::Net::NetworkInformation::AixStructs::System__Net__NetworkInformation__AixStructs__ifreq___ifr_name_e__FixedBuffer, 0x0>(this->__instance, std::forward<System::Net::NetworkInformation::AixStructs::System__Net__NetworkInformation__AixStructs__ifreq___ifr_name_e__FixedBuffer>(value));
}
constexpr System::Net::NetworkInformation::AixStructs::System__Net__NetworkInformation__AixStructs__ifreq___ifr_name_e__FixedBuffer System::Net::NetworkInformation::AixStructs::ifreq::__get_ifr_name() const {
return ::cordl_internals::getInstanceField<System::Net::NetworkInformation::AixStructs::System__Net__NetworkInformation__AixStructs__ifreq___ifr_name_e__FixedBuffer, 0x0>(this->__instance);
}
constexpr void System::Net::NetworkInformation::AixStructs::ifreq::__set_ifru_addr(System::Net::NetworkInformation::AixStructs::sockaddr value)  {
::cordl_internals::setInstanceField<System::Net::NetworkInformation::AixStructs::sockaddr, 0x10>(this->__instance, std::forward<System::Net::NetworkInformation::AixStructs::sockaddr>(value));
}
constexpr System::Net::NetworkInformation::AixStructs::sockaddr System::Net::NetworkInformation::AixStructs::ifreq::__get_ifru_addr() const {
return ::cordl_internals::getInstanceField<System::Net::NetworkInformation::AixStructs::sockaddr, 0x10>(this->__instance);
}
