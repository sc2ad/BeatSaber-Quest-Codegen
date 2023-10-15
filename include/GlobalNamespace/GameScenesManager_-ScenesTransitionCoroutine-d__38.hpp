// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GameScenesManager
#include "GlobalNamespace/GameScenesManager.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: GameScenesManager/ScenePresentType
#include "GlobalNamespace/GameScenesManager_ScenePresentType.hpp"
// Including type: GameScenesManager/SceneDismissType
#include "GlobalNamespace/GameScenesManager_SceneDismissType.hpp"
// Including type: System.Collections.Generic.List`1/System.Collections.Generic.Enumerator
#include "System/Collections/Generic/List_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: List`1 because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: EventSystem
  class EventSystem;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38*, "", "GameScenesManager/<ScenesTransitionCoroutine>d__38");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: GameScenesManager/<ScenesTransitionCoroutine>d__38
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class GameScenesManager::$ScenesTransitionCoroutine$d__38 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public ScenesTransitionSetupDataSO newScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::ScenesTransitionSetupDataSO* newScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ScenesTransitionSetupDataSO*) == 0x8);
    // public System.Collections.Generic.List`1<System.String> scenesToDismiss
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::StringW>* scenesToDismiss;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // public GameScenesManager <>4__this
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::GameScenesManager* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameScenesManager*) == 0x8);
    // public System.Collections.Generic.List`1<System.String> scenesToPresent
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::StringW>* scenesToPresent;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // public System.Single minDuration
    // Size: 0x4
    // Offset: 0x40
    float minDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public GameScenesManager/ScenePresentType presentType
    // Size: 0x4
    // Offset: 0x44
    ::GlobalNamespace::GameScenesManager::ScenePresentType presentType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameScenesManager::ScenePresentType) == 0x4);
    // public System.Action afterMinDurationCallback
    // Size: 0x8
    // Offset: 0x48
    ::System::Action* afterMinDurationCallback;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private GameScenesManager/<>c__DisplayClass38_0 <>8__1
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::GameScenesManager::$$c__DisplayClass38_0* $$8__1;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameScenesManager::$$c__DisplayClass38_0*) == 0x8);
    // public System.Action`1<Zenject.DiContainer> extraBindingsCallback
    // Size: 0x8
    // Offset: 0x58
    ::System::Action_1<::Zenject::DiContainer*>* extraBindingsCallback;
    // Field size check
    static_assert(sizeof(::System::Action_1<::Zenject::DiContainer*>*) == 0x8);
    // public GameScenesManager/SceneDismissType dismissType
    // Size: 0x4
    // Offset: 0x60
    ::GlobalNamespace::GameScenesManager::SceneDismissType dismissType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameScenesManager::SceneDismissType) == 0x4);
    // public System.Action`1<Zenject.DiContainer> finishCallback
    // Size: 0x8
    // Offset: 0x68
    ::System::Action_1<::Zenject::DiContainer*>* finishCallback;
    // Field size check
    static_assert(sizeof(::System::Action_1<::Zenject::DiContainer*>*) == 0x8);
    // private UnityEngine.EventSystems.EventSystem <eventSystem>5__2
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::EventSystems::EventSystem* $eventSystem$5__2;
    // Field size check
    static_assert(sizeof(::UnityEngine::EventSystems::EventSystem*) == 0x8);
    // private System.String <sceneName>5__3
    // Size: 0x8
    // Offset: 0x78
    ::StringW $sceneName$5__3;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.AsyncOperation <loadSceneOperation>5__4
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::AsyncOperation* $loadSceneOperation$5__4;
    // Field size check
    static_assert(sizeof(::UnityEngine::AsyncOperation*) == 0x8);
    // private System.Int32 <sceneNum>5__5
    // Size: 0x4
    // Offset: 0x88
    int $sceneNum$5__5;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.Generic.List`1/System.Collections.Generic.Enumerator<System.String> <>7__wrap5
    // Size: 0xFFFFFFFF
    // Offset: 0x90
    typename ::System::Collections::Generic::List_1<::StringW>::Enumerator $$7__wrap5;
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Creating interface conversion operator: i_Il2CppObject
    inline ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>* i_Il2CppObject() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public ScenesTransitionSetupDataSO newScenesTransitionSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ScenesTransitionSetupDataSO*& dyn_newScenesTransitionSetupData();
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> scenesToDismiss
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_scenesToDismiss();
    // Get instance field reference: public GameScenesManager <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameScenesManager*& dyn_$$4__this();
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> scenesToPresent
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_scenesToPresent();
    // Get instance field reference: public System.Single minDuration
    [[deprecated("Use field access instead!")]] float& dyn_minDuration();
    // Get instance field reference: public GameScenesManager/ScenePresentType presentType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameScenesManager::ScenePresentType& dyn_presentType();
    // Get instance field reference: public System.Action afterMinDurationCallback
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_afterMinDurationCallback();
    // Get instance field reference: private GameScenesManager/<>c__DisplayClass38_0 <>8__1
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameScenesManager::$$c__DisplayClass38_0*& dyn_$$8__1();
    // Get instance field reference: public System.Action`1<Zenject.DiContainer> extraBindingsCallback
    [[deprecated("Use field access instead!")]] ::System::Action_1<::Zenject::DiContainer*>*& dyn_extraBindingsCallback();
    // Get instance field reference: public GameScenesManager/SceneDismissType dismissType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameScenesManager::SceneDismissType& dyn_dismissType();
    // Get instance field reference: public System.Action`1<Zenject.DiContainer> finishCallback
    [[deprecated("Use field access instead!")]] ::System::Action_1<::Zenject::DiContainer*>*& dyn_finishCallback();
    // Get instance field reference: private UnityEngine.EventSystems.EventSystem <eventSystem>5__2
    [[deprecated("Use field access instead!")]] ::UnityEngine::EventSystems::EventSystem*& dyn_$eventSystem$5__2();
    // Get instance field reference: private System.String <sceneName>5__3
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$sceneName$5__3();
    // Get instance field reference: private UnityEngine.AsyncOperation <loadSceneOperation>5__4
    [[deprecated("Use field access instead!")]] ::UnityEngine::AsyncOperation*& dyn_$loadSceneOperation$5__4();
    // Get instance field reference: private System.Int32 <sceneNum>5__5
    [[deprecated("Use field access instead!")]] int& dyn_$sceneNum$5__5();
    // Get instance field reference: private System.Collections.Generic.List`1/System.Collections.Generic.Enumerator<System.String> <>7__wrap5
    [[deprecated("Use field access instead!")]] typename ::System::Collections::Generic::List_1<::StringW>::Enumerator& dyn_$$7__wrap5();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x162AA68
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x162AAD0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1628548
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameScenesManager::$ScenesTransitionCoroutine$d__38* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameScenesManager::$ScenesTransitionCoroutine$d__38*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1629C50
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1629D38
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x1629C88
    void $$m__Finally1();
    // private System.Void <>m__Finally2()
    // Offset: 0x1629CE0
    void $$m__Finally2();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x162AA70
    void System_Collections_IEnumerator_Reset();
  }; // GameScenesManager/<ScenesTransitionCoroutine>d__38
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38::*)()>(&GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38::*)()>(&GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38::*)()>(&GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38::*)()>(&GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38::*)()>(&GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38::$$m__Finally2
// Il2CppName: <>m__Finally2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38::*)()>(&GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38::$$m__Finally2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38*), "<>m__Finally2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38::*)()>(&GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__38*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};