// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightWithIds
#include "GlobalNamespace/LightWithIds.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: RuntimeLightWithIds
  // [TokenAttribute] Offset: FFFFFFFF
  class RuntimeLightWithIds : public GlobalNamespace::LightWithIds {
    public:
    // Writing base type padding for base size: 0x21 to desired offset: 0x28
    char ___base_padding[0x7] = {};
    // Nested type: GlobalNamespace::RuntimeLightWithIds::LightIntensitiesData
    class LightIntensitiesData;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private RuntimeLightWithIds/LightIntensitiesData[] _lightIntensityData
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<GlobalNamespace::RuntimeLightWithIds::LightIntensitiesData*> lightIntensityData;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::RuntimeLightWithIds::LightIntensitiesData*>) == 0x8);
    // [SpaceAttribute] Offset: 0xEDF6C8
    // private System.Single _intensity
    // Size: 0x4
    // Offset: 0x30
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxIntensity
    // Size: 0x4
    // Offset: 0x34
    float maxIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _multiplyColorByAlpha
    // Size: 0x1
    // Offset: 0x38
    bool multiplyColorByAlpha;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private RuntimeLightWithIds/LightIntensitiesData[] _lightIntensityData
    ::ArrayW<GlobalNamespace::RuntimeLightWithIds::LightIntensitiesData*>& dyn__lightIntensityData();
    // Get instance field reference: private System.Single _intensity
    float& dyn__intensity();
    // Get instance field reference: private System.Single _maxIntensity
    float& dyn__maxIntensity();
    // Get instance field reference: private System.Boolean _multiplyColorByAlpha
    bool& dyn__multiplyColorByAlpha();
    // protected System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0xFFFFFFFF
    void ColorWasSet(UnityEngine::Color color);
    // private UnityEngine.Color ProcessColor(UnityEngine.Color color, System.Single intensity)
    // Offset: 0x1E2FE5C
    UnityEngine::Color ProcessColor(UnityEngine::Color color, float intensity);
    // protected override System.Collections.Generic.IEnumerable`1<LightWithIds/LightData> get_lightIntensityData()
    // Offset: 0x1E2FC68
    // Implemented from: LightWithIds
    // Base method: System.Collections.Generic.IEnumerable`1<LightWithIds/LightData> LightWithIds::get_lightIntensityData()
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::LightWithIds::LightData*>* get_lightIntensityData();
    // protected System.Void .ctor()
    // Offset: 0x1E23100
    // Implemented from: LightWithIds
    // Base method: System.Void LightWithIds::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeLightWithIds* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RuntimeLightWithIds::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeLightWithIds*, creationType>()));
    }
    // protected override System.Void HandleLightManagerDidChangeSomeColorsThisFrame()
    // Offset: 0x1E2FC70
    // Implemented from: LightWithIds
    // Base method: System.Void LightWithIds::HandleLightManagerDidChangeSomeColorsThisFrame()
    void HandleLightManagerDidChangeSomeColorsThisFrame();
  }; // RuntimeLightWithIds
  #pragma pack(pop)
  static check_size<sizeof(RuntimeLightWithIds), 56 + sizeof(bool)> __GlobalNamespace_RuntimeLightWithIdsSizeCheck;
  static_assert(sizeof(RuntimeLightWithIds) == 0x39);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RuntimeLightWithIds*, "", "RuntimeLightWithIds");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RuntimeLightWithIds::ColorWasSet
// Il2CppName: ColorWasSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RuntimeLightWithIds::*)(UnityEngine::Color)>(&GlobalNamespace::RuntimeLightWithIds::ColorWasSet)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RuntimeLightWithIds*), "ColorWasSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RuntimeLightWithIds::ProcessColor
// Il2CppName: ProcessColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::RuntimeLightWithIds::*)(UnityEngine::Color, float)>(&GlobalNamespace::RuntimeLightWithIds::ProcessColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* intensity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RuntimeLightWithIds*), "ProcessColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, intensity});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RuntimeLightWithIds::get_lightIntensityData
// Il2CppName: get_lightIntensityData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::LightWithIds::LightData*>* (GlobalNamespace::RuntimeLightWithIds::*)()>(&GlobalNamespace::RuntimeLightWithIds::get_lightIntensityData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RuntimeLightWithIds*), "get_lightIntensityData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RuntimeLightWithIds::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::RuntimeLightWithIds::HandleLightManagerDidChangeSomeColorsThisFrame
// Il2CppName: HandleLightManagerDidChangeSomeColorsThisFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RuntimeLightWithIds::*)()>(&GlobalNamespace::RuntimeLightWithIds::HandleLightManagerDidChangeSomeColorsThisFrame)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RuntimeLightWithIds*), "HandleLightManagerDidChangeSomeColorsThisFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
