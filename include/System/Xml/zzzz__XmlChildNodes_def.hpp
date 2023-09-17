#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlNodeList_def.hpp"
#include <cstdint>
namespace {
namespace System::Xml {
class XmlNode;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace System::Xml {
class XmlChildNodes;
}
// Type: System.Xml::XmlChildNodes
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11465))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11444))
// CS Name: System.Xml.XmlChildNodes
class CORDL_TYPE XmlChildNodes : public ::System::Xml::XmlNodeList {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~XmlChildNodes() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlChildNodes", modifiers: " const&", def_value: None }]
constexpr XmlChildNodes(XmlChildNodes const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlChildNodes", modifiers: "&&", def_value: None }]
constexpr XmlChildNodes(XmlChildNodes&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlChildNodes(void* ptr) noexcept : ::System::Xml::XmlNodeList(ptr) {
}


  constexpr XmlChildNodes& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlChildNodes& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlChildNodes& operator=(XmlChildNodes&& o) noexcept = default;
  constexpr XmlChildNodes& operator=(XmlChildNodes const& o) noexcept = default;
                


// Fields

 ::System::Xml::XmlNode __declspec(property(get=__get_container, put=__set_container))  container;

constexpr void __set_container(::System::Xml::XmlNode value) ;

constexpr ::System::Xml::XmlNode __get_container() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "::System::Xml::XmlNode", modifiers: "", def_value: None }]
explicit XmlChildNodes(::System::Xml::XmlNode container) ;

/// @brief Method .ctor addr 0x26f0578 size 0x28 virtual false final false
 void _ctor(::System::Xml::XmlNode container) ;

/// @brief Method get_Count addr 0x26f05a0 size 0x4c virtual true final false
 int32_t get_Count() ;

/// @brief Method GetEnumerator addr 0x26f05ec size 0xb4 virtual true final false
 ::System::Collections::IEnumerator GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::XmlChildNodes);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlChildNodes, "System.Xml", "XmlChildNodes");
