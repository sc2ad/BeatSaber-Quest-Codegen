#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContainerContract_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Reflection {
class ConstructorInfo;
}
namespace System {
class Type;
}
namespace System::Collections {
class IList;
}
namespace Newtonsoft::Json::Utilities {
class IWrappedCollection;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace Newtonsoft::Json::Serialization {
template<typename T>
class ObjectConstructor_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonArrayContract;
}
// Type: Newtonsoft.Json.Serialization::JsonArrayContract
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11849))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11877))
// CS Name: Newtonsoft.Json.Serialization.JsonArrayContract
class CORDL_TYPE JsonArrayContract : public ::Newtonsoft::Json::Serialization::JsonContainerContract {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x118};

virtual ~JsonArrayContract() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonArrayContract", modifiers: " const&", def_value: None }]
constexpr JsonArrayContract(JsonArrayContract const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonArrayContract", modifiers: "&&", def_value: None }]
constexpr JsonArrayContract(JsonArrayContract&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonArrayContract(void* ptr) noexcept : ::Newtonsoft::Json::Serialization::JsonContainerContract(ptr) {
}


  constexpr JsonArrayContract& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonArrayContract& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonArrayContract& operator=(JsonArrayContract&& o) noexcept = default;
  constexpr JsonArrayContract& operator=(JsonArrayContract const& o) noexcept = default;
                


// Fields

 ::System::Type __declspec(property(get=__get__CollectionItemType_k__BackingField, put=__set__CollectionItemType_k__BackingField))  _CollectionItemType_k__BackingField;

constexpr void __set__CollectionItemType_k__BackingField(::System::Type value) ;

constexpr ::System::Type __get__CollectionItemType_k__BackingField() const;

 bool __declspec(property(get=__get__IsMultidimensionalArray_k__BackingField, put=__set__IsMultidimensionalArray_k__BackingField))  _IsMultidimensionalArray_k__BackingField;

constexpr void __set__IsMultidimensionalArray_k__BackingField(bool value) ;

constexpr bool __get__IsMultidimensionalArray_k__BackingField() const;

 ::System::Type __declspec(property(get=__get__genericCollectionDefinitionType, put=__set__genericCollectionDefinitionType))  _genericCollectionDefinitionType;

constexpr void __set__genericCollectionDefinitionType(::System::Type value) ;

constexpr ::System::Type __get__genericCollectionDefinitionType() const;

 ::System::Type __declspec(property(get=__get__genericWrapperType, put=__set__genericWrapperType))  _genericWrapperType;

constexpr void __set__genericWrapperType(::System::Type value) ;

constexpr ::System::Type __get__genericWrapperType() const;

 ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__genericWrapperCreator, put=__set__genericWrapperCreator))  _genericWrapperCreator;

constexpr void __set__genericWrapperCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> __get__genericWrapperCreator() const;

 ::System::Func_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__genericTemporaryCollectionCreator, put=__set__genericTemporaryCollectionCreator))  _genericTemporaryCollectionCreator;

constexpr void __set__genericTemporaryCollectionCreator(::System::Func_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::System::Func_1<::bs_hook::Il2CppWrapperType> __get__genericTemporaryCollectionCreator() const;

 bool __declspec(property(get=__get__IsArray_k__BackingField, put=__set__IsArray_k__BackingField))  _IsArray_k__BackingField;

constexpr void __set__IsArray_k__BackingField(bool value) ;

constexpr bool __get__IsArray_k__BackingField() const;

 bool __declspec(property(get=__get__ShouldCreateWrapper_k__BackingField, put=__set__ShouldCreateWrapper_k__BackingField))  _ShouldCreateWrapper_k__BackingField;

constexpr void __set__ShouldCreateWrapper_k__BackingField(bool value) ;

constexpr bool __get__ShouldCreateWrapper_k__BackingField() const;

 bool __declspec(property(get=__get__CanDeserialize_k__BackingField, put=__set__CanDeserialize_k__BackingField))  _CanDeserialize_k__BackingField;

constexpr void __set__CanDeserialize_k__BackingField(bool value) ;

constexpr bool __get__CanDeserialize_k__BackingField() const;

 ::System::Reflection::ConstructorInfo __declspec(property(get=__get__parameterizedConstructor, put=__set__parameterizedConstructor))  _parameterizedConstructor;

constexpr void __set__parameterizedConstructor(::System::Reflection::ConstructorInfo value) ;

constexpr ::System::Reflection::ConstructorInfo __get__parameterizedConstructor() const;

 ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__parameterizedCreator, put=__set__parameterizedCreator))  _parameterizedCreator;

constexpr void __set__parameterizedCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> __get__parameterizedCreator() const;

 ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__overrideCreator, put=__set__overrideCreator))  _overrideCreator;

