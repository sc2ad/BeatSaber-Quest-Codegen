// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.NoTransitionInstaller
#include "Zenject/NoTransitionInstaller.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: RecordingToolSceneSetupData
  class RecordingToolSceneSetupData;
  // Forward declaring type: RecordingToolScenesTransitionSetupDataSO
  class RecordingToolScenesTransitionSetupDataSO;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RecordingToolSettingsNoTransitionInstaller
  class RecordingToolSettingsNoTransitionInstaller;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller*, "", "RecordingToolSettingsNoTransitionInstaller");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: RecordingToolSettingsNoTransitionInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class RecordingToolSettingsNoTransitionInstaller : public ::Zenject::NoTransitionInstaller {
    public:
    public:
    // private RecordingToolSceneSetupData _recordingToolSceneSetupData
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::RecordingToolSceneSetupData* recordingToolSceneSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RecordingToolSceneSetupData*) == 0x8);
    // private RecordingToolScenesTransitionSetupDataSO _scenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO* scenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private RecordingToolSceneSetupData _recordingToolSceneSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RecordingToolSceneSetupData*& dyn__recordingToolSceneSetupData();
    // Get instance field reference: private RecordingToolScenesTransitionSetupDataSO _scenesTransitionSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO*& dyn__scenesTransitionSetupData();
    // public System.Void .ctor()
    // Offset: 0x14242C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RecordingToolSettingsNoTransitionInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RecordingToolSettingsNoTransitionInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings(Zenject.DiContainer container)
    // Offset: 0x1424280
    // Implemented from: Zenject.NoTransitionInstaller
    // Base method: System.Void NoTransitionInstaller::InstallBindings(Zenject.DiContainer container)
    void InstallBindings(::Zenject::DiContainer* container);
  }; // RecordingToolSettingsNoTransitionInstaller
  #pragma pack(pop)
  static check_size<sizeof(RecordingToolSettingsNoTransitionInstaller), 32 + sizeof(::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO*)> __GlobalNamespace_RecordingToolSettingsNoTransitionInstallerSizeCheck;
  static_assert(sizeof(RecordingToolSettingsNoTransitionInstaller) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::*)(::Zenject::DiContainer*)>(&GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RecordingToolSettingsNoTransitionInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
