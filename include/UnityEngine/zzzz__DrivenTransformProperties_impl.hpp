#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__DrivenTransformProperties_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::DrivenTransformProperties::DrivenTransformProperties(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::DrivenTransformProperties::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::DrivenTransformProperties::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::None{0};
constexpr UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::All{-1};
constexpr UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::AnchoredPositionX{2};
constexpr UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::AnchoredPositionY{4};
constexpr UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::AnchoredPositionZ{8};
constexpr UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::Rotation{16};
constexpr UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::ScaleX{32};
constexpr UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::ScaleY{64};
constexpr UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::ScaleZ{128};
constexpr UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::AnchorMinX{256};
constexpr UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::AnchorMinY{512};
constexpr UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::AnchorMaxX{1024};
constexpr UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::AnchorMaxY{2048};
constexpr UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::SizeDeltaX{4096};
constexpr UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::SizeDeltaY{8192};
constexpr UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::PivotX{16384};
constexpr UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::PivotY{32768};
constexpr UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::AnchoredPosition{6};
constexpr UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::AnchoredPosition3D{14};
constexpr UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::Scale{224};
constexpr UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::AnchorMin{768};
constexpr UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::AnchorMax{3072};
constexpr UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::Anchors{3840};
constexpr UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::SizeDelta{12288};
constexpr UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::Pivot{49152};
