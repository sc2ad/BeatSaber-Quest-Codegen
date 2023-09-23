#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/XPath/zzzz__XPathItem_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
class ICloneable;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
namespace System {
struct DateTime;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
// Forward declare root types
namespace System::Xml::Schema {
class System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName;
}
namespace System::Xml::Schema {
class XmlAtomicValue;
}
namespace System::Xml::Schema {
struct System__Xml__Schema__XmlAtomicValue__Union;
}
// Type: ::Union
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11653))
// CS Name: System.Xml.Schema.XmlAtomicValue::Union
struct CORDL_TYPE System__Xml__Schema__XmlAtomicValue__Union : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "boolVal", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "dblVal", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "i64Val", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "i32Val", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "dtVal", ty: "System::DateTime", modifiers: "", def_value: None }]
constexpr System__Xml__Schema__XmlAtomicValue__Union(bool boolVal, double_t dblVal, int64_t i64Val, int32_t i32Val, System::DateTime dtVal) noexcept;


                    constexpr System__Xml__Schema__XmlAtomicValue__Union(System__Xml__Schema__XmlAtomicValue__Union const&) = default;
                    constexpr System__Xml__Schema__XmlAtomicValue__Union(System__Xml__Schema__XmlAtomicValue__Union&&) = default;
                    constexpr System__Xml__Schema__XmlAtomicValue__Union& operator=(System__Xml__Schema__XmlAtomicValue__Union const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Xml__Schema__XmlAtomicValue__Union& operator=(System__Xml__Schema__XmlAtomicValue__Union&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Xml__Schema__XmlAtomicValue__Union(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_boolVal, put=__set_boolVal))  boolVal;

constexpr void __set_boolVal(bool value) ;

constexpr bool __get_boolVal() const;

 double_t __declspec(property(get=__get_dblVal, put=__set_dblVal))  dblVal;

constexpr void __set_dblVal(double_t value) ;

constexpr double_t __get_dblVal() const;

 int64_t __declspec(property(get=__get_i64Val, put=__set_i64Val))  i64Val;

constexpr void __set_i64Val(int64_t value) ;

constexpr int64_t __get_i64Val() const;

 int32_t __declspec(property(get=__get_i32Val, put=__set_i32Val))  i32Val;

constexpr void __set_i32Val(int32_t value) ;

constexpr int32_t __get_i32Val() const;

 System::DateTime __declspec(property(get=__get_dtVal, put=__set_dtVal))  dtVal;

constexpr void __set_dtVal(System::DateTime value) ;

constexpr System::DateTime __get_dtVal() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
// Type: ::NamespacePrefixForQName
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11654))
// CS Name: System.Xml.Schema.XmlAtomicValue::NamespacePrefixForQName
class CORDL_TYPE System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Xml::IXmlNamespaceResolver
constexpr operator  System::Xml::IXmlNamespaceResolver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName", modifiers: " const&", def_value: None }]
constexpr System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName(System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName", modifiers: "&&", def_value: None }]
constexpr System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName(System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName& operator=(System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName&& o) noexcept = default;
  constexpr System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName& operator=(System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_prefix, put=__set_prefix))  prefix;

constexpr void __set_prefix(::StringW value) ;

constexpr ::StringW __get_prefix() const;

 ::StringW __declspec(property(get=__get_ns, put=__set_ns))  ns;

constexpr void __set_ns(::StringW value) ;

constexpr ::StringW __get_ns() const;


// Methods

// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "ns", ty: "::StringW", modifiers: "", def_value: None }]
explicit System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName(::StringW prefix, ::StringW ns) ;

/// @brief Method .ctor addr 0x2732a5c size 0x2c virtual false final false
 void _ctor(::StringW prefix, ::StringW ns) ;

/// @brief Method LookupNamespace addr 0x27336f8 size 0x34 virtual true final true
 ::StringW LookupNamespace(::StringW prefix) ;

/// @brief Method LookupPrefix addr 0x273372c size 0x2c virtual true final true
 ::StringW LookupPrefix(::StringW namespaceName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
// Type: System.Xml.Schema::XmlAtomicValue
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11522))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11655))
// CS Name: System.Xml.Schema.XmlAtomicValue
class CORDL_TYPE XmlAtomicValue : public System::Xml::XPath::XPathItem {
public:
// Declarations
using NamespacePrefixForQName = System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName;

using Union = System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__Union;

/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~XmlAtomicValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlAtomicValue", modifiers: " const&", def_value: None }]
constexpr XmlAtomicValue(XmlAtomicValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlAtomicValue", modifiers: "&&", def_value: None }]
constexpr XmlAtomicValue(XmlAtomicValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlAtomicValue(void* ptr) noexcept : System::Xml::XPath::XPathItem(ptr) {
}


  constexpr XmlAtomicValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlAtomicValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlAtomicValue& operator=(XmlAtomicValue&& o) noexcept = default;
  constexpr XmlAtomicValue& operator=(XmlAtomicValue const& o) noexcept = default;
                


// Fields

 System::Xml::Schema::XmlSchemaType __declspec(property(get=__get_xmlType, put=__set_xmlType))  xmlType;

constexpr void __set_xmlType(System::Xml::Schema::XmlSchemaType value) ;

constexpr System::Xml::Schema::XmlSchemaType __get_xmlType() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_objVal, put=__set_objVal))  objVal;

constexpr void __set_objVal(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_objVal() const;

 System::TypeCode __declspec(property(get=__get_clrType, put=__set_clrType))  clrType;

constexpr void __set_clrType(System::TypeCode value) ;

constexpr System::TypeCode __get_clrType() const;

 System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__Union __declspec(property(get=__get_unionVal, put=__set_unionVal))  unionVal;

constexpr void __set_unionVal(System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__Union value) ;

constexpr System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__Union __get_unionVal() const;

 System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName __declspec(property(get=__get_nsPrefix, put=__set_nsPrefix))  nsPrefix;

constexpr void __set_nsPrefix(System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName value) ;

constexpr System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName __get_nsPrefix() const;


// Properties

 System::Xml::Schema::XmlSchemaType __declspec(property(get=get_XmlType))  XmlType;

 System::Type __declspec(property(get=get_ValueType))  ValueType;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_TypedValue))  TypedValue;

 bool __declspec(property(get=get_ValueAsBoolean))  ValueAsBoolean;

 System::DateTime __declspec(property(get=get_ValueAsDateTime))  ValueAsDateTime;

 double_t __declspec(property(get=get_ValueAsDouble))  ValueAsDouble;

 int32_t __declspec(property(get=get_ValueAsInt))  ValueAsInt;

 int64_t __declspec(property(get=get_ValueAsLong))  ValueAsLong;

 ::StringW __declspec(property(get=get_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "xmlType", ty: "System::Xml::Schema::XmlSchemaType", modifiers: "", def_value: None }, CppParam { name: "value", ty: "bool", modifiers: "", def_value: None }]
