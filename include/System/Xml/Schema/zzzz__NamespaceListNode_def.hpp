#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__SyntaxTreeNode_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Xml::Schema {
class InteriorNode;
}
namespace System::Xml::Schema {
class SymbolsDictionary;
}
namespace System::Collections {
class ICollection;
}
namespace System::Xml::Schema {
class Positions;
}
namespace System::Xml::Schema {
class NamespaceList;
}
namespace System::Xml::Schema {
class BitSet;
}
// Forward declare root types
namespace System::Xml::Schema {
class NamespaceListNode;
}
// Type: System.Xml.Schema::NamespaceListNode
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11541))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11543))
// CS Name: System.Xml.Schema.NamespaceListNode
class CORDL_TYPE NamespaceListNode : public System::Xml::Schema::SyntaxTreeNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~NamespaceListNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "NamespaceListNode", modifiers: " const&", def_value: None }]
constexpr NamespaceListNode(NamespaceListNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NamespaceListNode", modifiers: "&&", def_value: None }]
constexpr NamespaceListNode(NamespaceListNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NamespaceListNode(void* ptr) noexcept : System::Xml::Schema::SyntaxTreeNode(ptr) {
}


  constexpr NamespaceListNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NamespaceListNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NamespaceListNode& operator=(NamespaceListNode&& o) noexcept = default;
  constexpr NamespaceListNode& operator=(NamespaceListNode const& o) noexcept = default;
                


// Fields

 System::Xml::Schema::NamespaceList __declspec(property(get=__get_namespaceList, put=__set_namespaceList))  namespaceList;

constexpr void __set_namespaceList(System::Xml::Schema::NamespaceList value) ;

constexpr System::Xml::Schema::NamespaceList __get_namespaceList() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_particle, put=__set_particle))  particle;

constexpr void __set_particle(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_particle() const;


// Properties

 bool __declspec(property(get=get_IsNullable))  IsNullable;


// Methods

static System::Xml::Schema::NamespaceListNode New_ctor(System::Xml::Schema::NamespaceList namespaceList, ::bs_hook::Il2CppWrapperType particle) ;

/// @brief Method .ctor addr 0x271a2f4 size 0x2c virtual false final false
 void _ctor(System::Xml::Schema::NamespaceList namespaceList, ::bs_hook::Il2CppWrapperType particle) ;

/// @brief Method GetResolvedSymbols addr 0x271a320 size 0x20 virtual true final false
 System::Collections::ICollection GetResolvedSymbols(System::Xml::Schema::SymbolsDictionary symbols) ;

/// @brief Method ExpandTree addr 0x271a340 size 0x478 virtual true final false
 void ExpandTree(System::Xml::Schema::InteriorNode parent, System::Xml::Schema::SymbolsDictionary symbols, System::Xml::Schema::Positions positions) ;

/// @brief Method ConstructPos addr 0x271a7c0 size 0x40 virtual true final false
 void ConstructPos(System::Xml::Schema::BitSet firstpos, System::Xml::Schema::BitSet lastpos, ::ArrayW<System::Xml::Schema::BitSet> followpos) ;

/// @brief Method get_IsNullable addr 0x271a800 size 0x40 virtual true final false
 bool get_IsNullable() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::NamespaceListNode);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::NamespaceListNode, "System.Xml.Schema", "NamespaceListNode");
