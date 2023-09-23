#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__AixAddressFamily_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::NetworkInformation::AixAddressFamily::AixAddressFamily(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::NetworkInformation::AixAddressFamily::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::NetworkInformation::AixAddressFamily::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Net::NetworkInformation::AixAddressFamily  System::Net::NetworkInformation::AixAddressFamily::AF_INET{2};
constexpr System::Net::NetworkInformation::AixAddressFamily  System::Net::NetworkInformation::AixAddressFamily::AF_INET6{24};
constexpr System::Net::NetworkInformation::AixAddressFamily  System::Net::NetworkInformation::AixAddressFamily::AF_LINK{18};