explicit XmlAtomicValue(System::Xml::Schema::XmlSchemaType xmlType, bool value) ;

/// @brief Method .ctor addr 0x27323d8 size 0x8c virtual false final false
 void _ctor(System::Xml::Schema::XmlSchemaType xmlType, bool value) ;

// Ctor Parameters [CppParam { name: "xmlType", ty: "System::Xml::Schema::XmlSchemaType", modifiers: "", def_value: None }, CppParam { name: "value", ty: "System::DateTime", modifiers: "", def_value: None }]
explicit XmlAtomicValue(System::Xml::Schema::XmlSchemaType xmlType, System::DateTime value) ;

/// @brief Method .ctor addr 0x2732464 size 0x88 virtual false final false
 void _ctor(System::Xml::Schema::XmlSchemaType xmlType, System::DateTime value) ;

// Ctor Parameters [CppParam { name: "xmlType", ty: "System::Xml::Schema::XmlSchemaType", modifiers: "", def_value: None }, CppParam { name: "value", ty: "double_t", modifiers: "", def_value: None }]
explicit XmlAtomicValue(System::Xml::Schema::XmlSchemaType xmlType, double_t value) ;

/// @brief Method .ctor addr 0x27324ec size 0x90 virtual false final false
 void _ctor(System::Xml::Schema::XmlSchemaType xmlType, double_t value) ;

// Ctor Parameters [CppParam { name: "xmlType", ty: "System::Xml::Schema::XmlSchemaType", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }]
explicit XmlAtomicValue(System::Xml::Schema::XmlSchemaType xmlType, int32_t value) ;

/// @brief Method .ctor addr 0x273257c size 0x88 virtual false final false
 void _ctor(System::Xml::Schema::XmlSchemaType xmlType, int32_t value) ;

