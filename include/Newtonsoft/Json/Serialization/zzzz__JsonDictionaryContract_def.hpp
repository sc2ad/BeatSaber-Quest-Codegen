#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContainerContract_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Newtonsoft::Json::Serialization {
template<typename T>
class ObjectConstructor_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Newtonsoft::Json::Utilities {
class IWrappedDictionary;
}
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System {
class Type;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonDictionaryContract;
}
// Type: Newtonsoft.Json.Serialization::JsonDictionaryContract
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11849))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11886))
// CS Name: Newtonsoft.Json.Serialization.JsonDictionaryContract
class CORDL_TYPE JsonDictionaryContract : public Newtonsoft::Json::Serialization::JsonContainerContract {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x128};

virtual ~JsonDictionaryContract() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonDictionaryContract", modifiers: " const&", def_value: None }]
constexpr JsonDictionaryContract(JsonDictionaryContract const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonDictionaryContract", modifiers: "&&", def_value: None }]
constexpr JsonDictionaryContract(JsonDictionaryContract&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonDictionaryContract(void* ptr) noexcept : Newtonsoft::Json::Serialization::JsonContainerContract(ptr) {
}


  constexpr JsonDictionaryContract& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonDictionaryContract& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonDictionaryContract& operator=(JsonDictionaryContract&& o) noexcept = default;
  constexpr JsonDictionaryContract& operator=(JsonDictionaryContract const& o) noexcept = default;
                


// Fields

 System::Func_2<::StringW,::StringW> __declspec(property(get=__get__DictionaryKeyResolver_k__BackingField, put=__set__DictionaryKeyResolver_k__BackingField))  _DictionaryKeyResolver_k__BackingField;

constexpr void __set__DictionaryKeyResolver_k__BackingField(System::Func_2<::StringW,::StringW> value) ;

constexpr System::Func_2<::StringW,::StringW> __get__DictionaryKeyResolver_k__BackingField() const;

 System::Type __declspec(property(get=__get__DictionaryKeyType_k__BackingField, put=__set__DictionaryKeyType_k__BackingField))  _DictionaryKeyType_k__BackingField;

constexpr void __set__DictionaryKeyType_k__BackingField(System::Type value) ;

constexpr System::Type __get__DictionaryKeyType_k__BackingField() const;

 System::Type __declspec(property(get=__get__DictionaryValueType_k__BackingField, put=__set__DictionaryValueType_k__BackingField))  _DictionaryValueType_k__BackingField;

constexpr void __set__DictionaryValueType_k__BackingField(System::Type value) ;

constexpr System::Type __get__DictionaryValueType_k__BackingField() const;

 Newtonsoft::Json::Serialization::JsonContract __declspec(property(get=__get__KeyContract_k__BackingField, put=__set__KeyContract_k__BackingField))  _KeyContract_k__BackingField;

constexpr void __set__KeyContract_k__BackingField(Newtonsoft::Json::Serialization::JsonContract value) ;

constexpr Newtonsoft::Json::Serialization::JsonContract __get__KeyContract_k__BackingField() const;

 System::Type __declspec(property(get=__get__genericCollectionDefinitionType, put=__set__genericCollectionDefinitionType))  _genericCollectionDefinitionType;

constexpr void __set__genericCollectionDefinitionType(System::Type value) ;

constexpr System::Type __get__genericCollectionDefinitionType() const;

 System::Type __declspec(property(get=__get__genericWrapperType, put=__set__genericWrapperType))  _genericWrapperType;

constexpr void __set__genericWrapperType(System::Type value) ;

constexpr System::Type __get__genericWrapperType() const;

 Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__genericWrapperCreator, put=__set__genericWrapperCreator))  _genericWrapperCreator;

constexpr void __set__genericWrapperCreator(Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> __get__genericWrapperCreator() const;

 System::Func_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__genericTemporaryDictionaryCreator, put=__set__genericTemporaryDictionaryCreator))  _genericTemporaryDictionaryCreator;

constexpr void __set__genericTemporaryDictionaryCreator(System::Func_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Func_1<::bs_hook::Il2CppWrapperType> __get__genericTemporaryDictionaryCreator() const;

 bool __declspec(property(get=__get__ShouldCreateWrapper_k__BackingField, put=__set__ShouldCreateWrapper_k__BackingField))  _ShouldCreateWrapper_k__BackingField;

constexpr void __set__ShouldCreateWrapper_k__BackingField(bool value) ;

constexpr bool __get__ShouldCreateWrapper_k__BackingField() const;

 System::Reflection::ConstructorInfo __declspec(property(get=__get__parameterizedConstructor, put=__set__parameterizedConstructor))  _parameterizedConstructor;

constexpr void __set__parameterizedConstructor(System::Reflection::ConstructorInfo value) ;

constexpr System::Reflection::ConstructorInfo __get__parameterizedConstructor() const;

 Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__overrideCreator, put=__set__overrideCreator))  _overrideCreator;

constexpr void __set__overrideCreator(Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> __get__overrideCreator() const;

 Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__parameterizedCreator, put=__set__parameterizedCreator))  _parameterizedCreator;

