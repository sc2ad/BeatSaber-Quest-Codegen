#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Net/NetworkInformation/zzzz__AixIoctlRequest_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::AixIoctlRequest::AixIoctlRequest(uint32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Net::NetworkInformation::AixIoctlRequest::__set_value__(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::System::Net::NetworkInformation::AixIoctlRequest::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr ::System::Net::NetworkInformation::AixIoctlRequest  ::System::Net::NetworkInformation::AixIoctlRequest::SIOCGSIZIFCONF{1074030954u};
constexpr ::System::Net::NetworkInformation::AixIoctlRequest  ::System::Net::NetworkInformation::AixIoctlRequest::SIOCGIFCONF{3222300997u};
constexpr ::System::Net::NetworkInformation::AixIoctlRequest  ::System::Net::NetworkInformation::AixIoctlRequest::SIOCGIFFLAGS{3223873809u};
constexpr ::System::Net::NetworkInformation::AixIoctlRequest  ::System::Net::NetworkInformation::AixIoctlRequest::SIOCGIFNETMASK{3223873829u};
constexpr ::System::Net::NetworkInformation::AixIoctlRequest  ::System::Net::NetworkInformation::AixIoctlRequest::SIOCGIFMTU{3223873878u};
} // end anonymous namespace
