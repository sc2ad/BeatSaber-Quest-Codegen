#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__EVRApplicationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRApplicationType::EVRApplicationType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::OVR::OpenVR::EVRApplicationType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::EVRApplicationType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::OVR::OpenVR::EVRApplicationType  ::OVR::OpenVR::EVRApplicationType::VRApplication_Other{0};
constexpr ::OVR::OpenVR::EVRApplicationType  ::OVR::OpenVR::EVRApplicationType::VRApplication_Scene{1};
constexpr ::OVR::OpenVR::EVRApplicationType  ::OVR::OpenVR::EVRApplicationType::VRApplication_Overlay{2};
constexpr ::OVR::OpenVR::EVRApplicationType  ::OVR::OpenVR::EVRApplicationType::VRApplication_Background{3};
constexpr ::OVR::OpenVR::EVRApplicationType  ::OVR::OpenVR::EVRApplicationType::VRApplication_Utility{4};
constexpr ::OVR::OpenVR::EVRApplicationType  ::OVR::OpenVR::EVRApplicationType::VRApplication_VRMonitor{5};
constexpr ::OVR::OpenVR::EVRApplicationType  ::OVR::OpenVR::EVRApplicationType::VRApplication_SteamWatchdog{6};
constexpr ::OVR::OpenVR::EVRApplicationType  ::OVR::OpenVR::EVRApplicationType::VRApplication_Bootstrapper{7};
constexpr ::OVR::OpenVR::EVRApplicationType  ::OVR::OpenVR::EVRApplicationType::VRApplication_Max{8};
} // end anonymous namespace
