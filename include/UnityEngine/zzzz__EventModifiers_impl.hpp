#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::EventModifiers::EventModifiers(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::EventModifiers::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::EventModifiers::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::EventModifiers  UnityEngine::EventModifiers::None{0};
constexpr UnityEngine::EventModifiers  UnityEngine::EventModifiers::Shift{1};
constexpr UnityEngine::EventModifiers  UnityEngine::EventModifiers::Control{2};
constexpr UnityEngine::EventModifiers  UnityEngine::EventModifiers::Alt{4};
constexpr UnityEngine::EventModifiers  UnityEngine::EventModifiers::Command{8};
constexpr UnityEngine::EventModifiers  UnityEngine::EventModifiers::Numeric{16};
constexpr UnityEngine::EventModifiers  UnityEngine::EventModifiers::CapsLock{32};
constexpr UnityEngine::EventModifiers  UnityEngine::EventModifiers::FunctionKey{64};
