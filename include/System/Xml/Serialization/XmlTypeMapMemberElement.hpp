// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Serialization.XmlTypeMapMember
#include "System/Xml/Serialization/XmlTypeMapMember.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlTypeMapElementInfoList
  class XmlTypeMapElementInfoList;
  // Forward declaring type: TypeData
  class TypeData;
  // Forward declaring type: XmlTypeMapElementInfo
  class XmlTypeMapElementInfo;
}
// Completed forward declares
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlTypeMapMemberElement
  class XmlTypeMapMemberElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlTypeMapMemberElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlTypeMapMemberElement*, "System.Xml.Serialization", "XmlTypeMapMemberElement");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlTypeMapMemberElement
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlTypeMapMemberElement : public ::System::Xml::Serialization::XmlTypeMapMember {
    public:
    // Writing base type padding for base size: 0x54 to desired offset: 0x58
    char ___base_padding[0x4] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Xml.Serialization.XmlTypeMapElementInfoList _elementInfo
    // Size: 0x8
    // Offset: 0x58
    ::System::Xml::Serialization::XmlTypeMapElementInfoList* elementInfo;
    // Field size check
    static_assert(sizeof(::System::Xml::Serialization::XmlTypeMapElementInfoList*) == 0x8);
    // private System.String _choiceMember
    // Size: 0x8
    // Offset: 0x60
    ::StringW choiceMember;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean _isTextCollector
    // Size: 0x1
    // Offset: 0x68
    bool isTextCollector;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isTextCollector and: choiceTypeData
    char __padding2[0x7] = {};
    // private System.Xml.Serialization.TypeData _choiceTypeData
    // Size: 0x8
    // Offset: 0x70
    ::System::Xml::Serialization::TypeData* choiceTypeData;
    // Field size check
    static_assert(sizeof(::System::Xml::Serialization::TypeData*) == 0x8);
    public:
    // Get instance field reference: private System.Xml.Serialization.XmlTypeMapElementInfoList _elementInfo
    ::System::Xml::Serialization::XmlTypeMapElementInfoList*& dyn__elementInfo();
    // Get instance field reference: private System.String _choiceMember
    ::StringW& dyn__choiceMember();
    // Get instance field reference: private System.Boolean _isTextCollector
    bool& dyn__isTextCollector();
    // Get instance field reference: private System.Xml.Serialization.TypeData _choiceTypeData
    ::System::Xml::Serialization::TypeData*& dyn__choiceTypeData();
    // public System.Xml.Serialization.XmlTypeMapElementInfoList get_ElementInfo()
    // Offset: 0x1615F38
    ::System::Xml::Serialization::XmlTypeMapElementInfoList* get_ElementInfo();
    // public System.Void set_ElementInfo(System.Xml.Serialization.XmlTypeMapElementInfoList value)
    // Offset: 0x16162E4
    void set_ElementInfo(::System::Xml::Serialization::XmlTypeMapElementInfoList* value);
    // public System.String get_ChoiceMember()
    // Offset: 0x16162EC
    ::StringW get_ChoiceMember();
    // public System.Void set_ChoiceMember(System.String value)
    // Offset: 0x16162F4
    void set_ChoiceMember(::StringW value);
    // public System.Xml.Serialization.TypeData get_ChoiceTypeData()
    // Offset: 0x16162FC
    ::System::Xml::Serialization::TypeData* get_ChoiceTypeData();
    // public System.Void set_ChoiceTypeData(System.Xml.Serialization.TypeData value)
    // Offset: 0x1616304
    void set_ChoiceTypeData(::System::Xml::Serialization::TypeData* value);
    // public System.Boolean get_IsXmlTextCollector()
    // Offset: 0x1616938
    bool get_IsXmlTextCollector();
    // public System.Void set_IsXmlTextCollector(System.Boolean value)
    // Offset: 0x1616940
    void set_IsXmlTextCollector(bool value);
    // public System.Xml.Serialization.XmlTypeMapElementInfo FindElement(System.Object ob, System.Object memberValue)
    // Offset: 0x161630C
    ::System::Xml::Serialization::XmlTypeMapElementInfo* FindElement(::Il2CppObject* ob, ::Il2CppObject* memberValue);
    // public System.Void SetChoice(System.Object ob, System.Object choice)
    // Offset: 0x1616928
    void SetChoice(::Il2CppObject* ob, ::Il2CppObject* choice);
    // public System.Void .ctor()
    // Offset: 0x16162E0
    // Implemented from: System.Xml.Serialization.XmlTypeMapMember
    // Base method: System.Void XmlTypeMapMember::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlTypeMapMemberElement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::XmlTypeMapMemberElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlTypeMapMemberElement*, creationType>()));
    }
  }; // System.Xml.Serialization.XmlTypeMapMemberElement
  #pragma pack(pop)
  static check_size<sizeof(XmlTypeMapMemberElement), 112 + sizeof(::System::Xml::Serialization::TypeData*)> __System_Xml_Serialization_XmlTypeMapMemberElementSizeCheck;
  static_assert(sizeof(XmlTypeMapMemberElement) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapMemberElement::get_ElementInfo
// Il2CppName: get_ElementInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapElementInfoList* (System::Xml::Serialization::XmlTypeMapMemberElement::*)()>(&System::Xml::Serialization::XmlTypeMapMemberElement::get_ElementInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapMemberElement*), "get_ElementInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapMemberElement::set_ElementInfo
// Il2CppName: set_ElementInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlTypeMapMemberElement::*)(::System::Xml::Serialization::XmlTypeMapElementInfoList*)>(&System::Xml::Serialization::XmlTypeMapMemberElement::set_ElementInfo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "XmlTypeMapElementInfoList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapMemberElement*), "set_ElementInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapMemberElement::get_ChoiceMember
// Il2CppName: get_ChoiceMember
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Serialization::XmlTypeMapMemberElement::*)()>(&System::Xml::Serialization::XmlTypeMapMemberElement::get_ChoiceMember)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapMemberElement*), "get_ChoiceMember", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapMemberElement::set_ChoiceMember
// Il2CppName: set_ChoiceMember
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlTypeMapMemberElement::*)(::StringW)>(&System::Xml::Serialization::XmlTypeMapMemberElement::set_ChoiceMember)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapMemberElement*), "set_ChoiceMember", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapMemberElement::get_ChoiceTypeData
// Il2CppName: get_ChoiceTypeData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::TypeData* (System::Xml::Serialization::XmlTypeMapMemberElement::*)()>(&System::Xml::Serialization::XmlTypeMapMemberElement::get_ChoiceTypeData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapMemberElement*), "get_ChoiceTypeData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapMemberElement::set_ChoiceTypeData
// Il2CppName: set_ChoiceTypeData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlTypeMapMemberElement::*)(::System::Xml::Serialization::TypeData*)>(&System::Xml::Serialization::XmlTypeMapMemberElement::set_ChoiceTypeData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "TypeData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapMemberElement*), "set_ChoiceTypeData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapMemberElement::get_IsXmlTextCollector
// Il2CppName: get_IsXmlTextCollector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Serialization::XmlTypeMapMemberElement::*)()>(&System::Xml::Serialization::XmlTypeMapMemberElement::get_IsXmlTextCollector)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapMemberElement*), "get_IsXmlTextCollector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapMemberElement::set_IsXmlTextCollector
// Il2CppName: set_IsXmlTextCollector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlTypeMapMemberElement::*)(bool)>(&System::Xml::Serialization::XmlTypeMapMemberElement::set_IsXmlTextCollector)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapMemberElement*), "set_IsXmlTextCollector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapMemberElement::FindElement
// Il2CppName: FindElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapElementInfo* (System::Xml::Serialization::XmlTypeMapMemberElement::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Xml::Serialization::XmlTypeMapMemberElement::FindElement)> {
  static const MethodInfo* get() {
    static auto* ob = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* memberValue = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapMemberElement*), "FindElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ob, memberValue});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapMemberElement::SetChoice
// Il2CppName: SetChoice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlTypeMapMemberElement::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Xml::Serialization::XmlTypeMapMemberElement::SetChoice)> {
  static const MethodInfo* get() {
    static auto* ob = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* choice = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeMapMemberElement*), "SetChoice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ob, choice});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeMapMemberElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
