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
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: LegacyResourcesProvider
  class LegacyResourcesProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "LegacyResourcesProvider");
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.LegacyResourcesProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisplayNameAttribute] Offset: 122E984
  class LegacyResourcesProvider : public ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
    public:
    // Nested type: ::UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp
    class InternalOp;
    // public System.Void .ctor()
    // Offset: 0x1E29974
    // Implemented from: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
    // Base method: System.Void ResourceProviderBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LegacyResourcesProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LegacyResourcesProvider*, creationType>()));
    }
    // public override System.Void Provide(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle pi)
    // Offset: 0x1E29338
    // Implemented from: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
    // Base method: System.Void ResourceProviderBase::Provide(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle pi)
    void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle pi);
    // public override System.Void Release(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location, System.Object asset)
    // Offset: 0x1E2984C
    // Implemented from: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
    // Base method: System.Void ResourceProviderBase::Release(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location, System.Object asset)
    void Release(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::Il2CppObject* asset);
  }; // UnityEngine.ResourceManagement.ResourceProviders.LegacyResourcesProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::Provide
// Il2CppName: Provide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::*)(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::Provide)> {
  static const MethodInfo* get() {
    static auto* pi = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceProviders", "ProvideHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider*), "Provide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pi});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::Il2CppObject*)>(&UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::Release)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")->byval_arg;
    static auto* asset = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location, asset});
  }
};
