#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__HideFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::HideFlags::HideFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::HideFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::HideFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::HideFlags  UnityEngine::HideFlags::None{0};
constexpr UnityEngine::HideFlags  UnityEngine::HideFlags::HideInHierarchy{1};
constexpr UnityEngine::HideFlags  UnityEngine::HideFlags::HideInInspector{2};
constexpr UnityEngine::HideFlags  UnityEngine::HideFlags::DontSaveInEditor{4};
constexpr UnityEngine::HideFlags  UnityEngine::HideFlags::NotEditable{8};
constexpr UnityEngine::HideFlags  UnityEngine::HideFlags::DontSaveInBuild{16};
constexpr UnityEngine::HideFlags  UnityEngine::HideFlags::DontUnloadUnusedAsset{32};
constexpr UnityEngine::HideFlags  UnityEngine::HideFlags::DontSave{52};
constexpr UnityEngine::HideFlags  UnityEngine::HideFlags::HideAndDontSave{61};
