// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlSchemaContentType
#include "System/Xml/Schema/XmlSchemaContentType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: ContentValidator
  class ContentValidator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::ContentValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::ContentValidator*, "System.Xml.Schema", "ContentValidator");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x16
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.ContentValidator
  // [TokenAttribute] Offset: FFFFFFFF
  class ContentValidator : public ::Il2CppObject {
    public:
    public:
    // private System.Xml.Schema.XmlSchemaContentType contentType
    // Size: 0x4
    // Offset: 0x10
    ::System::Xml::Schema::XmlSchemaContentType contentType;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaContentType) == 0x4);
    // private System.Boolean isOpen
    // Size: 0x1
    // Offset: 0x14
    bool isOpen;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isEmptiable
    // Size: 0x1
    // Offset: 0x15
    bool isEmptiable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static public readonly System.Xml.Schema.ContentValidator Empty
    static ::System::Xml::Schema::ContentValidator* _get_Empty();
    // Set static field: static public readonly System.Xml.Schema.ContentValidator Empty
    static void _set_Empty(::System::Xml::Schema::ContentValidator* value);
    // Get static field: static public readonly System.Xml.Schema.ContentValidator TextOnly
    static ::System::Xml::Schema::ContentValidator* _get_TextOnly();
    // Set static field: static public readonly System.Xml.Schema.ContentValidator TextOnly
    static void _set_TextOnly(::System::Xml::Schema::ContentValidator* value);
    // Get static field: static public readonly System.Xml.Schema.ContentValidator Mixed
    static ::System::Xml::Schema::ContentValidator* _get_Mixed();
    // Set static field: static public readonly System.Xml.Schema.ContentValidator Mixed
    static void _set_Mixed(::System::Xml::Schema::ContentValidator* value);
    // Get static field: static public readonly System.Xml.Schema.ContentValidator Any
    static ::System::Xml::Schema::ContentValidator* _get_Any();
    // Set static field: static public readonly System.Xml.Schema.ContentValidator Any
    static void _set_Any(::System::Xml::Schema::ContentValidator* value);
    // Get instance field reference: private System.Xml.Schema.XmlSchemaContentType contentType
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaContentType& dyn_contentType();
    // Get instance field reference: private System.Boolean isOpen
    [[deprecated("Use field access instead!")]] bool& dyn_isOpen();
    // Get instance field reference: private System.Boolean isEmptiable
    [[deprecated("Use field access instead!")]] bool& dyn_isEmptiable();
    // public System.Xml.Schema.XmlSchemaContentType get_ContentType()
    // Offset: 0x1AEDF64
    ::System::Xml::Schema::XmlSchemaContentType get_ContentType();
    // public System.Boolean get_IsOpen()
    // Offset: 0x1AEDF6C
    bool get_IsOpen();
    // public System.Void .ctor(System.Xml.Schema.XmlSchemaContentType contentType)
    // Offset: 0x1AEDEE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContentValidator* New_ctor(::System::Xml::Schema::XmlSchemaContentType contentType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::ContentValidator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContentValidator*, creationType>(contentType)));
    }
    // protected System.Void .ctor(System.Xml.Schema.XmlSchemaContentType contentType, System.Boolean isOpen, System.Boolean isEmptiable)
    // Offset: 0x1AEDF18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContentValidator* New_ctor(::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::ContentValidator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContentValidator*, creationType>(contentType, isOpen, isEmptiable)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1AEDF90
    static void _cctor();
  }; // System.Xml.Schema.ContentValidator
  #pragma pack(pop)
  static check_size<sizeof(ContentValidator), 21 + sizeof(bool)> __System_Xml_Schema_ContentValidatorSizeCheck;
  static_assert(sizeof(ContentValidator) == 0x16);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::ContentValidator::get_ContentType
// Il2CppName: get_ContentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaContentType (System::Xml::Schema::ContentValidator::*)()>(&System::Xml::Schema::ContentValidator::get_ContentType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ContentValidator*), "get_ContentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ContentValidator::get_IsOpen
// Il2CppName: get_IsOpen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::ContentValidator::*)()>(&System::Xml::Schema::ContentValidator::get_IsOpen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ContentValidator*), "get_IsOpen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ContentValidator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::ContentValidator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::ContentValidator::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::Schema::ContentValidator::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ContentValidator*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
