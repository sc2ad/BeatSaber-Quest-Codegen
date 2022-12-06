// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AddressableAssets.AddressablesImpl
#include "UnityEngine/AddressableAssets/AddressablesImpl.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Forward declaring type: AsyncOperationHandle`1<TObject>
  template<typename TObject>
  struct AsyncOperationHandle_1;
  // Forward declaring type: AsyncOperationHandle
  struct AsyncOperationHandle;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: IAssetBundleResource
  class IAssetBundleResource;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass89_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass89_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass89_0");
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.<>c__DisplayClass89_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AddressablesImpl::$$c__DisplayClass89_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.AddressableAssets.AddressablesImpl <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::AddressableAssets::AddressablesImpl* $$4__this;
    // Field size check
    static_assert(sizeof(::UnityEngine::AddressableAssets::AddressablesImpl*) == 0x8);
    // public System.Object key
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* key;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.AddressableAssets.AddressablesImpl <>4__this
    [[deprecated("Use field access instead!")]] ::UnityEngine::AddressableAssets::AddressablesImpl*& dyn_$$4__this();
    // Get instance field reference: public System.Object key
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_key();
    // public System.Void .ctor()
    // Offset: 0x18D5A08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddressablesImpl::$$c__DisplayClass89_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass89_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddressablesImpl::$$c__DisplayClass89_0*, creationType>()));
    }
    // UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceProviders.IAssetBundleResource>> <DownloadDependenciesAsyncWithChain>b__0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle op)
    // Offset: 0x18D90EC
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>*> $DownloadDependenciesAsyncWithChain$b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);
    // System.Void <DownloadDependenciesAsyncWithChain>b__1(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceProviders.IAssetBundleResource>> op)
    // Offset: 0x18D918C
    void $DownloadDependenciesAsyncWithChain$b__1(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>*> op);
  }; // UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.<>c__DisplayClass89_0
  #pragma pack(pop)
  static check_size<sizeof(AddressablesImpl::$$c__DisplayClass89_0), 24 + sizeof(::Il2CppObject*)> __UnityEngine_AddressableAssets_AddressablesImpl_$$c__DisplayClass89_0SizeCheck;
  static_assert(sizeof(AddressablesImpl::$$c__DisplayClass89_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass89_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass89_0::$DownloadDependenciesAsyncWithChain$b__0
// Il2CppName: <DownloadDependenciesAsyncWithChain>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>*> (UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass89_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass89_0::$DownloadDependenciesAsyncWithChain$b__0)> {
  static const MethodInfo* get() {
    static auto* op = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass89_0*), "<DownloadDependenciesAsyncWithChain>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{op});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass89_0::$DownloadDependenciesAsyncWithChain$b__1
// Il2CppName: <DownloadDependenciesAsyncWithChain>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass89_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>*>)>(&UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass89_0::$DownloadDependenciesAsyncWithChain$b__1)> {
  static const MethodInfo* get() {
    static auto* op = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceProviders", "IAssetBundleResource")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass89_0*), "<DownloadDependenciesAsyncWithChain>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{op});
  }
};
