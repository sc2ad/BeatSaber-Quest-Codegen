#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlNamespaceManager;
}
namespace System::Text {
class Encoding;
}
namespace System::Xml {
struct XmlSpace;
}
// Forward declare root types
namespace System::Xml {
class XmlParserContext;
}
// Type: System.Xml::XmlParserContext
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11396))
// CS Name: System.Xml.XmlParserContext
class CORDL_TYPE XmlParserContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~XmlParserContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlParserContext", modifiers: " const&", def_value: None }]
constexpr XmlParserContext(XmlParserContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlParserContext", modifiers: "&&", def_value: None }]
constexpr XmlParserContext(XmlParserContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlParserContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XmlParserContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlParserContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlParserContext& operator=(XmlParserContext&& o) noexcept = default;
  constexpr XmlParserContext& operator=(XmlParserContext const& o) noexcept = default;
                


// Fields

 System::Xml::XmlNameTable __declspec(property(get=__get__nt, put=__set__nt))  _nt;

constexpr void __set__nt(System::Xml::XmlNameTable value) ;

constexpr System::Xml::XmlNameTable __get__nt() const;

 System::Xml::XmlNamespaceManager __declspec(property(get=__get__nsMgr, put=__set__nsMgr))  _nsMgr;

constexpr void __set__nsMgr(System::Xml::XmlNamespaceManager value) ;

constexpr System::Xml::XmlNamespaceManager __get__nsMgr() const;

 ::StringW __declspec(property(get=__get__docTypeName, put=__set__docTypeName))  _docTypeName;

constexpr void __set__docTypeName(::StringW value) ;

constexpr ::StringW __get__docTypeName() const;

 ::StringW __declspec(property(get=__get__pubId, put=__set__pubId))  _pubId;

constexpr void __set__pubId(::StringW value) ;

constexpr ::StringW __get__pubId() const;

 ::StringW __declspec(property(get=__get__sysId, put=__set__sysId))  _sysId;

constexpr void __set__sysId(::StringW value) ;

constexpr ::StringW __get__sysId() const;

 ::StringW __declspec(property(get=__get__internalSubset, put=__set__internalSubset))  _internalSubset;

constexpr void __set__internalSubset(::StringW value) ;

constexpr ::StringW __get__internalSubset() const;

 ::StringW __declspec(property(get=__get__xmlLang, put=__set__xmlLang))  _xmlLang;

constexpr void __set__xmlLang(::StringW value) ;

constexpr ::StringW __get__xmlLang() const;

 System::Xml::XmlSpace __declspec(property(get=__get__xmlSpace, put=__set__xmlSpace))  _xmlSpace;

constexpr void __set__xmlSpace(System::Xml::XmlSpace value) ;

constexpr System::Xml::XmlSpace __get__xmlSpace() const;

 ::StringW __declspec(property(get=__get__baseURI, put=__set__baseURI))  _baseURI;

constexpr void __set__baseURI(::StringW value) ;

constexpr ::StringW __get__baseURI() const;

 System::Text::Encoding __declspec(property(get=__get__encoding, put=__set__encoding))  _encoding;

constexpr void __set__encoding(System::Text::Encoding value) ;

constexpr System::Text::Encoding __get__encoding() const;


// Properties

 System::Xml::XmlNameTable __declspec(property(get=get_NameTable))  NameTable;

 System::Xml::XmlNamespaceManager __declspec(property(get=get_NamespaceManager))  NamespaceManager;

 ::StringW __declspec(property(get=get_DocTypeName))  DocTypeName;

 ::StringW __declspec(property(get=get_PublicId))  PublicId;

 ::StringW __declspec(property(get=get_SystemId))  SystemId;

 ::StringW __declspec(property(get=get_BaseURI))  BaseURI;

 ::StringW __declspec(property(get=get_InternalSubset))  InternalSubset;

 ::StringW __declspec(property(get=get_XmlLang))  XmlLang;

 System::Xml::XmlSpace __declspec(property(get=get_XmlSpace))  XmlSpace;

 System::Text::Encoding __declspec(property(get=get_Encoding))  Encoding;

 bool __declspec(property(get=get_HasDtdInfo))  HasDtdInfo;


// Methods

static System::Xml::XmlParserContext New_ctor(System::Xml::XmlNameTable nt, System::Xml::XmlNamespaceManager nsMgr, ::StringW docTypeName, ::StringW pubId, ::StringW sysId, ::StringW internalSubset, ::StringW baseURI, ::StringW xmlLang, System::Xml::XmlSpace xmlSpace) ;

/// @brief Method .ctor addr 0x26c6c8c size 0x2c virtual false final false
 void _ctor(System::Xml::XmlNameTable nt, System::Xml::XmlNamespaceManager nsMgr, ::StringW docTypeName, ::StringW pubId, ::StringW sysId, ::StringW internalSubset, ::StringW baseURI, ::StringW xmlLang, System::Xml::XmlSpace xmlSpace) ;

static System::Xml::XmlParserContext New_ctor(System::Xml::XmlNameTable nt, System::Xml::XmlNamespaceManager nsMgr, ::StringW docTypeName, ::StringW pubId, ::StringW sysId, ::StringW internalSubset, ::StringW baseURI, ::StringW xmlLang, System::Xml::XmlSpace xmlSpace, System::Text::Encoding enc) ;

/// @brief Method .ctor addr 0x26c6cb8 size 0x1bc virtual false final false
 void _ctor(System::Xml::XmlNameTable nt, System::Xml::XmlNamespaceManager nsMgr, ::StringW docTypeName, ::StringW pubId, ::StringW sysId, ::StringW internalSubset, ::StringW baseURI, ::StringW xmlLang, System::Xml::XmlSpace xmlSpace, System::Text::Encoding enc) ;

/// @brief Method get_NameTable addr 0x26c6e74 size 0x8 virtual false final false
 System::Xml::XmlNameTable get_NameTable() ;

/// @brief Method get_NamespaceManager addr 0x26c6e7c size 0x8 virtual false final false
 System::Xml::XmlNamespaceManager get_NamespaceManager() ;

/// @brief Method get_DocTypeName addr 0x26c6e84 size 0x8 virtual false final false
 ::StringW get_DocTypeName() ;

/// @brief Method get_PublicId addr 0x26c6e8c size 0x8 virtual false final false
 ::StringW get_PublicId() ;

/// @brief Method get_SystemId addr 0x26c6e94 size 0x8 virtual false final false
 ::StringW get_SystemId() ;

/// @brief Method get_BaseURI addr 0x26c6e9c size 0x8 virtual false final false
 ::StringW get_BaseURI() ;

/// @brief Method get_InternalSubset addr 0x26c6ea4 size 0x8 virtual false final false
 ::StringW get_InternalSubset() ;

/// @brief Method get_XmlLang addr 0x26c6eac size 0x8 virtual false final false
 ::StringW get_XmlLang() ;

/// @brief Method get_XmlSpace addr 0x26c6eb4 size 0x8 virtual false final false
 System::Xml::XmlSpace get_XmlSpace() ;

/// @brief Method get_Encoding addr 0x26c6ebc size 0x8 virtual false final false
 System::Text::Encoding get_Encoding() ;

/// @brief Method get_HasDtdInfo addr 0x26c6ec4 size 0x9c virtual false final false
 bool get_HasDtdInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlParserContext);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlParserContext, "System.Xml", "XmlParserContext");
