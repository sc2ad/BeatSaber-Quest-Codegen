// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: RecordingToolResourceContainerSO
  class RecordingToolResourceContainerSO;
  // Forward declaring type: ProgramArguments
  class ProgramArguments;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RecordingToolInstallerSO
  class RecordingToolInstallerSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RecordingToolInstallerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolInstallerSO*, "", "RecordingToolInstallerSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: RecordingToolInstallerSO
  // [TokenAttribute] Offset: FFFFFFFF
  class RecordingToolInstallerSO : public ::GlobalNamespace::PersistentScriptableObject {
    public:
    public:
    // private RecordingToolResourceContainerSO _recordingToolResourceContainer
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::RecordingToolResourceContainerSO* recordingToolResourceContainer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RecordingToolResourceContainerSO*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private RecordingToolResourceContainerSO _recordingToolResourceContainer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RecordingToolResourceContainerSO*& dyn__recordingToolResourceContainer();
    // public System.Void .ctor()
    // Offset: 0x148C098
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RecordingToolInstallerSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RecordingToolInstallerSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RecordingToolInstallerSO*, creationType>()));
    }
    // public System.Void InstallDependencies(Zenject.DiContainer container, ProgramArguments programArguments)
    // Offset: 0x148BC00
    void InstallDependencies(::Zenject::DiContainer* container, ::GlobalNamespace::ProgramArguments* programArguments);
  }; // RecordingToolInstallerSO
  #pragma pack(pop)
  static check_size<sizeof(RecordingToolInstallerSO), 24 + sizeof(::GlobalNamespace::RecordingToolResourceContainerSO*)> __GlobalNamespace_RecordingToolInstallerSOSizeCheck;
  static_assert(sizeof(RecordingToolInstallerSO) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolInstallerSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolInstallerSO::InstallDependencies
// Il2CppName: InstallDependencies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RecordingToolInstallerSO::*)(::Zenject::DiContainer*, ::GlobalNamespace::ProgramArguments*)>(&GlobalNamespace::RecordingToolInstallerSO::InstallDependencies)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    static auto* programArguments = &::il2cpp_utils::GetClassFromName("", "ProgramArguments")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RecordingToolInstallerSO*), "InstallDependencies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container, programArguments});
  }
};
