#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__LeafNode_def.hpp"
namespace {
namespace System::Xml::Schema {
class BitSet;
}
namespace System {
struct Decimal;
}
// Forward declare root types
namespace System::Xml::Schema {
class LeafRangeNode;
}
// Type: System.Xml.Schema::LeafRangeNode
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11542))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11551))
// CS Name: System.Xml.Schema.LeafRangeNode
class CORDL_TYPE LeafRangeNode : public ::System::Xml::Schema::LeafNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LeafRangeNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "LeafRangeNode", modifiers: " const&", def_value: None }]
constexpr LeafRangeNode(LeafRangeNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LeafRangeNode", modifiers: "&&", def_value: None }]
constexpr LeafRangeNode(LeafRangeNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LeafRangeNode(void* ptr) noexcept : ::System::Xml::Schema::LeafNode(ptr) {
}


  constexpr LeafRangeNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LeafRangeNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LeafRangeNode& operator=(LeafRangeNode&& o) noexcept = default;
  constexpr LeafRangeNode& operator=(LeafRangeNode const& o) noexcept = default;
                


// Fields

 ::System::Decimal __declspec(property(get=__get_min, put=__set_min))  min;

constexpr void __set_min(::System::Decimal value) ;

constexpr ::System::Decimal __get_min() const;

 ::System::Decimal __declspec(property(get=__get_max, put=__set_max))  max;

constexpr void __set_max(::System::Decimal value) ;

constexpr ::System::Decimal __get_max() const;

 ::System::Xml::Schema::BitSet __declspec(property(get=__get_nextIteration, put=__set_nextIteration))  nextIteration;

constexpr void __set_nextIteration(::System::Xml::Schema::BitSet value) ;

constexpr ::System::Xml::Schema::BitSet __get_nextIteration() const;


// Properties

 ::System::Decimal __declspec(property(get=get_Max))  Max;

 ::System::Decimal __declspec(property(get=get_Min))  Min;

 ::System::Xml::Schema::BitSet __declspec(property(get=get_NextIteration, put=set_NextIteration))  NextIteration;


// Methods

/// @brief Method get_Max addr 0x271b394 size 0xc virtual false final false
 ::System::Decimal get_Max() ;

/// @brief Method get_Min addr 0x271b3a0 size 0xc virtual false final false
 ::System::Decimal get_Min() ;

/// @brief Method get_NextIteration addr 0x271b3ac size 0x8 virtual false final false
 ::System::Xml::Schema::BitSet get_NextIteration() ;

/// @brief Method set_NextIteration addr 0x271b3b4 size 0x8 virtual false final false
 void set_NextIteration(::System::Xml::Schema::BitSet value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::LeafRangeNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::LeafRangeNode, "System.Xml.Schema", "LeafRangeNode");
