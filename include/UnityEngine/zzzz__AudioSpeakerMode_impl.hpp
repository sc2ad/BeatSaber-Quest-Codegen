#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__AudioSpeakerMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::AudioSpeakerMode::AudioSpeakerMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::AudioSpeakerMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::AudioSpeakerMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::AudioSpeakerMode  UnityEngine::AudioSpeakerMode::Raw{0};
constexpr UnityEngine::AudioSpeakerMode  UnityEngine::AudioSpeakerMode::Mono{1};
constexpr UnityEngine::AudioSpeakerMode  UnityEngine::AudioSpeakerMode::Stereo{2};
constexpr UnityEngine::AudioSpeakerMode  UnityEngine::AudioSpeakerMode::Quad{3};
constexpr UnityEngine::AudioSpeakerMode  UnityEngine::AudioSpeakerMode::Surround{4};
constexpr UnityEngine::AudioSpeakerMode  UnityEngine::AudioSpeakerMode::Mode5point1{5};
constexpr UnityEngine::AudioSpeakerMode  UnityEngine::AudioSpeakerMode::Mode7point1{6};
constexpr UnityEngine::AudioSpeakerMode  UnityEngine::AudioSpeakerMode::Prologic{7};
