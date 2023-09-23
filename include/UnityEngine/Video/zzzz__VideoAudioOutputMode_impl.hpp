#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Video/zzzz__VideoAudioOutputMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Video::VideoAudioOutputMode::VideoAudioOutputMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Video::VideoAudioOutputMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Video::VideoAudioOutputMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Video::VideoAudioOutputMode  UnityEngine::Video::VideoAudioOutputMode::None{0};
constexpr UnityEngine::Video::VideoAudioOutputMode  UnityEngine::Video::VideoAudioOutputMode::AudioSource{1};
constexpr UnityEngine::Video::VideoAudioOutputMode  UnityEngine::Video::VideoAudioOutputMode::Direct{2};
constexpr UnityEngine::Video::VideoAudioOutputMode  UnityEngine::Video::VideoAudioOutputMode::APIOnly{3};
