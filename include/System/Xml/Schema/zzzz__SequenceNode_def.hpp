#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__InteriorNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
namespace System::Xml::Schema {
class Positions;
}
namespace System::Xml::Schema {
class InteriorNode;
}
namespace System::Xml::Schema {
class SymbolsDictionary;
}
namespace System::Xml::Schema {
class BitSet;
}
namespace System::Xml::Schema {
struct System__Xml__Schema__SequenceNode__SequenceConstructPosContext;
}
// Forward declare root types
namespace System::Xml::Schema {
class SequenceNode;
}
namespace System::Xml::Schema {
struct System__Xml__Schema__SequenceNode__SequenceConstructPosContext;
}
// Type: ::SequenceConstructPosContext
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11545))
// CS Name: System.Xml.Schema.SequenceNode::SequenceConstructPosContext
struct CORDL_TYPE System__Xml__Schema__SequenceNode__SequenceConstructPosContext : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "this_", ty: "System::Xml::Schema::SequenceNode", modifiers: "", def_value: None }, CppParam { name: "firstpos", ty: "System::Xml::Schema::BitSet", modifiers: "", def_value: None }, CppParam { name: "lastpos", ty: "System::Xml::Schema::BitSet", modifiers: "", def_value: None }, CppParam { name: "lastposLeft", ty: "System::Xml::Schema::BitSet", modifiers: "", def_value: None }, CppParam { name: "firstposRight", ty: "System::Xml::Schema::BitSet", modifiers: "", def_value: None }]
constexpr System__Xml__Schema__SequenceNode__SequenceConstructPosContext(System::Xml::Schema::SequenceNode this_, System::Xml::Schema::BitSet firstpos, System::Xml::Schema::BitSet lastpos, System::Xml::Schema::BitSet lastposLeft, System::Xml::Schema::BitSet firstposRight) noexcept;


                    constexpr System__Xml__Schema__SequenceNode__SequenceConstructPosContext(System__Xml__Schema__SequenceNode__SequenceConstructPosContext const&) = default;
                    constexpr System__Xml__Schema__SequenceNode__SequenceConstructPosContext(System__Xml__Schema__SequenceNode__SequenceConstructPosContext&&) = default;
                    constexpr System__Xml__Schema__SequenceNode__SequenceConstructPosContext& operator=(System__Xml__Schema__SequenceNode__SequenceConstructPosContext const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Xml__Schema__SequenceNode__SequenceConstructPosContext& operator=(System__Xml__Schema__SequenceNode__SequenceConstructPosContext&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Xml__Schema__SequenceNode__SequenceConstructPosContext(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Xml::Schema::SequenceNode __declspec(property(get=__get_this_, put=__set_this_))  this_;

constexpr void __set_this_(System::Xml::Schema::SequenceNode value) ;

constexpr System::Xml::Schema::SequenceNode __get_this_() const;

 System::Xml::Schema::BitSet __declspec(property(get=__get_firstpos, put=__set_firstpos))  firstpos;

constexpr void __set_firstpos(System::Xml::Schema::BitSet value) ;

constexpr System::Xml::Schema::BitSet __get_firstpos() const;

 System::Xml::Schema::BitSet __declspec(property(get=__get_lastpos, put=__set_lastpos))  lastpos;

constexpr void __set_lastpos(System::Xml::Schema::BitSet value) ;

constexpr System::Xml::Schema::BitSet __get_lastpos() const;

 System::Xml::Schema::BitSet __declspec(property(get=__get_lastposLeft, put=__set_lastposLeft))  lastposLeft;

constexpr void __set_lastposLeft(System::Xml::Schema::BitSet value) ;

constexpr System::Xml::Schema::BitSet __get_lastposLeft() const;

 System::Xml::Schema::BitSet __declspec(property(get=__get_firstposRight, put=__set_firstposRight))  firstposRight;

constexpr void __set_firstposRight(System::Xml::Schema::BitSet value) ;

constexpr System::Xml::Schema::BitSet __get_firstposRight() const;


// Methods

/// @brief Method .ctor addr 0x271adf4 size 0x10 virtual false final false
 void _ctor(System::Xml::Schema::SequenceNode node, System::Xml::Schema::BitSet firstpos, System::Xml::Schema::BitSet lastpos) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
// Type: System.Xml.Schema::SequenceNode
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11544))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11546))
// CS Name: System.Xml.Schema.SequenceNode
class CORDL_TYPE SequenceNode : public System::Xml::Schema::InteriorNode {
public:
// Declarations
using SequenceConstructPosContext = System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SequenceNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "SequenceNode", modifiers: " const&", def_value: None }]
constexpr SequenceNode(SequenceNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SequenceNode", modifiers: "&&", def_value: None }]
constexpr SequenceNode(SequenceNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SequenceNode(void* ptr) noexcept : System::Xml::Schema::InteriorNode(ptr) {
}


  constexpr SequenceNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SequenceNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SequenceNode& operator=(SequenceNode&& o) noexcept = default;
  constexpr SequenceNode& operator=(SequenceNode const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_IsNullable))  IsNullable;


// Methods

/// @brief Method ConstructPos addr 0x271aaac size 0x348 virtual true final false
 void ConstructPos(System::Xml::Schema::BitSet firstpos, System::Xml::Schema::BitSet lastpos, ::ArrayW<System::Xml::Schema::BitSet> followpos) ;

/// @brief Method get_IsNullable addr 0x271ae04 size 0x15c virtual true final false
 bool get_IsNullable() ;

/// @brief Method ExpandTree addr 0x271af60 size 0x4 virtual true final false
 void ExpandTree(System::Xml::Schema::InteriorNode parent, System::Xml::Schema::SymbolsDictionary symbols, System::Xml::Schema::Positions positions) ;

static System::Xml::Schema::SequenceNode New_ctor() ;

/// @brief Method .ctor addr 0x271af64 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::SequenceNode);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::SequenceNode, "System.Xml.Schema", "SequenceNode");
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext, "System.Xml.Schema", "SequenceNode/SequenceConstructPosContext");
