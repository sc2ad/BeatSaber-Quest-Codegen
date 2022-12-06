// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MainEffectCore
  class MainEffectCore;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MainEffectCore);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainEffectCore*, "", "MainEffectCore");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MainEffectCore
  // [TokenAttribute] Offset: FFFFFFFF
  class MainEffectCore : public ::Il2CppObject {
    public:
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1107700
    // Get static field: static private readonly System.Int32 _baseColorBoostID
    static int _get__baseColorBoostID();
    // Set static field: static private readonly System.Int32 _baseColorBoostID
    static void _set__baseColorBoostID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1107710
    // Get static field: static private readonly System.Int32 _baseColorBoostThresholdID
    static int _get__baseColorBoostThresholdID();
    // Set static field: static private readonly System.Int32 _baseColorBoostThresholdID
    static void _set__baseColorBoostThresholdID(int value);
    // public System.Void .ctor()
    // Offset: 0x2ACD634
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainEffectCore* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MainEffectCore::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainEffectCore*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x2ACD63C
    static void _cctor();
    // static public System.Void SetGlobalShaderValues(System.Single baseColorBoost, System.Single baseColorBoostThreshold)
    // Offset: 0x2ACCA20
    static void SetGlobalShaderValues(float baseColorBoost, float baseColorBoostThreshold);
  }; // MainEffectCore
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MainEffectCore::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MainEffectCore::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::MainEffectCore::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainEffectCore*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainEffectCore::SetGlobalShaderValues
// Il2CppName: SetGlobalShaderValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float, float)>(&GlobalNamespace::MainEffectCore::SetGlobalShaderValues)> {
  static const MethodInfo* get() {
    static auto* baseColorBoost = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* baseColorBoostThreshold = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainEffectCore*), "SetGlobalShaderValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{baseColorBoost, baseColorBoostThreshold});
  }
};
