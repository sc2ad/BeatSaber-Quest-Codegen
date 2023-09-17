#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__InputSkeletalActionData_t_def.hpp"
// Ctor Parameters [CppParam { name: "bActive", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "activeOrigin", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "boneCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::InputSkeletalActionData_t::InputSkeletalActionData_t(bool bActive, uint64_t activeOrigin, uint32_t boneCount) noexcept : ::bs_hook::ValueTypeWrapper() {this->bActive = bActive;
this->activeOrigin = activeOrigin;
this->boneCount = boneCount;
}
constexpr void ::OVR::OpenVR::InputSkeletalActionData_t::__set_bActive(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::OVR::OpenVR::InputSkeletalActionData_t::__get_bActive() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void ::OVR::OpenVR::InputSkeletalActionData_t::__set_activeOrigin(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::OVR::OpenVR::InputSkeletalActionData_t::__get_activeOrigin() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->__instance);
}
constexpr void ::OVR::OpenVR::InputSkeletalActionData_t::__set_boneCount(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::InputSkeletalActionData_t::__get_boneCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->__instance);
}
} // end anonymous namespace
