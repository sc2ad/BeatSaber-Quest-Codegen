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
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerResultsPyramidViewAvatarInstaller
  class MultiplayerResultsPyramidViewAvatarInstaller;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller*, "", "MultiplayerResultsPyramidViewAvatarInstaller");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerResultsPyramidViewAvatarInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerResultsPyramidViewAvatarInstaller : public ::Zenject::MonoInstaller {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [InjectAttribute] Offset: 0x12554E4
    // private readonly IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IConnectedPlayer*) == 0x8);
    public:
    // Get instance field reference: private readonly IConnectedPlayer _connectedPlayer
    ::GlobalNamespace::IConnectedPlayer*& dyn__connectedPlayer();
    // public System.Void .ctor()
    // Offset: 0x13A6858
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerResultsPyramidViewAvatarInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerResultsPyramidViewAvatarInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x13A67FC
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // MultiplayerResultsPyramidViewAvatarInstaller
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerResultsPyramidViewAvatarInstaller), 32 + sizeof(::GlobalNamespace::IConnectedPlayer*)> __GlobalNamespace_MultiplayerResultsPyramidViewAvatarInstallerSizeCheck;
  static_assert(sizeof(MultiplayerResultsPyramidViewAvatarInstaller) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::*)()>(&GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
