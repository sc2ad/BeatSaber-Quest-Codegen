#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
class IDtdInfo;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Xml {
class IDtdAttributeListInfo;
}
namespace System::Xml::Schema {
class SchemaAttDef;
}
namespace System::Xml::Schema {
class SchemaNotation;
}
namespace System::Xml::Schema {
class SchemaEntity;
}
namespace System::Xml::Schema {
class SchemaElementDecl;
}
namespace System::Xml::Schema {
struct SchemaType;
}
namespace System::Xml {
class IDtdEntityInfo;
}
// Forward declare root types
namespace System::Xml::Schema {
class SchemaInfo;
}
// Type: System.Xml.Schema::SchemaInfo
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11648))
// CS Name: System.Xml.Schema.SchemaInfo
class CORDL_TYPE SchemaInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Xml::IDtdInfo
constexpr operator  ::System::Xml::IDtdInfo() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~SchemaInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "SchemaInfo", modifiers: " const&", def_value: None }]
constexpr SchemaInfo(SchemaInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SchemaInfo", modifiers: "&&", def_value: None }]
constexpr SchemaInfo(SchemaInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SchemaInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SchemaInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SchemaInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SchemaInfo& operator=(SchemaInfo&& o) noexcept = default;
  constexpr SchemaInfo& operator=(SchemaInfo const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName,::System::Xml::Schema::SchemaElementDecl> __declspec(property(get=__get_elementDecls, put=__set_elementDecls))  elementDecls;

constexpr void __set_elementDecls(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName,::System::Xml::Schema::SchemaElementDecl> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName,::System::Xml::Schema::SchemaElementDecl> __get_elementDecls() const;

 ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName,::System::Xml::Schema::SchemaElementDecl> __declspec(property(get=__get_undeclaredElementDecls, put=__set_undeclaredElementDecls))  undeclaredElementDecls;

constexpr void __set_undeclaredElementDecls(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName,::System::Xml::Schema::SchemaElementDecl> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName,::System::Xml::Schema::SchemaElementDecl> __get_undeclaredElementDecls() const;

 ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName,::System::Xml::Schema::SchemaEntity> __declspec(property(get=__get_generalEntities, put=__set_generalEntities))  generalEntities;

constexpr void __set_generalEntities(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName,::System::Xml::Schema::SchemaEntity> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName,::System::Xml::Schema::SchemaEntity> __get_generalEntities() const;

 ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName,::System::Xml::Schema::SchemaEntity> __declspec(property(get=__get_parameterEntities, put=__set_parameterEntities))  parameterEntities;

constexpr void __set_parameterEntities(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName,::System::Xml::Schema::SchemaEntity> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName,::System::Xml::Schema::SchemaEntity> __get_parameterEntities() const;

 ::System::Xml::XmlQualifiedName __declspec(property(get=__get_docTypeName, put=__set_docTypeName))  docTypeName;

constexpr void __set_docTypeName(::System::Xml::XmlQualifiedName value) ;

constexpr ::System::Xml::XmlQualifiedName __get_docTypeName() const;

 ::StringW __declspec(property(get=__get_internalDtdSubset, put=__set_internalDtdSubset))  internalDtdSubset;

constexpr void __set_internalDtdSubset(::StringW value) ;

constexpr ::StringW __get_internalDtdSubset() const;

 bool __declspec(property(get=__get_hasNonCDataAttributes, put=__set_hasNonCDataAttributes))  hasNonCDataAttributes;

constexpr void __set_hasNonCDataAttributes(bool value) ;

constexpr bool __get_hasNonCDataAttributes() const;

 bool __declspec(property(get=__get_hasDefaultAttributes, put=__set_hasDefaultAttributes))  hasDefaultAttributes;

constexpr void __set_hasDefaultAttributes(bool value) ;

constexpr bool __get_hasDefaultAttributes() const;

 ::System::Collections::Generic::Dictionary_2<::StringW,bool> __declspec(property(get=__get_targetNamespaces, put=__set_targetNamespaces))  targetNamespaces;

constexpr void __set_targetNamespaces(::System::Collections::Generic::Dictionary_2<::StringW,bool> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,bool> __get_targetNamespaces() const;

 ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName,::System::Xml::Schema::SchemaAttDef> __declspec(property(get=__get_attributeDecls, put=__set_attributeDecls))  attributeDecls;

constexpr void __set_attributeDecls(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName,::System::Xml::Schema::SchemaAttDef> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName,::System::Xml::Schema::SchemaAttDef> __get_attributeDecls() const;

 ::System::Xml::Schema::SchemaType __declspec(property(get=__get_schemaType, put=__set_schemaType))  schemaType;

constexpr void __set_schemaType(::System::Xml::Schema::SchemaType value) ;

constexpr ::System::Xml::Schema::SchemaType __get_schemaType() const;

 ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName,::System::Xml::Schema::SchemaElementDecl> __declspec(property(get=__get_elementDeclsByType, put=__set_elementDeclsByType))  elementDeclsByType;

constexpr void __set_elementDeclsByType(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName,::System::Xml::Schema::SchemaElementDecl> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName,::System::Xml::Schema::SchemaElementDecl> __get_elementDeclsByType() const;

 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::Schema::SchemaNotation> __declspec(property(get=__get_notations, put=__set_notations))  notations;

constexpr void __set_notations(::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::Schema::SchemaNotation> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::Schema::SchemaNotation> __get_notations() const;


// Properties

 ::System::Xml::XmlQualifiedName __declspec(property(put=set_DocTypeName))  DocTypeName;

 ::StringW __declspec(property(put=set_InternalDtdSubset))  InternalDtdSubset;

 ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName,::System::Xml::Schema::SchemaElementDecl> __declspec(property(get=get_ElementDecls))  ElementDecls;

 ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName,::System::Xml::Schema::SchemaElementDecl> __declspec(property(get=get_UndeclaredElementDecls))  UndeclaredElementDecls;

 ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName,::System::Xml::Schema::SchemaEntity> __declspec(property(get=get_GeneralEntities))  GeneralEntities;

 ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName,::System::Xml::Schema::SchemaEntity> __declspec(property(get=get_ParameterEntities))  ParameterEntities;

 ::System::Xml::Schema::SchemaType __declspec(property(get=get_SchemaType, put=set_SchemaType))  SchemaType;

 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::Schema::SchemaNotation> __declspec(property(get=get_Notations))  Notations;

 bool __declspec(property(get=System_Xml_IDtdInfo_get_HasDefaultAttributes))  System_Xml_IDtdInfo_HasDefaultAttributes;

 bool __declspec(property(get=System_Xml_IDtdInfo_get_HasNonCDataAttributes))  System_Xml_IDtdInfo_HasNonCDataAttributes;

 ::System::Xml::XmlQualifiedName __declspec(property(get=System_Xml_IDtdInfo_get_Name))  System_Xml_IDtdInfo_Name;

 ::StringW __declspec(property(get=System_Xml_IDtdInfo_get_InternalDtdSubset))  System_Xml_IDtdInfo_InternalDtdSubset;


// Methods

// Ctor Parameters []
explicit SchemaInfo() ;

/// @brief Method .ctor addr 0x2731b80 size 0x1ac virtual false final false
 void _ctor() ;

/// @brief Method set_DocTypeName addr 0x2731d2c size 0x8 virtual false final false
 void set_DocTypeName(::System::Xml::XmlQualifiedName value) ;

/// @brief Method set_InternalDtdSubset addr 0x2731d34 size 0x8 virtual false final false
 void set_InternalDtdSubset(::StringW value) ;

/// @brief Method get_ElementDecls addr 0x2731d3c size 0x8 virtual false final false
 ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName,::System::Xml::Schema::SchemaElementDecl> get_ElementDecls() ;

/// @brief Method get_UndeclaredElementDecls addr 0x2731d44 size 0x8 virtual false final false
 ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName,::System::Xml::Schema::SchemaElementDecl> get_UndeclaredElementDecls() ;

/// @brief Method get_GeneralEntities addr 0x2731d4c size 0x80 virtual false final false
 ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName,::System::Xml::Schema::SchemaEntity> get_GeneralEntities() ;

/// @brief Method get_ParameterEntities addr 0x2731dcc size 0x80 virtual false final false
 ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName,::System::Xml::Schema::SchemaEntity> get_ParameterEntities() ;

/// @brief Method get_SchemaType addr 0x2731e4c size 0x8 virtual false final false
 ::System::Xml::Schema::SchemaType get_SchemaType() ;

/// @brief Method set_SchemaType addr 0x2731e54 size 0x8 virtual false final false
 void set_SchemaType(::System::Xml::Schema::SchemaType value) ;

/// @brief Method get_Notations addr 0x2731e5c size 0x80 virtual false final false
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Xml::Schema::SchemaNotation> get_Notations() ;

/// @brief Method Finish addr 0x2731edc size 0x1b4 virtual false final false
 void Finish() ;

/// @brief Method System.Xml.IDtdInfo.get_HasDefaultAttributes addr 0x2732090 size 0x8 virtual true final true
 bool System_Xml_IDtdInfo_get_HasDefaultAttributes() ;

/// @brief Method System.Xml.IDtdInfo.get_HasNonCDataAttributes addr 0x2732098 size 0x8 virtual true final true
 bool System_Xml_IDtdInfo_get_HasNonCDataAttributes() ;

/// @brief Method System.Xml.IDtdInfo.LookupAttributeList addr 0x27320a0 size 0xcc virtual true final true
 ::System::Xml::IDtdAttributeListInfo System_Xml_IDtdInfo_LookupAttributeList(::StringW prefix, ::StringW localName) ;

/// @brief Method System.Xml.IDtdInfo.LookupEntity addr 0x273216c size 0xb8 virtual true final true
 ::System::Xml::IDtdEntityInfo System_Xml_IDtdInfo_LookupEntity(::StringW name) ;

/// @brief Method System.Xml.IDtdInfo.get_Name addr 0x2732224 size 0x8 virtual true final true
 ::System::Xml::XmlQualifiedName System_Xml_IDtdInfo_get_Name() ;

/// @brief Method System.Xml.IDtdInfo.get_InternalDtdSubset addr 0x273222c size 0x8 virtual true final true
 ::StringW System_Xml_IDtdInfo_get_InternalDtdSubset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::SchemaInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaInfo, "System.Xml.Schema", "SchemaInfo");
