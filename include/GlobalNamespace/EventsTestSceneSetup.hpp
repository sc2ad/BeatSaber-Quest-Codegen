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
  // Forward declaring type: GameplayCoreSceneSetupData
  class GameplayCoreSceneSetupData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EventsTestSceneSetup
  class EventsTestSceneSetup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EventsTestSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EventsTestSceneSetup*, "", "EventsTestSceneSetup");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: EventsTestSceneSetup
  // [TokenAttribute] Offset: FFFFFFFF
  class EventsTestSceneSetup : public ::Zenject::MonoInstaller {
    public:
    public:
    // [InjectAttribute] Offset: 0x1124894
    // private readonly GameplayCoreSceneSetupData _sceneSetupData
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayCoreSceneSetupData*) == 0x8);
    public:
    // Get instance field reference: private readonly GameplayCoreSceneSetupData _sceneSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayCoreSceneSetupData*& dyn__sceneSetupData();
    // public System.Void .ctor()
    // Offset: 0x138E198
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventsTestSceneSetup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EventsTestSceneSetup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventsTestSceneSetup*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x138D85C
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // EventsTestSceneSetup
  #pragma pack(pop)
  static check_size<sizeof(EventsTestSceneSetup), 32 + sizeof(::GlobalNamespace::GameplayCoreSceneSetupData*)> __GlobalNamespace_EventsTestSceneSetupSizeCheck;
  static_assert(sizeof(EventsTestSceneSetup) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EventsTestSceneSetup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EventsTestSceneSetup::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EventsTestSceneSetup::*)()>(&GlobalNamespace::EventsTestSceneSetup::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EventsTestSceneSetup*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
