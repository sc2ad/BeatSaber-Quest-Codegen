#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__AvatarIKHint_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::AvatarIKHint::AvatarIKHint(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::AvatarIKHint::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::AvatarIKHint::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::AvatarIKHint  UnityEngine::AvatarIKHint::LeftKnee{0};
constexpr UnityEngine::AvatarIKHint  UnityEngine::AvatarIKHint::RightKnee{1};
constexpr UnityEngine::AvatarIKHint  UnityEngine::AvatarIKHint::LeftElbow{2};
constexpr UnityEngine::AvatarIKHint  UnityEngine::AvatarIKHint::RightElbow{3};
