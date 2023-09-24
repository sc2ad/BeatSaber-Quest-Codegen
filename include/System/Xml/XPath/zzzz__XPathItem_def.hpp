#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
class Type;
}
namespace System {
struct DateTime;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
// Forward declare root types
namespace System::Xml::XPath {
class XPathItem;
}
// Type: System.Xml.XPath::XPathItem
namespace System::Xml::XPath {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11522))
// CS Name: System.Xml.XPath.XPathItem
class CORDL_TYPE XPathItem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XPathItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "XPathItem", modifiers: " const&", def_value: None }]
constexpr XPathItem(XPathItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XPathItem", modifiers: "&&", def_value: None }]
constexpr XPathItem(XPathItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XPathItem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XPathItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XPathItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XPathItem& operator=(XPathItem&& o) noexcept = default;
  constexpr XPathItem& operator=(XPathItem const& o) noexcept = default;
                


// Properties

 System::Xml::Schema::XmlSchemaType __declspec(property(get=get_XmlType))  XmlType;

 ::StringW __declspec(property(get=get_Value))  Value;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_TypedValue))  TypedValue;

 System::Type __declspec(property(get=get_ValueType))  ValueType;

 bool __declspec(property(get=get_ValueAsBoolean))  ValueAsBoolean;

 System::DateTime __declspec(property(get=get_ValueAsDateTime))  ValueAsDateTime;

 double_t __declspec(property(get=get_ValueAsDouble))  ValueAsDouble;

 int32_t __declspec(property(get=get_ValueAsInt))  ValueAsInt;

 int64_t __declspec(property(get=get_ValueAsLong))  ValueAsLong;


// Methods

/// @brief Method get_XmlType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Xml::Schema::XmlSchemaType get_XmlType() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Value() ;

/// @brief Method get_TypedValue addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_TypedValue() ;

/// @brief Method get_ValueType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_ValueType() ;

/// @brief Method get_ValueAsBoolean addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_ValueAsBoolean() ;

/// @brief Method get_ValueAsDateTime addr 0x0 size 0xffffffffffffffff virtual true final false
 System::DateTime get_ValueAsDateTime() ;

/// @brief Method get_ValueAsDouble addr 0x0 size 0xffffffffffffffff virtual true final false
 double_t get_ValueAsDouble() ;

/// @brief Method get_ValueAsInt addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_ValueAsInt() ;

/// @brief Method get_ValueAsLong addr 0x0 size 0xffffffffffffffff virtual true final false
 int64_t get_ValueAsLong() ;

/// @brief Method ValueAs addr 0x27164f8 size 0x14 virtual true final false
 ::bs_hook::Il2CppWrapperType ValueAs(System::Type returnType) ;

/// @brief Method ValueAs addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ValueAs(System::Type returnType, System::Xml::IXmlNamespaceResolver nsResolver) ;

static System::Xml::XPath::XPathItem New_ctor() ;

/// @brief Method .ctor addr 0x271650c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::XPath
NEED_NO_BOX(System::Xml::XPath::XPathItem);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XPath::XPathItem, "System.Xml.XPath", "XPathItem");
