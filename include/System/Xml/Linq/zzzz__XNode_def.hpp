#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Linq/zzzz__XObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml::Linq {
struct SaveOptions;
}
namespace System::Xml {
class XmlWriter;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System::Xml::Linq {
class XNode;
}
// Type: System.Xml.Linq::XNode
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15430))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15429))
// CS Name: System.Xml.Linq.XNode
class CORDL_TYPE XNode : public System::Xml::Linq::XObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "XNode", modifiers: " const&", def_value: None }]
constexpr XNode(XNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XNode", modifiers: "&&", def_value: None }]
constexpr XNode(XNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XNode(void* ptr) noexcept : System::Xml::Linq::XObject(ptr) {
}


  constexpr XNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XNode& operator=(XNode&& o) noexcept = default;
  constexpr XNode& operator=(XNode const& o) noexcept = default;
                


// Fields

 System::Xml::Linq::XNode __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(System::Xml::Linq::XNode value) ;

constexpr System::Xml::Linq::XNode __get_next() const;


// Methods

// Ctor Parameters []
explicit XNode() ;

/// @brief Method .ctor addr 0x26c94a0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Remove addr 0x26ce27c size 0x64 virtual false final false
 void Remove() ;

/// @brief Method ToString addr 0x26ce2e0 size 0x1c virtual true final false
 ::StringW ToString() ;

/// @brief Method WriteTo addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteTo(System::Xml::XmlWriter writer) ;

/// @brief Method AppendText addr 0x26ce84c size 0x4 virtual true final false
 void AppendText(System::Text::StringBuilder sb) ;

/// @brief Method CloneNode addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Xml::Linq::XNode CloneNode() ;

/// @brief Method GetXmlString addr 0x26ce3dc size 0x470 virtual false final false
 ::StringW GetXmlString(System::Xml::Linq::SaveOptions o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
NEED_NO_BOX(System::Xml::Linq::XNode);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Linq::XNode, "System.Xml.Linq", "XNode");
