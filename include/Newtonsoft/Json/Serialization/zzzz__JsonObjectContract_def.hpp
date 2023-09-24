#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContainerContract_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Reflection {
class ConstructorInfo;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Newtonsoft::Json {
struct MemberSerialization;
}
namespace Newtonsoft::Json::Serialization {
class ExtensionDataGetter;
}
namespace Newtonsoft::Json {
struct Required;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json::Serialization {
class JsonPropertyCollection;
}
namespace Newtonsoft::Json::Serialization {
template<typename T>
class ObjectConstructor_1;
}
namespace Newtonsoft::Json::Serialization {
class ExtensionDataSetter;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonObjectContract;
}
// Type: Newtonsoft.Json.Serialization::JsonObjectContract
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11849))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11890))
// CS Name: Newtonsoft.Json.Serialization.JsonObjectContract
class CORDL_TYPE JsonObjectContract : public Newtonsoft::Json::Serialization::JsonContainerContract {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x118};

virtual ~JsonObjectContract() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonObjectContract", modifiers: " const&", def_value: None }]
constexpr JsonObjectContract(JsonObjectContract const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonObjectContract", modifiers: "&&", def_value: None }]
constexpr JsonObjectContract(JsonObjectContract&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonObjectContract(void* ptr) noexcept : Newtonsoft::Json::Serialization::JsonContainerContract(ptr) {
}


  constexpr JsonObjectContract& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonObjectContract& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonObjectContract& operator=(JsonObjectContract&& o) noexcept = default;
  constexpr JsonObjectContract& operator=(JsonObjectContract const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::MemberSerialization __declspec(property(get=__get__MemberSerialization_k__BackingField, put=__set__MemberSerialization_k__BackingField))  _MemberSerialization_k__BackingField;

constexpr void __set__MemberSerialization_k__BackingField(Newtonsoft::Json::MemberSerialization value) ;

constexpr Newtonsoft::Json::MemberSerialization __get__MemberSerialization_k__BackingField() const;

 System::Nullable_1<Newtonsoft::Json::Required> __declspec(property(get=__get__ItemRequired_k__BackingField, put=__set__ItemRequired_k__BackingField))  _ItemRequired_k__BackingField;

constexpr void __set__ItemRequired_k__BackingField(System::Nullable_1<Newtonsoft::Json::Required> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::Required> __get__ItemRequired_k__BackingField() const;

 Newtonsoft::Json::Serialization::JsonPropertyCollection __declspec(property(get=__get__Properties_k__BackingField, put=__set__Properties_k__BackingField))  _Properties_k__BackingField;

constexpr void __set__Properties_k__BackingField(Newtonsoft::Json::Serialization::JsonPropertyCollection value) ;

constexpr Newtonsoft::Json::Serialization::JsonPropertyCollection __get__Properties_k__BackingField() const;

 Newtonsoft::Json::Serialization::ExtensionDataSetter __declspec(property(get=__get__ExtensionDataSetter_k__BackingField, put=__set__ExtensionDataSetter_k__BackingField))  _ExtensionDataSetter_k__BackingField;

constexpr void __set__ExtensionDataSetter_k__BackingField(Newtonsoft::Json::Serialization::ExtensionDataSetter value) ;

constexpr Newtonsoft::Json::Serialization::ExtensionDataSetter __get__ExtensionDataSetter_k__BackingField() const;

 Newtonsoft::Json::Serialization::ExtensionDataGetter __declspec(property(get=__get__ExtensionDataGetter_k__BackingField, put=__set__ExtensionDataGetter_k__BackingField))  _ExtensionDataGetter_k__BackingField;

constexpr void __set__ExtensionDataGetter_k__BackingField(Newtonsoft::Json::Serialization::ExtensionDataGetter value) ;

constexpr Newtonsoft::Json::Serialization::ExtensionDataGetter __get__ExtensionDataGetter_k__BackingField() const;

 bool __declspec(property(get=__get_ExtensionDataIsJToken, put=__set_ExtensionDataIsJToken))  ExtensionDataIsJToken;

constexpr void __set_ExtensionDataIsJToken(bool value) ;

constexpr bool __get_ExtensionDataIsJToken() const;

 System::Nullable_1<bool> __declspec(property(get=__get__hasRequiredOrDefaultValueProperties, put=__set__hasRequiredOrDefaultValueProperties))  _hasRequiredOrDefaultValueProperties;

constexpr void __set__hasRequiredOrDefaultValueProperties(System::Nullable_1<bool> value) ;

constexpr System::Nullable_1<bool> __get__hasRequiredOrDefaultValueProperties() const;

 System::Reflection::ConstructorInfo __declspec(property(get=__get__parametrizedConstructor, put=__set__parametrizedConstructor))  _parametrizedConstructor;

constexpr void __set__parametrizedConstructor(System::Reflection::ConstructorInfo value) ;

constexpr System::Reflection::ConstructorInfo __get__parametrizedConstructor() const;

 System::Reflection::ConstructorInfo __declspec(property(get=__get__overrideConstructor, put=__set__overrideConstructor))  _overrideConstructor;

constexpr void __set__overrideConstructor(System::Reflection::ConstructorInfo value) ;

constexpr System::Reflection::ConstructorInfo __get__overrideConstructor() const;

 Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__overrideCreator, put=__set__overrideCreator))  _overrideCreator;

constexpr void __set__overrideCreator(Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> __get__overrideCreator() const;

 Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__parameterizedCreator, put=__set__parameterizedCreator))  _parameterizedCreator;

constexpr void __set__parameterizedCreator(Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> __get__parameterizedCreator() const;

 Newtonsoft::Json::Serialization::JsonPropertyCollection __declspec(property(get=__get__creatorParameters, put=__set__creatorParameters))  _creatorParameters;

constexpr void __set__creatorParameters(Newtonsoft::Json::Serialization::JsonPropertyCollection value) ;

constexpr Newtonsoft::Json::Serialization::JsonPropertyCollection __get__creatorParameters() const;

 System::Type __declspec(property(get=__get__extensionDataValueType, put=__set__extensionDataValueType))  _extensionDataValueType;

constexpr void __set__extensionDataValueType(System::Type value) ;

constexpr System::Type __get__extensionDataValueType() const;


// Properties

 Newtonsoft::Json::MemberSerialization __declspec(property(get=get_MemberSerialization, put=set_MemberSerialization))  MemberSerialization;

 System::Nullable_1<Newtonsoft::Json::Required> __declspec(property(get=get_ItemRequired, put=set_ItemRequired))  ItemRequired;

 Newtonsoft::Json::Serialization::JsonPropertyCollection __declspec(property(get=get_Properties, put=set_Properties))  Properties;

 Newtonsoft::Json::Serialization::JsonPropertyCollection __declspec(property(get=get_ConstructorParameters))  ConstructorParameters;

 Newtonsoft::Json::Serialization::JsonPropertyCollection __declspec(property(get=get_CreatorParameters))  CreatorParameters;

 System::Reflection::ConstructorInfo __declspec(property(get=get_OverrideConstructor, put=set_OverrideConstructor))  OverrideConstructor;

 System::Reflection::ConstructorInfo __declspec(property(get=get_ParametrizedConstructor, put=set_ParametrizedConstructor))  ParametrizedConstructor;

 Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_OverrideCreator, put=set_OverrideCreator))  OverrideCreator;

 Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_ParameterizedCreator))  ParameterizedCreator;

 Newtonsoft::Json::Serialization::ExtensionDataSetter __declspec(property(get=get_ExtensionDataSetter, put=set_ExtensionDataSetter))  ExtensionDataSetter;

 Newtonsoft::Json::Serialization::ExtensionDataGetter __declspec(property(get=get_ExtensionDataGetter, put=set_ExtensionDataGetter))  ExtensionDataGetter;

 System::Type __declspec(property(get=get_ExtensionDataValueType, put=set_ExtensionDataValueType))  ExtensionDataValueType;

 bool __declspec(property(get=get_HasRequiredOrDefaultValueProperties))  HasRequiredOrDefaultValueProperties;


