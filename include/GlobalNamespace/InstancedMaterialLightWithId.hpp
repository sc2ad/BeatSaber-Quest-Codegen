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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MaterialPropertyBlockColorSetter
  class MaterialPropertyBlockColorSetter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: InstancedMaterialLightWithId
  class InstancedMaterialLightWithId;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::InstancedMaterialLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InstancedMaterialLightWithId*, "", "InstancedMaterialLightWithId");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x55
  #pragma pack(push, 1)
  // Autogenerated type: InstancedMaterialLightWithId
  // [TokenAttribute] Offset: FFFFFFFF
  class InstancedMaterialLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private MaterialPropertyBlockColorSetter _materialPropertyBlockColorSetter
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::MaterialPropertyBlockColorSetter* materialPropertyBlockColorSetter;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MaterialPropertyBlockColorSetter*) == 0x8);
    // private System.Boolean _setColorOnly
    // Size: 0x1
    // Offset: 0x38
    bool setColorOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: setColorOnly and: intensity
    char __padding1[0x3] = {};
    // [DrawIfAttribute] Offset: 0x1229600
    // private System.Single _intensity
    // Size: 0x4
    // Offset: 0x3C
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [DrawIfAttribute] Offset: 0x12296A4
    // private System.Single _minAlpha
    // Size: 0x4
    // Offset: 0x40
    float minAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x44
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Boolean _startColorWasSet
    // Size: 0x1
    // Offset: 0x54
    bool startColorWasSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private MaterialPropertyBlockColorSetter _materialPropertyBlockColorSetter
    ::GlobalNamespace::MaterialPropertyBlockColorSetter*& dyn__materialPropertyBlockColorSetter();
    // Get instance field reference: private System.Boolean _setColorOnly
    bool& dyn__setColorOnly();
    // Get instance field reference: private System.Single _intensity
    float& dyn__intensity();
    // Get instance field reference: private System.Single _minAlpha
    float& dyn__minAlpha();
    // Get instance field reference: private UnityEngine.Color _color
    ::UnityEngine::Color& dyn__color();
    // Get instance field reference: private System.Boolean _startColorWasSet
    bool& dyn__startColorWasSet();
    // public System.Void .ctor()
    // Offset: 0x2088D04
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstancedMaterialLightWithId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::InstancedMaterialLightWithId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstancedMaterialLightWithId*, creationType>()));
    }
    // public override System.Void ColorWasSet(UnityEngine.Color newColor)
    // Offset: 0x2088C04
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::ColorWasSet(UnityEngine.Color newColor)
    void ColorWasSet(::UnityEngine::Color newColor);
  }; // InstancedMaterialLightWithId
  #pragma pack(pop)
  static check_size<sizeof(InstancedMaterialLightWithId), 84 + sizeof(bool)> __GlobalNamespace_InstancedMaterialLightWithIdSizeCheck;
  static_assert(sizeof(InstancedMaterialLightWithId) == 0x55);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::InstancedMaterialLightWithId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::InstancedMaterialLightWithId::ColorWasSet
// Il2CppName: ColorWasSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InstancedMaterialLightWithId::*)(::UnityEngine::Color)>(&GlobalNamespace::InstancedMaterialLightWithId::ColorWasSet)> {
  static const MethodInfo* get() {
    static auto* newColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InstancedMaterialLightWithId*), "ColorWasSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newColor});
  }
};
