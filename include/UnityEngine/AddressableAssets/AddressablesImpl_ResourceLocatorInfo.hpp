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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::AddressableAssets::ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Forward declaring type: IResourceLocator
  class IResourceLocator;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*, "UnityEngine.AddressableAssets", "AddressablesImpl/ResourceLocatorInfo");
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.ResourceLocatorInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class AddressablesImpl::ResourceLocatorInfo : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator <Locator>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* Locator;
    // Field size check
    static_assert(sizeof(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*) == 0x8);
    // private System.String <LocalHash>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW LocalHash;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation <CatalogLocation>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* CatalogLocation;
    // Field size check
    static_assert(sizeof(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*) == 0x8);
    // private System.Boolean <ContentUpdateAvailable>k__BackingField
    // Size: 0x1
    // Offset: 0x28
    bool ContentUpdateAvailable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator <Locator>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*& dyn_$Locator$k__BackingField();
    // Get instance field reference: private System.String <LocalHash>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$LocalHash$k__BackingField();
    // Get instance field reference: private UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation <CatalogLocation>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& dyn_$CatalogLocation$k__BackingField();
    // Get instance field reference: private System.Boolean <ContentUpdateAvailable>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$ContentUpdateAvailable$k__BackingField();
    // public UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator get_Locator()
    // Offset: 0x18B0574
    ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* get_Locator();
    // private System.Void set_Locator(UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator value)
    // Offset: 0x18B057C
    void set_Locator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* value);
    // public System.String get_LocalHash()
    // Offset: 0x18B0584
    ::StringW get_LocalHash();
    // private System.Void set_LocalHash(System.String value)
    // Offset: 0x18B058C
    void set_LocalHash(::StringW value);
    // public UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation get_CatalogLocation()
    // Offset: 0x18B0594
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_CatalogLocation();
    // private System.Void set_CatalogLocation(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation value)
    // Offset: 0x18B059C
    void set_CatalogLocation(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value);
    // public System.Boolean get_ContentUpdateAvailable()
    // Offset: 0x18B05A4
    bool get_ContentUpdateAvailable();
    // System.Void set_ContentUpdateAvailable(System.Boolean value)
    // Offset: 0x18B05AC
    void set_ContentUpdateAvailable(bool value);
    // public UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation get_HashLocation()
    // Offset: 0x18B05B8
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_HashLocation();
    // public System.Boolean get_CanUpdateContent()
    // Offset: 0x18B06E0
    bool get_CanUpdateContent();
    // public System.Void .ctor(UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator loc, System.String localHash, UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation remoteCatalogLocation)
    // Offset: 0x18A9CB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddressablesImpl::ResourceLocatorInfo* New_ctor(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* loc, ::StringW localHash, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteCatalogLocation) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddressablesImpl::ResourceLocatorInfo*, creationType>(loc, localHash, remoteCatalogLocation)));
    }
    // System.Void UpdateContent(UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator locator, System.String hash, UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation loc)
    // Offset: 0x18B08A0
    void UpdateContent(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* locator, ::StringW hash, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc);
  }; // UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.ResourceLocatorInfo
  #pragma pack(pop)
  static check_size<sizeof(AddressablesImpl::ResourceLocatorInfo), 40 + sizeof(bool)> __UnityEngine_AddressableAssets_AddressablesImpl_ResourceLocatorInfoSizeCheck;
  static_assert(sizeof(AddressablesImpl::ResourceLocatorInfo) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::get_Locator
// Il2CppName: get_Locator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* (UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::*)()>(&UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::get_Locator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*), "get_Locator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::set_Locator
// Il2CppName: set_Locator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::*)(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*)>(&UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::set_Locator)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.AddressableAssets.ResourceLocators", "IResourceLocator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*), "set_Locator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::get_LocalHash
// Il2CppName: get_LocalHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::*)()>(&UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::get_LocalHash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*), "get_LocalHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::set_LocalHash
// Il2CppName: set_LocalHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::*)(::StringW)>(&UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::set_LocalHash)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*), "set_LocalHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::get_CatalogLocation
// Il2CppName: get_CatalogLocation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* (UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::*)()>(&UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::get_CatalogLocation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*), "get_CatalogLocation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::set_CatalogLocation
// Il2CppName: set_CatalogLocation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::set_CatalogLocation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*), "set_CatalogLocation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::get_ContentUpdateAvailable
// Il2CppName: get_ContentUpdateAvailable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::*)()>(&UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::get_ContentUpdateAvailable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*), "get_ContentUpdateAvailable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::set_ContentUpdateAvailable
// Il2CppName: set_ContentUpdateAvailable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::*)(bool)>(&UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::set_ContentUpdateAvailable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*), "set_ContentUpdateAvailable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::get_HashLocation
// Il2CppName: get_HashLocation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* (UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::*)()>(&UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::get_HashLocation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*), "get_HashLocation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::get_CanUpdateContent
// Il2CppName: get_CanUpdateContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::*)()>(&UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::get_CanUpdateContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*), "get_CanUpdateContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::UpdateContent
// Il2CppName: UpdateContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::*)(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, ::StringW, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo::UpdateContent)> {
  static const MethodInfo* get() {
    static auto* locator = &::il2cpp_utils::GetClassFromName("UnityEngine.AddressableAssets.ResourceLocators", "IResourceLocator")->byval_arg;
    static auto* hash = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* loc = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*), "UpdateContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{locator, hash, loc});
  }
};
