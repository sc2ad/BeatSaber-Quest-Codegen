#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__EVRApplicationProperty_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRApplicationProperty::EVRApplicationProperty(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::OVR::OpenVR::EVRApplicationProperty::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::EVRApplicationProperty::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::OVR::OpenVR::EVRApplicationProperty  ::OVR::OpenVR::EVRApplicationProperty::Name_String{0};
constexpr ::OVR::OpenVR::EVRApplicationProperty  ::OVR::OpenVR::EVRApplicationProperty::LaunchType_String{11};
constexpr ::OVR::OpenVR::EVRApplicationProperty  ::OVR::OpenVR::EVRApplicationProperty::WorkingDirectory_String{12};
constexpr ::OVR::OpenVR::EVRApplicationProperty  ::OVR::OpenVR::EVRApplicationProperty::BinaryPath_String{13};
constexpr ::OVR::OpenVR::EVRApplicationProperty  ::OVR::OpenVR::EVRApplicationProperty::Arguments_String{14};
constexpr ::OVR::OpenVR::EVRApplicationProperty  ::OVR::OpenVR::EVRApplicationProperty::URL_String{15};
constexpr ::OVR::OpenVR::EVRApplicationProperty  ::OVR::OpenVR::EVRApplicationProperty::Description_String{50};
constexpr ::OVR::OpenVR::EVRApplicationProperty  ::OVR::OpenVR::EVRApplicationProperty::NewsURL_String{51};
constexpr ::OVR::OpenVR::EVRApplicationProperty  ::OVR::OpenVR::EVRApplicationProperty::ImagePath_String{52};
constexpr ::OVR::OpenVR::EVRApplicationProperty  ::OVR::OpenVR::EVRApplicationProperty::Source_String{53};
constexpr ::OVR::OpenVR::EVRApplicationProperty  ::OVR::OpenVR::EVRApplicationProperty::ActionManifestURL_String{54};
constexpr ::OVR::OpenVR::EVRApplicationProperty  ::OVR::OpenVR::EVRApplicationProperty::IsDashboardOverlay_Bool{60};
constexpr ::OVR::OpenVR::EVRApplicationProperty  ::OVR::OpenVR::EVRApplicationProperty::IsTemplate_Bool{61};
constexpr ::OVR::OpenVR::EVRApplicationProperty  ::OVR::OpenVR::EVRApplicationProperty::IsInstanced_Bool{62};
constexpr ::OVR::OpenVR::EVRApplicationProperty  ::OVR::OpenVR::EVRApplicationProperty::IsInternal_Bool{63};
constexpr ::OVR::OpenVR::EVRApplicationProperty  ::OVR::OpenVR::EVRApplicationProperty::WantsCompositorPauseInStandby_Bool{64};
constexpr ::OVR::OpenVR::EVRApplicationProperty  ::OVR::OpenVR::EVRApplicationProperty::LastLaunchTime_Uint64{70};
} // end anonymous namespace
