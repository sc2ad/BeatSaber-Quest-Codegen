// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightGroupSubsystem
#include "GlobalNamespace/LightGroupSubsystem.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LightGroupLinearLayouter
  class LightGroupLinearLayouter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightGroupLinearLayouter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupLinearLayouter*, "", "LightGroupLinearLayouter");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2D
  #pragma pack(push, 1)
  // Autogenerated type: LightGroupLinearLayouter
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class LightGroupLinearLayouter : public ::GlobalNamespace::LightGroupSubsystem {
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
    // [SpaceAttribute] Offset: 0x1251218
    // private UnityEngine.Vector3 _movementStep
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 movementStep;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean _startFromCenter
    // Size: 0x1
    // Offset: 0x2C
    bool startFromCenter;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.Vector3 _movementStep
    ::UnityEngine::Vector3& dyn__movementStep();
    // Get instance field reference: private System.Boolean _startFromCenter
    bool& dyn__startFromCenter();
    // public System.Void .ctor()
    // Offset: 0x148CB6C
    // Implemented from: LightGroupSubsystem
    // Base method: System.Void LightGroupSubsystem::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightGroupLinearLayouter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightGroupLinearLayouter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightGroupLinearLayouter*, creationType>()));
    }
  }; // LightGroupLinearLayouter
  #pragma pack(pop)
  static check_size<sizeof(LightGroupLinearLayouter), 44 + sizeof(bool)> __GlobalNamespace_LightGroupLinearLayouterSizeCheck;
  static_assert(sizeof(LightGroupLinearLayouter) == 0x2D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightGroupLinearLayouter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!