#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/XPath/zzzz__XPathNavigator_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Xml::XPath {
struct XPathNodeType;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml::XPath {
class XPathNavigator;
}
namespace MS::Internal::Xml::Cache {
struct XPathNode;
}
namespace System::Xml::XPath {
struct XPathNamespaceScope;
}
// Forward declare root types
namespace MS::Internal::Xml::Cache {
class XPathDocumentNavigator;
}
// Type: MS.Internal.Xml.Cache::XPathDocumentNavigator
namespace MS::Internal::Xml::Cache {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11524))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11709))
// CS Name: MS.Internal.Xml.Cache.XPathDocumentNavigator
class CORDL_TYPE XPathDocumentNavigator : public System::Xml::XPath::XPathNavigator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XPathDocumentNavigator() = default;

// Ctor Parameters [CppParam { name: "", ty: "XPathDocumentNavigator", modifiers: " const&", def_value: None }]
constexpr XPathDocumentNavigator(XPathDocumentNavigator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XPathDocumentNavigator", modifiers: "&&", def_value: None }]
constexpr XPathDocumentNavigator(XPathDocumentNavigator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XPathDocumentNavigator(void* ptr) noexcept : System::Xml::XPath::XPathNavigator(ptr) {
}


  constexpr XPathDocumentNavigator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XPathDocumentNavigator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XPathDocumentNavigator& operator=(XPathDocumentNavigator&& o) noexcept = default;
  constexpr XPathDocumentNavigator& operator=(XPathDocumentNavigator const& o) noexcept = default;
                


// Fields

 ::ArrayW<MS::Internal::Xml::Cache::XPathNode> __declspec(property(get=__get__pageCurrent, put=__set__pageCurrent))  _pageCurrent;

constexpr void __set__pageCurrent(::ArrayW<MS::Internal::Xml::Cache::XPathNode> value) ;

constexpr ::ArrayW<MS::Internal::Xml::Cache::XPathNode> __get__pageCurrent() const;

 ::ArrayW<MS::Internal::Xml::Cache::XPathNode> __declspec(property(get=__get__pageParent, put=__set__pageParent))  _pageParent;

constexpr void __set__pageParent(::ArrayW<MS::Internal::Xml::Cache::XPathNode> value) ;

constexpr ::ArrayW<MS::Internal::Xml::Cache::XPathNode> __get__pageParent() const;

 int32_t __declspec(property(get=__get__idxCurrent, put=__set__idxCurrent))  _idxCurrent;

constexpr void __set__idxCurrent(int32_t value) ;

constexpr int32_t __get__idxCurrent() const;

 int32_t __declspec(property(get=__get__idxParent, put=__set__idxParent))  _idxParent;

constexpr void __set__idxParent(int32_t value) ;

constexpr int32_t __get__idxParent() const;


// Properties

 ::StringW __declspec(property(get=get_Value))  Value;

 System::Xml::XPath::XPathNodeType __declspec(property(get=get_NodeType))  NodeType;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 ::StringW __declspec(property(get=get_NamespaceURI))  NamespaceURI;

 ::StringW __declspec(property(get=get_Prefix))  Prefix;

 System::Xml::XmlNameTable __declspec(property(get=get_NameTable))  NameTable;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_UnderlyingObject))  UnderlyingObject;


// Methods

static MS::Internal::Xml::Cache::XPathDocumentNavigator New_ctor(::ArrayW<MS::Internal::Xml::Cache::XPathNode> pageCurrent, int32_t idxCurrent, ::ArrayW<MS::Internal::Xml::Cache::XPathNode> pageParent, int32_t idxParent) ;

/// @brief Method .ctor addr 0x27571d0 size 0x84 virtual false final false
 void _ctor(::ArrayW<MS::Internal::Xml::Cache::XPathNode> pageCurrent, int32_t idxCurrent, ::ArrayW<MS::Internal::Xml::Cache::XPathNode> pageParent, int32_t idxParent) ;

/// @brief Method get_Value addr 0x2757254 size 0x1fc virtual true final false
 ::StringW get_Value() ;

/// @brief Method Clone addr 0x2757630 size 0x7c virtual true final false
 System::Xml::XPath::XPathNavigator Clone() ;

/// @brief Method get_NodeType addr 0x27576ac size 0x38 virtual true final false
 System::Xml::XPath::XPathNodeType get_NodeType() ;

/// @brief Method get_LocalName addr 0x27576f0 size 0x3c virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_NamespaceURI addr 0x2757748 size 0x3c virtual true final false
 ::StringW get_NamespaceURI() ;

/// @brief Method get_Prefix addr 0x27577a0 size 0x3c virtual true final false
 ::StringW get_Prefix() ;

/// @brief Method get_NameTable addr 0x27577f8 size 0x44 virtual true final false
 System::Xml::XmlNameTable get_NameTable() ;

/// @brief Method MoveToFirstNamespace addr 0x2757858 size 0xf4 virtual true final false
 bool MoveToFirstNamespace(System::Xml::XPath::XPathNamespaceScope namespaceScope) ;

/// @brief Method MoveToNextNamespace addr 0x2757b14 size 0x108 virtual true final false
 bool MoveToNextNamespace(System::Xml::XPath::XPathNamespaceScope scope) ;

/// @brief Method MoveToParent addr 0x2757c40 size 0x2c virtual true final false
 bool MoveToParent() ;

/// @brief Method IsSamePosition addr 0x2757cc4 size 0xac virtual true final false
 bool IsSamePosition(System::Xml::XPath::XPathNavigator other) ;

/// @brief Method get_UnderlyingObject addr 0x2757d70 size 0x10 virtual true final false
 ::bs_hook::Il2CppWrapperType get_UnderlyingObject() ;

/// @brief Method GetPositionHashCode addr 0x2757d80 size 0xc virtual false final false
 int32_t GetPositionHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def MS::Internal::Xml::Cache
NEED_NO_BOX(MS::Internal::Xml::Cache::XPathDocumentNavigator);
DEFINE_IL2CPP_ARG_TYPE(MS::Internal::Xml::Cache::XPathDocumentNavigator, "MS.Internal.Xml.Cache", "XPathDocumentNavigator");
