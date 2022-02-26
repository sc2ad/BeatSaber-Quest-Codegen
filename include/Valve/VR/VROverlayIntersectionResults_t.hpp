// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.HmdVector3_t
#include "Valve/VR/HmdVector3_t.hpp"
// Including type: Valve.VR.HmdVector2_t
#include "Valve/VR/HmdVector2_t.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: VROverlayIntersectionResults_t
  struct VROverlayIntersectionResults_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::VROverlayIntersectionResults_t, "Valve.VR", "VROverlayIntersectionResults_t");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VROverlayIntersectionResults_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VROverlayIntersectionResults_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public Valve.VR.HmdVector3_t vPoint
    // Size: 0xC
    // Offset: 0x0
    ::Valve::VR::HmdVector3_t vPoint;
    // Field size check
    static_assert(sizeof(::Valve::VR::HmdVector3_t) == 0xC);
    // public Valve.VR.HmdVector3_t vNormal
    // Size: 0xC
    // Offset: 0xC
    ::Valve::VR::HmdVector3_t vNormal;
    // Field size check
    static_assert(sizeof(::Valve::VR::HmdVector3_t) == 0xC);
    // public Valve.VR.HmdVector2_t vUVs
    // Size: 0x8
    // Offset: 0x18
    ::Valve::VR::HmdVector2_t vUVs;
    // Field size check
    static_assert(sizeof(::Valve::VR::HmdVector2_t) == 0x8);
    // public System.Single fDistance
    // Size: 0x4
    // Offset: 0x20
    float fDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: VROverlayIntersectionResults_t
    constexpr VROverlayIntersectionResults_t(::Valve::VR::HmdVector3_t vPoint_ = {}, ::Valve::VR::HmdVector3_t vNormal_ = {}, ::Valve::VR::HmdVector2_t vUVs_ = {}, float fDistance_ = {}) noexcept : vPoint{vPoint_}, vNormal{vNormal_}, vUVs{vUVs_}, fDistance{fDistance_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public Valve.VR.HmdVector3_t vPoint
    ::Valve::VR::HmdVector3_t& dyn_vPoint();
    // Get instance field reference: public Valve.VR.HmdVector3_t vNormal
    ::Valve::VR::HmdVector3_t& dyn_vNormal();
    // Get instance field reference: public Valve.VR.HmdVector2_t vUVs
    ::Valve::VR::HmdVector2_t& dyn_vUVs();
    // Get instance field reference: public System.Single fDistance
    float& dyn_fDistance();
  }; // Valve.VR.VROverlayIntersectionResults_t
  #pragma pack(pop)
  static check_size<sizeof(VROverlayIntersectionResults_t), 32 + sizeof(float)> __Valve_VR_VROverlayIntersectionResults_tSizeCheck;
  static_assert(sizeof(VROverlayIntersectionResults_t) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
