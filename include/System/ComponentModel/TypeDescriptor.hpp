// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: WeakHashtable
  class WeakHashtable;
  // Forward declaring type: RefreshEventHandler
  class RefreshEventHandler;
  // Forward declaring type: TypeDescriptionProvider
  class TypeDescriptionProvider;
  // Forward declaring type: AttributeCollection
  class AttributeCollection;
  // Forward declaring type: TypeConverter
  class TypeConverter;
  // Forward declaring type: ICustomTypeDescriptor
  class ICustomTypeDescriptor;
  // Forward declaring type: MemberDescriptor
  class MemberDescriptor;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: IDictionary
  class IDictionary;
  // Forward declaring type: ICollection
  class ICollection;
  // Forward declaring type: IList
  class IList;
}
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: BooleanSwitch
  class BooleanSwitch;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: TypeDescriptor
  class TypeDescriptor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::TypeDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptor*, "System.ComponentModel", "TypeDescriptor");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.TypeDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeDescriptor : public ::Il2CppObject {
    public:
    // Nested type: ::System::ComponentModel::TypeDescriptor::FilterCacheItem
    class FilterCacheItem;
    // Nested type: ::System::ComponentModel::TypeDescriptor::IUnimplemented
    class IUnimplemented;
    // Nested type: ::System::ComponentModel::TypeDescriptor::MemberDescriptorComparer
    class MemberDescriptorComparer;
    // Nested type: ::System::ComponentModel::TypeDescriptor::MergedTypeDescriptor
    class MergedTypeDescriptor;
    // Nested type: ::System::ComponentModel::TypeDescriptor::TypeDescriptionNode
    class TypeDescriptionNode;
    // Nested type: ::System::ComponentModel::TypeDescriptor::TypeDescriptorComObject
    class TypeDescriptorComObject;
    // Nested type: ::System::ComponentModel::TypeDescriptor::TypeDescriptorInterface
    class TypeDescriptorInterface;
    // Get static field: static private System.ComponentModel.WeakHashtable _providerTable
    static ::System::ComponentModel::WeakHashtable* _get__providerTable();
    // Set static field: static private System.ComponentModel.WeakHashtable _providerTable
    static void _set__providerTable(::System::ComponentModel::WeakHashtable* value);
    // Get static field: static private System.Collections.Hashtable _providerTypeTable
    static ::System::Collections::Hashtable* _get__providerTypeTable();
    // Set static field: static private System.Collections.Hashtable _providerTypeTable
    static void _set__providerTypeTable(::System::Collections::Hashtable* value);
    // Get static field: static private System.Collections.Hashtable _defaultProviders
    static ::System::Collections::Hashtable* _get__defaultProviders();
    // Set static field: static private System.Collections.Hashtable _defaultProviders
    static void _set__defaultProviders(::System::Collections::Hashtable* value);
    // Get static field: static private System.Int32 _metadataVersion
    static int _get__metadataVersion();
    // Set static field: static private System.Int32 _metadataVersion
    static void _set__metadataVersion(int value);
    // Get static field: static private System.Int32 _collisionIndex
    static int _get__collisionIndex();
    // Set static field: static private System.Int32 _collisionIndex
    static void _set__collisionIndex(int value);
    // Get static field: static private System.Diagnostics.BooleanSwitch TraceDescriptor
    static ::System::Diagnostics::BooleanSwitch* _get_TraceDescriptor();
    // Set static field: static private System.Diagnostics.BooleanSwitch TraceDescriptor
    static void _set_TraceDescriptor(::System::Diagnostics::BooleanSwitch* value);
    // Get static field: static private readonly System.Guid[] _pipelineInitializeKeys
    static ::ArrayW<::System::Guid> _get__pipelineInitializeKeys();
    // Set static field: static private readonly System.Guid[] _pipelineInitializeKeys
    static void _set__pipelineInitializeKeys(::ArrayW<::System::Guid> value);
    // Get static field: static private readonly System.Guid[] _pipelineMergeKeys
    static ::ArrayW<::System::Guid> _get__pipelineMergeKeys();
    // Set static field: static private readonly System.Guid[] _pipelineMergeKeys
    static void _set__pipelineMergeKeys(::ArrayW<::System::Guid> value);
    // Get static field: static private readonly System.Guid[] _pipelineFilterKeys
    static ::ArrayW<::System::Guid> _get__pipelineFilterKeys();
    // Set static field: static private readonly System.Guid[] _pipelineFilterKeys
    static void _set__pipelineFilterKeys(::ArrayW<::System::Guid> value);
    // Get static field: static private readonly System.Guid[] _pipelineAttributeFilterKeys
    static ::ArrayW<::System::Guid> _get__pipelineAttributeFilterKeys();
    // Set static field: static private readonly System.Guid[] _pipelineAttributeFilterKeys
    static void _set__pipelineAttributeFilterKeys(::ArrayW<::System::Guid> value);
    // Get static field: static private System.Object _internalSyncObject
    static ::Il2CppObject* _get__internalSyncObject();
    // Set static field: static private System.Object _internalSyncObject
    static void _set__internalSyncObject(::Il2CppObject* value);
    // Get static field: static private System.ComponentModel.RefreshEventHandler Refreshed
    static ::System::ComponentModel::RefreshEventHandler* _get_Refreshed();
    // Set static field: static private System.ComponentModel.RefreshEventHandler Refreshed
    static void _set_Refreshed(::System::ComponentModel::RefreshEventHandler* value);
    // static public System.Type get_ComObjectType()
    // Offset: 0x1E00894
    static ::System::Type* get_ComObjectType();
    // static public System.Type get_InterfaceType()
    // Offset: 0x1E00904
    static ::System::Type* get_InterfaceType();
    // static System.Int32 get_MetadataVersion()
    // Offset: 0x1E00974
    static int get_MetadataVersion();
    // static private System.Void .cctor()
    // Offset: 0x1E05CD0
    static void _cctor();
    // static public System.Void AddProvider(System.ComponentModel.TypeDescriptionProvider provider, System.Type type)
    // Offset: 0x1E009DC
    static void AddProvider(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Type* type);
    // static private System.Void CheckDefaultProvider(System.Type type)
    // Offset: 0x1E01664
    static void CheckDefaultProvider(::System::Type* type);
    // static public System.ComponentModel.AttributeCollection GetAttributes(System.Type componentType)
    // Offset: 0x1DFDD54
    static ::System::ComponentModel::AttributeCollection* GetAttributes(::System::Type* componentType);
    // static public System.ComponentModel.AttributeCollection GetAttributes(System.Object component)
    // Offset: 0x1DFDE98
    static ::System::ComponentModel::AttributeCollection* GetAttributes(::Il2CppObject* component);
    // static public System.ComponentModel.AttributeCollection GetAttributes(System.Object component, System.Boolean noCustomTypeDesc)
    // Offset: 0x1E01D60
    static ::System::ComponentModel::AttributeCollection* GetAttributes(::Il2CppObject* component, bool noCustomTypeDesc);
    // static System.Collections.IDictionary GetCache(System.Object instance)
    // Offset: 0x1E04D04
    static ::System::Collections::IDictionary* GetCache(::Il2CppObject* instance);
    // static public System.ComponentModel.TypeConverter GetConverter(System.Type type)
    // Offset: 0x1E05550
    static ::System::ComponentModel::TypeConverter* GetConverter(::System::Type* type);
    // static System.ComponentModel.ICustomTypeDescriptor GetDescriptor(System.Type type, System.String typeName)
    // Offset: 0x1E01C6C
    static ::System::ComponentModel::ICustomTypeDescriptor* GetDescriptor(::System::Type* type, ::StringW typeName);
    // static System.ComponentModel.ICustomTypeDescriptor GetDescriptor(System.Object component, System.Boolean noCustomTypeDesc)
    // Offset: 0x1E021C4
    static ::System::ComponentModel::ICustomTypeDescriptor* GetDescriptor(::Il2CppObject* component, bool noCustomTypeDesc);
    // static System.ComponentModel.ICustomTypeDescriptor GetExtendedDescriptor(System.Object component)
    // Offset: 0x1E023B0
    static ::System::ComponentModel::ICustomTypeDescriptor* GetExtendedDescriptor(::Il2CppObject* component);
    // static private System.String GetExtenderCollisionSuffix(System.ComponentModel.MemberDescriptor member)
    // Offset: 0x1E056A0
    static ::StringW GetExtenderCollisionSuffix(::System::ComponentModel::MemberDescriptor* member);
    // static private System.Type GetNodeForBaseType(System.Type searchType)
    // Offset: 0x1E059AC
    static ::System::Type* GetNodeForBaseType(::System::Type* searchType);
    // static System.ComponentModel.TypeDescriptionProvider GetProviderRecursive(System.Type type)
    // Offset: 0x1DF23E8
    static ::System::ComponentModel::TypeDescriptionProvider* GetProviderRecursive(::System::Type* type);
    // static public System.Type GetReflectionType(System.Type type)
    // Offset: 0x1DEF75C
    static ::System::Type* GetReflectionType(::System::Type* type);
    // static private System.ComponentModel.TypeDescriptor/System.ComponentModel.TypeDescriptionNode NodeFor(System.Type type)
    // Offset: 0x1E05638
    static ::System::ComponentModel::TypeDescriptor::TypeDescriptionNode* NodeFor(::System::Type* type);
    // static private System.ComponentModel.TypeDescriptor/System.ComponentModel.TypeDescriptionNode NodeFor(System.Type type, System.Boolean createDelegator)
    // Offset: 0x1E00C2C
    static ::System::ComponentModel::TypeDescriptor::TypeDescriptionNode* NodeFor(::System::Type* type, bool createDelegator);
    // static private System.ComponentModel.TypeDescriptor/System.ComponentModel.TypeDescriptionNode NodeFor(System.Object instance)
    // Offset: 0x1E054E8
    static ::System::ComponentModel::TypeDescriptor::TypeDescriptionNode* NodeFor(::Il2CppObject* instance);
    // static private System.ComponentModel.TypeDescriptor/System.ComponentModel.TypeDescriptionNode NodeFor(System.Object instance, System.Boolean createDelegator)
    // Offset: 0x1E05AA8
    static ::System::ComponentModel::TypeDescriptor::TypeDescriptionNode* NodeFor(::Il2CppObject* instance, bool createDelegator);
    // static private System.Collections.ICollection PipelineFilter(System.Int32 pipelineType, System.Collections.ICollection members, System.Object instance, System.Collections.IDictionary cache)
    // Offset: 0x1E03550
    static ::System::Collections::ICollection* PipelineFilter(int pipelineType, ::System::Collections::ICollection* members, ::Il2CppObject* instance, ::System::Collections::IDictionary* cache);
    // static private System.Collections.ICollection PipelineInitialize(System.Int32 pipelineType, System.Collections.ICollection members, System.Collections.IDictionary cache)
    // Offset: 0x1E04D80
    static ::System::Collections::ICollection* PipelineInitialize(int pipelineType, ::System::Collections::ICollection* members, ::System::Collections::IDictionary* cache);
    // static private System.Collections.ICollection PipelineMerge(System.Int32 pipelineType, System.Collections.ICollection primary, System.Collections.ICollection secondary, System.Object instance, System.Collections.IDictionary cache)
    // Offset: 0x1E0246C
    static ::System::Collections::ICollection* PipelineMerge(int pipelineType, ::System::Collections::ICollection* primary, ::System::Collections::ICollection* secondary, ::Il2CppObject* instance, ::System::Collections::IDictionary* cache);
    // static private System.Void RaiseRefresh(System.Type type)
    // Offset: 0x1E05C20
    static void RaiseRefresh(::System::Type* type);
    // static public System.Void Refresh(System.Type type)
    // Offset: 0x1E01148
    static void Refresh(::System::Type* type);
    // static public System.Void SortDescriptorArray(System.Collections.IList infos)
    // Offset: 0x1DF67DC
    static void SortDescriptorArray(::System::Collections::IList* infos);
  }; // System.ComponentModel.TypeDescriptor
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::get_ComObjectType
// Il2CppName: get_ComObjectType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)()>(&System::ComponentModel::TypeDescriptor::get_ComObjectType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), "get_ComObjectType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::get_InterfaceType
// Il2CppName: get_InterfaceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)()>(&System::ComponentModel::TypeDescriptor::get_InterfaceType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), "get_InterfaceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::get_MetadataVersion
// Il2CppName: get_MetadataVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::ComponentModel::TypeDescriptor::get_MetadataVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), "get_MetadataVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::TypeDescriptor::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::AddProvider
// Il2CppName: AddProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Type*)>(&System::ComponentModel::TypeDescriptor::AddProvider)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "TypeDescriptionProvider")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), "AddProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider, type});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::CheckDefaultProvider
// Il2CppName: CheckDefaultProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*)>(&System::ComponentModel::TypeDescriptor::CheckDefaultProvider)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), "CheckDefaultProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::GetAttributes
// Il2CppName: GetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (*)(::System::Type*)>(&System::ComponentModel::TypeDescriptor::GetAttributes)> {
  static const MethodInfo* get() {
    static auto* componentType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), "GetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{componentType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::GetAttributes
