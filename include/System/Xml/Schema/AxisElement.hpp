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
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: DoubleLinkAxis
  class DoubleLinkAxis;
  // Forward declaring type: ForwardAxis
  class ForwardAxis;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: AxisElement
  class AxisElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::AxisElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::AxisElement*, "System.Xml.Schema", "AxisElement");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.AxisElement
  // [TokenAttribute] Offset: FFFFFFFF
  class AxisElement : public ::Il2CppObject {
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
    // System.Xml.Schema.DoubleLinkAxis curNode
    // Size: 0x8
    // Offset: 0x10
    ::System::Xml::Schema::DoubleLinkAxis* curNode;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::DoubleLinkAxis*) == 0x8);
    // System.Int32 rootDepth
    // Size: 0x4
    // Offset: 0x18
    int rootDepth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 curDepth
    // Size: 0x4
    // Offset: 0x1C
    int curDepth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Boolean isMatch
    // Size: 0x1
    // Offset: 0x20
    bool isMatch;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: System.Xml.Schema.DoubleLinkAxis curNode
    ::System::Xml::Schema::DoubleLinkAxis*& dyn_curNode();
    // Get instance field reference: System.Int32 rootDepth
    int& dyn_rootDepth();
    // Get instance field reference: System.Int32 curDepth
    int& dyn_curDepth();
    // Get instance field reference: System.Boolean isMatch
    bool& dyn_isMatch();
    // System.Xml.Schema.DoubleLinkAxis get_CurNode()
    // Offset: 0x16F31F8
    ::System::Xml::Schema::DoubleLinkAxis* get_CurNode();
    // System.Void .ctor(System.Xml.Schema.DoubleLinkAxis node, System.Int32 depth)
    // Offset: 0x16F3200
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AxisElement* New_ctor(::System::Xml::Schema::DoubleLinkAxis* node, int depth) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::AxisElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AxisElement*, creationType>(node, depth)));
    }
    // System.Void SetDepth(System.Int32 depth)
    // Offset: 0x16F3240
    void SetDepth(int depth);
    // System.Void MoveToParent(System.Int32 depth, System.Xml.Schema.ForwardAxis parent)
    // Offset: 0x16F3248
    void MoveToParent(int depth, ::System::Xml::Schema::ForwardAxis* parent);
    // System.Boolean MoveToChild(System.String name, System.String URN, System.Int32 depth, System.Xml.Schema.ForwardAxis parent)
    // Offset: 0x16F333C
    bool MoveToChild(::StringW name, ::StringW URN, int depth, ::System::Xml::Schema::ForwardAxis* parent);
  }; // System.Xml.Schema.AxisElement
  #pragma pack(pop)
  static check_size<sizeof(AxisElement), 32 + sizeof(bool)> __System_Xml_Schema_AxisElementSizeCheck;
  static_assert(sizeof(AxisElement) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::AxisElement::get_CurNode
// Il2CppName: get_CurNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::DoubleLinkAxis* (System::Xml::Schema::AxisElement::*)()>(&System::Xml::Schema::AxisElement::get_CurNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::AxisElement*), "get_CurNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::AxisElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::AxisElement::SetDepth
// Il2CppName: SetDepth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::AxisElement::*)(int)>(&System::Xml::Schema::AxisElement::SetDepth)> {
  static const MethodInfo* get() {
    static auto* depth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::AxisElement*), "SetDepth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{depth});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::AxisElement::MoveToParent
// Il2CppName: MoveToParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::AxisElement::*)(int, ::System::Xml::Schema::ForwardAxis*)>(&System::Xml::Schema::AxisElement::MoveToParent)> {
  static const MethodInfo* get() {
    static auto* depth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* parent = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "ForwardAxis")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::AxisElement*), "MoveToParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{depth, parent});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::AxisElement::MoveToChild
// Il2CppName: MoveToChild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::AxisElement::*)(::StringW, ::StringW, int, ::System::Xml::Schema::ForwardAxis*)>(&System::Xml::Schema::AxisElement::MoveToChild)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* URN = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* depth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* parent = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "ForwardAxis")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::AxisElement*), "MoveToChild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, URN, depth, parent});
  }
};
