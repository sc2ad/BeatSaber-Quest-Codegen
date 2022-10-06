// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapDataSO
#include "GlobalNamespace/BeatmapDataSO.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
}
// Forward declaring namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Forward declaring type: BeatmapSaveData
  class BeatmapSaveData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataSO::$GetBeatmapDataAsync$d__2, "", "BeatmapDataSO/<GetBeatmapDataAsync>d__2");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BeatmapDataSO/<GetBeatmapDataAsync>d__2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct BeatmapDataSO::$GetBeatmapDataAsync$d__2/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<IReadonlyBeatmapData> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> $$t__builder;
    // public BeatmapDifficulty beatmapDifficulty
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDifficulty) == 0x4);
    // public System.Single beatsPerMinute
    // Size: 0x4
    // Offset: 0x24
    float beatsPerMinute;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean loadingForDesignatedEnvironment
    // Size: 0x1
    // Offset: 0x28
    bool loadingForDesignatedEnvironment;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public EnvironmentInfoSO environmentInfo
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::EnvironmentInfoSO* environmentInfo;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentInfoSO*) == 0x8);
    // public PlayerSpecificSettings playerSpecificSettings
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerSpecificSettings*) == 0x8);
    // public BeatmapDataSO <>4__this
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::BeatmapDataSO* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDataSO*) == 0x8);
    // private BeatmapDataSO/<>c__DisplayClass2_0 <>8__1
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::BeatmapDataSO::$$c__DisplayClass2_0* $$8__1;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDataSO::$$c__DisplayClass2_0*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<BeatmapSaveDataVersion3.BeatmapSaveData> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x50
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatmapSaveDataVersion3::BeatmapSaveData*> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__2
    // Size: 0x8
    // Offset: 0x58
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__2;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $GetBeatmapDataAsync$d__2
    constexpr $GetBeatmapDataAsync$d__2(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> $$t__builder_ = {}, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty_ = {}, float beatsPerMinute_ = {}, bool loadingForDesignatedEnvironment_ = {}, ::GlobalNamespace::EnvironmentInfoSO* environmentInfo_ = {}, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings_ = {}, ::GlobalNamespace::BeatmapDataSO* $$4__this_ = {}, ::GlobalNamespace::BeatmapDataSO::$$c__DisplayClass2_0* $$8__1_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatmapSaveDataVersion3::BeatmapSaveData*> $$u__1_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, beatmapDifficulty{beatmapDifficulty_}, beatsPerMinute{beatsPerMinute_}, loadingForDesignatedEnvironment{loadingForDesignatedEnvironment_}, environmentInfo{environmentInfo_}, playerSpecificSettings{playerSpecificSettings_}, $$4__this{$$4__this_}, $$8__1{$$8__1_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<IReadonlyBeatmapData> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>& dyn_$$t__builder();
    // Get instance field reference: public BeatmapDifficulty beatmapDifficulty
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDifficulty& dyn_beatmapDifficulty();
    // Get instance field reference: public System.Single beatsPerMinute
    [[deprecated("Use field access instead!")]] float& dyn_beatsPerMinute();
    // Get instance field reference: public System.Boolean loadingForDesignatedEnvironment
    [[deprecated("Use field access instead!")]] bool& dyn_loadingForDesignatedEnvironment();
    // Get instance field reference: public EnvironmentInfoSO environmentInfo
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EnvironmentInfoSO*& dyn_environmentInfo();
    // Get instance field reference: public PlayerSpecificSettings playerSpecificSettings
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerSpecificSettings*& dyn_playerSpecificSettings();
    // Get instance field reference: public BeatmapDataSO <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDataSO*& dyn_$$4__this();
    // Get instance field reference: private BeatmapDataSO/<>c__DisplayClass2_0 <>8__1
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDataSO::$$c__DisplayClass2_0*& dyn_$$8__1();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<BeatmapSaveDataVersion3.BeatmapSaveData> <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__2
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__2();
    // private System.Void MoveNext()
    // Offset: 0x137CD50
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x137D0B8
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BeatmapDataSO/<GetBeatmapDataAsync>d__2
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataSO::$GetBeatmapDataAsync$d__2::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDataSO::$GetBeatmapDataAsync$d__2::*)()>(&GlobalNamespace::BeatmapDataSO::$GetBeatmapDataAsync$d__2::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataSO::$GetBeatmapDataAsync$d__2), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataSO::$GetBeatmapDataAsync$d__2::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDataSO::$GetBeatmapDataAsync$d__2::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::BeatmapDataSO::$GetBeatmapDataAsync$d__2::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataSO::$GetBeatmapDataAsync$d__2), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
