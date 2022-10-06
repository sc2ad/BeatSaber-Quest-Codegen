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
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: StandardLevelNoTransitionInstallerData
  class StandardLevelNoTransitionInstallerData;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelNoTransitionInstaller
  class StandardLevelNoTransitionInstaller;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StandardLevelNoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelNoTransitionInstaller*, "", "StandardLevelNoTransitionInstaller");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelNoTransitionInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class StandardLevelNoTransitionInstaller : public ::Zenject::NoTransitionInstaller {
    public:
    public:
    // private StandardLevelScenesTransitionSetupDataSO _scenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* scenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*) == 0x8);
    // private StandardLevelNoTransitionInstallerData _standardLevelNoTransitionInstallerData
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::StandardLevelNoTransitionInstallerData* standardLevelNoTransitionInstallerData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::StandardLevelNoTransitionInstallerData*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private StandardLevelScenesTransitionSetupDataSO _scenesTransitionSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*& dyn__scenesTransitionSetupData();
    // Get instance field reference: private StandardLevelNoTransitionInstallerData _standardLevelNoTransitionInstallerData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::StandardLevelNoTransitionInstallerData*& dyn__standardLevelNoTransitionInstallerData();
    // public StandardLevelNoTransitionInstallerData get_standardLevelNoTransitionInstallerData()
    // Offset: 0x14CD8B8
    ::GlobalNamespace::StandardLevelNoTransitionInstallerData* get_standardLevelNoTransitionInstallerData();
    // public System.Void .ctor()
    // Offset: 0x14CDFC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelNoTransitionInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::StandardLevelNoTransitionInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelNoTransitionInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings(Zenject.DiContainer container)
    // Offset: 0x14CD8C0
    // Implemented from: Zenject.NoTransitionInstaller
    // Base method: System.Void NoTransitionInstaller::InstallBindings(Zenject.DiContainer container)
    void InstallBindings(::Zenject::DiContainer* container);
  }; // StandardLevelNoTransitionInstaller
  #pragma pack(pop)
  static check_size<sizeof(StandardLevelNoTransitionInstaller), 32 + sizeof(::GlobalNamespace::StandardLevelNoTransitionInstallerData*)> __GlobalNamespace_StandardLevelNoTransitionInstallerSizeCheck;
  static_assert(sizeof(StandardLevelNoTransitionInstaller) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelNoTransitionInstaller::get_standardLevelNoTransitionInstallerData
// Il2CppName: get_standardLevelNoTransitionInstallerData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::StandardLevelNoTransitionInstallerData* (GlobalNamespace::StandardLevelNoTransitionInstaller::*)()>(&GlobalNamespace::StandardLevelNoTransitionInstaller::get_standardLevelNoTransitionInstallerData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelNoTransitionInstaller*), "get_standardLevelNoTransitionInstallerData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelNoTransitionInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelNoTransitionInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelNoTransitionInstaller::*)(::Zenject::DiContainer*)>(&GlobalNamespace::StandardLevelNoTransitionInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelNoTransitionInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
