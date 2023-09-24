#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlCharacterData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlDocument;
}
// Forward declare root types
namespace System::Xml {
class XmlComment;
}
// Type: System.Xml::XmlComment
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11442))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11445))
// CS Name: System.Xml.XmlComment
class CORDL_TYPE XmlComment : public System::Xml::XmlCharacterData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XmlComment() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlComment", modifiers: " const&", def_value: None }]
constexpr XmlComment(XmlComment const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlComment", modifiers: "&&", def_value: None }]
constexpr XmlComment(XmlComment&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlComment(void* ptr) noexcept : System::Xml::XmlCharacterData(ptr) {
}


  constexpr XmlComment& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlComment& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlComment& operator=(XmlComment&& o) noexcept = default;
  constexpr XmlComment& operator=(XmlComment const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;


// Methods

static System::Xml::XmlComment New_ctor(::StringW comment, System::Xml::XmlDocument doc) ;

/// @brief Method .ctor addr 0x26f06a0 size 0x2c virtual false final false
 void _ctor(::StringW comment, System::Xml::XmlDocument doc) ;

/// @brief Method get_Name addr 0x26f06cc size 0x28 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_LocalName addr 0x26f06f4 size 0x28 virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_NodeType addr 0x26f071c size 0x8 virtual true final false
 System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method CloneNode addr 0x26f0724 size 0x5c virtual true final false
 System::Xml::XmlNode CloneNode(bool deep) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlComment);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlComment, "System.Xml", "XmlComment");
