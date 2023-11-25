// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: IStandaloneMonobehavior
#include "GlobalNamespace/IStandaloneMonobehavior.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerSessionManager
  class MultiplayerSessionManager;
  // Forward declaring type: ConnectedPlayerManager
  class ConnectedPlayerManager;
  // Forward declaring type: MockPlayerFiniteStateMachine
  class MockPlayerFiniteStateMachine;
  // Forward declaring type: IMockBeatmapDataProvider
  class IMockBeatmapDataProvider;
  // Forward declaring type: IConnectionManager
  class IConnectionManager;
  // Forward declaring type: IConnectionInitParams`1<T>
  template<typename T>
  class IConnectionInitParams_1;
  // Forward declaring type: IStandaloneThreadRunner
  class IStandaloneThreadRunner;
  // Forward declaring type: ConnectionFailedReason
  struct ConnectionFailedReason;
  // Forward declaring type: DisconnectedReason
  struct DisconnectedReason;
}
// Forward declaring namespace: BGNet::Core
namespace BGNet::Core {
  // Forward declaring type: ITimeProvider
  class ITimeProvider;
  // Forward declaring type: ITaskUtility
  class ITaskUtility;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MockPlayerInstance
  class MockPlayerInstance;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MockPlayerInstance);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerInstance*, "", "MockPlayerInstance");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: MockPlayerInstance
  // [TokenAttribute] Offset: FFFFFFFF
  class MockPlayerInstance : public ::Il2CppObject/*, public ::System::IDisposable, public ::GlobalNamespace::IStandaloneMonobehavior*/ {
    public:
    // Nested type: ::GlobalNamespace::MockPlayerInstance::$$c__DisplayClass17_0_1<T>
    template<typename T>
    class $$c__DisplayClass17_0_1;
    // Nested type: ::GlobalNamespace::MockPlayerInstance::$RunAsync$d__18
    struct $RunAsync$d__18;
    // Nested type: ::GlobalNamespace::MockPlayerInstance::$Stop$d__21
    struct $Stop$d__21;
    // Nested type: ::GlobalNamespace::MockPlayerInstance::$DisposeAsync$d__22
    struct $DisposeAsync$d__22;
    public:
    // private readonly System.String _id
    // Size: 0x8
    // Offset: 0x10
    ::StringW id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.String _userId
    // Size: 0x8
    // Offset: 0x18
    ::StringW userId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.String _userName
    // Size: 0x8
    // Offset: 0x20
    ::StringW userName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly BGNet.Core.ITimeProvider _timeProvider
    // Size: 0x8
    // Offset: 0x28
    ::BGNet::Core::ITimeProvider* timeProvider;
    // Field size check
    static_assert(sizeof(::BGNet::Core::ITimeProvider*) == 0x8);
    // private readonly BGNet.Core.ITaskUtility _taskUtility
    // Size: 0x8
    // Offset: 0x30
    ::BGNet::Core::ITaskUtility* taskUtility;
    // Field size check
    static_assert(sizeof(::BGNet::Core::ITaskUtility*) == 0x8);
    // private readonly System.Threading.CancellationTokenSource _cancellationTokenSource
    // Size: 0x8
    // Offset: 0x38
    ::System::Threading::CancellationTokenSource* cancellationTokenSource;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationTokenSource*) == 0x8);
    // private readonly MultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::MultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerSessionManager*) == 0x8);
    // private readonly ConnectedPlayerManager _connectedPlayerManager
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ConnectedPlayerManager*) == 0x8);
    // private readonly MockPlayerFiniteStateMachine _fsm
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::MockPlayerFiniteStateMachine* fsm;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MockPlayerFiniteStateMachine*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::IStandaloneMonobehavior
    operator ::GlobalNamespace::IStandaloneMonobehavior() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IStandaloneMonobehavior*>(this);
    }
    // Creating interface conversion operator: i_IStandaloneMonobehavior
    inline ::GlobalNamespace::IStandaloneMonobehavior* i_IStandaloneMonobehavior() noexcept {
      return reinterpret_cast<::GlobalNamespace::IStandaloneMonobehavior*>(this);
    }
    // Get instance field reference: private readonly System.String _id
    [[deprecated("Use field access instead!")]] ::StringW& dyn__id();
    // Get instance field reference: private readonly System.String _userId
    [[deprecated("Use field access instead!")]] ::StringW& dyn__userId();
    // Get instance field reference: private readonly System.String _userName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__userName();
    // Get instance field reference: private readonly BGNet.Core.ITimeProvider _timeProvider
    [[deprecated("Use field access instead!")]] ::BGNet::Core::ITimeProvider*& dyn__timeProvider();
    // Get instance field reference: private readonly BGNet.Core.ITaskUtility _taskUtility
    [[deprecated("Use field access instead!")]] ::BGNet::Core::ITaskUtility*& dyn__taskUtility();
    // Get instance field reference: private readonly System.Threading.CancellationTokenSource _cancellationTokenSource
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationTokenSource*& dyn__cancellationTokenSource();
    // Get instance field reference: private readonly MultiplayerSessionManager _multiplayerSessionManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerSessionManager*& dyn__multiplayerSessionManager();
    // Get instance field reference: private readonly ConnectedPlayerManager _connectedPlayerManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ConnectedPlayerManager*& dyn__connectedPlayerManager();
    // Get instance field reference: private readonly MockPlayerFiniteStateMachine _fsm
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MockPlayerFiniteStateMachine*& dyn__fsm();
    // public System.String get_id()
    // Offset: 0x2B24C30
    ::StringW get_id();
    // public System.String get_userId()
    // Offset: 0x2B24C38
    ::StringW get_userId();
    // public System.String get_userName()
    // Offset: 0x2B24C40
    ::StringW get_userName();
    // public System.Void .ctor(BGNet.Core.ITimeProvider timeProvider, BGNet.Core.ITaskUtility taskUtility, IMockBeatmapDataProvider beatmapDataProvider, IConnectionManager connectionManager)
    // Offset: 0x2B24C48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockPlayerInstance* New_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IMockBeatmapDataProvider* beatmapDataProvider, ::GlobalNamespace::IConnectionManager* connectionManager) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MockPlayerInstance::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockPlayerInstance*, creationType>(timeProvider, taskUtility, beatmapDataProvider, connectionManager)));
    }
    // public System.Void Tick()
    // Offset: 0x2B24F40
    void Tick();
    // public System.Void ConnectToServer(IConnectionInitParams`1<T> connectionInitParams)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void ConnectToServer(::GlobalNamespace::IConnectionInitParams_1<T>* connectionInitParams) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::GlobalNamespace::IConnectionManager>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MockPlayerInstance::ConnectToServer");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ConnectToServer", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(connectionInitParams)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, connectionInitParams);
    }
    // public System.Threading.Tasks.Task RunAsync(IStandaloneThreadRunner runner, System.Threading.CancellationToken token)
    // Offset: 0x2B24F58
    ::System::Threading::Tasks::Task* RunAsync(::GlobalNamespace::IStandaloneThreadRunner* runner, ::System::Threading::CancellationToken token);
    // public System.Void Dispatch(System.Action action)
    // Offset: 0x2B2505C
    void Dispatch(::System::Action* action);
    // public System.Threading.Tasks.Task DispatchAsync(System.Func`1<System.Threading.Tasks.Task> action)
    // Offset: 0x2B25078
    ::System::Threading::Tasks::Task* DispatchAsync(::System::Func_1<::System::Threading::Tasks::Task*>* action);
    // public System.Void Stop()
    // Offset: 0x2B25094
    void Stop();
    // private System.Threading.Tasks.Task DisposeAsync()
    // Offset: 0x2B25154
    ::System::Threading::Tasks::Task* DisposeAsync();
    // public System.Void Dispose()
    // Offset: 0x2B25244
    void Dispose();
    // private System.Void <.ctor>b__15_0(ConnectionFailedReason r)
    // Offset: 0x2B25308
    void $_ctor$b__15_0(::GlobalNamespace::ConnectionFailedReason r);
    // private System.Void <.ctor>b__15_1(DisconnectedReason r)
    // Offset: 0x2B2530C
    void $_ctor$b__15_1(::GlobalNamespace::DisconnectedReason r);
    // private System.Threading.Tasks.Task <DisposeAsync>b__22_0()
    // Offset: 0x2B25310
    ::System::Threading::Tasks::Task* $DisposeAsync$b__22_0();
  }; // MockPlayerInstance
  #pragma pack(pop)
  static check_size<sizeof(MockPlayerInstance), 80 + sizeof(::GlobalNamespace::MockPlayerFiniteStateMachine*)> __GlobalNamespace_MockPlayerInstanceSizeCheck;
  static_assert(sizeof(MockPlayerInstance) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerInstance::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MockPlayerInstance::*)()>(&GlobalNamespace::MockPlayerInstance::get_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerInstance*), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerInstance::get_userId
