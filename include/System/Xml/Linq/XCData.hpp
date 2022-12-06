// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Linq.XText
#include "System/Xml/Linq/XText.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNodeType
  struct XmlNodeType;
  // Forward declaring type: XmlWriter
  class XmlWriter;
}
// Forward declaring namespace: System::Xml::Linq
namespace System::Xml::Linq {
  // Skipping declaration: XNode because it is already included!
}
// Completed forward declares
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Forward declaring type: XCData
  class XCData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Linq::XCData);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XCData*, "System.Xml.Linq", "XCData");
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Linq.XCData
  // [TokenAttribute] Offset: FFFFFFFF
  class XCData : public ::System::Xml::Linq::XText {
    public:
    // public System.Void .ctor(System.Xml.Linq.XCData other)
    // Offset: 0x2B208A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XCData* New_ctor(::System::Xml::Linq::XCData* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XCData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XCData*, creationType>(other)));
    }
    // public override System.Xml.XmlNodeType get_NodeType()
    // Offset: 0x2B20944
    // Implemented from: System.Xml.Linq.XText
    // Base method: System.Xml.XmlNodeType XText::get_NodeType()
    ::System::Xml::XmlNodeType get_NodeType();
    // public System.Void .ctor(System.String value)
    // Offset: 0x2B20800
    // Implemented from: System.Xml.Linq.XText
    // Base method: System.Void XText::.ctor(System.String value)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XCData* New_ctor(::StringW value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XCData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XCData*, creationType>(value)));
    }
    // public override System.Void WriteTo(System.Xml.XmlWriter writer)
    // Offset: 0x2B2094C
    // Implemented from: System.Xml.Linq.XText
    // Base method: System.Void XText::WriteTo(System.Xml.XmlWriter writer)
    void WriteTo(::System::Xml::XmlWriter* writer);
    // override System.Xml.Linq.XNode CloneNode()
    // Offset: 0x2B209EC
    // Implemented from: System.Xml.Linq.XText
    // Base method: System.Xml.Linq.XNode XText::CloneNode()
    ::System::Xml::Linq::XNode* CloneNode();
  }; // System.Xml.Linq.XCData
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Linq::XCData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Linq::XCData::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (System::Xml::Linq::XCData::*)()>(&System::Xml::Linq::XCData::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XCData*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XCData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Linq::XCData::WriteTo
// Il2CppName: WriteTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XCData::*)(::System::Xml::XmlWriter*)>(&System::Xml::Linq::XCData::WriteTo)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XCData*), "WriteTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XCData::CloneNode
// Il2CppName: CloneNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XNode* (System::Xml::Linq::XCData::*)()>(&System::Xml::Linq::XCData::CloneNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XCData*), "CloneNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
