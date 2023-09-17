#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/zzzz__UriHostNameType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::UriHostNameType::UriHostNameType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::UriHostNameType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::UriHostNameType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::UriHostNameType  ::System::UriHostNameType::Unknown{0};
constexpr ::System::UriHostNameType  ::System::UriHostNameType::Basic{1};
constexpr ::System::UriHostNameType  ::System::UriHostNameType::Dns{2};
constexpr ::System::UriHostNameType  ::System::UriHostNameType::IPv4{3};
constexpr ::System::UriHostNameType  ::System::UriHostNameType::IPv6{4};
} // end anonymous namespace
