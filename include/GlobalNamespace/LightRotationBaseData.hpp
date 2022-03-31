// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: EaseType
#include "GlobalNamespace/EaseType.hpp"
// Including type: LightRotationDirection
#include "GlobalNamespace/LightRotationDirection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LightRotationBaseData
  class LightRotationBaseData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightRotationBaseData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationBaseData*, "", "LightRotationBaseData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: LightRotationBaseData
  // [TokenAttribute] Offset: FFFFFFFF
  class LightRotationBaseData : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public readonly System.Single beat
    // Size: 0x4
    // Offset: 0x10
    float beat;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Boolean usePreviousEventRotationValue
    // Size: 0x1
    // Offset: 0x14
    bool usePreviousEventRotationValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: usePreviousEventRotationValue and: easeType
    char __padding1[0x3] = {};
    // public readonly EaseType easeType
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::EaseType easeType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EaseType) == 0x4);
    // public readonly System.Single rotation
    // Size: 0x4
    // Offset: 0x1C
    float rotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Int32 loopsCount
    // Size: 0x4
    // Offset: 0x20
    int loopsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly LightRotationDirection rotationDirection
    // Size: 0x4
    // Offset: 0x24
    ::GlobalNamespace::LightRotationDirection rotationDirection;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LightRotationDirection) == 0x4);
    public:
    // Get instance field reference: public readonly System.Single beat
    float& dyn_beat();
    // Get instance field reference: public readonly System.Boolean usePreviousEventRotationValue
    bool& dyn_usePreviousEventRotationValue();
    // Get instance field reference: public readonly EaseType easeType
    ::GlobalNamespace::EaseType& dyn_easeType();
    // Get instance field reference: public readonly System.Single rotation
    float& dyn_rotation();
    // Get instance field reference: public readonly System.Int32 loopsCount
    int& dyn_loopsCount();
    // Get instance field reference: public readonly LightRotationDirection rotationDirection
    ::GlobalNamespace::LightRotationDirection& dyn_rotationDirection();
    // public System.Void .ctor(System.Single beat, System.Boolean usePreviousEventRotationValue, EaseType easeType, System.Single rotation, System.Int32 loopsCount, LightRotationDirection rotationDirection)
    // Offset: 0x148E44C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightRotationBaseData* New_ctor(float beat, bool usePreviousEventRotationValue, ::GlobalNamespace::EaseType easeType, float rotation, int loopsCount, ::GlobalNamespace::LightRotationDirection rotationDirection) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightRotationBaseData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightRotationBaseData*, creationType>(beat, usePreviousEventRotationValue, easeType, rotation, loopsCount, rotationDirection)));
    }
    // public System.Void .ctor(System.Single beat, System.Boolean usePreviousEventRotationValue)
    // Offset: 0x148E4C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightRotationBaseData* New_ctor(float beat, bool usePreviousEventRotationValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightRotationBaseData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightRotationBaseData*, creationType>(beat, usePreviousEventRotationValue)));
    }
  }; // LightRotationBaseData
  #pragma pack(pop)
  static check_size<sizeof(LightRotationBaseData), 36 + sizeof(::GlobalNamespace::LightRotationDirection)> __GlobalNamespace_LightRotationBaseDataSizeCheck;
  static_assert(sizeof(LightRotationBaseData) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightRotationBaseData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LightRotationBaseData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
