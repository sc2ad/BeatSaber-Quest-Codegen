// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
#include "UnityEngine/ResourceManagement/ResourceProviders/ResourceProviderBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: AssetBundleProvider
  class AssetBundleProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "AssetBundleProvider");
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.AssetBundleProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisplayNameAttribute] Offset: 1100E74
  class AssetBundleProvider : public ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
    public:
    // public System.Void .ctor()
    // Offset: 0x1F722E8
    // Implemented from: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
    // Base method: System.Void ResourceProviderBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetBundleProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetBundleProvider*, creationType>()));
    }
    // public override System.Void Provide(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle providerInterface)
    // Offset: 0x1F71D98
    // Implemented from: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
    // Base method: System.Void ResourceProviderBase::Provide(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle providerInterface)
    void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface);
    // public override System.Type GetDefaultType(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location)
    // Offset: 0x1F72054
    // Implemented from: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
    // Base method: System.Type ResourceProviderBase::GetDefaultType(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location)
    ::System::Type* GetDefaultType(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);
    // public override System.Void Release(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location, System.Object asset)
    // Offset: 0x1F720C4
    // Implemented from: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
    // Base method: System.Void ResourceProviderBase::Release(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location, System.Object asset)
    void Release(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::Il2CppObject* asset);
  }; // UnityEngine.ResourceManagement.ResourceProviders.AssetBundleProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::Provide
// Il2CppName: Provide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::*)(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::Provide)> {
  static const MethodInfo* get() {
    static auto* providerInterface = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceProviders", "ProvideHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*), "Provide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{providerInterface});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::GetDefaultType
// Il2CppName: GetDefaultType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::GetDefaultType)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*), "GetDefaultType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::Il2CppObject*)>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::Release)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")->byval_arg;
    static auto* asset = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location, asset});
  }
};
