// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightPairRotationEventEffect
#include "GlobalNamespace/LightPairRotationEventEffect.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightPairRotationEventEffect::RotationData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightPairRotationEventEffect::RotationData*, "", "LightPairRotationEventEffect/RotationData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: LightPairRotationEventEffect/RotationData
  // [TokenAttribute] Offset: FFFFFFFF
  class LightPairRotationEventEffect::RotationData : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean enabled
    // Size: 0x1
    // Offset: 0x10
    bool enabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: enabled and: rotationSpeed
    char __padding0[0x3] = {};
    // public System.Single rotationSpeed
    // Size: 0x4
    // Offset: 0x14
    float rotationSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Quaternion startRotation
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::Quaternion startRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Transform transform
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Single startRotationAngle
    // Size: 0x4
    // Offset: 0x30
    float startRotationAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotationAngle
    // Size: 0x4
    // Offset: 0x34
    float rotationAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Boolean enabled
    [[deprecated("Use field access instead!")]] bool& dyn_enabled();
    // Get instance field reference: public System.Single rotationSpeed
    [[deprecated("Use field access instead!")]] float& dyn_rotationSpeed();
    // Get instance field reference: public UnityEngine.Quaternion startRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_startRotation();
    // Get instance field reference: public UnityEngine.Transform transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_transform();
    // Get instance field reference: public System.Single startRotationAngle
    [[deprecated("Use field access instead!")]] float& dyn_startRotationAngle();
    // Get instance field reference: public System.Single rotationAngle
    [[deprecated("Use field access instead!")]] float& dyn_rotationAngle();
    // public System.Void .ctor()
    // Offset: 0x1512468
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightPairRotationEventEffect::RotationData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightPairRotationEventEffect::RotationData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightPairRotationEventEffect::RotationData*, creationType>()));
    }
  }; // LightPairRotationEventEffect/RotationData
  #pragma pack(pop)
  static check_size<sizeof(LightPairRotationEventEffect::RotationData), 52 + sizeof(float)> __GlobalNamespace_LightPairRotationEventEffect_RotationDataSizeCheck;
  static_assert(sizeof(LightPairRotationEventEffect::RotationData) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightPairRotationEventEffect::RotationData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
