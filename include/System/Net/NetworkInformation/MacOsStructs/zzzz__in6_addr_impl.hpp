#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Net/NetworkInformation/MacOsStructs/zzzz__in6_addr_def.hpp"
// Ctor Parameters [CppParam { name: "u6_addr8", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }]
constexpr System::Net::NetworkInformation::MacOsStructs::in6_addr::in6_addr(::ArrayW<uint8_t> u6_addr8) noexcept : ::bs_hook::ValueTypeWrapper() {this->u6_addr8 = u6_addr8;
}
constexpr void System::Net::NetworkInformation::MacOsStructs::in6_addr::__set_u6_addr8(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x0>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Net::NetworkInformation::MacOsStructs::in6_addr::__get_u6_addr8() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x0>(this->__instance);
}
