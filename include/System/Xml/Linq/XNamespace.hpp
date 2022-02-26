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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Linq
namespace System::Xml::Linq {
  // Forward declaring type: XHashtable`1<TValue>
  template<typename TValue>
  class XHashtable_1;
  // Forward declaring type: XName
  class XName;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: WeakReference
  class WeakReference;
}
// Completed forward declares
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Forward declaring type: XNamespace
  class XNamespace;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Linq::XNamespace);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XNamespace*, "System.Xml.Linq", "XNamespace");
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Linq.XNamespace
  // [TokenAttribute] Offset: FFFFFFFF
  class XNamespace : public ::Il2CppObject {
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
    // private System.String namespaceName
    // Size: 0x8
    // Offset: 0x10
    ::StringW namespaceName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 hashCode
    // Size: 0x4
    // Offset: 0x18
    int hashCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: hashCode and: names
    char __padding1[0x4] = {};
    // private System.Xml.Linq.XHashtable`1<System.Xml.Linq.XName> names
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::Linq::XHashtable_1<::System::Xml::Linq::XName*>* names;
    // Field size check
    static_assert(sizeof(::System::Xml::Linq::XHashtable_1<::System::Xml::Linq::XName*>*) == 0x8);
    public:
    // Get static field: static private System.Xml.Linq.XHashtable`1<System.WeakReference> namespaces
    static ::System::Xml::Linq::XHashtable_1<::System::WeakReference*>* _get_namespaces();
    // Set static field: static private System.Xml.Linq.XHashtable`1<System.WeakReference> namespaces
    static void _set_namespaces(::System::Xml::Linq::XHashtable_1<::System::WeakReference*>* value);
    // Get static field: static private System.WeakReference refNone
    static ::System::WeakReference* _get_refNone();
    // Set static field: static private System.WeakReference refNone
    static void _set_refNone(::System::WeakReference* value);
    // Get static field: static private System.WeakReference refXml
    static ::System::WeakReference* _get_refXml();
    // Set static field: static private System.WeakReference refXml
    static void _set_refXml(::System::WeakReference* value);
    // Get static field: static private System.WeakReference refXmlns
    static ::System::WeakReference* _get_refXmlns();
    // Set static field: static private System.WeakReference refXmlns
    static void _set_refXmlns(::System::WeakReference* value);
    // Get instance field reference: private System.String namespaceName
    ::StringW& dyn_namespaceName();
    // Get instance field reference: private System.Int32 hashCode
    int& dyn_hashCode();
    // Get instance field reference: private System.Xml.Linq.XHashtable`1<System.Xml.Linq.XName> names
    ::System::Xml::Linq::XHashtable_1<::System::Xml::Linq::XName*>*& dyn_names();
    // public System.String get_NamespaceName()
    // Offset: 0x29E6AF4
    ::StringW get_NamespaceName();
    // static public System.Xml.Linq.XNamespace get_None()
    // Offset: 0x29E681C
    static ::System::Xml::Linq::XNamespace* get_None();
    // static public System.Xml.Linq.XNamespace get_Xml()
    // Offset: 0x29E6BE4
    static ::System::Xml::Linq::XNamespace* get_Xml();
    // static public System.Xml.Linq.XNamespace get_Xmlns()
    // Offset: 0x29E6C40
    static ::System::Xml::Linq::XNamespace* get_Xmlns();
    // System.Void .ctor(System.String namespaceName)
    // Offset: 0x29E6A18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XNamespace* New_ctor(::StringW namespaceName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XNamespace::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XNamespace*, creationType>(namespaceName)));
    }
    // public System.Xml.Linq.XName GetName(System.String localName)
    // Offset: 0x29E2B64
    ::System::Xml::Linq::XName* GetName(::StringW localName);
    // static public System.Xml.Linq.XNamespace Get(System.String namespaceName)
    // Offset: 0x29DEC98
    static ::System::Xml::Linq::XNamespace* Get(::StringW namespaceName);
    // System.Xml.Linq.XName GetName(System.String localName, System.Int32 index, System.Int32 count)
    // Offset: 0x29E6724
    ::System::Xml::Linq::XName* GetName(::StringW localName, int index, int count);
    // static System.Xml.Linq.XNamespace Get(System.String namespaceName, System.Int32 index, System.Int32 count)
    // Offset: 0x29E64A8
    static ::System::Xml::Linq::XNamespace* Get(::StringW namespaceName, int index, int count);
    // static private System.String ExtractLocalName(System.Xml.Linq.XName n)
    // Offset: 0x29E6CC8
    static ::StringW ExtractLocalName(::System::Xml::Linq::XName* n);
    // static private System.String ExtractNamespace(System.WeakReference r)
    // Offset: 0x29E6CE0
    static ::StringW ExtractNamespace(::System::WeakReference* r);
    // static private System.Xml.Linq.XNamespace EnsureNamespace(ref System.WeakReference refNmsp, System.String namespaceName)
    // Offset: 0x29E6B04
    static ::System::Xml::Linq::XNamespace* EnsureNamespace(ByRef<::System::WeakReference*> refNmsp, ::StringW namespaceName);
    // public override System.String ToString()
    // Offset: 0x29E6AFC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x29E6CA8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x29E6CB4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Xml.Linq.XNamespace
  #pragma pack(pop)
  static check_size<sizeof(XNamespace), 32 + sizeof(::System::Xml::Linq::XHashtable_1<::System::Xml::Linq::XName*>*)> __System_Xml_Linq_XNamespaceSizeCheck;
  static_assert(sizeof(XNamespace) == 0x28);
  // static public System.Boolean op_Equality(System.Xml.Linq.XNamespace left, System.Xml.Linq.XNamespace right)
  // Offset: 0x29DF34C
  bool operator ==(::System::Xml::Linq::XNamespace* left, ::System::Xml::Linq::XNamespace& right);
  // static public System.Boolean op_Inequality(System.Xml.Linq.XNamespace left, System.Xml.Linq.XNamespace right)
  // Offset: 0x29E6CBC
  bool operator !=(::System::Xml::Linq::XNamespace* left, ::System::Xml::Linq::XNamespace& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Linq::XNamespace::get_NamespaceName
// Il2CppName: get_NamespaceName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Linq::XNamespace::*)()>(&System::Xml::Linq::XNamespace::get_NamespaceName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XNamespace*), "get_NamespaceName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XNamespace::get_None
// Il2CppName: get_None
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XNamespace* (*)()>(&System::Xml::Linq::XNamespace::get_None)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XNamespace*), "get_None", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XNamespace::get_Xml
// Il2CppName: get_Xml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XNamespace* (*)()>(&System::Xml::Linq::XNamespace::get_Xml)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XNamespace*), "get_Xml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XNamespace::get_Xmlns
// Il2CppName: get_Xmlns
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XNamespace* (*)()>(&System::Xml::Linq::XNamespace::get_Xmlns)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XNamespace*), "get_Xmlns", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XNamespace::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Linq::XNamespace::GetName
// Il2CppName: GetName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XName* (System::Xml::Linq::XNamespace::*)(::StringW)>(&System::Xml::Linq::XNamespace::GetName)> {
  static const MethodInfo* get() {
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XNamespace*), "GetName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localName});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XNamespace::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XNamespace* (*)(::StringW)>(&System::Xml::Linq::XNamespace::Get)> {
  static const MethodInfo* get() {
    static auto* namespaceName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XNamespace*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{namespaceName});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XNamespace::GetName
