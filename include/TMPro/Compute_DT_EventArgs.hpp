// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.Compute_DistanceTransform_EventTypes
#include "TMPro/Compute_DistanceTransform_EventTypes.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: Compute_DT_EventArgs
  class Compute_DT_EventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::Compute_DT_EventArgs);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::Compute_DT_EventArgs*, "TMPro", "Compute_DT_EventArgs");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.Compute_DT_EventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class Compute_DT_EventArgs : public ::Il2CppObject {
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
    // public TMPro.Compute_DistanceTransform_EventTypes EventType
    // Size: 0x4
    // Offset: 0x10
    ::TMPro::Compute_DistanceTransform_EventTypes EventType;
    // Field size check
    static_assert(sizeof(::TMPro::Compute_DistanceTransform_EventTypes) == 0x4);
    // public System.Single ProgressPercentage
    // Size: 0x4
    // Offset: 0x14
    float ProgressPercentage;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Color[] Colors
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Color> Colors;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Color>) == 0x8);
    public:
    // Get instance field reference: public TMPro.Compute_DistanceTransform_EventTypes EventType
    ::TMPro::Compute_DistanceTransform_EventTypes& dyn_EventType();
    // Get instance field reference: public System.Single ProgressPercentage
    float& dyn_ProgressPercentage();
    // Get instance field reference: public UnityEngine.Color[] Colors
    ::ArrayW<::UnityEngine::Color>& dyn_Colors();
    // public System.Void .ctor(TMPro.Compute_DistanceTransform_EventTypes type, System.Single progress)
    // Offset: 0x142E7D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Compute_DT_EventArgs* New_ctor(::TMPro::Compute_DistanceTransform_EventTypes type, float progress) {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::Compute_DT_EventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Compute_DT_EventArgs*, creationType>(type, progress)));
    }
    // public System.Void .ctor(TMPro.Compute_DistanceTransform_EventTypes type, UnityEngine.Color[] colors)
    // Offset: 0x142E80C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Compute_DT_EventArgs* New_ctor(::TMPro::Compute_DistanceTransform_EventTypes type, ::ArrayW<::UnityEngine::Color> colors) {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::Compute_DT_EventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Compute_DT_EventArgs*, creationType>(type, colors)));
    }
  }; // TMPro.Compute_DT_EventArgs
  #pragma pack(pop)
  static check_size<sizeof(Compute_DT_EventArgs), 24 + sizeof(::ArrayW<::UnityEngine::Color>)> __TMPro_Compute_DT_EventArgsSizeCheck;
  static_assert(sizeof(Compute_DT_EventArgs) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::Compute_DT_EventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::Compute_DT_EventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
