#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__InteriorNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Xml::Schema {
class BitSet;
}
// Forward declare root types
namespace System::Xml::Schema {
class QmarkNode;
}
// Type: System.Xml.Schema::QmarkNode
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11544))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11549))
// CS Name: System.Xml.Schema.QmarkNode
class CORDL_TYPE QmarkNode : public System::Xml::Schema::InteriorNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~QmarkNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "QmarkNode", modifiers: " const&", def_value: None }]
constexpr QmarkNode(QmarkNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "QmarkNode", modifiers: "&&", def_value: None }]
constexpr QmarkNode(QmarkNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit QmarkNode(void* ptr) noexcept : System::Xml::Schema::InteriorNode(ptr) {
}


  constexpr QmarkNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr QmarkNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr QmarkNode& operator=(QmarkNode&& o) noexcept = default;
  constexpr QmarkNode& operator=(QmarkNode const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_IsNullable))  IsNullable;


// Methods

/// @brief Method ConstructPos addr 0x271b2b8 size 0x20 virtual true final false
 void ConstructPos(System::Xml::Schema::BitSet firstpos, System::Xml::Schema::BitSet lastpos, ::ArrayW<System::Xml::Schema::BitSet> followpos) ;

/// @brief Method get_IsNullable addr 0x271b2d8 size 0x8 virtual true final false
 bool get_IsNullable() ;

static System::Xml::Schema::QmarkNode New_ctor() ;

/// @brief Method .ctor addr 0x271b2e0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::QmarkNode);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::QmarkNode, "System.Xml.Schema", "QmarkNode");
