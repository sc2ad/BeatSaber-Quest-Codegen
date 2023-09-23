#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__AudioType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::AudioType::AudioType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::AudioType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::AudioType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::AudioType  UnityEngine::AudioType::UNKNOWN{0};
constexpr UnityEngine::AudioType  UnityEngine::AudioType::ACC{1};
constexpr UnityEngine::AudioType  UnityEngine::AudioType::AIFF{2};
constexpr UnityEngine::AudioType  UnityEngine::AudioType::IT{10};
constexpr UnityEngine::AudioType  UnityEngine::AudioType::MOD{12};
constexpr UnityEngine::AudioType  UnityEngine::AudioType::MPEG{13};
constexpr UnityEngine::AudioType  UnityEngine::AudioType::OGGVORBIS{14};
constexpr UnityEngine::AudioType  UnityEngine::AudioType::S3M{17};
constexpr UnityEngine::AudioType  UnityEngine::AudioType::WAV{20};
constexpr UnityEngine::AudioType  UnityEngine::AudioType::XM{21};
constexpr UnityEngine::AudioType  UnityEngine::AudioType::XMA{22};
constexpr UnityEngine::AudioType  UnityEngine::AudioType::VAG{23};
constexpr UnityEngine::AudioType  UnityEngine::AudioType::AUDIOQUEUE{24};
