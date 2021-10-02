// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: AppInit
#include "GlobalNamespace/AppInit.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainSystemInit
  class MainSystemInit;
  // Forward declaring type: OculusInit
  class OculusInit;
  // Forward declaring type: SteamInit
  class SteamInit;
  // Forward declaring type: DefaultScenesTransitionsFromInit
  class DefaultScenesTransitionsFromInit;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: PCAppInit
  // [TokenAttribute] Offset: FFFFFFFF
  class PCAppInit : public GlobalNamespace::AppInit {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private MainSystemInit _mainSystemInit
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::MainSystemInit* mainSystemInit;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSystemInit*) == 0x8);
    // private OculusInit _oculusInit
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::OculusInit* oculusInit;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusInit*) == 0x8);
    // private SteamInit _steamInit
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::SteamInit* steamInit;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamInit*) == 0x8);
    // private DefaultScenesTransitionsFromInit _defaultScenesTransitionsFromInit
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::DefaultScenesTransitionsFromInit* defaultScenesTransitionsFromInit;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DefaultScenesTransitionsFromInit*) == 0x8);
    // private MainSettingsModelSO _mainSettingsModel
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // private System.String _goStraightToMenuCommandArgument
    // Size: 0x8
    // Offset: 0x68
    ::Il2CppString* goStraightToMenuCommandArgument;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Get instance field reference: private MainSystemInit _mainSystemInit
    GlobalNamespace::MainSystemInit*& dyn__mainSystemInit();
    // Get instance field reference: private OculusInit _oculusInit
    GlobalNamespace::OculusInit*& dyn__oculusInit();
    // Get instance field reference: private SteamInit _steamInit
    GlobalNamespace::SteamInit*& dyn__steamInit();
    // Get instance field reference: private DefaultScenesTransitionsFromInit _defaultScenesTransitionsFromInit
    GlobalNamespace::DefaultScenesTransitionsFromInit*& dyn__defaultScenesTransitionsFromInit();
    // Get instance field reference: private MainSettingsModelSO _mainSettingsModel
    GlobalNamespace::MainSettingsModelSO*& dyn__mainSettingsModel();
    // Get instance field reference: private System.String _goStraightToMenuCommandArgument
    ::Il2CppString*& dyn__goStraightToMenuCommandArgument();
    // public System.Void .ctor()
    // Offset: 0x112393C
    // Implemented from: AppInit
    // Base method: System.Void AppInit::.ctor()
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PCAppInit* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PCAppInit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PCAppInit*, creationType>()));
    }
    // protected override System.Void AppStartAndMultiSceneEditorSetup()
    // Offset: 0x1123734
    // Implemented from: AppInit
    // Base method: System.Void AppInit::AppStartAndMultiSceneEditorSetup()
    void AppStartAndMultiSceneEditorSetup();
    // protected override System.Void RepeatableSetup()
    // Offset: 0x11237B8
    // Implemented from: AppInit
    // Base method: System.Void AppInit::RepeatableSetup()
    void RepeatableSetup();
    // protected override System.Void TransitionToNextScene()
    // Offset: 0x1123804
    // Implemented from: AppInit
    // Base method: System.Void AppInit::TransitionToNextScene()
    void TransitionToNextScene();
    // public override System.Void InstallBindings()
    // Offset: 0x1123854
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // PCAppInit
  #pragma pack(pop)
  static check_size<sizeof(PCAppInit), 104 + sizeof(::Il2CppString*)> __GlobalNamespace_PCAppInitSizeCheck;
  static_assert(sizeof(PCAppInit) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PCAppInit*, "", "PCAppInit");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PCAppInit::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PCAppInit::AppStartAndMultiSceneEditorSetup
// Il2CppName: AppStartAndMultiSceneEditorSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PCAppInit::*)()>(&GlobalNamespace::PCAppInit::AppStartAndMultiSceneEditorSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PCAppInit*), "AppStartAndMultiSceneEditorSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PCAppInit::RepeatableSetup
// Il2CppName: RepeatableSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PCAppInit::*)()>(&GlobalNamespace::PCAppInit::RepeatableSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PCAppInit*), "RepeatableSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PCAppInit::TransitionToNextScene
// Il2CppName: TransitionToNextScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PCAppInit::*)()>(&GlobalNamespace::PCAppInit::TransitionToNextScene)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PCAppInit*), "TransitionToNextScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PCAppInit::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PCAppInit::*)()>(&GlobalNamespace::PCAppInit::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PCAppInit*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
