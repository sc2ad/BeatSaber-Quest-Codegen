// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation
  class IResourceLocation {
    public:
    // Creating value type constructor for type: IResourceLocation
    IResourceLocation() noexcept {}
    // public System.String get_InternalId()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_InternalId();
    // public System.String get_ProviderId()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_ProviderId();
    // public System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> get_Dependencies()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* get_Dependencies();
    // public System.Int32 Hash(System.Type resultType)
    // Offset: 0xFFFFFFFF
    int Hash(System::Type* resultType);
    // public System.Int32 get_DependencyHashCode()
    // Offset: 0xFFFFFFFF
    int get_DependencyHashCode();
    // public System.Boolean get_HasDependencies()
    // Offset: 0xFFFFFFFF
    bool get_HasDependencies();
    // public System.Object get_Data()
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* get_Data();
    // public System.String get_PrimaryKey()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_PrimaryKey();
    // public System.Type get_ResourceType()
    // Offset: 0xFFFFFFFF
    System::Type* get_ResourceType();
  }; // UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, "UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation");
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation::get_InternalId
// Il2CppName: get_InternalId
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation::get_ProviderId
// Il2CppName: get_ProviderId
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation::get_Dependencies
// Il2CppName: get_Dependencies
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation::Hash
// Il2CppName: Hash
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation::get_DependencyHashCode
// Il2CppName: get_DependencyHashCode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation::get_HasDependencies
// Il2CppName: get_HasDependencies
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation::get_Data
// Il2CppName: get_Data
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation::get_PrimaryKey
// Il2CppName: get_PrimaryKey
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation::get_ResourceType
// Il2CppName: get_ResourceType
// Cannot perform method pointer template specialization from operators!