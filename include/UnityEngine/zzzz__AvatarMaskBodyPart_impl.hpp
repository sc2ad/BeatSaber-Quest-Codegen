#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__AvatarMaskBodyPart_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::AvatarMaskBodyPart::AvatarMaskBodyPart(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::AvatarMaskBodyPart::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::AvatarMaskBodyPart::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::Root{0};
constexpr UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::Body{1};
constexpr UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::Head{2};
constexpr UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::LeftLeg{3};
constexpr UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::RightLeg{4};
constexpr UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::LeftArm{5};
constexpr UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::RightArm{6};
constexpr UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::LeftFingers{7};
constexpr UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::RightFingers{8};
constexpr UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::LeftFootIK{9};
constexpr UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::RightFootIK{10};
constexpr UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::LeftHandIK{11};
constexpr UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::RightHandIK{12};
constexpr UnityEngine::AvatarMaskBodyPart  UnityEngine::AvatarMaskBodyPart::LastBodyPart{13};
