#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
struct Guid;
}
namespace System {
class Type;
}
namespace System::ComponentModel {
class IExtenderProvider;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace System::Collections {
class IDictionary;
}
namespace System::ComponentModel {
class EventDescriptor;
}
namespace System::ComponentModel {
class EventDescriptorCollection;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::ComponentModel {
class System__ComponentModel__ReflectTypeDescriptionProvider__ReflectedTypeData;
}
namespace System::Collections {
class Hashtable;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System {
class Attribute;
}
namespace System::Collections {
class ICollection;
}
namespace System::ComponentModel {
class AttributeCollection;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class ICustomTypeDescriptor;
}
namespace System::ComponentModel {
class EditorAttribute;
}
// Forward declare root types
namespace System::ComponentModel {
class ReflectTypeDescriptionProvider;
}
namespace System::ComponentModel {
class System__ComponentModel__ReflectTypeDescriptionProvider__ReflectedTypeData;
}
// Type: ::ReflectedTypeData
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8327))
// CS Name: System.ComponentModel.ReflectTypeDescriptionProvider::ReflectedTypeData
class CORDL_TYPE System__ComponentModel__ReflectTypeDescriptionProvider__ReflectedTypeData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~System__ComponentModel__ReflectTypeDescriptionProvider__ReflectedTypeData() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__ReflectTypeDescriptionProvider__ReflectedTypeData", modifiers: " const&", def_value: None }]
constexpr System__ComponentModel__ReflectTypeDescriptionProvider__ReflectedTypeData(System__ComponentModel__ReflectTypeDescriptionProvider__ReflectedTypeData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__ReflectTypeDescriptionProvider__ReflectedTypeData", modifiers: "&&", def_value: None }]
constexpr System__ComponentModel__ReflectTypeDescriptionProvider__ReflectedTypeData(System__ComponentModel__ReflectTypeDescriptionProvider__ReflectedTypeData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__ComponentModel__ReflectTypeDescriptionProvider__ReflectedTypeData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__ComponentModel__ReflectTypeDescriptionProvider__ReflectedTypeData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__ComponentModel__ReflectTypeDescriptionProvider__ReflectedTypeData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__ComponentModel__ReflectTypeDescriptionProvider__ReflectedTypeData& operator=(System__ComponentModel__ReflectTypeDescriptionProvider__ReflectedTypeData&& o) noexcept = default;
  constexpr System__ComponentModel__ReflectTypeDescriptionProvider__ReflectedTypeData& operator=(System__ComponentModel__ReflectTypeDescriptionProvider__ReflectedTypeData const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get__type, put=__set__type))  _type;

constexpr void __set__type(System::Type value) ;

constexpr System::Type __get__type() const;

 System::ComponentModel::AttributeCollection __declspec(property(get=__get__attributes, put=__set__attributes))  _attributes;

constexpr void __set__attributes(System::ComponentModel::AttributeCollection value) ;

constexpr System::ComponentModel::AttributeCollection __get__attributes() const;

 System::ComponentModel::EventDescriptorCollection __declspec(property(get=__get__events, put=__set__events))  _events;

constexpr void __set__events(System::ComponentModel::EventDescriptorCollection value) ;

constexpr System::ComponentModel::EventDescriptorCollection __get__events() const;

 System::ComponentModel::PropertyDescriptorCollection __declspec(property(get=__get__properties, put=__set__properties))  _properties;

constexpr void __set__properties(System::ComponentModel::PropertyDescriptorCollection value) ;

constexpr System::ComponentModel::PropertyDescriptorCollection __get__properties() const;

 System::ComponentModel::TypeConverter __declspec(property(get=__get__converter, put=__set__converter))  _converter;

constexpr void __set__converter(System::ComponentModel::TypeConverter value) ;

constexpr System::ComponentModel::TypeConverter __get__converter() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__editors, put=__set__editors))  _editors;

