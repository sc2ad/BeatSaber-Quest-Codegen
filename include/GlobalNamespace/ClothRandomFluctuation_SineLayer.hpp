// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ClothRandomFluctuation
#include "GlobalNamespace/ClothRandomFluctuation.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ClothRandomFluctuation::SineLayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ClothRandomFluctuation::SineLayer*, "", "ClothRandomFluctuation/SineLayer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: ClothRandomFluctuation/SineLayer
  // [TokenAttribute] Offset: FFFFFFFF
  class ClothRandomFluctuation::SineLayer : public ::Il2CppObject {
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
    // public System.Single multiplier
    // Size: 0x4
    // Offset: 0x10
    float multiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single offset
    // Size: 0x4
    // Offset: 0x14
    float offset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single multiplier
    float& dyn_multiplier();
    // Get instance field reference: public System.Single offset
    float& dyn_offset();
    // public System.Void .ctor()
    // Offset: 0x13550A8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClothRandomFluctuation::SineLayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ClothRandomFluctuation::SineLayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClothRandomFluctuation::SineLayer*, creationType>()));
    }
  }; // ClothRandomFluctuation/SineLayer
  #pragma pack(pop)
  static check_size<sizeof(ClothRandomFluctuation::SineLayer), 20 + sizeof(float)> __GlobalNamespace_ClothRandomFluctuation_SineLayerSizeCheck;
  static_assert(sizeof(ClothRandomFluctuation::SineLayer) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ClothRandomFluctuation::SineLayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
