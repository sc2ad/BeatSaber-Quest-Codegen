#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlLinkedNode;
}
namespace System::Xml {
class XmlDocument;
}
// Forward declare root types
namespace System::Xml {
class XmlEntity;
}
// Type: System.Xml::XmlEntity
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11462))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11451))
// CS Name: System.Xml.XmlEntity
class CORDL_TYPE XmlEntity : public ::System::Xml::XmlNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~XmlEntity() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlEntity", modifiers: " const&", def_value: None }]
constexpr XmlEntity(XmlEntity const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlEntity", modifiers: "&&", def_value: None }]
constexpr XmlEntity(XmlEntity&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlEntity(void* ptr) noexcept : ::System::Xml::XmlNode(ptr) {
}


  constexpr XmlEntity& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlEntity& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlEntity& operator=(XmlEntity&& o) noexcept = default;
  constexpr XmlEntity& operator=(XmlEntity const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_publicId, put=__set_publicId))  publicId;

constexpr void __set_publicId(::StringW value) ;

constexpr ::StringW __get_publicId() const;

 ::StringW __declspec(property(get=__get_systemId, put=__set_systemId))  systemId;

constexpr void __set_systemId(::StringW value) ;

constexpr ::StringW __get_systemId() const;

 ::StringW __declspec(property(get=__get_notationName, put=__set_notationName))  notationName;

constexpr void __set_notationName(::StringW value) ;

constexpr ::StringW __get_notationName() const;

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::StringW __declspec(property(get=__get_unparsedReplacementStr, put=__set_unparsedReplacementStr))  unparsedReplacementStr;

constexpr void __set_unparsedReplacementStr(::StringW value) ;

constexpr ::StringW __get_unparsedReplacementStr() const;

 ::StringW __declspec(property(get=__get_baseURI, put=__set_baseURI))  baseURI;

constexpr void __set_baseURI(::StringW value) ;

constexpr ::StringW __get_baseURI() const;

 ::System::Xml::XmlLinkedNode __declspec(property(get=__get_lastChild, put=__set_lastChild))  lastChild;

constexpr void __set_lastChild(::System::Xml::XmlLinkedNode value) ;

constexpr ::System::Xml::XmlLinkedNode __get_lastChild() const;

 bool __declspec(property(get=__get_childrenFoliating, put=__set_childrenFoliating))  childrenFoliating;

constexpr void __set_childrenFoliating(bool value) ;

constexpr bool __get_childrenFoliating() const;


// Properties

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 ::StringW __declspec(property(get=get_InnerText, put=set_InnerText))  InnerText;

 bool __declspec(property(get=get_IsContainer))  IsContainer;

 ::System::Xml::XmlLinkedNode __declspec(property(get=get_LastNode, put=set_LastNode))  LastNode;

 ::System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 ::StringW __declspec(property(get=get_SystemId))  SystemId;

 ::StringW __declspec(property(put=set_InnerXml))  InnerXml;

 ::StringW __declspec(property(get=get_BaseURI))  BaseURI;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "strdata", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "publicId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "systemId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "notationName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "doc", ty: "::System::Xml::XmlDocument", modifiers: "", def_value: None }]
explicit XmlEntity(::StringW name, ::StringW strdata, ::StringW publicId, ::StringW systemId, ::StringW notationName, ::System::Xml::XmlDocument doc) ;

/// @brief Method .ctor addr 0x26f5a4c size 0x80 virtual false final false
 void _ctor(::StringW name, ::StringW strdata, ::StringW publicId, ::StringW systemId, ::StringW notationName, ::System::Xml::XmlDocument doc) ;

/// @brief Method CloneNode addr 0x26f5b50 size 0x60 virtual true final false
 ::System::Xml::XmlNode CloneNode(bool deep) ;

/// @brief Method get_IsReadOnly addr 0x26f5bb0 size 0x8 virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method get_Name addr 0x26f5bb8 size 0x8 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_LocalName addr 0x26f5bc0 size 0x8 virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_InnerText addr 0x26f5bc8 size 0x4 virtual true final false
 ::StringW get_InnerText() ;

/// @brief Method set_InnerText addr 0x26f5bcc size 0x60 virtual true final false
 void set_InnerText(::StringW value) ;

/// @brief Method get_IsContainer addr 0x26f5c2c size 0x8 virtual true final false
 bool get_IsContainer() ;

/// @brief Method get_LastNode addr 0x26f5c34 size 0x8c virtual true final false
 ::System::Xml::XmlLinkedNode get_LastNode() ;

/// @brief Method set_LastNode addr 0x26f5d0c size 0x8 virtual true final false
 void set_LastNode(::System::Xml::XmlLinkedNode value) ;

/// @brief Method IsValidChildType addr 0x26f5d14 size 0x3c virtual true final false
 bool IsValidChildType(::System::Xml::XmlNodeType type) ;

/// @brief Method get_NodeType addr 0x26f5d50 size 0x8 virtual true final false
 ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_SystemId addr 0x26f5d58 size 0x8 virtual false final false
 ::StringW get_SystemId() ;

/// @brief Method set_InnerXml addr 0x26f5d60 size 0x60 virtual true final false
 void set_InnerXml(::StringW value) ;

/// @brief Method get_BaseURI addr 0x26f5dc0 size 0x8 virtual true final false
 ::StringW get_BaseURI() ;

/// @brief Method SetBaseURI addr 0x26f5dc8 size 0x8 virtual false final false
 void SetBaseURI(::StringW inBaseURI) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::XmlEntity);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlEntity, "System.Xml", "XmlEntity");