// Ctor Parameters [CppParam { name: "xmlType", ty: "System::Xml::Schema::XmlSchemaType", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int64_t", modifiers: "", def_value: None }]
explicit XmlAtomicValue(System::Xml::Schema::XmlSchemaType xmlType, int64_t value) ;

/// @brief Method .ctor addr 0x2732604 size 0x88 virtual false final false
 void _ctor(System::Xml::Schema::XmlSchemaType xmlType, int64_t value) ;

// Ctor Parameters [CppParam { name: "xmlType", ty: "System::Xml::Schema::XmlSchemaType", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }]
explicit XmlAtomicValue(System::Xml::Schema::XmlSchemaType xmlType, ::StringW value) ;

/// @brief Method .ctor addr 0x273268c size 0xa4 virtual false final false
 void _ctor(System::Xml::Schema::XmlSchemaType xmlType, ::StringW value) ;

// Ctor Parameters [CppParam { name: "xmlType", ty: "System::Xml::Schema::XmlSchemaType", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "nsResolver", ty: "System::Xml::IXmlNamespaceResolver", modifiers: "", def_value: None }]
explicit XmlAtomicValue(System::Xml::Schema::XmlSchemaType xmlType, ::StringW value, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method .ctor addr 0x2732730 size 0x1ac virtual false final false
 void _ctor(System::Xml::Schema::XmlSchemaType xmlType, ::StringW value, System::Xml::IXmlNamespaceResolver nsResolver) ;

// Ctor Parameters [CppParam { name: "xmlType", ty: "System::Xml::Schema::XmlSchemaType", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit XmlAtomicValue(System::Xml::Schema::XmlSchemaType xmlType, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method .ctor addr 0x2732a88 size 0xa4 virtual false final false
 void _ctor(System::Xml::Schema::XmlSchemaType xmlType, ::bs_hook::Il2CppWrapperType value) ;

// Ctor Parameters [CppParam { name: "xmlType", ty: "System::Xml::Schema::XmlSchemaType", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "nsResolver", ty: "System::Xml::IXmlNamespaceResolver", modifiers: "", def_value: None }]
explicit XmlAtomicValue(System::Xml::Schema::XmlSchemaType xmlType, ::bs_hook::Il2CppWrapperType value, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method .ctor addr 0x2732b2c size 0x1f0 virtual false final false
 void _ctor(System::Xml::Schema::XmlSchemaType xmlType, ::bs_hook::Il2CppWrapperType value, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method System.ICloneable.Clone addr 0x2732d1c size 0x4 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ICloneable_Clone() ;

/// @brief Method get_XmlType addr 0x2732d20 size 0x8 virtual true final false
 System::Xml::Schema::XmlSchemaType get_XmlType() ;

/// @brief Method get_ValueType addr 0x2732d28 size 0x28 virtual true final false
 System::Type get_ValueType() ;

/// @brief Method get_TypedValue addr 0x2732d50 size 0x1c4 virtual true final false
 ::bs_hook::Il2CppWrapperType get_TypedValue() ;

/// @brief Method get_ValueAsBoolean addr 0x2732f8c size 0xcc virtual true final false
 bool get_ValueAsBoolean() ;

/// @brief Method get_ValueAsDateTime addr 0x2733058 size 0xe0 virtual true final false
 System::DateTime get_ValueAsDateTime() ;

/// @brief Method get_ValueAsDouble addr 0x2733138 size 0xdc virtual true final false
 double_t get_ValueAsDouble() ;

/// @brief Method get_ValueAsInt addr 0x2733214 size 0xd4 virtual true final false
 int32_t get_ValueAsInt() ;

/// @brief Method get_ValueAsLong addr 0x27332e8 size 0xe0 virtual true final false
 int64_t get_ValueAsLong() ;

/// @brief Method ValueAs addr 0x27333c8 size 0x230 virtual true final false
 ::bs_hook::Il2CppWrapperType ValueAs(System::Type type, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method get_Value addr 0x27335f8 size 0xf4 virtual true final false
 ::StringW get_Value() ;

/// @brief Method ToString addr 0x27336ec size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method GetPrefixFromQName addr 0x2732990 size 0xcc virtual false final false
 ::StringW GetPrefixFromQName(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName, "System.Xml.Schema", "XmlAtomicValue/NamespacePrefixForQName");
NEED_NO_BOX(System::Xml::Schema::XmlAtomicValue);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlAtomicValue, "System.Xml.Schema", "XmlAtomicValue");
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__Union, "System.Xml.Schema", "XmlAtomicValue/Union");
