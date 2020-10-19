// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerIntroAnimationController
#include "GlobalNamespace/MultiplayerIntroAnimationController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerIntroAnimationController/<PlayIntroAnimationCoroutine>d__11
  class MultiplayerIntroAnimationController::$PlayIntroAnimationCoroutine$d__11 : public ::Il2CppObject, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*> {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // public System.Single maxDesiredIntroAnimationDuration
    // Offset: 0x20
    float maxDesiredIntroAnimationDuration;
    // public MultiplayerIntroAnimationController <>4__this
    // Offset: 0x28
    GlobalNamespace::MultiplayerIntroAnimationController* $$4__this;
    // public System.Action onCompleted
    // Offset: 0x30
    System::Action* onCompleted;
    // private System.Single <animationDurationMultiplier>5__2
    // Offset: 0x38
    float $animationDurationMultiplier$5__2;
    // private System.Collections.Generic.IReadOnlyList`1<IConnectedPlayer> <allActivePlayer>5__3
    // Offset: 0x40
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer*>* $allActivePlayer$5__3;
    // private System.Collections.Generic.Queue`1<System.Int32> <indexQueue>5__4
    // Offset: 0x48
    System::Collections::Generic::Queue_1<int>* $indexQueue$5__4;
    // private System.Single <timePerPlayer>5__5
    // Offset: 0x50
    float $timePerPlayer$5__5;
    // private System.Single <delayPerPlayer>5__6
    // Offset: 0x54
    float $delayPerPlayer$5__6;
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x203D6BC
    static MultiplayerIntroAnimationController::$PlayIntroAnimationCoroutine$d__11* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x203E0A4
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x203E0A8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x203EB90
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x203EB98
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x203EBF8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // MultiplayerIntroAnimationController/<PlayIntroAnimationCoroutine>d__11
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerIntroAnimationController::$PlayIntroAnimationCoroutine$d__11*, "", "MultiplayerIntroAnimationController/<PlayIntroAnimationCoroutine>d__11");
#pragma pack(pop)