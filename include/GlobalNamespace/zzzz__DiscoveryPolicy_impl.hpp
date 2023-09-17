#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__DiscoveryPolicy_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DiscoveryPolicy::DiscoveryPolicy(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::DiscoveryPolicy::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::GlobalNamespace::DiscoveryPolicy::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::DiscoveryPolicy  ::GlobalNamespace::DiscoveryPolicy::Hidden{0u};
constexpr ::GlobalNamespace::DiscoveryPolicy  ::GlobalNamespace::DiscoveryPolicy::WithCode{1u};
constexpr ::GlobalNamespace::DiscoveryPolicy  ::GlobalNamespace::DiscoveryPolicy::Public{2u};
} // end anonymous namespace
