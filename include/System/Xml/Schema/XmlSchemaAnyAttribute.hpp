// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlSchemaAnnotated
#include "System/Xml/Schema/XmlSchemaAnnotated.hpp"
// Including type: System.Xml.Schema.XmlSchemaContentProcessing
#include "System/Xml/Schema/XmlSchemaContentProcessing.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: NamespaceList
  class NamespaceList;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaAnyAttribute
  class XmlSchemaAnyAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaAnyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaAnyAttribute*, "System.Xml.Schema", "XmlSchemaAnyAttribute");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaAnyAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaAnyAttribute : public ::System::Xml::Schema::XmlSchemaAnnotated {
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
    // private System.String ns
    // Size: 0x8
    // Offset: 0x50
    ::StringW ns;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Xml.Schema.XmlSchemaContentProcessing processContents
    // Size: 0x4
    // Offset: 0x58
    ::System::Xml::Schema::XmlSchemaContentProcessing processContents;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaContentProcessing) == 0x4);
    // Padding between fields: processContents and: namespaceList
    char __padding1[0x4] = {};
    // private System.Xml.Schema.NamespaceList namespaceList
    // Size: 0x8
    // Offset: 0x60
    ::System::Xml::Schema::NamespaceList* namespaceList;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::NamespaceList*) == 0x8);
    public:
    // Get instance field reference: private System.String ns
    ::StringW& dyn_ns();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaContentProcessing processContents
    ::System::Xml::Schema::XmlSchemaContentProcessing& dyn_processContents();
    // Get instance field reference: private System.Xml.Schema.NamespaceList namespaceList
    ::System::Xml::Schema::NamespaceList*& dyn_namespaceList();
    // public System.Void set_Namespace(System.String value)
    // Offset: 0x18AC5F0
    void set_Namespace(::StringW value);
    // public System.Xml.Schema.XmlSchemaContentProcessing get_ProcessContents()
    // Offset: 0x18AC5F8
    ::System::Xml::Schema::XmlSchemaContentProcessing get_ProcessContents();
    // public System.Void set_ProcessContents(System.Xml.Schema.XmlSchemaContentProcessing value)
    // Offset: 0x18AC600
    void set_ProcessContents(::System::Xml::Schema::XmlSchemaContentProcessing value);
    // System.Xml.Schema.NamespaceList get_NamespaceList()
    // Offset: 0x18AC608
    ::System::Xml::Schema::NamespaceList* get_NamespaceList();
    // System.Xml.Schema.XmlSchemaContentProcessing get_ProcessContentsCorrect()
    // Offset: 0x18AC610
    ::System::Xml::Schema::XmlSchemaContentProcessing get_ProcessContentsCorrect();
    // System.Void BuildNamespaceList(System.String targetNamespace)
    // Offset: 0x18AC624
    void BuildNamespaceList(::StringW targetNamespace);
    // System.Void BuildNamespaceListV1Compat(System.String targetNamespace)
    // Offset: 0x18AC6AC
    void BuildNamespaceListV1Compat(::StringW targetNamespace);
    // System.Boolean Allows(System.Xml.XmlQualifiedName qname)
    // Offset: 0x18AC748
    bool Allows(::System::Xml::XmlQualifiedName* qname);
    // static System.Boolean IsSubset(System.Xml.Schema.XmlSchemaAnyAttribute sub, System.Xml.Schema.XmlSchemaAnyAttribute super)
    // Offset: 0x18AC774
    static bool IsSubset(::System::Xml::Schema::XmlSchemaAnyAttribute* sub, ::System::Xml::Schema::XmlSchemaAnyAttribute* super);
    // static System.Xml.Schema.XmlSchemaAnyAttribute Intersection(System.Xml.Schema.XmlSchemaAnyAttribute o1, System.Xml.Schema.XmlSchemaAnyAttribute o2, System.Boolean v1Compat)
    // Offset: 0x18AC79C
    static ::System::Xml::Schema::XmlSchemaAnyAttribute* Intersection(::System::Xml::Schema::XmlSchemaAnyAttribute* o1, ::System::Xml::Schema::XmlSchemaAnyAttribute* o2, bool v1Compat);
    // static System.Xml.Schema.XmlSchemaAnyAttribute Union(System.Xml.Schema.XmlSchemaAnyAttribute o1, System.Xml.Schema.XmlSchemaAnyAttribute o2, System.Boolean v1Compat)
    // Offset: 0x18AC85C
    static ::System::Xml::Schema::XmlSchemaAnyAttribute* Union(::System::Xml::Schema::XmlSchemaAnyAttribute* o1, ::System::Xml::Schema::XmlSchemaAnyAttribute* o2, bool v1Compat);
    // public System.Void .ctor()
    // Offset: 0x18AC854
    // Implemented from: System.Xml.Schema.XmlSchemaAnnotated
    // Base method: System.Void XmlSchemaAnnotated::.ctor()
    // Base method: System.Void XmlSchemaObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaAnyAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaAnyAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaAnyAttribute*, creationType>()));
    }
  }; // System.Xml.Schema.XmlSchemaAnyAttribute
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaAnyAttribute), 96 + sizeof(::System::Xml::Schema::NamespaceList*)> __System_Xml_Schema_XmlSchemaAnyAttributeSizeCheck;
  static_assert(sizeof(XmlSchemaAnyAttribute) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaAnyAttribute::set_Namespace
// Il2CppName: set_Namespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaAnyAttribute::*)(::StringW)>(&System::Xml::Schema::XmlSchemaAnyAttribute::set_Namespace)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaAnyAttribute*), "set_Namespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaAnyAttribute::get_ProcessContents
// Il2CppName: get_ProcessContents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaContentProcessing (System::Xml::Schema::XmlSchemaAnyAttribute::*)()>(&System::Xml::Schema::XmlSchemaAnyAttribute::get_ProcessContents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaAnyAttribute*), "get_ProcessContents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaAnyAttribute::set_ProcessContents
// Il2CppName: set_ProcessContents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaAnyAttribute::*)(::System::Xml::Schema::XmlSchemaContentProcessing)>(&System::Xml::Schema::XmlSchemaAnyAttribute::set_ProcessContents)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaContentProcessing")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaAnyAttribute*), "set_ProcessContents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaAnyAttribute::get_NamespaceList
// Il2CppName: get_NamespaceList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::NamespaceList* (System::Xml::Schema::XmlSchemaAnyAttribute::*)()>(&System::Xml::Schema::XmlSchemaAnyAttribute::get_NamespaceList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaAnyAttribute*), "get_NamespaceList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaAnyAttribute::get_ProcessContentsCorrect
// Il2CppName: get_ProcessContentsCorrect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaContentProcessing (System::Xml::Schema::XmlSchemaAnyAttribute::*)()>(&System::Xml::Schema::XmlSchemaAnyAttribute::get_ProcessContentsCorrect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaAnyAttribute*), "get_ProcessContentsCorrect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaAnyAttribute::BuildNamespaceList
// Il2CppName: BuildNamespaceList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaAnyAttribute::*)(::StringW)>(&System::Xml::Schema::XmlSchemaAnyAttribute::BuildNamespaceList)> {
  static const MethodInfo* get() {
    static auto* targetNamespace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaAnyAttribute*), "BuildNamespaceList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetNamespace});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaAnyAttribute::BuildNamespaceListV1Compat
// Il2CppName: BuildNamespaceListV1Compat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaAnyAttribute::*)(::StringW)>(&System::Xml::Schema::XmlSchemaAnyAttribute::BuildNamespaceListV1Compat)> {
  static const MethodInfo* get() {
    static auto* targetNamespace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaAnyAttribute*), "BuildNamespaceListV1Compat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetNamespace});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaAnyAttribute::Allows
// Il2CppName: Allows
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::XmlSchemaAnyAttribute::*)(::System::Xml::XmlQualifiedName*)>(&System::Xml::Schema::XmlSchemaAnyAttribute::Allows)> {
  static const MethodInfo* get() {
    static auto* qname = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaAnyAttribute*), "Allows", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qname});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaAnyAttribute::IsSubset