// Il2CppName: GetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (*)(::Il2CppObject*)>(&System::ComponentModel::TypeDescriptor::GetAttributes)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), "GetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::GetAttributes
// Il2CppName: GetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (*)(::Il2CppObject*, bool)>(&System::ComponentModel::TypeDescriptor::GetAttributes)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* noCustomTypeDesc = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), "GetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component, noCustomTypeDesc});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::GetCache
// Il2CppName: GetCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (*)(::Il2CppObject*)>(&System::ComponentModel::TypeDescriptor::GetCache)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), "GetCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::GetConverter
// Il2CppName: GetConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter* (*)(::System::Type*)>(&System::ComponentModel::TypeDescriptor::GetConverter)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), "GetConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::GetDescriptor
// Il2CppName: GetDescriptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (*)(::System::Type*, ::StringW)>(&System::ComponentModel::TypeDescriptor::GetDescriptor)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* typeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), "GetDescriptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, typeName});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::GetDescriptor
// Il2CppName: GetDescriptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (*)(::Il2CppObject*, bool)>(&System::ComponentModel::TypeDescriptor::GetDescriptor)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* noCustomTypeDesc = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), "GetDescriptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component, noCustomTypeDesc});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::GetExtendedDescriptor
// Il2CppName: GetExtendedDescriptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (*)(::Il2CppObject*)>(&System::ComponentModel::TypeDescriptor::GetExtendedDescriptor)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), "GetExtendedDescriptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::GetExtenderCollisionSuffix
// Il2CppName: GetExtenderCollisionSuffix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::ComponentModel::MemberDescriptor*)>(&System::ComponentModel::TypeDescriptor::GetExtenderCollisionSuffix)> {
  static const MethodInfo* get() {
    static auto* member = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "MemberDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), "GetExtenderCollisionSuffix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{member});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::GetNodeForBaseType
