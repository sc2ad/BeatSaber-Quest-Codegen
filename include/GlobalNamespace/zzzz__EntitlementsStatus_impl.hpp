#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__EntitlementsStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EntitlementsStatus::EntitlementsStatus(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::EntitlementsStatus::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::EntitlementsStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::EntitlementsStatus  ::GlobalNamespace::EntitlementsStatus::Unknown{0};
constexpr ::GlobalNamespace::EntitlementsStatus  ::GlobalNamespace::EntitlementsStatus::NotOwned{1};
constexpr ::GlobalNamespace::EntitlementsStatus  ::GlobalNamespace::EntitlementsStatus::NotDownloaded{2};
constexpr ::GlobalNamespace::EntitlementsStatus  ::GlobalNamespace::EntitlementsStatus::Ok{3};
} // end anonymous namespace
