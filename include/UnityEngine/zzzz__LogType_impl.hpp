#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::LogType::LogType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::LogType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::LogType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::LogType  UnityEngine::LogType::Error{0};
constexpr UnityEngine::LogType  UnityEngine::LogType::Assert{1};
constexpr UnityEngine::LogType  UnityEngine::LogType::Warning{2};
constexpr UnityEngine::LogType  UnityEngine::LogType::Log{3};
constexpr UnityEngine::LogType  UnityEngine::LogType::Exception{4};
