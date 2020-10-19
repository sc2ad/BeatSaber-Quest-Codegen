// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MenuTransitionsHelper
#include "GlobalNamespace/MenuTransitionsHelper.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLevelScenesTransitionSetupDataSO
  class MultiplayerLevelScenesTransitionSetupDataSO;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MenuTransitionsHelper/<>c__DisplayClass23_0
  class MenuTransitionsHelper::$$c__DisplayClass23_0 : public ::Il2CppObject {
    public:
    // public MenuTransitionsHelper <>4__this
    // Offset: 0x10
    GlobalNamespace::MenuTransitionsHelper* $$4__this;
    // public MultiplayerLevelScenesTransitionSetupDataSO multiplayerLevelScenesTransitionSetupData
    // Offset: 0x18
    GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData;
    // public LevelCompletionResults levelCompletionResults
    // Offset: 0x20
    GlobalNamespace::LevelCompletionResults* levelCompletionResults;
    // public System.Collections.Generic.Dictionary`2<System.String,LevelCompletionResults> otherPlayersCompletionResults
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>* otherPlayersCompletionResults;
    // System.Void <HandleMultiplayerLevelDidFinish>b__0(Zenject.DiContainer container)
    // Offset: 0x1FC5154
    void $HandleMultiplayerLevelDidFinish$b__0(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0x1FC4AF0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MenuTransitionsHelper::$$c__DisplayClass23_0* New_ctor();
  }; // MenuTransitionsHelper/<>c__DisplayClass23_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass23_0*, "", "MenuTransitionsHelper/<>c__DisplayClass23_0");
#pragma pack(pop)