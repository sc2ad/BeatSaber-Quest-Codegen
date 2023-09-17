#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Net/zzzz__SecurityProtocolType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::SecurityProtocolType::SecurityProtocolType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Net::SecurityProtocolType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::SecurityProtocolType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Net::SecurityProtocolType  ::System::Net::SecurityProtocolType::SystemDefault{0};
constexpr ::System::Net::SecurityProtocolType  ::System::Net::SecurityProtocolType::Ssl3{48};
constexpr ::System::Net::SecurityProtocolType  ::System::Net::SecurityProtocolType::Tls{192};
constexpr ::System::Net::SecurityProtocolType  ::System::Net::SecurityProtocolType::Tls11{768};
constexpr ::System::Net::SecurityProtocolType  ::System::Net::SecurityProtocolType::Tls12{3072};
constexpr ::System::Net::SecurityProtocolType  ::System::Net::SecurityProtocolType::Tls13{12288};
} // end anonymous namespace
