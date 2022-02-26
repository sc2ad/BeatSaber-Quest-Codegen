// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.Util.ObjectInitializationData
#include "UnityEngine/ResourceManagement/Util/ObjectInitializationData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::AddressableAssets::ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Forward declaring type: ResourceLocationData
  class ResourceLocationData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets.Initialization
namespace UnityEngine::AddressableAssets::Initialization {
  // Forward declaring type: ResourceManagerRuntimeData
  class ResourceManagerRuntimeData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*, "UnityEngine.AddressableAssets.Initialization", "ResourceManagerRuntimeData");
// Type namespace: UnityEngine.AddressableAssets.Initialization
namespace UnityEngine::AddressableAssets::Initialization {
  // Size: 0x6C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.Initialization.ResourceManagerRuntimeData
  // [TokenAttribute] Offset: FFFFFFFF
  class ResourceManagerRuntimeData : public ::Il2CppObject {
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
    // private System.String m_buildTarget
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_buildTarget;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0x1234448
    // private System.String m_SettingsHash
    // Size: 0x8
    // Offset: 0x18
    ::StringW m_SettingsHash;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0x1234494
    // private System.Collections.Generic.List`1<UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationData> m_CatalogLocations
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>* m_CatalogLocations;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0x12344E0
    // private System.Boolean m_ProfileEvents
    // Size: 0x1
    // Offset: 0x28
    bool m_ProfileEvents;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [FormerlySerializedAsAttribute] Offset: 0x123452C
    // private System.Boolean m_LogResourceManagerExceptions
    // Size: 0x1
    // Offset: 0x29
    bool m_LogResourceManagerExceptions;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_LogResourceManagerExceptions and: m_ExtraInitializationData
    char __padding4[0x6] = {};
    // [FormerlySerializedAsAttribute] Offset: 0x1234578
    // private System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Util.ObjectInitializationData> m_ExtraInitializationData
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* m_ExtraInitializationData;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*) == 0x8);
    // private System.Boolean m_DisableCatalogUpdateOnStart
    // Size: 0x1
    // Offset: 0x38
    bool m_DisableCatalogUpdateOnStart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_IsLocalCatalogInBundle
    // Size: 0x1
    // Offset: 0x39
    bool m_IsLocalCatalogInBundle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_IsLocalCatalogInBundle and: m_CertificateHandlerType
    char __padding7[0x6] = {};
    // private UnityEngine.ResourceManagement.Util.SerializedType m_CertificateHandlerType
    // Size: 0x19
    // Offset: 0x40
    ::UnityEngine::ResourceManagement::Util::SerializedType m_CertificateHandlerType;
    // Field size check
    static_assert(sizeof(::UnityEngine::ResourceManagement::Util::SerializedType) == 0x19);
    // Padding between fields: m_CertificateHandlerType and: m_AddressablesVersion
    char __padding8[0x7] = {};
    // private System.String m_AddressablesVersion
    // Size: 0x8
    // Offset: 0x60
    ::StringW m_AddressablesVersion;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 m_maxConcurrentWebRequests
    // Size: 0x4
    // Offset: 0x68
    int m_maxConcurrentWebRequests;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // static field const value: static public System.String kCatalogAddress
    static constexpr const char* kCatalogAddress = "AddressablesMainContentCatalog";
    // Get static field: static public System.String kCatalogAddress
    static ::StringW _get_kCatalogAddress();
    // Set static field: static public System.String kCatalogAddress
    static void _set_kCatalogAddress(::StringW value);
    // Get instance field reference: private System.String m_buildTarget
    ::StringW& dyn_m_buildTarget();
    // Get instance field reference: private System.String m_SettingsHash
    ::StringW& dyn_m_SettingsHash();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationData> m_CatalogLocations
    ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>*& dyn_m_CatalogLocations();
    // Get instance field reference: private System.Boolean m_ProfileEvents
    bool& dyn_m_ProfileEvents();
    // Get instance field reference: private System.Boolean m_LogResourceManagerExceptions
    bool& dyn_m_LogResourceManagerExceptions();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Util.ObjectInitializationData> m_ExtraInitializationData
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*& dyn_m_ExtraInitializationData();
    // Get instance field reference: private System.Boolean m_DisableCatalogUpdateOnStart
    bool& dyn_m_DisableCatalogUpdateOnStart();
    // Get instance field reference: private System.Boolean m_IsLocalCatalogInBundle
    bool& dyn_m_IsLocalCatalogInBundle();
    // Get instance field reference: private UnityEngine.ResourceManagement.Util.SerializedType m_CertificateHandlerType
    ::UnityEngine::ResourceManagement::Util::SerializedType& dyn_m_CertificateHandlerType();
    // Get instance field reference: private System.String m_AddressablesVersion
    ::StringW& dyn_m_AddressablesVersion();
    // Get instance field reference: private System.Int32 m_maxConcurrentWebRequests
    int& dyn_m_maxConcurrentWebRequests();
    // public System.String get_BuildTarget()
    // Offset: 0x17E7A30
    ::StringW get_BuildTarget();
    // public System.Void set_BuildTarget(System.String value)
    // Offset: 0x17E7A38
    void set_BuildTarget(::StringW value);
    // public System.String get_SettingsHash()
    // Offset: 0x17E7A40
    ::StringW get_SettingsHash();
    // public System.Void set_SettingsHash(System.String value)
    // Offset: 0x17E7A48
    void set_SettingsHash(::StringW value);
    // public System.Collections.Generic.List`1<UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationData> get_CatalogLocations()
    // Offset: 0x17E7A50
    ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>* get_CatalogLocations();
    // public System.Boolean get_ProfileEvents()
    // Offset: 0x17E7A58
    bool get_ProfileEvents();
    // public System.Void set_ProfileEvents(System.Boolean value)
    // Offset: 0x17E7A60
    void set_ProfileEvents(bool value);
    // public System.Boolean get_LogResourceManagerExceptions()
    // Offset: 0x17E7A6C
    bool get_LogResourceManagerExceptions();
    // public System.Void set_LogResourceManagerExceptions(System.Boolean value)
    // Offset: 0x17E7A74
    void set_LogResourceManagerExceptions(bool value);
    // public System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Util.ObjectInitializationData> get_InitializationObjects()
    // Offset: 0x17E7A80
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* get_InitializationObjects();
    // public System.Boolean get_DisableCatalogUpdateOnStartup()
    // Offset: 0x17E7A88
    bool get_DisableCatalogUpdateOnStartup();
    // public System.Void set_DisableCatalogUpdateOnStartup(System.Boolean value)
    // Offset: 0x17E7A90
    void set_DisableCatalogUpdateOnStartup(bool value);
    // public System.Boolean get_IsLocalCatalogInBundle()
    // Offset: 0x17E7A9C
    bool get_IsLocalCatalogInBundle();
    // public System.Void set_IsLocalCatalogInBundle(System.Boolean value)
    // Offset: 0x17E7AA4
    void set_IsLocalCatalogInBundle(bool value);
    // public System.Type get_CertificateHandlerType()
    // Offset: 0x17E5B58
    ::System::Type* get_CertificateHandlerType();
    // public System.Void set_CertificateHandlerType(System.Type value)
    // Offset: 0x17E7AB0
    void set_CertificateHandlerType(::System::Type* value);
    // public System.String get_AddressablesVersion()
    // Offset: 0x17E7ABC
    ::StringW get_AddressablesVersion();
    // public System.Void set_AddressablesVersion(System.String value)
    // Offset: 0x17E7AC4
    void set_AddressablesVersion(::StringW value);
    // public System.Int32 get_MaxConcurrentWebRequests()
    // Offset: 0x17E7ACC
    int get_MaxConcurrentWebRequests();
    // public System.Void set_MaxConcurrentWebRequests(System.Int32 value)
    // Offset: 0x17E7AD4
    void set_MaxConcurrentWebRequests(int value);
    // public System.Void .ctor()
    // Offset: 0x17E7B58
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceManagerRuntimeData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceManagerRuntimeData*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.Initialization.ResourceManagerRuntimeData
  #pragma pack(pop)
  static check_size<sizeof(ResourceManagerRuntimeData), 104 + sizeof(int)> __UnityEngine_AddressableAssets_Initialization_ResourceManagerRuntimeDataSizeCheck;
  static_assert(sizeof(ResourceManagerRuntimeData) == 0x6C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::get_BuildTarget
// Il2CppName: get_BuildTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::*)()>(&UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::get_BuildTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*), "get_BuildTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::set_BuildTarget
// Il2CppName: set_BuildTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::*)(::StringW)>(&UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::set_BuildTarget)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*), "set_BuildTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::get_SettingsHash
// Il2CppName: get_SettingsHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::*)()>(&UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::get_SettingsHash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*), "get_SettingsHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::set_SettingsHash
// Il2CppName: set_SettingsHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::*)(::StringW)>(&UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::set_SettingsHash)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*), "set_SettingsHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::get_CatalogLocations
// Il2CppName: get_CatalogLocations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>* (UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::*)()>(&UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::get_CatalogLocations)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*), "get_CatalogLocations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::get_ProfileEvents
// Il2CppName: get_ProfileEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::*)()>(&UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::get_ProfileEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*), "get_ProfileEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::set_ProfileEvents
// Il2CppName: set_ProfileEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::*)(bool)>(&UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::set_ProfileEvents)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*), "set_ProfileEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::get_LogResourceManagerExceptions
// Il2CppName: get_LogResourceManagerExceptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::*)()>(&UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::get_LogResourceManagerExceptions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*), "get_LogResourceManagerExceptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::set_LogResourceManagerExceptions
// Il2CppName: set_LogResourceManagerExceptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::*)(bool)>(&UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::set_LogResourceManagerExceptions)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*), "set_LogResourceManagerExceptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::get_InitializationObjects
// Il2CppName: get_InitializationObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* (UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::*)()>(&UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::get_InitializationObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*), "get_InitializationObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::get_DisableCatalogUpdateOnStartup
// Il2CppName: get_DisableCatalogUpdateOnStartup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::*)()>(&UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::get_DisableCatalogUpdateOnStartup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*), "get_DisableCatalogUpdateOnStartup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::set_DisableCatalogUpdateOnStartup
// Il2CppName: set_DisableCatalogUpdateOnStartup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::*)(bool)>(&UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::set_DisableCatalogUpdateOnStartup)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*), "set_DisableCatalogUpdateOnStartup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::get_IsLocalCatalogInBundle
// Il2CppName: get_IsLocalCatalogInBundle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::*)()>(&UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::get_IsLocalCatalogInBundle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*), "get_IsLocalCatalogInBundle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::set_IsLocalCatalogInBundle
// Il2CppName: set_IsLocalCatalogInBundle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::*)(bool)>(&UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::set_IsLocalCatalogInBundle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*), "set_IsLocalCatalogInBundle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::get_CertificateHandlerType
// Il2CppName: get_CertificateHandlerType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::*)()>(&UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::get_CertificateHandlerType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*), "get_CertificateHandlerType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::set_CertificateHandlerType
// Il2CppName: set_CertificateHandlerType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::*)(::System::Type*)>(&UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::set_CertificateHandlerType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*), "set_CertificateHandlerType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::get_AddressablesVersion
// Il2CppName: get_AddressablesVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::*)()>(&UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::get_AddressablesVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*), "get_AddressablesVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::set_AddressablesVersion
// Il2CppName: set_AddressablesVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::*)(::StringW)>(&UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::set_AddressablesVersion)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*), "set_AddressablesVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::get_MaxConcurrentWebRequests
// Il2CppName: get_MaxConcurrentWebRequests
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::*)()>(&UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::get_MaxConcurrentWebRequests)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*), "get_MaxConcurrentWebRequests", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::set_MaxConcurrentWebRequests
// Il2CppName: set_MaxConcurrentWebRequests
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::*)(int)>(&UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::set_MaxConcurrentWebRequests)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*), "set_MaxConcurrentWebRequests", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
