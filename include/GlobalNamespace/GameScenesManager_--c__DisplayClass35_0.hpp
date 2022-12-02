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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameScenesManager::$$c__DisplayClass35_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameScenesManager::$$c__DisplayClass35_0*, "", "GameScenesManager/<>c__DisplayClass35_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: GameScenesManager/<>c__DisplayClass35_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class GameScenesManager::$$c__DisplayClass35_0 : public ::Il2CppObject {
    public:
    public:
    // public GameScenesManager <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::GameScenesManager* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameScenesManager*) == 0x8);
    // public System.Action`1<Zenject.DiContainer> finishCallback
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_1<::Zenject::DiContainer*>* finishCallback;
    // Field size check
    static_assert(sizeof(::System::Action_1<::Zenject::DiContainer*>*) == 0x8);
    // public System.Collections.Generic.List`1<System.String> sceneNamesToRemove
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::StringW>* sceneNamesToRemove;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    public:
    // Get instance field reference: public GameScenesManager <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameScenesManager*& dyn_$$4__this();
    // Get instance field reference: public System.Action`1<Zenject.DiContainer> finishCallback
    [[deprecated("Use field access instead!")]] ::System::Action_1<::Zenject::DiContainer*>*& dyn_finishCallback();
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> sceneNamesToRemove
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_sceneNamesToRemove();
    // public System.Void .ctor()
    // Offset: 0x15FE5E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameScenesManager::$$c__DisplayClass35_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameScenesManager::$$c__DisplayClass35_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameScenesManager::$$c__DisplayClass35_0*, creationType>()));
    }
    // System.Void <RemoveScenes>b__0(Zenject.DiContainer container)
    // Offset: 0x15FFB6C
    void $RemoveScenes$b__0(::Zenject::DiContainer* container);
    // System.Boolean <RemoveScenes>b__1(System.String scene)
    // Offset: 0x15FFC34
    bool $RemoveScenes$b__1(::StringW scene);
  }; // GameScenesManager/<>c__DisplayClass35_0
  #pragma pack(pop)
  static check_size<sizeof(GameScenesManager::$$c__DisplayClass35_0), 32 + sizeof(::System::Collections::Generic::List_1<::StringW>*)> __GlobalNamespace_GameScenesManager_$$c__DisplayClass35_0SizeCheck;
  static_assert(sizeof(GameScenesManager::$$c__DisplayClass35_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::$$c__DisplayClass35_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::$$c__DisplayClass35_0::$RemoveScenes$b__0
// Il2CppName: <RemoveScenes>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::$$c__DisplayClass35_0::*)(::Zenject::DiContainer*)>(&GlobalNamespace::GameScenesManager::$$c__DisplayClass35_0::$RemoveScenes$b__0)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameScenesManager::$$c__DisplayClass35_0*), "<RemoveScenes>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::$$c__DisplayClass35_0::$RemoveScenes$b__1
// Il2CppName: <RemoveScenes>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameScenesManager::$$c__DisplayClass35_0::*)(::StringW)>(&GlobalNamespace::GameScenesManager::$$c__DisplayClass35_0::$RemoveScenes$b__1)> {
  static const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameScenesManager::$$c__DisplayClass35_0*), "<RemoveScenes>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene});
  }
};
