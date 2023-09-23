#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__LogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::ProBuilder::LogLevel::LogLevel(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::ProBuilder::LogLevel::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ProBuilder::LogLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::ProBuilder::LogLevel  UnityEngine::ProBuilder::LogLevel::None{0};
constexpr UnityEngine::ProBuilder::LogLevel  UnityEngine::ProBuilder::LogLevel::Error{1};
constexpr UnityEngine::ProBuilder::LogLevel  UnityEngine::ProBuilder::LogLevel::Warning{2};
constexpr UnityEngine::ProBuilder::LogLevel  UnityEngine::ProBuilder::LogLevel::Info{4};
constexpr UnityEngine::ProBuilder::LogLevel  UnityEngine::ProBuilder::LogLevel::Default{3};
constexpr UnityEngine::ProBuilder::LogLevel  UnityEngine::ProBuilder::LogLevel::All{255};
