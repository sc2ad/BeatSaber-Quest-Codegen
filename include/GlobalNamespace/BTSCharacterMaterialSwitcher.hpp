// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BTSCharacterMaterialSwitcher
  class BTSCharacterMaterialSwitcher : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BTSCharacterMaterialSwitcher::RendererMaterialsPairs
    class RendererMaterialsPairs;
    // Nested type: GlobalNamespace::BTSCharacterMaterialSwitcher::MaterialPairs
    class MaterialPairs;
    // private BTSCharacterMaterialSwitcher/RendererMaterialsPairs[] _rendererMaterialsPairs
    // Offset: 0x18
    ::Array<GlobalNamespace::BTSCharacterMaterialSwitcher::RendererMaterialsPairs*>* rendererMaterialsPairs;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void SwapMaterials(System.Boolean alternative)
    // Offset: 0x1A49E44
    void SwapMaterials(bool alternative);
    // public System.Void .ctor()
    // Offset: 0x1A4A0D8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BTSCharacterMaterialSwitcher* New_ctor();
  }; // BTSCharacterMaterialSwitcher
  check_size<sizeof(BTSCharacterMaterialSwitcher), 24 + sizeof(void*) + 8 - (24 + sizeof(void*)) % 8> __GlobalNamespace_BTSCharacterMaterialSwitcherSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSCharacterMaterialSwitcher*, "", "BTSCharacterMaterialSwitcher");
#pragma pack(pop)