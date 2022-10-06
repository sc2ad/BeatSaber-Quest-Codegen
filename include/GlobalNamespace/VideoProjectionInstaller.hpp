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
  // Forward declaring type: EnvironmentSceneSetupData
  class EnvironmentSceneSetupData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: VideoProjectionInstaller
  class VideoProjectionInstaller;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VideoProjectionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VideoProjectionInstaller*, "", "VideoProjectionInstaller");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VideoProjectionInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class VideoProjectionInstaller : public ::Zenject::MonoInstaller {
    public:
    public:
    // [InjectAttribute] Offset: 0x1100430
    // private readonly EnvironmentSceneSetupData _sceneSetupData
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::EnvironmentSceneSetupData* sceneSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentSceneSetupData*) == 0x8);
    public:
    // Get instance field reference: private readonly EnvironmentSceneSetupData _sceneSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EnvironmentSceneSetupData*& dyn__sceneSetupData();
    // public System.Void .ctor()
    // Offset: 0x218CF3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VideoProjectionInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VideoProjectionInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VideoProjectionInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x218CE84
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // VideoProjectionInstaller
  #pragma pack(pop)
  static check_size<sizeof(VideoProjectionInstaller), 32 + sizeof(::GlobalNamespace::EnvironmentSceneSetupData*)> __GlobalNamespace_VideoProjectionInstallerSizeCheck;
  static_assert(sizeof(VideoProjectionInstaller) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VideoProjectionInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::VideoProjectionInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VideoProjectionInstaller::*)()>(&GlobalNamespace::VideoProjectionInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VideoProjectionInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
