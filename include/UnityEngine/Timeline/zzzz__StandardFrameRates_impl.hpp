#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Timeline/zzzz__StandardFrameRates_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Timeline::StandardFrameRates::StandardFrameRates(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Timeline::StandardFrameRates::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Timeline::StandardFrameRates::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Timeline::StandardFrameRates  UnityEngine::Timeline::StandardFrameRates::Fps24{0};
constexpr UnityEngine::Timeline::StandardFrameRates  UnityEngine::Timeline::StandardFrameRates::Fps23_97{1};
constexpr UnityEngine::Timeline::StandardFrameRates  UnityEngine::Timeline::StandardFrameRates::Fps25{2};
constexpr UnityEngine::Timeline::StandardFrameRates  UnityEngine::Timeline::StandardFrameRates::Fps30{3};
constexpr UnityEngine::Timeline::StandardFrameRates  UnityEngine::Timeline::StandardFrameRates::Fps29_97{4};
constexpr UnityEngine::Timeline::StandardFrameRates  UnityEngine::Timeline::StandardFrameRates::Fps50{5};
constexpr UnityEngine::Timeline::StandardFrameRates  UnityEngine::Timeline::StandardFrameRates::Fps60{6};
constexpr UnityEngine::Timeline::StandardFrameRates  UnityEngine::Timeline::StandardFrameRates::Fps59_94{7};
