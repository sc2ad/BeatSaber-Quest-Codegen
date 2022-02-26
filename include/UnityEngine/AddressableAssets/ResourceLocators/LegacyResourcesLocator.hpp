// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator
#include "UnityEngine/AddressableAssets/ResourceLocators/IResourceLocator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
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
// Type namespace: UnityEngine.AddressableAssets.ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Forward declaring type: LegacyResourcesLocator
  class LegacyResourcesLocator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator*, "UnityEngine.AddressableAssets.ResourceLocators", "LegacyResourcesLocator");
// Type namespace: UnityEngine.AddressableAssets.ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.ResourceLocators.LegacyResourcesLocator
  // [TokenAttribute] Offset: FFFFFFFF
  class LegacyResourcesLocator : public ::Il2CppObject/*, public ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*/ {
    public:
    // Creating interface conversion operator: operator ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator
    operator ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator() noexcept {
      return *reinterpret_cast<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(this);
    }
    // public System.Collections.Generic.IEnumerable`1<System.Object> get_Keys()
    // Offset: 0x17E9488
    ::System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* get_Keys();
    // public System.String get_LocatorId()
    // Offset: 0x17E9490
    ::StringW get_LocatorId();
    // public System.Boolean Locate(System.Object key, System.Type type, out System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> locations)
    // Offset: 0x17E9234
    bool Locate(::Il2CppObject* key, ::System::Type* type, ByRef<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> locations);
    // public System.Void .ctor()
    // Offset: 0x17E94D8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LegacyResourcesLocator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LegacyResourcesLocator*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.ResourceLocators.LegacyResourcesLocator
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::get_Keys
// Il2CppName: get_Keys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* (UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::get_Keys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator*), "get_Keys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::get_LocatorId
// Il2CppName: get_LocatorId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::get_LocatorId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator*), "get_LocatorId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::Locate
// Il2CppName: Locate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::*)(::Il2CppObject*, ::System::Type*, ByRef<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>)>(&UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::Locate)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* locations = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator*), "Locate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, type, locations});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
