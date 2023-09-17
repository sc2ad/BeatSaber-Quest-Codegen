#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/Rendering/zzzz__LightProbeUsage_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::LightProbeUsage::LightProbeUsage(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Rendering::LightProbeUsage::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Rendering::LightProbeUsage::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Rendering::LightProbeUsage  ::UnityEngine::Rendering::LightProbeUsage::Off{0};
constexpr ::UnityEngine::Rendering::LightProbeUsage  ::UnityEngine::Rendering::LightProbeUsage::BlendProbes{1};
constexpr ::UnityEngine::Rendering::LightProbeUsage  ::UnityEngine::Rendering::LightProbeUsage::UseProxyVolume{2};
constexpr ::UnityEngine::Rendering::LightProbeUsage  ::UnityEngine::Rendering::LightProbeUsage::CustomProvided{4};
} // end anonymous namespace
