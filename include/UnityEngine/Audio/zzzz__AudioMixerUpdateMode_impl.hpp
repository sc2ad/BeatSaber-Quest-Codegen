#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixerUpdateMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Audio::AudioMixerUpdateMode::AudioMixerUpdateMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Audio::AudioMixerUpdateMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Audio::AudioMixerUpdateMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Audio::AudioMixerUpdateMode  UnityEngine::Audio::AudioMixerUpdateMode::Normal{0};
constexpr UnityEngine::Audio::AudioMixerUpdateMode  UnityEngine::Audio::AudioMixerUpdateMode::UnscaledTime{1};
