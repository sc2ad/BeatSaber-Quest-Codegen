#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityOpus/zzzz__SamplingFrequency_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityOpus::SamplingFrequency::SamplingFrequency(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityOpus::SamplingFrequency::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityOpus::SamplingFrequency::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityOpus::SamplingFrequency  ::UnityOpus::SamplingFrequency::Frequency_8000{8000};
constexpr ::UnityOpus::SamplingFrequency  ::UnityOpus::SamplingFrequency::Frequency_12000{12000};
constexpr ::UnityOpus::SamplingFrequency  ::UnityOpus::SamplingFrequency::Frequency_16000{16000};
constexpr ::UnityOpus::SamplingFrequency  ::UnityOpus::SamplingFrequency::Frequency_24000{24000};
constexpr ::UnityOpus::SamplingFrequency  ::UnityOpus::SamplingFrequency::Frequency_48000{48000};
} // end anonymous namespace
