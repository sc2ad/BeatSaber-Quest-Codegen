// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: PreviewBeatmapLevelSO
#include "GlobalNamespace/PreviewBeatmapLevelSO.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PreviewBeatmapLevelSO/<GetCoverImageAsync>d__52
  struct PreviewBeatmapLevelSO::$GetCoverImageAsync$d__52 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Sprite> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite*> $$t__builder;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x20
    System::Threading::CancellationToken cancellationToken;
    // public PreviewBeatmapLevelSO <>4__this
    // Offset: 0x28
    GlobalNamespace::PreviewBeatmapLevelSO* $$4__this;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Sprite> <>u__1
    // Offset: 0x30
    System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite*> $$u__1;
    // Creating value type constructor for type: $GetCoverImageAsync$d__52
    constexpr $GetCoverImageAsync$d__52(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite*> $$t__builder_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, GlobalNamespace::PreviewBeatmapLevelSO* $$4__this_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, cancellationToken{cancellationToken_}, $$4__this{$$4__this_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xE4E418
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xE4E420
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // PreviewBeatmapLevelSO/<GetCoverImageAsync>d__52
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PreviewBeatmapLevelSO::$GetCoverImageAsync$d__52, "", "PreviewBeatmapLevelSO/<GetCoverImageAsync>d__52");
#pragma pack(pop)