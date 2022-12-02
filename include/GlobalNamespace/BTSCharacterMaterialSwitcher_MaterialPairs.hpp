// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BTSCharacterMaterialSwitcher
#include "GlobalNamespace/BTSCharacterMaterialSwitcher.hpp"
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
NEED_NO_BOX(::GlobalNamespace::BTSCharacterMaterialSwitcher::MaterialPairs);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacterMaterialSwitcher::MaterialPairs*, "", "BTSCharacterMaterialSwitcher/MaterialPairs");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BTSCharacterMaterialSwitcher/MaterialPairs
  // [TokenAttribute] Offset: FFFFFFFF
  class BTSCharacterMaterialSwitcher::MaterialPairs : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 materialIndex
    // Size: 0x4
    // Offset: 0x10
    int materialIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: materialIndex and: defaultMaterial
    char __padding0[0x4] = {};
    // public UnityEngine.Material defaultMaterial
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Material* defaultMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public UnityEngine.Material alternativeMaterial
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Material* alternativeMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 materialIndex
    [[deprecated("Use field access instead!")]] int& dyn_materialIndex();
    // Get instance field reference: public UnityEngine.Material defaultMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_defaultMaterial();
    // Get instance field reference: public UnityEngine.Material alternativeMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_alternativeMaterial();
    // public System.Void .ctor()
    // Offset: 0x154670C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSCharacterMaterialSwitcher::MaterialPairs* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BTSCharacterMaterialSwitcher::MaterialPairs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSCharacterMaterialSwitcher::MaterialPairs*, creationType>()));
    }
  }; // BTSCharacterMaterialSwitcher/MaterialPairs
  #pragma pack(pop)
  static check_size<sizeof(BTSCharacterMaterialSwitcher::MaterialPairs), 32 + sizeof(::UnityEngine::Material*)> __GlobalNamespace_BTSCharacterMaterialSwitcher_MaterialPairsSizeCheck;
  static_assert(sizeof(BTSCharacterMaterialSwitcher::MaterialPairs) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterMaterialSwitcher::MaterialPairs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
