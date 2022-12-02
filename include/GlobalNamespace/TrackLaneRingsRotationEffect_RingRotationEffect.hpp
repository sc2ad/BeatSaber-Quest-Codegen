// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TrackLaneRingsRotationEffect
#include "GlobalNamespace/TrackLaneRingsRotationEffect.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TrackLaneRingsRotationEffect::RingRotationEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrackLaneRingsRotationEffect::RingRotationEffect*, "", "TrackLaneRingsRotationEffect/RingRotationEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: TrackLaneRingsRotationEffect/RingRotationEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class TrackLaneRingsRotationEffect::RingRotationEffect : public ::Il2CppObject {
    public:
    public:
    // public System.Single rotationAngle
    // Size: 0x4
    // Offset: 0x10
    float rotationAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotationStep
    // Size: 0x4
    // Offset: 0x14
    float rotationStep;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotationFlexySpeed
    // Size: 0x4
    // Offset: 0x18
    float rotationFlexySpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 rotationPropagationSpeed
    // Size: 0x4
    // Offset: 0x1C
    int rotationPropagationSpeed;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 progressPos
    // Size: 0x4
    // Offset: 0x20
    int progressPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Single rotationAngle
    [[deprecated("Use field access instead!")]] float& dyn_rotationAngle();
    // Get instance field reference: public System.Single rotationStep
    [[deprecated("Use field access instead!")]] float& dyn_rotationStep();
    // Get instance field reference: public System.Single rotationFlexySpeed
    [[deprecated("Use field access instead!")]] float& dyn_rotationFlexySpeed();
    // Get instance field reference: public System.Int32 rotationPropagationSpeed
    [[deprecated("Use field access instead!")]] int& dyn_rotationPropagationSpeed();
    // Get instance field reference: public System.Int32 progressPos
    [[deprecated("Use field access instead!")]] int& dyn_progressPos();
    // public System.Void .ctor()
    // Offset: 0x13B935C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackLaneRingsRotationEffect::RingRotationEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TrackLaneRingsRotationEffect::RingRotationEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackLaneRingsRotationEffect::RingRotationEffect*, creationType>()));
    }
  }; // TrackLaneRingsRotationEffect/RingRotationEffect
  #pragma pack(pop)
  static check_size<sizeof(TrackLaneRingsRotationEffect::RingRotationEffect), 32 + sizeof(int)> __GlobalNamespace_TrackLaneRingsRotationEffect_RingRotationEffectSizeCheck;
  static_assert(sizeof(TrackLaneRingsRotationEffect::RingRotationEffect) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsRotationEffect::RingRotationEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
