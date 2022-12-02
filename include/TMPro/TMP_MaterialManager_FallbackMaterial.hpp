// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.TMP_MaterialManager
#include "TMPro/TMP_MaterialManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::TMP_MaterialManager::FallbackMaterial);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_MaterialManager::FallbackMaterial*, "TMPro", "TMP_MaterialManager/FallbackMaterial");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_MaterialManager/TMPro.FallbackMaterial
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_MaterialManager::FallbackMaterial : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 baseID
    // Size: 0x4
    // Offset: 0x10
    int baseID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: baseID and: baseMaterial
    char __padding0[0x4] = {};
    // public UnityEngine.Material baseMaterial
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Material* baseMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public System.Int64 fallbackID
    // Size: 0x8
    // Offset: 0x20
    int64_t fallbackID;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public UnityEngine.Material fallbackMaterial
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Material* fallbackMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public System.Int32 count
    // Size: 0x4
    // Offset: 0x30
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Int32 baseID
    [[deprecated("Use field access instead!")]] int& dyn_baseID();
    // Get instance field reference: public UnityEngine.Material baseMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_baseMaterial();
    // Get instance field reference: public System.Int64 fallbackID
    [[deprecated("Use field access instead!")]] int64_t& dyn_fallbackID();
    // Get instance field reference: public UnityEngine.Material fallbackMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_fallbackMaterial();
    // Get instance field reference: public System.Int32 count
    [[deprecated("Use field access instead!")]] int& dyn_count();
    // public System.Void .ctor()
    // Offset: 0x14B9488
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_MaterialManager::FallbackMaterial* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_MaterialManager::FallbackMaterial::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_MaterialManager::FallbackMaterial*, creationType>()));
    }
  }; // TMPro.TMP_MaterialManager/TMPro.FallbackMaterial
  #pragma pack(pop)
  static check_size<sizeof(TMP_MaterialManager::FallbackMaterial), 48 + sizeof(int)> __TMPro_TMP_MaterialManager_FallbackMaterialSizeCheck;
  static_assert(sizeof(TMP_MaterialManager::FallbackMaterial) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_MaterialManager::FallbackMaterial::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
