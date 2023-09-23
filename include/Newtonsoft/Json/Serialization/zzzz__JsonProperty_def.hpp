#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Type;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
namespace Newtonsoft::Json {
struct ObjectCreationHandling;
}
namespace Newtonsoft::Json {
struct Required;
}
namespace Newtonsoft::Json {
struct DefaultValueHandling;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Newtonsoft::Json {
struct TypeNameHandling;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
struct NullValueHandling;
}
namespace Newtonsoft::Json {
struct ReferenceLoopHandling;
}
namespace Newtonsoft::Json::Serialization {
class IValueProvider;
}
namespace Newtonsoft::Json::Serialization {
class IAttributeProvider;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonProperty;
}
// Type: Newtonsoft.Json.Serialization::JsonProperty
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11887))
// CS Name: Newtonsoft.Json.Serialization.JsonProperty
class CORDL_TYPE JsonProperty : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf8};

virtual ~JsonProperty() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonProperty", modifiers: " const&", def_value: None }]
constexpr JsonProperty(JsonProperty const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonProperty", modifiers: "&&", def_value: None }]
constexpr JsonProperty(JsonProperty&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonProperty(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JsonProperty& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonProperty& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonProperty& operator=(JsonProperty&& o) noexcept = default;
  constexpr JsonProperty& operator=(JsonProperty const& o) noexcept = default;
                


// Fields

 System::Nullable_1<Newtonsoft::Json::Required> __declspec(property(get=__get__required, put=__set__required))  _required;

constexpr void __set__required(System::Nullable_1<Newtonsoft::Json::Required> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::Required> __get__required() const;

 bool __declspec(property(get=__get__hasExplicitDefaultValue, put=__set__hasExplicitDefaultValue))  _hasExplicitDefaultValue;

constexpr void __set__hasExplicitDefaultValue(bool value) ;

constexpr bool __get__hasExplicitDefaultValue() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__defaultValue, put=__set__defaultValue))  _defaultValue;

constexpr void __set__defaultValue(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__defaultValue() const;

 bool __declspec(property(get=__get__hasGeneratedDefaultValue, put=__set__hasGeneratedDefaultValue))  _hasGeneratedDefaultValue;

constexpr void __set__hasGeneratedDefaultValue(bool value) ;

constexpr bool __get__hasGeneratedDefaultValue() const;

 ::StringW __declspec(property(get=__get__propertyName, put=__set__propertyName))  _propertyName;

constexpr void __set__propertyName(::StringW value) ;

constexpr ::StringW __get__propertyName() const;

 bool __declspec(property(get=__get__skipPropertyNameEscape, put=__set__skipPropertyNameEscape))  _skipPropertyNameEscape;

constexpr void __set__skipPropertyNameEscape(bool value) ;

constexpr bool __get__skipPropertyNameEscape() const;

 System::Type __declspec(property(get=__get__propertyType, put=__set__propertyType))  _propertyType;

constexpr void __set__propertyType(System::Type value) ;

constexpr System::Type __get__propertyType() const;

 Newtonsoft::Json::Serialization::JsonContract __declspec(property(get=__get__PropertyContract_k__BackingField, put=__set__PropertyContract_k__BackingField))  _PropertyContract_k__BackingField;

constexpr void __set__PropertyContract_k__BackingField(Newtonsoft::Json::Serialization::JsonContract value) ;

constexpr Newtonsoft::Json::Serialization::JsonContract __get__PropertyContract_k__BackingField() const;

 System::Type __declspec(property(get=__get__DeclaringType_k__BackingField, put=__set__DeclaringType_k__BackingField))  _DeclaringType_k__BackingField;

constexpr void __set__DeclaringType_k__BackingField(System::Type value) ;

constexpr System::Type __get__DeclaringType_k__BackingField() const;

 System::Nullable_1<int32_t> __declspec(property(get=__get__Order_k__BackingField, put=__set__Order_k__BackingField))  _Order_k__BackingField;

constexpr void __set__Order_k__BackingField(System::Nullable_1<int32_t> value) ;

constexpr System::Nullable_1<int32_t> __get__Order_k__BackingField() const;

 ::StringW __declspec(property(get=__get__UnderlyingName_k__BackingField, put=__set__UnderlyingName_k__BackingField))  _UnderlyingName_k__BackingField;

constexpr void __set__UnderlyingName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__UnderlyingName_k__BackingField() const;

 Newtonsoft::Json::Serialization::IValueProvider __declspec(property(get=__get__ValueProvider_k__BackingField, put=__set__ValueProvider_k__BackingField))  _ValueProvider_k__BackingField;

constexpr void __set__ValueProvider_k__BackingField(Newtonsoft::Json::Serialization::IValueProvider value) ;

constexpr Newtonsoft::Json::Serialization::IValueProvider __get__ValueProvider_k__BackingField() const;

 Newtonsoft::Json::Serialization::IAttributeProvider __declspec(property(get=__get__AttributeProvider_k__BackingField, put=__set__AttributeProvider_k__BackingField))  _AttributeProvider_k__BackingField;

constexpr void __set__AttributeProvider_k__BackingField(Newtonsoft::Json::Serialization::IAttributeProvider value) ;

constexpr Newtonsoft::Json::Serialization::IAttributeProvider __get__AttributeProvider_k__BackingField() const;

 Newtonsoft::Json::JsonConverter __declspec(property(get=__get__Converter_k__BackingField, put=__set__Converter_k__BackingField))  _Converter_k__BackingField;

constexpr void __set__Converter_k__BackingField(Newtonsoft::Json::JsonConverter value) ;

constexpr Newtonsoft::Json::JsonConverter __get__Converter_k__BackingField() const;

 Newtonsoft::Json::JsonConverter __declspec(property(get=__get__MemberConverter_k__BackingField, put=__set__MemberConverter_k__BackingField))  _MemberConverter_k__BackingField;

constexpr void __set__MemberConverter_k__BackingField(Newtonsoft::Json::JsonConverter value) ;

constexpr Newtonsoft::Json::JsonConverter __get__MemberConverter_k__BackingField() const;

 bool __declspec(property(get=__get__Ignored_k__BackingField, put=__set__Ignored_k__BackingField))  _Ignored_k__BackingField;

constexpr void __set__Ignored_k__BackingField(bool value) ;

constexpr bool __get__Ignored_k__BackingField() const;

 bool __declspec(property(get=__get__Readable_k__BackingField, put=__set__Readable_k__BackingField))  _Readable_k__BackingField;

constexpr void __set__Readable_k__BackingField(bool value) ;

constexpr bool __get__Readable_k__BackingField() const;

 bool __declspec(property(get=__get__Writable_k__BackingField, put=__set__Writable_k__BackingField))  _Writable_k__BackingField;

constexpr void __set__Writable_k__BackingField(bool value) ;

constexpr bool __get__Writable_k__BackingField() const;

 bool __declspec(property(get=__get__HasMemberAttribute_k__BackingField, put=__set__HasMemberAttribute_k__BackingField))  _HasMemberAttribute_k__BackingField;

constexpr void __set__HasMemberAttribute_k__BackingField(bool value) ;

constexpr bool __get__HasMemberAttribute_k__BackingField() const;

 System::Nullable_1<bool> __declspec(property(get=__get__IsReference_k__BackingField, put=__set__IsReference_k__BackingField))  _IsReference_k__BackingField;

constexpr void __set__IsReference_k__BackingField(System::Nullable_1<bool> value) ;

constexpr System::Nullable_1<bool> __get__IsReference_k__BackingField() const;

 System::Nullable_1<Newtonsoft::Json::NullValueHandling> __declspec(property(get=__get__NullValueHandling_k__BackingField, put=__set__NullValueHandling_k__BackingField))  _NullValueHandling_k__BackingField;

constexpr void __set__NullValueHandling_k__BackingField(System::Nullable_1<Newtonsoft::Json::NullValueHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::NullValueHandling> __get__NullValueHandling_k__BackingField() const;

 System::Nullable_1<Newtonsoft::Json::DefaultValueHandling> __declspec(property(get=__get__DefaultValueHandling_k__BackingField, put=__set__DefaultValueHandling_k__BackingField))  _DefaultValueHandling_k__BackingField;

constexpr void __set__DefaultValueHandling_k__BackingField(System::Nullable_1<Newtonsoft::Json::DefaultValueHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::DefaultValueHandling> __get__DefaultValueHandling_k__BackingField() const;

 System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> __declspec(property(get=__get__ReferenceLoopHandling_k__BackingField, put=__set__ReferenceLoopHandling_k__BackingField))  _ReferenceLoopHandling_k__BackingField;

constexpr void __set__ReferenceLoopHandling_k__BackingField(System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> __get__ReferenceLoopHandling_k__BackingField() const;

 System::Nullable_1<Newtonsoft::Json::ObjectCreationHandling> __declspec(property(get=__get__ObjectCreationHandling_k__BackingField, put=__set__ObjectCreationHandling_k__BackingField))  _ObjectCreationHandling_k__BackingField;

constexpr void __set__ObjectCreationHandling_k__BackingField(System::Nullable_1<Newtonsoft::Json::ObjectCreationHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::ObjectCreationHandling> __get__ObjectCreationHandling_k__BackingField() const;

 System::Nullable_1<Newtonsoft::Json::TypeNameHandling> __declspec(property(get=__get__TypeNameHandling_k__BackingField, put=__set__TypeNameHandling_k__BackingField))  _TypeNameHandling_k__BackingField;

constexpr void __set__TypeNameHandling_k__BackingField(System::Nullable_1<Newtonsoft::Json::TypeNameHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::TypeNameHandling> __get__TypeNameHandling_k__BackingField() const;

 System::Predicate_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__ShouldSerialize_k__BackingField, put=__set__ShouldSerialize_k__BackingField))  _ShouldSerialize_k__BackingField;

constexpr void __set__ShouldSerialize_k__BackingField(System::Predicate_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Predicate_1<::bs_hook::Il2CppWrapperType> __get__ShouldSerialize_k__BackingField() const;

 System::Predicate_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__ShouldDeserialize_k__BackingField, put=__set__ShouldDeserialize_k__BackingField))  _ShouldDeserialize_k__BackingField;

constexpr void __set__ShouldDeserialize_k__BackingField(System::Predicate_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Predicate_1<::bs_hook::Il2CppWrapperType> __get__ShouldDeserialize_k__BackingField() const;

 System::Predicate_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__GetIsSpecified_k__BackingField, put=__set__GetIsSpecified_k__BackingField))  _GetIsSpecified_k__BackingField;

constexpr void __set__GetIsSpecified_k__BackingField(System::Predicate_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Predicate_1<::bs_hook::Il2CppWrapperType> __get__GetIsSpecified_k__BackingField() const;

 System::Action_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__SetIsSpecified_k__BackingField, put=__set__SetIsSpecified_k__BackingField))  _SetIsSpecified_k__BackingField;

constexpr void __set__SetIsSpecified_k__BackingField(System::Action_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Action_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __get__SetIsSpecified_k__BackingField() const;

 Newtonsoft::Json::JsonConverter __declspec(property(get=__get__ItemConverter_k__BackingField, put=__set__ItemConverter_k__BackingField))  _ItemConverter_k__BackingField;

constexpr void __set__ItemConverter_k__BackingField(Newtonsoft::Json::JsonConverter value) ;

constexpr Newtonsoft::Json::JsonConverter __get__ItemConverter_k__BackingField() const;

 System::Nullable_1<bool> __declspec(property(get=__get__ItemIsReference_k__BackingField, put=__set__ItemIsReference_k__BackingField))  _ItemIsReference_k__BackingField;

constexpr void __set__ItemIsReference_k__BackingField(System::Nullable_1<bool> value) ;

constexpr System::Nullable_1<bool> __get__ItemIsReference_k__BackingField() const;

 System::Nullable_1<Newtonsoft::Json::TypeNameHandling> __declspec(property(get=__get__ItemTypeNameHandling_k__BackingField, put=__set__ItemTypeNameHandling_k__BackingField))  _ItemTypeNameHandling_k__BackingField;

constexpr void __set__ItemTypeNameHandling_k__BackingField(System::Nullable_1<Newtonsoft::Json::TypeNameHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::TypeNameHandling> __get__ItemTypeNameHandling_k__BackingField() const;

 System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> __declspec(property(get=__get__ItemReferenceLoopHandling_k__BackingField, put=__set__ItemReferenceLoopHandling_k__BackingField))  _ItemReferenceLoopHandling_k__BackingField;

constexpr void __set__ItemReferenceLoopHandling_k__BackingField(System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> __get__ItemReferenceLoopHandling_k__BackingField() const;


// Properties

 Newtonsoft::Json::Serialization::JsonContract __declspec(property(get=get_PropertyContract, put=set_PropertyContract))  PropertyContract;

 ::StringW __declspec(property(get=get_PropertyName, put=set_PropertyName))  PropertyName;

 System::Type __declspec(property(get=get_DeclaringType, put=set_DeclaringType))  DeclaringType;

 System::Nullable_1<int32_t> __declspec(property(get=get_Order, put=set_Order))  Order;

 ::StringW __declspec(property(get=get_UnderlyingName, put=set_UnderlyingName))  UnderlyingName;

 Newtonsoft::Json::Serialization::IValueProvider __declspec(property(get=get_ValueProvider, put=set_ValueProvider))  ValueProvider;

 Newtonsoft::Json::Serialization::IAttributeProvider __declspec(property(get=get_AttributeProvider, put=set_AttributeProvider))  AttributeProvider;

 System::Type __declspec(property(get=get_PropertyType, put=set_PropertyType))  PropertyType;

 Newtonsoft::Json::JsonConverter __declspec(property(get=get_Converter, put=set_Converter))  Converter;

 Newtonsoft::Json::JsonConverter __declspec(property(get=get_MemberConverter, put=set_MemberConverter))  MemberConverter;

 bool __declspec(property(get=get_Ignored, put=set_Ignored))  Ignored;

 bool __declspec(property(get=get_Readable, put=set_Readable))  Readable;

 bool __declspec(property(get=get_Writable, put=set_Writable))  Writable;

 bool __declspec(property(get=get_HasMemberAttribute, put=set_HasMemberAttribute))  HasMemberAttribute;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_DefaultValue, put=set_DefaultValue))  DefaultValue;

 Newtonsoft::Json::Required __declspec(property(get=get_Required, put=set_Required))  Required;

 System::Nullable_1<bool> __declspec(property(get=get_IsReference, put=set_IsReference))  IsReference;

 System::Nullable_1<Newtonsoft::Json::NullValueHandling> __declspec(property(get=get_NullValueHandling, put=set_NullValueHandling))  NullValueHandling;

 System::Nullable_1<Newtonsoft::Json::DefaultValueHandling> __declspec(property(get=get_DefaultValueHandling, put=set_DefaultValueHandling))  DefaultValueHandling;

 System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> __declspec(property(get=get_ReferenceLoopHandling, put=set_ReferenceLoopHandling))  ReferenceLoopHandling;

 System::Nullable_1<Newtonsoft::Json::ObjectCreationHandling> __declspec(property(get=get_ObjectCreationHandling, put=set_ObjectCreationHandling))  ObjectCreationHandling;

 System::Nullable_1<Newtonsoft::Json::TypeNameHandling> __declspec(property(get=get_TypeNameHandling, put=set_TypeNameHandling))  TypeNameHandling;

 System::Predicate_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_ShouldSerialize, put=set_ShouldSerialize))  ShouldSerialize;

 System::Predicate_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_ShouldDeserialize, put=set_ShouldDeserialize))  ShouldDeserialize;

 System::Predicate_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_GetIsSpecified, put=set_GetIsSpecified))  GetIsSpecified;

 System::Action_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __declspec(property(get=get_SetIsSpecified, put=set_SetIsSpecified))  SetIsSpecified;

 Newtonsoft::Json::JsonConverter __declspec(property(get=get_ItemConverter, put=set_ItemConverter))  ItemConverter;

 System::Nullable_1<bool> __declspec(property(get=get_ItemIsReference, put=set_ItemIsReference))  ItemIsReference;

 System::Nullable_1<Newtonsoft::Json::TypeNameHandling> __declspec(property(get=get_ItemTypeNameHandling, put=set_ItemTypeNameHandling))  ItemTypeNameHandling;

 System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> __declspec(property(get=get_ItemReferenceLoopHandling, put=set_ItemReferenceLoopHandling))  ItemReferenceLoopHandling;


