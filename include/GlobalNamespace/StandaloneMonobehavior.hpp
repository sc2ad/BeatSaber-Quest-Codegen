// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.FrameTiming
#include "UnityEngine/FrameTiming.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: StandaloneMonobehavior
  // [TokenAttribute] Offset: FFFFFFFF
  class StandaloneMonobehavior : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::StandaloneMonobehavior::$AfterOneFrame$d__18
    class $AfterOneFrame$d__18;
    // Nested type: GlobalNamespace::StandaloneMonobehavior::$RunAsyncCoroutine$d__21
    class $RunAsyncCoroutine$d__21;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Boolean _isReady
    // Size: 0x1
    // Offset: 0x18
    bool isReady;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isReady and: startTime
    char __padding0[0x3] = {};
    // private System.Single _startTime
    // Size: 0x4
    // Offset: 0x1C
    float startTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.FrameTiming[] _lastFrameTimings
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<UnityEngine::FrameTiming> lastFrameTimings;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::FrameTiming>) == 0x8);
    // private System.Int32 _lastFrameTimeCount
    // Size: 0x4
    // Offset: 0x28
    int lastFrameTimeCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean _isReady
    bool& dyn__isReady();
    // Get instance field reference: private System.Single _startTime
    float& dyn__startTime();
    // Get instance field reference: private UnityEngine.FrameTiming[] _lastFrameTimings
    ::ArrayW<UnityEngine::FrameTiming>& dyn__lastFrameTimings();
    // Get instance field reference: private System.Int32 _lastFrameTimeCount
    int& dyn__lastFrameTimeCount();
    // public System.Single get_objectLifeTime()
    // Offset: 0x18D9AB4
    float get_objectLifeTime();
    // public System.Single get_deltaTime()
    // Offset: 0x18D9AE0
    float get_deltaTime();
    // public System.Single get_lastFrameTime()
    // Offset: 0x18D9AE8
    float get_lastFrameTime();
    // public System.Boolean get_isReady()
    // Offset: 0x18D9B70
    bool get_isReady();
    // protected System.Void Awake()
    // Offset: 0x18D9B78
    void Awake();
    // protected System.Void Start()
    // Offset: 0x18D9BA0
    void Start();
    // protected System.Void Update()
    // Offset: 0x18D9BA4
    void Update();
    // protected System.Void OnDestroy()
    // Offset: 0x18D9BA8
    void OnDestroy();
    // protected System.Void OnApplicationPause(System.Boolean pauseStatus)
    // Offset: 0x18D9BAC
    void OnApplicationPause(bool pauseStatus);
    // public System.Void WhenReady(System.Action action)
    // Offset: 0x18D9BB0
    void WhenReady(System::Action* action);
    // private System.Collections.IEnumerator AfterOneFrame(System.Action action)
    // Offset: 0x18D9BF8
    System::Collections::IEnumerator* AfterOneFrame(System::Action* action);
    // static public T Create()
    // Offset: 0xFFFFFFFF
    template<class T>
    static T Create() {
      static_assert(std::is_convertible_v<T, GlobalNamespace::StandaloneMonobehavior*>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StandaloneMonobehavior::Create");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "StandaloneMonobehavior", "Create", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method);
    }
    // public System.Threading.Tasks.Task RunAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x18D9CA0
    System::Threading::Tasks::Task* RunAsync(System::Threading::CancellationToken cancellationToken);
    // private System.Collections.IEnumerator RunAsyncCoroutine(System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> tcs, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x18D9D3C
    System::Collections::IEnumerator* RunAsyncCoroutine(System::Threading::Tasks::TaskCompletionSource_1<bool>* tcs, System::Threading::CancellationToken cancellationToken);
    // private System.Single GetLastFrameTime()
    // Offset: 0x18D9AEC
    float GetLastFrameTime();
    // public System.Void .ctor()
    // Offset: 0x18CDE30
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandaloneMonobehavior* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StandaloneMonobehavior::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandaloneMonobehavior*, creationType>()));
    }
  }; // StandaloneMonobehavior
  #pragma pack(pop)
  static check_size<sizeof(StandaloneMonobehavior), 40 + sizeof(int)> __GlobalNamespace_StandaloneMonobehaviorSizeCheck;
  static_assert(sizeof(StandaloneMonobehavior) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandaloneMonobehavior*, "", "StandaloneMonobehavior");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::get_objectLifeTime
// Il2CppName: get_objectLifeTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::StandaloneMonobehavior::*)()>(&GlobalNamespace::StandaloneMonobehavior::get_objectLifeTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandaloneMonobehavior*), "get_objectLifeTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::get_deltaTime
// Il2CppName: get_deltaTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::StandaloneMonobehavior::*)()>(&GlobalNamespace::StandaloneMonobehavior::get_deltaTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandaloneMonobehavior*), "get_deltaTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::get_lastFrameTime
// Il2CppName: get_lastFrameTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::StandaloneMonobehavior::*)()>(&GlobalNamespace::StandaloneMonobehavior::get_lastFrameTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandaloneMonobehavior*), "get_lastFrameTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::get_isReady
// Il2CppName: get_isReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::StandaloneMonobehavior::*)()>(&GlobalNamespace::StandaloneMonobehavior::get_isReady)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandaloneMonobehavior*), "get_isReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandaloneMonobehavior::*)()>(&GlobalNamespace::StandaloneMonobehavior::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandaloneMonobehavior*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandaloneMonobehavior::*)()>(&GlobalNamespace::StandaloneMonobehavior::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandaloneMonobehavior*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandaloneMonobehavior::*)()>(&GlobalNamespace::StandaloneMonobehavior::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandaloneMonobehavior*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandaloneMonobehavior::*)()>(&GlobalNamespace::StandaloneMonobehavior::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandaloneMonobehavior*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::OnApplicationPause
// Il2CppName: OnApplicationPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandaloneMonobehavior::*)(bool)>(&GlobalNamespace::StandaloneMonobehavior::OnApplicationPause)> {
  static const MethodInfo* get() {
    static auto* pauseStatus = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandaloneMonobehavior*), "OnApplicationPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pauseStatus});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::WhenReady
// Il2CppName: WhenReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandaloneMonobehavior::*)(System::Action*)>(&GlobalNamespace::StandaloneMonobehavior::WhenReady)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandaloneMonobehavior*), "WhenReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::AfterOneFrame
// Il2CppName: AfterOneFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::StandaloneMonobehavior::*)(System::Action*)>(&GlobalNamespace::StandaloneMonobehavior::AfterOneFrame)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandaloneMonobehavior*), "AfterOneFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::Create
// Il2CppName: Create
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::RunAsync
// Il2CppName: RunAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (GlobalNamespace::StandaloneMonobehavior::*)(System::Threading::CancellationToken)>(&GlobalNamespace::StandaloneMonobehavior::RunAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandaloneMonobehavior*), "RunAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::RunAsyncCoroutine
// Il2CppName: RunAsyncCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::StandaloneMonobehavior::*)(System::Threading::Tasks::TaskCompletionSource_1<bool>*, System::Threading::CancellationToken)>(&GlobalNamespace::StandaloneMonobehavior::RunAsyncCoroutine)> {
  static const MethodInfo* get() {
    static auto* tcs = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "TaskCompletionSource`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandaloneMonobehavior*), "RunAsyncCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tcs, cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::GetLastFrameTime
// Il2CppName: GetLastFrameTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::StandaloneMonobehavior::*)()>(&GlobalNamespace::StandaloneMonobehavior::GetLastFrameTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandaloneMonobehavior*), "GetLastFrameTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
