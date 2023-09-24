#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Linq/zzzz__XObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml::Linq {
class XNamespace;
}
namespace System::Xml::Linq {
class XName;
}
namespace System::Xml {
struct XmlNodeType;
}
// Forward declare root types
namespace System::Xml::Linq {
class XAttribute;
}
// Type: System.Xml.Linq::XAttribute
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15430))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15408))
// CS Name: System.Xml.Linq.XAttribute
class CORDL_TYPE XAttribute : public System::Xml::Linq::XObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~XAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "XAttribute", modifiers: " const&", def_value: None }]
constexpr XAttribute(XAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XAttribute", modifiers: "&&", def_value: None }]
constexpr XAttribute(XAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XAttribute(void* ptr) noexcept : System::Xml::Linq::XObject(ptr) {
}


  constexpr XAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XAttribute& operator=(XAttribute&& o) noexcept = default;
  constexpr XAttribute& operator=(XAttribute const& o) noexcept = default;
                


// Fields

 System::Xml::Linq::XAttribute __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(System::Xml::Linq::XAttribute value) ;

constexpr System::Xml::Linq::XAttribute __get_next() const;

 System::Xml::Linq::XName __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(System::Xml::Linq::XName value) ;

constexpr System::Xml::Linq::XName __get_name() const;

 ::StringW __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::StringW value) ;

constexpr ::StringW __get_value() const;


// Properties

 bool __declspec(property(get=get_IsNamespaceDeclaration))  IsNamespaceDeclaration;

 System::Xml::Linq::XName __declspec(property(get=get_Name))  Name;

 System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;


// Methods

static System::Xml::Linq::XAttribute New_ctor(System::Xml::Linq::XName name, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method .ctor addr 0x26c8084 size 0xbc virtual false final false
 void _ctor(System::Xml::Linq::XName name, ::bs_hook::Il2CppWrapperType value) ;

static System::Xml::Linq::XAttribute New_ctor(System::Xml::Linq::XAttribute other) ;

/// @brief Method .ctor addr 0x26c8784 size 0x7c virtual false final false
 void _ctor(System::Xml::Linq::XAttribute other) ;

/// @brief Method get_IsNamespaceDeclaration addr 0x26c8800 size 0x9c virtual false final false
 bool get_IsNamespaceDeclaration() ;

/// @brief Method get_Name addr 0x26c88b8 size 0x8 virtual false final false
 System::Xml::Linq::XName get_Name() ;

/// @brief Method get_NodeType addr 0x26c88c0 size 0x8 virtual true final false
 System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_Value addr 0x26c88c8 size 0x8 virtual false final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x26c88d0 size 0x100 virtual false final false
 void set_Value(::StringW value) ;

/// @brief Method ToString addr 0x26c8b20 size 0x3d4 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetPrefixOfNamespace addr 0x26c8ef4 size 0x138 virtual false final false
 ::StringW GetPrefixOfNamespace(System::Xml::Linq::XNamespace ns) ;

/// @brief Method ValidateAttribute addr 0x26c8554 size 0x230 virtual false final false
static void ValidateAttribute(System::Xml::Linq::XName name, ::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
NEED_NO_BOX(System::Xml::Linq::XAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Linq::XAttribute, "System.Xml.Linq", "XAttribute");
