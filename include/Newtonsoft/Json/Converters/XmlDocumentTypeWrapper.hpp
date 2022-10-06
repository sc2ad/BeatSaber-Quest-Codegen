// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Converters.XmlNodeWrapper
#include "Newtonsoft/Json/Converters/XmlNodeWrapper.hpp"
// Including type: Newtonsoft.Json.Converters.IXmlDocumentType
#include "Newtonsoft/Json/Converters/IXmlDocumentType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlDocumentType
  class XmlDocumentType;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Forward declaring type: XmlDocumentTypeWrapper
  class XmlDocumentTypeWrapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*, "Newtonsoft.Json.Converters", "XmlDocumentTypeWrapper");
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Converters.XmlDocumentTypeWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlDocumentTypeWrapper : public ::Newtonsoft::Json::Converters::XmlNodeWrapper/*, public ::Newtonsoft::Json::Converters::IXmlDocumentType*/ {
    public:
    public:
    // private readonly System.Xml.XmlDocumentType _documentType
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::XmlDocumentType* documentType;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlDocumentType*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Newtonsoft::Json::Converters::IXmlDocumentType
    operator ::Newtonsoft::Json::Converters::IXmlDocumentType() noexcept {
      return *reinterpret_cast<::Newtonsoft::Json::Converters::IXmlDocumentType*>(this);
    }
    // Creating interface conversion operator: i_IXmlDocumentType
    inline ::Newtonsoft::Json::Converters::IXmlDocumentType* i_IXmlDocumentType() noexcept {
      return reinterpret_cast<::Newtonsoft::Json::Converters::IXmlDocumentType*>(this);
    }
    // Creating conversion operator: operator ::System::Xml::XmlDocumentType*
    constexpr operator ::System::Xml::XmlDocumentType*() const noexcept {
      return documentType;
    }
    // Get instance field reference: private readonly System.Xml.XmlDocumentType _documentType
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlDocumentType*& dyn__documentType();
    // public System.String get_Name()
    // Offset: 0x17E6C68
    ::StringW get_Name();
    // public System.String get_System()
    // Offset: 0x17E6C88
    ::StringW get_System();
    // public System.String get_Public()
    // Offset: 0x17E6CA4
    ::StringW get_Public();
    // public System.String get_InternalSubset()
    // Offset: 0x17E6CC0
    ::StringW get_InternalSubset();
    // public System.Void .ctor(System.Xml.XmlDocumentType documentType)
    // Offset: 0x17E6C38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlDocumentTypeWrapper* New_ctor(::System::Xml::XmlDocumentType* documentType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlDocumentTypeWrapper*, creationType>(documentType)));
    }
    // public override System.String get_LocalName()
    // Offset: 0x17E6CDC
    // Implemented from: Newtonsoft.Json.Converters.XmlNodeWrapper
    // Base method: System.String XmlNodeWrapper::get_LocalName()
    ::StringW get_LocalName();
  }; // Newtonsoft.Json.Converters.XmlDocumentTypeWrapper
  #pragma pack(pop)
  static check_size<sizeof(XmlDocumentTypeWrapper), 40 + sizeof(::System::Xml::XmlDocumentType*)> __Newtonsoft_Json_Converters_XmlDocumentTypeWrapperSizeCheck;
  static_assert(sizeof(XmlDocumentTypeWrapper) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::*)()>(&Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::get_System
// Il2CppName: get_System
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::*)()>(&Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::get_System)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*), "get_System", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::get_Public
// Il2CppName: get_Public
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::*)()>(&Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::get_Public)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*), "get_Public", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::get_InternalSubset
// Il2CppName: get_InternalSubset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::*)()>(&Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::get_InternalSubset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*), "get_InternalSubset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::get_LocalName
// Il2CppName: get_LocalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::*)()>(&Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::get_LocalName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*), "get_LocalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
