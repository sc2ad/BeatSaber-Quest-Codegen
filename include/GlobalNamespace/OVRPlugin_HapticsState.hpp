// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/HapticsState
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::HapticsState/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.Int32 SamplesAvailable
    // Size: 0x4
    // Offset: 0x0
    int SamplesAvailable;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 SamplesQueued
    // Size: 0x4
    // Offset: 0x4
    int SamplesQueued;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HapticsState
    constexpr HapticsState(int SamplesAvailable_ = {}, int SamplesQueued_ = {}) noexcept : SamplesAvailable{SamplesAvailable_}, SamplesQueued{SamplesQueued_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 SamplesAvailable
    int& dyn_SamplesAvailable();
    // Get instance field reference: public System.Int32 SamplesQueued
    int& dyn_SamplesQueued();
  }; // OVRPlugin/HapticsState
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::HapticsState), 4 + sizeof(int)> __GlobalNamespace_OVRPlugin_HapticsStateSizeCheck;
  static_assert(sizeof(OVRPlugin::HapticsState) == 0x8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::HapticsState, "", "OVRPlugin/HapticsState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