// Il2CppName: IsSubset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaAnyAttribute*)>(&System::Xml::Schema::XmlSchemaAnyAttribute::IsSubset)> {
  static const MethodInfo* get() {
    static auto* sub = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaAnyAttribute")->byval_arg;
    static auto* super = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaAnyAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaAnyAttribute*), "IsSubset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sub, super});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaAnyAttribute::Intersection
// Il2CppName: Intersection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaAnyAttribute* (*)(::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaAnyAttribute*, bool)>(&System::Xml::Schema::XmlSchemaAnyAttribute::Intersection)> {
  static const MethodInfo* get() {
    static auto* o1 = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaAnyAttribute")->byval_arg;
    static auto* o2 = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaAnyAttribute")->byval_arg;
    static auto* v1Compat = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaAnyAttribute*), "Intersection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o1, o2, v1Compat});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaAnyAttribute::Union
// Il2CppName: Union
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaAnyAttribute* (*)(::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaAnyAttribute*, bool)>(&System::Xml::Schema::XmlSchemaAnyAttribute::Union)> {
  static const MethodInfo* get() {
    static auto* o1 = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaAnyAttribute")->byval_arg;
    static auto* o2 = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaAnyAttribute")->byval_arg;
    static auto* v1Compat = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaAnyAttribute*), "Union", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o1, o2, v1Compat});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaAnyAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
