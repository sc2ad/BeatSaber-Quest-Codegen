#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Timeline/zzzz__NotificationFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Timeline::NotificationFlags::NotificationFlags(int16_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Timeline::NotificationFlags::__set_value__(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x0>(this->__instance, std::forward<int16_t>(value));
}
constexpr int16_t UnityEngine::Timeline::NotificationFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int16_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Timeline::NotificationFlags  UnityEngine::Timeline::NotificationFlags::TriggerInEditMode{1};
constexpr UnityEngine::Timeline::NotificationFlags  UnityEngine::Timeline::NotificationFlags::Retroactive{2};
constexpr UnityEngine::Timeline::NotificationFlags  UnityEngine::Timeline::NotificationFlags::TriggerOnce{4};
