#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlLinkedNode;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlDocument;
}
// Forward declare root types
namespace System::Xml {
class XmlDocumentFragment;
}
// Type: System.Xml::XmlDocumentFragment
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11462))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11448))
// CS Name: System.Xml.XmlDocumentFragment
class CORDL_TYPE XmlDocumentFragment : public ::System::Xml::XmlNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~XmlDocumentFragment() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlDocumentFragment", modifiers: " const&", def_value: None }]
constexpr XmlDocumentFragment(XmlDocumentFragment const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlDocumentFragment", modifiers: "&&", def_value: None }]
constexpr XmlDocumentFragment(XmlDocumentFragment&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlDocumentFragment(void* ptr) noexcept : ::System::Xml::XmlNode(ptr) {
}


  constexpr XmlDocumentFragment& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlDocumentFragment& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlDocumentFragment& operator=(XmlDocumentFragment&& o) noexcept = default;
  constexpr XmlDocumentFragment& operator=(XmlDocumentFragment const& o) noexcept = default;
                


// Fields

 ::System::Xml::XmlLinkedNode __declspec(property(get=__get_lastChild, put=__set_lastChild))  lastChild;

constexpr void __set_lastChild(::System::Xml::XmlLinkedNode value) ;

constexpr ::System::Xml::XmlLinkedNode __get_lastChild() const;


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 ::System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 ::System::Xml::XmlNode __declspec(property(get=get_ParentNode))  ParentNode;

 ::System::Xml::XmlDocument __declspec(property(get=get_OwnerDocument))  OwnerDocument;

 ::StringW __declspec(property(put=set_InnerXml))  InnerXml;

 bool __declspec(property(get=get_IsContainer))  IsContainer;

 ::System::Xml::XmlLinkedNode __declspec(property(get=get_LastNode, put=set_LastNode))  LastNode;


// Methods

// Ctor Parameters [CppParam { name: "ownerDocument", ty: "::System::Xml::XmlDocument", modifiers: "", def_value: None }]
explicit XmlDocumentFragment(::System::Xml::XmlDocument ownerDocument) ;

/// @brief Method .ctor addr 0x26f4068 size 0x84 virtual false final false
 void _ctor(::System::Xml::XmlDocument ownerDocument) ;

/// @brief Method get_Name addr 0x26f40f4 size 0x28 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_LocalName addr 0x26f411c size 0x28 virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_NodeType addr 0x26f4144 size 0x8 virtual true final false
 ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_ParentNode addr 0x26f414c size 0x8 virtual true final false
 ::System::Xml::XmlNode get_ParentNode() ;

/// @brief Method get_OwnerDocument addr 0x26f4154 size 0x78 virtual true final false
 ::System::Xml::XmlDocument get_OwnerDocument() ;

/// @brief Method set_InnerXml addr 0x26f41cc size 0x8c virtual true final false
 void set_InnerXml(::StringW value) ;

/// @brief Method CloneNode addr 0x26f4464 size 0x84 virtual true final false
 ::System::Xml::XmlNode CloneNode(bool deep) ;

/// @brief Method get_IsContainer addr 0x26f44e8 size 0x8 virtual true final false
 bool get_IsContainer() ;

/// @brief Method get_LastNode addr 0x26f44f0 size 0x8 virtual true final false
 ::System::Xml::XmlLinkedNode get_LastNode() ;

/// @brief Method set_LastNode addr 0x26f44f8 size 0x8 virtual true final false
 void set_LastNode(::System::Xml::XmlLinkedNode value) ;

/// @brief Method IsValidChildType addr 0x26f4500 size 0x6c virtual true final false
 bool IsValidChildType(::System::Xml::XmlNodeType type) ;

/// @brief Method CanInsertAfter addr 0x26f456c size 0x70 virtual true final false
 bool CanInsertAfter(::System::Xml::XmlNode newChild, ::System::Xml::XmlNode refChild) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::XmlDocumentFragment);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDocumentFragment, "System.Xml", "XmlDocumentFragment");
