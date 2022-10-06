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
  // Forward declaring type: RecordingToolSceneSetupData
  class RecordingToolSceneSetupData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RecordingToolSceneSetup
  class RecordingToolSceneSetup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RecordingToolSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolSceneSetup*, "", "RecordingToolSceneSetup");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: RecordingToolSceneSetup
  // [TokenAttribute] Offset: FFFFFFFF
  class RecordingToolSceneSetup : public ::Zenject::MonoInstaller {
    public:
    public:
    // [InjectAttribute] Offset: 0x110F360
    // private readonly RecordingToolSceneSetupData _sceneSetupData
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::RecordingToolSceneSetupData* sceneSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RecordingToolSceneSetupData*) == 0x8);
    public:
    // Get instance field reference: private readonly RecordingToolSceneSetupData _sceneSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RecordingToolSceneSetupData*& dyn__sceneSetupData();
    // public System.Void .ctor()
    // Offset: 0x148C34C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RecordingToolSceneSetup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RecordingToolSceneSetup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RecordingToolSceneSetup*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x148C268
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // RecordingToolSceneSetup
  #pragma pack(pop)
  static check_size<sizeof(RecordingToolSceneSetup), 32 + sizeof(::GlobalNamespace::RecordingToolSceneSetupData*)> __GlobalNamespace_RecordingToolSceneSetupSizeCheck;
  static_assert(sizeof(RecordingToolSceneSetup) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolSceneSetup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolSceneSetup::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RecordingToolSceneSetup::*)()>(&GlobalNamespace::RecordingToolSceneSetup::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RecordingToolSceneSetup*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
