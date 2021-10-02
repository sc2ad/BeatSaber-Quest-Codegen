// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.HmdMatrix34_t
#include "Valve/VR/HmdMatrix34_t.hpp"
// Including type: Valve.VR.HmdVector3_t
#include "Valve/VR/HmdVector3_t.hpp"
// Including type: Valve.VR.ETrackingResult
#include "Valve/VR/ETrackingResult.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4E
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.TrackedDevicePose_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct TrackedDevicePose_t/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public Valve.VR.HmdMatrix34_t mDeviceToAbsoluteTracking
    // Size: 0x30
    // Offset: 0x0
    Valve::VR::HmdMatrix34_t mDeviceToAbsoluteTracking;
    // Field size check
    static_assert(sizeof(Valve::VR::HmdMatrix34_t) == 0x30);
    // public Valve.VR.HmdVector3_t vVelocity
    // Size: 0xC
    // Offset: 0x30
    Valve::VR::HmdVector3_t vVelocity;
    // Field size check
    static_assert(sizeof(Valve::VR::HmdVector3_t) == 0xC);
    // public Valve.VR.HmdVector3_t vAngularVelocity
    // Size: 0xC
    // Offset: 0x3C
    Valve::VR::HmdVector3_t vAngularVelocity;
    // Field size check
    static_assert(sizeof(Valve::VR::HmdVector3_t) == 0xC);
    // public Valve.VR.ETrackingResult eTrackingResult
    // Size: 0x4
    // Offset: 0x48
    Valve::VR::ETrackingResult eTrackingResult;
    // Field size check
    static_assert(sizeof(Valve::VR::ETrackingResult) == 0x4);
    // public System.Boolean bPoseIsValid
    // Size: 0x1
    // Offset: 0x4C
    bool bPoseIsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean bDeviceIsConnected
    // Size: 0x1
    // Offset: 0x4D
    bool bDeviceIsConnected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: TrackedDevicePose_t
    constexpr TrackedDevicePose_t(Valve::VR::HmdMatrix34_t mDeviceToAbsoluteTracking_ = {}, Valve::VR::HmdVector3_t vVelocity_ = {}, Valve::VR::HmdVector3_t vAngularVelocity_ = {}, Valve::VR::ETrackingResult eTrackingResult_ = {}, bool bPoseIsValid_ = {}, bool bDeviceIsConnected_ = {}) noexcept : mDeviceToAbsoluteTracking{mDeviceToAbsoluteTracking_}, vVelocity{vVelocity_}, vAngularVelocity{vAngularVelocity_}, eTrackingResult{eTrackingResult_}, bPoseIsValid{bPoseIsValid_}, bDeviceIsConnected{bDeviceIsConnected_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public Valve.VR.HmdMatrix34_t mDeviceToAbsoluteTracking
    Valve::VR::HmdMatrix34_t& dyn_mDeviceToAbsoluteTracking();
    // Get instance field reference: public Valve.VR.HmdVector3_t vVelocity
    Valve::VR::HmdVector3_t& dyn_vVelocity();
    // Get instance field reference: public Valve.VR.HmdVector3_t vAngularVelocity
    Valve::VR::HmdVector3_t& dyn_vAngularVelocity();
    // Get instance field reference: public Valve.VR.ETrackingResult eTrackingResult
    Valve::VR::ETrackingResult& dyn_eTrackingResult();
    // Get instance field reference: public System.Boolean bPoseIsValid
    bool& dyn_bPoseIsValid();
    // Get instance field reference: public System.Boolean bDeviceIsConnected
    bool& dyn_bDeviceIsConnected();
  }; // Valve.VR.TrackedDevicePose_t
  #pragma pack(pop)
  static check_size<sizeof(TrackedDevicePose_t), 77 + sizeof(bool)> __Valve_VR_TrackedDevicePose_tSizeCheck;
  static_assert(sizeof(TrackedDevicePose_t) == 0x4E);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::TrackedDevicePose_t, "Valve.VR", "TrackedDevicePose_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
