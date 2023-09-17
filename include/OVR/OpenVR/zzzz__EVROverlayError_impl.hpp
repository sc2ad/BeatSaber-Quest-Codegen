#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__EVROverlayError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVROverlayError::EVROverlayError(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::OVR::OpenVR::EVROverlayError::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::EVROverlayError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::OVR::OpenVR::EVROverlayError  ::OVR::OpenVR::EVROverlayError::None{0};
constexpr ::OVR::OpenVR::EVROverlayError  ::OVR::OpenVR::EVROverlayError::UnknownOverlay{10};
constexpr ::OVR::OpenVR::EVROverlayError  ::OVR::OpenVR::EVROverlayError::InvalidHandle{11};
constexpr ::OVR::OpenVR::EVROverlayError  ::OVR::OpenVR::EVROverlayError::PermissionDenied{12};
constexpr ::OVR::OpenVR::EVROverlayError  ::OVR::OpenVR::EVROverlayError::OverlayLimitExceeded{13};
constexpr ::OVR::OpenVR::EVROverlayError  ::OVR::OpenVR::EVROverlayError::WrongVisibilityType{14};
constexpr ::OVR::OpenVR::EVROverlayError  ::OVR::OpenVR::EVROverlayError::KeyTooLong{15};
constexpr ::OVR::OpenVR::EVROverlayError  ::OVR::OpenVR::EVROverlayError::NameTooLong{16};
constexpr ::OVR::OpenVR::EVROverlayError  ::OVR::OpenVR::EVROverlayError::KeyInUse{17};
constexpr ::OVR::OpenVR::EVROverlayError  ::OVR::OpenVR::EVROverlayError::WrongTransformType{18};
constexpr ::OVR::OpenVR::EVROverlayError  ::OVR::OpenVR::EVROverlayError::InvalidTrackedDevice{19};
constexpr ::OVR::OpenVR::EVROverlayError  ::OVR::OpenVR::EVROverlayError::InvalidParameter{20};
constexpr ::OVR::OpenVR::EVROverlayError  ::OVR::OpenVR::EVROverlayError::ThumbnailCantBeDestroyed{21};
constexpr ::OVR::OpenVR::EVROverlayError  ::OVR::OpenVR::EVROverlayError::ArrayTooSmall{22};
constexpr ::OVR::OpenVR::EVROverlayError  ::OVR::OpenVR::EVROverlayError::RequestFailed{23};
constexpr ::OVR::OpenVR::EVROverlayError  ::OVR::OpenVR::EVROverlayError::InvalidTexture{24};
constexpr ::OVR::OpenVR::EVROverlayError  ::OVR::OpenVR::EVROverlayError::UnableToLoadFile{25};
constexpr ::OVR::OpenVR::EVROverlayError  ::OVR::OpenVR::EVROverlayError::KeyboardAlreadyInUse{26};
constexpr ::OVR::OpenVR::EVROverlayError  ::OVR::OpenVR::EVROverlayError::NoNeighbor{27};
constexpr ::OVR::OpenVR::EVROverlayError  ::OVR::OpenVR::EVROverlayError::TooManyMaskPrimitives{29};
constexpr ::OVR::OpenVR::EVROverlayError  ::OVR::OpenVR::EVROverlayError::BadMaskPrimitive{30};
constexpr ::OVR::OpenVR::EVROverlayError  ::OVR::OpenVR::EVROverlayError::TextureAlreadyLocked{31};
constexpr ::OVR::OpenVR::EVROverlayError  ::OVR::OpenVR::EVROverlayError::TextureLockCapacityReached{32};
constexpr ::OVR::OpenVR::EVROverlayError  ::OVR::OpenVR::EVROverlayError::TextureNotLocked{33};
} // end anonymous namespace