// Methods

/// @brief Method get_PropertyContract addr 0x2502788 size 0x8 virtual false final false
 Newtonsoft::Json::Serialization::JsonContract get_PropertyContract() ;

/// @brief Method set_PropertyContract addr 0x2502790 size 0x8 virtual false final false
 void set_PropertyContract(Newtonsoft::Json::Serialization::JsonContract value) ;

/// @brief Method get_PropertyName addr 0x2502798 size 0x8 virtual false final false
 ::StringW get_PropertyName() ;

/// @brief Method set_PropertyName addr 0x24fa32c size 0x84 virtual false final false
 void set_PropertyName(::StringW value) ;

/// @brief Method get_DeclaringType addr 0x25027a0 size 0x8 virtual false final false
 System::Type get_DeclaringType() ;

/// @brief Method set_DeclaringType addr 0x25027a8 size 0x8 virtual false final false
 void set_DeclaringType(System::Type value) ;

/// @brief Method get_Order addr 0x25027b0 size 0x8 virtual false final false
 System::Nullable_1<int32_t> get_Order() ;

/// @brief Method set_Order addr 0x25027b8 size 0x8 virtual false final false
 void set_Order(System::Nullable_1<int32_t> value) ;

/// @brief Method get_UnderlyingName addr 0x25027c0 size 0x8 virtual false final false
 ::StringW get_UnderlyingName() ;

