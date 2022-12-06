// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Converters.IXmlNode
#include "Newtonsoft/Json/Converters/IXmlNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Linq
namespace System::Xml::Linq {
  // Forward declaring type: XObject
  class XObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNodeType
  struct XmlNodeType;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Forward declaring type: XObjectWrapper
  class XObjectWrapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Converters::XObjectWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XObjectWrapper*, "Newtonsoft.Json.Converters", "XObjectWrapper");
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Converters.XObjectWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  class XObjectWrapper : public ::Il2CppObject/*, public ::Newtonsoft::Json::Converters::IXmlNode*/ {
    public:
    public:
    // private readonly System.Xml.Linq.XObject _xmlObject
    // Size: 0x8
    // Offset: 0x10
    ::System::Xml::Linq::XObject* xmlObject;
    // Field size check
    static_assert(sizeof(::System::Xml::Linq::XObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Newtonsoft::Json::Converters::IXmlNode
    operator ::Newtonsoft::Json::Converters::IXmlNode() noexcept {
      return *reinterpret_cast<::Newtonsoft::Json::Converters::IXmlNode*>(this);
    }
    // Creating interface conversion operator: i_IXmlNode
    inline ::Newtonsoft::Json::Converters::IXmlNode* i_IXmlNode() noexcept {
      return reinterpret_cast<::Newtonsoft::Json::Converters::IXmlNode*>(this);
    }
    // Creating conversion operator: operator ::System::Xml::Linq::XObject*
    constexpr operator ::System::Xml::Linq::XObject*() const noexcept {
      return xmlObject;
    }
    // Get static field: static private readonly System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> EmptyChildNodes
    static ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* _get_EmptyChildNodes();
    // Set static field: static private readonly System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> EmptyChildNodes
    static void _set_EmptyChildNodes(::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* value);
    // Get instance field reference: private readonly System.Xml.Linq.XObject _xmlObject
    [[deprecated("Use field access instead!")]] ::System::Xml::Linq::XObject*& dyn__xmlObject();
    // public System.Object get_WrappedNode()
    // Offset: 0x180FB30
    ::Il2CppObject* get_WrappedNode();
    // public System.Xml.XmlNodeType get_NodeType()
    // Offset: 0x180FB38
    ::System::Xml::XmlNodeType get_NodeType();
    // public System.String get_LocalName()
    // Offset: 0x180FB58
    ::StringW get_LocalName();
    // public System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> get_ChildNodes()
    // Offset: 0x180FB60
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_ChildNodes();
    // public System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> get_Attributes()
    // Offset: 0x180FBC8
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_Attributes();
    // public Newtonsoft.Json.Converters.IXmlNode get_ParentNode()
    // Offset: 0x180FBD0
    ::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode();
    // public System.String get_Value()
    // Offset: 0x180FBD8
    ::StringW get_Value();
    // public System.String get_NamespaceUri()
    // Offset: 0x180FC40
    ::StringW get_NamespaceUri();
    // public System.Void .ctor(System.Xml.Linq.XObject xmlObject)
    // Offset: 0x180D9D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XObjectWrapper* New_ctor(::System::Xml::Linq::XObject* xmlObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Converters::XObjectWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XObjectWrapper*, creationType>(xmlObject)));
    }
    // static private System.Void .cctor()
    // Offset: 0x180FC48
    static void _cctor();
    // public Newtonsoft.Json.Converters.IXmlNode AppendChild(Newtonsoft.Json.Converters.IXmlNode newChild)
    // Offset: 0x180FBE0
    ::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* newChild);
  }; // Newtonsoft.Json.Converters.XObjectWrapper
  #pragma pack(pop)
  static check_size<sizeof(XObjectWrapper), 16 + sizeof(::System::Xml::Linq::XObject*)> __Newtonsoft_Json_Converters_XObjectWrapperSizeCheck;
  static_assert(sizeof(XObjectWrapper) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XObjectWrapper::get_WrappedNode
// Il2CppName: get_WrappedNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Newtonsoft::Json::Converters::XObjectWrapper::*)()>(&Newtonsoft::Json::Converters::XObjectWrapper::get_WrappedNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XObjectWrapper*), "get_WrappedNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XObjectWrapper::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (Newtonsoft::Json::Converters::XObjectWrapper::*)()>(&Newtonsoft::Json::Converters::XObjectWrapper::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XObjectWrapper*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XObjectWrapper::get_LocalName
// Il2CppName: get_LocalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Converters::XObjectWrapper::*)()>(&Newtonsoft::Json::Converters::XObjectWrapper::get_LocalName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XObjectWrapper*), "get_LocalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XObjectWrapper::get_ChildNodes
// Il2CppName: get_ChildNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* (Newtonsoft::Json::Converters::XObjectWrapper::*)()>(&Newtonsoft::Json::Converters::XObjectWrapper::get_ChildNodes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XObjectWrapper*), "get_ChildNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XObjectWrapper::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* (Newtonsoft::Json::Converters::XObjectWrapper::*)()>(&Newtonsoft::Json::Converters::XObjectWrapper::get_Attributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XObjectWrapper*), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XObjectWrapper::get_ParentNode
// Il2CppName: get_ParentNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (Newtonsoft::Json::Converters::XObjectWrapper::*)()>(&Newtonsoft::Json::Converters::XObjectWrapper::get_ParentNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XObjectWrapper*), "get_ParentNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XObjectWrapper::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Converters::XObjectWrapper::*)()>(&Newtonsoft::Json::Converters::XObjectWrapper::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XObjectWrapper*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XObjectWrapper::get_NamespaceUri
// Il2CppName: get_NamespaceUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Converters::XObjectWrapper::*)()>(&Newtonsoft::Json::Converters::XObjectWrapper::get_NamespaceUri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XObjectWrapper*), "get_NamespaceUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XObjectWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XObjectWrapper::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Newtonsoft::Json::Converters::XObjectWrapper::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XObjectWrapper*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XObjectWrapper::AppendChild
// Il2CppName: AppendChild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (Newtonsoft::Json::Converters::XObjectWrapper::*)(::Newtonsoft::Json::Converters::IXmlNode*)>(&Newtonsoft::Json::Converters::XObjectWrapper::AppendChild)> {
  static const MethodInfo* get() {
    static auto* newChild = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Converters", "IXmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XObjectWrapper*), "AppendChild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newChild});
  }
};
