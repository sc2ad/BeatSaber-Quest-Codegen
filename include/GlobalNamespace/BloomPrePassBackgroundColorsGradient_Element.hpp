// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BloomPrePassBackgroundColorsGradient
#include "GlobalNamespace/BloomPrePassBackgroundColorsGradient.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColorsGradient::Element);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColorsGradient::Element*, "", "BloomPrePassBackgroundColorsGradient/Element");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassBackgroundColorsGradient/Element
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomPrePassBackgroundColorsGradient::Element : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0x10
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public System.Single startT
    // Size: 0x4
    // Offset: 0x20
    float startT;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single exp
    // Size: 0x4
    // Offset: 0x24
    float exp;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.Color color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_color();
    // Get instance field reference: public System.Single startT
    [[deprecated("Use field access instead!")]] float& dyn_startT();
    // Get instance field reference: public System.Single exp
    [[deprecated("Use field access instead!")]] float& dyn_exp();
    // public System.Void .ctor()
    // Offset: 0x1CFA8E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassBackgroundColorsGradient::Element* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BloomPrePassBackgroundColorsGradient::Element::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassBackgroundColorsGradient::Element*, creationType>()));
    }
  }; // BloomPrePassBackgroundColorsGradient/Element
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassBackgroundColorsGradient::Element), 36 + sizeof(float)> __GlobalNamespace_BloomPrePassBackgroundColorsGradient_ElementSizeCheck;
  static_assert(sizeof(BloomPrePassBackgroundColorsGradient::Element) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundColorsGradient::Element::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
