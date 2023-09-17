#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__EHiddenAreaMeshType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EHiddenAreaMeshType::EHiddenAreaMeshType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::OVR::OpenVR::EHiddenAreaMeshType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::EHiddenAreaMeshType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::OVR::OpenVR::EHiddenAreaMeshType  ::OVR::OpenVR::EHiddenAreaMeshType::k_eHiddenAreaMesh_Standard{0};
constexpr ::OVR::OpenVR::EHiddenAreaMeshType  ::OVR::OpenVR::EHiddenAreaMeshType::k_eHiddenAreaMesh_Inverse{1};
constexpr ::OVR::OpenVR::EHiddenAreaMeshType  ::OVR::OpenVR::EHiddenAreaMeshType::k_eHiddenAreaMesh_LineLoop{2};
constexpr ::OVR::OpenVR::EHiddenAreaMeshType  ::OVR::OpenVR::EHiddenAreaMeshType::k_eHiddenAreaMesh_Max{3};
} // end anonymous namespace
