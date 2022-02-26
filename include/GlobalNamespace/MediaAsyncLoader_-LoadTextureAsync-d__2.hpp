// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MediaAsyncLoader
#include "GlobalNamespace/MediaAsyncLoader.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MediaAsyncLoader::$LoadTextureAsync$d__2, "", "MediaAsyncLoader/<LoadTextureAsync>d__2");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MediaAsyncLoader/<LoadTextureAsync>d__2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct MediaAsyncLoader::$LoadTextureAsync$d__2/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Texture2D*> $$t__builder;
    // public System.String path
    // Size: 0x8
    // Offset: 0x20
    ::StringW path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x28
    ::System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // private UnityEngine.Networking.UnityWebRequest <www>5__2
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Networking::UnityWebRequest* $www$5__2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Networking::UnityWebRequest*) == 0x8);
    // private UnityEngine.AsyncOperation <request>5__3
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::AsyncOperation* $request$5__3;
    // Field size check
    static_assert(sizeof(::UnityEngine::AsyncOperation*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x40
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $LoadTextureAsync$d__2
    constexpr $LoadTextureAsync$d__2(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Texture2D*> $$t__builder_ = {}, ::StringW path_ = {}, ::System::Threading::CancellationToken cancellationToken_ = {}, ::UnityEngine::Networking::UnityWebRequest* $www$5__2_ = {}, ::UnityEngine::AsyncOperation* $request$5__3_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, path{path_}, cancellationToken{cancellationToken_}, $www$5__2{$www$5__2_}, $request$5__3{$request$5__3_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D> <>t__builder
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Texture2D*>& dyn_$$t__builder();
    // Get instance field reference: public System.String path
    ::StringW& dyn_path();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    ::System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: private UnityEngine.Networking.UnityWebRequest <www>5__2
    ::UnityEngine::Networking::UnityWebRequest*& dyn_$www$5__2();
    // Get instance field reference: private UnityEngine.AsyncOperation <request>5__3
    ::UnityEngine::AsyncOperation*& dyn_$request$5__3();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x2A66CF0
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x2A670A0
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // MediaAsyncLoader/<LoadTextureAsync>d__2
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MediaAsyncLoader::$LoadTextureAsync$d__2::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MediaAsyncLoader::$LoadTextureAsync$d__2::*)()>(&GlobalNamespace::MediaAsyncLoader::$LoadTextureAsync$d__2::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MediaAsyncLoader::$LoadTextureAsync$d__2), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MediaAsyncLoader::$LoadTextureAsync$d__2::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MediaAsyncLoader::$LoadTextureAsync$d__2::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::MediaAsyncLoader::$LoadTextureAsync$d__2::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MediaAsyncLoader::$LoadTextureAsync$d__2), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
