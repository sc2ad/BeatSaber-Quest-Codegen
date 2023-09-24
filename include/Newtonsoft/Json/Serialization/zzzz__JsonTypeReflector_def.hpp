#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Newtonsoft::Json::Utilities {
template<typename TKey,typename TValue>
class ThreadSafeStore_2;
}
namespace Newtonsoft::Json::Utilities {
class ReflectionDelegateFactory;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace System {
class Type;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace System::Runtime::Serialization {
class DataContractAttribute;
}
namespace System::Runtime::Serialization {
class DataMemberAttribute;
}
namespace Newtonsoft::Json {
struct MemberSerialization;
}
namespace Newtonsoft::Json::Utilities {
class ReflectionObject;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Newtonsoft::Json::Serialization {
class Newtonsoft__Json__Serialization__JsonTypeReflector____c__DisplayClass18_0;
}
namespace System::Reflection {
class MemberInfo;
}
namespace Newtonsoft::Json::Serialization {
class Newtonsoft__Json__Serialization__JsonTypeReflector____c;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonTypeReflector;
}
namespace Newtonsoft::Json::Serialization {
class Newtonsoft__Json__Serialization__JsonTypeReflector____c;
}
namespace Newtonsoft::Json::Serialization {
class Newtonsoft__Json__Serialization__JsonTypeReflector____c__DisplayClass18_0;
}
// Type: ::<>c__DisplayClass18_0
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11901))
// CS Name: Newtonsoft.Json.Serialization.JsonTypeReflector::<>c__DisplayClass18_0
class CORDL_TYPE Newtonsoft__Json__Serialization__JsonTypeReflector____c__DisplayClass18_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Newtonsoft__Json__Serialization__JsonTypeReflector____c__DisplayClass18_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Serialization__JsonTypeReflector____c__DisplayClass18_0", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Serialization__JsonTypeReflector____c__DisplayClass18_0(Newtonsoft__Json__Serialization__JsonTypeReflector____c__DisplayClass18_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Serialization__JsonTypeReflector____c__DisplayClass18_0", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Serialization__JsonTypeReflector____c__DisplayClass18_0(Newtonsoft__Json__Serialization__JsonTypeReflector____c__DisplayClass18_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Serialization__JsonTypeReflector____c__DisplayClass18_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Serialization__JsonTypeReflector____c__DisplayClass18_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Serialization__JsonTypeReflector____c__DisplayClass18_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Serialization__JsonTypeReflector____c__DisplayClass18_0& operator=(Newtonsoft__Json__Serialization__JsonTypeReflector____c__DisplayClass18_0&& o) noexcept = default;
  constexpr Newtonsoft__Json__Serialization__JsonTypeReflector____c__DisplayClass18_0& operator=(Newtonsoft__Json__Serialization__JsonTypeReflector____c__DisplayClass18_0 const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get_converterType, put=__set_converterType))  converterType;

constexpr void __set_converterType(System::Type value) ;

constexpr System::Type __get_converterType() const;

 System::Func_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_defaultConstructor, put=__set_defaultConstructor))  defaultConstructor;

constexpr void __set_defaultConstructor(System::Func_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Func_1<::bs_hook::Il2CppWrapperType> __get_defaultConstructor() const;


// Methods

static Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonTypeReflector____c__DisplayClass18_0 New_ctor() ;

/// @brief Method .ctor addr 0x2516840 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetJsonConverterCreator>b__0 addr 0x2517050 size 0x49c virtual false final false
 Newtonsoft::Json::JsonConverter _GetJsonConverterCreator_b__0(::ArrayW<::bs_hook::Il2CppWrapperType> parameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
// Type: ::<>c
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11902))
// CS Name: Newtonsoft.Json.Serialization.JsonTypeReflector::<>c
class CORDL_TYPE Newtonsoft__Json__Serialization__JsonTypeReflector____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Newtonsoft__Json__Serialization__JsonTypeReflector____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Serialization__JsonTypeReflector____c", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Serialization__JsonTypeReflector____c(Newtonsoft__Json__Serialization__JsonTypeReflector____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Serialization__JsonTypeReflector____c", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Serialization__JsonTypeReflector____c(Newtonsoft__Json__Serialization__JsonTypeReflector____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Serialization__JsonTypeReflector____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Serialization__JsonTypeReflector____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Serialization__JsonTypeReflector____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Serialization__JsonTypeReflector____c& operator=(Newtonsoft__Json__Serialization__JsonTypeReflector____c&& o) noexcept = default;
  constexpr Newtonsoft__Json__Serialization__JsonTypeReflector____c& operator=(Newtonsoft__Json__Serialization__JsonTypeReflector____c const& o) noexcept = default;
                


// Fields

static Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonTypeReflector____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonTypeReflector____c value) ;

static Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonTypeReflector____c __get___9() ;

static System::Func_2<::bs_hook::Il2CppWrapperType,System::Type> __declspec(property(get=__get___9__18_1, put=__set___9__18_1))  __9__18_1;

static void __set___9__18_1(System::Func_2<::bs_hook::Il2CppWrapperType,System::Type> value) ;

static System::Func_2<::bs_hook::Il2CppWrapperType,System::Type> __get___9__18_1() ;


// Methods

static Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonTypeReflector____c New_ctor() ;

/// @brief Method .ctor addr 0x2517550 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetJsonConverterCreator>b__18_1 addr 0x2517558 size 0x18 virtual false final false
 System::Type _GetJsonConverterCreator_b__18_1(::bs_hook::Il2CppWrapperType param) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
// Type: Newtonsoft.Json.Serialization::JsonTypeReflector
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11903))
// CS Name: Newtonsoft.Json.Serialization.JsonTypeReflector
class CORDL_TYPE JsonTypeReflector : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonTypeReflector____c;

using __c__DisplayClass18_0 = Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonTypeReflector____c__DisplayClass18_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~JsonTypeReflector() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonTypeReflector", modifiers: " const&", def_value: None }]
constexpr JsonTypeReflector(JsonTypeReflector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonTypeReflector", modifiers: "&&", def_value: None }]
constexpr JsonTypeReflector(JsonTypeReflector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonTypeReflector(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JsonTypeReflector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonTypeReflector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonTypeReflector& operator=(JsonTypeReflector&& o) noexcept = default;
  constexpr JsonTypeReflector& operator=(JsonTypeReflector const& o) noexcept = default;
                


// Fields

static System::Nullable_1<bool> __declspec(property(get=__get__dynamicCodeGeneration, put=__set__dynamicCodeGeneration))  _dynamicCodeGeneration;

static void __set__dynamicCodeGeneration(System::Nullable_1<bool> value) ;

static System::Nullable_1<bool> __get__dynamicCodeGeneration() ;

static System::Nullable_1<bool> __declspec(property(get=__get__fullyTrusted, put=__set__fullyTrusted))  _fullyTrusted;

static void __set__fullyTrusted(System::Nullable_1<bool> value) ;

static System::Nullable_1<bool> __get__fullyTrusted() ;

/// @brief Field IdPropertyName offset 0
static constexpr ::ConstString  IdPropertyName{u"$id"};

/// @brief Field RefPropertyName offset 0
static constexpr ::ConstString  RefPropertyName{u"$ref"};

/// @brief Field TypePropertyName offset 0
static constexpr ::ConstString  TypePropertyName{u"$type"};

/// @brief Field ValuePropertyName offset 0
static constexpr ::ConstString  ValuePropertyName{u"$value"};

/// @brief Field ArrayValuesPropertyName offset 0
static constexpr ::ConstString  ArrayValuesPropertyName{u"$values"};

/// @brief Field ShouldSerializePrefix offset 0
static constexpr ::ConstString  ShouldSerializePrefix{u"ShouldSerialize"};

/// @brief Field SpecifiedPostfix offset 0
static constexpr ::ConstString  SpecifiedPostfix{u"Specified"};

static Newtonsoft::Json::Utilities::ThreadSafeStore_2<System::Type,System::Func_2<::ArrayW<::bs_hook::Il2CppWrapperType>,Newtonsoft::Json::JsonConverter>> __declspec(property(get=__get_JsonConverterCreatorCache, put=__set_JsonConverterCreatorCache))  JsonConverterCreatorCache;

static void __set_JsonConverterCreatorCache(Newtonsoft::Json::Utilities::ThreadSafeStore_2<System::Type,System::Func_2<::ArrayW<::bs_hook::Il2CppWrapperType>,Newtonsoft::Json::JsonConverter>> value) ;

static Newtonsoft::Json::Utilities::ThreadSafeStore_2<System::Type,System::Func_2<::ArrayW<::bs_hook::Il2CppWrapperType>,Newtonsoft::Json::JsonConverter>> __get_JsonConverterCreatorCache() ;

static Newtonsoft::Json::Utilities::ThreadSafeStore_2<System::Type,System::Type> __declspec(property(get=__get_AssociatedMetadataTypesCache, put=__set_AssociatedMetadataTypesCache))  AssociatedMetadataTypesCache;

static void __set_AssociatedMetadataTypesCache(Newtonsoft::Json::Utilities::ThreadSafeStore_2<System::Type,System::Type> value) ;

static Newtonsoft::Json::Utilities::ThreadSafeStore_2<System::Type,System::Type> __get_AssociatedMetadataTypesCache() ;

static Newtonsoft::Json::Utilities::ReflectionObject __declspec(property(get=__get__metadataTypeAttributeReflectionObject, put=__set__metadataTypeAttributeReflectionObject))  _metadataTypeAttributeReflectionObject;

static void __set__metadataTypeAttributeReflectionObject(Newtonsoft::Json::Utilities::ReflectionObject value) ;

static Newtonsoft::Json::Utilities::ReflectionObject __get__metadataTypeAttributeReflectionObject() ;


// Properties

static bool __declspec(property(get=get_DynamicCodeGeneration))  DynamicCodeGeneration;

static bool __declspec(property(get=get_FullyTrusted))  FullyTrusted;

static Newtonsoft::Json::Utilities::ReflectionDelegateFactory __declspec(property(get=get_ReflectionDelegateFactory))  ReflectionDelegateFactory;


// Methods

/// @brief Method GetCachedAttribute addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T GetCachedAttribute(::bs_hook::Il2CppWrapperType attributeProvider) ;

/// @brief Method GetDataContractAttribute addr 0x2516184 size 0x94 virtual false final false
static System::Runtime::Serialization::DataContractAttribute GetDataContractAttribute(System::Type type) ;

/// @brief Method GetDataMemberAttribute addr 0x2516218 size 0x240 virtual false final false
static System::Runtime::Serialization::DataMemberAttribute GetDataMemberAttribute(System::Reflection::MemberInfo memberInfo) ;

/// @brief Method GetObjectMemberSerialization addr 0x2516458 size 0xf0 virtual false final false
static Newtonsoft::Json::MemberSerialization GetObjectMemberSerialization(System::Type objectType, bool ignoreSerializableAttribute) ;

/// @brief Method GetJsonConverter addr 0x2516548 size 0xe4 virtual false final false
static Newtonsoft::Json::JsonConverter GetJsonConverter(::bs_hook::Il2CppWrapperType attributeProvider) ;

/// @brief Method CreateJsonConverterInstance addr 0x251662c size 0xa8 virtual false final false
static Newtonsoft::Json::JsonConverter CreateJsonConverterInstance(System::Type converterType, ::ArrayW<::bs_hook::Il2CppWrapperType> converterArgs) ;

/// @brief Method GetJsonConverterCreator addr 0x25166d4 size 0x16c virtual false final false
static System::Func_2<::ArrayW<::bs_hook::Il2CppWrapperType>,Newtonsoft::Json::JsonConverter> GetJsonConverterCreator(System::Type converterType) ;

/// @brief Method GetTypeConverter addr 0x25168d0 size 0x58 virtual false final false
static System::ComponentModel::TypeConverter GetTypeConverter(System::Type type) ;

/// @brief Method GetAssociatedMetadataType addr 0x2516928 size 0x80 virtual false final false
static System::Type GetAssociatedMetadataType(System::Type type) ;

/// @brief Method GetAssociateMetadataTypeFromAttribute addr 0x25169a8 size 0x268 virtual false final false
static System::Type GetAssociateMetadataTypeFromAttribute(System::Type type) ;

/// @brief Method GetAttribute addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T GetAttribute(System::Type type) ;

/// @brief Method GetAttribute addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T GetAttribute(System::Reflection::MemberInfo memberInfo) ;

/// @brief Method GetAttribute addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T GetAttribute(::bs_hook::Il2CppWrapperType provider) ;

/// @brief Method get_DynamicCodeGeneration addr 0x2516c10 size 0x2c8 virtual false final false
static bool get_DynamicCodeGeneration() ;

/// @brief Method get_FullyTrusted addr 0x2515560 size 0x1dc virtual false final false
static bool get_FullyTrusted() ;

/// @brief Method get_ReflectionDelegateFactory addr 0x2516848 size 0x88 virtual false final false
static Newtonsoft::Json::Utilities::ReflectionDelegateFactory get_ReflectionDelegateFactory() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::JsonTypeReflector);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::JsonTypeReflector, "Newtonsoft.Json.Serialization", "JsonTypeReflector");
NEED_NO_BOX(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonTypeReflector____c);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonTypeReflector____c, "Newtonsoft.Json.Serialization", "JsonTypeReflector/<>c");
NEED_NO_BOX(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonTypeReflector____c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonTypeReflector____c__DisplayClass18_0, "Newtonsoft.Json.Serialization", "JsonTypeReflector/<>c__DisplayClass18_0");
