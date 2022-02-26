// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapLevelDataLoaderSO
#include "GlobalNamespace/BeatmapLevelDataLoaderSO.hpp"
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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelDataLoaderSO::$LoadBeatmapLevelFormAssetBundleAsync$d__4, "", "BeatmapLevelDataLoaderSO/<LoadBeatmapLevelFormAssetBundleAsync>d__4");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BeatmapLevelDataLoaderSO/<LoadBeatmapLevelFormAssetBundleAsync>d__4
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct BeatmapLevelDataLoaderSO::$LoadBeatmapLevelFormAssetBundleAsync$d__4/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<IBeatmapLevel> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel*> $$t__builder;
    // public IPreviewBeatmapLevel previewBeatmapLevel
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    // public BeatmapLevelDataLoaderSO <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::BeatmapLevelDataLoaderSO* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapLevelDataLoaderSO*) == 0x8);
    // public System.String assetBundlePath
    // Size: 0x8
    // Offset: 0x30
    ::StringW assetBundlePath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String levelDataAssetName
    // Size: 0x8
    // Offset: 0x38
    ::StringW levelDataAssetName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x40
    ::System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // private System.String <levelID>5__2
    // Size: 0x8
    // Offset: 0x48
    ::StringW $levelID$5__2;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<IBeatmapLevel> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x50
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevel*> $$u__1;
    public:
    // Creating value type constructor for type: $LoadBeatmapLevelFormAssetBundleAsync$d__4
    constexpr $LoadBeatmapLevelFormAssetBundleAsync$d__4(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel*> $$t__builder_ = {}, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel_ = {}, ::GlobalNamespace::BeatmapLevelDataLoaderSO* $$4__this_ = {}, ::StringW assetBundlePath_ = {}, ::StringW levelDataAssetName_ = {}, ::System::Threading::CancellationToken cancellationToken_ = {}, ::StringW $levelID$5__2_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevel*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, previewBeatmapLevel{previewBeatmapLevel_}, $$4__this{$$4__this_}, assetBundlePath{assetBundlePath_}, levelDataAssetName{levelDataAssetName_}, cancellationToken{cancellationToken_}, $levelID$5__2{$levelID$5__2_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<IBeatmapLevel> <>t__builder
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel*>& dyn_$$t__builder();
    // Get instance field reference: public IPreviewBeatmapLevel previewBeatmapLevel
    ::GlobalNamespace::IPreviewBeatmapLevel*& dyn_previewBeatmapLevel();
    // Get instance field reference: public BeatmapLevelDataLoaderSO <>4__this
    ::GlobalNamespace::BeatmapLevelDataLoaderSO*& dyn_$$4__this();
    // Get instance field reference: public System.String assetBundlePath
    ::StringW& dyn_assetBundlePath();
    // Get instance field reference: public System.String levelDataAssetName
    ::StringW& dyn_levelDataAssetName();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    ::System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: private System.String <levelID>5__2
    ::StringW& dyn_$levelID$5__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<IBeatmapLevel> <>u__1
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevel*>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x14C009C
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x14C0420
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BeatmapLevelDataLoaderSO/<LoadBeatmapLevelFormAssetBundleAsync>d__4
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::$LoadBeatmapLevelFormAssetBundleAsync$d__4::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelDataLoaderSO::$LoadBeatmapLevelFormAssetBundleAsync$d__4::*)()>(&GlobalNamespace::BeatmapLevelDataLoaderSO::$LoadBeatmapLevelFormAssetBundleAsync$d__4::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataLoaderSO::$LoadBeatmapLevelFormAssetBundleAsync$d__4), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::$LoadBeatmapLevelFormAssetBundleAsync$d__4::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelDataLoaderSO::$LoadBeatmapLevelFormAssetBundleAsync$d__4::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::BeatmapLevelDataLoaderSO::$LoadBeatmapLevelFormAssetBundleAsync$d__4::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataLoaderSO::$LoadBeatmapLevelFormAssetBundleAsync$d__4), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
