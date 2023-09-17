#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace MS::Internal::Xml::Cache {
class XPathNodePageInfo;
}
namespace MS::Internal::Xml::Cache {
struct XPathNode;
}
namespace System::Xml::XPath {
class XPathDocument;
}
// Forward declare root types
namespace MS::Internal::Xml::Cache {
class XPathNodeInfoAtom;
}
// Type: MS.Internal.Xml.Cache::XPathNodeInfoAtom
namespace MS::Internal::Xml::Cache {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11714))
// CS Name: MS.Internal.Xml.Cache.XPathNodeInfoAtom
class CORDL_TYPE XPathNodeInfoAtom : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~XPathNodeInfoAtom() = default;

// Ctor Parameters [CppParam { name: "", ty: "XPathNodeInfoAtom", modifiers: " const&", def_value: None }]
constexpr XPathNodeInfoAtom(XPathNodeInfoAtom const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XPathNodeInfoAtom", modifiers: "&&", def_value: None }]
constexpr XPathNodeInfoAtom(XPathNodeInfoAtom&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XPathNodeInfoAtom(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XPathNodeInfoAtom& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XPathNodeInfoAtom& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XPathNodeInfoAtom& operator=(XPathNodeInfoAtom&& o) noexcept = default;
  constexpr XPathNodeInfoAtom& operator=(XPathNodeInfoAtom const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__localName, put=__set__localName))  _localName;

constexpr void __set__localName(::StringW value) ;

constexpr ::StringW __get__localName() const;

 ::StringW __declspec(property(get=__get__namespaceUri, put=__set__namespaceUri))  _namespaceUri;

constexpr void __set__namespaceUri(::StringW value) ;

constexpr ::StringW __get__namespaceUri() const;

 ::StringW __declspec(property(get=__get__prefix, put=__set__prefix))  _prefix;

constexpr void __set__prefix(::StringW value) ;

constexpr ::StringW __get__prefix() const;

 ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> __declspec(property(get=__get__pageParent, put=__set__pageParent))  _pageParent;

constexpr void __set__pageParent(::ArrayW<::MS::Internal::Xml::Cache::XPathNode> value) ;

constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> __get__pageParent() const;

 ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> __declspec(property(get=__get__pageSibling, put=__set__pageSibling))  _pageSibling;

constexpr void __set__pageSibling(::ArrayW<::MS::Internal::Xml::Cache::XPathNode> value) ;

constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> __get__pageSibling() const;

 ::System::Xml::XPath::XPathDocument __declspec(property(get=__get__doc, put=__set__doc))  _doc;

constexpr void __set__doc(::System::Xml::XPath::XPathDocument value) ;

constexpr ::System::Xml::XPath::XPathDocument __get__doc() const;

 ::MS::Internal::Xml::Cache::XPathNodePageInfo __declspec(property(get=__get__pageInfo, put=__set__pageInfo))  _pageInfo;

constexpr void __set__pageInfo(::MS::Internal::Xml::Cache::XPathNodePageInfo value) ;

constexpr ::MS::Internal::Xml::Cache::XPathNodePageInfo __get__pageInfo() const;


// Properties

 ::MS::Internal::Xml::Cache::XPathNodePageInfo __declspec(property(get=get_PageInfo))  PageInfo;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 ::StringW __declspec(property(get=get_NamespaceUri))  NamespaceUri;

 ::StringW __declspec(property(get=get_Prefix))  Prefix;

 ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> __declspec(property(get=get_SiblingPage))  SiblingPage;

 ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> __declspec(property(get=get_ParentPage))  ParentPage;

 ::System::Xml::XPath::XPathDocument __declspec(property(get=get_Document))  Document;


// Methods

/// @brief Method get_PageInfo addr 0x2757eb4 size 0x8 virtual false final false
 ::MS::Internal::Xml::Cache::XPathNodePageInfo get_PageInfo() ;

/// @brief Method get_LocalName addr 0x2757ebc size 0x8 virtual false final false
 ::StringW get_LocalName() ;

/// @brief Method get_NamespaceUri addr 0x2757ec4 size 0x8 virtual false final false
 ::StringW get_NamespaceUri() ;

/// @brief Method get_Prefix addr 0x2757ecc size 0x8 virtual false final false
 ::StringW get_Prefix() ;

/// @brief Method get_SiblingPage addr 0x2757ed4 size 0x8 virtual false final false
 ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> get_SiblingPage() ;

/// @brief Method get_ParentPage addr 0x2757edc size 0x8 virtual false final false
 ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> get_ParentPage() ;

/// @brief Method get_Document addr 0x2757ee4 size 0x8 virtual false final false
 ::System::Xml::XPath::XPathDocument get_Document() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def MS::Internal::Xml::Cache
} // end anonymous namespace
NEED_NO_BOX(::MS::Internal::Xml::Cache::XPathNodeInfoAtom);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::Cache::XPathNodeInfoAtom, "MS.Internal.Xml.Cache", "XPathNodeInfoAtom");
