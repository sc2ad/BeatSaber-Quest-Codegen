// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MS.Internal.Xml.XPath.AstNode
#include "MS/Internal/Xml/XPath/AstNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::XPath
namespace System::Xml::XPath {
  // Forward declaring type: XPathResultType
  struct XPathResultType;
}
// Completed forward declares
// Type namespace: MS.Internal.Xml.XPath
namespace MS::Internal::Xml::XPath {
  // Forward declaring type: Filter
  class Filter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MS::Internal::Xml::XPath::Filter);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::XPath::Filter*, "MS.Internal.Xml.XPath", "Filter");
// Type namespace: MS.Internal.Xml.XPath
namespace MS::Internal::Xml::XPath {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MS.Internal.Xml.XPath.Filter
  // [TokenAttribute] Offset: FFFFFFFF
  class Filter : public ::MS::Internal::Xml::XPath::AstNode {
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
    // private MS.Internal.Xml.XPath.AstNode input
    // Size: 0x8
    // Offset: 0x10
    ::MS::Internal::Xml::XPath::AstNode* input;
    // Field size check
    static_assert(sizeof(::MS::Internal::Xml::XPath::AstNode*) == 0x8);
    // private MS.Internal.Xml.XPath.AstNode condition
    // Size: 0x8
    // Offset: 0x18
    ::MS::Internal::Xml::XPath::AstNode* condition;
    // Field size check
    static_assert(sizeof(::MS::Internal::Xml::XPath::AstNode*) == 0x8);
    public:
    // Get instance field reference: private MS.Internal.Xml.XPath.AstNode input
    ::MS::Internal::Xml::XPath::AstNode*& dyn_input();
    // Get instance field reference: private MS.Internal.Xml.XPath.AstNode condition
    ::MS::Internal::Xml::XPath::AstNode*& dyn_condition();
    // public System.Void .ctor(MS.Internal.Xml.XPath.AstNode input, MS.Internal.Xml.XPath.AstNode condition)
    // Offset: 0x1B95BC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Filter* New_ctor(::MS::Internal::Xml::XPath::AstNode* input, ::MS::Internal::Xml::XPath::AstNode* condition) {
      static auto ___internal__logger = ::Logger::get().WithContext("::MS::Internal::Xml::XPath::Filter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Filter*, creationType>(input, condition)));
    }
    // public override MS.Internal.Xml.XPath.AstNode/MS.Internal.Xml.XPath.AstType get_Type()
    // Offset: 0x1B95C00
    // Implemented from: MS.Internal.Xml.XPath.AstNode
    // Base method: MS.Internal.Xml.XPath.AstNode/MS.Internal.Xml.XPath.AstType AstNode::get_Type()
    ::MS::Internal::Xml::XPath::AstNode::AstType get_Type();
    // public override System.Xml.XPath.XPathResultType get_ReturnType()
    // Offset: 0x1B95C08
    // Implemented from: MS.Internal.Xml.XPath.AstNode
    // Base method: System.Xml.XPath.XPathResultType AstNode::get_ReturnType()
    ::System::Xml::XPath::XPathResultType get_ReturnType();
  }; // MS.Internal.Xml.XPath.Filter
  #pragma pack(pop)
  static check_size<sizeof(Filter), 24 + sizeof(::MS::Internal::Xml::XPath::AstNode*)> __MS_Internal_Xml_XPath_FilterSizeCheck;
  static_assert(sizeof(Filter) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::Filter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::Filter::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::AstNode::AstType (MS::Internal::Xml::XPath::Filter::*)()>(&MS::Internal::Xml::XPath::Filter::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::Filter*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::Filter::get_ReturnType
// Il2CppName: get_ReturnType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XPath::XPathResultType (MS::Internal::Xml::XPath::Filter::*)()>(&MS::Internal::Xml::XPath::Filter::get_ReturnType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::Filter*), "get_ReturnType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
