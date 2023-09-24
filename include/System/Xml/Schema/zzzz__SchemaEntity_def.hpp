#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Xml {
class IDtdEntityInfo;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
class SchemaEntity;
}
// Type: System.Xml.Schema::SchemaEntity
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11647))
// CS Name: System.Xml.Schema.SchemaEntity
class CORDL_TYPE SchemaEntity : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Xml::IDtdEntityInfo
constexpr operator  System::Xml::IDtdEntityInfo() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~SchemaEntity() = default;

// Ctor Parameters [CppParam { name: "", ty: "SchemaEntity", modifiers: " const&", def_value: None }]
constexpr SchemaEntity(SchemaEntity const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SchemaEntity", modifiers: "&&", def_value: None }]
constexpr SchemaEntity(SchemaEntity&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SchemaEntity(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SchemaEntity& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SchemaEntity& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SchemaEntity& operator=(SchemaEntity&& o) noexcept = default;
  constexpr SchemaEntity& operator=(SchemaEntity const& o) noexcept = default;
                


// Fields

 System::Xml::XmlQualifiedName __declspec(property(get=__get_qname, put=__set_qname))  qname;

constexpr void __set_qname(System::Xml::XmlQualifiedName value) ;

constexpr System::Xml::XmlQualifiedName __get_qname() const;

 ::StringW __declspec(property(get=__get_url, put=__set_url))  url;

constexpr void __set_url(::StringW value) ;

constexpr ::StringW __get_url() const;

 ::StringW __declspec(property(get=__get_pubid, put=__set_pubid))  pubid;

constexpr void __set_pubid(::StringW value) ;

constexpr ::StringW __get_pubid() const;

 ::StringW __declspec(property(get=__get_text, put=__set_text))  text;

constexpr void __set_text(::StringW value) ;

constexpr ::StringW __get_text() const;

 System::Xml::XmlQualifiedName __declspec(property(get=__get_ndata, put=__set_ndata))  ndata;

constexpr void __set_ndata(System::Xml::XmlQualifiedName value) ;

constexpr System::Xml::XmlQualifiedName __get_ndata() const;

 int32_t __declspec(property(get=__get_lineNumber, put=__set_lineNumber))  lineNumber;

constexpr void __set_lineNumber(int32_t value) ;

constexpr int32_t __get_lineNumber() const;

 int32_t __declspec(property(get=__get_linePosition, put=__set_linePosition))  linePosition;

constexpr void __set_linePosition(int32_t value) ;

constexpr int32_t __get_linePosition() const;

 bool __declspec(property(get=__get_isParameter, put=__set_isParameter))  isParameter;

constexpr void __set_isParameter(bool value) ;

constexpr bool __get_isParameter() const;

 bool __declspec(property(get=__get_isExternal, put=__set_isExternal))  isExternal;

constexpr void __set_isExternal(bool value) ;

constexpr bool __get_isExternal() const;

 bool __declspec(property(get=__get_parsingInProgress, put=__set_parsingInProgress))  parsingInProgress;

constexpr void __set_parsingInProgress(bool value) ;

constexpr bool __get_parsingInProgress() const;

 bool __declspec(property(get=__get_isDeclaredInExternal, put=__set_isDeclaredInExternal))  isDeclaredInExternal;

constexpr void __set_isDeclaredInExternal(bool value) ;

constexpr bool __get_isDeclaredInExternal() const;

 ::StringW __declspec(property(get=__get_baseURI, put=__set_baseURI))  baseURI;

constexpr void __set_baseURI(::StringW value) ;

constexpr ::StringW __get_baseURI() const;

 ::StringW __declspec(property(get=__get_declaredURI, put=__set_declaredURI))  declaredURI;

constexpr void __set_declaredURI(::StringW value) ;

constexpr ::StringW __get_declaredURI() const;


// Properties

 ::StringW __declspec(property(get=System_Xml_IDtdEntityInfo_get_Name))  System_Xml_IDtdEntityInfo_Name;

 bool __declspec(property(get=System_Xml_IDtdEntityInfo_get_IsExternal))  System_Xml_IDtdEntityInfo_IsExternal;

 bool __declspec(property(get=System_Xml_IDtdEntityInfo_get_IsDeclaredInExternal))  System_Xml_IDtdEntityInfo_IsDeclaredInExternal;

 bool __declspec(property(get=System_Xml_IDtdEntityInfo_get_IsUnparsedEntity))  System_Xml_IDtdEntityInfo_IsUnparsedEntity;

 bool __declspec(property(get=System_Xml_IDtdEntityInfo_get_IsParameterEntity))  System_Xml_IDtdEntityInfo_IsParameterEntity;

 ::StringW __declspec(property(get=System_Xml_IDtdEntityInfo_get_BaseUriString))  System_Xml_IDtdEntityInfo_BaseUriString;

 ::StringW __declspec(property(get=System_Xml_IDtdEntityInfo_get_DeclaredUriString))  System_Xml_IDtdEntityInfo_DeclaredUriString;

 ::StringW __declspec(property(get=System_Xml_IDtdEntityInfo_get_SystemId))  System_Xml_IDtdEntityInfo_SystemId;

 ::StringW __declspec(property(get=System_Xml_IDtdEntityInfo_get_PublicId))  System_Xml_IDtdEntityInfo_PublicId;

 ::StringW __declspec(property(get=System_Xml_IDtdEntityInfo_get_Text))  System_Xml_IDtdEntityInfo_Text;

 int32_t __declspec(property(get=System_Xml_IDtdEntityInfo_get_LineNumber))  System_Xml_IDtdEntityInfo_LineNumber;

 int32_t __declspec(property(get=System_Xml_IDtdEntityInfo_get_LinePosition))  System_Xml_IDtdEntityInfo_LinePosition;

 System::Xml::XmlQualifiedName __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_Url, put=set_Url))  Url;

 ::StringW __declspec(property(get=get_Pubid, put=set_Pubid))  Pubid;

 bool __declspec(property(get=get_IsExternal, put=set_IsExternal))  IsExternal;

 bool __declspec(property(get=get_DeclaredInExternal, put=set_DeclaredInExternal))  DeclaredInExternal;

 System::Xml::XmlQualifiedName __declspec(property(get=get_NData, put=set_NData))  NData;

 ::StringW __declspec(property(get=get_Text, put=set_Text))  Text;

 int32_t __declspec(property(get=get_Line, put=set_Line))  Line;

 int32_t __declspec(property(get=get_Pos, put=set_Pos))  Pos;

 ::StringW __declspec(property(get=get_BaseURI, put=set_BaseURI))  BaseURI;

 bool __declspec(property(get=get_ParsingInProgress, put=set_ParsingInProgress))  ParsingInProgress;

 ::StringW __declspec(property(get=get_DeclaredURI, put=set_DeclaredURI))  DeclaredURI;


// Methods

static System::Xml::Schema::SchemaEntity New_ctor(System::Xml::XmlQualifiedName qname, bool isParameter) ;

/// @brief Method .ctor addr 0x2731868 size 0x84 virtual false final false
 void _ctor(System::Xml::XmlQualifiedName qname, bool isParameter) ;

/// @brief Method System.Xml.IDtdEntityInfo.get_Name addr 0x27318ec size 0x1c virtual true final true
 ::StringW System_Xml_IDtdEntityInfo_get_Name() ;

/// @brief Method System.Xml.IDtdEntityInfo.get_IsExternal addr 0x2731908 size 0x8 virtual true final true
 bool System_Xml_IDtdEntityInfo_get_IsExternal() ;

/// @brief Method System.Xml.IDtdEntityInfo.get_IsDeclaredInExternal addr 0x2731910 size 0x8 virtual true final true
 bool System_Xml_IDtdEntityInfo_get_IsDeclaredInExternal() ;

/// @brief Method System.Xml.IDtdEntityInfo.get_IsUnparsedEntity addr 0x2731918 size 0x28 virtual true final true
 bool System_Xml_IDtdEntityInfo_get_IsUnparsedEntity() ;

/// @brief Method System.Xml.IDtdEntityInfo.get_IsParameterEntity addr 0x2731940 size 0x8 virtual true final true
 bool System_Xml_IDtdEntityInfo_get_IsParameterEntity() ;

/// @brief Method System.Xml.IDtdEntityInfo.get_BaseUriString addr 0x2731948 size 0x54 virtual true final true
 ::StringW System_Xml_IDtdEntityInfo_get_BaseUriString() ;

/// @brief Method System.Xml.IDtdEntityInfo.get_DeclaredUriString addr 0x27319f0 size 0x54 virtual true final true
 ::StringW System_Xml_IDtdEntityInfo_get_DeclaredUriString() ;

/// @brief Method System.Xml.IDtdEntityInfo.get_SystemId addr 0x2731a98 size 0x8 virtual true final true
 ::StringW System_Xml_IDtdEntityInfo_get_SystemId() ;

/// @brief Method System.Xml.IDtdEntityInfo.get_PublicId addr 0x2731aa0 size 0x8 virtual true final true
 ::StringW System_Xml_IDtdEntityInfo_get_PublicId() ;

/// @brief Method System.Xml.IDtdEntityInfo.get_Text addr 0x2731aa8 size 0x8 virtual true final true
 ::StringW System_Xml_IDtdEntityInfo_get_Text() ;

/// @brief Method System.Xml.IDtdEntityInfo.get_LineNumber addr 0x2731ab0 size 0x8 virtual true final true
 int32_t System_Xml_IDtdEntityInfo_get_LineNumber() ;

/// @brief Method System.Xml.IDtdEntityInfo.get_LinePosition addr 0x2731ab8 size 0x8 virtual true final true
 int32_t System_Xml_IDtdEntityInfo_get_LinePosition() ;

/// @brief Method get_Name addr 0x2731ac0 size 0x8 virtual false final false
 System::Xml::XmlQualifiedName get_Name() ;

/// @brief Method get_Url addr 0x2731ac8 size 0x8 virtual false final false
 ::StringW get_Url() ;

/// @brief Method set_Url addr 0x2731ad0 size 0x10 virtual false final false
 void set_Url(::StringW value) ;

/// @brief Method get_Pubid addr 0x2731ae0 size 0x8 virtual false final false
 ::StringW get_Pubid() ;

/// @brief Method set_Pubid addr 0x2731ae8 size 0x8 virtual false final false
 void set_Pubid(::StringW value) ;

/// @brief Method get_IsExternal addr 0x2731af0 size 0x8 virtual false final false
 bool get_IsExternal() ;

/// @brief Method set_IsExternal addr 0x2731af8 size 0xc virtual false final false
 void set_IsExternal(bool value) ;

/// @brief Method get_DeclaredInExternal addr 0x2731b04 size 0x8 virtual false final false
 bool get_DeclaredInExternal() ;

/// @brief Method set_DeclaredInExternal addr 0x2731b0c size 0xc virtual false final false
 void set_DeclaredInExternal(bool value) ;

/// @brief Method get_NData addr 0x2731b18 size 0x8 virtual false final false
 System::Xml::XmlQualifiedName get_NData() ;

/// @brief Method set_NData addr 0x2731b20 size 0x8 virtual false final false
 void set_NData(System::Xml::XmlQualifiedName value) ;

/// @brief Method get_Text addr 0x2731b28 size 0x8 virtual false final false
 ::StringW get_Text() ;

/// @brief Method set_Text addr 0x2731b30 size 0xc virtual false final false
 void set_Text(::StringW value) ;

/// @brief Method get_Line addr 0x2731b3c size 0x8 virtual false final false
 int32_t get_Line() ;

/// @brief Method set_Line addr 0x2731b44 size 0x8 virtual false final false
 void set_Line(int32_t value) ;

/// @brief Method get_Pos addr 0x2731b4c size 0x8 virtual false final false
 int32_t get_Pos() ;

/// @brief Method set_Pos addr 0x2731b54 size 0x8 virtual false final false
 void set_Pos(int32_t value) ;

/// @brief Method get_BaseURI addr 0x273199c size 0x54 virtual false final false
 ::StringW get_BaseURI() ;

/// @brief Method set_BaseURI addr 0x2731b5c size 0x8 virtual false final false
 void set_BaseURI(::StringW value) ;

/// @brief Method get_ParsingInProgress addr 0x2731b64 size 0x8 virtual false final false
 bool get_ParsingInProgress() ;

/// @brief Method set_ParsingInProgress addr 0x2731b6c size 0xc virtual false final false
 void set_ParsingInProgress(bool value) ;

/// @brief Method get_DeclaredURI addr 0x2731a44 size 0x54 virtual false final false
 ::StringW get_DeclaredURI() ;

/// @brief Method set_DeclaredURI addr 0x2731b78 size 0x8 virtual false final false
 void set_DeclaredURI(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::SchemaEntity);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::SchemaEntity, "System.Xml.Schema", "SchemaEntity");
