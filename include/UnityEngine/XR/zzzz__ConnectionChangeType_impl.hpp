#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/XR/zzzz__ConnectionChangeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::XR::ConnectionChangeType::ConnectionChangeType(uint32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::XR::ConnectionChangeType::__set_value__(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::XR::ConnectionChangeType::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::XR::ConnectionChangeType  UnityEngine::XR::ConnectionChangeType::Connected{0u};
constexpr UnityEngine::XR::ConnectionChangeType  UnityEngine::XR::ConnectionChangeType::Disconnected{1u};
constexpr UnityEngine::XR::ConnectionChangeType  UnityEngine::XR::ConnectionChangeType::ConfigChange{2u};
