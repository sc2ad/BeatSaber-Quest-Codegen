// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.VREvent_Ipd_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_Ipd_t/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.Single ipdMeters
    // Size: 0x4
    // Offset: 0x0
    float ipdMeters;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: VREvent_Ipd_t
    constexpr VREvent_Ipd_t(float ipdMeters_ = {}) noexcept : ipdMeters{ipdMeters_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return ipdMeters;
    }
    // Get instance field reference: public System.Single ipdMeters
    float& dyn_ipdMeters();
  }; // OVR.OpenVR.VREvent_Ipd_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_Ipd_t), 0 + sizeof(float)> __OVR_OpenVR_VREvent_Ipd_tSizeCheck;
  static_assert(sizeof(VREvent_Ipd_t) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_Ipd_t, "OVR.OpenVR", "VREvent_Ipd_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
