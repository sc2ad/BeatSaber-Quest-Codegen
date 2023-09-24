#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlNode;
}
// Forward declare root types
namespace System::Xml {
class XmlUnspecifiedAttribute;
}
// Type: System.Xml::XmlUnspecifiedAttribute
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11439))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11470))
// CS Name: System.Xml.XmlUnspecifiedAttribute
class CORDL_TYPE XmlUnspecifiedAttribute : public System::Xml::XmlAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~XmlUnspecifiedAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlUnspecifiedAttribute", modifiers: " const&", def_value: None }]
constexpr XmlUnspecifiedAttribute(XmlUnspecifiedAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlUnspecifiedAttribute", modifiers: "&&", def_value: None }]
constexpr XmlUnspecifiedAttribute(XmlUnspecifiedAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlUnspecifiedAttribute(void* ptr) noexcept : System::Xml::XmlAttribute(ptr) {
}


  constexpr XmlUnspecifiedAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlUnspecifiedAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlUnspecifiedAttribute& operator=(XmlUnspecifiedAttribute&& o) noexcept = default;
  constexpr XmlUnspecifiedAttribute& operator=(XmlUnspecifiedAttribute const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_fSpecified, put=__set_fSpecified))  fSpecified;

constexpr void __set_fSpecified(bool value) ;

constexpr bool __get_fSpecified() const;


// Properties

 bool __declspec(property(get=get_Specified))  Specified;

 ::StringW __declspec(property(put=set_InnerText))  InnerText;


// Methods

static System::Xml::XmlUnspecifiedAttribute New_ctor(::StringW prefix, ::StringW localName, ::StringW namespaceURI, System::Xml::XmlDocument doc) ;

/// @brief Method .ctor addr 0x26f962c size 0x8 virtual false final false
 void _ctor(::StringW prefix, ::StringW localName, ::StringW namespaceURI, System::Xml::XmlDocument doc) ;

/// @brief Method get_Specified addr 0x26fe65c size 0x8 virtual true final false
 bool get_Specified() ;

/// @brief Method CloneNode addr 0x26fe664 size 0x130 virtual true final false
 System::Xml::XmlNode CloneNode(bool deep) ;

/// @brief Method set_InnerText addr 0x26fe794 size 0x20 virtual true final false
 void set_InnerText(::StringW value) ;

/// @brief Method RemoveChild addr 0x26fe7b4 size 0x20 virtual true final false
 System::Xml::XmlNode RemoveChild(System::Xml::XmlNode oldChild) ;

/// @brief Method AppendChild addr 0x26fe7d4 size 0x20 virtual true final false
 System::Xml::XmlNode AppendChild(System::Xml::XmlNode newChild) ;

/// @brief Method SetSpecified addr 0x26fe7f4 size 0xc virtual false final false
 void SetSpecified(bool f) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlUnspecifiedAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlUnspecifiedAttribute, "System.Xml", "XmlUnspecifiedAttribute");