// Methods

/// @brief Method get_MemberSerialization addr 0x2502cc0 size 0x8 virtual false final false
 Newtonsoft::Json::MemberSerialization get_MemberSerialization() ;

/// @brief Method set_MemberSerialization addr 0x2502cc8 size 0x8 virtual false final false
 void set_MemberSerialization(Newtonsoft::Json::MemberSerialization value) ;

/// @brief Method get_ItemRequired addr 0x2502cd0 size 0x8 virtual false final false
 System::Nullable_1<Newtonsoft::Json::Required> get_ItemRequired() ;

/// @brief Method set_ItemRequired addr 0x2502cd8 size 0x8 virtual false final false
 void set_ItemRequired(System::Nullable_1<Newtonsoft::Json::Required> value) ;

/// @brief Method get_Properties addr 0x2502ce0 size 0x8 virtual false final false
 Newtonsoft::Json::Serialization::JsonPropertyCollection get_Properties() ;

/// @brief Method set_Properties addr 0x2502ce8 size 0x8 virtual false final false
 void set_Properties(Newtonsoft::Json::Serialization::JsonPropertyCollection value) ;

/// @brief Method get_ConstructorParameters addr 0x2502cf0 size 0x4 virtual false final false
 Newtonsoft::Json::Serialization::JsonPropertyCollection get_ConstructorParameters() ;