/// @brief Method set_UnderlyingName addr 0x25027c8 size 0x8 virtual false final false
 void set_UnderlyingName(::StringW value) ;

/// @brief Method get_ValueProvider addr 0x25027d0 size 0x8 virtual false final false
 Newtonsoft::Json::Serialization::IValueProvider get_ValueProvider() ;

/// @brief Method set_ValueProvider addr 0x25027d8 size 0x8 virtual false final false
 void set_ValueProvider(Newtonsoft::Json::Serialization::IValueProvider value) ;

/// @brief Method get_AttributeProvider addr 0x25027e0 size 0x8 virtual false final false
 Newtonsoft::Json::Serialization::IAttributeProvider get_AttributeProvider() ;

/// @brief Method set_AttributeProvider addr 0x25027e8 size 0x8 virtual false final false
 void set_AttributeProvider(Newtonsoft::Json::Serialization::IAttributeProvider value) ;

/// @brief Method get_PropertyType addr 0x25027f0 size 0x8 virtual false final false
 System::Type get_PropertyType() ;

/// @brief Method set_PropertyType addr 0x24f9e70 size 0x18 virtual false final false
 void set_PropertyType(System::Type value) ;

/// @brief Method get_Converter addr 0x25027f8 size 0x8 virtual false final false
 Newtonsoft::Json::JsonConverter get_Converter() ;

