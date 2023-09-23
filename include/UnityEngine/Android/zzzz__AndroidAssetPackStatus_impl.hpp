#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Android::AndroidAssetPackStatus::AndroidAssetPackStatus(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Android::AndroidAssetPackStatus::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Android::AndroidAssetPackStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Android::AndroidAssetPackStatus  UnityEngine::Android::AndroidAssetPackStatus::Unknown{0};
constexpr UnityEngine::Android::AndroidAssetPackStatus  UnityEngine::Android::AndroidAssetPackStatus::Pending{1};
constexpr UnityEngine::Android::AndroidAssetPackStatus  UnityEngine::Android::AndroidAssetPackStatus::Downloading{2};
constexpr UnityEngine::Android::AndroidAssetPackStatus  UnityEngine::Android::AndroidAssetPackStatus::Transferring{3};
constexpr UnityEngine::Android::AndroidAssetPackStatus  UnityEngine::Android::AndroidAssetPackStatus::Completed{4};
constexpr UnityEngine::Android::AndroidAssetPackStatus  UnityEngine::Android::AndroidAssetPackStatus::Failed{5};
constexpr UnityEngine::Android::AndroidAssetPackStatus  UnityEngine::Android::AndroidAssetPackStatus::Canceled{6};
constexpr UnityEngine::Android::AndroidAssetPackStatus  UnityEngine::Android::AndroidAssetPackStatus::WaitingForWifi{7};
constexpr UnityEngine::Android::AndroidAssetPackStatus  UnityEngine::Android::AndroidAssetPackStatus::NotInstalled{8};