// Il2CppName: GetName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XName* (System::Xml::Linq::XNamespace::*)(::StringW, int, int)>(&System::Xml::Linq::XNamespace::GetName)> {
  static const MethodInfo* get() {
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XNamespace*), "GetName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localName, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XNamespace::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XNamespace* (*)(::StringW, int, int)>(&System::Xml::Linq::XNamespace::Get)> {
  static const MethodInfo* get() {
    static auto* namespaceName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XNamespace*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{namespaceName, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XNamespace::ExtractLocalName
// Il2CppName: ExtractLocalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Xml::Linq::XName*)>(&System::Xml::Linq::XNamespace::ExtractLocalName)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XNamespace*), "ExtractLocalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XNamespace::ExtractNamespace
// Il2CppName: ExtractNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::WeakReference*)>(&System::Xml::Linq::XNamespace::ExtractNamespace)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("System", "WeakReference")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XNamespace*), "ExtractNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XNamespace::EnsureNamespace
// Il2CppName: EnsureNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XNamespace* (*)(ByRef<::System::WeakReference*>, ::StringW)>(&System::Xml::Linq::XNamespace::EnsureNamespace)> {
  static const MethodInfo* get() {
    static auto* refNmsp = &::il2cpp_utils::GetClassFromName("System", "WeakReference")->this_arg;
    static auto* namespaceName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XNamespace*), "EnsureNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{refNmsp, namespaceName});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XNamespace::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Linq::XNamespace::*)()>(&System::Xml::Linq::XNamespace::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XNamespace*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XNamespace::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Linq::XNamespace::*)(::Il2CppObject*)>(&System::Xml::Linq::XNamespace::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XNamespace*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XNamespace::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Linq::XNamespace::*)()>(&System::Xml::Linq::XNamespace::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XNamespace*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XNamespace::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Xml::Linq::XNamespace::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
