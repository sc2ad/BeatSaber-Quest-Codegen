// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: AnnotatedBeatmapLevelCollectionCell
#include "GlobalNamespace/AnnotatedBeatmapLevelCollectionCell.hpp"
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
// Including type: AdditionalContentModel/EntitlementStatus
#include "GlobalNamespace/AdditionalContentModel.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: AdditionalContentModel because it is already included!
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: AnnotatedBeatmapLevelCollectionCell/<RefreshAvailabilityAsync>d__23
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct AnnotatedBeatmapLevelCollectionCell::$RefreshAvailabilityAsync$d__23/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public AnnotatedBeatmapLevelCollectionCell <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::AnnotatedBeatmapLevelCollectionCell* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*) == 0x8);
    // public AdditionalContentModel contentModel
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::AdditionalContentModel* contentModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AdditionalContentModel*) == 0x8);
    // private System.Threading.CancellationToken <cancellationToken>5__2
    // Size: 0x8
    // Offset: 0x38
    System::Threading::CancellationToken $cancellationToken$5__2;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private System.Int32 <numberOfOwnedLevels>5__3
    // Size: 0x4
    // Offset: 0x40
    int $numberOfOwnedLevels$5__3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean <error>5__4
    // Size: 0x1
    // Offset: 0x44
    bool $error$5__4;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private IPreviewBeatmapLevel[] <>7__wrap4
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<GlobalNamespace::IPreviewBeatmapLevel*> $$7__wrap4;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::IPreviewBeatmapLevel*>) == 0x8);
    // private System.Int32 <>7__wrap5
    // Size: 0x4
    // Offset: 0x50
    int $$7__wrap5;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<AdditionalContentModel/EntitlementStatus> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x58
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$u__1;
    public:
    // Creating value type constructor for type: $RefreshAvailabilityAsync$d__23
    constexpr $RefreshAvailabilityAsync$d__23(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, GlobalNamespace::AnnotatedBeatmapLevelCollectionCell* $$4__this_ = {}, GlobalNamespace::AdditionalContentModel* contentModel_ = {}, System::Threading::CancellationToken $cancellationToken$5__2_ = {}, int $numberOfOwnedLevels$5__3_ = {}, bool $error$5__4_ = {}, ::ArrayW<GlobalNamespace::IPreviewBeatmapLevel*> $$7__wrap4_ = ::ArrayW<GlobalNamespace::IPreviewBeatmapLevel*>(nullptr), int $$7__wrap5_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, contentModel{contentModel_}, $cancellationToken$5__2{$cancellationToken$5__2_}, $numberOfOwnedLevels$5__3{$numberOfOwnedLevels$5__3_}, $error$5__4{$error$5__4_}, $$7__wrap4{$$7__wrap4_}, $$7__wrap5{$$7__wrap5_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public AnnotatedBeatmapLevelCollectionCell <>4__this
    GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*& dyn_$$4__this();
    // Get instance field reference: public AdditionalContentModel contentModel
    GlobalNamespace::AdditionalContentModel*& dyn_contentModel();
    // Get instance field reference: private System.Threading.CancellationToken <cancellationToken>5__2
    System::Threading::CancellationToken& dyn_$cancellationToken$5__2();
    // Get instance field reference: private System.Int32 <numberOfOwnedLevels>5__3
    int& dyn_$numberOfOwnedLevels$5__3();
    // Get instance field reference: private System.Boolean <error>5__4
    bool& dyn_$error$5__4();
    // Get instance field reference: private IPreviewBeatmapLevel[] <>7__wrap4
    ::ArrayW<GlobalNamespace::IPreviewBeatmapLevel*>& dyn_$$7__wrap4();
    // Get instance field reference: private System.Int32 <>7__wrap5
    int& dyn_$$7__wrap5();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<AdditionalContentModel/EntitlementStatus> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x1242118
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x1242A60
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // AnnotatedBeatmapLevelCollectionCell/<RefreshAvailabilityAsync>d__23
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::$RefreshAvailabilityAsync$d__23, "", "AnnotatedBeatmapLevelCollectionCell/<RefreshAvailabilityAsync>d__23");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::$RefreshAvailabilityAsync$d__23::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::$RefreshAvailabilityAsync$d__23::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::$RefreshAvailabilityAsync$d__23::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::$RefreshAvailabilityAsync$d__23), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::$RefreshAvailabilityAsync$d__23::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::$RefreshAvailabilityAsync$d__23::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::$RefreshAvailabilityAsync$d__23::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::$RefreshAvailabilityAsync$d__23), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
