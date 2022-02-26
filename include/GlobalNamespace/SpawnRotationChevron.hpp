// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightWithIdMonoBehaviour
#include "GlobalNamespace/LightWithIdMonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SpawnRotationChevron
  class SpawnRotationChevron;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SpawnRotationChevron);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpawnRotationChevron*, "", "SpawnRotationChevron");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: SpawnRotationChevron
  // [TokenAttribute] Offset: FFFFFFFF
  class SpawnRotationChevron : public ::GlobalNamespace::LightWithIdMonoBehaviour {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    // Nested type: ::GlobalNamespace::SpawnRotationChevron::Pool
    class Pool;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private TubeBloomPrePassLight[] _lights
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*> lights;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*>) == 0x8);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x38
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Single _lightAmount
    // Size: 0x4
    // Offset: 0x48
    float lightAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private TubeBloomPrePassLight[] _lights
    ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*>& dyn__lights();
    // Get instance field reference: private UnityEngine.Color _color
    ::UnityEngine::Color& dyn__color();
    // Get instance field reference: private System.Single _lightAmount
    float& dyn__lightAmount();
    // public System.Void SetLightAmount(System.Single amount)
    // Offset: 0x13D51CC
    void SetLightAmount(float amount);
    // private System.Void UpdateLights()
    // Offset: 0x13D513C
    void UpdateLights();
    // public System.Void .ctor()
    // Offset: 0x13D51D4
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpawnRotationChevron* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpawnRotationChevron::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpawnRotationChevron*, creationType>()));
    }
    // public override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x13D5130
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(::UnityEngine::Color color);
  }; // SpawnRotationChevron
  #pragma pack(pop)
  static check_size<sizeof(SpawnRotationChevron), 72 + sizeof(float)> __GlobalNamespace_SpawnRotationChevronSizeCheck;
  static_assert(sizeof(SpawnRotationChevron) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SpawnRotationChevron::SetLightAmount
// Il2CppName: SetLightAmount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnRotationChevron::*)(float)>(&GlobalNamespace::SpawnRotationChevron::SetLightAmount)> {
  static const MethodInfo* get() {
    static auto* amount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpawnRotationChevron*), "SetLightAmount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{amount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpawnRotationChevron::UpdateLights
// Il2CppName: UpdateLights
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnRotationChevron::*)()>(&GlobalNamespace::SpawnRotationChevron::UpdateLights)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpawnRotationChevron*), "UpdateLights", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpawnRotationChevron::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SpawnRotationChevron::ColorWasSet
// Il2CppName: ColorWasSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnRotationChevron::*)(::UnityEngine::Color)>(&GlobalNamespace::SpawnRotationChevron::ColorWasSet)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpawnRotationChevron*), "ColorWasSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
