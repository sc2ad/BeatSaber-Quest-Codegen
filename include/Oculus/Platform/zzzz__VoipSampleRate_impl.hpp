#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Oculus/Platform/zzzz__VoipSampleRate_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Oculus::Platform::VoipSampleRate::VoipSampleRate(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Oculus::Platform::VoipSampleRate::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Oculus::Platform::VoipSampleRate::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Oculus::Platform::VoipSampleRate  Oculus::Platform::VoipSampleRate::Unknown{0};
constexpr Oculus::Platform::VoipSampleRate  Oculus::Platform::VoipSampleRate::HZ24000{1};
constexpr Oculus::Platform::VoipSampleRate  Oculus::Platform::VoipSampleRate::HZ44100{2};
constexpr Oculus::Platform::VoipSampleRate  Oculus::Platform::VoipSampleRate::HZ48000{3};
