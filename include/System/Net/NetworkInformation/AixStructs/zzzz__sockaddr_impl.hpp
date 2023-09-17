#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Net/NetworkInformation/AixStructs/zzzz__sockaddr_def.hpp"
// Ctor Parameters [CppParam { name: "sa_len", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sa_family", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::AixStructs::sockaddr::sockaddr(uint8_t sa_len, uint8_t sa_family) noexcept : ::bs_hook::ValueTypeWrapper() {this->sa_len = sa_len;
this->sa_family = sa_family;
}
constexpr void ::System::Net::NetworkInformation::AixStructs::sockaddr::__set_sa_len(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::System::Net::NetworkInformation::AixStructs::sockaddr::__get_sa_len() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::NetworkInformation::AixStructs::sockaddr::__set_sa_family(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x1>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::System::Net::NetworkInformation::AixStructs::sockaddr::__get_sa_family() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x1>(this->__instance);
}
} // end anonymous namespace
