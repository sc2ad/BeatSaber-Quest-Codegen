#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Xml {
struct XmlNodeChangedAction;
}
namespace System::Xml {
class XmlNode;
}
// Forward declare root types
namespace System::Xml {
class XmlNodeChangedEventArgs;
}
// Type: System.Xml::XmlNodeChangedEventArgs
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11463))
// CS Name: System.Xml.XmlNodeChangedEventArgs
class CORDL_TYPE XmlNodeChangedEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~XmlNodeChangedEventArgs() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlNodeChangedEventArgs", modifiers: " const&", def_value: None }]
constexpr XmlNodeChangedEventArgs(XmlNodeChangedEventArgs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlNodeChangedEventArgs", modifiers: "&&", def_value: None }]
constexpr XmlNodeChangedEventArgs(XmlNodeChangedEventArgs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlNodeChangedEventArgs(void* ptr) noexcept : ::System::EventArgs(ptr) {
}


  constexpr XmlNodeChangedEventArgs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlNodeChangedEventArgs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlNodeChangedEventArgs& operator=(XmlNodeChangedEventArgs&& o) noexcept = default;
  constexpr XmlNodeChangedEventArgs& operator=(XmlNodeChangedEventArgs const& o) noexcept = default;
                


// Fields

 ::System::Xml::XmlNodeChangedAction __declspec(property(get=__get_action, put=__set_action))  action;

constexpr void __set_action(::System::Xml::XmlNodeChangedAction value) ;

constexpr ::System::Xml::XmlNodeChangedAction __get_action() const;

 ::System::Xml::XmlNode __declspec(property(get=__get_node, put=__set_node))  node;

constexpr void __set_node(::System::Xml::XmlNode value) ;

constexpr ::System::Xml::XmlNode __get_node() const;

 ::System::Xml::XmlNode __declspec(property(get=__get_oldParent, put=__set_oldParent))  oldParent;

constexpr void __set_oldParent(::System::Xml::XmlNode value) ;

constexpr ::System::Xml::XmlNode __get_oldParent() const;

 ::System::Xml::XmlNode __declspec(property(get=__get_newParent, put=__set_newParent))  newParent;

constexpr void __set_newParent(::System::Xml::XmlNode value) ;

constexpr ::System::Xml::XmlNode __get_newParent() const;

 ::StringW __declspec(property(get=__get_oldValue, put=__set_oldValue))  oldValue;

constexpr void __set_oldValue(::StringW value) ;

constexpr ::StringW __get_oldValue() const;

 ::StringW __declspec(property(get=__get_newValue, put=__set_newValue))  newValue;

constexpr void __set_newValue(::StringW value) ;

constexpr ::StringW __get_newValue() const;


// Properties

 ::System::Xml::XmlNodeChangedAction __declspec(property(get=get_Action))  Action;


// Methods

// Ctor Parameters [CppParam { name: "node", ty: "::System::Xml::XmlNode", modifiers: "", def_value: None }, CppParam { name: "oldParent", ty: "::System::Xml::XmlNode", modifiers: "", def_value: None }, CppParam { name: "newParent", ty: "::System::Xml::XmlNode", modifiers: "", def_value: None }, CppParam { name: "oldValue", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "newValue", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "action", ty: "::System::Xml::XmlNodeChangedAction", modifiers: "", def_value: None }]
explicit XmlNodeChangedEventArgs(::System::Xml::XmlNode node, ::System::Xml::XmlNode oldParent, ::System::Xml::XmlNode newParent, ::StringW oldValue, ::StringW newValue, ::System::Xml::XmlNodeChangedAction action) ;

/// @brief Method .ctor addr 0x26fde18 size 0x9c virtual false final false
 void _ctor(::System::Xml::XmlNode node, ::System::Xml::XmlNode oldParent, ::System::Xml::XmlNode newParent, ::StringW oldValue, ::StringW newValue, ::System::Xml::XmlNodeChangedAction action) ;

/// @brief Method get_Action addr 0x26fdeb4 size 0x8 virtual false final false
 ::System::Xml::XmlNodeChangedAction get_Action() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::XmlNodeChangedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNodeChangedEventArgs, "System.Xml", "XmlNodeChangedEventArgs");
