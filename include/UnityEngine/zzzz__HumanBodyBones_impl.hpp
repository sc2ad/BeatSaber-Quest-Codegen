#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__HumanBodyBones_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::HumanBodyBones::HumanBodyBones(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::HumanBodyBones::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::HumanBodyBones::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::Hips{0};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::LeftUpperLeg{1};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::RightUpperLeg{2};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::LeftLowerLeg{3};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::RightLowerLeg{4};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::LeftFoot{5};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::RightFoot{6};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::Spine{7};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::Chest{8};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::UpperChest{54};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::Neck{9};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::Head{10};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::LeftShoulder{11};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::RightShoulder{12};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::LeftUpperArm{13};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::RightUpperArm{14};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::LeftLowerArm{15};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::RightLowerArm{16};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::LeftHand{17};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::RightHand{18};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::LeftToes{19};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::RightToes{20};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::LeftEye{21};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::RightEye{22};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::Jaw{23};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::LeftThumbProximal{24};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::LeftThumbIntermediate{25};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::LeftThumbDistal{26};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::LeftIndexProximal{27};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::LeftIndexIntermediate{28};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::LeftIndexDistal{29};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::LeftMiddleProximal{30};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::LeftMiddleIntermediate{31};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::LeftMiddleDistal{32};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::LeftRingProximal{33};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::LeftRingIntermediate{34};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::LeftRingDistal{35};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::LeftLittleProximal{36};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::LeftLittleIntermediate{37};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::LeftLittleDistal{38};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::RightThumbProximal{39};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::RightThumbIntermediate{40};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::RightThumbDistal{41};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::RightIndexProximal{42};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::RightIndexIntermediate{43};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::RightIndexDistal{44};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::RightMiddleProximal{45};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::RightMiddleIntermediate{46};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::RightMiddleDistal{47};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::RightRingProximal{48};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::RightRingIntermediate{49};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::RightRingDistal{50};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::RightLittleProximal{51};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::RightLittleIntermediate{52};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::RightLittleDistal{53};
constexpr UnityEngine::HumanBodyBones  UnityEngine::HumanBodyBones::LastBone{55};