constexpr void __set__editors(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get__editors() const;

 ::ArrayW<System::Type> __declspec(property(get=__get__editorTypes, put=__set__editorTypes))  _editorTypes;

constexpr void __set__editorTypes(::ArrayW<System::Type> value) ;

constexpr ::ArrayW<System::Type> __get__editorTypes() const;

 int32_t __declspec(property(get=__get__editorCount, put=__set__editorCount))  _editorCount;

constexpr void __set__editorCount(int32_t value) ;

constexpr int32_t __get__editorCount() const;


// Properties

 bool __declspec(property(get=get_IsPopulated))  IsPopulated;


// Methods

static System::ComponentModel::System__ComponentModel__ReflectTypeDescriptionProvider__ReflectedTypeData New_ctor(System::Type type) ;

/// @brief Method .ctor addr 0x2796898 size 0x28 virtual false final false
 void _ctor(System::Type type) ;

/// @brief Method get_IsPopulated addr 0x2796a08 size 0x1c virtual false final false
 bool get_IsPopulated() ;

/// @brief Method GetAttributes addr 0x2791eb0 size 0x540 virtual false final false
 System::ComponentModel::AttributeCollection GetAttributes() ;

/// @brief Method GetClassName addr 0x2792788 size 0x24 virtual false final false
 ::StringW GetClassName(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetComponentName addr 0x27927d0 size 0x1ac virtual false final false
 ::StringW GetComponentName(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetConverter addr 0x27929a0 size 0x468 virtual false final false
 System::ComponentModel::TypeConverter GetConverter(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetDefaultEvent addr 0x2792e2c size 0x19c virtual false final false
 System::ComponentModel::EventDescriptor GetDefaultEvent(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetDefaultProperty addr 0x2792fec size 0x19c virtual false final false
 System::ComponentModel::PropertyDescriptor GetDefaultProperty(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetEditor addr 0x27931bc size 0x5b0 virtual false final false
 ::bs_hook::Il2CppWrapperType GetEditor(::bs_hook::Il2CppWrapperType instance, System::Type editorBaseType) ;

/// @brief Method GetEditorAttribute addr 0x2798d70 size 0x3c8 virtual false final false
static System::ComponentModel::EditorAttribute GetEditorAttribute(System::ComponentModel::AttributeCollection attributes, System::Type editorBaseType) ;

/// @brief Method GetEvents addr 0x2793ba4 size 0x2fc virtual false final false
 System::ComponentModel::EventDescriptorCollection GetEvents() ;

/// @brief Method GetProperties addr 0x2796594 size 0x2fc virtual false final false
 System::ComponentModel::PropertyDescriptorCollection GetProperties() ;

/// @brief Method GetTypeFromName addr 0x279884c size 0x1a8 virtual false final false
 System::Type GetTypeFromName(::StringW typeName) ;

/// @brief Method Refresh addr 0x2797b68 size 0x18 virtual false final false
 void Refresh() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
// Type: System.ComponentModel::ReflectTypeDescriptionProvider
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8311))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8328))
// CS Name: System.ComponentModel.ReflectTypeDescriptionProvider
class CORDL_TYPE ReflectTypeDescriptionProvider : public System::ComponentModel::TypeDescriptionProvider {
public:
// Declarations
using ReflectedTypeData = System::ComponentModel::System__ComponentModel__ReflectTypeDescriptionProvider__ReflectedTypeData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ReflectTypeDescriptionProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectTypeDescriptionProvider", modifiers: " const&", def_value: None }]
constexpr ReflectTypeDescriptionProvider(ReflectTypeDescriptionProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectTypeDescriptionProvider", modifiers: "&&", def_value: None }]
constexpr ReflectTypeDescriptionProvider(ReflectTypeDescriptionProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReflectTypeDescriptionProvider(void* ptr) noexcept : System::ComponentModel::TypeDescriptionProvider(ptr) {
}


  constexpr ReflectTypeDescriptionProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReflectTypeDescriptionProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReflectTypeDescriptionProvider& operator=(ReflectTypeDescriptionProvider&& o) noexcept = default;
  constexpr ReflectTypeDescriptionProvider& operator=(ReflectTypeDescriptionProvider const& o) noexcept = default;
                


// Fields

 System::Collections::Hashtable __declspec(property(get=__get__typeData, put=__set__typeData))  _typeData;

constexpr void __set__typeData(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get__typeData() const;

static ::ArrayW<System::Type> __declspec(property(get=__get__typeConstructor, put=__set__typeConstructor))  _typeConstructor;

static void __set__typeConstructor(::ArrayW<System::Type> value) ;

static ::ArrayW<System::Type> __get__typeConstructor() ;

static System::Collections::Hashtable __declspec(property(get=__get__editorTables, put=__set__editorTables))  _editorTables;

static void __set__editorTables(System::Collections::Hashtable value) ;

static System::Collections::Hashtable __get__editorTables() ;

static System::Collections::Hashtable __declspec(property(get=__get__intrinsicTypeConverters, put=__set__intrinsicTypeConverters))  _intrinsicTypeConverters;

static void __set__intrinsicTypeConverters(System::Collections::Hashtable value) ;

static System::Collections::Hashtable __get__intrinsicTypeConverters() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__intrinsicReferenceKey, put=__set__intrinsicReferenceKey))  _intrinsicReferenceKey;

static void __set__intrinsicReferenceKey(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get__intrinsicReferenceKey() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__intrinsicNullableKey, put=__set__intrinsicNullableKey))  _intrinsicNullableKey;

static void __set__intrinsicNullableKey(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get__intrinsicNullableKey() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__dictionaryKey, put=__set__dictionaryKey))  _dictionaryKey;

static void __set__dictionaryKey(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get__dictionaryKey() ;

static System::Collections::Hashtable __declspec(property(get=__get__propertyCache, put=__set__propertyCache))  _propertyCache;

static void __set__propertyCache(System::Collections::Hashtable value) ;

static System::Collections::Hashtable __get__propertyCache() ;

static System::Collections::Hashtable __declspec(property(get=__get__eventCache, put=__set__eventCache))  _eventCache;

static void __set__eventCache(System::Collections::Hashtable value) ;

static System::Collections::Hashtable __get__eventCache() ;

static System::Collections::Hashtable __declspec(property(get=__get__attributeCache, put=__set__attributeCache))  _attributeCache;

static void __set__attributeCache(System::Collections::Hashtable value) ;

static System::Collections::Hashtable __get__attributeCache() ;

static System::Collections::Hashtable __declspec(property(get=__get__extendedPropertyCache, put=__set__extendedPropertyCache))  _extendedPropertyCache;

static void __set__extendedPropertyCache(System::Collections::Hashtable value) ;

static System::Collections::Hashtable __get__extendedPropertyCache() ;

static System::Guid __declspec(property(get=__get__extenderProviderKey, put=__set__extenderProviderKey))  _extenderProviderKey;

static void __set__extenderProviderKey(System::Guid value) ;

static System::Guid __get__extenderProviderKey() ;

static System::Guid __declspec(property(get=__get__extenderPropertiesKey, put=__set__extenderPropertiesKey))  _extenderPropertiesKey;

static void __set__extenderPropertiesKey(System::Guid value) ;

static System::Guid __get__extenderPropertiesKey() ;

static System::Guid __declspec(property(get=__get__extenderProviderPropertiesKey, put=__set__extenderProviderPropertiesKey))  _extenderProviderPropertiesKey;

static void __set__extenderProviderPropertiesKey(System::Guid value) ;

static System::Guid __get__extenderProviderPropertiesKey() ;

static ::ArrayW<System::Type> __declspec(property(get=__get__skipInterfaceAttributeList, put=__set__skipInterfaceAttributeList))  _skipInterfaceAttributeList;

static void __set__skipInterfaceAttributeList(::ArrayW<System::Type> value) ;

static ::ArrayW<System::Type> __get__skipInterfaceAttributeList() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__internalSyncObject, put=__set__internalSyncObject))  _internalSyncObject;

static void __set__internalSyncObject(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get__internalSyncObject() ;


// Properties

static System::Collections::Hashtable __declspec(property(get=get_IntrinsicTypeConverters))  IntrinsicTypeConverters;


// Methods

static System::ComponentModel::ReflectTypeDescriptionProvider New_ctor() ;

/// @brief Method .ctor addr 0x2791010 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_IntrinsicTypeConverters addr 0x2791018 size 0xb00 virtual false final false
static System::Collections::Hashtable get_IntrinsicTypeConverters() ;

/// @brief Method CreateInstance addr 0x2791b18 size 0xfc virtual false final false
static ::bs_hook::Il2CppWrapperType CreateInstance(System::Type objectType, System::Type callingType) ;

/// @brief Method GetAttributes addr 0x2791c14 size 0x1c virtual false final false
 System::ComponentModel::AttributeCollection GetAttributes(System::Type type) ;

/// @brief Method GetCache addr 0x27923f0 size 0x368 virtual true final false
 System::Collections::IDictionary GetCache(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetClassName addr 0x2792758 size 0x30 virtual false final false
 ::StringW GetClassName(System::Type type) ;

/// @brief Method GetComponentName addr 0x27927ac size 0x24 virtual false final false
 ::StringW GetComponentName(System::Type type, ::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetConverter addr 0x279297c size 0x24 virtual false final false
 System::ComponentModel::TypeConverter GetConverter(System::Type type, ::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetDefaultEvent addr 0x2792e08 size 0x24 virtual false final false
 System::ComponentModel::EventDescriptor GetDefaultEvent(System::Type type, ::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetDefaultProperty addr 0x2792fc8 size 0x24 virtual false final false
 System::ComponentModel::PropertyDescriptor GetDefaultProperty(System::Type type, ::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetEditor addr 0x2793188 size 0x34 virtual false final false
 ::bs_hook::Il2CppWrapperType GetEditor(System::Type type, ::bs_hook::Il2CppWrapperType instance, System::Type editorBaseType) ;

/// @brief Method GetEditorTable addr 0x279376c size 0x41c virtual false final false
static System::Collections::Hashtable GetEditorTable(System::Type editorBaseType) ;

/// @brief Method GetEvents addr 0x2793b88 size 0x1c virtual false final false
 System::ComponentModel::EventDescriptorCollection GetEvents(System::Type type) ;

/// @brief Method GetExtendedAttributes addr 0x2793ea0 size 0x58 virtual false final false
 System::ComponentModel::AttributeCollection GetExtendedAttributes(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetExtendedClassName addr 0x2793ef8 size 0x2c virtual false final false
 ::StringW GetExtendedClassName(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetExtendedComponentName addr 0x2793f24 size 0x3c virtual false final false
 ::StringW GetExtendedComponentName(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetExtendedConverter addr 0x2793f60 size 0x3c virtual false final false
 System::ComponentModel::TypeConverter GetExtendedConverter(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetExtendedDefaultEvent addr 0x2793f9c size 0x8 virtual false final false
 System::ComponentModel::EventDescriptor GetExtendedDefaultEvent(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetExtendedDefaultProperty addr 0x2793fa4 size 0x8 virtual false final false
 System::ComponentModel::PropertyDescriptor GetExtendedDefaultProperty(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetExtendedEditor addr 0x2793fac size 0x44 virtual false final false
 ::bs_hook::Il2CppWrapperType GetExtendedEditor(::bs_hook::Il2CppWrapperType instance, System::Type editorBaseType) ;

/// @brief Method GetExtendedEvents addr 0x2793ff0 size 0x58 virtual false final false
 System::ComponentModel::EventDescriptorCollection GetExtendedEvents(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetExtendedProperties addr 0x2794048 size 0x544 virtual false final false
 System::ComponentModel::PropertyDescriptorCollection GetExtendedProperties(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetExtenderProviders addr 0x2795540 size 0x48c virtual true final false
 ::ArrayW<System::ComponentModel::IExtenderProvider> GetExtenderProviders(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetExtenders addr 0x27959cc size 0xb14 virtual false final false
static ::ArrayW<System::ComponentModel::IExtenderProvider> GetExtenders(System::Collections::ICollection components, ::bs_hook::Il2CppWrapperType instance, System::Collections::IDictionary cache) ;

/// @brief Method GetExtendedPropertyOwner addr 0x27964e0 size 0x2c virtual false final false
 ::bs_hook::Il2CppWrapperType GetExtendedPropertyOwner(::bs_hook::Il2CppWrapperType instance, System::ComponentModel::PropertyDescriptor pd) ;

/// @brief Method GetExtendedTypeDescriptor addr 0x2796570 size 0x8 virtual true final false
 System::ComponentModel::ICustomTypeDescriptor GetExtendedTypeDescriptor(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetProperties addr 0x2796578 size 0x1c virtual false final false
 System::ComponentModel::PropertyDescriptorCollection GetProperties(System::Type type) ;

/// @brief Method GetPropertyOwner addr 0x279650c size 0x64 virtual false final false
 ::bs_hook::Il2CppWrapperType GetPropertyOwner(System::Type type, ::bs_hook::Il2CppWrapperType instance, System::ComponentModel::PropertyDescriptor pd) ;

/// @brief Method GetReflectionType addr 0x2796890 size 0x8 virtual true final false
 System::Type GetReflectionType(System::Type objectType, ::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetTypeData addr 0x2791c30 size 0x280 virtual false final false
 System::ComponentModel::System__ComponentModel__ReflectTypeDescriptionProvider__ReflectedTypeData GetTypeData(System::Type type, bool createIfNeeded) ;

/// @brief Method GetTypeDescriptor addr 0x27968c0 size 0x8 virtual true final false
 System::ComponentModel::ICustomTypeDescriptor GetTypeDescriptor(System::Type objectType, ::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetTypeFromName addr 0x27968c8 size 0x110 virtual false final false
static System::Type GetTypeFromName(::StringW typeName) ;

/// @brief Method IsPopulated addr 0x27969d8 size 0x30 virtual false final false
 bool IsPopulated(System::Type type) ;

/// @brief Method ReflectGetAttributes addr 0x2796a24 size 0x450 virtual false final false
static ::ArrayW<System::Attribute> ReflectGetAttributes(System::Type type) ;

/// @brief Method ReflectGetAttributes addr 0x278506c size 0x450 virtual false final false
static ::ArrayW<System::Attribute> ReflectGetAttributes(System::Reflection::MemberInfo member) ;

/// @brief Method ReflectGetEvents addr 0x2796e74 size 0x6b4 virtual false final false
static ::ArrayW<System::ComponentModel::EventDescriptor> ReflectGetEvents(System::Type type) ;

/// @brief Method ReflectGetExtendedProperties addr 0x27945f8 size 0xf48 virtual false final false
static ::ArrayW<System::ComponentModel::PropertyDescriptor> ReflectGetExtendedProperties(System::ComponentModel::IExtenderProvider provider) ;

/// @brief Method ReflectGetProperties addr 0x2797528 size 0x614 virtual false final false
static ::ArrayW<System::ComponentModel::PropertyDescriptor> ReflectGetProperties(System::Type type) ;

/// @brief Method Refresh addr 0x2797b3c size 0x2c virtual false final false
 void Refresh(System::Type type) ;

/// @brief Method SearchIntrinsicTable addr 0x2797b80 size 0x990 virtual false final false
static ::bs_hook::Il2CppWrapperType SearchIntrinsicTable(System::Collections::Hashtable table, System::Type callingType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::ReflectTypeDescriptionProvider);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::ReflectTypeDescriptionProvider, "System.ComponentModel", "ReflectTypeDescriptionProvider");
NEED_NO_BOX(System::ComponentModel::System__ComponentModel__ReflectTypeDescriptionProvider__ReflectedTypeData);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::System__ComponentModel__ReflectTypeDescriptionProvider__ReflectedTypeData, "System.ComponentModel", "ReflectTypeDescriptionProvider/ReflectedTypeData");
