// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BTSCharacterMaterialSwitcher
#include "GlobalNamespace/BTSCharacterMaterialSwitcher.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BTSCharacterMaterialSwitcher/MaterialPairs
  class BTSCharacterMaterialSwitcher::MaterialPairs : public ::Il2CppObject {
    public:
    // public System.Int32 materialIndex
    // Offset: 0x10
    int materialIndex;
    // public UnityEngine.Material defaultMaterial
    // Offset: 0x18
    UnityEngine::Material* defaultMaterial;
    // public UnityEngine.Material alternativeMaterial
    // Offset: 0x20
    UnityEngine::Material* alternativeMaterial;
    // public System.Void .ctor()
    // Offset: 0x1A4A0E0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BTSCharacterMaterialSwitcher::MaterialPairs* New_ctor();
  }; // BTSCharacterMaterialSwitcher/MaterialPairs
  check_size<sizeof(BTSCharacterMaterialSwitcher::MaterialPairs), 32 + sizeof(void*) + 8 - (32 + sizeof(void*)) % 8> __GlobalNamespace_BTSCharacterMaterialSwitcher_MaterialPairsSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSCharacterMaterialSwitcher::MaterialPairs*, "", "BTSCharacterMaterialSwitcher/MaterialPairs");
#pragma pack(pop)