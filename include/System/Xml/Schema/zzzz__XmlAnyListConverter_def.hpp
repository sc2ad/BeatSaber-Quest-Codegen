#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlListConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
class Type;
}
namespace System::Xml::Schema {
class XmlBaseConverter;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlAnyListConverter;
}
// Type: System.Xml.Schema::XmlAnyListConverter
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11700))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11699))
// CS Name: System.Xml.Schema.XmlAnyListConverter
class CORDL_TYPE XmlAnyListConverter : public System::Xml::Schema::XmlListConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~XmlAnyListConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlAnyListConverter", modifiers: " const&", def_value: None }]
constexpr XmlAnyListConverter(XmlAnyListConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlAnyListConverter", modifiers: "&&", def_value: None }]
constexpr XmlAnyListConverter(XmlAnyListConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlAnyListConverter(void* ptr) noexcept : System::Xml::Schema::XmlListConverter(ptr) {
}


  constexpr XmlAnyListConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlAnyListConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlAnyListConverter& operator=(XmlAnyListConverter&& o) noexcept = default;
  constexpr XmlAnyListConverter& operator=(XmlAnyListConverter const& o) noexcept = default;
                


// Fields

static System::Xml::Schema::XmlValueConverter __declspec(property(get=__get_ItemList, put=__set_ItemList))  ItemList;

static void __set_ItemList(System::Xml::Schema::XmlValueConverter value) ;

static System::Xml::Schema::XmlValueConverter __get_ItemList() ;

static System::Xml::Schema::XmlValueConverter __declspec(property(get=__get_AnyAtomicList, put=__set_AnyAtomicList))  AnyAtomicList;

static void __set_AnyAtomicList(System::Xml::Schema::XmlValueConverter value) ;

static System::Xml::Schema::XmlValueConverter __get_AnyAtomicList() ;


// Methods

// Ctor Parameters [CppParam { name: "atomicConverter", ty: "System::Xml::Schema::XmlBaseConverter", modifiers: "", def_value: None }]
explicit XmlAnyListConverter(System::Xml::Schema::XmlBaseConverter atomicConverter) ;

/// @brief Method .ctor addr 0x2751984 size 0x4 virtual false final false
 void _ctor(System::Xml::Schema::XmlBaseConverter atomicConverter) ;

/// @brief Method ChangeType addr 0x27519f8 size 0x258 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(::bs_hook::Il2CppWrapperType value, System::Type destinationType, System::Xml::IXmlNamespaceResolver nsResolver) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::XmlAnyListConverter);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlAnyListConverter, "System.Xml.Schema", "XmlAnyListConverter");