/// @brief Method set_Converter addr 0x2502800 size 0x8 virtual false final false
 void set_Converter(Newtonsoft::Json::JsonConverter value) ;

/// @brief Method get_MemberConverter addr 0x2502808 size 0x8 virtual false final false
 Newtonsoft::Json::JsonConverter get_MemberConverter() ;

/// @brief Method set_MemberConverter addr 0x2502810 size 0x8 virtual false final false
 void set_MemberConverter(Newtonsoft::Json::JsonConverter value) ;

/// @brief Method get_Ignored addr 0x2502818 size 0x8 virtual false final false
 bool get_Ignored() ;

/// @brief Method set_Ignored addr 0x2502820 size 0xc virtual false final false
 void set_Ignored(bool value) ;

/// @brief Method get_Readable addr 0x250282c size 0x8 virtual false final false
 bool get_Readable() ;

/// @brief Method set_Readable addr 0x2502834 size 0xc virtual false final false
 void set_Readable(bool value) ;

/// @brief Method get_Writable addr 0x2502840 size 0x8 virtual false final false
 bool get_Writable() ;

/// @brief Method set_Writable addr 0x2502848 size 0xc virtual false final false
 void set_Writable(bool value) ;

/// @brief Method get_HasMemberAttribute addr 0x2502854 size 0x8 virtual false final false
 bool get_HasMemberAttribute() ;

