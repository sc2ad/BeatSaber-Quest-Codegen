// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RuntimeLightWithIds
#include "GlobalNamespace/RuntimeLightWithIds.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassBackgroundColorsGradient
  class BloomPrePassBackgroundColorsGradient;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassBackgroundColorsGradientTintColorWithLightId
  class BloomPrePassBackgroundColorsGradientTintColorWithLightId;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId*, "", "BloomPrePassBackgroundColorsGradientTintColorWithLightId");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassBackgroundColorsGradientTintColorWithLightId
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomPrePassBackgroundColorsGradientTintColorWithLightId : public ::GlobalNamespace::RuntimeLightWithIds {
    public:
    // Writing base type padding for base size: 0x39 to desired offset: 0x40
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
    // private BloomPrePassBackgroundColorsGradient _bloomPrePassBackgroundColorsGradient
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::BloomPrePassBackgroundColorsGradient* bloomPrePassBackgroundColorsGradient;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomPrePassBackgroundColorsGradient*) == 0x8);
    public:
    // Get instance field reference: private BloomPrePassBackgroundColorsGradient _bloomPrePassBackgroundColorsGradient
    ::GlobalNamespace::BloomPrePassBackgroundColorsGradient*& dyn__bloomPrePassBackgroundColorsGradient();
    // public System.Void .ctor()
    // Offset: 0x2084D60
    // Implemented from: RuntimeLightWithIds
    // Base method: System.Void RuntimeLightWithIds::.ctor()
    // Base method: System.Void LightWithIds::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassBackgroundColorsGradientTintColorWithLightId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassBackgroundColorsGradientTintColorWithLightId*, creationType>()));
    }
    // protected override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x2084D40
    // Implemented from: RuntimeLightWithIds
    // Base method: System.Void RuntimeLightWithIds::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(::UnityEngine::Color color);
  }; // BloomPrePassBackgroundColorsGradientTintColorWithLightId
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassBackgroundColorsGradientTintColorWithLightId), 64 + sizeof(::GlobalNamespace::BloomPrePassBackgroundColorsGradient*)> __GlobalNamespace_BloomPrePassBackgroundColorsGradientTintColorWithLightIdSizeCheck;
  static_assert(sizeof(BloomPrePassBackgroundColorsGradientTintColorWithLightId) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::ColorWasSet
// Il2CppName: ColorWasSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::*)(::UnityEngine::Color)>(&GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::ColorWasSet)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId*), "ColorWasSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
