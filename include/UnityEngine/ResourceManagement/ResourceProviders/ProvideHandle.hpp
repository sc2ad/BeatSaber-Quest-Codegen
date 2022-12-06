// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus
#include "UnityEngine/ResourceManagement/AsyncOperations/DownloadStatus.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Forward declaring type: IGenericProviderOperation
  class IGenericProviderOperation;
}
// Forward declaring namespace: UnityEngine::ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Forward declaring type: ResourceManager
  class ResourceManager;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: ProvideHandle
  struct ProvideHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle, "UnityEngine.ResourceManagement.ResourceProviders", "ProvideHandle");
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
  // [TokenAttribute] Offset: FFFFFFFF
  struct ProvideHandle/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Int32 m_Version
    // Size: 0x4
    // Offset: 0x0
    int m_Version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_Version and: m_InternalOp
    char __padding0[0x4] = {};
    // private UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation m_InternalOp
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation* m_InternalOp;
    // Field size check
    static_assert(sizeof(::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*) == 0x8);
    // private UnityEngine.ResourceManagement.ResourceManager m_ResourceManager
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::ResourceManagement::ResourceManager* m_ResourceManager;
    // Field size check
    static_assert(sizeof(::UnityEngine::ResourceManagement::ResourceManager*) == 0x8);
    public:
    // Creating value type constructor for type: ProvideHandle
    constexpr ProvideHandle(int m_Version_ = {}, ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation* m_InternalOp_ = {}, ::UnityEngine::ResourceManagement::ResourceManager* m_ResourceManager_ = {}) noexcept : m_Version{m_Version_}, m_InternalOp{m_InternalOp_}, m_ResourceManager{m_ResourceManager_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Int32 m_Version
    [[deprecated("Use field access instead!")]] int& dyn_m_Version();
    // Get instance field reference: private UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation m_InternalOp
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*& dyn_m_InternalOp();
    // Get instance field reference: private UnityEngine.ResourceManagement.ResourceManager m_ResourceManager
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceManagement::ResourceManager*& dyn_m_ResourceManager();
    // private UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation get_InternalOp()
    // Offset: 0x1F73A00
    ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation* get_InternalOp();
    // public UnityEngine.ResourceManagement.ResourceManager get_ResourceManager()
    // Offset: 0x1F73B04
    ::UnityEngine::ResourceManagement::ResourceManager* get_ResourceManager();
    // public System.Type get_Type()
    // Offset: 0x1F72460
    ::System::Type* get_Type();
    // public UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation get_Location()
    // Offset: 0x1F70648
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_Location();
    // public System.Int32 get_DependencyCount()
    // Offset: 0x1F73B0C
    int get_DependencyCount();
    // System.Void .ctor(UnityEngine.ResourceManagement.ResourceManager rm, UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation op)
    // Offset: 0x1F73934
    ProvideHandle(::UnityEngine::ResourceManagement::ResourceManager* rm, ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation* op);
    // public TDepObject GetDependency(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TDepObject>
    TDepObject GetDependency(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::GetDependency");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "GetDependency", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDepObject>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDepObject>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<TDepObject, false>(this, ___generic__method, index);
    }
    // public System.Void GetDependencies(System.Collections.Generic.IList`1<System.Object> list)
    // Offset: 0x1F72394
    void GetDependencies(::System::Collections::Generic::IList_1<::Il2CppObject*>* list);
    // public System.Void SetProgressCallback(System.Func`1<System.Single> callback)
    // Offset: 0x1F70704
    void SetProgressCallback(::System::Func_1<float>* callback);
    // public System.Void SetDownloadProgressCallbacks(System.Func`1<UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus> callback)
    // Offset: 0x1F707D0
    void SetDownloadProgressCallbacks(::System::Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>* callback);
    // public System.Void SetWaitForCompletionCallback(System.Func`1<System.Boolean> callback)
    // Offset: 0x1F7089C
    void SetWaitForCompletionCallback(::System::Func_1<bool>* callback);
    // public System.Void Complete(T result, System.Boolean status, System.Exception exception)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void Complete(T result, bool status, ::System::Exception* exception) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::Complete");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Complete", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(result), ::il2cpp_utils::ExtractType(status), ::il2cpp_utils::ExtractType(exception)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, result, status, exception);
    }
  }; // UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
  #pragma pack(pop)
  static check_size<sizeof(ProvideHandle), 16 + sizeof(::UnityEngine::ResourceManagement::ResourceManager*)> __UnityEngine_ResourceManagement_ResourceProviders_ProvideHandleSizeCheck;
  static_assert(sizeof(ProvideHandle) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::get_InternalOp
// Il2CppName: get_InternalOp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation* (UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::get_InternalOp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle), "get_InternalOp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::get_ResourceManager
// Il2CppName: get_ResourceManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::ResourceManager* (UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::get_ResourceManager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle), "get_ResourceManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::get_Location
// Il2CppName: get_Location
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* (UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::get_Location)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle), "get_Location", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::get_DependencyCount
// Il2CppName: get_DependencyCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::get_DependencyCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle), "get_DependencyCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::ProvideHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::GetDependency
// Il2CppName: GetDependency
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::GetDependencies
// Il2CppName: GetDependencies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::*)(::System::Collections::Generic::IList_1<::Il2CppObject*>*)>(&UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::GetDependencies)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle), "GetDependencies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::SetProgressCallback
// Il2CppName: SetProgressCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::*)(::System::Func_1<float>*)>(&UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::SetProgressCallback)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle), "SetProgressCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::SetDownloadProgressCallbacks
// Il2CppName: SetDownloadProgressCallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::*)(::System::Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>*)>(&UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::SetDownloadProgressCallbacks)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "DownloadStatus")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle), "SetDownloadProgressCallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::SetWaitForCompletionCallback
// Il2CppName: SetWaitForCompletionCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::*)(::System::Func_1<bool>*)>(&UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::SetWaitForCompletionCallback)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle), "SetWaitForCompletionCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::Complete
// Il2CppName: Complete
// Cannot write MetadataGetter for generic methods!