/// @brief Method set_HasMemberAttribute addr 0x250285c size 0xc virtual false final false
 void set_HasMemberAttribute(bool value) ;

/// @brief Method get_DefaultValue addr 0x24fa3b0 size 0x18 virtual false final false
 ::bs_hook::Il2CppWrapperType get_DefaultValue() ;

/// @brief Method set_DefaultValue addr 0x24fa3c8 size 0x10 virtual false final false
 void set_DefaultValue(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetResolvedDefaultValue addr 0x2502868 size 0x8c virtual false final false
 ::bs_hook::Il2CppWrapperType GetResolvedDefaultValue() ;

/// @brief Method get_Required addr 0x25028f4 size 0x50 virtual false final false
 Newtonsoft::Json::Required get_Required() ;

/// @brief Method set_Required addr 0x2502944 size 0x68 virtual false final false
 void set_Required(Newtonsoft::Json::Required value) ;

/// @brief Method get_IsReference addr 0x25029ac size 0x8 virtual false final false
 System::Nullable_1<bool> get_IsReference() ;

/// @brief Method set_IsReference addr 0x25029b4 size 0x8 virtual false final false
 void set_IsReference(System::Nullable_1<bool> value) ;

/// @brief Method get_NullValueHandling addr 0x25029bc size 0x8 virtual false final false
 System::Nullable_1<Newtonsoft::Json::NullValueHandling> get_NullValueHandling() ;

/// @brief Method set_NullValueHandling addr 0x25029c4 size 0x8 virtual false final false
 void set_NullValueHandling(System::Nullable_1<Newtonsoft::Json::NullValueHandling> value) ;

/// @brief Method get_DefaultValueHandling addr 0x25029cc size 0x8 virtual false final false
 System::Nullable_1<Newtonsoft::Json::DefaultValueHandling> get_DefaultValueHandling() ;

/// @brief Method set_DefaultValueHandling addr 0x25029d4 size 0x8 virtual false final false
 void set_DefaultValueHandling(System::Nullable_1<Newtonsoft::Json::DefaultValueHandling> value) ;

/// @brief Method get_ReferenceLoopHandling addr 0x25029dc size 0x8 virtual false final false
 System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> get_ReferenceLoopHandling() ;

/// @brief Method set_ReferenceLoopHandling addr 0x25029e4 size 0x8 virtual false final false
 void set_ReferenceLoopHandling(System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> value) ;

/// @brief Method get_ObjectCreationHandling addr 0x25029ec size 0x8 virtual false final false
 System::Nullable_1<Newtonsoft::Json::ObjectCreationHandling> get_ObjectCreationHandling() ;

/// @brief Method set_ObjectCreationHandling addr 0x25029f4 size 0x8 virtual false final false
 void set_ObjectCreationHandling(System::Nullable_1<Newtonsoft::Json::ObjectCreationHandling> value) ;

/// @brief Method get_TypeNameHandling addr 0x25029fc size 0x8 virtual false final false
 System::Nullable_1<Newtonsoft::Json::TypeNameHandling> get_TypeNameHandling() ;

/// @brief Method set_TypeNameHandling addr 0x2502a04 size 0x8 virtual false final false
 void set_TypeNameHandling(System::Nullable_1<Newtonsoft::Json::TypeNameHandling> value) ;

/// @brief Method get_ShouldSerialize addr 0x2502a0c size 0x8 virtual false final false
 System::Predicate_1<::bs_hook::Il2CppWrapperType> get_ShouldSerialize() ;

/// @brief Method set_ShouldSerialize addr 0x2502a14 size 0x8 virtual false final false
 void set_ShouldSerialize(System::Predicate_1<::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method get_ShouldDeserialize addr 0x2502a1c size 0x8 virtual false final false
 System::Predicate_1<::bs_hook::Il2CppWrapperType> get_ShouldDeserialize() ;

/// @brief Method set_ShouldDeserialize addr 0x2502a24 size 0x8 virtual false final false
 void set_ShouldDeserialize(System::Predicate_1<::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method get_GetIsSpecified addr 0x2502a2c size 0x8 virtual false final false
 System::Predicate_1<::bs_hook::Il2CppWrapperType> get_GetIsSpecified() ;

/// @brief Method set_GetIsSpecified addr 0x2502a34 size 0x8 virtual false final false
 void set_GetIsSpecified(System::Predicate_1<::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method get_SetIsSpecified addr 0x2502a3c size 0x8 virtual false final false
 System::Action_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> get_SetIsSpecified() ;

/// @brief Method set_SetIsSpecified addr 0x2502a44 size 0x8 virtual false final false
 void set_SetIsSpecified(System::Action_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method ToString addr 0x2502a4c size 0x8 virtual true final false
 ::StringW ToString() ;

/// @brief Method get_ItemConverter addr 0x2502a54 size 0x8 virtual false final false
 Newtonsoft::Json::JsonConverter get_ItemConverter() ;

/// @brief Method set_ItemConverter addr 0x2502a5c size 0x8 virtual false final false
 void set_ItemConverter(Newtonsoft::Json::JsonConverter value) ;

/// @brief Method get_ItemIsReference addr 0x2502a64 size 0x8 virtual false final false
 System::Nullable_1<bool> get_ItemIsReference() ;

/// @brief Method set_ItemIsReference addr 0x2502a6c size 0x8 virtual false final false
 void set_ItemIsReference(System::Nullable_1<bool> value) ;

/// @brief Method get_ItemTypeNameHandling addr 0x2502a74 size 0x8 virtual false final false
 System::Nullable_1<Newtonsoft::Json::TypeNameHandling> get_ItemTypeNameHandling() ;

/// @brief Method set_ItemTypeNameHandling addr 0x2502a7c size 0x8 virtual false final false
 void set_ItemTypeNameHandling(System::Nullable_1<Newtonsoft::Json::TypeNameHandling> value) ;

/// @brief Method get_ItemReferenceLoopHandling addr 0x2502a84 size 0x8 virtual false final false
 System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> get_ItemReferenceLoopHandling() ;

/// @brief Method set_ItemReferenceLoopHandling addr 0x2502a8c size 0x8 virtual false final false
 void set_ItemReferenceLoopHandling(System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> value) ;

/// @brief Method WritePropertyName addr 0x2502a94 size 0x4c virtual false final false
 void WritePropertyName(Newtonsoft::Json::JsonWriter writer) ;

// Ctor Parameters []
explicit JsonProperty() ;

/// @brief Method .ctor addr 0x24f9e68 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::JsonProperty);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::JsonProperty, "Newtonsoft.Json.Serialization", "JsonProperty");
