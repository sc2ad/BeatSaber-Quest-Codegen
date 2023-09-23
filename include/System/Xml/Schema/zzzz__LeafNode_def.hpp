#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__SyntaxTreeNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Xml::Schema {
class SymbolsDictionary;
}
namespace System::Xml::Schema {
class BitSet;
}
namespace System::Xml::Schema {
class InteriorNode;
}
namespace System::Xml::Schema {
class Positions;
}
// Forward declare root types
namespace System::Xml::Schema {
class LeafNode;
}
// Type: System.Xml.Schema::LeafNode
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11541))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11542))
// CS Name: System.Xml.Schema.LeafNode
class CORDL_TYPE LeafNode : public System::Xml::Schema::SyntaxTreeNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LeafNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "LeafNode", modifiers: " const&", def_value: None }]
constexpr LeafNode(LeafNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LeafNode", modifiers: "&&", def_value: None }]
constexpr LeafNode(LeafNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LeafNode(void* ptr) noexcept : System::Xml::Schema::SyntaxTreeNode(ptr) {
}


  constexpr LeafNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LeafNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LeafNode& operator=(LeafNode&& o) noexcept = default;
  constexpr LeafNode& operator=(LeafNode const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_pos, put=__set_pos))  pos;

constexpr void __set_pos(int32_t value) ;

constexpr int32_t __get_pos() const;


// Properties

 int32_t __declspec(property(get=get_Pos, put=set_Pos))  Pos;

 bool __declspec(property(get=get_IsNullable))  IsNullable;


// Methods

// Ctor Parameters [CppParam { name: "pos", ty: "int32_t", modifiers: "", def_value: None }]
explicit LeafNode(int32_t pos) ;

/// @brief Method .ctor addr 0x271a270 size 0x28 virtual false final false
 void _ctor(int32_t pos) ;

/// @brief Method get_Pos addr 0x271a298 size 0x8 virtual false final false
 int32_t get_Pos() ;

/// @brief Method set_Pos addr 0x271a2a0 size 0x8 virtual false final false
 void set_Pos(int32_t value) ;

/// @brief Method ExpandTree addr 0x271a2a8 size 0x4 virtual true final false
 void ExpandTree(System::Xml::Schema::InteriorNode parent, System::Xml::Schema::SymbolsDictionary symbols, System::Xml::Schema::Positions positions) ;

/// @brief Method ConstructPos addr 0x271a2ac size 0x40 virtual true final false
 void ConstructPos(System::Xml::Schema::BitSet firstpos, System::Xml::Schema::BitSet lastpos, ::ArrayW<System::Xml::Schema::BitSet> followpos) ;

/// @brief Method get_IsNullable addr 0x271a2ec size 0x8 virtual true final false
 bool get_IsNullable() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::LeafNode);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::LeafNode, "System.Xml.Schema", "LeafNode");
