// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlWellFormedWriter
#include "System/Xml/XmlWellFormedWriter.hpp"
// Including type: System.Xml.IXmlNamespaceResolver
#include "System/Xml/IXmlNamespaceResolver.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlWellFormedWriter/System.Xml.NamespaceResolverProxy
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlWellFormedWriter::NamespaceResolverProxy : public ::Il2CppObject/*, public System::Xml::IXmlNamespaceResolver*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Xml.XmlWellFormedWriter wfWriter
    // Size: 0x8
    // Offset: 0x10
    System::Xml::XmlWellFormedWriter* wfWriter;
    // Field size check
    static_assert(sizeof(System::Xml::XmlWellFormedWriter*) == 0x8);
    public:
    // Creating interface conversion operator: operator System::Xml::IXmlNamespaceResolver
    operator System::Xml::IXmlNamespaceResolver() noexcept {
      return *reinterpret_cast<System::Xml::IXmlNamespaceResolver*>(this);
    }
    // Creating conversion operator: operator System::Xml::XmlWellFormedWriter*
    constexpr operator System::Xml::XmlWellFormedWriter*() const noexcept {
      return wfWriter;
    }
    // Get instance field reference: private System.Xml.XmlWellFormedWriter wfWriter
    System::Xml::XmlWellFormedWriter*& dyn_wfWriter();
    // System.Void .ctor(System.Xml.XmlWellFormedWriter wfWriter)
    // Offset: 0x25F6750
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlWellFormedWriter::NamespaceResolverProxy* New_ctor(System::Xml::XmlWellFormedWriter* wfWriter) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlWellFormedWriter::NamespaceResolverProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlWellFormedWriter::NamespaceResolverProxy*, creationType>(wfWriter)));
    }
    // private System.String System.Xml.IXmlNamespaceResolver.LookupNamespace(System.String prefix)
    // Offset: 0x25F677C
    ::Il2CppString* System_Xml_IXmlNamespaceResolver_LookupNamespace(::Il2CppString* prefix);
    // private System.String System.Xml.IXmlNamespaceResolver.LookupPrefix(System.String namespaceName)
    // Offset: 0x25F6798
    ::Il2CppString* System_Xml_IXmlNamespaceResolver_LookupPrefix(::Il2CppString* namespaceName);
  }; // System.Xml.XmlWellFormedWriter/System.Xml.NamespaceResolverProxy
  #pragma pack(pop)
  static check_size<sizeof(XmlWellFormedWriter::NamespaceResolverProxy), 16 + sizeof(System::Xml::XmlWellFormedWriter*)> __System_Xml_XmlWellFormedWriter_NamespaceResolverProxySizeCheck;
  static_assert(sizeof(XmlWellFormedWriter::NamespaceResolverProxy) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlWellFormedWriter::NamespaceResolverProxy*, "System.Xml", "XmlWellFormedWriter/NamespaceResolverProxy");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlWellFormedWriter::NamespaceResolverProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlWellFormedWriter::NamespaceResolverProxy::System_Xml_IXmlNamespaceResolver_LookupNamespace
// Il2CppName: System.Xml.IXmlNamespaceResolver.LookupNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Xml::XmlWellFormedWriter::NamespaceResolverProxy::*)(::Il2CppString*)>(&System::Xml::XmlWellFormedWriter::NamespaceResolverProxy::System_Xml_IXmlNamespaceResolver_LookupNamespace)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWellFormedWriter::NamespaceResolverProxy*), "System.Xml.IXmlNamespaceResolver.LookupNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWellFormedWriter::NamespaceResolverProxy::System_Xml_IXmlNamespaceResolver_LookupPrefix
// Il2CppName: System.Xml.IXmlNamespaceResolver.LookupPrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Xml::XmlWellFormedWriter::NamespaceResolverProxy::*)(::Il2CppString*)>(&System::Xml::XmlWellFormedWriter::NamespaceResolverProxy::System_Xml_IXmlNamespaceResolver_LookupPrefix)> {
  static const MethodInfo* get() {
    static auto* namespaceName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWellFormedWriter::NamespaceResolverProxy*), "System.Xml.IXmlNamespaceResolver.LookupPrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{namespaceName});
  }
};
