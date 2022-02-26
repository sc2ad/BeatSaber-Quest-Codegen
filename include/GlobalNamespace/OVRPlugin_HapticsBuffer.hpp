// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::HapticsBuffer, "", "OVRPlugin/HapticsBuffer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/HapticsBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::HapticsBuffer/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.IntPtr Samples
    // Size: 0x8
    // Offset: 0x0
    ::System::IntPtr Samples;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // public System.Int32 SamplesCount
    // Size: 0x4
    // Offset: 0x8
    int SamplesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HapticsBuffer
    constexpr HapticsBuffer(::System::IntPtr Samples_ = {}, int SamplesCount_ = {}) noexcept : Samples{Samples_}, SamplesCount{SamplesCount_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.IntPtr Samples
    ::System::IntPtr& dyn_Samples();
    // Get instance field reference: public System.Int32 SamplesCount
    int& dyn_SamplesCount();
  }; // OVRPlugin/HapticsBuffer
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::HapticsBuffer), 8 + sizeof(int)> __GlobalNamespace_OVRPlugin_HapticsBufferSizeCheck;
  static_assert(sizeof(OVRPlugin::HapticsBuffer) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
