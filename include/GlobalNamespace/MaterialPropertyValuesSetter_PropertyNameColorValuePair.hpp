// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MaterialPropertyValuesSetter
#include "GlobalNamespace/MaterialPropertyValuesSetter.hpp"
// Including type: MaterialPropertyValuesSetter/PropertyValuePairBase
#include "GlobalNamespace/MaterialPropertyValuesSetter_PropertyValuePairBase.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameColorValuePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameColorValuePair*, "", "MaterialPropertyValuesSetter/PropertyNameColorValuePair");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: MaterialPropertyValuesSetter/PropertyNameColorValuePair
  // [TokenAttribute] Offset: FFFFFFFF
  class MaterialPropertyValuesSetter::PropertyNameColorValuePair : public ::GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase {
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
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0x1C
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Creating conversion operator: operator ::UnityEngine::Color
    constexpr operator ::UnityEngine::Color() const noexcept {
      return color;
    }
    // Get instance field reference: public UnityEngine.Color color
    ::UnityEngine::Color& dyn_color();
    // public System.Void .ctor()
    // Offset: 0x2AD63FC
    // Implemented from: MaterialPropertyValuesSetter/PropertyValuePairBase
    // Base method: System.Void PropertyValuePairBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialPropertyValuesSetter::PropertyNameColorValuePair* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameColorValuePair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialPropertyValuesSetter::PropertyNameColorValuePair*, creationType>()));
    }
  }; // MaterialPropertyValuesSetter/PropertyNameColorValuePair
  #pragma pack(pop)
  static check_size<sizeof(MaterialPropertyValuesSetter::PropertyNameColorValuePair), 28 + sizeof(::UnityEngine::Color)> __GlobalNamespace_MaterialPropertyValuesSetter_PropertyNameColorValuePairSizeCheck;
  static_assert(sizeof(MaterialPropertyValuesSetter::PropertyNameColorValuePair) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameColorValuePair::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
