#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__CVRSettingHelper_def.hpp"
// Ctor Parameters [CppParam { name: "m_pSettings", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::CVRSettingHelper::CVRSettingHelper(::cordl_internals::intptr_t m_pSettings) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_pSettings = m_pSettings;
}
constexpr void ::OVR::OpenVR::CVRSettingHelper::__set_m_pSettings(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::OVR::OpenVR::CVRSettingHelper::__get_m_pSettings() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
} // end anonymous namespace
