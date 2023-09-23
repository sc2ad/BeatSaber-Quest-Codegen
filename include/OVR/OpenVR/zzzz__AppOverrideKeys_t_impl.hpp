#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__AppOverrideKeys_t_def.hpp"
// Ctor Parameters [CppParam { name: "pchKey", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pchValue", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::AppOverrideKeys_t::AppOverrideKeys_t(::cordl_internals::intptr_t pchKey, ::cordl_internals::intptr_t pchValue) noexcept : ::bs_hook::ValueTypeWrapper() {this->pchKey = pchKey;
this->pchValue = pchValue;
}
constexpr void OVR::OpenVR::AppOverrideKeys_t::__set_pchKey(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t OVR::OpenVR::AppOverrideKeys_t::__get_pchKey() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::AppOverrideKeys_t::__set_pchValue(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t OVR::OpenVR::AppOverrideKeys_t::__get_pchValue() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance);
}
