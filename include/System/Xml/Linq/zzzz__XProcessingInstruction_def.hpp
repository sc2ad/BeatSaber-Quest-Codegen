#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Linq/zzzz__XNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Xml {
class XmlWriter;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml::Linq {
class XNode;
}
// Forward declare root types
namespace System::Xml::Linq {
class XProcessingInstruction;
}
// Type: System.Xml.Linq::XProcessingInstruction
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15429))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15433))
// CS Name: System.Xml.Linq.XProcessingInstruction
class CORDL_TYPE XProcessingInstruction : public ::System::Xml::Linq::XNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~XProcessingInstruction() = default;

// Ctor Parameters [CppParam { name: "", ty: "XProcessingInstruction", modifiers: " const&", def_value: None }]
constexpr XProcessingInstruction(XProcessingInstruction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XProcessingInstruction", modifiers: "&&", def_value: None }]
constexpr XProcessingInstruction(XProcessingInstruction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XProcessingInstruction(void* ptr) noexcept : ::System::Xml::Linq::XNode(ptr) {
}


  constexpr XProcessingInstruction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XProcessingInstruction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XProcessingInstruction& operator=(XProcessingInstruction&& o) noexcept = default;
  constexpr XProcessingInstruction& operator=(XProcessingInstruction const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_target, put=__set_target))  target;

constexpr void __set_target(::StringW value) ;

constexpr ::StringW __get_target() const;

 ::StringW __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::StringW value) ;

constexpr ::StringW __get_data() const;


// Properties

 ::StringW __declspec(property(get=get_Data, put=set_Data))  Data;

 ::System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 ::StringW __declspec(property(get=get_Target))  Target;


// Methods

// Ctor Parameters [CppParam { name: "target", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::StringW", modifiers: "", def_value: None }]
explicit XProcessingInstruction(::StringW target, ::StringW data) ;

/// @brief Method .ctor addr 0x26ceb44 size 0x84 virtual false final false
 void _ctor(::StringW target, ::StringW data) ;

// Ctor Parameters [CppParam { name: "other", ty: "::System::Xml::Linq::XProcessingInstruction", modifiers: "", def_value: None }]
explicit XProcessingInstruction(::System::Xml::Linq::XProcessingInstruction other) ;

/// @brief Method .ctor addr 0x26ceca8 size 0x7c virtual false final false
 void _ctor(::System::Xml::Linq::XProcessingInstruction other) ;

/// @brief Method get_Data addr 0x26ced24 size 0x8 virtual false final false
 ::StringW get_Data() ;

/// @brief Method set_Data addr 0x26ced2c size 0xf4 virtual false final false
 void set_Data(::StringW value) ;

/// @brief Method get_NodeType addr 0x26cee20 size 0x8 virtual true final false
 ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_Target addr 0x26cee28 size 0x8 virtual false final false
 ::StringW get_Target() ;

/// @brief Method WriteTo addr 0x26cee30 size 0x74 virtual true final false
 void WriteTo(::System::Xml::XmlWriter writer) ;

/// @brief Method CloneNode addr 0x26ceea4 size 0x60 virtual true final false
 ::System::Xml::Linq::XNode CloneNode() ;

/// @brief Method ValidateName addr 0x26cebc8 size 0xe0 virtual false final false
static void ValidateName(::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Linq::XProcessingInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XProcessingInstruction, "System.Xml.Linq", "XProcessingInstruction");