// Il2CppName: GetNodeForBaseType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&System::ComponentModel::TypeDescriptor::GetNodeForBaseType)> {
  static const MethodInfo* get() {
    static auto* searchType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), "GetNodeForBaseType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{searchType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::GetProviderRecursive
// Il2CppName: GetProviderRecursive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeDescriptionProvider* (*)(::System::Type*)>(&System::ComponentModel::TypeDescriptor::GetProviderRecursive)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), "GetProviderRecursive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::GetReflectionType
// Il2CppName: GetReflectionType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&System::ComponentModel::TypeDescriptor::GetReflectionType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), "GetReflectionType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::NodeFor
// Il2CppName: NodeFor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeDescriptor::TypeDescriptionNode* (*)(::System::Type*)>(&System::ComponentModel::TypeDescriptor::NodeFor)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), "NodeFor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::NodeFor
// Il2CppName: NodeFor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeDescriptor::TypeDescriptionNode* (*)(::System::Type*, bool)>(&System::ComponentModel::TypeDescriptor::NodeFor)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* createDelegator = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), "NodeFor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, createDelegator});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::NodeFor
// Il2CppName: NodeFor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeDescriptor::TypeDescriptionNode* (*)(::Il2CppObject*)>(&System::ComponentModel::TypeDescriptor::NodeFor)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), "NodeFor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::NodeFor
// Il2CppName: NodeFor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeDescriptor::TypeDescriptionNode* (*)(::Il2CppObject*, bool)>(&System::ComponentModel::TypeDescriptor::NodeFor)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* createDelegator = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), "NodeFor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance, createDelegator});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::PipelineFilter
// Il2CppName: PipelineFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (*)(int, ::System::Collections::ICollection*, ::Il2CppObject*, ::System::Collections::IDictionary*)>(&System::ComponentModel::TypeDescriptor::PipelineFilter)> {
  static const MethodInfo* get() {
    static auto* pipelineType = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* members = &::il2cpp_utils::GetClassFromName("System.Collections", "ICollection")->byval_arg;
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* cache = &::il2cpp_utils::GetClassFromName("System.Collections", "IDictionary")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), "PipelineFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pipelineType, members, instance, cache});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::PipelineInitialize
// Il2CppName: PipelineInitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (*)(int, ::System::Collections::ICollection*, ::System::Collections::IDictionary*)>(&System::ComponentModel::TypeDescriptor::PipelineInitialize)> {
  static const MethodInfo* get() {
    static auto* pipelineType = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* members = &::il2cpp_utils::GetClassFromName("System.Collections", "ICollection")->byval_arg;
    static auto* cache = &::il2cpp_utils::GetClassFromName("System.Collections", "IDictionary")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), "PipelineInitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pipelineType, members, cache});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::PipelineMerge
