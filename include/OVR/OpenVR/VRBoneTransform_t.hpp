// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.HmdVector4_t
#include "OVR/OpenVR/HmdVector4_t.hpp"
// Including type: OVR.OpenVR.HmdQuaternionf_t
#include "OVR/OpenVR/HmdQuaternionf_t.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.VRBoneTransform_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VRBoneTransform_t/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public OVR.OpenVR.HmdVector4_t position
    // Size: 0x10
    // Offset: 0x0
    OVR::OpenVR::HmdVector4_t position;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::HmdVector4_t) == 0x10);
    // public OVR.OpenVR.HmdQuaternionf_t orientation
    // Size: 0x10
    // Offset: 0x10
    OVR::OpenVR::HmdQuaternionf_t orientation;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::HmdQuaternionf_t) == 0x10);
    public:
    // Creating value type constructor for type: VRBoneTransform_t
    constexpr VRBoneTransform_t(OVR::OpenVR::HmdVector4_t position_ = {}, OVR::OpenVR::HmdQuaternionf_t orientation_ = {}) noexcept : position{position_}, orientation{orientation_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public OVR.OpenVR.HmdVector4_t position
    OVR::OpenVR::HmdVector4_t& dyn_position();
    // Get instance field reference: public OVR.OpenVR.HmdQuaternionf_t orientation
    OVR::OpenVR::HmdQuaternionf_t& dyn_orientation();
  }; // OVR.OpenVR.VRBoneTransform_t
  #pragma pack(pop)
  static check_size<sizeof(VRBoneTransform_t), 16 + sizeof(OVR::OpenVR::HmdQuaternionf_t)> __OVR_OpenVR_VRBoneTransform_tSizeCheck;
  static_assert(sizeof(VRBoneTransform_t) == 0x20);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VRBoneTransform_t, "OVR.OpenVR", "VRBoneTransform_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
