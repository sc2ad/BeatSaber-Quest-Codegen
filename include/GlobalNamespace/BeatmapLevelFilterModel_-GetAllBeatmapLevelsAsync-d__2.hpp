// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapLevelFilterModel
#include "GlobalNamespace/BeatmapLevelFilterModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: AdditionalContentModel/EntitlementStatus
#include "GlobalNamespace/AdditionalContentModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
  // Skipping declaration: AdditionalContentModel because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelFilterModel::$GetAllBeatmapLevelsAsync$d__2, "", "BeatmapLevelFilterModel/<GetAllBeatmapLevelsAsync>d__2");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BeatmapLevelFilterModel/<GetAllBeatmapLevelsAsync>d__2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct BeatmapLevelFilterModel::$GetAllBeatmapLevelsAsync$d__2/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<IPreviewBeatmapLevel>> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*> $$t__builder;
    // public IBeatmapLevelPack[] beatmapLevelPacks
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*> beatmapLevelPacks;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*>) == 0x8);
    // public SongPackMask songPackMask
    // Size: 0x10
    // Offset: 0x28
    ::GlobalNamespace::SongPackMask songPackMask;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SongPackMask) == 0x10);
    // public System.Boolean onlyOwned
    // Size: 0x1
    // Offset: 0x38
    bool onlyOwned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public AdditionalContentModel additionalContentModel
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AdditionalContentModel*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x48
    ::System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // private System.Collections.Generic.List`1<IPreviewBeatmapLevel> <levels>5__2
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>* $levels$5__2;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*) == 0x8);
    // private IBeatmapLevelPack[] <>7__wrap2
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*> $$7__wrap2;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*>) == 0x8);
    // private System.Int32 <>7__wrap3
    // Size: 0x4
    // Offset: 0x60
    int $$7__wrap3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.Generic.IEnumerator`1<IPreviewBeatmapLevel> <>7__wrap4
    // Size: 0x8
    // Offset: 0x68
    ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>* $$7__wrap4;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>*) == 0x8);
    // private IPreviewBeatmapLevel <beatmapLevel>5__6
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::IPreviewBeatmapLevel* $beatmapLevel$5__6;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<AdditionalContentModel/EntitlementStatus> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x78
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$u__1;
    public:
    // Creating value type constructor for type: $GetAllBeatmapLevelsAsync$d__2
    constexpr $GetAllBeatmapLevelsAsync$d__2(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*> $$t__builder_ = {}, ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*> beatmapLevelPacks_ = ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*>(static_cast<void*>(nullptr)), ::GlobalNamespace::SongPackMask songPackMask_ = {}, bool onlyOwned_ = {}, ::GlobalNamespace::AdditionalContentModel* additionalContentModel_ = {}, ::System::Threading::CancellationToken cancellationToken_ = {}, ::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>* $levels$5__2_ = {}, ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*> $$7__wrap2_ = ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*>(static_cast<void*>(nullptr)), int $$7__wrap3_ = {}, ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>* $$7__wrap4_ = {}, ::GlobalNamespace::IPreviewBeatmapLevel* $beatmapLevel$5__6_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, beatmapLevelPacks{beatmapLevelPacks_}, songPackMask{songPackMask_}, onlyOwned{onlyOwned_}, additionalContentModel{additionalContentModel_}, cancellationToken{cancellationToken_}, $levels$5__2{$levels$5__2_}, $$7__wrap2{$$7__wrap2_}, $$7__wrap3{$$7__wrap3_}, $$7__wrap4{$$7__wrap4_}, $beatmapLevel$5__6{$beatmapLevel$5__6_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Creating interface conversion operator: i_IAsyncStateMachine
    inline ::System::Runtime::CompilerServices::IAsyncStateMachine* i_IAsyncStateMachine() noexcept {
      return reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<IPreviewBeatmapLevel>> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*>& dyn_$$t__builder();
    // Get instance field reference: public IBeatmapLevelPack[] beatmapLevelPacks
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*>& dyn_beatmapLevelPacks();
    // Get instance field reference: public SongPackMask songPackMask
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SongPackMask& dyn_songPackMask();
    // Get instance field reference: public System.Boolean onlyOwned
    [[deprecated("Use field access instead!")]] bool& dyn_onlyOwned();
    // Get instance field reference: public AdditionalContentModel additionalContentModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AdditionalContentModel*& dyn_additionalContentModel();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: private System.Collections.Generic.List`1<IPreviewBeatmapLevel> <levels>5__2
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*& dyn_$levels$5__2();
    // Get instance field reference: private IBeatmapLevelPack[] <>7__wrap2
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*>& dyn_$$7__wrap2();
    // Get instance field reference: private System.Int32 <>7__wrap3
    [[deprecated("Use field access instead!")]] int& dyn_$$7__wrap3();
    // Get instance field reference: private System.Collections.Generic.IEnumerator`1<IPreviewBeatmapLevel> <>7__wrap4
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>*& dyn_$$7__wrap4();
    // Get instance field reference: private IPreviewBeatmapLevel <beatmapLevel>5__6
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IPreviewBeatmapLevel*& dyn_$beatmapLevel$5__6();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<AdditionalContentModel/EntitlementStatus> <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AdditionalContentModel::EntitlementStatus>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x154B914
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x154C064
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BeatmapLevelFilterModel/<GetAllBeatmapLevelsAsync>d__2
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelFilterModel::$GetAllBeatmapLevelsAsync$d__2::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelFilterModel::$GetAllBeatmapLevelsAsync$d__2::*)()>(&GlobalNamespace::BeatmapLevelFilterModel::$GetAllBeatmapLevelsAsync$d__2::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelFilterModel::$GetAllBeatmapLevelsAsync$d__2), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelFilterModel::$GetAllBeatmapLevelsAsync$d__2::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelFilterModel::$GetAllBeatmapLevelsAsync$d__2::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::BeatmapLevelFilterModel::$GetAllBeatmapLevelsAsync$d__2::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelFilterModel::$GetAllBeatmapLevelsAsync$d__2), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
