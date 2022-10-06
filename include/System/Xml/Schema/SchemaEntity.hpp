// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.IDtdEntityInfo
#include "System/Xml/IDtdEntityInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: SchemaEntity
  class SchemaEntity;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::SchemaEntity);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaEntity*, "System.Xml.Schema", "SchemaEntity");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.SchemaEntity
  // [TokenAttribute] Offset: FFFFFFFF
  class SchemaEntity : public ::Il2CppObject/*, public ::System::Xml::IDtdEntityInfo*/ {
    public:
    public:
    // private System.Xml.XmlQualifiedName qname
    // Size: 0x8
    // Offset: 0x10
    ::System::Xml::XmlQualifiedName* qname;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlQualifiedName*) == 0x8);
    // private System.String url
    // Size: 0x8
    // Offset: 0x18
    ::StringW url;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String pubid
    // Size: 0x8
    // Offset: 0x20
    ::StringW pubid;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String text
    // Size: 0x8
    // Offset: 0x28
    ::StringW text;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Xml.XmlQualifiedName ndata
    // Size: 0x8
    // Offset: 0x30
    ::System::Xml::XmlQualifiedName* ndata;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlQualifiedName*) == 0x8);
    // private System.Int32 lineNumber
    // Size: 0x4
    // Offset: 0x38
    int lineNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 linePosition
    // Size: 0x4
    // Offset: 0x3C
    int linePosition;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean isParameter
    // Size: 0x1
    // Offset: 0x40
    bool isParameter;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isExternal
    // Size: 0x1
    // Offset: 0x41
    bool isExternal;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean parsingInProgress
    // Size: 0x1
    // Offset: 0x42
    bool parsingInProgress;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isDeclaredInExternal
    // Size: 0x1
    // Offset: 0x43
    bool isDeclaredInExternal;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isDeclaredInExternal and: baseURI
    char __padding10[0x4] = {};
    // private System.String baseURI
    // Size: 0x8
    // Offset: 0x48
    ::StringW baseURI;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String declaredURI
    // Size: 0x8
    // Offset: 0x50
    ::StringW declaredURI;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Xml::IDtdEntityInfo
    operator ::System::Xml::IDtdEntityInfo() noexcept {
      return *reinterpret_cast<::System::Xml::IDtdEntityInfo*>(this);
    }
    // Creating interface conversion operator: i_IDtdEntityInfo
    inline ::System::Xml::IDtdEntityInfo* i_IDtdEntityInfo() noexcept {
      return reinterpret_cast<::System::Xml::IDtdEntityInfo*>(this);
    }
    // Get instance field reference: private System.Xml.XmlQualifiedName qname
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlQualifiedName*& dyn_qname();
    // Get instance field reference: private System.String url
    [[deprecated("Use field access instead!")]] ::StringW& dyn_url();
    // Get instance field reference: private System.String pubid
    [[deprecated("Use field access instead!")]] ::StringW& dyn_pubid();
    // Get instance field reference: private System.String text
    [[deprecated("Use field access instead!")]] ::StringW& dyn_text();
    // Get instance field reference: private System.Xml.XmlQualifiedName ndata
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlQualifiedName*& dyn_ndata();
    // Get instance field reference: private System.Int32 lineNumber
    [[deprecated("Use field access instead!")]] int& dyn_lineNumber();
    // Get instance field reference: private System.Int32 linePosition
    [[deprecated("Use field access instead!")]] int& dyn_linePosition();
    // Get instance field reference: private System.Boolean isParameter
    [[deprecated("Use field access instead!")]] bool& dyn_isParameter();
    // Get instance field reference: private System.Boolean isExternal
    [[deprecated("Use field access instead!")]] bool& dyn_isExternal();
    // Get instance field reference: private System.Boolean parsingInProgress
    [[deprecated("Use field access instead!")]] bool& dyn_parsingInProgress();
    // Get instance field reference: private System.Boolean isDeclaredInExternal
    [[deprecated("Use field access instead!")]] bool& dyn_isDeclaredInExternal();
    // Get instance field reference: private System.String baseURI
    [[deprecated("Use field access instead!")]] ::StringW& dyn_baseURI();
    // Get instance field reference: private System.String declaredURI
    [[deprecated("Use field access instead!")]] ::StringW& dyn_declaredURI();
    // private System.String System.Xml.IDtdEntityInfo.get_Name()
    // Offset: 0x1C90180
    ::StringW System_Xml_IDtdEntityInfo_get_Name();
    // private System.Boolean System.Xml.IDtdEntityInfo.get_IsExternal()
    // Offset: 0x1C9019C
    bool System_Xml_IDtdEntityInfo_get_IsExternal();
    // private System.Boolean System.Xml.IDtdEntityInfo.get_IsDeclaredInExternal()
    // Offset: 0x1C901A4
    bool System_Xml_IDtdEntityInfo_get_IsDeclaredInExternal();
    // private System.Boolean System.Xml.IDtdEntityInfo.get_IsUnparsedEntity()
    // Offset: 0x1C901AC
    bool System_Xml_IDtdEntityInfo_get_IsUnparsedEntity();
    // private System.Boolean System.Xml.IDtdEntityInfo.get_IsParameterEntity()
    // Offset: 0x1C901D8
    bool System_Xml_IDtdEntityInfo_get_IsParameterEntity();
    // private System.String System.Xml.IDtdEntityInfo.get_BaseUriString()
    // Offset: 0x1C901E0
    ::StringW System_Xml_IDtdEntityInfo_get_BaseUriString();
    // private System.String System.Xml.IDtdEntityInfo.get_DeclaredUriString()
    // Offset: 0x1C90298
    ::StringW System_Xml_IDtdEntityInfo_get_DeclaredUriString();
    // private System.String System.Xml.IDtdEntityInfo.get_SystemId()
    // Offset: 0x1C90350
    ::StringW System_Xml_IDtdEntityInfo_get_SystemId();
    // private System.String System.Xml.IDtdEntityInfo.get_PublicId()
    // Offset: 0x1C90358
    ::StringW System_Xml_IDtdEntityInfo_get_PublicId();
    // private System.String System.Xml.IDtdEntityInfo.get_Text()
    // Offset: 0x1C90360
    ::StringW System_Xml_IDtdEntityInfo_get_Text();
    // private System.Int32 System.Xml.IDtdEntityInfo.get_LineNumber()
    // Offset: 0x1C90368
    int System_Xml_IDtdEntityInfo_get_LineNumber();
    // private System.Int32 System.Xml.IDtdEntityInfo.get_LinePosition()
    // Offset: 0x1C90370
    int System_Xml_IDtdEntityInfo_get_LinePosition();
    // System.Xml.XmlQualifiedName get_Name()
    // Offset: 0x1C90378
    ::System::Xml::XmlQualifiedName* get_Name();
    // System.String get_Url()
    // Offset: 0x1C90380
    ::StringW get_Url();
    // System.Void set_Url(System.String value)
    // Offset: 0x1C90388
    void set_Url(::StringW value);
    // System.String get_Pubid()
    // Offset: 0x1C90398
    ::StringW get_Pubid();
    // System.Void set_Pubid(System.String value)
    // Offset: 0x1C903A0
    void set_Pubid(::StringW value);
    // System.Boolean get_IsExternal()
    // Offset: 0x1C903A8
    bool get_IsExternal();
    // System.Void set_IsExternal(System.Boolean value)
    // Offset: 0x1C903B0
    void set_IsExternal(bool value);
    // System.Boolean get_DeclaredInExternal()
    // Offset: 0x1C903BC
    bool get_DeclaredInExternal();
    // System.Void set_DeclaredInExternal(System.Boolean value)
    // Offset: 0x1C903C4
    void set_DeclaredInExternal(bool value);
    // System.Xml.XmlQualifiedName get_NData()
    // Offset: 0x1C903D0
    ::System::Xml::XmlQualifiedName* get_NData();
    // System.Void set_NData(System.Xml.XmlQualifiedName value)
    // Offset: 0x1C903D8
    void set_NData(::System::Xml::XmlQualifiedName* value);
    // System.String get_Text()
    // Offset: 0x1C903E0
    ::StringW get_Text();
    // System.Void set_Text(System.String value)
    // Offset: 0x1C903E8
    void set_Text(::StringW value);
    // System.Int32 get_Line()
    // Offset: 0x1C903F4
    int get_Line();
    // System.Void set_Line(System.Int32 value)
    // Offset: 0x1C903FC
    void set_Line(int value);
    // System.Int32 get_Pos()
    // Offset: 0x1C90404
    int get_Pos();
    // System.Void set_Pos(System.Int32 value)
    // Offset: 0x1C9040C
    void set_Pos(int value);
    // System.String get_BaseURI()
    // Offset: 0x1C9023C
    ::StringW get_BaseURI();
    // System.Void set_BaseURI(System.String value)
    // Offset: 0x1C90414
    void set_BaseURI(::StringW value);
    // System.Boolean get_ParsingInProgress()
    // Offset: 0x1C9041C
    bool get_ParsingInProgress();
    // System.Void set_ParsingInProgress(System.Boolean value)
    // Offset: 0x1C90424
    void set_ParsingInProgress(bool value);
    // System.String get_DeclaredURI()
    // Offset: 0x1C902F4
    ::StringW get_DeclaredURI();
    // System.Void set_DeclaredURI(System.String value)
    // Offset: 0x1C90430
    void set_DeclaredURI(::StringW value);
    // System.Void .ctor(System.Xml.XmlQualifiedName qname, System.Boolean isParameter)
    // Offset: 0x1C900E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SchemaEntity* New_ctor(::System::Xml::XmlQualifiedName* qname, bool isParameter) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::SchemaEntity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SchemaEntity*, creationType>(qname, isParameter)));
    }
  }; // System.Xml.Schema.SchemaEntity
  #pragma pack(pop)
  static check_size<sizeof(SchemaEntity), 80 + sizeof(::StringW)> __System_Xml_Schema_SchemaEntitySizeCheck;
  static_assert(sizeof(SchemaEntity) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::System_Xml_IDtdEntityInfo_get_Name
// Il2CppName: System.Xml.IDtdEntityInfo.get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::SchemaEntity::*)()>(&System::Xml::Schema::SchemaEntity::System_Xml_IDtdEntityInfo_get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "System.Xml.IDtdEntityInfo.get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::System_Xml_IDtdEntityInfo_get_IsExternal
// Il2CppName: System.Xml.IDtdEntityInfo.get_IsExternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::SchemaEntity::*)()>(&System::Xml::Schema::SchemaEntity::System_Xml_IDtdEntityInfo_get_IsExternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "System.Xml.IDtdEntityInfo.get_IsExternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::System_Xml_IDtdEntityInfo_get_IsDeclaredInExternal
// Il2CppName: System.Xml.IDtdEntityInfo.get_IsDeclaredInExternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::SchemaEntity::*)()>(&System::Xml::Schema::SchemaEntity::System_Xml_IDtdEntityInfo_get_IsDeclaredInExternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "System.Xml.IDtdEntityInfo.get_IsDeclaredInExternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::System_Xml_IDtdEntityInfo_get_IsUnparsedEntity
// Il2CppName: System.Xml.IDtdEntityInfo.get_IsUnparsedEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::SchemaEntity::*)()>(&System::Xml::Schema::SchemaEntity::System_Xml_IDtdEntityInfo_get_IsUnparsedEntity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "System.Xml.IDtdEntityInfo.get_IsUnparsedEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::System_Xml_IDtdEntityInfo_get_IsParameterEntity
// Il2CppName: System.Xml.IDtdEntityInfo.get_IsParameterEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::SchemaEntity::*)()>(&System::Xml::Schema::SchemaEntity::System_Xml_IDtdEntityInfo_get_IsParameterEntity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "System.Xml.IDtdEntityInfo.get_IsParameterEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::System_Xml_IDtdEntityInfo_get_BaseUriString
// Il2CppName: System.Xml.IDtdEntityInfo.get_BaseUriString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::SchemaEntity::*)()>(&System::Xml::Schema::SchemaEntity::System_Xml_IDtdEntityInfo_get_BaseUriString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "System.Xml.IDtdEntityInfo.get_BaseUriString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::System_Xml_IDtdEntityInfo_get_DeclaredUriString
// Il2CppName: System.Xml.IDtdEntityInfo.get_DeclaredUriString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::SchemaEntity::*)()>(&System::Xml::Schema::SchemaEntity::System_Xml_IDtdEntityInfo_get_DeclaredUriString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "System.Xml.IDtdEntityInfo.get_DeclaredUriString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::System_Xml_IDtdEntityInfo_get_SystemId
// Il2CppName: System.Xml.IDtdEntityInfo.get_SystemId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::SchemaEntity::*)()>(&System::Xml::Schema::SchemaEntity::System_Xml_IDtdEntityInfo_get_SystemId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "System.Xml.IDtdEntityInfo.get_SystemId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::System_Xml_IDtdEntityInfo_get_PublicId
// Il2CppName: System.Xml.IDtdEntityInfo.get_PublicId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::SchemaEntity::*)()>(&System::Xml::Schema::SchemaEntity::System_Xml_IDtdEntityInfo_get_PublicId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "System.Xml.IDtdEntityInfo.get_PublicId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::System_Xml_IDtdEntityInfo_get_Text
// Il2CppName: System.Xml.IDtdEntityInfo.get_Text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::SchemaEntity::*)()>(&System::Xml::Schema::SchemaEntity::System_Xml_IDtdEntityInfo_get_Text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "System.Xml.IDtdEntityInfo.get_Text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::System_Xml_IDtdEntityInfo_get_LineNumber
// Il2CppName: System.Xml.IDtdEntityInfo.get_LineNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::SchemaEntity::*)()>(&System::Xml::Schema::SchemaEntity::System_Xml_IDtdEntityInfo_get_LineNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "System.Xml.IDtdEntityInfo.get_LineNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::System_Xml_IDtdEntityInfo_get_LinePosition
// Il2CppName: System.Xml.IDtdEntityInfo.get_LinePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::SchemaEntity::*)()>(&System::Xml::Schema::SchemaEntity::System_Xml_IDtdEntityInfo_get_LinePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "System.Xml.IDtdEntityInfo.get_LinePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (System::Xml::Schema::SchemaEntity::*)()>(&System::Xml::Schema::SchemaEntity::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::get_Url
// Il2CppName: get_Url
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::SchemaEntity::*)()>(&System::Xml::Schema::SchemaEntity::get_Url)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "get_Url", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::set_Url
// Il2CppName: set_Url
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaEntity::*)(::StringW)>(&System::Xml::Schema::SchemaEntity::set_Url)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "set_Url", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::get_Pubid
// Il2CppName: get_Pubid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::SchemaEntity::*)()>(&System::Xml::Schema::SchemaEntity::get_Pubid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "get_Pubid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::set_Pubid
// Il2CppName: set_Pubid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaEntity::*)(::StringW)>(&System::Xml::Schema::SchemaEntity::set_Pubid)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "set_Pubid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::get_IsExternal
// Il2CppName: get_IsExternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::SchemaEntity::*)()>(&System::Xml::Schema::SchemaEntity::get_IsExternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "get_IsExternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::set_IsExternal
// Il2CppName: set_IsExternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaEntity::*)(bool)>(&System::Xml::Schema::SchemaEntity::set_IsExternal)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "set_IsExternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::get_DeclaredInExternal
// Il2CppName: get_DeclaredInExternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::SchemaEntity::*)()>(&System::Xml::Schema::SchemaEntity::get_DeclaredInExternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "get_DeclaredInExternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::set_DeclaredInExternal
// Il2CppName: set_DeclaredInExternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaEntity::*)(bool)>(&System::Xml::Schema::SchemaEntity::set_DeclaredInExternal)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "set_DeclaredInExternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::get_NData
// Il2CppName: get_NData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (System::Xml::Schema::SchemaEntity::*)()>(&System::Xml::Schema::SchemaEntity::get_NData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "get_NData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::set_NData
// Il2CppName: set_NData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaEntity::*)(::System::Xml::XmlQualifiedName*)>(&System::Xml::Schema::SchemaEntity::set_NData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "set_NData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::get_Text
// Il2CppName: get_Text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::SchemaEntity::*)()>(&System::Xml::Schema::SchemaEntity::get_Text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "get_Text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::set_Text
// Il2CppName: set_Text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaEntity::*)(::StringW)>(&System::Xml::Schema::SchemaEntity::set_Text)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "set_Text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::get_Line
// Il2CppName: get_Line
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::SchemaEntity::*)()>(&System::Xml::Schema::SchemaEntity::get_Line)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "get_Line", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::set_Line
// Il2CppName: set_Line
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaEntity::*)(int)>(&System::Xml::Schema::SchemaEntity::set_Line)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "set_Line", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::get_Pos
// Il2CppName: get_Pos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::SchemaEntity::*)()>(&System::Xml::Schema::SchemaEntity::get_Pos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "get_Pos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::set_Pos
// Il2CppName: set_Pos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaEntity::*)(int)>(&System::Xml::Schema::SchemaEntity::set_Pos)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "set_Pos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::get_BaseURI
// Il2CppName: get_BaseURI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::SchemaEntity::*)()>(&System::Xml::Schema::SchemaEntity::get_BaseURI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "get_BaseURI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::set_BaseURI
// Il2CppName: set_BaseURI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaEntity::*)(::StringW)>(&System::Xml::Schema::SchemaEntity::set_BaseURI)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "set_BaseURI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::get_ParsingInProgress
// Il2CppName: get_ParsingInProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::SchemaEntity::*)()>(&System::Xml::Schema::SchemaEntity::get_ParsingInProgress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "get_ParsingInProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::set_ParsingInProgress
// Il2CppName: set_ParsingInProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaEntity::*)(bool)>(&System::Xml::Schema::SchemaEntity::set_ParsingInProgress)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "set_ParsingInProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::get_DeclaredURI
// Il2CppName: get_DeclaredURI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::SchemaEntity::*)()>(&System::Xml::Schema::SchemaEntity::get_DeclaredURI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "get_DeclaredURI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::set_DeclaredURI
// Il2CppName: set_DeclaredURI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaEntity::*)(::StringW)>(&System::Xml::Schema::SchemaEntity::set_DeclaredURI)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaEntity*), "set_DeclaredURI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaEntity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