constexpr void __set__parameterizedCreator(Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> __get__parameterizedCreator() const;

 bool __declspec(property(get=__get__HasParameterizedCreator_k__BackingField, put=__set__HasParameterizedCreator_k__BackingField))  _HasParameterizedCreator_k__BackingField;

constexpr void __set__HasParameterizedCreator_k__BackingField(bool value) ;

constexpr bool __get__HasParameterizedCreator_k__BackingField() const;


// Properties

 System::Func_2<::StringW,::StringW> __declspec(property(get=get_PropertyNameResolver, put=set_PropertyNameResolver))  PropertyNameResolver;

 System::Func_2<::StringW,::StringW> __declspec(property(get=get_DictionaryKeyResolver, put=set_DictionaryKeyResolver))  DictionaryKeyResolver;

 System::Type __declspec(property(get=get_DictionaryKeyType, put=set_DictionaryKeyType))  DictionaryKeyType;

 System::Type __declspec(property(get=get_DictionaryValueType, put=set_DictionaryValueType))  DictionaryValueType;

 Newtonsoft::Json::Serialization::JsonContract __declspec(property(get=get_KeyContract, put=set_KeyContract))  KeyContract;

 bool __declspec(property(get=get_ShouldCreateWrapper, put=set_ShouldCreateWrapper))  ShouldCreateWrapper;

 Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_ParameterizedCreator))  ParameterizedCreator;

 Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_OverrideCreator, put=set_OverrideCreator))  OverrideCreator;

 bool __declspec(property(get=get_HasParameterizedCreator, put=set_HasParameterizedCreator))  HasParameterizedCreator;

 bool __declspec(property(get=get_HasParameterizedCreatorInternal))  HasParameterizedCreatorInternal;


// Methods

/// @brief Method get_PropertyNameResolver addr 0x2502158 size 0x8 virtual false final false
 System::Func_2<::StringW,::StringW> get_PropertyNameResolver() ;

/// @brief Method set_PropertyNameResolver addr 0x2502160 size 0x8 virtual false final false
 void set_PropertyNameResolver(System::Func_2<::StringW,::StringW> value) ;

/// @brief Method get_DictionaryKeyResolver addr 0x2502168 size 0x8 virtual false final false
 System::Func_2<::StringW,::StringW> get_DictionaryKeyResolver() ;

/// @brief Method set_DictionaryKeyResolver addr 0x2502170 size 0x8 virtual false final false
 void set_DictionaryKeyResolver(System::Func_2<::StringW,::StringW> value) ;

/// @brief Method get_DictionaryKeyType addr 0x2502178 size 0x8 virtual false final false
 System::Type get_DictionaryKeyType() ;

/// @brief Method set_DictionaryKeyType addr 0x2502180 size 0x8 virtual false final false
 void set_DictionaryKeyType(System::Type value) ;

/// @brief Method get_DictionaryValueType addr 0x2502188 size 0x8 virtual false final false
 System::Type get_DictionaryValueType() ;

/// @brief Method set_DictionaryValueType addr 0x2502190 size 0x8 virtual false final false
 void set_DictionaryValueType(System::Type value) ;

/// @brief Method get_KeyContract addr 0x2502198 size 0x8 virtual false final false
 Newtonsoft::Json::Serialization::JsonContract get_KeyContract() ;

/// @brief Method set_KeyContract addr 0x25021a0 size 0x8 virtual false final false
 void set_KeyContract(Newtonsoft::Json::Serialization::JsonContract value) ;

/// @brief Method get_ShouldCreateWrapper addr 0x25021a8 size 0x8 virtual false final false
 bool get_ShouldCreateWrapper() ;

/// @brief Method set_ShouldCreateWrapper addr 0x25021b0 size 0xc virtual false final false
 void set_ShouldCreateWrapper(bool value) ;

/// @brief Method get_ParameterizedCreator addr 0x25021bc size 0x7c virtual false final false
 Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> get_ParameterizedCreator() ;

/// @brief Method get_OverrideCreator addr 0x2502238 size 0x8 virtual false final false
 Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> get_OverrideCreator() ;

/// @brief Method set_OverrideCreator addr 0x2502240 size 0x8 virtual false final false
 void set_OverrideCreator(Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method get_HasParameterizedCreator addr 0x2502248 size 0x8 virtual false final false
 bool get_HasParameterizedCreator() ;

/// @brief Method set_HasParameterizedCreator addr 0x2502250 size 0xc virtual false final false
 void set_HasParameterizedCreator(bool value) ;

/// @brief Method get_HasParameterizedCreatorInternal addr 0x250225c size 0x28 virtual false final false
 bool get_HasParameterizedCreatorInternal() ;

// Ctor Parameters [CppParam { name: "underlyingType", ty: "System::Type", modifiers: "", def_value: None }]
explicit JsonDictionaryContract(System::Type underlyingType) ;

/// @brief Method .ctor addr 0x24fbd1c size 0x598 virtual false final false
 void _ctor(System::Type underlyingType) ;

/// @brief Method CreateWrapper addr 0x2502284 size 0x288 virtual false final false
 Newtonsoft::Json::Utilities::IWrappedDictionary CreateWrapper(::bs_hook::Il2CppWrapperType dictionary) ;

/// @brief Method CreateTemporaryDictionary addr 0x250250c size 0x27c virtual false final false
 System::Collections::IDictionary CreateTemporaryDictionary() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::JsonDictionaryContract);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::JsonDictionaryContract, "Newtonsoft.Json.Serialization", "JsonDictionaryContract");
