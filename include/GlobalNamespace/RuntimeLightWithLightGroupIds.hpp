// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightWithIds
#include "GlobalNamespace/LightWithIds.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LightIdsRange
  class LightIdsRange;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RuntimeLightWithLightGroupIds
  class RuntimeLightWithLightGroupIds;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RuntimeLightWithLightGroupIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RuntimeLightWithLightGroupIds*, "", "RuntimeLightWithLightGroupIds");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: RuntimeLightWithLightGroupIds
  // [TokenAttribute] Offset: FFFFFFFF
  class RuntimeLightWithLightGroupIds : public ::GlobalNamespace::LightWithIds {
    public:
    // Writing base type padding for base size: 0x2A to desired offset: 0x30
    char ___base_padding[0x6] = {};
    // Nested type: ::GlobalNamespace::RuntimeLightWithLightGroupIds::LightIntensitiesWithId
    class LightIntensitiesWithId;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private LightIdsRange[] _lightIdsRangeList
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::GlobalNamespace::LightIdsRange*> lightIdsRangeList;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::LightIdsRange*>) == 0x8);
    // [SpaceAttribute] Offset: 0x123919C
    // private System.Single _intensity
    // Size: 0x4
    // Offset: 0x38
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxIntensity
    // Size: 0x4
    // Offset: 0x3C
    float maxIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _multiplyColorByAlpha
    // Size: 0x1
    // Offset: 0x40
    bool multiplyColorByAlpha;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: multiplyColorByAlpha and: lightIntensityData
    char __padding3[0x7] = {};
    // private RuntimeLightWithLightGroupIds/LightIntensitiesWithId[] _lightIntensityData
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::GlobalNamespace::RuntimeLightWithLightGroupIds::LightIntensitiesWithId*> lightIntensityData;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::RuntimeLightWithLightGroupIds::LightIntensitiesWithId*>) == 0x8);
    public:
    // Get instance field reference: private LightIdsRange[] _lightIdsRangeList
    ::ArrayW<::GlobalNamespace::LightIdsRange*>& dyn__lightIdsRangeList();
    // Get instance field reference: private System.Single _intensity
    float& dyn__intensity();
    // Get instance field reference: private System.Single _maxIntensity
    float& dyn__maxIntensity();
    // Get instance field reference: private System.Boolean _multiplyColorByAlpha
    bool& dyn__multiplyColorByAlpha();
    // Get instance field reference: private RuntimeLightWithLightGroupIds/LightIntensitiesWithId[] _lightIntensityData
    ::ArrayW<::GlobalNamespace::RuntimeLightWithLightGroupIds::LightIntensitiesWithId*>& dyn__lightIntensityData();
    // protected System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ColorWasSet(::UnityEngine::Color color);
    // protected System.Void Awake()
    // Offset: 0x2AD97AC
    void Awake();
    // private UnityEngine.Color ProcessColor(UnityEngine.Color color, System.Single intensity)
    // Offset: 0x2AD9BA0
    ::UnityEngine::Color ProcessColor(::UnityEngine::Color color, float intensity);
    // protected System.Void .ctor()
    // Offset: 0x2ACF868
    // Implemented from: LightWithIds
    // Base method: System.Void LightWithIds::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeLightWithLightGroupIds* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RuntimeLightWithLightGroupIds::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeLightWithLightGroupIds*, creationType>()));
    }
    // protected override System.Void ProcessNewColorData()
    // Offset: 0x2AD99B4
    // Implemented from: LightWithIds
    // Base method: System.Void LightWithIds::ProcessNewColorData()
    void ProcessNewColorData();
  }; // RuntimeLightWithLightGroupIds
  #pragma pack(pop)
  static check_size<sizeof(RuntimeLightWithLightGroupIds), 72 + sizeof(::ArrayW<::GlobalNamespace::RuntimeLightWithLightGroupIds::LightIntensitiesWithId*>)> __GlobalNamespace_RuntimeLightWithLightGroupIdsSizeCheck;
  static_assert(sizeof(RuntimeLightWithLightGroupIds) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RuntimeLightWithLightGroupIds::ColorWasSet
// Il2CppName: ColorWasSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RuntimeLightWithLightGroupIds::*)(::UnityEngine::Color)>(&GlobalNamespace::RuntimeLightWithLightGroupIds::ColorWasSet)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RuntimeLightWithLightGroupIds*), "ColorWasSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RuntimeLightWithLightGroupIds::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RuntimeLightWithLightGroupIds::*)()>(&GlobalNamespace::RuntimeLightWithLightGroupIds::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RuntimeLightWithLightGroupIds*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RuntimeLightWithLightGroupIds::ProcessColor
// Il2CppName: ProcessColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::RuntimeLightWithLightGroupIds::*)(::UnityEngine::Color, float)>(&GlobalNamespace::RuntimeLightWithLightGroupIds::ProcessColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* intensity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RuntimeLightWithLightGroupIds*), "ProcessColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, intensity});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RuntimeLightWithLightGroupIds::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::RuntimeLightWithLightGroupIds::ProcessNewColorData
// Il2CppName: ProcessNewColorData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RuntimeLightWithLightGroupIds::*)()>(&GlobalNamespace::RuntimeLightWithLightGroupIds::ProcessNewColorData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RuntimeLightWithLightGroupIds*), "ProcessNewColorData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};