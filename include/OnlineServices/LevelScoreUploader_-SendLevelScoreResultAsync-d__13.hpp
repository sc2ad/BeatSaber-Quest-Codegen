// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OnlineServices.LevelScoreUploader
#include "OnlineServices/LevelScoreUploader.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: OnlineServices.LevelScoreResultsData
#include "OnlineServices/LevelScoreResultsData.hpp"
// Including type: OnlineServices.SendLeaderboardEntryResult
#include "OnlineServices/SendLeaderboardEntryResult.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: PlatformServicesAvailabilityInfo
  class PlatformServicesAvailabilityInfo;
}
// Completed forward declares
// Type namespace: OnlineServices
namespace OnlineServices {
  // WARNING Size may be invalid!
  // Autogenerated type: OnlineServices.LevelScoreUploader/OnlineServices.<SendLevelScoreResultAsync>d__13
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct LevelScoreUploader::$SendLevelScoreResultAsync$d__13/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public OnlineServices.LevelScoreUploader <>4__this
    // Size: 0x8
    // Offset: 0x28
    OnlineServices::LevelScoreUploader* $$4__this;
    // Field size check
    static_assert(sizeof(OnlineServices::LevelScoreUploader*) == 0x8);
    // private System.Threading.CancellationToken <cancellationToken>5__2
    // Size: 0x8
    // Offset: 0x30
    System::Threading::CancellationToken $cancellationToken$5__2;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.PlatformServicesAvailabilityInfo> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::PlatformServicesAvailabilityInfo*> $$u__1;
    // private OnlineServices.LevelScoreUploader/OnlineServices.LevelScoreResultsDataUploadInfo <levelScoreResultsDataUploadInfo>5__3
    // Size: 0x8
    // Offset: 0x40
    OnlineServices::LevelScoreUploader::LevelScoreResultsDataUploadInfo* $levelScoreResultsDataUploadInfo$5__3;
    // Field size check
    static_assert(sizeof(OnlineServices::LevelScoreUploader::LevelScoreResultsDataUploadInfo*) == 0x8);
    // private OnlineServices.LevelScoreResultsData <levelScoreResultToUpload>5__4
    // Size: 0x30
    // Offset: 0x48
    OnlineServices::LevelScoreResultsData $levelScoreResultToUpload$5__4;
    // Field size check
    static_assert(sizeof(OnlineServices::LevelScoreResultsData) == 0x30);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.SendLeaderboardEntryResult> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x78
    System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::SendLeaderboardEntryResult> $$u__2;
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__3
    // Size: 0x8
    // Offset: 0x80
    System::Runtime::CompilerServices::TaskAwaiter $$u__3;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $SendLevelScoreResultAsync$d__13
    constexpr $SendLevelScoreResultAsync$d__13(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, OnlineServices::LevelScoreUploader* $$4__this_ = {}, System::Threading::CancellationToken $cancellationToken$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::PlatformServicesAvailabilityInfo*> $$u__1_ = {}, OnlineServices::LevelScoreUploader::LevelScoreResultsDataUploadInfo* $levelScoreResultsDataUploadInfo$5__3_ = {}, OnlineServices::LevelScoreResultsData $levelScoreResultToUpload$5__4_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::SendLeaderboardEntryResult> $$u__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__3_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $cancellationToken$5__2{$cancellationToken$5__2_}, $$u__1{$$u__1_}, $levelScoreResultsDataUploadInfo$5__3{$levelScoreResultsDataUploadInfo$5__3_}, $levelScoreResultToUpload$5__4{$levelScoreResultToUpload$5__4_}, $$u__2{$$u__2_}, $$u__3{$$u__3_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public OnlineServices.LevelScoreUploader <>4__this
    OnlineServices::LevelScoreUploader*& dyn_$$4__this();
    // Get instance field reference: private System.Threading.CancellationToken <cancellationToken>5__2
    System::Threading::CancellationToken& dyn_$cancellationToken$5__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.PlatformServicesAvailabilityInfo> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::PlatformServicesAvailabilityInfo*>& dyn_$$u__1();
    // Get instance field reference: private OnlineServices.LevelScoreUploader/OnlineServices.LevelScoreResultsDataUploadInfo <levelScoreResultsDataUploadInfo>5__3
    OnlineServices::LevelScoreUploader::LevelScoreResultsDataUploadInfo*& dyn_$levelScoreResultsDataUploadInfo$5__3();
    // Get instance field reference: private OnlineServices.LevelScoreResultsData <levelScoreResultToUpload>5__4
    OnlineServices::LevelScoreResultsData& dyn_$levelScoreResultToUpload$5__4();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.SendLeaderboardEntryResult> <>u__2
    System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::SendLeaderboardEntryResult>& dyn_$$u__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__3
    System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__3();
    // private System.Void MoveNext()
    // Offset: 0x1120C70
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x112148C
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OnlineServices.LevelScoreUploader/OnlineServices.<SendLevelScoreResultAsync>d__13
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::LevelScoreUploader::$SendLevelScoreResultAsync$d__13, "OnlineServices", "LevelScoreUploader/<SendLevelScoreResultAsync>d__13");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OnlineServices::LevelScoreUploader::$SendLevelScoreResultAsync$d__13::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::LevelScoreUploader::$SendLevelScoreResultAsync$d__13::*)()>(&OnlineServices::LevelScoreUploader::$SendLevelScoreResultAsync$d__13::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::LevelScoreUploader::$SendLevelScoreResultAsync$d__13), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OnlineServices::LevelScoreUploader::$SendLevelScoreResultAsync$d__13::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::LevelScoreUploader::$SendLevelScoreResultAsync$d__13::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&OnlineServices::LevelScoreUploader::$SendLevelScoreResultAsync$d__13::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::LevelScoreUploader::$SendLevelScoreResultAsync$d__13), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
