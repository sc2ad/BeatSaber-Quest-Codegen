#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Unity/Profiling/LowLevel/zzzz__MarkerFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr Unity::Profiling::LowLevel::MarkerFlags::MarkerFlags(uint16_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Unity::Profiling::LowLevel::MarkerFlags::__set_value__(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x0>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t Unity::Profiling::LowLevel::MarkerFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->__instance);
}
constexpr Unity::Profiling::LowLevel::MarkerFlags  Unity::Profiling::LowLevel::MarkerFlags::Default{0u};
constexpr Unity::Profiling::LowLevel::MarkerFlags  Unity::Profiling::LowLevel::MarkerFlags::Script{2u};
constexpr Unity::Profiling::LowLevel::MarkerFlags  Unity::Profiling::LowLevel::MarkerFlags::ScriptInvoke{32u};
constexpr Unity::Profiling::LowLevel::MarkerFlags  Unity::Profiling::LowLevel::MarkerFlags::ScriptDeepProfiler{64u};
constexpr Unity::Profiling::LowLevel::MarkerFlags  Unity::Profiling::LowLevel::MarkerFlags::AvailabilityEditor{4u};
constexpr Unity::Profiling::LowLevel::MarkerFlags  Unity::Profiling::LowLevel::MarkerFlags::AvailabilityNonDevelopment{8u};
constexpr Unity::Profiling::LowLevel::MarkerFlags  Unity::Profiling::LowLevel::MarkerFlags::Warning{16u};
constexpr Unity::Profiling::LowLevel::MarkerFlags  Unity::Profiling::LowLevel::MarkerFlags::Counter{128u};
constexpr Unity::Profiling::LowLevel::MarkerFlags  Unity::Profiling::LowLevel::MarkerFlags::SampleGPU{256u};
