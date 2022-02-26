// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SaberModelController
#include "GlobalNamespace/SaberModelController.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SaberModelController::InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberModelController::InitData*, "", "SaberModelController/InitData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SaberModelController/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class SaberModelController::InitData : public ::Il2CppObject {
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
    // public readonly UnityEngine.Color trailTintColor
    // Size: 0x10
    // Offset: 0x10
    ::UnityEngine::Color trailTintColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Creating conversion operator: operator ::UnityEngine::Color
    constexpr operator ::UnityEngine::Color() const noexcept {
      return trailTintColor;
    }
    // Get instance field reference: public readonly UnityEngine.Color trailTintColor
    ::UnityEngine::Color& dyn_trailTintColor();
    // public System.Void .ctor(UnityEngine.Color trailTintColor)
    // Offset: 0x2B56180
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberModelController::InitData* New_ctor(::UnityEngine::Color trailTintColor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SaberModelController::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberModelController::InitData*, creationType>(trailTintColor)));
    }
    // public System.Void .ctor()
    // Offset: 0x2B5614C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberModelController::InitData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SaberModelController::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberModelController::InitData*, creationType>()));
    }
  }; // SaberModelController/InitData
  #pragma pack(pop)
  static check_size<sizeof(SaberModelController::InitData), 16 + sizeof(::UnityEngine::Color)> __GlobalNamespace_SaberModelController_InitDataSizeCheck;
  static_assert(sizeof(SaberModelController::InitData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SaberModelController::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SaberModelController::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
