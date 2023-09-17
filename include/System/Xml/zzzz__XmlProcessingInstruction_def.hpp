#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlLinkedNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
struct XmlNodeType;
}
// Forward declare root types
namespace System::Xml {
class XmlProcessingInstruction;
}
// Type: System.Xml::XmlProcessingInstruction
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11455))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11467))
// CS Name: System.Xml.XmlProcessingInstruction
class CORDL_TYPE XmlProcessingInstruction : public ::System::Xml::XmlLinkedNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~XmlProcessingInstruction() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlProcessingInstruction", modifiers: " const&", def_value: None }]
constexpr XmlProcessingInstruction(XmlProcessingInstruction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlProcessingInstruction", modifiers: "&&", def_value: None }]
constexpr XmlProcessingInstruction(XmlProcessingInstruction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlProcessingInstruction(void* ptr) noexcept : ::System::Xml::XmlLinkedNode(ptr) {
}


  constexpr XmlProcessingInstruction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlProcessingInstruction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlProcessingInstruction& operator=(XmlProcessingInstruction&& o) noexcept = default;
  constexpr XmlProcessingInstruction& operator=(XmlProcessingInstruction const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_target, put=__set_target))  target;

constexpr void __set_target(::StringW value) ;

constexpr ::StringW __get_target() const;

 ::StringW __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::StringW value) ;

constexpr ::StringW __get_data() const;


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;

 ::StringW __declspec(property(put=set_Data))  Data;

 ::StringW __declspec(property(get=get_InnerText, put=set_InnerText))  InnerText;

 ::System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;


// Methods

// Ctor Parameters [CppParam { name: "target", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "doc", ty: "::System::Xml::XmlDocument", modifiers: "", def_value: None }]
explicit XmlProcessingInstruction(::StringW target, ::StringW data, ::System::Xml::XmlDocument doc) ;

/// @brief Method .ctor addr 0x26f95fc size 0x30 virtual false final false
 void _ctor(::StringW target, ::StringW data, ::System::Xml::XmlDocument doc) ;

/// @brief Method get_Name addr 0x26fe0f8 size 0x54 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_LocalName addr 0x26fe14c size 0xc virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_Value addr 0x26fe158 size 0x8 virtual true final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x26fe160 size 0x4 virtual true final false
 void set_Value(::StringW value) ;

/// @brief Method set_Data addr 0x26fe164 size 0xa0 virtual false final false
 void set_Data(::StringW value) ;

/// @brief Method get_InnerText addr 0x26fe204 size 0x8 virtual true final false
 ::StringW get_InnerText() ;

/// @brief Method set_InnerText addr 0x26fe20c size 0x4 virtual true final false
 void set_InnerText(::StringW value) ;

/// @brief Method get_NodeType addr 0x26fe210 size 0x8 virtual true final false
 ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method CloneNode addr 0x26fe218 size 0x38 virtual true final false
 ::System::Xml::XmlNode CloneNode(bool deep) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::XmlProcessingInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlProcessingInstruction, "System.Xml", "XmlProcessingInstruction");
