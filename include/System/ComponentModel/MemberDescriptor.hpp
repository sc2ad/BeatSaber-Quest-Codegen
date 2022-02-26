// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: AttributeCollection
  class AttributeCollection;
  // Forward declaring type: ISite
  class ISite;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Attribute
  class Attribute;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: MemberDescriptor
  class MemberDescriptor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::MemberDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::MemberDescriptor*, "System.ComponentModel", "MemberDescriptor");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.MemberDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1199F18
  class MemberDescriptor : public ::Il2CppObject {
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
    // private System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String displayName
    // Size: 0x8
    // Offset: 0x18
    ::StringW displayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 nameHash
    // Size: 0x4
    // Offset: 0x20
    int nameHash;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: nameHash and: attributeCollection
    char __padding2[0x4] = {};
    // private System.ComponentModel.AttributeCollection attributeCollection
    // Size: 0x8
    // Offset: 0x28
    ::System::ComponentModel::AttributeCollection* attributeCollection;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::AttributeCollection*) == 0x8);
    // private System.Attribute[] attributes
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::System::Attribute*> attributes;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Attribute*>) == 0x8);
    // private System.Attribute[] originalAttributes
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::System::Attribute*> originalAttributes;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Attribute*>) == 0x8);
    // private System.Boolean attributesFiltered
    // Size: 0x1
    // Offset: 0x40
    bool attributesFiltered;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean attributesFilled
    // Size: 0x1
    // Offset: 0x41
    bool attributesFilled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: attributesFilled and: metadataVersion
    char __padding7[0x2] = {};
    // private System.Int32 metadataVersion
    // Size: 0x4
    // Offset: 0x44
    int metadataVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String category
    // Size: 0x8
    // Offset: 0x48
    ::StringW category;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String description
    // Size: 0x8
    // Offset: 0x50
    ::StringW description;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Object lockCookie
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppObject* lockCookie;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: private System.String name
    ::StringW& dyn_name();
    // Get instance field reference: private System.String displayName
    ::StringW& dyn_displayName();
    // Get instance field reference: private System.Int32 nameHash
    int& dyn_nameHash();
    // Get instance field reference: private System.ComponentModel.AttributeCollection attributeCollection
    ::System::ComponentModel::AttributeCollection*& dyn_attributeCollection();
    // Get instance field reference: private System.Attribute[] attributes
    ::ArrayW<::System::Attribute*>& dyn_attributes();
    // Get instance field reference: private System.Attribute[] originalAttributes
    ::ArrayW<::System::Attribute*>& dyn_originalAttributes();
    // Get instance field reference: private System.Boolean attributesFiltered
    bool& dyn_attributesFiltered();
    // Get instance field reference: private System.Boolean attributesFilled
    bool& dyn_attributesFilled();
    // Get instance field reference: private System.Int32 metadataVersion
    int& dyn_metadataVersion();
    // Get instance field reference: private System.String category
    ::StringW& dyn_category();
    // Get instance field reference: private System.String description
    ::StringW& dyn_description();
    // Get instance field reference: private System.Object lockCookie
    ::Il2CppObject*& dyn_lockCookie();
    // protected System.Attribute[] get_AttributeArray()
    // Offset: 0x1DFB250
    ::ArrayW<::System::Attribute*> get_AttributeArray();
    // protected System.Void set_AttributeArray(System.Attribute[] value)
    // Offset: 0x1DFBA40
    void set_AttributeArray(::ArrayW<::System::Attribute*> value);
    // public System.ComponentModel.AttributeCollection get_Attributes()
    // Offset: 0x1DFBAD8
    ::System::ComponentModel::AttributeCollection* get_Attributes();
    // public System.String get_Name()
    // Offset: 0x1DFBB94
    ::StringW get_Name();
    // protected System.Int32 get_NameHashCode()
    // Offset: 0x1DFBBEC
    int get_NameHashCode();
    // public System.String get_DisplayName()
    // Offset: 0x1DF8AAC
    ::StringW get_DisplayName();
    // protected System.Void .ctor(System.String name, System.Attribute[] attributes)
    // Offset: 0x1DFAD2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemberDescriptor* New_ctor(::StringW name, ::ArrayW<::System::Attribute*> attributes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::MemberDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemberDescriptor*, creationType>(name, attributes)));
    }
    // protected System.Void .ctor(System.ComponentModel.MemberDescriptor oldMemberDescriptor, System.Attribute[] newAttributes)
    // Offset: 0x1DFAEA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemberDescriptor* New_ctor(::System::ComponentModel::MemberDescriptor* oldMemberDescriptor, ::ArrayW<::System::Attribute*> newAttributes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::MemberDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemberDescriptor*, creationType>(oldMemberDescriptor, newAttributes)));
    }
    // private System.Void CheckAttributesValid()
    // Offset: 0x1DFB27C
    void CheckAttributesValid();
    // protected System.ComponentModel.AttributeCollection CreateAttributeCollection()
    // Offset: 0x1DFBBF4
    ::System::ComponentModel::AttributeCollection* CreateAttributeCollection();
    // protected System.Void FillAttributes(System.Collections.IList attributeList)
    // Offset: 0x1DFBED0
    void FillAttributes(::System::Collections::IList* attributeList);
    // private System.Void FilterAttributesIfNeeded()
    // Offset: 0x1DFB348
    void FilterAttributesIfNeeded();
    // static protected System.Reflection.MethodInfo FindMethod(System.Type componentClass, System.String name, System.Type[] args, System.Type returnType)
    // Offset: 0x1DFBFE4
    static ::System::Reflection::MethodInfo* FindMethod(::System::Type* componentClass, ::StringW name, ::ArrayW<::System::Type*> args, ::System::Type* returnType);
    // static protected System.Reflection.MethodInfo FindMethod(System.Type componentClass, System.String name, System.Type[] args, System.Type returnType, System.Boolean publicOnly)
    // Offset: 0x1DFBFEC
    static ::System::Reflection::MethodInfo* FindMethod(::System::Type* componentClass, ::StringW name, ::ArrayW<::System::Type*> args, ::System::Type* returnType, bool publicOnly);
    // protected System.Object GetInvocationTarget(System.Type type, System.Object instance)
    // Offset: 0x1DFC09C
    ::Il2CppObject* GetInvocationTarget(::System::Type* type, ::Il2CppObject* instance);
    // static protected System.ComponentModel.ISite GetSite(System.Object component)
    // Offset: 0x1DF8BCC
    static ::System::ComponentModel::ISite* GetSite(::Il2CppObject* component);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1DFBC6C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1DFC094
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.MemberDescriptor
  #pragma pack(pop)
  static check_size<sizeof(MemberDescriptor), 88 + sizeof(::Il2CppObject*)> __System_ComponentModel_MemberDescriptorSizeCheck;
  static_assert(sizeof(MemberDescriptor) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::MemberDescriptor::get_AttributeArray
// Il2CppName: get_AttributeArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Attribute*> (System::ComponentModel::MemberDescriptor::*)()>(&System::ComponentModel::MemberDescriptor::get_AttributeArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MemberDescriptor*), "get_AttributeArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MemberDescriptor::set_AttributeArray
// Il2CppName: set_AttributeArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::MemberDescriptor::*)(::ArrayW<::System::Attribute*>)>(&System::ComponentModel::MemberDescriptor::set_AttributeArray)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Attribute"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MemberDescriptor*), "set_AttributeArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MemberDescriptor::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (System::ComponentModel::MemberDescriptor::*)()>(&System::ComponentModel::MemberDescriptor::get_Attributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MemberDescriptor*), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MemberDescriptor::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::MemberDescriptor::*)()>(&System::ComponentModel::MemberDescriptor::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MemberDescriptor*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MemberDescriptor::get_NameHashCode
// Il2CppName: get_NameHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::MemberDescriptor::*)()>(&System::ComponentModel::MemberDescriptor::get_NameHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MemberDescriptor*), "get_NameHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MemberDescriptor::get_DisplayName
// Il2CppName: get_DisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::MemberDescriptor::*)()>(&System::ComponentModel::MemberDescriptor::get_DisplayName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MemberDescriptor*), "get_DisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MemberDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::MemberDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::MemberDescriptor::CheckAttributesValid
// Il2CppName: CheckAttributesValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::MemberDescriptor::*)()>(&System::ComponentModel::MemberDescriptor::CheckAttributesValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MemberDescriptor*), "CheckAttributesValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MemberDescriptor::CreateAttributeCollection
// Il2CppName: CreateAttributeCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (System::ComponentModel::MemberDescriptor::*)()>(&System::ComponentModel::MemberDescriptor::CreateAttributeCollection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MemberDescriptor*), "CreateAttributeCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MemberDescriptor::FillAttributes
// Il2CppName: FillAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::MemberDescriptor::*)(::System::Collections::IList*)>(&System::ComponentModel::MemberDescriptor::FillAttributes)> {
  static const MethodInfo* get() {
    static auto* attributeList = &::il2cpp_utils::GetClassFromName("System.Collections", "IList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MemberDescriptor*), "FillAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeList});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MemberDescriptor::FilterAttributesIfNeeded
// Il2CppName: FilterAttributesIfNeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::MemberDescriptor::*)()>(&System::ComponentModel::MemberDescriptor::FilterAttributesIfNeeded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MemberDescriptor*), "FilterAttributesIfNeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MemberDescriptor::FindMethod
// Il2CppName: FindMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (*)(::System::Type*, ::StringW, ::ArrayW<::System::Type*>, ::System::Type*)>(&System::ComponentModel::MemberDescriptor::FindMethod)> {
  static const MethodInfo* get() {
    static auto* componentClass = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    static auto* returnType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MemberDescriptor*), "FindMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{componentClass, name, args, returnType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MemberDescriptor::FindMethod
// Il2CppName: FindMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (*)(::System::Type*, ::StringW, ::ArrayW<::System::Type*>, ::System::Type*, bool)>(&System::ComponentModel::MemberDescriptor::FindMethod)> {
  static const MethodInfo* get() {
    static auto* componentClass = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    static auto* returnType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* publicOnly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MemberDescriptor*), "FindMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{componentClass, name, args, returnType, publicOnly});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MemberDescriptor::GetInvocationTarget
// Il2CppName: GetInvocationTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::MemberDescriptor::*)(::System::Type*, ::Il2CppObject*)>(&System::ComponentModel::MemberDescriptor::GetInvocationTarget)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MemberDescriptor*), "GetInvocationTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MemberDescriptor::GetSite
// Il2CppName: GetSite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ISite* (*)(::Il2CppObject*)>(&System::ComponentModel::MemberDescriptor::GetSite)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MemberDescriptor*), "GetSite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MemberDescriptor::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::MemberDescriptor::*)(::Il2CppObject*)>(&System::ComponentModel::MemberDescriptor::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MemberDescriptor*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MemberDescriptor::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::MemberDescriptor::*)()>(&System::ComponentModel::MemberDescriptor::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MemberDescriptor*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
