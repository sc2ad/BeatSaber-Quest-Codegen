// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GameScenesManager
#include "GlobalNamespace/GameScenesManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameScenesManager::$$c__DisplayClass34_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameScenesManager::$$c__DisplayClass34_0*, "", "GameScenesManager/<>c__DisplayClass34_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: GameScenesManager/<>c__DisplayClass34_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class GameScenesManager::$$c__DisplayClass34_0 : public ::Il2CppObject {
    public:
    public:
    // public GameScenesManager/ScenesStackData scenesStackData
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::GameScenesManager::ScenesStackData* scenesStackData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameScenesManager::ScenesStackData*) == 0x8);
    // public ScenesTransitionSetupDataSO scenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ScenesTransitionSetupDataSO*) == 0x8);
    // public GameScenesManager <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::GameScenesManager* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameScenesManager*) == 0x8);
    // public System.Action`1<Zenject.DiContainer> finishCallback
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_1<::Zenject::DiContainer*>* finishCallback;
    // Field size check
    static_assert(sizeof(::System::Action_1<::Zenject::DiContainer*>*) == 0x8);
    public:
    // Get instance field reference: public GameScenesManager/ScenesStackData scenesStackData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameScenesManager::ScenesStackData*& dyn_scenesStackData();
    // Get instance field reference: public ScenesTransitionSetupDataSO scenesTransitionSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ScenesTransitionSetupDataSO*& dyn_scenesTransitionSetupData();
    // Get instance field reference: public GameScenesManager <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameScenesManager*& dyn_$$4__this();
    // Get instance field reference: public System.Action`1<Zenject.DiContainer> finishCallback
    [[deprecated("Use field access instead!")]] ::System::Action_1<::Zenject::DiContainer*>*& dyn_finishCallback();
    // public System.Void .ctor()
    // Offset: 0x15FE310
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameScenesManager::$$c__DisplayClass34_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameScenesManager::$$c__DisplayClass34_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameScenesManager::$$c__DisplayClass34_0*, creationType>()));
    }
    // System.Void <AppendScenes>b__0(Zenject.DiContainer container)
    // Offset: 0x15FFA14
    void $AppendScenes$b__0(::Zenject::DiContainer* container);
    // System.Void <AppendScenes>b__1(Zenject.DiContainer container)
    // Offset: 0x15FFAB8
    void $AppendScenes$b__1(::Zenject::DiContainer* container);
  }; // GameScenesManager/<>c__DisplayClass34_0
  #pragma pack(pop)
  static check_size<sizeof(GameScenesManager::$$c__DisplayClass34_0), 40 + sizeof(::System::Action_1<::Zenject::DiContainer*>*)> __GlobalNamespace_GameScenesManager_$$c__DisplayClass34_0SizeCheck;
  static_assert(sizeof(GameScenesManager::$$c__DisplayClass34_0) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::$$c__DisplayClass34_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::$$c__DisplayClass34_0::$AppendScenes$b__0
// Il2CppName: <AppendScenes>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::$$c__DisplayClass34_0::*)(::Zenject::DiContainer*)>(&GlobalNamespace::GameScenesManager::$$c__DisplayClass34_0::$AppendScenes$b__0)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameScenesManager::$$c__DisplayClass34_0*), "<AppendScenes>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::$$c__DisplayClass34_0::$AppendScenes$b__1
// Il2CppName: <AppendScenes>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::$$c__DisplayClass34_0::*)(::Zenject::DiContainer*)>(&GlobalNamespace::GameScenesManager::$$c__DisplayClass34_0::$AppendScenes$b__1)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameScenesManager::$$c__DisplayClass34_0*), "<AppendScenes>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
