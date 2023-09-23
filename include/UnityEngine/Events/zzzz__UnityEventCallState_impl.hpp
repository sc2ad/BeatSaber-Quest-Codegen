#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEventCallState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Events::UnityEventCallState::UnityEventCallState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Events::UnityEventCallState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Events::UnityEventCallState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Events::UnityEventCallState  UnityEngine::Events::UnityEventCallState::Off{0};
constexpr UnityEngine::Events::UnityEventCallState  UnityEngine::Events::UnityEventCallState::EditorAndRuntime{1};
constexpr UnityEngine::Events::UnityEventCallState  UnityEngine::Events::UnityEventCallState::RuntimeOnly{2};
