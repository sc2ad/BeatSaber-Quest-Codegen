// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: VREvent_PerformanceTest_t
  struct VREvent_PerformanceTest_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_PerformanceTest_t, "OVR.OpenVR", "VREvent_PerformanceTest_t");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.VREvent_PerformanceTest_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_PerformanceTest_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 m_nFidelityLevel
    // Size: 0x4
    // Offset: 0x0
    uint m_nFidelityLevel;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: VREvent_PerformanceTest_t
    constexpr VREvent_PerformanceTest_t(uint m_nFidelityLevel_ = {}) noexcept : m_nFidelityLevel{m_nFidelityLevel_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return m_nFidelityLevel;
    }
    // Get instance field reference: public System.UInt32 m_nFidelityLevel
    uint& dyn_m_nFidelityLevel();
  }; // OVR.OpenVR.VREvent_PerformanceTest_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_PerformanceTest_t), 0 + sizeof(uint)> __OVR_OpenVR_VREvent_PerformanceTest_tSizeCheck;
  static_assert(sizeof(VREvent_PerformanceTest_t) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
