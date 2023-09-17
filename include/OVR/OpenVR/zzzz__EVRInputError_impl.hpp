#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__EVRInputError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRInputError::EVRInputError(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::OVR::OpenVR::EVRInputError::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::EVRInputError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::OVR::OpenVR::EVRInputError  ::OVR::OpenVR::EVRInputError::None{0};
constexpr ::OVR::OpenVR::EVRInputError  ::OVR::OpenVR::EVRInputError::NameNotFound{1};
constexpr ::OVR::OpenVR::EVRInputError  ::OVR::OpenVR::EVRInputError::WrongType{2};
constexpr ::OVR::OpenVR::EVRInputError  ::OVR::OpenVR::EVRInputError::InvalidHandle{3};
constexpr ::OVR::OpenVR::EVRInputError  ::OVR::OpenVR::EVRInputError::InvalidParam{4};
constexpr ::OVR::OpenVR::EVRInputError  ::OVR::OpenVR::EVRInputError::NoSteam{5};
constexpr ::OVR::OpenVR::EVRInputError  ::OVR::OpenVR::EVRInputError::MaxCapacityReached{6};
constexpr ::OVR::OpenVR::EVRInputError  ::OVR::OpenVR::EVRInputError::IPCError{7};
constexpr ::OVR::OpenVR::EVRInputError  ::OVR::OpenVR::EVRInputError::NoActiveActionSet{8};
constexpr ::OVR::OpenVR::EVRInputError  ::OVR::OpenVR::EVRInputError::InvalidDevice{9};
constexpr ::OVR::OpenVR::EVRInputError  ::OVR::OpenVR::EVRInputError::InvalidSkeleton{10};
constexpr ::OVR::OpenVR::EVRInputError  ::OVR::OpenVR::EVRInputError::InvalidBoneCount{11};
constexpr ::OVR::OpenVR::EVRInputError  ::OVR::OpenVR::EVRInputError::InvalidCompressedData{12};
constexpr ::OVR::OpenVR::EVRInputError  ::OVR::OpenVR::EVRInputError::NoData{13};
constexpr ::OVR::OpenVR::EVRInputError  ::OVR::OpenVR::EVRInputError::BufferTooSmall{14};
constexpr ::OVR::OpenVR::EVRInputError  ::OVR::OpenVR::EVRInputError::MismatchedActionManifest{15};
constexpr ::OVR::OpenVR::EVRInputError  ::OVR::OpenVR::EVRInputError::MissingSkeletonData{16};
} // end anonymous namespace
