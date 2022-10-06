// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Linq.XObject
#include "System/Xml/Linq/XObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Linq
namespace System::Xml::Linq {
  // Forward declaring type: XName
  class XName;
  // Forward declaring type: XNamespace
  class XNamespace;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNodeType
  struct XmlNodeType;
}
// Completed forward declares
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Forward declaring type: XAttribute
  class XAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Linq::XAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XAttribute*, "System.Xml.Linq", "XAttribute");
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Linq.XAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [TypeDescriptionProviderAttribute] Offset: 10D644C
  class XAttribute : public ::System::Xml::Linq::XObject {
    public:
    public:
    // System.Xml.Linq.XAttribute next
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::Linq::XAttribute* next;
    // Field size check
    static_assert(sizeof(::System::Xml::Linq::XAttribute*) == 0x8);
    // System.Xml.Linq.XName name
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::Linq::XName* name;
    // Field size check
    static_assert(sizeof(::System::Xml::Linq::XName*) == 0x8);
    // System.String value
    // Size: 0x8
    // Offset: 0x30
    ::StringW value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: System.Xml.Linq.XAttribute next
    [[deprecated("Use field access instead!")]] ::System::Xml::Linq::XAttribute*& dyn_next();
    // Get instance field reference: System.Xml.Linq.XName name
    [[deprecated("Use field access instead!")]] ::System::Xml::Linq::XName*& dyn_name();
    // Get instance field reference: System.String value
    [[deprecated("Use field access instead!")]] ::StringW& dyn_value();
    // public System.Boolean get_IsNamespaceDeclaration()
    // Offset: 0x2AF4318
    bool get_IsNamespaceDeclaration();
    // public System.Xml.Linq.XName get_Name()
    // Offset: 0x2AF59CC
    ::System::Xml::Linq::XName* get_Name();
    // public System.String get_Value()
    // Offset: 0x2AF59DC
    ::StringW get_Value();
    // public System.Void .ctor(System.Xml.Linq.XName name, System.Object value)
    // Offset: 0x2AF5250
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XAttribute* New_ctor(::System::Xml::Linq::XName* name, ::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XAttribute*, creationType>(name, value)));
    }
    // public System.Void .ctor(System.Xml.Linq.XAttribute other)
    // Offset: 0x2AF5924
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XAttribute* New_ctor(::System::Xml::Linq::XAttribute* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XAttribute*, creationType>(other)));
    }
    // System.String GetPrefixOfNamespace(System.Xml.Linq.XNamespace ns)
    // Offset: 0x2AF5D10
    ::StringW GetPrefixOfNamespace(::System::Xml::Linq::XNamespace* ns);
    // static private System.Void ValidateAttribute(System.Xml.Linq.XName name, System.String value)
    // Offset: 0x2AF5714
    static void ValidateAttribute(::System::Xml::Linq::XName* name, ::StringW value);
    // public override System.Xml.XmlNodeType get_NodeType()
    // Offset: 0x2AF59D4
    // Implemented from: System.Xml.Linq.XObject
    // Base method: System.Xml.XmlNodeType XObject::get_NodeType()
    ::System::Xml::XmlNodeType get_NodeType();
    // public override System.String ToString()
    // Offset: 0x2AF59E4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Xml.Linq.XAttribute
  #pragma pack(pop)
  static check_size<sizeof(XAttribute), 48 + sizeof(::StringW)> __System_Xml_Linq_XAttributeSizeCheck;
  static_assert(sizeof(XAttribute) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Linq::XAttribute::get_IsNamespaceDeclaration
// Il2CppName: get_IsNamespaceDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Linq::XAttribute::*)()>(&System::Xml::Linq::XAttribute::get_IsNamespaceDeclaration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XAttribute*), "get_IsNamespaceDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XAttribute::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XName* (System::Xml::Linq::XAttribute::*)()>(&System::Xml::Linq::XAttribute::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XAttribute*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XAttribute::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Linq::XAttribute::*)()>(&System::Xml::Linq::XAttribute::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XAttribute*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Linq::XAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Linq::XAttribute::GetPrefixOfNamespace
// Il2CppName: GetPrefixOfNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Linq::XAttribute::*)(::System::Xml::Linq::XNamespace*)>(&System::Xml::Linq::XAttribute::GetPrefixOfNamespace)> {
  static const MethodInfo* get() {
    static auto* ns = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XNamespace")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XAttribute*), "GetPrefixOfNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ns});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XAttribute::ValidateAttribute
// Il2CppName: ValidateAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Linq::XName*, ::StringW)>(&System::Xml::Linq::XAttribute::ValidateAttribute)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XName")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XAttribute*), "ValidateAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XAttribute::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (System::Xml::Linq::XAttribute::*)()>(&System::Xml::Linq::XAttribute::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XAttribute*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XAttribute::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Linq::XAttribute::*)()>(&System::Xml::Linq::XAttribute::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XAttribute*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
