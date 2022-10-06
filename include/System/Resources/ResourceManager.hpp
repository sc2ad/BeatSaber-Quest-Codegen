// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Resources.UltimateResourceFallbackLocation
#include "System/Resources/UltimateResourceFallbackLocation.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Resources
namespace System::Resources {
  // Forward declaring type: ResourceSet
  class ResourceSet;
  // Forward declaring type: IResourceGroveler
  class IResourceGroveler;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: RuntimeAssembly
  class RuntimeAssembly;
  // Forward declaring type: AssemblyName
  class AssemblyName;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Forward declaring type: ResourceManager
  class ResourceManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Resources::ResourceManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::ResourceManager*, "System.Resources", "ResourceManager");
// Type namespace: System.Resources
namespace System::Resources {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Resources.ResourceManager
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1055788
  class ResourceManager : public ::Il2CppObject {
    public:
    // Nested type: ::System::Resources::ResourceManager::CultureNameResourceSetPair
    class CultureNameResourceSetPair;
    // Nested type: ::System::Resources::ResourceManager::ResourceManagerMediator
    class ResourceManagerMediator;
    public:
    // [ObsoleteAttribute] Offset: 0x105C98C
    // protected System.Collections.Hashtable ResourceSets
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Hashtable* ResourceSets;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> _resourceSets
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>* resourceSets;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*) == 0x8);
    // protected System.Reflection.Assembly MainAssembly
    // Size: 0x8
    // Offset: 0x20
    ::System::Reflection::Assembly* MainAssembly;
    // Field size check
    static_assert(sizeof(::System::Reflection::Assembly*) == 0x8);
    // private System.Globalization.CultureInfo _neutralResourcesCulture
    // Size: 0x8
    // Offset: 0x28
    ::System::Globalization::CultureInfo* neutralResourcesCulture;
    // Field size check
    static_assert(sizeof(::System::Globalization::CultureInfo*) == 0x8);
    // private System.Resources.ResourceManager/System.Resources.CultureNameResourceSetPair _lastUsedResourceCache
    // Size: 0x8
    // Offset: 0x30
    ::System::Resources::ResourceManager::CultureNameResourceSetPair* lastUsedResourceCache;
    // Field size check
    static_assert(sizeof(::System::Resources::ResourceManager::CultureNameResourceSetPair*) == 0x8);
    // private System.Boolean UseManifest
    // Size: 0x1
    // Offset: 0x38
    bool UseManifest;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [OptionalFieldAttribute] Offset: 0x105C9C4
    // private System.Boolean UseSatelliteAssem
    // Size: 0x1
    // Offset: 0x39
    bool UseSatelliteAssem;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: UseSatelliteAssem and: fallbackLoc
    char __padding6[0x2] = {};
    // [OptionalFieldAttribute] Offset: 0x105C9FC
    // private System.Resources.UltimateResourceFallbackLocation _fallbackLoc
    // Size: 0x4
    // Offset: 0x3C
    ::System::Resources::UltimateResourceFallbackLocation fallbackLoc;
    // Field size check
    static_assert(sizeof(::System::Resources::UltimateResourceFallbackLocation) == 0x4);
    // [OptionalFieldAttribute] Offset: 0x105CA0C
    // private System.Reflection.Assembly _callingAssembly
    // Size: 0x8
    // Offset: 0x40
    ::System::Reflection::Assembly* callingAssembly;
    // Field size check
    static_assert(sizeof(::System::Reflection::Assembly*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0x105CA44
    // private System.Reflection.RuntimeAssembly m_callingAssembly
    // Size: 0x8
    // Offset: 0x48
    ::System::Reflection::RuntimeAssembly* m_callingAssembly;
    // Field size check
    static_assert(sizeof(::System::Reflection::RuntimeAssembly*) == 0x8);
    // private System.Resources.IResourceGroveler resourceGroveler
    // Size: 0x8
    // Offset: 0x50
    ::System::Resources::IResourceGroveler* resourceGroveler;
    // Field size check
    static_assert(sizeof(::System::Resources::IResourceGroveler*) == 0x8);
    public:
    // Get static field: static public readonly System.Int32 MagicNumber
    static int _get_MagicNumber();
    // Set static field: static public readonly System.Int32 MagicNumber
    static void _set_MagicNumber(int value);
    // Get static field: static public readonly System.Int32 HeaderVersionNumber
    static int _get_HeaderVersionNumber();
    // Set static field: static public readonly System.Int32 HeaderVersionNumber
    static void _set_HeaderVersionNumber(int value);
    // Get static field: static private readonly System.Type _minResourceSet
    static ::System::Type* _get__minResourceSet();
    // Set static field: static private readonly System.Type _minResourceSet
    static void _set__minResourceSet(::System::Type* value);
    // Get static field: static readonly System.String ResReaderTypeName
    static ::StringW _get_ResReaderTypeName();
    // Set static field: static readonly System.String ResReaderTypeName
    static void _set_ResReaderTypeName(::StringW value);
    // Get static field: static readonly System.String ResSetTypeName
    static ::StringW _get_ResSetTypeName();
    // Set static field: static readonly System.String ResSetTypeName
    static void _set_ResSetTypeName(::StringW value);
    // Get static field: static readonly System.String MscorlibName
    static ::StringW _get_MscorlibName();
    // Set static field: static readonly System.String MscorlibName
    static void _set_MscorlibName(::StringW value);
    // Get static field: static readonly System.Int32 DEBUG
    static int _get_DEBUG();
    // Set static field: static readonly System.Int32 DEBUG
    static void _set_DEBUG(int value);
    // Get instance field reference: protected System.Collections.Hashtable ResourceSets
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn_ResourceSets();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> _resourceSets
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*& dyn__resourceSets();
    // Get instance field reference: protected System.Reflection.Assembly MainAssembly
    [[deprecated("Use field access instead!")]] ::System::Reflection::Assembly*& dyn_MainAssembly();
    // Get instance field reference: private System.Globalization.CultureInfo _neutralResourcesCulture
    [[deprecated("Use field access instead!")]] ::System::Globalization::CultureInfo*& dyn__neutralResourcesCulture();
    // Get instance field reference: private System.Resources.ResourceManager/System.Resources.CultureNameResourceSetPair _lastUsedResourceCache
    [[deprecated("Use field access instead!")]] ::System::Resources::ResourceManager::CultureNameResourceSetPair*& dyn__lastUsedResourceCache();
    // Get instance field reference: private System.Boolean UseManifest
    [[deprecated("Use field access instead!")]] bool& dyn_UseManifest();
    // Get instance field reference: private System.Boolean UseSatelliteAssem
    [[deprecated("Use field access instead!")]] bool& dyn_UseSatelliteAssem();
    // Get instance field reference: private System.Resources.UltimateResourceFallbackLocation _fallbackLoc
    [[deprecated("Use field access instead!")]] ::System::Resources::UltimateResourceFallbackLocation& dyn__fallbackLoc();
    // Get instance field reference: private System.Reflection.Assembly _callingAssembly
    [[deprecated("Use field access instead!")]] ::System::Reflection::Assembly*& dyn__callingAssembly();
    // Get instance field reference: private System.Reflection.RuntimeAssembly m_callingAssembly
    [[deprecated("Use field access instead!")]] ::System::Reflection::RuntimeAssembly*& dyn_m_callingAssembly();
    // Get instance field reference: private System.Resources.IResourceGroveler resourceGroveler
    [[deprecated("Use field access instead!")]] ::System::Resources::IResourceGroveler*& dyn_resourceGroveler();
    // static private System.Void .cctor()
    // Offset: 0x1DD83F0
    static void _cctor();
    // private System.Void Init()
    // Offset: 0x1DD7DCC
    void Init();
    // private System.Void OnDeserializing(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x1DD7FB4
    void OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx);
    // private System.Void OnDeserialized(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x1DD7FC4
    void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx);
    // private System.Void OnSerializing(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x1DD8120
    void OnSerializing(::System::Runtime::Serialization::StreamingContext ctx);
    // static System.Boolean CompareNames(System.String asmTypeName1, System.String typeName2, System.Reflection.AssemblyName asmName2)
    // Offset: 0x1DD8190
    static bool CompareNames(::StringW asmTypeName1, ::StringW typeName2, ::System::Reflection::AssemblyName* asmName2);
    // protected System.Void .ctor()
    // Offset: 0x1DD7E54
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Resources::ResourceManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceManager*, creationType>()));
    }
  }; // System.Resources.ResourceManager
  #pragma pack(pop)
  static check_size<sizeof(ResourceManager), 80 + sizeof(::System::Resources::IResourceGroveler*)> __System_Resources_ResourceManagerSizeCheck;
  static_assert(sizeof(ResourceManager) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Resources::ResourceManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Resources::ResourceManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceManager::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceManager::*)()>(&System::Resources::ResourceManager::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceManager*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceManager::OnDeserializing
// Il2CppName: OnDeserializing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceManager::*)(::System::Runtime::Serialization::StreamingContext)>(&System::Resources::ResourceManager::OnDeserializing)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceManager*), "OnDeserializing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceManager::OnDeserialized
// Il2CppName: OnDeserialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceManager::*)(::System::Runtime::Serialization::StreamingContext)>(&System::Resources::ResourceManager::OnDeserialized)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceManager*), "OnDeserialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceManager::OnSerializing
// Il2CppName: OnSerializing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceManager::*)(::System::Runtime::Serialization::StreamingContext)>(&System::Resources::ResourceManager::OnSerializing)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceManager*), "OnSerializing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceManager::CompareNames
// Il2CppName: CompareNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ::System::Reflection::AssemblyName*)>(&System::Resources::ResourceManager::CompareNames)> {
  static const MethodInfo* get() {
    static auto* asmTypeName1 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* typeName2 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* asmName2 = &::il2cpp_utils::GetClassFromName("System.Reflection", "AssemblyName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceManager*), "CompareNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asmTypeName1, typeName2, asmName2});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
