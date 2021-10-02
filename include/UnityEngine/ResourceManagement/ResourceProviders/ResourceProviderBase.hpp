// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider
#include "UnityEngine/ResourceManagement/ResourceProviders/IResourceProvider.hpp"
// Including type: UnityEngine.ResourceManagement.Util.IInitializableObject
#include "UnityEngine/ResourceManagement/Util/IInitializableObject.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.ProviderBehaviourFlags
#include "UnityEngine/ResourceManagement/ResourceProviders/ProviderBehaviourFlags.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: ProvideHandle
  struct ProvideHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Forward declaring type: AsyncOperationHandle`1<TObject>
  template<typename TObject>
  struct AsyncOperationHandle_1;
}
// Forward declaring namespace: UnityEngine::ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Forward declaring type: ResourceManager
  class ResourceManager;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
  // [TokenAttribute] Offset: FFFFFFFF
  class ResourceProviderBase : public ::Il2CppObject/*, public UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider, public UnityEngine::ResourceManagement::Util::IInitializableObject*/ {
    public:
    // Nested type: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp
    class BaseInitAsyncOp;
    // Nested type: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::$$c__DisplayClass10_0
    class $$c__DisplayClass10_0;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // protected System.String m_ProviderId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_ProviderId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected UnityEngine.ResourceManagement.ResourceProviders.ProviderBehaviourFlags m_BehaviourFlags
    // Size: 0x4
    // Offset: 0x18
    UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags m_BehaviourFlags;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags) == 0x4);
    public:
    // Creating interface conversion operator: operator UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider
    operator UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider() noexcept {
      return *reinterpret_cast<UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::ResourceManagement::Util::IInitializableObject
    operator UnityEngine::ResourceManagement::Util::IInitializableObject() noexcept {
      return *reinterpret_cast<UnityEngine::ResourceManagement::Util::IInitializableObject*>(this);
    }
    // Get instance field reference: protected System.String m_ProviderId
    ::Il2CppString*& dyn_m_ProviderId();
    // Get instance field reference: protected UnityEngine.ResourceManagement.ResourceProviders.ProviderBehaviourFlags m_BehaviourFlags
    UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags& dyn_m_BehaviourFlags();
    // public System.String get_ProviderId()
    // Offset: 0x1B6B3D4
    ::Il2CppString* get_ProviderId();
    // private UnityEngine.ResourceManagement.ResourceProviders.ProviderBehaviourFlags UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider.get_BehaviourFlags()
    // Offset: 0x1B6B6A0
    UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags UnityEngine_ResourceManagement_ResourceProviders_IResourceProvider_get_BehaviourFlags();
    // public System.Boolean Initialize(System.String id, System.String data)
    // Offset: 0x1B6B430
    bool Initialize(::Il2CppString* id, ::Il2CppString* data);
    // public System.Boolean CanProvide(System.Type t, UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location)
    // Offset: 0x1B6B458
    bool CanProvide(System::Type* t, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);
    // public System.Void Release(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location, System.Object obj)
    // Offset: 0x1B6B4B0
    void Release(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::Il2CppObject* obj);
    // public System.Type GetDefaultType(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location)
    // Offset: 0x1B6B4B4
    System::Type* GetDefaultType(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);
    // public System.Void Provide(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle provideHandle)
    // Offset: 0xFFFFFFFF
    void Provide(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle);
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Boolean> InitializeAsync(UnityEngine.ResourceManagement.ResourceManager rm, System.String id, System.String data)
    // Offset: 0x1B6B524
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> InitializeAsync(UnityEngine::ResourceManagement::ResourceManager* rm, ::Il2CppString* id, ::Il2CppString* data);
    // protected System.Void .ctor()
    // Offset: 0x1B67650
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceProviderBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceProviderBase*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x1B6B4A4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
  #pragma pack(pop)
  static check_size<sizeof(ResourceProviderBase), 24 + sizeof(UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags)> __UnityEngine_ResourceManagement_ResourceProviders_ResourceProviderBaseSizeCheck;
  static_assert(sizeof(ResourceProviderBase) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*, "UnityEngine.ResourceManagement.ResourceProviders", "ResourceProviderBase");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::get_ProviderId
// Il2CppName: get_ProviderId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::get_ProviderId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*), "get_ProviderId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::UnityEngine_ResourceManagement_ResourceProviders_IResourceProvider_get_BehaviourFlags
// Il2CppName: UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider.get_BehaviourFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags (UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::UnityEngine_ResourceManagement_ResourceProviders_IResourceProvider_get_BehaviourFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*), "UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider.get_BehaviourFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)(::Il2CppString*, ::Il2CppString*)>(&UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::Initialize)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, data});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::CanProvide
// Il2CppName: CanProvide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)(System::Type*, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::CanProvide)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* location = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*), "CanProvide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, location});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::Il2CppObject*)>(&UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::Release)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location, obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::GetDefaultType
// Il2CppName: GetDefaultType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::GetDefaultType)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*), "GetDefaultType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::Provide
// Il2CppName: Provide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::Provide)> {
  static const MethodInfo* get() {
    static auto* provideHandle = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceProviders", "ProvideHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*), "Provide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provideHandle});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::InitializeAsync
// Il2CppName: InitializeAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)(UnityEngine::ResourceManagement::ResourceManager*, ::Il2CppString*, ::Il2CppString*)>(&UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::InitializeAsync)> {
  static const MethodInfo* get() {
    static auto* rm = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement", "ResourceManager")->byval_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*), "InitializeAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rm, id, data});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
