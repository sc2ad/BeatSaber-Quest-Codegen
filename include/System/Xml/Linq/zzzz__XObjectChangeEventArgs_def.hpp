#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__EventArgs_def.hpp"
namespace System::Xml::Linq {
struct XObjectChange;
}
// Forward declare root types
namespace System::Xml::Linq {
class XObjectChangeEventArgs;
}
// Type: System.Xml.Linq::XObjectChangeEventArgs
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15432))
// CS Name: System.Xml.Linq.XObjectChangeEventArgs
class CORDL_TYPE XObjectChangeEventArgs : public System::EventArgs {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~XObjectChangeEventArgs() = default;

// Ctor Parameters [CppParam { name: "", ty: "XObjectChangeEventArgs", modifiers: " const&", def_value: None }]
constexpr XObjectChangeEventArgs(XObjectChangeEventArgs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XObjectChangeEventArgs", modifiers: "&&", def_value: None }]
constexpr XObjectChangeEventArgs(XObjectChangeEventArgs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XObjectChangeEventArgs(void* ptr) noexcept : System::EventArgs(ptr) {
}


  constexpr XObjectChangeEventArgs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XObjectChangeEventArgs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XObjectChangeEventArgs& operator=(XObjectChangeEventArgs&& o) noexcept = default;
  constexpr XObjectChangeEventArgs& operator=(XObjectChangeEventArgs const& o) noexcept = default;
                


// Fields

 System::Xml::Linq::XObjectChange __declspec(property(get=__get__objectChange, put=__set__objectChange))  _objectChange;

constexpr void __set__objectChange(System::Xml::Linq::XObjectChange value) ;

constexpr System::Xml::Linq::XObjectChange __get__objectChange() const;

static System::Xml::Linq::XObjectChangeEventArgs __declspec(property(get=__get_Add, put=__set_Add))  Add;

static void __set_Add(System::Xml::Linq::XObjectChangeEventArgs value) ;

static System::Xml::Linq::XObjectChangeEventArgs __get_Add() ;

static System::Xml::Linq::XObjectChangeEventArgs __declspec(property(get=__get_Remove, put=__set_Remove))  Remove;

static void __set_Remove(System::Xml::Linq::XObjectChangeEventArgs value) ;

static System::Xml::Linq::XObjectChangeEventArgs __get_Remove() ;

static System::Xml::Linq::XObjectChangeEventArgs __declspec(property(get=__get_Name, put=__set_Name))  Name;

static void __set_Name(System::Xml::Linq::XObjectChangeEventArgs value) ;

static System::Xml::Linq::XObjectChangeEventArgs __get_Name() ;

static System::Xml::Linq::XObjectChangeEventArgs __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(System::Xml::Linq::XObjectChangeEventArgs value) ;

static System::Xml::Linq::XObjectChangeEventArgs __get_Value() ;


// Methods

// Ctor Parameters [CppParam { name: "objectChange", ty: "System::Xml::Linq::XObjectChange", modifiers: "", def_value: None }]
explicit XObjectChangeEventArgs(System::Xml::Linq::XObjectChange objectChange) ;

/// @brief Method .ctor addr 0x26cea10 size 0x6c virtual false final false
 void _ctor(System::Xml::Linq::XObjectChange objectChange) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
NEED_NO_BOX(System::Xml::Linq::XObjectChangeEventArgs);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Linq::XObjectChangeEventArgs, "System.Xml.Linq", "XObjectChangeEventArgs");
