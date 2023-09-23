#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__AvatarTarget_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::AvatarTarget::AvatarTarget(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::AvatarTarget::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::AvatarTarget::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::AvatarTarget  UnityEngine::AvatarTarget::Root{0};
constexpr UnityEngine::AvatarTarget  UnityEngine::AvatarTarget::Body{1};
constexpr UnityEngine::AvatarTarget  UnityEngine::AvatarTarget::LeftFoot{2};
constexpr UnityEngine::AvatarTarget  UnityEngine::AvatarTarget::RightFoot{3};
constexpr UnityEngine::AvatarTarget  UnityEngine::AvatarTarget::LeftHand{4};
constexpr UnityEngine::AvatarTarget  UnityEngine::AvatarTarget::RightHand{5};
