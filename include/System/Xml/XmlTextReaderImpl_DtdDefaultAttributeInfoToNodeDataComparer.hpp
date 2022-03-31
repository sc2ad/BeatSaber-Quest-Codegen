// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlTextReaderImpl
#include "System/Xml/XmlTextReaderImpl.hpp"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlTextReaderImpl::DtdDefaultAttributeInfoToNodeDataComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlTextReaderImpl::DtdDefaultAttributeInfoToNodeDataComparer*, "System.Xml", "XmlTextReaderImpl/DtdDefaultAttributeInfoToNodeDataComparer");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlTextReaderImpl/System.Xml.DtdDefaultAttributeInfoToNodeDataComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlTextReaderImpl::DtdDefaultAttributeInfoToNodeDataComparer : public ::Il2CppObject/*, public ::System::Collections::Generic::IComparer_1<::Il2CppObject*>*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IComparer_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IComparer_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IComparer_1<::Il2CppObject*>*>(this);
    }
    // Get static field: static private System.Collections.Generic.IComparer`1<System.Object> s_instance
    static ::System::Collections::Generic::IComparer_1<::Il2CppObject*>* _get_s_instance();
    // Set static field: static private System.Collections.Generic.IComparer`1<System.Object> s_instance
    static void _set_s_instance(::System::Collections::Generic::IComparer_1<::Il2CppObject*>* value);
    // static System.Collections.Generic.IComparer`1<System.Object> get_Instance()
    // Offset: 0x26BB02C
    static ::System::Collections::Generic::IComparer_1<::Il2CppObject*>* get_Instance();
    // static private System.Void .cctor()
    // Offset: 0x26BB3E0
    static void _cctor();
    // public System.Int32 Compare(System.Object x, System.Object y)
    // Offset: 0x26BB094
    int Compare(::Il2CppObject* x, ::Il2CppObject* y);
    // public System.Void .ctor()
    // Offset: 0x26BB3D8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlTextReaderImpl::DtdDefaultAttributeInfoToNodeDataComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlTextReaderImpl::DtdDefaultAttributeInfoToNodeDataComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlTextReaderImpl::DtdDefaultAttributeInfoToNodeDataComparer*, creationType>()));
    }
  }; // System.Xml.XmlTextReaderImpl/System.Xml.DtdDefaultAttributeInfoToNodeDataComparer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdDefaultAttributeInfoToNodeDataComparer::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IComparer_1<::Il2CppObject*>* (*)()>(&System::Xml::XmlTextReaderImpl::DtdDefaultAttributeInfoToNodeDataComparer::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdDefaultAttributeInfoToNodeDataComparer*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdDefaultAttributeInfoToNodeDataComparer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::XmlTextReaderImpl::DtdDefaultAttributeInfoToNodeDataComparer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdDefaultAttributeInfoToNodeDataComparer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdDefaultAttributeInfoToNodeDataComparer::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlTextReaderImpl::DtdDefaultAttributeInfoToNodeDataComparer::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Xml::XmlTextReaderImpl::DtdDefaultAttributeInfoToNodeDataComparer::Compare)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdDefaultAttributeInfoToNodeDataComparer*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdDefaultAttributeInfoToNodeDataComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