// Il2CppName: get_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MockPlayerInstance::*)()>(&GlobalNamespace::MockPlayerInstance::get_userId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerInstance*), "get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerInstance::get_userName
// Il2CppName: get_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MockPlayerInstance::*)()>(&GlobalNamespace::MockPlayerInstance::get_userName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerInstance*), "get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerInstance::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerInstance::Tick
// Il2CppName: Tick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerInstance::*)()>(&GlobalNamespace::MockPlayerInstance::Tick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerInstance*), "Tick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerInstance::ConnectToServer
// Il2CppName: ConnectToServer
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerInstance::RunAsync
// Il2CppName: RunAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (GlobalNamespace::MockPlayerInstance::*)(::GlobalNamespace::IStandaloneThreadRunner*, ::System::Threading::CancellationToken)>(&GlobalNamespace::MockPlayerInstance::RunAsync)> {
  static const MethodInfo* get() {
    static auto* runner = &::il2cpp_utils::GetClassFromName("", "IStandaloneThreadRunner")->byval_arg;
    static auto* token = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerInstance*), "RunAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{runner, token});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerInstance::Dispatch
// Il2CppName: Dispatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerInstance::*)(::System::Action*)>(&GlobalNamespace::MockPlayerInstance::Dispatch)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerInstance*), "Dispatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerInstance::DispatchAsync
// Il2CppName: DispatchAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (GlobalNamespace::MockPlayerInstance::*)(::System::Func_1<::System::Threading::Tasks::Task*>*)>(&GlobalNamespace::MockPlayerInstance::DispatchAsync)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerInstance*), "DispatchAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerInstance::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerInstance::*)()>(&GlobalNamespace::MockPlayerInstance::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerInstance*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerInstance::DisposeAsync
// Il2CppName: DisposeAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (GlobalNamespace::MockPlayerInstance::*)()>(&GlobalNamespace::MockPlayerInstance::DisposeAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerInstance*), "DisposeAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerInstance::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerInstance::*)()>(&GlobalNamespace::MockPlayerInstance::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerInstance*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerInstance::$_ctor$b__15_0
// Il2CppName: <.ctor>b__15_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerInstance::*)(::GlobalNamespace::ConnectionFailedReason)>(&GlobalNamespace::MockPlayerInstance::$_ctor$b__15_0)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("", "ConnectionFailedReason")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerInstance*), "<.ctor>b__15_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerInstance::$_ctor$b__15_1
// Il2CppName: <.ctor>b__15_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerInstance::*)(::GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::MockPlayerInstance::$_ctor$b__15_1)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("", "DisconnectedReason")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerInstance*), "<.ctor>b__15_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerInstance::$DisposeAsync$b__22_0
// Il2CppName: <DisposeAsync>b__22_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (GlobalNamespace::MockPlayerInstance::*)()>(&GlobalNamespace::MockPlayerInstance::$DisposeAsync$b__22_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerInstance*), "<DisposeAsync>b__22_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};