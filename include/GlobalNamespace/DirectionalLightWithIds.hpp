// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RuntimeLightWithIds
#include "GlobalNamespace/RuntimeLightWithIds.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DirectionalLight
  class DirectionalLight;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: DirectionalLightWithIds
  // [TokenAttribute] Offset: FFFFFFFF
  class DirectionalLightWithIds : public GlobalNamespace::RuntimeLightWithIds {
    public:
    // Writing base type padding for base size: 0x39 to desired offset: 0x40
    char ___base_padding[0x7] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private DirectionalLight _directionalLight
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::DirectionalLight* directionalLight;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DirectionalLight*) == 0x8);
    public:
    // Get instance field reference: private DirectionalLight _directionalLight
    GlobalNamespace::DirectionalLight*& dyn__directionalLight();
    // public System.Void .ctor()
    // Offset: 0x1E26A68
    // Implemented from: RuntimeLightWithIds
    // Base method: System.Void RuntimeLightWithIds::.ctor()
    // Base method: System.Void LightWithIds::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DirectionalLightWithIds* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DirectionalLightWithIds::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DirectionalLightWithIds*, creationType>()));
    }
    // protected override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x1E26A48
    // Implemented from: RuntimeLightWithIds
    // Base method: System.Void RuntimeLightWithIds::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(UnityEngine::Color color);
  }; // DirectionalLightWithIds
  #pragma pack(pop)
  static check_size<sizeof(DirectionalLightWithIds), 64 + sizeof(GlobalNamespace::DirectionalLight*)> __GlobalNamespace_DirectionalLightWithIdsSizeCheck;
  static_assert(sizeof(DirectionalLightWithIds) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DirectionalLightWithIds*, "", "DirectionalLightWithIds");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DirectionalLightWithIds::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DirectionalLightWithIds::ColorWasSet
// Il2CppName: ColorWasSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DirectionalLightWithIds::*)(UnityEngine::Color)>(&GlobalNamespace::DirectionalLightWithIds::ColorWasSet)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DirectionalLightWithIds*), "ColorWasSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
