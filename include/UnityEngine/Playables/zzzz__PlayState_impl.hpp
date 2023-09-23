#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Playables::PlayState::PlayState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Playables::PlayState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Playables::PlayState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Playables::PlayState  UnityEngine::Playables::PlayState::Paused{0};
constexpr UnityEngine::Playables::PlayState  UnityEngine::Playables::PlayState::Playing{1};
constexpr UnityEngine::Playables::PlayState  UnityEngine::Playables::PlayState::Delayed{2};
