// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MirroredCubeNoteController
  class MirroredCubeNoteController;
  // Forward declaring type: MirroredBombNoteController
  class MirroredBombNoteController;
  // Forward declaring type: MirroredObstacleController
  class MirroredObstacleController;
  // Forward declaring type: IntSO
  class IntSO;
  // Forward declaring type: MirrorRendererGraphicsSettingsPresets
  class MirrorRendererGraphicsSettingsPresets;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FakeMirrorObjectsInstaller
  class FakeMirrorObjectsInstaller;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FakeMirrorObjectsInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FakeMirrorObjectsInstaller*, "", "FakeMirrorObjectsInstaller");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: FakeMirrorObjectsInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class FakeMirrorObjectsInstaller : public ::Zenject::MonoInstaller {
    public:
    // Nested type: ::GlobalNamespace::FakeMirrorObjectsInstaller::$$c
    class $$c;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [SpaceAttribute] Offset: 0x12478E4
    // private MirroredCubeNoteController _mirroredGameNoteControllerPrefab
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::MirroredCubeNoteController* mirroredGameNoteControllerPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MirroredCubeNoteController*) == 0x8);
    // private MirroredBombNoteController _mirroredBombNoteControllerPrefab
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::MirroredBombNoteController* mirroredBombNoteControllerPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MirroredBombNoteController*) == 0x8);
    // private MirroredObstacleController _mirroredObstacleControllerPrefab
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::MirroredObstacleController* mirroredObstacleControllerPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MirroredObstacleController*) == 0x8);
    // [SpaceAttribute] Offset: 0x124793C
    // private IntSO _mirrorGraphicsSettings
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::IntSO* mirrorGraphicsSettings;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IntSO*) == 0x8);
    // private MirrorRendererGraphicsSettingsPresets _mirrorRendererGraphicsSettingsPresets
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets* mirrorRendererGraphicsSettingsPresets;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*) == 0x8);
    public:
    // Get instance field reference: private MirroredCubeNoteController _mirroredGameNoteControllerPrefab
    ::GlobalNamespace::MirroredCubeNoteController*& dyn__mirroredGameNoteControllerPrefab();
    // Get instance field reference: private MirroredBombNoteController _mirroredBombNoteControllerPrefab
    ::GlobalNamespace::MirroredBombNoteController*& dyn__mirroredBombNoteControllerPrefab();
    // Get instance field reference: private MirroredObstacleController _mirroredObstacleControllerPrefab
    ::GlobalNamespace::MirroredObstacleController*& dyn__mirroredObstacleControllerPrefab();
    // Get instance field reference: private IntSO _mirrorGraphicsSettings
    ::GlobalNamespace::IntSO*& dyn__mirrorGraphicsSettings();
    // Get instance field reference: private MirrorRendererGraphicsSettingsPresets _mirrorRendererGraphicsSettingsPresets
    ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*& dyn__mirrorRendererGraphicsSettingsPresets();
    // public MirroredCubeNoteController get_mirroredGameNoteControllerPrefab()
    // Offset: 0x13FE258
    ::GlobalNamespace::MirroredCubeNoteController* get_mirroredGameNoteControllerPrefab();
    // public System.Void .ctor()
    // Offset: 0x13FE584
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FakeMirrorObjectsInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FakeMirrorObjectsInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FakeMirrorObjectsInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x13FE260
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // FakeMirrorObjectsInstaller
  #pragma pack(pop)
  static check_size<sizeof(FakeMirrorObjectsInstaller), 64 + sizeof(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*)> __GlobalNamespace_FakeMirrorObjectsInstallerSizeCheck;
  static_assert(sizeof(FakeMirrorObjectsInstaller) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FakeMirrorObjectsInstaller::get_mirroredGameNoteControllerPrefab
// Il2CppName: get_mirroredGameNoteControllerPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MirroredCubeNoteController* (GlobalNamespace::FakeMirrorObjectsInstaller::*)()>(&GlobalNamespace::FakeMirrorObjectsInstaller::get_mirroredGameNoteControllerPrefab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FakeMirrorObjectsInstaller*), "get_mirroredGameNoteControllerPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FakeMirrorObjectsInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FakeMirrorObjectsInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FakeMirrorObjectsInstaller::*)()>(&GlobalNamespace::FakeMirrorObjectsInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FakeMirrorObjectsInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
