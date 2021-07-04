// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: DroneHover
#include "GlobalNamespace/DroneHover.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: DroneHover/SineLayer
  class DroneHover::SineLayer : public ::Il2CppObject {
    public:
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
    // Creating value type constructor for type: SineLayer
    SineLayer(float multiplier_ = {}, float offset_ = {}) noexcept : multiplier{multiplier_}, offset{offset_} {}
    // public System.Void .ctor()
    // Offset: 0x10380B8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DroneHover::SineLayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DroneHover::SineLayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DroneHover::SineLayer*, creationType>()));
    }
  }; // DroneHover/SineLayer
  #pragma pack(pop)
  static check_size<sizeof(DroneHover::SineLayer), 20 + sizeof(float)> __GlobalNamespace_DroneHover_SineLayerSizeCheck;
  static_assert(sizeof(DroneHover::SineLayer) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DroneHover::SineLayer*, "", "DroneHover/SineLayer");
// Writing MetadataGetter for method: GlobalNamespace::DroneHover::SineLayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!