// Il2CppName: PipelineMerge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (*)(int, ::System::Collections::ICollection*, ::System::Collections::ICollection*, ::Il2CppObject*, ::System::Collections::IDictionary*)>(&System::ComponentModel::TypeDescriptor::PipelineMerge)> {
  static const MethodInfo* get() {
    static auto* pipelineType = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* primary = &::il2cpp_utils::GetClassFromName("System.Collections", "ICollection")->byval_arg;
    static auto* secondary = &::il2cpp_utils::GetClassFromName("System.Collections", "ICollection")->byval_arg;
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* cache = &::il2cpp_utils::GetClassFromName("System.Collections", "IDictionary")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), "PipelineMerge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pipelineType, primary, secondary, instance, cache});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::RaiseRefresh
// Il2CppName: RaiseRefresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*)>(&System::ComponentModel::TypeDescriptor::RaiseRefresh)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), "RaiseRefresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*)>(&System::ComponentModel::TypeDescriptor::Refresh)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::SortDescriptorArray
// Il2CppName: SortDescriptorArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::IList*)>(&System::ComponentModel::TypeDescriptor::SortDescriptorArray)> {
  static const MethodInfo* get() {
    static auto* infos = &::il2cpp_utils::GetClassFromName("System.Collections", "IList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor*), "SortDescriptorArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{infos});
  }
};
