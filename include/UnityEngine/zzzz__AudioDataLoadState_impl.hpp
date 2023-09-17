#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__AudioDataLoadState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AudioDataLoadState::AudioDataLoadState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::AudioDataLoadState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::AudioDataLoadState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::AudioDataLoadState  ::UnityEngine::AudioDataLoadState::Unloaded{0};
constexpr ::UnityEngine::AudioDataLoadState  ::UnityEngine::AudioDataLoadState::Loading{1};
constexpr ::UnityEngine::AudioDataLoadState  ::UnityEngine::AudioDataLoadState::Loaded{2};
constexpr ::UnityEngine::AudioDataLoadState  ::UnityEngine::AudioDataLoadState::Failed{3};
} // end anonymous namespace
