#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Oculus/Platform/zzzz__NetSyncVoipMicSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Oculus::Platform::NetSyncVoipMicSource::NetSyncVoipMicSource(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Oculus::Platform::NetSyncVoipMicSource::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Oculus::Platform::NetSyncVoipMicSource::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Oculus::Platform::NetSyncVoipMicSource  Oculus::Platform::NetSyncVoipMicSource::Unknown{0};
constexpr Oculus::Platform::NetSyncVoipMicSource  Oculus::Platform::NetSyncVoipMicSource::None{1};
constexpr Oculus::Platform::NetSyncVoipMicSource  Oculus::Platform::NetSyncVoipMicSource::Internal{2};
