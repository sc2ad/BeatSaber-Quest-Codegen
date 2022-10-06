// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RuntimeLightWithIds
#include "GlobalNamespace/RuntimeLightWithIds.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DirectionalLight
  class DirectionalLight;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DirectionalLightWithIds
  class DirectionalLightWithIds;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DirectionalLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DirectionalLightWithIds*, "", "DirectionalLightWithIds");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x64
  #pragma pack(push, 1)
  // Autogenerated type: DirectionalLightWithIds
  // [TokenAttribute] Offset: FFFFFFFF
  class DirectionalLightWithIds : public ::GlobalNamespace::RuntimeLightWithIds {
    public:
    public:
    // private DirectionalLight _directionalLight
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::DirectionalLight* directionalLight;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DirectionalLight*) == 0x8);
    // private System.Boolean _setIntensityOnly
    // Size: 0x1
    // Offset: 0x50
    bool setIntensityOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: setIntensityOnly and: defaultColor
    char __padding1[0x3] = {};
    // [DrawIfAttribute] Offset: 0x10E6118
    // private UnityEngine.Color _defaultColor
    // Size: 0x10
    // Offset: 0x54
    ::UnityEngine::Color defaultColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Get instance field reference: private DirectionalLight _directionalLight
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DirectionalLight*& dyn__directionalLight();
    // Get instance field reference: private System.Boolean _setIntensityOnly
    [[deprecated("Use field access instead!")]] bool& dyn__setIntensityOnly();
    // Get instance field reference: private UnityEngine.Color _defaultColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__defaultColor();
    // public System.Void .ctor()
    // Offset: 0x1CFEAA8
    // Implemented from: RuntimeLightWithIds
    // Base method: System.Void RuntimeLightWithIds::.ctor()
    // Base method: System.Void LightWithIds::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DirectionalLightWithIds* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DirectionalLightWithIds::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DirectionalLightWithIds*, creationType>()));
    }
    // protected override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x1CFEA58
    // Implemented from: RuntimeLightWithIds
    // Base method: System.Void RuntimeLightWithIds::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(::UnityEngine::Color color);
  }; // DirectionalLightWithIds
  #pragma pack(pop)
  static check_size<sizeof(DirectionalLightWithIds), 84 + sizeof(::UnityEngine::Color)> __GlobalNamespace_DirectionalLightWithIdsSizeCheck;
  static_assert(sizeof(DirectionalLightWithIds) == 0x64);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DirectionalLightWithIds::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DirectionalLightWithIds::ColorWasSet
// Il2CppName: ColorWasSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DirectionalLightWithIds::*)(::UnityEngine::Color)>(&GlobalNamespace::DirectionalLightWithIds::ColorWasSet)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DirectionalLightWithIds*), "ColorWasSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
