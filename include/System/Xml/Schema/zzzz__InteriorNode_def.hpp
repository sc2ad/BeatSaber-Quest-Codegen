#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__SyntaxTreeNode_def.hpp"
namespace {
namespace System::Xml::Schema {
class Positions;
}
namespace System::Xml::Schema {
class SyntaxTreeNode;
}
namespace System::Xml::Schema {
class SymbolsDictionary;
}
// Forward declare root types
namespace System::Xml::Schema {
class InteriorNode;
}
// Type: System.Xml.Schema::InteriorNode
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11541))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11544))
// CS Name: System.Xml.Schema.InteriorNode
class CORDL_TYPE InteriorNode : public ::System::Xml::Schema::SyntaxTreeNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~InteriorNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "InteriorNode", modifiers: " const&", def_value: None }]
constexpr InteriorNode(InteriorNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InteriorNode", modifiers: "&&", def_value: None }]
constexpr InteriorNode(InteriorNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InteriorNode(void* ptr) noexcept : ::System::Xml::Schema::SyntaxTreeNode(ptr) {
}


  constexpr InteriorNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InteriorNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InteriorNode& operator=(InteriorNode&& o) noexcept = default;
  constexpr InteriorNode& operator=(InteriorNode const& o) noexcept = default;
                


// Fields

 ::System::Xml::Schema::SyntaxTreeNode __declspec(property(get=__get_leftChild, put=__set_leftChild))  leftChild;

constexpr void __set_leftChild(::System::Xml::Schema::SyntaxTreeNode value) ;

constexpr ::System::Xml::Schema::SyntaxTreeNode __get_leftChild() const;

 ::System::Xml::Schema::SyntaxTreeNode __declspec(property(get=__get_rightChild, put=__set_rightChild))  rightChild;

constexpr void __set_rightChild(::System::Xml::Schema::SyntaxTreeNode value) ;

constexpr ::System::Xml::Schema::SyntaxTreeNode __get_rightChild() const;


// Properties

 ::System::Xml::Schema::SyntaxTreeNode __declspec(property(get=get_LeftChild, put=set_LeftChild))  LeftChild;

 ::System::Xml::Schema::SyntaxTreeNode __declspec(property(get=get_RightChild, put=set_RightChild))  RightChild;


// Methods

/// @brief Method get_LeftChild addr 0x271a840 size 0x8 virtual false final false
 ::System::Xml::Schema::SyntaxTreeNode get_LeftChild() ;

/// @brief Method set_LeftChild addr 0x271a848 size 0x8 virtual false final false
 void set_LeftChild(::System::Xml::Schema::SyntaxTreeNode value) ;

/// @brief Method get_RightChild addr 0x271a850 size 0x8 virtual false final false
 ::System::Xml::Schema::SyntaxTreeNode get_RightChild() ;

/// @brief Method set_RightChild addr 0x271a858 size 0x8 virtual false final false
 void set_RightChild(::System::Xml::Schema::SyntaxTreeNode value) ;

/// @brief Method ExpandTreeNoRecursive addr 0x271a860 size 0x1e0 virtual false final false
 void ExpandTreeNoRecursive(::System::Xml::Schema::InteriorNode parent, ::System::Xml::Schema::SymbolsDictionary symbols, ::System::Xml::Schema::Positions positions) ;

/// @brief Method ExpandTree addr 0x271aa40 size 0x64 virtual true final false
 void ExpandTree(::System::Xml::Schema::InteriorNode parent, ::System::Xml::Schema::SymbolsDictionary symbols, ::System::Xml::Schema::Positions positions) ;

// Ctor Parameters []
explicit InteriorNode() ;

/// @brief Method .ctor addr 0x271aaa4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::InteriorNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::InteriorNode, "System.Xml.Schema", "InteriorNode");
