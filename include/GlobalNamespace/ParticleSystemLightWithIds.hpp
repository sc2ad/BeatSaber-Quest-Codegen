// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RuntimeLightWithIds
#include "GlobalNamespace/RuntimeLightWithIds.hpp"
// Including type: UnityEngine.ParticleSystem/UnityEngine.MainModule
#include "UnityEngine/ParticleSystem_MainModule.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ParticleSystem because it is already included!
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ParticleSystemLightWithIds
  class ParticleSystemLightWithIds;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ParticleSystemLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParticleSystemLightWithIds*, "", "ParticleSystemLightWithIds");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: ParticleSystemLightWithIds
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class ParticleSystemLightWithIds : public ::GlobalNamespace::RuntimeLightWithIds {
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
    // private UnityEngine.ParticleSystem _particleSystem
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::ParticleSystem* particleSystem;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    // private System.Boolean _setOnlyOnce
    // Size: 0x1
    // Offset: 0x50
    bool setOnlyOnce;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _setColorOnly
    // Size: 0x1
    // Offset: 0x51
    bool setColorOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: setColorOnly and: minAlpha
    char __padding2[0x2] = {};
    // [DrawIfAttribute] Offset: 0x1239060
    // private System.Single _minAlpha
    // Size: 0x4
    // Offset: 0x54
    float minAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.ParticleSystem/UnityEngine.MainModule _mainModule
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::ParticleSystem::MainModule mainModule;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem::MainModule) == 0x8);
    // private UnityEngine.ParticleSystem/UnityEngine.Particle[] _particles
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<::UnityEngine::ParticleSystem::Particle> particles;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::ParticleSystem::Particle>) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.ParticleSystem _particleSystem
    ::UnityEngine::ParticleSystem*& dyn__particleSystem();
    // Get instance field reference: private System.Boolean _setOnlyOnce
    bool& dyn__setOnlyOnce();
    // Get instance field reference: private System.Boolean _setColorOnly
    bool& dyn__setColorOnly();
    // Get instance field reference: private System.Single _minAlpha
    float& dyn__minAlpha();
    // Get instance field reference: private UnityEngine.ParticleSystem/UnityEngine.MainModule _mainModule
    ::UnityEngine::ParticleSystem::MainModule& dyn__mainModule();
    // Get instance field reference: private UnityEngine.ParticleSystem/UnityEngine.Particle[] _particles
    ::ArrayW<::UnityEngine::ParticleSystem::Particle>& dyn__particles();
    // public System.Void .ctor()
    // Offset: 0x2AD85D8
    // Implemented from: RuntimeLightWithIds
    // Base method: System.Void RuntimeLightWithIds::.ctor()
    // Base method: System.Void LightWithIds::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParticleSystemLightWithIds* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ParticleSystemLightWithIds::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParticleSystemLightWithIds*, creationType>()));
    }
    // protected override System.Void Awake()
    // Offset: 0x2AD82E8
    // Implemented from: RuntimeLightWithIds
    // Base method: System.Void RuntimeLightWithIds::Awake()
    void Awake();
    // protected override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x2AD8380
    // Implemented from: RuntimeLightWithIds
    // Base method: System.Void RuntimeLightWithIds::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(::UnityEngine::Color color);
  }; // ParticleSystemLightWithIds
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystemLightWithIds), 96 + sizeof(::ArrayW<::UnityEngine::ParticleSystem::Particle>)> __GlobalNamespace_ParticleSystemLightWithIdsSizeCheck;
  static_assert(sizeof(ParticleSystemLightWithIds) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemLightWithIds::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemLightWithIds::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemLightWithIds::*)()>(&GlobalNamespace::ParticleSystemLightWithIds::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleSystemLightWithIds*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemLightWithIds::ColorWasSet
// Il2CppName: ColorWasSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemLightWithIds::*)(::UnityEngine::Color)>(&GlobalNamespace::ParticleSystemLightWithIds::ColorWasSet)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleSystemLightWithIds*), "ColorWasSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
