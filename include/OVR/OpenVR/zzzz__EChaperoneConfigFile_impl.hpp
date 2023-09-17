#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__EChaperoneConfigFile_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EChaperoneConfigFile::EChaperoneConfigFile(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::OVR::OpenVR::EChaperoneConfigFile::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::EChaperoneConfigFile::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::OVR::OpenVR::EChaperoneConfigFile  ::OVR::OpenVR::EChaperoneConfigFile::Live{1};
constexpr ::OVR::OpenVR::EChaperoneConfigFile  ::OVR::OpenVR::EChaperoneConfigFile::Temp{2};
} // end anonymous namespace
