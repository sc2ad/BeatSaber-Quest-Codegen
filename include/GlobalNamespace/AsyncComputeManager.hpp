// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IAsyncComputeManager
#include "GlobalNamespace/IAsyncComputeManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Concurrent
namespace System::Collections::Concurrent {
  // Forward declaring type: BlockingCollection`1<T>
  template<typename T>
  class BlockingCollection_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AsyncComputeOperation
  class AsyncComputeOperation;
  // Forward declaring type: AsyncComputeOperation`1<T>
  template<typename T>
  class AsyncComputeOperation_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: Thread
  class Thread;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AsyncComputeManager
  class AsyncComputeManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AsyncComputeManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AsyncComputeManager*, "", "AsyncComputeManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: AsyncComputeManager
  // [TokenAttribute] Offset: FFFFFFFF
  class AsyncComputeManager : public ::Il2CppObject/*, public ::GlobalNamespace::IAsyncComputeManager*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly System.Collections.Concurrent.BlockingCollection`1<AsyncComputeOperation> _asyncComputeRequests
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Concurrent::BlockingCollection_1<::GlobalNamespace::AsyncComputeOperation*>* asyncComputeRequests;
    // Field size check
    static_assert(sizeof(::System::Collections::Concurrent::BlockingCollection_1<::GlobalNamespace::AsyncComputeOperation*>*) == 0x8);
    // private readonly System.Threading.Thread _computeThread
    // Size: 0x8
    // Offset: 0x18
    ::System::Threading::Thread* computeThread;
    // Field size check
    static_assert(sizeof(::System::Threading::Thread*) == 0x8);
    // private System.Boolean _disposed
    // Size: 0x1
    // Offset: 0x20
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IAsyncComputeManager
    operator ::GlobalNamespace::IAsyncComputeManager() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IAsyncComputeManager*>(this);
    }
    // Get instance field reference: private readonly System.Collections.Concurrent.BlockingCollection`1<AsyncComputeOperation> _asyncComputeRequests
    ::System::Collections::Concurrent::BlockingCollection_1<::GlobalNamespace::AsyncComputeOperation*>*& dyn__asyncComputeRequests();
    // Get instance field reference: private readonly System.Threading.Thread _computeThread
    ::System::Threading::Thread*& dyn__computeThread();
    // Get instance field reference: private System.Boolean _disposed
    bool& dyn__disposed();
    // public System.Void Dispose()
    // Offset: 0x2B7BE10
    void Dispose();
    // public System.Void BeginOperation(AsyncComputeOperation operation)
    // Offset: 0x2B7BE80
    void BeginOperation(::GlobalNamespace::AsyncComputeOperation* operation);
    // public System.Threading.Tasks.Task`1<T> BeginOperation(AsyncComputeOperation`1<T> operation)
    // Offset: 0xFFFFFFFF
    template<class T>
    ::System::Threading::Tasks::Task_1<T>* BeginOperation(::GlobalNamespace::AsyncComputeOperation_1<T>* operation) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AsyncComputeManager::BeginOperation");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "BeginOperation", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(operation)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___generic__method, operation);
    }
    // private System.Void ComputeThreadRun()
    // Offset: 0x2B7BEE8
    void ComputeThreadRun();
    // public System.Void .ctor()
    // Offset: 0x2B7BD0C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsyncComputeManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AsyncComputeManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsyncComputeManager*, creationType>()));
    }
  }; // AsyncComputeManager
  #pragma pack(pop)
  static check_size<sizeof(AsyncComputeManager), 32 + sizeof(bool)> __GlobalNamespace_AsyncComputeManagerSizeCheck;
  static_assert(sizeof(AsyncComputeManager) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AsyncComputeManager::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AsyncComputeManager::*)()>(&GlobalNamespace::AsyncComputeManager::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AsyncComputeManager*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AsyncComputeManager::BeginOperation
// Il2CppName: BeginOperation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AsyncComputeManager::*)(::GlobalNamespace::AsyncComputeOperation*)>(&GlobalNamespace::AsyncComputeManager::BeginOperation)> {
  static const MethodInfo* get() {
    static auto* operation = &::il2cpp_utils::GetClassFromName("", "AsyncComputeOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AsyncComputeManager*), "BeginOperation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{operation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AsyncComputeManager::BeginOperation
// Il2CppName: BeginOperation
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::AsyncComputeManager::ComputeThreadRun
// Il2CppName: ComputeThreadRun
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AsyncComputeManager::*)()>(&GlobalNamespace::AsyncComputeManager::ComputeThreadRun)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AsyncComputeManager*), "ComputeThreadRun", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AsyncComputeManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
