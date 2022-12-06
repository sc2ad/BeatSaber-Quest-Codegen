// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Linq.XNode
#include "System/Xml/Linq/XNode.hpp"
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
// Completed forward declares
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Forward declaring type: XProcessingInstruction
  class XProcessingInstruction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Linq::XProcessingInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XProcessingInstruction*, "System.Xml.Linq", "XProcessingInstruction");
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Linq.XProcessingInstruction
  // [TokenAttribute] Offset: FFFFFFFF
  class XProcessingInstruction : public ::System::Xml::Linq::XNode {
    public:
    public:
    // System.String target
    // Size: 0x8
    // Offset: 0x28
    ::StringW target;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.String data
    // Size: 0x8
    // Offset: 0x30
    ::StringW data;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::Xml::Linq::XNode*
    constexpr operator ::System::Xml::Linq::XNode*() const noexcept = delete;
    // Get instance field reference: System.String target
    [[deprecated("Use field access instead!")]] ::StringW& dyn_target();
    // Get instance field reference: System.String data
    [[deprecated("Use field access instead!")]] ::StringW& dyn_data();
    // public System.String get_Data()
    // Offset: 0x2B2577C
    ::StringW get_Data();
    // public System.String get_Target()
    // Offset: 0x2B2578C
    ::StringW get_Target();
    // public System.Void .ctor(System.String target, System.String data)
    // Offset: 0x2B25518
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XProcessingInstruction* New_ctor(::StringW target, ::StringW data) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XProcessingInstruction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XProcessingInstruction*, creationType>(target, data)));
    }
    // public System.Void .ctor(System.Xml.Linq.XProcessingInstruction other)
    // Offset: 0x2B256D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XProcessingInstruction* New_ctor(::System::Xml::Linq::XProcessingInstruction* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XProcessingInstruction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XProcessingInstruction*, creationType>(other)));
    }
    // static private System.Void ValidateName(System.String name)
    // Offset: 0x2B255C0
    static void ValidateName(::StringW name);
    // public override System.Xml.XmlNodeType get_NodeType()
    // Offset: 0x2B25784
    // Implemented from: System.Xml.Linq.XObject
    // Base method: System.Xml.XmlNodeType XObject::get_NodeType()
    ::System::Xml::XmlNodeType get_NodeType();
    // public override System.Void WriteTo(System.Xml.XmlWriter writer)
    // Offset: 0x2B25794
    // Implemented from: System.Xml.Linq.XNode
    // Base method: System.Void XNode::WriteTo(System.Xml.XmlWriter writer)
    void WriteTo(::System::Xml::XmlWriter* writer);
    // override System.Xml.Linq.XNode CloneNode()
    // Offset: 0x2B25834
    // Implemented from: System.Xml.Linq.XNode
    // Base method: System.Xml.Linq.XNode XNode::CloneNode()
    ::System::Xml::Linq::XNode* CloneNode();
  }; // System.Xml.Linq.XProcessingInstruction
  #pragma pack(pop)
  static check_size<sizeof(XProcessingInstruction), 48 + sizeof(::StringW)> __System_Xml_Linq_XProcessingInstructionSizeCheck;
  static_assert(sizeof(XProcessingInstruction) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Linq::XProcessingInstruction::get_Data
// Il2CppName: get_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Linq::XProcessingInstruction::*)()>(&System::Xml::Linq::XProcessingInstruction::get_Data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XProcessingInstruction*), "get_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XProcessingInstruction::get_Target
// Il2CppName: get_Target
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Linq::XProcessingInstruction::*)()>(&System::Xml::Linq::XProcessingInstruction::get_Target)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XProcessingInstruction*), "get_Target", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XProcessingInstruction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Linq::XProcessingInstruction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Linq::XProcessingInstruction::ValidateName
// Il2CppName: ValidateName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&System::Xml::Linq::XProcessingInstruction::ValidateName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XProcessingInstruction*), "ValidateName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XProcessingInstruction::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (System::Xml::Linq::XProcessingInstruction::*)()>(&System::Xml::Linq::XProcessingInstruction::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XProcessingInstruction*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XProcessingInstruction::WriteTo
// Il2CppName: WriteTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XProcessingInstruction::*)(::System::Xml::XmlWriter*)>(&System::Xml::Linq::XProcessingInstruction::WriteTo)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XProcessingInstruction*), "WriteTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XProcessingInstruction::CloneNode
// Il2CppName: CloneNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XNode* (System::Xml::Linq::XProcessingInstruction::*)()>(&System::Xml::Linq::XProcessingInstruction::CloneNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XProcessingInstruction*), "CloneNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
