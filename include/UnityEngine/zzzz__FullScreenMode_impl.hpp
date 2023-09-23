#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__FullScreenMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::FullScreenMode::FullScreenMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::FullScreenMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::FullScreenMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::FullScreenMode  UnityEngine::FullScreenMode::ExclusiveFullScreen{0};
constexpr UnityEngine::FullScreenMode  UnityEngine::FullScreenMode::FullScreenWindow{1};
constexpr UnityEngine::FullScreenMode  UnityEngine::FullScreenMode::MaximizedWindow{2};
constexpr UnityEngine::FullScreenMode  UnityEngine::FullScreenMode::Windowed{3};
