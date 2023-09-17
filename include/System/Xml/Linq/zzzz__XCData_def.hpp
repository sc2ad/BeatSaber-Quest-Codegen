#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Linq/zzzz__XText_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlWriter;
}
namespace System::Xml::Linq {
class XNode;
}
// Forward declare root types
namespace System::Xml::Linq {
class XCData;
}
// Type: System.Xml.Linq::XCData
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15435))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15409))
// CS Name: System.Xml.Linq.XCData
class CORDL_TYPE XCData : public ::System::Xml::Linq::XText {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~XCData() = default;

// Ctor Parameters [CppParam { name: "", ty: "XCData", modifiers: " const&", def_value: None }]
constexpr XCData(XCData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XCData", modifiers: "&&", def_value: None }]
constexpr XCData(XCData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XCData(void* ptr) noexcept : ::System::Xml::Linq::XText(ptr) {
}


  constexpr XCData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XCData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XCData& operator=(XCData&& o) noexcept = default;
  constexpr XCData& operator=(XCData const& o) noexcept = default;
                


// Properties

 ::System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;


// Methods

// Ctor Parameters [CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }]
explicit XCData(::StringW value) ;

/// @brief Method .ctor addr 0x26c9250 size 0x4 virtual false final false
 void _ctor(::StringW value) ;

// Ctor Parameters [CppParam { name: "other", ty: "::System::Xml::Linq::XCData", modifiers: "", def_value: None }]
explicit XCData(::System::Xml::Linq::XCData other) ;

/// @brief Method .ctor addr 0x26c92cc size 0x4 virtual false final false
 void _ctor(::System::Xml::Linq::XCData other) ;

/// @brief Method get_NodeType addr 0x26c934c size 0x8 virtual true final false
 ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method WriteTo addr 0x26c9354 size 0x74 virtual true final false
 void WriteTo(::System::Xml::XmlWriter writer) ;

/// @brief Method CloneNode addr 0x26c93c8 size 0x60 virtual true final false
 ::System::Xml::Linq::XNode CloneNode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Linq::XCData);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XCData, "System.Xml.Linq", "XCData");