constexpr void __set__overrideCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> __get__overrideCreator() const;

 bool __declspec(property(get=__get__HasParameterizedCreator_k__BackingField, put=__set__HasParameterizedCreator_k__BackingField))  _HasParameterizedCreator_k__BackingField;

constexpr void __set__HasParameterizedCreator_k__BackingField(bool value) ;

constexpr bool __get__HasParameterizedCreator_k__BackingField() const;


// Properties

 ::System::Type __declspec(property(get=get_CollectionItemType, put=set_CollectionItemType))  CollectionItemType;

 bool __declspec(property(get=get_IsMultidimensionalArray, put=set_IsMultidimensionalArray))  IsMultidimensionalArray;

 bool __declspec(property(get=get_IsArray, put=set_IsArray))  IsArray;

 bool __declspec(property(get=get_ShouldCreateWrapper, put=set_ShouldCreateWrapper))  ShouldCreateWrapper;

 bool __declspec(property(get=get_CanDeserialize, put=set_CanDeserialize))  CanDeserialize;

 ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_ParameterizedCreator))  ParameterizedCreator;

 ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_OverrideCreator, put=set_OverrideCreator))  OverrideCreator;

 bool __declspec(property(get=get_HasParameterizedCreator, put=set_HasParameterizedCreator))  HasParameterizedCreator;

 bool __declspec(property(get=get_HasParameterizedCreatorInternal))  HasParameterizedCreatorInternal;


// Methods

/// @brief Method get_CollectionItemType addr 0x24ff914 size 0x8 virtual false final false
 ::System::Type get_CollectionItemType() ;

/// @brief Method set_CollectionItemType addr 0x24ff91c size 0x8 virtual false final false
 void set_CollectionItemType(::System::Type value) ;

/// @brief Method get_IsMultidimensionalArray addr 0x24ff924 size 0x8 virtual false final false
 bool get_IsMultidimensionalArray() ;

/// @brief Method set_IsMultidimensionalArray addr 0x24ff92c size 0xc virtual false final false
 void set_IsMultidimensionalArray(bool value) ;

/// @brief Method get_IsArray addr 0x24ff938 size 0x8 virtual false final false
 bool get_IsArray() ;

/// @brief Method set_IsArray addr 0x24ff940 size 0xc virtual false final false
 void set_IsArray(bool value) ;

/// @brief Method get_ShouldCreateWrapper addr 0x24ff94c size 0x8 virtual false final false
 bool get_ShouldCreateWrapper() ;

/// @brief Method set_ShouldCreateWrapper addr 0x24ff954 size 0xc virtual false final false
 void set_ShouldCreateWrapper(bool value) ;

/// @brief Method get_CanDeserialize addr 0x24ff960 size 0x8 virtual false final false
 bool get_CanDeserialize() ;

/// @brief Method set_CanDeserialize addr 0x24ff968 size 0xc virtual false final false
 void set_CanDeserialize(bool value) ;

/// @brief Method get_ParameterizedCreator addr 0x24ff974 size 0x7c virtual false final false
 ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> get_ParameterizedCreator() ;

/// @brief Method get_OverrideCreator addr 0x24ff9f0 size 0x8 virtual false final false
 ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> get_OverrideCreator() ;

/// @brief Method set_OverrideCreator addr 0x24fce28 size 0x10 virtual false final false
 void set_OverrideCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method get_HasParameterizedCreator addr 0x24ff9f8 size 0x8 virtual false final false
 bool get_HasParameterizedCreator() ;

/// @brief Method set_HasParameterizedCreator addr 0x24ffa00 size 0xc virtual false final false
 void set_HasParameterizedCreator(bool value) ;

/// @brief Method get_HasParameterizedCreatorInternal addr 0x24ffa0c size 0x28 virtual false final false
 bool get_HasParameterizedCreatorInternal() ;

// Ctor Parameters [CppParam { name: "underlyingType", ty: "::System::Type", modifiers: "", def_value: None }]
explicit JsonArrayContract(::System::Type underlyingType) ;

/// @brief Method .ctor addr 0x24fc590 size 0x898 virtual false final false
 void _ctor(::System::Type underlyingType) ;

/// @brief Method CreateWrapper addr 0x24ffa90 size 0x3c0 virtual false final false
 ::Newtonsoft::Json::Utilities::IWrappedCollection CreateWrapper(::bs_hook::Il2CppWrapperType list) ;

/// @brief Method CreateTemporaryCollection addr 0x24ffe50 size 0x22c virtual false final false
 ::System::Collections::IList CreateTemporaryCollection() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonArrayContract);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonArrayContract, "Newtonsoft.Json.Serialization", "JsonArrayContract");
