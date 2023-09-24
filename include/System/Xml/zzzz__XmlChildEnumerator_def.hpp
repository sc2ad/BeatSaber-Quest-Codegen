#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Xml {
class XmlNode;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace System::Xml {
class XmlChildEnumerator;
}
// Type: System.Xml::XmlChildEnumerator
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11443))
// CS Name: System.Xml.XmlChildEnumerator
class CORDL_TYPE XmlChildEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XmlChildEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlChildEnumerator", modifiers: " const&", def_value: None }]
constexpr XmlChildEnumerator(XmlChildEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlChildEnumerator", modifiers: "&&", def_value: None }]
constexpr XmlChildEnumerator(XmlChildEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlChildEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XmlChildEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlChildEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlChildEnumerator& operator=(XmlChildEnumerator&& o) noexcept = default;
  constexpr XmlChildEnumerator& operator=(XmlChildEnumerator const& o) noexcept = default;
                


// Fields

 System::Xml::XmlNode __declspec(property(get=__get_container, put=__set_container))  container;

constexpr void __set_container(System::Xml::XmlNode value) ;

constexpr System::Xml::XmlNode __get_container() const;

 System::Xml::XmlNode __declspec(property(get=__get_child, put=__set_child))  child;

constexpr void __set_child(System::Xml::XmlNode value) ;

constexpr System::Xml::XmlNode __get_child() const;

 bool __declspec(property(get=__get_isFirst, put=__set_isFirst))  isFirst;

constexpr void __set_isFirst(bool value) ;

constexpr bool __get_isFirst() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;

 System::Xml::XmlNode __declspec(property(get=get_Current))  Current;


// Methods

static System::Xml::XmlChildEnumerator New_ctor(System::Xml::XmlNode container) ;

/// @brief Method .ctor addr 0x26f0408 size 0x50 virtual false final false
 void _ctor(System::Xml::XmlNode container) ;

/// @brief Method System.Collections.IEnumerator.MoveNext addr 0x26f0458 size 0x4 virtual true final true
 bool System_Collections_IEnumerator_MoveNext() ;

/// @brief Method MoveNext addr 0x26f045c size 0x64 virtual false final false
 bool MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x26f04c0 size 0x38 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x26f04f8 size 0x4 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method get_Current addr 0x26f04fc size 0x7c virtual false final false
 System::Xml::XmlNode get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlChildEnumerator);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlChildEnumerator, "System.Xml", "XmlChildEnumerator");
