#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Attribute;
}
namespace System {
class Type;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class ICollection;
}
namespace System {
class Array;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System {
class Exception;
}
namespace System::Collections {
class IDictionary;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace System::ComponentModel {
class System__ComponentModel__TypeConverter__SimplePropertyDescriptor;
}
namespace System::ComponentModel {
class System__ComponentModel__TypeConverter__StandardValuesCollection;
}
namespace System::ComponentModel {
class TypeConverter;
}
// Type: ::SimplePropertyDescriptor
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8295))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8329))
// CS Name: System.ComponentModel.TypeConverter::SimplePropertyDescriptor
class CORDL_TYPE System__ComponentModel__TypeConverter__SimplePropertyDescriptor : public System::ComponentModel::PropertyDescriptor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~System__ComponentModel__TypeConverter__SimplePropertyDescriptor() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__TypeConverter__SimplePropertyDescriptor", modifiers: " const&", def_value: None }]
constexpr System__ComponentModel__TypeConverter__SimplePropertyDescriptor(System__ComponentModel__TypeConverter__SimplePropertyDescriptor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__TypeConverter__SimplePropertyDescriptor", modifiers: "&&", def_value: None }]
constexpr System__ComponentModel__TypeConverter__SimplePropertyDescriptor(System__ComponentModel__TypeConverter__SimplePropertyDescriptor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__ComponentModel__TypeConverter__SimplePropertyDescriptor(void* ptr) noexcept : System::ComponentModel::PropertyDescriptor(ptr) {
}


  constexpr System__ComponentModel__TypeConverter__SimplePropertyDescriptor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__ComponentModel__TypeConverter__SimplePropertyDescriptor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__ComponentModel__TypeConverter__SimplePropertyDescriptor& operator=(System__ComponentModel__TypeConverter__SimplePropertyDescriptor&& o) noexcept = default;
  constexpr System__ComponentModel__TypeConverter__SimplePropertyDescriptor& operator=(System__ComponentModel__TypeConverter__SimplePropertyDescriptor const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get_componentType, put=__set_componentType))  componentType;

constexpr void __set_componentType(System::Type value) ;

constexpr System::Type __get_componentType() const;

 System::Type __declspec(property(get=__get_propertyType, put=__set_propertyType))  propertyType;

constexpr void __set_propertyType(System::Type value) ;

constexpr System::Type __get_propertyType() const;


// Properties

 System::Type __declspec(property(get=get_ComponentType))  ComponentType;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 System::Type __declspec(property(get=get_PropertyType))  PropertyType;


// Methods

// Ctor Parameters [CppParam { name: "componentType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "propertyType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "attributes", ty: "::ArrayW<System::Attribute>", modifiers: "", def_value: None }]
explicit System__ComponentModel__TypeConverter__SimplePropertyDescriptor(System::Type componentType, ::StringW name, System::Type propertyType, ::ArrayW<System::Attribute> attributes) ;

/// @brief Method .ctor addr 0x2799c20 size 0x34 virtual false final false
 void _ctor(System::Type componentType, ::StringW name, System::Type propertyType, ::ArrayW<System::Attribute> attributes) ;

/// @brief Method get_ComponentType addr 0x2799c54 size 0x8 virtual true final false
 System::Type get_ComponentType() ;

/// @brief Method get_IsReadOnly addr 0x2799c5c size 0x84 virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method get_PropertyType addr 0x2799ce0 size 0x8 virtual true final false
 System::Type get_PropertyType() ;

/// @brief Method CanResetValue addr 0x2799ce8 size 0x144 virtual true final false
 bool CanResetValue(::bs_hook::Il2CppWrapperType component) ;

/// @brief Method ResetValue addr 0x2799e2c size 0x12c virtual true final false
 void ResetValue(::bs_hook::Il2CppWrapperType component) ;

/// @brief Method ShouldSerializeValue addr 0x2799f58 size 0x8 virtual true final false
 bool ShouldSerializeValue(::bs_hook::Il2CppWrapperType component) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
// Type: ::StandardValuesCollection
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8330))
// CS Name: System.ComponentModel.TypeConverter::StandardValuesCollection
class CORDL_TYPE System__ComponentModel__TypeConverter__StandardValuesCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__ComponentModel__TypeConverter__StandardValuesCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__TypeConverter__StandardValuesCollection", modifiers: " const&", def_value: None }]
constexpr System__ComponentModel__TypeConverter__StandardValuesCollection(System__ComponentModel__TypeConverter__StandardValuesCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__TypeConverter__StandardValuesCollection", modifiers: "&&", def_value: None }]
constexpr System__ComponentModel__TypeConverter__StandardValuesCollection(System__ComponentModel__TypeConverter__StandardValuesCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__ComponentModel__TypeConverter__StandardValuesCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__ComponentModel__TypeConverter__StandardValuesCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__ComponentModel__TypeConverter__StandardValuesCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__ComponentModel__TypeConverter__StandardValuesCollection& operator=(System__ComponentModel__TypeConverter__StandardValuesCollection&& o) noexcept = default;
  constexpr System__ComponentModel__TypeConverter__StandardValuesCollection& operator=(System__ComponentModel__TypeConverter__StandardValuesCollection const& o) noexcept = default;
                


// Fields

 System::Collections::ICollection __declspec(property(get=__get_values, put=__set_values))  values;

constexpr void __set_values(System::Collections::ICollection value) ;

constexpr System::Collections::ICollection __get_values() const;

 System::Array __declspec(property(get=__get_valueArray, put=__set_valueArray))  valueArray;

constexpr void __set_valueArray(System::Array value) ;

constexpr System::Array __get_valueArray() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 int32_t __declspec(property(get=System_Collections_ICollection_get_Count))  System_Collections_ICollection_Count;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

// Ctor Parameters [CppParam { name: "values", ty: "System::Collections::ICollection", modifiers: "", def_value: None }]
explicit System__ComponentModel__TypeConverter__StandardValuesCollection(System::Collections::ICollection values) ;

/// @brief Method .ctor addr 0x2783fec size 0xb0 virtual false final false
 void _ctor(System::Collections::ICollection values) ;

/// @brief Method get_Count addr 0x2799f60 size 0xbc virtual false final false
 int32_t get_Count() ;

/// @brief Method CopyTo addr 0x279a01c size 0xb8 virtual false final false
 void CopyTo(System::Array array, int32_t index) ;

/// @brief Method GetEnumerator addr 0x279a0d4 size 0xa0 virtual false final false
 System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method System.Collections.ICollection.get_Count addr 0x279a174 size 0x4 virtual true final true
 int32_t System_Collections_ICollection_get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x279a178 size 0x8 virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x279a180 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x279a188 size 0x4 virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t index) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x279a18c size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
// Type: System.ComponentModel::TypeConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8331))
// CS Name: System.ComponentModel.TypeConverter
class CORDL_TYPE TypeConverter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using StandardValuesCollection = System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection;

using SimplePropertyDescriptor = System::ComponentModel::System__ComponentModel__TypeConverter__SimplePropertyDescriptor;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TypeConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeConverter", modifiers: " const&", def_value: None }]
constexpr TypeConverter(TypeConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeConverter", modifiers: "&&", def_value: None }]
constexpr TypeConverter(TypeConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeConverter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TypeConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeConverter& operator=(TypeConverter&& o) noexcept = default;
  constexpr TypeConverter& operator=(TypeConverter const& o) noexcept = default;
                


// Fields

/// @brief Field s_UseCompatibleTypeConverterBehavior offset 0
static constexpr ::ConstString  s_UseCompatibleTypeConverterBehavior{u"UseCompatibleTypeConverterBehavior"};

static bool __declspec(property(get=__get_useCompatibleTypeConversion, put=__set_useCompatibleTypeConversion))  useCompatibleTypeConversion;

static void __set_useCompatibleTypeConversion(bool value) ;

static bool __get_useCompatibleTypeConversion() ;


// Properties

static bool __declspec(property(get=get_UseCompatibleTypeConversion))  UseCompatibleTypeConversion;


// Methods

/// @brief Method get_UseCompatibleTypeConversion addr 0x2799138 size 0x50 virtual false final false
static bool get_UseCompatibleTypeConversion() ;

/// @brief Method CanConvertFrom addr 0x2799188 size 0x14 virtual false final false
 bool CanConvertFrom(System::Type sourceType) ;

/// @brief Method CanConvertFrom addr 0x2782d24 size 0x88 virtual true final false
 bool CanConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Type sourceType) ;

/// @brief Method CanConvertTo addr 0x279919c size 0x14 virtual false final false
 bool CanConvertTo(System::Type destinationType) ;

/// @brief Method CanConvertTo addr 0x2785eec size 0x88 virtual true final false
 bool CanConvertTo(System::ComponentModel::ITypeDescriptorContext context, System::Type destinationType) ;

/// @brief Method ConvertFrom addr 0x27991b0 size 0x7c virtual false final false
 ::bs_hook::Il2CppWrapperType ConvertFrom(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ConvertFrom addr 0x27830e4 size 0x6c virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ConvertFromInvariantString addr 0x2799360 size 0x7c virtual false final false
 ::bs_hook::Il2CppWrapperType ConvertFromInvariantString(::StringW text) ;

/// @brief Method ConvertFromInvariantString addr 0x27993e8 size 0x80 virtual false final false
 ::bs_hook::Il2CppWrapperType ConvertFromInvariantString(System::ComponentModel::ITypeDescriptorContext context, ::StringW text) ;

/// @brief Method ConvertFromString addr 0x2799468 size 0x18 virtual false final false
 ::bs_hook::Il2CppWrapperType ConvertFromString(::StringW text) ;

/// @brief Method ConvertFromString addr 0x2799480 size 0x80 virtual false final false
 ::bs_hook::Il2CppWrapperType ConvertFromString(System::ComponentModel::ITypeDescriptorContext context, ::StringW text) ;

/// @brief Method ConvertFromString addr 0x27993dc size 0xc virtual false final false
 ::bs_hook::Il2CppWrapperType ConvertFromString(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::StringW text) ;

/// @brief Method ConvertTo addr 0x2799500 size 0x1c virtual false final false
 ::bs_hook::Il2CppWrapperType ConvertTo(::bs_hook::Il2CppWrapperType value, System::Type destinationType) ;

/// @brief Method ConvertTo addr 0x278359c size 0x238 virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertTo(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value, System::Type destinationType) ;

/// @brief Method ConvertToInvariantString addr 0x279969c size 0x74 virtual false final false
 ::StringW ConvertToInvariantString(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ConvertToInvariantString addr 0x278a084 size 0x78 virtual false final false
 ::StringW ConvertToInvariantString(System::ComponentModel::ITypeDescriptorContext context, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ConvertToString addr 0x27841c4 size 0x100 virtual false final false
 ::StringW ConvertToString(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ConvertToString addr 0x27997ec size 0x104 virtual false final false
 ::StringW ConvertToString(System::ComponentModel::ITypeDescriptorContext context, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ConvertToString addr 0x2799710 size 0xdc virtual false final false
 ::StringW ConvertToString(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method CreateInstance addr 0x27998f0 size 0x14 virtual false final false
 ::bs_hook::Il2CppWrapperType CreateInstance(System::Collections::IDictionary propertyValues) ;

/// @brief Method CreateInstance addr 0x2799904 size 0x8 virtual true final false
 ::bs_hook::Il2CppWrapperType CreateInstance(System::ComponentModel::ITypeDescriptorContext context, System::Collections::IDictionary propertyValues) ;

/// @brief Method GetConvertFromException addr 0x279922c size 0x134 virtual false final false
 System::Exception GetConvertFromException(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetConvertToException addr 0x279951c size 0x180 virtual false final false
 System::Exception GetConvertToException(::bs_hook::Il2CppWrapperType value, System::Type destinationType) ;

/// @brief Method GetCreateInstanceSupported addr 0x279990c size 0x10 virtual false final false
 bool GetCreateInstanceSupported() ;

/// @brief Method GetCreateInstanceSupported addr 0x279991c size 0x8 virtual true final false
 bool GetCreateInstanceSupported(System::ComponentModel::ITypeDescriptorContext context) ;

/// @brief Method GetProperties addr 0x2799924 size 0xc virtual false final false
 System::ComponentModel::PropertyDescriptorCollection GetProperties(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetProperties addr 0x2799930 size 0xf0 virtual false final false
 System::ComponentModel::PropertyDescriptorCollection GetProperties(System::ComponentModel::ITypeDescriptorContext context, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetProperties addr 0x2799a20 size 0x8 virtual true final false
 System::ComponentModel::PropertyDescriptorCollection GetProperties(System::ComponentModel::ITypeDescriptorContext context, ::bs_hook::Il2CppWrapperType value, ::ArrayW<System::Attribute> attributes) ;

/// @brief Method GetPropertiesSupported addr 0x2799a28 size 0x10 virtual false final false
 bool GetPropertiesSupported() ;

/// @brief Method GetPropertiesSupported addr 0x2799a38 size 0x8 virtual true final false
 bool GetPropertiesSupported(System::ComponentModel::ITypeDescriptorContext context) ;

/// @brief Method GetStandardValues addr 0x2799a40 size 0x10 virtual false final false
 System::Collections::ICollection GetStandardValues() ;

/// @brief Method GetStandardValues addr 0x2799a50 size 0x8 virtual true final false
 System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection GetStandardValues(System::ComponentModel::ITypeDescriptorContext context) ;

/// @brief Method GetStandardValuesExclusive addr 0x2799a58 size 0x14 virtual false final false
 bool GetStandardValuesExclusive() ;

/// @brief Method GetStandardValuesExclusive addr 0x2799a6c size 0x8 virtual true final false
 bool GetStandardValuesExclusive(System::ComponentModel::ITypeDescriptorContext context) ;

/// @brief Method GetStandardValuesSupported addr 0x2799a74 size 0x14 virtual false final false
 bool GetStandardValuesSupported() ;

/// @brief Method GetStandardValuesSupported addr 0x2799a88 size 0x8 virtual true final false
 bool GetStandardValuesSupported(System::ComponentModel::ITypeDescriptorContext context) ;

/// @brief Method IsValid addr 0x2799a90 size 0x18 virtual false final false
 bool IsValid(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method IsValid addr 0x2799aa8 size 0x140 virtual true final false
 bool IsValid(System::ComponentModel::ITypeDescriptorContext context, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method SortProperties addr 0x2799be8 size 0x38 virtual false final false
 System::ComponentModel::PropertyDescriptorCollection SortProperties(System::ComponentModel::PropertyDescriptorCollection props, ::ArrayW<::StringW> names) ;

// Ctor Parameters []
explicit TypeConverter() ;

/// @brief Method .ctor addr 0x2782c6c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::System__ComponentModel__TypeConverter__SimplePropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::System__ComponentModel__TypeConverter__SimplePropertyDescriptor, "System.ComponentModel", "TypeConverter/SimplePropertyDescriptor");
NEED_NO_BOX(System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection, "System.ComponentModel", "TypeConverter/StandardValuesCollection");
NEED_NO_BOX(System::ComponentModel::TypeConverter);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::TypeConverter, "System.ComponentModel", "TypeConverter");
