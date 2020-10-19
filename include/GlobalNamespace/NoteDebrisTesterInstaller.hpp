// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteDebris
  class NoteDebris;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NoteDebrisTesterInstaller
  class NoteDebrisTesterInstaller : public Zenject::MonoInstaller {
    public:
    // private System.Boolean _useHDVersion
    // Offset: 0x20
    bool useHDVersion;
    // private NoteDebris _noteDebrisHDPrefab
    // Offset: 0x28
    GlobalNamespace::NoteDebris* noteDebrisHDPrefab;
    // private NoteDebris _noteDebrisLWPrefab
    // Offset: 0x30
    GlobalNamespace::NoteDebris* noteDebrisLWPrefab;
    // public override System.Void InstallBindings()
    // Offset: 0x20F787C
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x20F7910
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NoteDebrisTesterInstaller* New_ctor();
  }; // NoteDebrisTesterInstaller
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteDebrisTesterInstaller*, "", "NoteDebrisTesterInstaller");
#pragma pack(pop)