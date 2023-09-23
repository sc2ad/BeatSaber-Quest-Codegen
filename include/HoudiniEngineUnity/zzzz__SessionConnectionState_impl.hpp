#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__SessionConnectionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::SessionConnectionState::SessionConnectionState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::SessionConnectionState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::SessionConnectionState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::SessionConnectionState  HoudiniEngineUnity::SessionConnectionState::NOT_CONNECTED{0};
constexpr HoudiniEngineUnity::SessionConnectionState  HoudiniEngineUnity::SessionConnectionState::CONNECTED{1};
constexpr HoudiniEngineUnity::SessionConnectionState  HoudiniEngineUnity::SessionConnectionState::FAILED_TO_CONNECT{2};