/// @brief Method get_CreatorParameters addr 0x24f869c size 0x70 virtual false final false
 Newtonsoft::Json::Serialization::JsonPropertyCollection get_CreatorParameters() ;

/// @brief Method get_OverrideConstructor addr 0x2502cf4 size 0x8 virtual false final false
 System::Reflection::ConstructorInfo get_OverrideConstructor() ;

/// @brief Method set_OverrideConstructor addr 0x24f8614 size 0x88 virtual false final false
 void set_OverrideConstructor(System::Reflection::ConstructorInfo value) ;

/// @brief Method get_ParametrizedConstructor addr 0x2502cfc size 0x8 virtual false final false
 System::Reflection::ConstructorInfo get_ParametrizedConstructor() ;

/// @brief Method set_ParametrizedConstructor addr 0x24f886c size 0x88 virtual false final false
 void set_ParametrizedConstructor(System::Reflection::ConstructorInfo value) ;

/// @brief Method get_OverrideCreator addr 0x2502d04 size 0x8 virtual false final false
 Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> get_OverrideCreator() ;

/// @brief Method set_OverrideCreator addr 0x2502d0c size 0x8 virtual false final false
 void set_OverrideCreator(Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method get_ParameterizedCreator addr 0x2502d14 size 0x8 virtual false final false
 Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> get_ParameterizedCreator() ;

/// @brief Method get_ExtensionDataSetter addr 0x2502d1c size 0x8 virtual false final false
 Newtonsoft::Json::Serialization::ExtensionDataSetter get_ExtensionDataSetter() ;

/// @brief Method set_ExtensionDataSetter addr 0x2502d24 size 0x8 virtual false final false
 void set_ExtensionDataSetter(Newtonsoft::Json::Serialization::ExtensionDataSetter value) ;

/// @brief Method get_ExtensionDataGetter addr 0x2502d2c size 0x8 virtual false final false
 Newtonsoft::Json::Serialization::ExtensionDataGetter get_ExtensionDataGetter() ;

/// @brief Method set_ExtensionDataGetter addr 0x2502d34 size 0x8 virtual false final false
 void set_ExtensionDataGetter(Newtonsoft::Json::Serialization::ExtensionDataGetter value) ;

/// @brief Method get_ExtensionDataValueType addr 0x2502d3c size 0x8 virtual false final false
 System::Type get_ExtensionDataValueType() ;

/// @brief Method set_ExtensionDataValueType addr 0x24f95b8 size 0xac virtual false final false
 void set_ExtensionDataValueType(System::Type value) ;

/// @brief Method get_HasRequiredOrDefaultValueProperties addr 0x2502d44 size 0x3f4 virtual false final false
 bool get_HasRequiredOrDefaultValueProperties() ;

static Newtonsoft::Json::Serialization::JsonObjectContract New_ctor(System::Type underlyingType) ;

/// @brief Method .ctor addr 0x24f7ef0 size 0x88 virtual false final false
 void _ctor(System::Type underlyingType) ;

/// @brief Method GetUninitializedObject addr 0x2503138 size 0x10c virtual false final false
 ::bs_hook::Il2CppWrapperType GetUninitializedObject() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::JsonObjectContract);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::JsonObjectContract, "Newtonsoft.Json.Serialization", "JsonObjectContract");
