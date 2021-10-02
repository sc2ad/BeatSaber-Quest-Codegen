// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationBase_1.hpp"
// Including type: UnityEngine.AddressableAssets.AddressablesImpl
#include "UnityEngine/AddressableAssets/AddressablesImpl.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::AddressableAssets
namespace UnityEngine::AddressableAssets {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.AddressableAssets.CheckCatalogsOperation
  // [TokenAttribute] Offset: FFFFFFFF
  class CheckCatalogsOperation : public UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<System::Collections::Generic::List_1<::Il2CppString*>*> {
    public:
    // Nested type: UnityEngine::AddressableAssets::CheckCatalogsOperation::$$c
    class $$c;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private UnityEngine.AddressableAssets.AddressablesImpl m_Addressables
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::AddressablesImpl*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> m_LocalHashes
    // Size: 0x8
    // Offset: 0x88
    System::Collections::Generic::List_1<::Il2CppString*>* m_LocalHashes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.ResourceLocatorInfo> m_LocatorInfos
    // Size: 0x8
    // Offset: 0x90
    System::Collections::Generic::List_1<UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*>* m_LocatorInfos;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*>*) == 0x8);
    // private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>> m_DepOp
    // Size: 0xFFFFFFFF
    // Offset: 0x98
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> m_DepOp;
    public:
    // Get instance field reference: private UnityEngine.AddressableAssets.AddressablesImpl m_Addressables
    UnityEngine::AddressableAssets::AddressablesImpl*& dyn_m_Addressables();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> m_LocalHashes
    System::Collections::Generic::List_1<::Il2CppString*>*& dyn_m_LocalHashes();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.ResourceLocatorInfo> m_LocatorInfos
    System::Collections::Generic::List_1<UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*>*& dyn_m_LocatorInfos();
    // Get instance field reference: private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>> m_DepOp
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>& dyn_m_DepOp();
    // public System.Void .ctor(UnityEngine.AddressableAssets.AddressablesImpl aa)
    // Offset: 0x159634C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CheckCatalogsOperation* New_ctor(UnityEngine::AddressableAssets::AddressablesImpl* aa) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::CheckCatalogsOperation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CheckCatalogsOperation*, creationType>(aa)));
    }
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.List`1<System.String>> Start(System.Collections.Generic.List`1<UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.ResourceLocatorInfo> locatorInfos)
    // Offset: 0x15963B0
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::List_1<::Il2CppString*>*> Start(System::Collections::Generic::List_1<UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*>* locatorInfos);
    // override System.Boolean InvokeWaitForCompletion()
    // Offset: 0x15996D8
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Boolean AsyncOperationBase_1::InvokeWaitForCompletion()
    bool InvokeWaitForCompletion();
    // protected override System.Void Destroy()
    // Offset: 0x15997F0
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::Destroy()
    void Destroy();
    // protected override System.Void GetDependencies(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> dependencies)
    // Offset: 0x1599878
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::GetDependencies(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> dependencies)
    void GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* dependencies);
    // protected override System.Void Execute()
    // Offset: 0x1599924
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::Execute()
    void Execute();
  }; // UnityEngine.AddressableAssets.CheckCatalogsOperation
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::CheckCatalogsOperation*, "UnityEngine.AddressableAssets", "CheckCatalogsOperation");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::CheckCatalogsOperation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::CheckCatalogsOperation::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::List_1<::Il2CppString*>*> (UnityEngine::AddressableAssets::CheckCatalogsOperation::*)(System::Collections::Generic::List_1<UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*>*)>(&UnityEngine::AddressableAssets::CheckCatalogsOperation::Start)> {
  static const MethodInfo* get() {
    static auto* locatorInfos = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.AddressableAssets", "AddressablesImpl/ResourceLocatorInfo")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::CheckCatalogsOperation*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{locatorInfos});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::CheckCatalogsOperation::InvokeWaitForCompletion
// Il2CppName: InvokeWaitForCompletion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::CheckCatalogsOperation::*)()>(&UnityEngine::AddressableAssets::CheckCatalogsOperation::InvokeWaitForCompletion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::CheckCatalogsOperation*), "InvokeWaitForCompletion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::CheckCatalogsOperation::Destroy
// Il2CppName: Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::CheckCatalogsOperation::*)()>(&UnityEngine::AddressableAssets::CheckCatalogsOperation::Destroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::CheckCatalogsOperation*), "Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::CheckCatalogsOperation::GetDependencies
// Il2CppName: GetDependencies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::CheckCatalogsOperation::*)(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(&UnityEngine::AddressableAssets::CheckCatalogsOperation::GetDependencies)> {
  static const MethodInfo* get() {
    static auto* dependencies = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::CheckCatalogsOperation*), "GetDependencies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dependencies});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::CheckCatalogsOperation::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::CheckCatalogsOperation::*)()>(&UnityEngine::AddressableAssets::CheckCatalogsOperation::Execute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::CheckCatalogsOperation*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
