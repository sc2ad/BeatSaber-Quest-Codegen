#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Xml::Schema {
class BitSet;
}
namespace System::Xml::Schema {
class SymbolsDictionary;
}
namespace System::Xml::Schema {
class Positions;
}
namespace System::Xml::Schema {
class InteriorNode;
}
// Forward declare root types
namespace System::Xml::Schema {
class SyntaxTreeNode;
}
// Type: System.Xml.Schema::SyntaxTreeNode
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11541))
// CS Name: System.Xml.Schema.SyntaxTreeNode
class CORDL_TYPE SyntaxTreeNode : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SyntaxTreeNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "SyntaxTreeNode", modifiers: " const&", def_value: None }]
constexpr SyntaxTreeNode(SyntaxTreeNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SyntaxTreeNode", modifiers: "&&", def_value: None }]
constexpr SyntaxTreeNode(SyntaxTreeNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SyntaxTreeNode(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SyntaxTreeNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SyntaxTreeNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SyntaxTreeNode& operator=(SyntaxTreeNode&& o) noexcept = default;
  constexpr SyntaxTreeNode& operator=(SyntaxTreeNode const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_IsNullable))  IsNullable;

 bool __declspec(property(get=get_IsRangeNode))  IsRangeNode;


// Methods

/// @brief Method ExpandTree addr 0x0 size 0xffffffffffffffff virtual true final false
 void ExpandTree(System::Xml::Schema::InteriorNode parent, System::Xml::Schema::SymbolsDictionary symbols, System::Xml::Schema::Positions positions) ;

/// @brief Method ConstructPos addr 0x0 size 0xffffffffffffffff virtual true final false
 void ConstructPos(System::Xml::Schema::BitSet firstpos, System::Xml::Schema::BitSet lastpos, ::ArrayW<System::Xml::Schema::BitSet> followpos) ;

/// @brief Method get_IsNullable addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsNullable() ;

/// @brief Method get_IsRangeNode addr 0x271a260 size 0x8 virtual true final false
 bool get_IsRangeNode() ;

static System::Xml::Schema::SyntaxTreeNode New_ctor() ;

/// @brief Method .ctor addr 0x271a268 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::SyntaxTreeNode);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::SyntaxTreeNode, "System.Xml.Schema", "SyntaxTreeNode");
